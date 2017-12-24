import posixpath
import os
from posixpath import basename
from cmsis_svd.parser import SVDParser
import site
import json
import re
import FormattingTools as Ft
import argparse
import sys

def formatIoPorts(input):
    if ',' in input:
        return input.split(',')
    elif '-' in input:
        m = input.split('-')
        if m[1].isdigit():
            return range(int(m[1]),int(m[2]))
        elif len(m[1]) == 1:
            return [chr(i) for i in range(ord(m[0][0]),ord(m[1][0])+1)]
    else:
        return [input]

def parseIo(extention,device,path):
    outFile = open(posixpath.join(path,"Io.hpp"),'w',encoding='utf-8')
    outFile.write('#pragma once\n#include <Io/Io.hpp>\n#include <Register/Register.hpp>\n')
    outFile.write("namespace Kvasir{\n    namespace Io{\n")
    io = Ft.getKey(extention,['kvasir','io'])
    for key in sorted(io):
        if key!="default":
            type = Ft.getKey(io,[key,'type'])
            if type == 'group':
                for port in formatIoPorts(Ft.getKey(io,[key,'ports'])):
                    peripheral = Ft.getKey(io,[key,'peripheral']).replace('%s',port)
                    register = Ft.getKey(io,[key,'register']).replace('%s',port)
                    address = Ft.getKey(device,[peripheral]).base_address + Ft.getKey(device,[peripheral,register]).address_offset
                    reserved = 0xFFFFFFFF
                    for field in Ft.getKey(device,[peripheral,register]).fields:
                        reserved = Ft.clearBitsFromRange(field.bit_offset + field.bit_width -1,field.bit_offset,reserved)
                    portNumber = port
                    if not portNumber.isdigit():
                        portNumber = ord(portNumber)-ord('A')
                    
                    if key == "read":
                        action = "ReadAction"
                    else:
                        action = "WriteLiteralAction<(%s<<Pin)>" % Ft.getKey(io,[key,'value'])
                    outFile.write("        template<int Pin>\n")
                    outFile.write("        struct MakeAction<Action::%s,Register::PinLocation<%d,Pin>> :\n" % (key.capitalize(),portNumber))
                    outFile.write("            Register::Action<Register::FieldLocation<Register::Address<0x%08x,0x%08x>,(1<<Pin)>,Register::%s>{};\n\n"\
                        % (address,reserved,action))
    outFile.write("    }\n}\n")

def parseRegister(register, baseAddress, prefix, ext):
    noActionIfZeroBits = 0xFFFFFFFF
    noActionIfOneBits = 0x00000000
    fieldOut = ""
    for field in register.fields:
        msb = field.bit_offset+field.bit_width-1
        lsb = field.bit_offset
        fieldType = "unsigned"
        fieldName = Ft.formatVariable(field.name)
        fieldOut += "        ///%s\n" % Ft.formatComment(field.description)
        cValuesOut = ""
        if Ft.useEnumeratedValues(field.enumerated_values,field.bit_width):
            fieldType = "%sVal" % (fieldName.capitalize())
            fieldOut += "        enum class %s {\n" % fieldType
            cValuesOut = "        namespace %sC{\n" % fieldType
            for v in field.enumerated_values:
                if v.value is not None and v.is_default is None:     #some value are defaults, we ignore them
                    valName = Ft.getKey(ext,['field',field.name,'enum',v.name,'.rename']) or Ft.formatEnumValue(v.name)
                    if valName != 'reserved':
                        fieldOut+="            %s=0x%08x,     ///<%s\n" % (valName,v.value,Ft.formatComment(v.description))
                        cValuesOut+="            constexpr Register::FieldValue<decltype(%s)::Type,%sVal::%s> %s{};\n" % (fieldName,fieldName.capitalize(),valName,valName)
            fieldOut += "        };\n"
            cValuesOut += "        }\n"
        access = Ft.getAccess(field,Ft.getKey(ext,['field',field.name]))
        fieldOut += "        constexpr Register::FieldLocation<Addr,Register::maskFromRange(%d,%d),Register::%s,%s> %s{}; \n%s" % (msb,lsb,access,fieldType,fieldName,cValuesOut)
        if "oneTo" not in access: #only remove bits from reserved field if a write of zero actually changes something
            noActionIfZeroBits = Ft.clearBitsFromRange(msb,lsb,noActionIfZeroBits)
        if "zeroTo" in access: #if zeroToSet or zeroToClear then writing a 1 is a no action
            noActionIfOneBits = Ft.setBitsFromRange(msb,lsb,noActionIfOneBits)
            
    regType = "std::uint32_t"
    if register.size is not None:
        if register.size is 8:
            regType = "std::uint8_t"
        elif register.size is 16:
            regType = "std::uint16_t"
    out = "    namespace %s{    ///<%s\n" % (Ft.formatNamespace("%s_%s" % (prefix, register.name)),Ft.formatComment(register.description))
    out += "        using Addr = Register::Address<0x%08x,0x%08x,0x%08x,%s>;\n" % (baseAddress + register.address_offset,noActionIfZeroBits,noActionIfOneBits,regType)
    out += fieldOut 
    out +=	"    }\n"
    return out 

def parseRegisters(registers,baseAddress,prefix, ext):
    if registers is None:
        return ""
    out = ""
    for register in registers:
        out += parseRegister(register, baseAddress, prefix, Ft.getKey(ext,[register.name]))
    return out

def parsePeripheral(peripheral, ext):
    out = ""
    if peripheral.description is not None:
        out += "//%s\n" % (Ft.formatComment(peripheral.description))
    if peripheral.registers is not None:
        out += parseRegisters(peripheral.registers, peripheral.base_address, peripheral.name, Ft.getKey(ext,['register']))
    return out
    
def parseFile(company,file):
    print("Parsing %s,%s " % (company,file))
    parser = SVDParser.for_packaged_svd(company, file + ".svd",1)
    extention = []
    jsonPath = posixpath.join(posixpath.dirname(posixpath.abspath(__file__)),"Extention",company,file+".json")
    #print(jsonPath)
    device = parser.get_device()
    if posixpath.isfile(jsonPath):
        extFile = open(jsonPath,"r",encoding='utf-8')
        extention = json.load(extFile)
    subdir = Ft.formatCpuName(Ft.getKey(extention,["device","cpu","name"]),device)
    chipDir = posixpath.join('..','..','Lib','Chip')
    subdir = posixpath.join(chipDir, subdir)
    if not posixpath.exists(subdir):
        os.makedirs(subdir)
    subdir = posixpath.join(subdir,company)
    if not posixpath.exists(subdir):
        os.makedirs(subdir)
    subdir = posixpath.join(subdir,file)
    if not posixpath.exists(subdir):
        os.makedirs(subdir)
    chipText = "#pragma once \n"
    chipText += "#include <cstdint>\n"
    incDir = subdir[10:]
    if Ft.getKey(extention,["kvasir","io"]):
        parseIo(extention,device,subdir)
        chipText += "#include <%s>\n" % (posixpath.join(incDir,"Io.hpp"))
    for peripheral in device.peripherals:
        if peripheral.name is not None:
            chipText += "#include <%s>\n" % (posixpath.join(incDir,peripheral.name+".hpp"))
            out = "#pragma once \n#include <Register/Utility.hpp>\n"
            out += "namespace Kvasir {\n"
            out += parsePeripheral(peripheral,Ft.getKey(extention,['.'+peripheral.name]))
            out += "}\n"

            outFile = open(posixpath.join(subdir,peripheral.name+".hpp"), 'w',encoding='utf-8')
            outFile.write(out)
        else:
            print("error no name in %s" % (file))
    outFile = open(posixpath.join(chipDir,file + ".hpp"), 'w',encoding='utf-8')
    outFile.write(chipText)
    
def parseAll(path):
    for root, dirs, files in os.walk(path):
        print("processing: " + basename(root.replace('\\','/')))
        if len(files) and basename(root.replace('\\','/')) != "ARM_SAMPLE":
            for file in files:
                filename, file_extension = posixpath.splitext(file)
                if file_extension == ".svd":
                    parseFile(basename(root.replace('\\','/')),filename)
def parseCompany(path,company):
    for root, dirs, files in os.walk(posixpath.join(path,company)):
        for file in files:
            filename, file_extension = posixpath.splitext(file)
            if file_extension == ".svd":
                parseFile(company,filename)
                
parser = argparse.ArgumentParser(description='Generate chip files')
parser.add_argument('-f,--file', dest='file', help='file name to parse')
parser.add_argument('-p,--path', dest='path', default=site.getsitepackages()[1] + '\cmsis_svd\data', help='folder to parse')
parser.add_argument('-c,--company', dest='company', help='company to parse')

args = parser.parse_args()

path = args.path.replace('\\','/')
if args.file is None and args.company is None:
    parseAll(path)
elif args.file is None:
    parseCompany(path, args.company)
elif args.company is not None:
    parseFile(args.company,args.file)

