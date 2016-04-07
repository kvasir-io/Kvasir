#pragma once
#include "Usb/Endpoint.hpp"
#include <stdint.h>

namespace Kvasir
{
namespace Usb
{
    // definition of buffer descriptor table
    namespace Bdt
    {
        enum class InfoBits : uint8_t
        {
            own = (1 << 7), // owned by the usb hardware when one
            data1 = (1 << 6),
            keep = (1 << 5),
            ninc = (1 << 4),
            dts = (1 << 3),
            stall = (1 << 2),
            allClear = 0
        };

        // for each endpt: 8 bytes
        struct Data
        {
            volatile InfoBits info;      // BD[0:7]
            uint8_t dummy;               // RSVD: BD[8:15]
            volatile uint16_t byteCount; // BD[16:32]
            volatile uint8_t * volatile address;  // Addr
        };

        enum class TokPid : uint8_t
        {
            out = 1,
            in = 9,
            setup = 0x0D
        };

        constexpr InfoBits operator|(InfoBits lhs, InfoBits rhs)
        {
            return InfoBits((unsigned)lhs | (unsigned)rhs);
        }

        inline void setByteCount(Data & bdt, uint16_t size) { bdt.byteCount = size; }

        inline uint16_t getByteCount(Data & bdt) { return bdt.byteCount; }

        inline void clearInfoBit(Data & bdt, InfoBits b)
        {
            bdt.info = InfoBits((unsigned)bdt.info & ~(unsigned)b);
        }

        inline bool isSet(Data & bdt, InfoBits b) { return (unsigned)bdt.info & (unsigned)b; }

        inline TokPid getTokPid(Data & bdt) { return TokPid(((unsigned)bdt.info >> 2) & 0x0F); }
    }
}
}
