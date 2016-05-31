#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Registers group
    namespace EbiEbicon{    ///<External Bus Interface General Control Register
        using Addr = Register::Address<0x50010000,0xfff8f8fc,0x00000000,unsigned>;
        ///EBI EnableThis bit is the functional enable bit for EBI. 1: EBI function is enabled0: EBI function is disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> exten{}; 
        ///EBI data width 16 bitThis bit defines if the data bus is 8-bit or 16-bit. 1: EBI data width is 16 bit0: EBI data width is 8 bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extbw16{}; 
        ///External Output Clock DividerThe frequency of EBI output clock is controlled by MCLKDIV as follows table:MCLKDIV	Output clock (MCLK)	000	HCLK/1	001	HCLK/2	010	HCLK/4	011	HCLK/8	100	HCLK/16	101	HCLK/32	11X	default	Notice: Default value of output clock is HCLK/1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> mclkdiv{}; 
        ///Expand Time of ALEThe ALE width (tALE) to latch the address can be controlled by ExttALE.tALE = (ExttALE+1)*MCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> exttale{}; 
    }
    namespace EbiExtime{    ///<External Bus Interface Timing Control Register
        using Addr = Register::Address<0x50010004,0xf0ff0807,0x00000000,unsigned>;
        ///EBI Data Access TimeExttACC define data access time (tACC).tACC = (ExttACC+1)*MCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> exttacc{}; 
        ///EBI Data Access Hold TimeExttAHD define data access hold time (tAHD).tAHD = (ExttAHD+1)*MCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> exttahd{}; 
        ///Idle State Cycle After WriteWhen write action is finish, idle state is inserted and nCS return to high if ExtIW2X is not zero.Idle state cycle = (ExtIW2X)*MCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> extiw2x{}; 
        ///Idle State Cycle Between Read-ReadWhen read action is finish and next action is going to read, idle state is inserted and nCS return to high if ExtIR2R is not zero.Idle state cycle = (ExtIR2R)*MCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> extir2r{}; 
    }
}
