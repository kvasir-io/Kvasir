#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PC)
    namespace Nonedata{    ///<PC Data Register
        using Addr = Register::Address<0x400c0200,0xffffff08,0,unsigned>;
        ///PC0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0{}; 
        namespace Pc0ValC{
        }
        ///PC1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1{}; 
        namespace Pc1ValC{
        }
        ///PC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2{}; 
        namespace Pc2ValC{
        }
        ///PC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pc4{}; 
        namespace Pc4ValC{
        }
        ///PC5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5{}; 
        namespace Pc5ValC{
        }
        ///PC6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pc6{}; 
        namespace Pc6ValC{
        }
        ///PC7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pc7{}; 
        namespace Pc7ValC{
        }
    }
    namespace Nonecr{    ///<PC Control Register
        using Addr = Register::Address<0x400c0204,0xffffff08,0,unsigned>;
        ///PC0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0c{}; 
        namespace Pc0cValC{
        }
        ///PC1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1c{}; 
        namespace Pc1cValC{
        }
        ///PC2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2c{}; 
        namespace Pc2cValC{
        }
        ///PC4C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pc4c{}; 
        namespace Pc4cValC{
        }
        ///PC5C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5c{}; 
        namespace Pc5cValC{
        }
        ///PC6C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pc6c{}; 
        namespace Pc6cValC{
        }
        ///PC7C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pc7c{}; 
        namespace Pc7cValC{
        }
    }
    namespace Nonefr1{    ///<PC Function Register 1
        using Addr = Register::Address<0x400c0208,0xfffffff8,0,unsigned>;
        ///PC0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0f1{}; 
        namespace Pc0f1ValC{
        }
        ///PC1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1f1{}; 
        namespace Pc1f1ValC{
        }
        ///PC2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2f1{}; 
        namespace Pc2f1ValC{
        }
    }
    namespace Nonefr3{    ///<PC Function Register 3
        using Addr = Register::Address<0x400c0210,0xfffffff8,0,unsigned>;
        ///PC0F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0f3{}; 
        namespace Pc0f3ValC{
        }
        ///PC1F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1f3{}; 
        namespace Pc1f3ValC{
        }
        ///PC2F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2f3{}; 
        namespace Pc2f3ValC{
        }
    }
    namespace Nonefr4{    ///<PC Function Register 4
        using Addr = Register::Address<0x400c0214,0xfffffffb,0,unsigned>;
        ///PC2F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2f4{}; 
        namespace Pc2f4ValC{
        }
    }
    namespace Noneod{    ///<PC Open Drain Control Register
        using Addr = Register::Address<0x400c0228,0xfffffff8,0,unsigned>;
        ///PC0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0od{}; 
        namespace Pc0odValC{
        }
        ///PC1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1od{}; 
        namespace Pc1odValC{
        }
        ///PC2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2od{}; 
        namespace Pc2odValC{
        }
    }
    namespace Nonepup{    ///<PC Pull-Up Control Register
        using Addr = Register::Address<0x400c022c,0xfffffff8,0,unsigned>;
        ///PC0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0up{}; 
        namespace Pc0upValC{
        }
        ///PC1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1up{}; 
        namespace Pc1upValC{
        }
        ///PC2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2up{}; 
        namespace Pc2upValC{
        }
    }
    namespace Noneie{    ///<PC Input Enable Control Register
        using Addr = Register::Address<0x400c0238,0xfffffff8,0,unsigned>;
        ///PC0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0ie{}; 
        namespace Pc0ieValC{
        }
        ///PC1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1ie{}; 
        namespace Pc1ieValC{
        }
        ///PC2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2ie{}; 
        namespace Pc2ieValC{
        }
    }
}
