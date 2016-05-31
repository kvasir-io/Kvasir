#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Oscillation Frequency Detector (OFD)
    namespace OfdCr1{    ///<OFD Control Register 1
        using Addr = Register::Address<0x400f1000,0xffffff00,0x00000000,unsigned>;
        ///OFDWEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ofdwen{}; 
    }
    namespace OfdCr2{    ///<OFD Control Register 2
        using Addr = Register::Address<0x400f1004,0xffffff00,0x00000000,unsigned>;
        ///OFDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ofden{}; 
    }
    namespace OfdMn0{    ///<OFD Lower Detection Frequency Setting Register
        using Addr = Register::Address<0x400f1008,0xfffffe00,0x00000000,unsigned>;
        ///OFDMN0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> ofdmn0{}; 
    }
    namespace OfdMn1{    ///<OFD Lower Detection Frequency Setting Register
        using Addr = Register::Address<0x400f100c,0xfffffe00,0x00000000,unsigned>;
        ///OFDMN1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> ofdmn1{}; 
    }
    namespace OfdMx0{    ///<OFD Higher Detection Frequency Setting Register
        using Addr = Register::Address<0x400f1010,0xfffffe00,0x00000000,unsigned>;
        ///OFDMX0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> ofdmx0{}; 
    }
    namespace OfdMx1{    ///<OFD Higher Detection Frequency Setting Register
        using Addr = Register::Address<0x400f1014,0xfffffe00,0x00000000,unsigned>;
        ///OFDMX1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> ofdmx1{}; 
    }
    namespace OfdRst{    ///<OFD Reset Enable Control Register
        using Addr = Register::Address<0x400f1018,0xfffffffe,0x00000000,unsigned>;
        ///OFDRSTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ofdrsten{}; 
    }
    namespace OfdStat{    ///<OFD Status Register
        using Addr = Register::Address<0x400f101c,0xfffffffc,0x00000000,unsigned>;
        ///FRQERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frqerr{}; 
        ///OFDBUSY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ofdbusy{}; 
    }
    namespace OfdMon{    ///<OFD
        using Addr = Register::Address<0x400f1020,0xfffffffe,0x00000000,unsigned>;
        ///OFDMON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ofdmon{}; 
    }
}
