#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace Noneinir{    ///<RTC Initiation Register
        using Addr = Register::Address<0x40008000,0x00000000,0,unsigned>;
        ///RTC Active Status (Read only), 
0: RTC is at reset state
1: RTC is at normal active state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> active{}; 
        ///RTC Initiation 
When chip is power on, RTC timer counter is at unknown state because RTC timer counter reset is individual with chip reset; user has to write a number (0x a5eb1357) to INIR to reset RTC controller to initialize RTC controller.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> inir{}; 
    }
    namespace Noneaer{    ///<RTC Access Enable Register
        using Addr = Register::Address<0x40008004,0xfffe0000,0,unsigned>;
        ///RTC Register Access Enable Password (Write only)
0xA965 = Enable RTC access 
Others = Disable RTC access 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> aer{}; 
        ///RTC Register Access Enable Flag (Read only)
1 = RTC register read/write enable
0 = RTC register read/write disable
This bit will be set after AER[15:0] register is load a 0xA965, and be clear automatically 512 RTC clock or AER[15:0] is not 0xA965.Register\AER.ENF	1	0	
INIR	R/W	R/W	
AER	R/W	R/W	
FCR	R/W	-	
TLR	R/W	R	
CLR	R/W	R	
TSSR	R/W	R/W	
DWR	R/W	R	
TAR	R/W	-	
CAR	R/W	-	
LIR	R	R	
RIER	R/W	R/W	
RIIR	R/C	R/C	
TTR	R/W	-	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> enf{}; 
    }
    namespace Nonefcr{    ///<RTC Frequency Compensation Register
        using Addr = Register::Address<0x40008008,0xfffff0c0,0,unsigned>;
        ///Fraction Part
Formula = (fraction part of detected value) x 60
Note: Digit in FCR must be expressed as hexadecimal number. Refer to 5.8.4.4 for the examples.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> fraction{}; 
        ///Integer Part
Integer part of detected value	FCR[11:8]	Integer part of detected value	FCR[11:8]	
32776	1111	32768	0111	
32775	1110	32767	0110	
32774	1101	32766	0101	
32773	1100	32765	0100	
32772	1011	32764	0011	
32771	1010	32763	0010	
32770	1001	32762	0001	
32769	1000	32761	0000	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> integer{}; 
    }
    namespace Nonetlr{    ///<Time Loading Register
        using Addr = Register::Address<0x4000800c,0xffc08080,0,unsigned>;
        ///1 Sec Time Digit (0~9)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> 1sec{}; 
        ///10 Sec Time Digit (0~5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> 10sec{}; 
        ///1 Min Time Digit (0~9)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> 1min{}; 
        ///10 Min Time Digit (0~5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> 10min{}; 
        ///1 Hour Time Digit (0~9)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> 1hr{}; 
        ///10 Hour Time Digit (0~2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> 10hr{}; 
    }
    namespace Noneclr{    ///<Calendar Loading Register
        using Addr = Register::Address<0x40008010,0xff00e0c0,0,unsigned>;
        ///1-Day Calendar Digit (0~9)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> 1day{}; 
        ///10-Day Calendar Digit (0~3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> 10day{}; 
        ///1-Month Calendar Digit (0~9)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> 1mon{}; 
        ///10-Month Calendar Digit (0~1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> 10mon{}; 
        ///1-Year Calendar Digit (0~9)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> 1year{}; 
        ///10-Year Calendar Digit (0~9)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> 10year{}; 
    }
    namespace Nonetssr{    ///<Time Scale Selection Register
        using Addr = Register::Address<0x40008014,0xfffffffe,0,unsigned>;
        ///24-Hour / 12-Hour Time Scale Selection
It indicate that TLR and TAR are in 24-hour time mode or 12-hour time mode
1 = select 24-hour time scale
0 = select 12-hour time scale with AM and PM indication
24-hour time scale	12-hour time scale	24-hour time scale	12-hour time scale
(PM time + 20)	
00	12(AM12)	12	32(PM12)	
01	01(AM01)	13	21(PM01)	
02	02(AM02)	14	22(PM02)	
03	03(AM03)	15	23(PM03)	
04	04(AM04)	16	24(PM04)	
05	05(AM05)	17	25(PM05)	
06	06(AM06)	18	26(PM06)	
07	07(AM07)	19	27(PM07)	
08	08(AM08)	20	28(PM08)	
09	09(AM09)	21	29(PM09)	
10	10(AM10)	22	30(PM10)	
11	11(AM11)	23	31(PM11)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> 24h12h{}; 
    }
    namespace Nonedwr{    ///<Day of the Week Register
        using Addr = Register::Address<0x40008018,0xfffffff8,0,unsigned>;
        ///Day of the Week Register 
Value	Day of the Week	
0	Sunday	
1	Monday	
2	Tuesday	
3	Wednesday	
4	Thursday	
5	Friday	
6	Saturday	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dwr{}; 
    }
    namespace Nonetar{    ///<Time Alarm Register
        using Addr = Register::Address<0x4000801c,0xffc08080,0,unsigned>;
        ///1 Sec Time Digit of Alarm Setting (0~9)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> 1sec{}; 
        ///10 Sec Time Digit of Alarm Setting (0~5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> 10sec{}; 
        ///1 Min Time Digit of Alarm Setting (0~9)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> 1min{}; 
        ///10 Min Time Digit of Alarm Setting (0~5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> 10min{}; 
        ///1 Hour Time Digit of Alarm Setting (0~9)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> 1hr{}; 
        ///10 Hour Time Digit of Alarm Setting (0~2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> 10hr{}; 
    }
    namespace Nonecar{    ///<Calendar Alarm Register
        using Addr = Register::Address<0x40008020,0xff00e0c0,0,unsigned>;
        ///1-Day Calendar Digit of Alarm Setting (0~9)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> 1day{}; 
        ///10-Day Calendar Digit of Alarm Setting (0~3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> 10day{}; 
        ///1-Month Calendar Digit of Alarm Setting (0~9)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> 1mon{}; 
        ///10-Month Calendar Digit of Alarm Setting (0~1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> 10mon{}; 
        ///1-Year Calendar Digit of Alarm Setting (0~9)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> 1year{}; 
        ///10-Year Calendar Digit of Alarm Setting (0~9)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> 10year{}; 
    }
    namespace Nonelir{    ///<RTC Leap year Indicator Register
        using Addr = Register::Address<0x40008024,0xfffffffe,0,unsigned>;
        ///Leap Year Indication REGISTER (Real only).
1 = It indicate that this year is leap year
0 = It indicate that this year is not a leap year
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lir{}; 
    }
    namespace Nonerier{    ///<RTC Interrupt Enable Register
        using Addr = Register::Address<0x40008028,0xfffffffc,0,unsigned>;
        ///Alarm Interrupt Enable
1 = RTC Alarm Interrupt is enabled
0 = RTC Alarm Interrupt is disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aier{}; 
        ///Time Tick Interrupt Enable
1 = RTC Time Tick Interrupt is enabled
0 = RTC Time Tick Interrupt is disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tier{}; 
    }
    namespace Noneriir{    ///<RTC Interrupt Indicator Register
        using Addr = Register::Address<0x4000802c,0xfffffffc,0,unsigned>;
        ///RTC Alarm Interrupt Flag
When RTC Alarm Interrupt is enabled (RIER.AIER=1), RTC controller will set AIF to high once the RTC real time counters TLR and CLR reach the alarm setting time registers TAR and CAR. This bit is software clear by writing 1 to it.
1 = Indicates RTC Alarm Interrupt is requested if RIER.AIER=1.
0 = Indicates RTC Alarm Interrupt condition never occurred.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aif{}; 
        ///RTC Time Tick Interrupt Flag
When RTC Time Tick Interrupt is enabled (RIER.TIER=1), RTC controller will set TIF to high periodically in the period selected by TTR[2:0]. This bit is software clear by writing 1 to it.
1 = Indicates RTC Time Tick Interrupt is requested if RIER.TIER=1.
0 = Indicates RTC Time Tick Interrupt condition never occurred.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tif{}; 
    }
    namespace Nonettr{    ///<RTC Time Tick Register
        using Addr = Register::Address<0x40008030,0xfffffff0,0,unsigned>;
        ///Time Tick Register
The RTC time tick period for Periodic Time Tick Interrupt request.
TTR[2:0]	Time tick (second)	
0	1	
1	1/2	
2	1/4	
3	1/8	
4	1/16	
5	1/32	
6	1/64	
7	1/128	

Note: This register can be read back after the RTC register access enable bit ENF(AER[16]) is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ttr{}; 
        ///RTC Timer Wakeup CPU Function Enable Bit
If TWKE is set before CPU is in power-down mode, when a RTC Time Tick occurs, CPU will be wakened up by RTC controller.
1 = Enable the Wakeup function that CPU can be waken up from power-down mode by Time Tick.
0 = Disable Wakeup CPU function by Time Tick.
Note: 
1. Tick timer setting follows TTR[2:0] description. 
2. The CPU can also be wakeup by alarm match occur.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> twke{}; 
    }
}
