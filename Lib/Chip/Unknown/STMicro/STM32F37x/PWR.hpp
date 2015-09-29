#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power control
    namespace Nonecr{    ///<power control register
        using Addr = Register::Address<0x40007000,0xfffff000,0,unsigned>;
        ///Low-power deep sleep
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lpds{}; 
        ///Power down deepsleep
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdds{}; 
        ///Clear wakeup flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cwuf{}; 
        ///Clear standby flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csbf{}; 
        ///Power voltage detector
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pvde{}; 
        ///PVD level selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> pls{}; 
        ///Disable backup domain write
              protection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dbp{}; 
        ///ENable SD1 ADC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ensd1{}; 
        ///ENable SD2 ADC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ensd2{}; 
        ///ENable SD3 ADC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ensd3{}; 
    }
    namespace Nonecsr{    ///<power control/status register
        using Addr = Register::Address<0x40007004,0xfffff8f8,0,unsigned>;
        ///Wakeup flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wuf{}; 
        ///Standby flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sbf{}; 
        ///PVD output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pvdo{}; 
        ///Enable WKUP1 pin
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ewup1{}; 
        ///Enable WKUP2 pin
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ewup2{}; 
        ///Enable WKUP3 pin
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ewup3{}; 
    }
}
