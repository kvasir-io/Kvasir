#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace Nonecmp0cr{    ///<Comparator0 Control Register
        using Addr = Register::Address<0x400d0000,0xffffffe8,0,unsigned>;
        ///Comparator0 Enable
1 = Enable
0 = Disable
Comparator0 output needs wait 10 us stable time after CMP0EN is set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
        ///Comparator0 Interrupt Enable
1 = Enable comparator0 interrupt function
0 = Disable comparator0 interrupt function
Interrupt is generated if CMP0IE bit is set to 1 after comparator0 conversion finished.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ie{}; 
        namespace IeValC{
        }
        ///CMP0 Hysterisis Enable
1 = Enable comparator0 Hysterisis function; the typical range is 20mV.
0 = Disable comparator0 Hysterisis function (Default).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hysen{}; 
        namespace HysenValC{
        }
        ///Comparator0 negative input select
1 = The internal comparator reference voltage (Vref=1.2V) is selected as the negative comparator input
0 = The comparator0 reference pin CPN0 is selected as the negative comparator input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cn0{}; 
        namespace Cn0ValC{
        }
    }
    namespace Nonecmp1cr{    ///<Comparator1 Control Register
        using Addr = Register::Address<0x400d0004,0xffffffe8,0,unsigned>;
        ///Comparator1 Enable
1 = Enable
0 = Disable
Comparator1 output needs wait 10 us stable time after CMP1EN is set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
        ///Comparator1 Interrupt Enable
1 = Enable Comparator1 interrupt function
0 = Disable Comparator1 interrupt function
Interrupt is generated if CMP1IE bit is set to 1 after comparator1 conversion finished.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ie{}; 
        namespace IeValC{
        }
        ///Comparator1 Hysterisis Enable
1 = Enable comparator1 Hysterisis function; the typical range is 20mV.
0 = Disable comparator1 Hysterisis function (Default).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hysen{}; 
        namespace HysenValC{
        }
        ///Comparator1 negative input select
1 = The internal comparator reference voltage (Vref=1.2V) is selected as the negative comparator input
0 = The comparator1 reference pin CPN1 is selected as the negative comparator input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cn1{}; 
        namespace Cn1ValC{
        }
    }
    namespace Nonecmpsr{    ///<Comparator Channel Selection Enable Register
        using Addr = Register::Address<0x400d0008,0xfffffff0,0,unsigned>;
        ///Comparator0 Flag
This bit is set by hardware whenever the comparator0 output changes state. This will cause an interrupt if CMP0IE set.
Write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmpf0{}; 
        namespace Cmpf0ValC{
        }
        ///Comparator1 Flag
This bit is set by hardware whenever the comparator1 output changes state. This will cause an interrupt if CMP1IE set.
Write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmpf1{}; 
        namespace Cmpf1ValC{
        }
        ///Comparator0 Output
Synchronized to the APB clock to allow reading by software. Cleared when the comparator is disabled (CMP0EN = 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> co0{}; 
        namespace Co0ValC{
        }
        ///Comparator1 Output
Synchronized to the APB clock to allow reading by software. Cleared when the comparator is disabled (CMP1EN = 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> co1{}; 
        namespace Co1ValC{
        }
    }
}
