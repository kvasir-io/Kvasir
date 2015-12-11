#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//VBAT register file
    namespace RfvbatReg0{    ///<VBAT register file register
        using Addr = Register::Address<0x4003e000,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ll{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lh{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hh{}; 
    }
    namespace RfvbatReg1{    ///<VBAT register file register
        using Addr = Register::Address<0x4003e004,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ll{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lh{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hh{}; 
    }
    namespace RfvbatReg2{    ///<VBAT register file register
        using Addr = Register::Address<0x4003e008,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ll{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lh{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hh{}; 
    }
    namespace RfvbatReg3{    ///<VBAT register file register
        using Addr = Register::Address<0x4003e00c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ll{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lh{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hh{}; 
    }
    namespace RfvbatReg4{    ///<VBAT register file register
        using Addr = Register::Address<0x4003e010,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ll{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lh{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hh{}; 
    }
    namespace RfvbatReg5{    ///<VBAT register file register
        using Addr = Register::Address<0x4003e014,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ll{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lh{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hh{}; 
    }
    namespace RfvbatReg6{    ///<VBAT register file register
        using Addr = Register::Address<0x4003e018,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ll{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lh{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hh{}; 
    }
    namespace RfvbatReg7{    ///<VBAT register file register
        using Addr = Register::Address<0x4003e01c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ll{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lh{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hh{}; 
    }
}
