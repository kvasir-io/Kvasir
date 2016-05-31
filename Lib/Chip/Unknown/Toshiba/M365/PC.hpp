#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General Purpose Input_Output Port (PC)
    namespace PcData{    ///<PC Data Register
        using Addr = Register::Address<0x400c0200,0xffffff08,0x00000000,unsigned>;
        ///PC0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0{}; 
        ///PC1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1{}; 
        ///PC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2{}; 
        ///PC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pc4{}; 
        ///PC5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5{}; 
        ///PC6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pc6{}; 
        ///PC7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pc7{}; 
    }
    namespace PcCr{    ///<PC Control Register
        using Addr = Register::Address<0x400c0204,0xffffff08,0x00000000,unsigned>;
        ///PC0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0c{}; 
        ///PC1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1c{}; 
        ///PC2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2c{}; 
        ///PC4C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pc4c{}; 
        ///PC5C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5c{}; 
        ///PC6C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pc6c{}; 
        ///PC7C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pc7c{}; 
    }
    namespace PcFr1{    ///<PC Function Register 1
        using Addr = Register::Address<0x400c0208,0xfffffff8,0x00000000,unsigned>;
        ///PC0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0f1{}; 
        ///PC1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1f1{}; 
        ///PC2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2f1{}; 
    }
    namespace PcFr3{    ///<PC Function Register 3
        using Addr = Register::Address<0x400c0210,0xfffffff8,0x00000000,unsigned>;
        ///PC0F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0f3{}; 
        ///PC1F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1f3{}; 
        ///PC2F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2f3{}; 
    }
    namespace PcFr4{    ///<PC Function Register 4
        using Addr = Register::Address<0x400c0214,0xfffffffb,0x00000000,unsigned>;
        ///PC2F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2f4{}; 
    }
    namespace PcOd{    ///<PC Open Drain Control Register
        using Addr = Register::Address<0x400c0228,0xfffffff8,0x00000000,unsigned>;
        ///PC0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0od{}; 
        ///PC1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1od{}; 
        ///PC2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2od{}; 
    }
    namespace PcPup{    ///<PC Pull-Up Control Register
        using Addr = Register::Address<0x400c022c,0xfffffff8,0x00000000,unsigned>;
        ///PC0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0up{}; 
        ///PC1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1up{}; 
        ///PC2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2up{}; 
    }
    namespace PcIe{    ///<PC Input Enable Control Register
        using Addr = Register::Address<0x400c0238,0xfffffff8,0x00000000,unsigned>;
        ///PC0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0ie{}; 
        ///PC1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1ie{}; 
        ///PC2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2ie{}; 
    }
}
