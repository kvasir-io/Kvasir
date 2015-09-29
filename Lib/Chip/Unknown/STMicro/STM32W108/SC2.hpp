#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial controller 2
    namespace Nonesc2Isr{    ///<Serial controller interrupt status
          register
        using Addr = Register::Address<0x4000a80c,0xffff8000,0,unsigned>;
        ///PE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        ///FE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fe{}; 
        ///TXULODB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txulodb{}; 
        ///TXULODA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txuloda{}; 
        ///RXULODB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rxulodb{}; 
        ///RXULODA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxuloda{}; 
        ///NACK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nack{}; 
        ///CMDFIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdfin{}; 
        ///BTF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btf{}; 
        ///BRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> brf{}; 
        ///UDR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> udr{}; 
        ///OVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///IDLE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> idle{}; 
        ///TXE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txe{}; 
        ///RXNE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxne{}; 
    }
    namespace Nonesc2Ier{    ///<Serial controller interrupt enable
          register
        using Addr = Register::Address<0x4000a84c,0xffff8000,0,unsigned>;
        ///PEIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> peie{}; 
        ///FEIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> feie{}; 
        ///TXULODBIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txulodbie{}; 
        ///TXULODAIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txulodaie{}; 
        ///RXULODBIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rxulodbie{}; 
        ///RXULODAIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxulodaie{}; 
        ///NACKIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nackie{}; 
        ///CMDFINIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdfinie{}; 
        ///BTFIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btfie{}; 
        ///BRFIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> brfie{}; 
        ///UDRIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> udrie{}; 
        ///OVRIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovrie{}; 
        ///IDLEIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> idleie{}; 
        ///TXEIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txeie{}; 
        ///RXNEIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxneie{}; 
    }
    namespace Nonesc2Icr{    ///<Serial controller interrupt control
          register
        using Addr = Register::Address<0x4000a858,0xfffffff8,0,unsigned>;
        ///IDLELEVEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> idlelevel{}; 
        ///TXELEVEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txelevel{}; 
        ///RXNELEVEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxnelevel{}; 
    }
    namespace Nonesc2Dr{    ///<Serial controller data
          register
        using Addr = Register::Address<0x4000c03c,0xffffff00,0,unsigned>;
        ///DR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dr{}; 
    }
    namespace Nonesc2Cr{    ///<Serial controller control
          register
        using Addr = Register::Address<0x4000c054,0xfffffffc,0,unsigned>;
        ///MODE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode{}; 
    }
    namespace Nonesc2Crr1{    ///<Serial controller clock rate register
          1
        using Addr = Register::Address<0x4000c060,0xfffffff0,0,unsigned>;
        ///LIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> lin{}; 
    }
    namespace Nonesc2Crr2{    ///<Serial controller clock rate register
          2
        using Addr = Register::Address<0x4000c064,0xfffffff0,0,unsigned>;
        ///EXP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exp{}; 
    }
}
