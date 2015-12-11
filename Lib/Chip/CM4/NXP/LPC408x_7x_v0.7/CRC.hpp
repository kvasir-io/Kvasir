#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CRC engine 
    namespace Nonemode{    ///<CRC mode register
        using Addr = Register::Address<0x20090000,0xffffffc0,0,unsigned>;
        ///Select CRC polynomial
        enum class CrcpolyVal {
            crcCcittPolynomial=0x00000000,     ///<CRC-CCITT polynomial
            crc16Polynomial=0x00000001,     ///<CRC-16 polynomial
            crc32Polynomial=0x00000002,     ///<CRC-32 polynomial
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CrcpolyVal> crcPoly{}; 
        namespace CrcpolyValC{
            constexpr Register::FieldValue<decltype(crcPoly)::Type,CrcpolyVal::crcCcittPolynomial> crcCcittPolynomial{};
            constexpr Register::FieldValue<decltype(crcPoly)::Type,CrcpolyVal::crc16Polynomial> crc16Polynomial{};
            constexpr Register::FieldValue<decltype(crcPoly)::Type,CrcpolyVal::crc32Polynomial> crc32Polynomial{};
        }
        }
        ///Select bit order for CRC_WR_DATA
        enum class BitrvswrVal {
            noBitOrderReverse=0x00000000,     ///<No bit order reverse for CRC_WR_DATA (per byte)
            bitOrderReverseFo=0x00000001,     ///<Bit order reverse for CRC_WR_DATA (per byte)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BitrvswrVal> bitRvsWr{}; 
        namespace BitrvswrValC{
            constexpr Register::FieldValue<decltype(bitRvsWr)::Type,BitrvswrVal::noBitOrderReverse> noBitOrderReverse{};
            constexpr Register::FieldValue<decltype(bitRvsWr)::Type,BitrvswrVal::bitOrderReverseFo> bitOrderReverseFo{};
        }
        }
        ///Select one's complement for CRC_WR_DATA
        enum class CmplwrVal {
            noOnesComplement=0x00000000,     ///<No one's complement for CRC_WR_DATA
            onesComplementFor=0x00000001,     ///<One's complement for CRC_WR_DATA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CmplwrVal> cmplWr{}; 
        namespace CmplwrValC{
            constexpr Register::FieldValue<decltype(cmplWr)::Type,CmplwrVal::noOnesComplement> noOnesComplement{};
            constexpr Register::FieldValue<decltype(cmplWr)::Type,CmplwrVal::onesComplementFor> onesComplementFor{};
        }
        }
        ///Select bit order revers for CRC_SUM
        enum class BitrvssumVal {
            noBitOrderReverse=0x00000000,     ///<No bit order reverse for CRC_SUM
            bitOrderReverseFo=0x00000001,     ///<Bit order reverse for CRC_SUM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BitrvssumVal> bitRvsSum{}; 
        namespace BitrvssumValC{
            constexpr Register::FieldValue<decltype(bitRvsSum)::Type,BitrvssumVal::noBitOrderReverse> noBitOrderReverse{};
            constexpr Register::FieldValue<decltype(bitRvsSum)::Type,BitrvssumVal::bitOrderReverseFo> bitOrderReverseFo{};
        }
        }
        ///Select one's complement for CRC_SUM
        enum class CmplsumVal {
            noOnesComplement=0x00000000,     ///<No one's complement for CRC_SUM
            onesComplementFor=0x00000001,     ///<One's complement for CRC_SUM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,CmplsumVal> cmplSum{}; 
        namespace CmplsumValC{
            constexpr Register::FieldValue<decltype(cmplSum)::Type,CmplsumVal::noOnesComplement> noOnesComplement{};
            constexpr Register::FieldValue<decltype(cmplSum)::Type,CmplsumVal::onesComplementFor> onesComplementFor{};
        }
        }
    }
    namespace Noneseed{    ///<CRC seed register
        using Addr = Register::Address<0x20090004,0x00000000,0,unsigned>;
        ///A write access to this register will load CRC seed value to CRC_SUM register with selected bit order and 1's complement pre-processes. A write access to this register will overrule the CRC calculation in progresses.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcSeed{}; 
    }
    namespace Nonesum{    ///<CRC checksum register
        using Addr = Register::Address<0x20090008,0x00000000,0,unsigned>;
        ///The most recent CRC sum can be read through this register with selected bit order and 1's complement post-processes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcSum{}; 
    }
    namespace Nonedata{    ///<CRC data register
        using Addr = Register::Address<0x20090008,0x00000000,0,unsigned>;
        ///Data written to this register will be taken to perform CRC calculation with selected bit order and 1's complement pre-process. Any write size 8, 16 or 32-bit are allowed and accept back-to-back transactions.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcWrData{}; 
    }
}
