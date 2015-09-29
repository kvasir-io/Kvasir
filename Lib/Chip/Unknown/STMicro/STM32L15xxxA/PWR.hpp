#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power control
    namespace Nonecr{    ///<power control register
        using Addr = Register::Address<0x40007000,0xffffa000,0,unsigned>;
        ///Low power run mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> lprun{}; 
        ///Voltage scaling range               selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> vos{}; 
        ///Fast wakeup
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fwu{}; 
        ///Ultralow power mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ulp{}; 
        ///Disable backup domain write               protection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dbp{}; 
        ///PVD level selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> pls{}; 
        ///Power voltage detector               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pvde{}; 
        ///Clear standby flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csbf{}; 
        ///Clear wakeup flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cwuf{}; 
        ///Power down deepsleep
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdds{}; 
        ///Low-power deep sleep
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lpsdsr{}; 
    }
    namespace Nonecsr{    ///<power control/status register
        using Addr = Register::Address<0x40007004,0xfffff8c0,0,unsigned>;
        ///Enable WKUP pin 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ewup3{}; 
        ///Enable WKUP pin 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ewup2{}; 
        ///Enable WKUP pin 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ewup1{}; 
        ///Regulator LP flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> reglpf{}; 
        ///Voltage Scaling select               flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> vosf{}; 
        ///Internal voltage reference (VREFINT)               ready flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vrefintrdyf{}; 
        ///PVD output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pvdo{}; 
        ///Standby flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sbf{}; 
        ///Wakeup flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wuf{}; 
    }
}
