#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power control
    namespace Nonecr{    ///<Power control register
          (PWR_CR)
        using Addr = Register::Address<0x40007000,0xfffffe00,0,unsigned>;
        ///Low Power Deep Sleep
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lpds{}; 
        ///Power Down Deep Sleep
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdds{}; 
        ///Clear Wake-up Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cwuf{}; 
        ///Clear STANDBY Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csbf{}; 
        ///Power Voltage Detector
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pvde{}; 
        ///PVD Level Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> pls{}; 
        ///Disable Backup Domain write
              protection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dbp{}; 
    }
    namespace Nonecsr{    ///<Power control register
          (PWR_CR)
        using Addr = Register::Address<0x40007004,0xfffffef8,0,unsigned>;
        ///Wake-Up Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wuf{}; 
        ///STANDBY Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sbf{}; 
        ///PVD Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pvdo{}; 
        ///Enable WKUP pin
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ewup{}; 
    }
}
