#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CRC engine
    namespace Nonemode{    ///<CRC mode register
        using Addr = Register::Address<0x1c010000,0xffffffc0,0,unsigned>;
        ///CRC polynom: 1X= CRC-32 polynomial 01= CRC-16 polynomial
								00= CRC-CCITT polynomial
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> crcPoly{}; 
        namespace CrcpolyValC{
        }
        ///Data bit order: 1= Bit order reverse for CRC_WR_DATA (per
								byte) 0= No bit order reverse for CRC_WR_DATA (per
								byte)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bitRvsWr{}; 
        namespace BitrvswrValC{
        }
        ///Data complement: 1= 1s complement for CRC_WR_DATA 0= No 1s
								complement for CRC_WR_DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmplWr{}; 
        namespace CmplwrValC{
        }
        ///CRC sum bit order: 1= Bit order reverse for CRC_SUM 0= No
								bit order reverse for CRC_SUM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bitRvsSum{}; 
        namespace BitrvssumValC{
        }
        ///CRC sum complement: 1= 1s complement for CRC_SUM 0=No 1s
								complement for CRC_SUM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmplSum{}; 
        namespace CmplsumValC{
        }
    }
    namespace Noneseed{    ///<CRC seed register
        using Addr = Register::Address<0x1c010004,0x00000000,0,unsigned>;
        ///A write access to this register will load CRC seed value to
								CRC_SUM register with selected bit order and 1s complement
								pre-processes. A write access to this register will overrule the CRC
								calculation in progresses.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcSeed{}; 
        namespace CrcseedValC{
        }
    }
    namespace Nonesum{    ///<CRC checksum register
        using Addr = Register::Address<0x1c010008,0x00000000,0,unsigned>;
        ///The most recent CRC sum can be read through this register
								with selected bit order and 1s complement
								post-processes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcSum{}; 
        namespace CrcsumValC{
        }
    }
    namespace NonewrData{    ///<CRC data register
        using Addr = Register::Address<0x1c010008,0x00000000,0,unsigned>;
        ///Data written to this register will be taken to perform CRC
								calculation with selected bit order and 1s complement pre-process.
								Any write size 8, 16 or 32-bit are allowed and accept back-to-back
								transactions.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcWrData{}; 
        namespace CrcwrdataValC{
        }
    }
}
