#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power control
    namespace Nonecr{    ///<power control register
        using Addr = Register::Address<0x40007000,0xffff8000,0,unsigned>;
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
        ///Flash power down in Stop
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fpds{}; 
        ///Fast wakeup
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fwu{}; 
        ///Voltage scaling range
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> vos{}; 
        ///Deep sleep mode with Flash memory kept
              off
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dsEeKoff{}; 
        ///Low power run mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> lprun{}; 
    }
    namespace Nonecsr{    ///<power control/status register
        using Addr = Register::Address<0x40007004,0xfffffcc0,0,unsigned>;
        ///Backup regulator enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bre{}; 
        ///Enable WKUP pin
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ewup{}; 
        ///Backup regulator ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brr{}; 
        ///PVD output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pvdo{}; 
        ///Standby flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sbf{}; 
        ///Wakeup flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wuf{}; 
        ///Voltage Scaling select
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> vosf{}; 
        ///Regulator LP flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> reglpf{}; 
    }
}
