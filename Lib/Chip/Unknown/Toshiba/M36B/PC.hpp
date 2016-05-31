#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General Purpose Input_Output Port (PC)
    namespace PcData{    ///<PC Data Register
        using Addr = Register::Address<0x400c0200,0xffffffc0,0x00000000,unsigned>;
        ///PC0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0{}; 
        ///PC1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1{}; 
        ///PC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2{}; 
        ///PC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pc3{}; 
        ///PC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pc4{}; 
        ///PC5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5{}; 
    }
    namespace PcCr{    ///<PC Control Register
        using Addr = Register::Address<0x400c0204,0xffffffc0,0x00000000,unsigned>;
        ///PC0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0c{}; 
        ///PC1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1c{}; 
        ///PC2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2c{}; 
        ///PC3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pc3c{}; 
        ///PC4C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pc4c{}; 
        ///PC5C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5c{}; 
    }
    namespace PcFr1{    ///<PC Function Register 1
        using Addr = Register::Address<0x400c0208,0xffffffc0,0x00000000,unsigned>;
        ///PC0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0f1{}; 
        ///PC1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1f1{}; 
        ///PC2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2f1{}; 
        ///PC3F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pc3f1{}; 
        ///PC4F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pc4f1{}; 
        ///PC5F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5f1{}; 
    }
    namespace PcFr2{    ///<PC Function Register 2
        using Addr = Register::Address<0x400c020c,0xffffffdf,0x00000000,unsigned>;
        ///PC5F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5f2{}; 
    }
    namespace PcOd{    ///<PC Open Drain Control Register
        using Addr = Register::Address<0x400c0228,0xffffffc0,0x00000000,unsigned>;
        ///PC0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0od{}; 
        ///PC1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1od{}; 
        ///PC2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2od{}; 
        ///PC3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pc3od{}; 
        ///PC4OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pc4od{}; 
        ///PC5OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5od{}; 
    }
    namespace PcPup{    ///<PC Pull-Up Control Register
        using Addr = Register::Address<0x400c022c,0xffffffc0,0x00000000,unsigned>;
        ///PC0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0up{}; 
        ///PC1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1up{}; 
        ///PC2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2up{}; 
        ///PC3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pc3up{}; 
        ///PC4UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pc4up{}; 
        ///PC5UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5up{}; 
    }
    namespace PcPdn{    ///<PC Pull-Down Control Register
        using Addr = Register::Address<0x400c0230,0xffffffc0,0x00000000,unsigned>;
        ///PC0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0dn{}; 
        ///PC1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1dn{}; 
        ///PC2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2dn{}; 
        ///PC3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pc3dn{}; 
        ///PC4DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pc4dn{}; 
        ///PC5DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5dn{}; 
    }
    namespace PcIe{    ///<PC Input Enable Control Register
        using Addr = Register::Address<0x400c0238,0xffffffc0,0x00000000,unsigned>;
        ///PC0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0ie{}; 
        ///PC1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1ie{}; 
        ///PC2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2ie{}; 
        ///PC3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pc3ie{}; 
        ///PC4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pc4ie{}; 
        ///PC5IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5ie{}; 
    }
}
