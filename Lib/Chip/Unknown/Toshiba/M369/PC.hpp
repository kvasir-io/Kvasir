#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PC)
    namespace Nonedata{    ///<PC Data Register
        using Addr = Register::Address<0x400c0200,0xffffff00,0,unsigned>;
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
        ///PC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pc3{}; 
        namespace Pc3ValC{
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
        using Addr = Register::Address<0x400c0204,0xffffff00,0,unsigned>;
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
        ///PC3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pc3c{}; 
        namespace Pc3cValC{
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
        using Addr = Register::Address<0x400c0208,0xffffff00,0,unsigned>;
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
        ///PC3F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pc3f1{}; 
        namespace Pc3f1ValC{
        }
        ///PC4F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pc4f1{}; 
        namespace Pc4f1ValC{
        }
        ///PC5F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5f1{}; 
        namespace Pc5f1ValC{
        }
        ///PC6F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pc6f1{}; 
        namespace Pc6f1ValC{
        }
        ///PC7F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pc7f1{}; 
        namespace Pc7f1ValC{
        }
    }
    namespace Nonefr2{    ///<PC Function Register 2
        using Addr = Register::Address<0x400c020c,0xfffffffc,0,unsigned>;
        ///PC0F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0f2{}; 
        namespace Pc0f2ValC{
        }
        ///PC1F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1f2{}; 
        namespace Pc1f2ValC{
        }
    }
    namespace Noneod{    ///<PC Open Drain Control Register
        using Addr = Register::Address<0x400c0228,0xffffff00,0,unsigned>;
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
        ///PC3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pc3od{}; 
        namespace Pc3odValC{
        }
        ///PC4OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pc4od{}; 
        namespace Pc4odValC{
        }
        ///PC5OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5od{}; 
        namespace Pc5odValC{
        }
        ///PC6OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pc6od{}; 
        namespace Pc6odValC{
        }
        ///PC7OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pc7od{}; 
        namespace Pc7odValC{
        }
    }
    namespace Nonepup{    ///<PC Pull-Up Control Register
        using Addr = Register::Address<0x400c022c,0xffffff00,0,unsigned>;
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
        ///PC3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pc3up{}; 
        namespace Pc3upValC{
        }
        ///PC4UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pc4up{}; 
        namespace Pc4upValC{
        }
        ///PC5UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5up{}; 
        namespace Pc5upValC{
        }
        ///PC6UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pc6up{}; 
        namespace Pc6upValC{
        }
        ///PC7UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pc7up{}; 
        namespace Pc7upValC{
        }
    }
    namespace Nonepdn{    ///<PC Pull-Down Control Register
        using Addr = Register::Address<0x400c0230,0xffffff00,0,unsigned>;
        ///PC0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0dn{}; 
        namespace Pc0dnValC{
        }
        ///PC1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1dn{}; 
        namespace Pc1dnValC{
        }
        ///PC2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2dn{}; 
        namespace Pc2dnValC{
        }
        ///PC3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pc3dn{}; 
        namespace Pc3dnValC{
        }
        ///PC4DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pc4dn{}; 
        namespace Pc4dnValC{
        }
        ///PC5DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5dn{}; 
        namespace Pc5dnValC{
        }
        ///PC6DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pc6dn{}; 
        namespace Pc6dnValC{
        }
        ///PC7DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pc7dn{}; 
        namespace Pc7dnValC{
        }
    }
    namespace Noneie{    ///<PC Input Enable Control Register
        using Addr = Register::Address<0x400c0238,0xffffff00,0,unsigned>;
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
        ///PC3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pc3ie{}; 
        namespace Pc3ieValC{
        }
        ///PC4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pc4ie{}; 
        namespace Pc4ieValC{
        }
        ///PC5IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5ie{}; 
        namespace Pc5ieValC{
        }
        ///PC6IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pc6ie{}; 
        namespace Pc6ieValC{
        }
        ///PC7IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pc7ie{}; 
        namespace Pc7ieValC{
        }
    }
}
