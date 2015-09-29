#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CRC engine 
    namespace Nonemode{    ///<CRC mode register
        using Addr = Register::Address<0x20090000,0xffffffc0,0,unsigned>;
        ///Select CRC polynomial
        enum class crcPolyVal {
            crcCcittPolynomial=0x00000000,     ///<CRC-CCITT polynomial
            crc16Polynomial=0x00000001,     ///<CRC-16 polynomial
            crc32Polynomial=0x00000002,     ///<CRC-32 polynomial
        };
        namespace crcPolyValC{
            constexpr MPL::Value<crcPolyVal,crcPolyVal::crcCcittPolynomial> crcCcittPolynomial{};
            constexpr MPL::Value<crcPolyVal,crcPolyVal::crc16Polynomial> crc16Polynomial{};
            constexpr MPL::Value<crcPolyVal,crcPolyVal::crc32Polynomial> crc32Polynomial{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,crcPolyVal> crcPoly{}; 
        ///Select bit order for CRC_WR_DATA
        enum class bitRvsWrVal {
            noBitOrderReverse=0x00000000,     ///<No bit order reverse for CRC_WR_DATA (per byte)
            bitOrderReverseFo=0x00000001,     ///<Bit order reverse for CRC_WR_DATA (per byte)
        };
        namespace bitRvsWrValC{
            constexpr MPL::Value<bitRvsWrVal,bitRvsWrVal::noBitOrderReverse> noBitOrderReverse{};
            constexpr MPL::Value<bitRvsWrVal,bitRvsWrVal::bitOrderReverseFo> bitOrderReverseFo{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bitRvsWrVal> bitRvsWr{}; 
        ///Select one's complement for CRC_WR_DATA
        enum class cmplWrVal {
            noOnesComplement=0x00000000,     ///<No one's complement for CRC_WR_DATA
            onesComplementFor=0x00000001,     ///<One's complement for CRC_WR_DATA
        };
        namespace cmplWrValC{
            constexpr MPL::Value<cmplWrVal,cmplWrVal::noOnesComplement> noOnesComplement{};
            constexpr MPL::Value<cmplWrVal,cmplWrVal::onesComplementFor> onesComplementFor{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cmplWrVal> cmplWr{}; 
        ///Select bit order revers for CRC_SUM
        enum class bitRvsSumVal {
            noBitOrderReverse=0x00000000,     ///<No bit order reverse for CRC_SUM
            bitOrderReverseFo=0x00000001,     ///<Bit order reverse for CRC_SUM
        };
        namespace bitRvsSumValC{
            constexpr MPL::Value<bitRvsSumVal,bitRvsSumVal::noBitOrderReverse> noBitOrderReverse{};
            constexpr MPL::Value<bitRvsSumVal,bitRvsSumVal::bitOrderReverseFo> bitOrderReverseFo{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bitRvsSumVal> bitRvsSum{}; 
        ///Select one's complement for CRC_SUM
        enum class cmplSumVal {
            noOnesComplement=0x00000000,     ///<No one's complement for CRC_SUM
            onesComplementFor=0x00000001,     ///<One's complement for CRC_SUM
        };
        namespace cmplSumValC{
            constexpr MPL::Value<cmplSumVal,cmplSumVal::noOnesComplement> noOnesComplement{};
            constexpr MPL::Value<cmplSumVal,cmplSumVal::onesComplementFor> onesComplementFor{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,cmplSumVal> cmplSum{}; 
    }
    namespace Noneseed{    ///<CRC seed register
        using Addr = Register::Address<0x20090004,0x00000000,0,unsigned>;
        ///A write access to this register will load CRC seed value to CRC_SUM register with selected bit order and 1's complement pre-processes. A write access to this register will overrule the CRC calculation in progresses.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcSeed{}; 
    }
    namespace Nonesum{    ///<CRC checksum register
        using Addr = Register::Address<0x20090008,0x00000000,0,unsigned>;
        ///The most recent CRC sum can be read through this register with selected bit order and 1's complement post-processes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcSum{}; 
    }
    namespace Nonedata{    ///<CRC data register
        using Addr = Register::Address<0x20090008,0x00000000,0,unsigned>;
        ///Data written to this register will be taken to perform CRC calculation with selected bit order and 1's complement pre-process. Any write size 8, 16 or 32-bit are allowed and accept back-to-back transactions.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcWrData{}; 
    }
}
