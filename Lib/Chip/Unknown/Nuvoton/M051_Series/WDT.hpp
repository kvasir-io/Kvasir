#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Registers group
    namespace WdtWtcr{    ///<Watchdog Timer Control Register
        using Addr = Register::Address<0x40004000,0xfffff82c,0x00000000,unsigned>;
        ///Clear Watchdog Timer Set this bit will clear the Watchdog timer. 0= Writing 0 to this bit has no effect1= Reset the contents of the Watchdog timerNOTE: This bit will auto clear after few clock cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::modify>,unsigned> wtr{}; 
        ///Watchdog Timer Reset EnableSetting this bit will enable the Watchdog timer reset function.0= Disable Watchdog timer reset function1= Enable Watchdog timer reset function
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wtre{}; 
        ///Watchdog Timer Reset FlagWhen the Watchdog timer initiates a reset, the hardware will set this bit. This flag can be read by software to determine the source of reset. Software is responsible to clear it manually by writing 1 to it. If WTRE is disabled, then the Watchdog timer has no effect on this bit.0= Watchdog timer reset does not occur1= Watchdog timer reset occursNOTE: This bit is cleared by writing 1 to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> wtrf{}; 
        ///Watchdog Timer Interrupt FlagIf the Watchdog timer interrupt is enabled, then the hardware will set this bit to indicate that the Watchdog timer interrupt has occurred. If the Watchdog timer interrupt is not enabled, then this bit indicates that a timeout period has elapsed.0= Watchdog timer interrupt does not occur1= Watchdog timer interrupt occursNOTE: Write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> wtif{}; 
        ///Watchdog Timer Wakeup Function Enable bit0 = Disable Watchdog timer Wakeup CPU function.1 = Enable the Wakeup function that Watchdog timer timeout can wake up CPU from power-down mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wtwke{}; 
        ///Watchdog Timer Wakeup FlagIf Watchdog timer causes CPU wakes up from power-down mode, this bit will be set to high. It must be cleared by software with a write 1 to this bit.1 = CPU wake up from sleep or power-down mode by Watchdog timeout.0 = Watchdog timer does not cause CPU wakeup.NOTE: Write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> wtwkf{}; 
        ///Watchdog Timer Interrupt Enable0= Disable the Watchdog timer interrupt1= Enable the Watchdog timer interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wtie{}; 
        ///Watchdog Timer Enable0= Disable the Watchdog timer (This action will reset the internal counter)1= Enable the Watchdog timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wte{}; 
        ///Watchdog Timer Interval Select (write protection bit)These three bits select the timeout interval for the Watchdog timer. WTIS	Timeout Interval Selection	Interrupt Period	WTR Timeout Interval (WDT_CLK=12MHz)	000	2^4 * WDT_CLK	(2^4 + 1024) * WDT_CLK	1.33 us ~ 86.67 us	001	2^6 * WDT_CLK	(2^6 + 1024) * WDT_CLK	5.33 us ~ 90.67 us	010	2^8 * WDT_CLK	(2^8 + 1024) * WDT_CLK	21.33 us ~ 106.67 us	011	2^10 * WDT_CLK	(2^10 + 1024) * WDT_CLK	85.33 us ~ 170.67 us	100	2^12 * WDT_CLK	(2^12 + 1024) * WDT_CLK	341.33 us ~ 426.67 us	101	2^14 * WDT_CLK	(2^14 + 1024) * WDT_CLK	1.36 ms ~ 1.45 ms	110	2^16 * WDT_CLK	(2^16 + 1024) * WDT_CLK	5.46 ms ~ 5.55 ms	111	2^18 * WDT_CLK	(2^18 + 1024) * WDT_CLK	21.84 ms ~ 21.93 ms	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> wtis{}; 
    }
}
