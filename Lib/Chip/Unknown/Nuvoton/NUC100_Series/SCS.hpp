#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace NonesystCsr{    ///<SysTick Control and Status
        using Addr = Register::Address<0xe000e010,0xfffefff8,0,unsigned>;
        ///1 : the counter will operate in a multi-shot manner.
0 : the counter is disabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        ///1 : counting down to 0 will cause the SysTick exception to be pended. Clearing the SysTick Current Value register by a register write in software will not cause SysTick to be pended.
0 : counting down to 0 does not cause the SysTick exception to be pended. Software can use COUNTFLAG to determine if a count to zero has occurred.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tickint{}; 
        ///1 : core clock used for SysTick.
0 : clock source is (optional) external reference clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clksrc{}; 
        ///Returns 1 if timer counted to 0 since last time this register was read.
COUNTFLAG is set by a count transition from 1 to 0.
COUNTFLAG is cleared on read or by a write to the Current Value register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> countflag{}; 
    }
    namespace NonesystRvr{    ///<SysTick Reload value
        using Addr = Register::Address<0xe000e014,0xff000000,0,unsigned>;
        ///Value to load into the Current Value register when the counter reaches 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> reload{}; 
    }
    namespace NonesystCvr{    ///<SysTick Current value
        using Addr = Register::Address<0xe000e018,0xff000000,0,unsigned>;
        ///Current counter value. This is the value of the counter at the time it is sampled. The counter does not provide read-modify-write protection. The register is write-clear. A software write of any value will clear the register to 0. Unsupported bits RAZ (see SysTick Reload Value register).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> current{}; 
    }
    namespace NonenvicIser{    ///<IRQ0 ~ IRQ31 Set-Enable Control Register
        using Addr = Register::Address<0xe000e100,0x00000000,0,unsigned>;
        ///Enable one or more interrupts within a group of 32. Each bit represents an interrupt number from IRQ0 ~ IRQ31 (Vector number from 16 ~ 47). 
Writing 1 will enable the associated interrupt.
Writing 0 has no effect.
The register reads back with the current enable state.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setena{}; 
    }
    namespace NonenvicIcer{    ///<IRQ0 ~ IRQ31 Clear-Enable Control Register
        using Addr = Register::Address<0xe000e180,0x00000000,0,unsigned>;
        ///Disable one or more interrupts within a group of 32. Each bit represents an interrupt number from IRQ0 ~ IRQ31 (Vector number from 16 ~ 47). 
Writing 1 will disable the associated interrupt.
Writing 0 has no effect.
The register reads back with the current enable state.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrena{}; 
    }
    namespace NonenvicIspr{    ///<IRQ0 ~ IRQ31 Set-Pending Control Register
        using Addr = Register::Address<0xe000e200,0x00000000,0,unsigned>;
        ///Writing 1 to a bit pends the associated interrupt under software control. Each bit represents an interrupt number from IRQ0 ~ IRQ31 (Vector number from 16 ~ 47).
Writing 0 has no effect.
The register reads back with the current pending state.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setpend{}; 
    }
    namespace NonenvicIcpr{    ///<IRQ0 ~ IRQ31 Clear-Pending Control Register
        using Addr = Register::Address<0xe000e280,0x00000000,0,unsigned>;
        ///Writing 1 to a bit un-pends the associated interrupt under software control. Each bit represents an interrupt number from IRQ0 ~ IRQ31 (Vector number from 16 ~ 47).
Writing 0 has no effect.
The register reads back with the current pending state.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrpend{}; 
    }
    namespace NonenvicIpr0{    ///<IRQ0 ~ IRQ3 Priority Control Register
        using Addr = Register::Address<0xe000e400,0x3f3f3f3f,0,unsigned>;
        ///Priority of IRQ0
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri0{}; 
        ///Priority of IRQ1
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri1{}; 
        ///Priority of IRQ2
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri2{}; 
        ///Priority of IRQ3
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri3{}; 
    }
    namespace NonenvicIpr1{    ///<IRQ4 ~ IRQ7 Priority Control Register
        using Addr = Register::Address<0xe000e404,0x3f3f3f3f,0,unsigned>;
        ///Priority of IRQ4
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri4{}; 
        ///Priority of IRQ5
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri5{}; 
        ///Priority of IRQ6
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri6{}; 
        ///Priority of IRQ7
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri7{}; 
    }
    namespace NonenvicIpr2{    ///<IRQ8 ~ IRQ11 Priority Control Register
        using Addr = Register::Address<0xe000e408,0x3f3f3f3f,0,unsigned>;
        ///Priority of IRQ8
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri8{}; 
        ///Priority of IRQ9
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri9{}; 
        ///Priority of IRQ10
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri10{}; 
        ///Priority of IRQ11
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri11{}; 
    }
    namespace NonenvicIpr3{    ///<IRQ12 ~ IRQ15 Priority Control Register
        using Addr = Register::Address<0xe000e40c,0x3f3f3f3f,0,unsigned>;
        ///Priority of IRQ12
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri12{}; 
        ///Priority of IRQ13
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri13{}; 
        ///Priority of IRQ14
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri14{}; 
        ///Priority of IRQ15
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri15{}; 
    }
    namespace NonenvicIpr4{    ///<IRQ16 ~ IRQ19 Priority Control Register
        using Addr = Register::Address<0xe000e410,0x3f3f3f3f,0,unsigned>;
        ///Priority of IRQ16
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri16{}; 
        ///Priority of IRQ17
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri17{}; 
        ///Priority of IRQ18
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri18{}; 
        ///Priority of IRQ19
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri19{}; 
    }
    namespace NonenvicIpr5{    ///<IRQ20 ~ IRQ23 Priority Control Register
        using Addr = Register::Address<0xe000e414,0x3f3f3f3f,0,unsigned>;
        ///Priority of IRQ20
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri20{}; 
        ///Priority of IRQ21
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri21{}; 
        ///Priority of IRQ22
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri22{}; 
        ///Priority of IRQ23
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri23{}; 
    }
    namespace NonenvicIpr6{    ///<IRQ24 ~ IRQ27 Priority Control Register
        using Addr = Register::Address<0xe000e418,0x3f3f3f3f,0,unsigned>;
        ///Priority of IRQ24
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri24{}; 
        ///Priority of IRQ25
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri25{}; 
        ///Priority of IRQ26
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri26{}; 
        ///Priority of IRQ27
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri27{}; 
    }
    namespace NonenvicIpr7{    ///<IRQ28 ~ IRQ31 Priority Control Register
        using Addr = Register::Address<0xe000e41c,0x3f3f3f3f,0,unsigned>;
        ///Priority of IRQ28
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri28{}; 
        ///Priority of IRQ29
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri29{}; 
        ///Priority of IRQ30
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri30{}; 
        ///Priority of IRQ31
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri31{}; 
    }
    namespace Nonecpuid{    ///<CPUID Register
        using Addr = Register::Address<0xe000ed00,0x00f00000,0,unsigned>;
        ///Reads as 0x0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> revesion{}; 
        ///Reads as 0xC20
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> partno{}; 
        ///Reads as 0xC for ARMv6-M parts
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> part{}; 
        ///Implementer code assigned by ARM. ( ARM = 0x41)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> implementer{}; 
    }
    namespace Noneicsr{    ///<Interrupt Control State Register
        using Addr = Register::Address<0xe000ed04,0x61200e00,0,unsigned>;
        ///0 = Thread mode
Value > 1 = the exception number for the current executing exception.This is a read only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> vectactive{}; 
        ///Indicates the exception number for the highest priority pending exception. The pending state includes the effect of memory-mapped enable and mask registers. It does not include the PRIMASK special-purpose register qualifier. A value of zero indicates no pending exceptions.
This is a read only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,12),Register::ReadWriteAccess,unsigned> vectpending{}; 
        ///Indicates if an external configurable (NVIC generated) interrupt is pending.
This is a read only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> isrpending{}; 
        ///If set, a pending exception will be serviced on exit from the debug halt state.
This is a read only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> isrpreempt{}; 
        ///Write 1 to clear a pending SysTick. This is a write only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pendstclr{}; 
        ///Set a pending SysTick. Reads back with current state (1 if Pending, 0 if not).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pendstset{}; 
        ///Write 1 to clear a pending PendSV interrupt. This is a write only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pendsvclr{}; 
        ///Set a pending PendSV interrupt. This is normally used to request a context switch. Reads back with current state (1 if Pending, 0 if not).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pendsvset{}; 
        ///Setting this bit will activate an NMI. Since NMI is the highest priority exception, it will activate as soon as it is registered. Reads back with current state (1 if Pending, 0 if not).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nmipendset{}; 
    }
    namespace Noneaircr{    ///<Application Interrupt and Reset Control Register
        using Addr = Register::Address<0xe000ed0c,0x0000fff9,0,unsigned>;
        ///Set this bit to 1 will clears all active state information for fixed and configurable exceptions. The bit is a write only bit and can only be written when the core is halted. Note: It is the debugger's responsibility to re-initialize the stack. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vectclractive{}; 
        ///Writing this bit 1 will cause a reset signal to be asserted to the chip to indicate a reset is requested. The bit is a write only bit and self-clears as part of the reset sequence. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sysresetreq{}; 
        ///When write this register, this field should be 0x05FA, otherwise the write action will be unpredictable. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> vectorkey{}; 
    }
    namespace Nonescr{    ///<System Control Register
        using Addr = Register::Address<0xe000ed10,0xffffffe9,0,unsigned>;
        ///When set to 1, the core can enter a sleep state on an exception return to Thread mode. This is the mode and exception level entered at reset, the base level of execution.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sleeponexit{}; 
        ///A qualifying hint that indicates waking from sleep might take longer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sleepdeep{}; 
        ///When enabled, interrupt transitions from Inactive to Pending are included in the list of wakeup events for the WFE instruction.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sevonpend{}; 
    }
    namespace Noneshpr2{    ///<System Handler Priority Register 2
        using Addr = Register::Address<0xe000ed1c,0x3fffffff,0,unsigned>;
        ///Priority of system handler 11 SVCall
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri11{}; 
    }
    namespace Noneshpr3{    ///<System Handler Priority Register 3
        using Addr = Register::Address<0xe000ed20,0x3f3fffff,0,unsigned>;
        ///Priority of system handler 14 PendSV
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri14{}; 
        ///Priority of system handler 15 SysTick
"0" denotes the highest priority and "3" denotes lowest priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri15{}; 
    }
}
