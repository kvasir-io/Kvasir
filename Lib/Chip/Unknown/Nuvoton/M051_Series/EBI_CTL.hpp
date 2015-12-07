#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace Noneebicon{    ///<External Bus Interface General Control Register
        using Addr = Register::Address<0x50010000,0xfff8f8fc,0,unsigned>;
        ///EBI Enable
This bit is the functional enable bit for EBI.
0 = EBI function is disabled
1 = EBI function is enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> exten{}; 
        namespace ExtenValC{
        }
        ///EBI data width 16 bit
This bit defines if the data bus is 8-bit or 16-bit.
0 = EBI data width is 8 bit
1 = EBI data width is 16 bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extbw16{}; 
        namespace Extbw16ValC{
        }
        ///External Output Clock Divider
The frequency of EBI output clock is controlled by MCLKDIV.

MCLKDIV	Output clock (MCLK)	
000	HCLK/1	
001	HCLK/2	
010	HCLK/4	
011	HCLK/8	
100	HCLK/16	
101	HCKL/32	
11X	default	

Notice: Default value of output clock is HCLK/1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> mclkdiv{}; 
        namespace MclkdivValC{
        }
        ///Expand Time of ALE
The ALE width (tALE) to latch the address can be controlled by ExttALE.
tALE = (ExttALE + 1) * MCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> exttale{}; 
        namespace ExttaleValC{
        }
    }
    namespace Noneextime{    ///<External Bus Interface 0 Timing Control Register
        using Addr = Register::Address<0x50010004,0xf0ff0807,0,unsigned>;
        ///EBI Data Accesss Time
ExttACC define data access time (tACC).
tACC = (ExttACC + 1) * MCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> exttacc{}; 
        namespace ExttaccValC{
        }
        ///EBI Data Access Hold Time
ExttAHD define data access hold time (tAHD).
tAHD = (ExttAHD + 1) * MCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> exttahd{}; 
        namespace ExttahdValC{
        }
        ///Idle State Cycle After Write
When write action is finish, idle state is inserted and nCS return to high if ExtIW2X is not zero.
Idle state cycle = (ExtIW2X * MCLK)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> extiw2x{}; 
        namespace Extiw2xValC{
        }
        ///Idle State Cycle Between Read-Read
When read action is finish and next action is going to read, idle state is inserted and nCS return to high if ExtIR2R is not zero.
Idle state cycle = (ExtIR2R * MCLK)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> extir2r{}; 
        namespace Extir2rValC{
        }
    }
}
