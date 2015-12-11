#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace Nonewtcr{    ///<Watchdog Timer Control Register
        using Addr = Register::Address<0x40004000,0xfffff800,0,unsigned>;
        ///Clear Watchdog Timer (write protection bit) 
Set this bit will clear the Watchdog timer. 
0 = Writing 0 to this bit has no effect
1 = Reset the contents of the Watchdog timer
NOTE: This bit will auto clear after few clock cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtr{}; 
        ///Watchdog Timer Reset Enable (write protection bit)
Setting this bit will enable the Watchdog timer reset function.
0 = Disable Watchdog timer reset function
1 = Enable Watchdog timer reset function
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wtre{}; 
        ///Watchdog Timer Reset Flag
When the Watchdog timer initiates a reset, the hardware will set this bit. This flag can be read by software to determine the source of reset. Software is responsible to clear it manually by writing 1 to it. If WTRE is disabled, then the Watchdog timer has no effect on this bit.
0 = Watchdog timer reset did not occur
1 = Watchdog timer reset occurs
NOTE: This bit is cleared by writing 1 to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wtrf{}; 
        ///Watchdog Timer Interrupt Flag
If the Watchdog timer interrupt is enabled, then the hardware will set this bit to indicate that the Watchdog timer interrupt has occurred. 
0 = Watchdog timer interrupt does not occur
1 = Watchdog timer interrupt occurs
NOTE: This bit is cleared by writing 1 to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wtif{}; 
        ///Watchdog Timer Wakeup Function Enable bit (write protection bit)
0 : Disable Watchdog timer Wakeup CPU function.
1 : Enable the Wakeup function that Watchdog timer timeout can wake up CPU from power-down mode.
Note: CHIP can wakeup by WDT only if WDT clock source select RC10K.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wtwke{}; 
        ///Watchdog Timer Wakeup Flag
If Watchdog timer causes CPU wakes up from power-down mode, this bit will be set to high. It must be cleared by software with a write 1 to this bit.
0 : Watchdog timer does not cause CPU wakeup.
1 : CPU wake up from sleep or power-down mode by Watchdog timeout.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wtwkf{}; 
        ///Watchdog Timer Interrupt Enable (write protection bit)
0 = Disable the Watchdog timer interrupt
1 = Enable the Watchdog timer interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wtie{}; 
        ///Watchdog Timer Enable (write protection bit)
0 = Disable the Watchdog timer (This action will reset the internal counter)
1 = Enable the Watchdog timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wte{}; 
        ///Watchdog Timer Interval Select (write protection bit)
These three bits select the timeout interval for the Watchdog timer. 
WTIS	Timeout Interval Selection	Interrupt Period	WTR Timeout Interval (WDT_CLK=12MHz)	
000	2^4 * WDT_CLK	(2^4 + 1024) * WDT_CLK	1.33 us ~ 86.67 us	
001	2^6 * WDT_CLK	(2^6 + 1024) * WDT_CLK	5.33 us ~ 90.67 us	
010	2^8 * WDT_CLK	(2^8 + 1024) * WDT_CLK	21.33 us ~ 106.67 us	
011	2^10 * WDT_CLK	(2^10 + 1024) * WDT_CLK	85.33 us ~ 170.67 us	
100	2^12 * WDT_CLK	(2^12 + 1024) * WDT_CLK	341.33 us ~ 426.67 us	
101	2^14 * WDT_CLK	(2^14 + 1024) * WDT_CLK	1.36 ms ~ 1.45 ms	
110	2^16 * WDT_CLK	(2^16 + 1024) * WDT_CLK	5.46 ms ~ 5.55 ms	
111	2^18 * WDT_CLK	(2^18 + 1024) * WDT_CLK	21.84 ms ~ 21.93 ms	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> wtis{}; 
    }
}
