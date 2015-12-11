#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Oscillation Frequency Detector (OFD)
    namespace Nonecr1{    ///<OFD Control Register 1
        using Addr = Register::Address<0x400f1000,0xffffff00,0,unsigned>;
        ///OFDWEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ofdwen{}; 
    }
    namespace Nonecr2{    ///<OFD Control Register 2
        using Addr = Register::Address<0x400f1004,0xffffff00,0,unsigned>;
        ///OFDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ofden{}; 
    }
    namespace Nonemn0{    ///<OFD Lower Detection Frequency Setting Register
        using Addr = Register::Address<0x400f1008,0xfffffe00,0,unsigned>;
        ///OFDMN0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> ofdmn0{}; 
    }
    namespace Nonemn1{    ///<OFD Lower Detection Frequency Setting Register
        using Addr = Register::Address<0x400f100c,0xfffffe00,0,unsigned>;
        ///OFDMN1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> ofdmn1{}; 
    }
    namespace Nonemx0{    ///<OFD Higher Detection Frequency Setting Register
        using Addr = Register::Address<0x400f1010,0xfffffe00,0,unsigned>;
        ///OFDMX0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> ofdmx0{}; 
    }
    namespace Nonemx1{    ///<OFD Higher Detection Frequency Setting Register
        using Addr = Register::Address<0x400f1014,0xfffffe00,0,unsigned>;
        ///OFDMX1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> ofdmx1{}; 
    }
    namespace Nonerst{    ///<OFD Reset Enable Control Register
        using Addr = Register::Address<0x400f1018,0xfffffffe,0,unsigned>;
        ///OFDRSTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ofdrsten{}; 
    }
    namespace Nonestat{    ///<OFD Status Register
        using Addr = Register::Address<0x400f101c,0xfffffffc,0,unsigned>;
        ///FRQERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frqerr{}; 
        ///OFDBUSY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ofdbusy{}; 
    }
    namespace Nonemon{    ///<OFD
        using Addr = Register::Address<0x400f1020,0xfffffffe,0,unsigned>;
        ///OFDMON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ofdmon{}; 
    }
}
