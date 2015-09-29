import os
from os.path import join, basename
from cmsis_svd.parser import SVDParser
import site
import json
import re

def formatNamespace(input):
    r = re.compile('[^a-zA-Z0-9_]')
    from operator import add
    from functools import reduce
    return reduce(add, map(lambda s: s.capitalize(), r.sub('',input).lower().split('_')))

def formatVariable(input):
    #all c++ keywords
    cppKeywords = ['alignas','alignof','and','asm','auto','bitand','bitor','bool','break','case',\
    'catch','char','class','compl','concept','const','constexpr','continue','decltype','default',\
    'delete','do','double','else','enum','explicit','export','extern','false','float','for'\
    'friend','goto','if','inline','int','long','mutable','namespace','new','noexcept','not'\
    'nullptr','operator','or','private','protected','public','register','requires','return'\
    'short','signed','sizeof','static','struct','switch','template','this','throw','true'\
    'try','typedef','typeid','typename','union','unsigned','using','virtual','void','volatile'\
    'while','xor']
  
    out = formatNamespace(input)
    out = out[:1].lower()+out[1:]
    if out in cppKeywords:
        out += '_'              #suffix register names that are c++ keywords to prevent clash
    return out
    
def formatEnumValue(input):
    if input[:1].isdigit():
        input = 'v' + input
    return formatVariable(input)
    
def useEnumeratedValues(values,fieldWidth):
    if values is not None:
        if len(values) > 4 or fieldWidth <=2:  # hack to ge around  https://github.com/posborne/cmsis-svd/issues/14
            return 1
    return 0
    
def getAccess(reg,field):
    access = "ReadWriteAccess"
    if field.access is not None:
        if field.access is "read-only":
            access = "ReadOnlyAccess"
        elif field.access is "write-only":
            access = "WriteOnlyAccess"
    return access
    
def getKey(extention,*args):
    current = extention;
    for arg in args:
        if not isinstance(current, dict):
            return None
        if current[arg] is None:
            return None
        else:
            current = current[arg]
    return current
        

def clearBitsFromRange(msb, lsb, privious = 0):
    for ii in range(lsb,msb+1):
        privious &= ~(1<<ii)
    return privious

def parseRegister(register, baseAddress, prefix):
    reservedBits = 0xFFFFFFFF
    fieldOut = ""
    for field in register.fields:
        msb = (field.bit_offset + field.bit_width) - 1
        lsb = field.bit_offset
        fieldType = "unsigned"
        fieldName = formatVariable(field.name)
        fieldOut += "        ///%s\n" % field.description
        if useEnumeratedValues(field.enumerated_values,field.bit_width):
            fieldType = "%sVal" % (fieldName)
            fieldOut += "        enum class %s {\n" % fieldType
            cValuesOut = ""
            for v in field.enumerated_values:
                if v.value is not None and v.is_default is None:     #some value are defaults, we ignore them
                    valName = formatEnumValue(v.name)
                    fieldOut+="            %s=0x%08x,     ///<%s\n" % (valName,v.value,v.description)
                    cValuesOut+="            constexpr MPL::Value<%sVal,%sVal::%s> %s{};\n" % (fieldName,fieldName,valName,valName)
            fieldOut += "        };\n        namespace %sValC{\n%s        }\n" % (fieldName,cValuesOut)
        fieldOut += "        constexpr Register::BitLocation<Addr,Register::maskFromRange(%d,%d),Register::%s,%s> %s{}; \n" % (msb,lsb,getAccess(register,field),fieldType,fieldName)
        reservedBits = clearBitsFromRange(msb,lsb,reservedBits)
            
    regType = "unsigned"
    if register.size is not None and register.size is 8:
        regType = "unsigned char"
    out = "    namespace %s{    ///<%s\n" % (formatNamespace("%s%s" % (prefix, register.name)),register.description)
    out += "        using Addr = Register::Address<0x%08x,0x%08x,0,%s>;\n" % (baseAddress + register.address_offset,reservedBits,regType)
    out += fieldOut 
    out +=	"    }\n"
    return out 

def parseRegisters(registers,baseAddress,prefix):
    out = ""
    for register in registers:
        out += parseRegister(register,baseAddress,prefix)
    return out

def parsePeripheral(peripheral):
    out = "//%s\n" % (peripheral.description)
    out += parseRegisters(peripheral.registers,peripheral.base_address,peripheral.prepend_to_name)
    return out
    
def parseFile(path,company,file):
    parser = SVDParser.for_packaged_svd(company, file + ".svd",1,1)
    extention = []
    jsonPath = os.path.join(os.path.dirname(os.path.abspath(__file__)),"Extention",company,file+".json")
    #print(jsonPath)
    if os.path.isfile(jsonPath):
        extFile = open(jsonPath,"r",encoding='utf-8')
        extention = json.load(extFile)
    print("Parsing %s,%s " % (company,file))
    device = parser.get_device()
    subdir = getKey(extention,"device","cpu","name")
    if subdir is None:
        if device.cpu is not None and device.cpu.name is not None:
            if device.cpu.name == 'CM0PLUS':
                subdir = 'CM0+'
            else:
                subdir = device.cpu.name
        else:
            subdir = "Unknown"
    chipDir = os.path.join('..','..','Lib','Chip')
    subdir = os.path.join(chipDir, subdir)
    if not os.path.exists(subdir):
        os.makedirs(subdir)
    subdir = os.path.join(subdir,company)
    if not os.path.exists(subdir):
        os.makedirs(subdir)
    subdir = os.path.join(subdir,file)
    if not os.path.exists(subdir):
        os.makedirs(subdir)
    chipText = "#pragma once \n"
    for peripheral in device.peripherals:
        if peripheral.name is not None:
            outPath = os.path.join(subdir,peripheral.name+".hpp")
            chipText += "#include \"%s\"\n" % (outPath)
            out = "#pragma once \n#include \"Register/Utility.hpp\"\n"
            out += "namespace Kvasir {\n"
            out += parsePeripheral(peripheral)
            out += "}\n"

            outFile = open(outPath, 'w',encoding='utf-8')
            outFile.write(out)
        else:
            print("error no name in %s" % (file))
    outFile = open(os.path.join(chipDir,file + ".hpp"), 'w',encoding='utf-8')
    outFile.write(chipText)
    
path = site.getsitepackages()[1] + '\cmsis_svd\data'
print(path)
for root, dirs, files in os.walk(path):
    print("processing: " + basename(root))
    if len(files) and basename(root) != "ARM_SAMPLE":
        for file in files:
            filename, file_extension = os.path.splitext(file)
            if file_extension == ".svd":
                parseFile(path,basename(root),filename)


