#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace Nonedbncecon{    ///<External Interrupt De-bounce Control
        using Addr = Register::Address<0x50004180,0xffffffc0,0,unsigned>;
        ///De-bounce sampling cycle selection
DBCLKSEL	Description	
0	Sample interrupt input once per 1 clocks	
1	Sample interrupt input once per 2 clocks	
2	Sample interrupt input once per 4 clocks	
3	Sample interrupt input once per 8 clocks	
4	Sample interrupt input once per 16 clocks	
5	Sample interrupt input once per 32 clocks	
6	Sample interrupt input once per 64 clocks	
7	Sample interrupt input once per 128 clocks	
8	Sample interrupt input once per 256 clocks	
9	Sample interrupt input once per 2*256 clocks	
10	Sample interrupt input once per 4*256clocks	
11	Sample interrupt input once per 8*256 clocks	
12	Sample interrupt input once per 16*256 clocks	
13	Sample interrupt input once per 32*256 clocks	
14	Sample interrupt input once per 64*256 clocks	
15	Sample interrupt input once per 128*256 clocks	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dbclksel{}; 
        ///De-bounce counter clock source select
1 = De-bounce counter clock source is the internal 10 KHz clock
0 = De-bounce counter clock source is the HCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dbclksrc{}; 
        ///Interrupt clock On mode
Set this bit to 0 will disable the interrupt generate circuit clock, if the pin[n] interrupt is disabled
1 = Interrupt generated circuit clock always enable
0 = Disable the clock if the GPIOA/B/C/D/E[n] interrupt is disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> iclkOn{}; 
    }
}
