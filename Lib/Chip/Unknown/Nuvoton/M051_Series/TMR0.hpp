#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace Nonetcsr{    ///<Timer0 Control and Status Register
        using Addr = Register::Address<0x40010000,0x81feff00,0,unsigned>;
        ///Pre-scale Counter
Clock input is divided by PRESCALE+1 before it is fed to the counter. If PRESCALE=0, then there is no scaling.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prescale{}; 
        namespace PrescaleValC{
        }
        ///Data Load Enable
When TDR_EN is set, TDR (Timer Data Register) will be updated continuously with the 24-bit up-timer value as the timer is counting. 
1 = Timer Data Register update enable.
0 = Timer Data Register update disable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tdrEn{}; 
        namespace TdrenValC{
        }
        ///Timer Active Status Bit (Read only)
This bit indicates the up-timer status.
0 = Timer is not active.
1 = Timer is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cact{}; 
        namespace CactValC{
        }
        ///Timer Reset Bit
Set this bit will reset the 24-bit up-timer, 8-bit pre-scale counter and also force CEN to 0.
0 = No effect.
1 = Reset Timer's 8-bit pre-scale counter, internal 24-bit up-timer and CEN bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> crst{}; 
        namespace CrstValC{
        }
        ///Timer Operating Mode
MODE	Timer Operating Mode	
00	The timer is operating in the one-shot mode. The associated interrupt signal is generated once (if IE is enabled) and CEN is automatically cleared by hardware.	
01	The timer is operating in the periodic mode. The associated interrupt signal is generated periodically (if IE is enabled).	
10	The timer is operating in the toggle mode. The interrupt signal is generated periodically (if IE is enabled). And the associated signal (tout) is changing back and forth with 50% duty cycle.	
11	Reserved 	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,27),Register::ReadWriteAccess,unsigned> mode{}; 
        namespace ModeValC{
        }
        ///Interrupt Enable Bit
1 = Enable timer Interrupt.
0 = Disable timer Interrupt. 
If timer interrupt is enabled, the timer asserts its interrupt signal when the associated up-timer value is equal to TCMPR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ie{}; 
        namespace IeValC{
        }
        ///Timer Enable Bit
1 = Starts counting
0 = Stops/Suspends counting
Note1: In stop status, and then set CEN to 1 will enables the 24-bit up-timer keeps up counting from the last stop counting value.
Note2: This bit is auto-cleared by hardware in one-shot mode (MODE[28:27]=00) when the associated timer interrupt is generated (IE[29]=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cen{}; 
        namespace CenValC{
        }
    }
    namespace Nonetcmpr{    ///<Timer0 Compare Register
        using Addr = Register::Address<0x40010004,0xff000000,0,unsigned>;
        ///Timer Compared Value
TCMP is a 24-bit compared register. When the internal 24-bit up-timer counts and its value is equal to TCMP value, a Timer Interrupt is requested if the timer interrupt is enabled with TCSR.IE[29]=1. The TCMP value defines the timer counting cycle time.
Time out period = (Period of timer clock input) * (8-bit PRESCALE + 1) * (24-bit TCMP)
NOTE1: Never write 0x0 or 0x1 in TCMP, or the core will run into unknown state.
NOTE2: No matter CEN is 0 or 1, whenever software write a new value into this register, TIMER will restart counting using this new value and abort previous count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> tcmp{}; 
        namespace TcmpValC{
        }
    }
    namespace Nonetisr{    ///<Timer0 Interrupt Status Register
        using Addr = Register::Address<0x40010008,0xfffffffe,0,unsigned>;
        ///Timer Interrupt Flag
This bit indicates the interrupt status of Timer.
TIF bit is set by hardware when the up counting value of internal 24-bit timer matches the timer compared value (TCMP). It is cleared by writing 1 to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tif{}; 
        namespace TifValC{
        }
    }
    namespace Nonetdr{    ///<Timer0 Data Register
        using Addr = Register::Address<0x4001000c,0xff000000,0,unsigned>;
        ///Timer Data Register
When TCSR.TDR_EN is set to 1, the internal 24-bit up-timer value will be loaded into TDR. User can read this register for the up-timer value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> tdr{}; 
        namespace TdrValC{
        }
    }
}
