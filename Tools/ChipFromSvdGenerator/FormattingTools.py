import os
from os.path import join, basename
from cmsis_svd.model import SVDDevice
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

def formatComment(input):
    if input:
        return input.replace('\r','').replace('\n','')
    return ""

    
def useEnumeratedValues(values,fieldWidth):
    if values is not None:
        if len(values) > 4 or fieldWidth <=2:  # hack to get around  https://github.com/posborne/cmsis-svd/issues/14
            return 1
    return 0
    
def getAccess(field,ext):
    access = "read-write"
    modifiedWriteValues = None
    readAction = None
    if field.access is not None:
        access = field.access
    if getKey(ext,['access']) is not None:
        access = getKey(ext,['access'])
    if field.modified_write_values is not None:
        modifiedWriteValues = field.modified_write_values
    if getKey(ext,['modifiedWriteValues']) is not None:
        modifiedWriteValues = getKey(ext,['modifiedWriteValues'])
    if field.read_action is not None:
        readAction = field.read_action
    if getKey(ext,['readAction']) is not None:
        readAction = getKey(ext,['readAction'])

    if modifiedWriteValues is None:
        modifiedWriteValues = "normal"
    if readAction is None:
        readAction = "normal"

    if access == "read-write":
        access = "readWrite"
    if access == "read-only":
        access = "readOnly"
    if access == "write-only":
        access = "writeOnly"

    if access == "readWrite" and modifiedWriteValues == "normal" and readAction == "normal":
        return "ReadWriteAccess"

    return "Access<Register::AccessType::%s,Register::ReadActionType::%s,Register::ModifiedWriteValueType::%s>" % (access,readAction,modifiedWriteValues)

def _getSwdKey(device,args):
    for p in device.peripherals:
        if p.name==args[0]:
            if len(args) == 1:
                return p
            for r in p.registers:
                if r.name == args[1]:
                    if len(args) == 2:
                        return r
                    for f in r.fields:
                        if f.name == args[2]:
                            return f
    return None

def _getExtKey(extention,args):
    current = extention;
    last = []
    for arg in args[:-1]:
        if current is None:
            return None
        elif not isinstance(current, dict):
            return None
        elif arg in current:
            last = current
            current = current[arg]
        else: 
            return None
    if args[-1] in current:
        return current[args[-1]]
    elif 'default' in last and args[-1] in last['default']:
        return last['default'][args[-1]]
    return None

def getKey(tree,path):
    if tree is None:
        return None
    elif isinstance(tree,SVDDevice):
        return _getSwdKey(tree,path)
    else:
        return _getExtKey(tree,path)        

def clearBitsFromRange(msb, lsb, privious = 0):
    for ii in range(lsb,msb+1):
        privious &= ~(1<<ii)
    return privious

def setBitsFromRange(msb, lsb, privious = 0):
    for ii in range(lsb,msb+1):
        privious |= (1<<ii)
    return privious

def formatCpuName(ext,device):
    if ext is None:
        if device.cpu is not None and device.cpu.name is not None:
            if device.cpu.name == 'CM0PLUS':
                return 'CM0+'
            else:
                return device.cpu.name
        else:
            return "Unknown"
    return ext


