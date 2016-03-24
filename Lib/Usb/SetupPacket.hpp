#pragma once
#include <stdint.h>
namespace Kvasir
{
namespace Usb
{
    namespace SetupPacket
    {
        // see http://www.beyondlogic.org/usbnutshell/usb6.shtml#SetupPacket
        enum class Direction : uint8_t // bit 7
        {
            hostToDevice,
            deviceToHost
        };

        enum class Type : uint8_t // bits 6,5
        {
            standard,
            classT,
            vendor,
            reserved
        };

        enum class Recipiant : uint8_t // bits 4-0
        {
            device,
            interface,
            endpoint,
            other
        };

        // byte 1
        enum class Request : uint8_t
        {
            getStatus = 0,
            clearFeature = 1,
            setFeature = 3,
            setAddress = 5,
            getDescriptor,
            setDescriptor,
            getConfiguration,
            setConfiguration,
            getInterface,
            setInterface,
            setLineCoding = 0x20,
            getLineCoding = 0x21,
            setControlLineState = 0x22
        };

        enum class DescriptorType : uint8_t
        {
            device = 1,
            configuration = 2,
            string = 3,
            interface = 4,
            endpoint = 5,
            deviceQualifier = 6,
            otherSpeedConfiguration = 7,
            interrfacePower = 8, // not used
            otg = 9,
            debug = 10,
            interfaceAssociation = 11,
            security = 12,
            key = 13,
            encriptionType = 14,
            bos = 15, // binary device object store
            deviceCapability = 16,
            wirelessEndpointCompanion = 17

        };

        enum class DescriptorIndex : uint8_t
        {
            langId = 0,
            manufacturer,
            product,
            serial,
            configuration,
            interface
        };

        template <typename Packet>
        uint16_t getWLength(Packet & in)
        {
            return (in[6] | (uint16_t)in[7] << 8);
        }
        template <typename Packet>
        uint16_t getIndex(Packet & in)
        {
            return (in[4] | (uint16_t)in[5] << 8);
        }
        template <typename Packet>
        uint16_t getValue(Packet & in)
        {
            return (in[2] | (uint16_t)in[3] << 8);
        }
        template <typename Packet>
        Request getRequest(Packet & in)
        {
            return Request(in[1]);
        }
        template <typename Packet>
        Recipiant getRecipiant(Packet & in)
        {
            return Recipiant(in[0] & 0x1F);
        }
        template <typename Packet>
        Type getType(Packet & in)
        {
            return Type((in[0] & 0x60) >> 5);
        }
        template <typename Packet>
        Direction getDirection(Packet & in)
        {
            return Direction((in[0] & 0x80) >> 7);
        }

        // only call this function if the type is getDescriptor
        template <typename Packet>
        DescriptorType getDescriptorType(Packet & in)
        {
            return DescriptorType(getValue(in) >> 8);
        }
        // only call this function if the type is getDescriptor
        template <typename Packet>
        DescriptorIndex getDescriptorIndex(Packet & in)
        {
            return DescriptorIndex(getValue(in) & 0xFF);
        }
    }
}
}