#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace Noneispcon{    ///<ISP Control Register
        using Addr = Register::Address<0x5000c000,0xffff880c,0,unsigned>;
        ///ISP Enable
This bit is protected bit. ISP function enable bit. Set this bit to enable ISP function.
1 = Enable ISP function
0 = Disable ISP function
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ispen{}; 
        ///Boot Select 
This bit is protected bit. Set/clear this bit to select next booting from LDROM/APROM, respectively. This bit also functions as MCU booting status flag, which can be used to check where MCU booted from. This bit is initiated with the inversed value of CBS in Config0 after power-on reset; It keeps the same value at other reset.
1 = boot from LDROM
0 = boot from APROM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bs{}; 
        ///Config Update Enable
Writing this bit to 1 enables s/w to update Config value by ISP procedure regardless of program code is running in APROM or LDROM.
1 = Config update enable 
0 = Config update disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cfguen{}; 
        ///LDROM Update Enable
LDROM update enable bit. 
1 = LDROM can be updated when the MCU runs in APROM.
0 = LDROM cannot be updated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lduen{}; 
        ///ISP Fail Flag
This bit is set by hardware when a triggered ISP meets any of the following conditions:
(1) APROM writes to itself.
(2) LDROM writes to itself. 
(3) Destination address is illegal, such as over an available range.
Write 1 to clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ispff{}; 
        ///Software Reset
Writing 1 to this bit to start software reset. 
It is cleared by hardware after reset is finished.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Flash Program Time
PT[2]	PT[1]	PT[0]	Program Time (us)	
0	0	0	40	
0	0	1	45	
0	1	0	50	
0	1	1	55	
1	0	0	20	
1	0	1	25	
1	1	0	30	
1	1	1	35	
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pt{}; 
        ///Flash Erase Time
ET[2]	ET[1]	ET[0]	Erase Time (ms)	
0	0	0	20 (default)	
0	0	1	25	
0	1	0	30	
0	1	1	35	
1	0	0	3	
1	0	1	5	
1	1	0	10	
1	1	1	15	
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> et{}; 
    }
    namespace Noneispadr{    ///<ISP Address Register
        using Addr = Register::Address<0x5000c004,0x00000000,0,unsigned>;
        ///ISP Address 
NuMicro M051 series equips with a maximum 16kx32 embedded flash, it supports word program only. ISPARD[1:0] must be kept 2'b00 for ISP operation. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ispadr{}; 
    }
    namespace Noneispdat{    ///<ISP Data Register
        using Addr = Register::Address<0x5000c008,0x00000000,0,unsigned>;
        ///ISP Data 
Write data to this register before ISP program operation
Read data from this register after ISP read operation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ispdat{}; 
    }
    namespace Noneispcmd{    ///<ISP Command Register
        using Addr = Register::Address<0x5000c00c,0xffffffc0,0,unsigned>;
        ///ISP Command 
ISP command table is shown below:
Operation Mode	FOEN	FCEN	FCTRL[3:0]	
Read	0	0	0	0	0	0	
Program	1	0	0	0	0	1	
Page Erase	1	0	0	0	1	0	
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> foenFcenFctrl{}; 
    }
    namespace Noneisptrg{    ///<ISP Trigger Control Register
        using Addr = Register::Address<0x5000c010,0xfffffffe,0,unsigned>;
        ///ISP start trigger
Write 1 to start ISP operation and this bit will be cleared to 0 by hardware automatically when ISP operation is finish.

1 = ISP is on going

0 = ISP done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ispgo{}; 
    }
    namespace Nonedfbadr{    ///<Data Flash Base Address
        using Addr = Register::Address<0x5000c014,0x00000000,0,unsigned>;
        ///Data Flash Base Address
This register indicates data flash start address.

It is a read only register.

For 8/16/32/64kB flash memory device, the data flash size is 4kB and it start address is fixed at 0x01F000 by hardware internally.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dfba{}; 
    }
    namespace Nonefatcon{    ///<Flash Access Time Control Register
        using Addr = Register::Address<0x5000c018,0xffffffe0,0,unsigned>;
        ///Flash Power Save Enable
If CPU clock is slower than 24 MHz, then s/w can enable flash power saving function.
1 = Enable flash power saving
0 = Disable flash power saving
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fpsen{}; 
        ///Flash Access Time Window Select
These bits are used to decide flash sense amplifier active duration.



FATS	Access Time window (ns)	
000	40	
001	50	
010	60	
011	70	
100	80	
101	90	
110	100	
111	Reserved	
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> fats{}; 
        ///Flash Low Speed Mode Enable
1 = Flash access always no wait state (zero wait state)
0 = Insert wait state while Flash access discontinued address. 
Note: Set this bit only when HCLK <= 25MHz. If HCLK > 25MHz, CPU will fetch wrong code and cause fail result.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lSpeed{}; 
    }
}
