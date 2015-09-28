import os
from os.path import join, basename
from cmsis_svd.parser import SVDParser
import site
import json

def getKey(extention,*args):
    #print("t") 
    #print(extention)
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
        fieldOut += "        constexpr Register::BitLocation<Addr,Register::maskFromRange(%d,%d)> %s; \n" % (msb,lsb,field.name)
        reservedBits = clearBitsFromRange(msb,lsb,reservedBits)
            
    out = "    namespace %s%s{\n" % (prefix,register.name.replace('[','').replace(']','').lower())
    out += "        using Addr = Register::Address<0x%08x,0x%08x>;\n" % (baseAddress + register.address_offset,reservedBits)
    out += fieldOut 
    out +=	"    }\n"
    return out 

def parseRegisters(registers,baseAddress,prefix):
    out = ""
    for register in registers:
        out += parseRegister(register,baseAddress,prefix)
    return out

def parsePeripheral(peripheral):
    out = ""
    #out += "namespace %s {\n" % (peripheral.name)
    out += parseRegisters(peripheral.registers,peripheral.base_address,peripheral.prepend_to_name)
    #out += "}\n" 
    return out
    
def parseFile(path,company,file):
    parser = SVDParser.for_packaged_svd(company, file + ".svd",1,1)
    extention = []
    jsonPath = os.path.join(os.path.dirname(os.path.abspath(__file__)),"Extention",company,file+".json")
    #print(jsonPath)
    if os.path.isfile(jsonPath):
        extFile = open(jsonPath,"r")
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

            outFile = open(outPath, 'w')
            outFile.write(out)
        else:
            print("error no name in %s" % (file))
    outFile = open(os.path.join(chipDir,file + ".hpp"), 'w')
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


