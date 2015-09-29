#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Base Timer 0
    namespace NonepwmTmcr{    ///<Timer Control Register
        using Addr = Register::Address<0x4002500c,0xffff8080,0,unsigned>;
        ///Count clock selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks20{}; 
        ///Restart enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rtgen{}; 
        ///Pulse output mask bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmsk{}; 
        ///Trigger input edge selection bits 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> egs{}; 
        ///Timer function selection bits 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        ///Output polarity specification bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osel{}; 
        ///Mode selection bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        ///Count operation enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
        ///Software trigger bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> strg{}; 
    }
    namespace NonepwmTmcr2{    ///<Timer Control Register 2
        using Addr = Register::Address<0x40025011,0xfffffffe,0,unsigned char>;
        ///Count clock selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cks3{}; 
    }
    namespace NonepwmStc{    ///< Status Control Register
        using Addr = Register::Address<0x40025010,0xffffff88,0,unsigned char>;
        ///Trigger interrupt request enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tgie{}; 
        ///Duty match interrupt request enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dtie{}; 
        ///Underflow interrupt request enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> udie{}; 
        ///Trigger interrupt request bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tgir{}; 
        ///Duty match interrupt request bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dtir{}; 
        ///Underflow interrupt request bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> udir{}; 
    }
    namespace NonepwmPcsr{    ///<PWM Cycle Set Register
        using Addr = Register::Address<0x40025000,0xffffffff,0,unsigned>;
    }
    namespace NonepwmPdut{    ///<PWM Duty Set Register
        using Addr = Register::Address<0x40025004,0xffffffff,0,unsigned>;
    }
    namespace NonepwmTmr{    ///<Timer Register
        using Addr = Register::Address<0x40025008,0xffffffff,0,unsigned>;
    }
    namespace NoneppgTmcr{    ///<Timer Control Register
        using Addr = Register::Address<0x4002500c,0xffff8080,0,unsigned>;
        ///Count clock selection bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks20{}; 
        ///Restart enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rtgen{}; 
        /// Pulse output mask bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmsk{}; 
        ///Trigger input edge selection bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> egs{}; 
        ///Timer function selection bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        ///Output polarity specification bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osel{}; 
        ///Mode selection bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        ///Count operation enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
        ///Software trigger bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> strg{}; 
    }
    namespace NoneppgTmcr2{    ///<Timer Control Register 2
        using Addr = Register::Address<0x40025011,0xfffffffe,0,unsigned char>;
        ///Count clock selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cks3{}; 
    }
    namespace NoneppgStc{    ///<Status Control Register
        using Addr = Register::Address<0x40025010,0xffffffaa,0,unsigned char>;
        ///Trigger interrupt request enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tgie{}; 
        ///Underflow interrupt request enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> udie{}; 
        ///Trigger interrupt request bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tgir{}; 
        ///Underflow interrupt request bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> udir{}; 
    }
    namespace NoneppgPrll{    ///<LOW Width Reload Register
        using Addr = Register::Address<0x40025000,0xffffffff,0,unsigned>;
    }
    namespace NoneppgPrlh{    ///<HIGH Width Reload Register
        using Addr = Register::Address<0x40025004,0xffffffff,0,unsigned>;
    }
    namespace NoneppgTmr{    ///<Timer Register
        using Addr = Register::Address<0x40025008,0xffffffff,0,unsigned>;
    }
    namespace NonertTmcr{    ///<Timer Control Register
        using Addr = Register::Address<0x4002500c,0xffff8c00,0,unsigned>;
        ///Count clock selection bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks20{}; 
        ///Trigger input edge selection bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> egs{}; 
        ///32-bit timer selection bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> t32{}; 
        ///Timer function selection bits 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        ///Output polarity specification bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osel{}; 
        ///Mode selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        ///Timer enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
        ///Software trigger bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> strg{}; 
    }
    namespace NonertTmcr2{    ///<Timer Control Register 2
        using Addr = Register::Address<0x40025011,0xffffff7e,0,unsigned char>;
        ///Gate Input Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gate{}; 
        ///Count clock selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cks3{}; 
    }
    namespace NonertStc{    ///<Status Control Register
        using Addr = Register::Address<0x40025010,0xffffffaa,0,unsigned char>;
        ///Trigger interrupt request enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tgie{}; 
        ///Underflow interrupt request enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> udie{}; 
        ///Trigger interrupt request bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tgir{}; 
        ///Underflow interrupt request bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> udir{}; 
    }
    namespace NonertPcsr{    ///<PWM Cycle Set Register
        using Addr = Register::Address<0x40025000,0xffffffff,0,unsigned>;
    }
    namespace NonertTmr{    ///<Timer Register
        using Addr = Register::Address<0x40025008,0xffffffff,0,unsigned>;
    }
    namespace NonepwcTmcr{    ///<Timer Control Register
        using Addr = Register::Address<0x4002500c,0xffff8809,0,unsigned>;
        ///Count clock selection bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks20{}; 
        ///Measurement edge selection bits 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> egs{}; 
        ///32-bit timer selection bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> t32{}; 
        ///Timer function selection bits 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        ///Mode selection bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        ///Timer enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
    }
    namespace NonepwcTmcr2{    ///<Timer Control Register 2
        using Addr = Register::Address<0x40025011,0xfffffffe,0,unsigned char>;
        ///Count clock selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cks3{}; 
    }
    namespace NonepwcStc{    ///<Status Control Register
        using Addr = Register::Address<0x40025010,0xffffff2a,0,unsigned char>;
        ///Error flag bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> err{}; 
        ///Measurement completion interrupt request enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> edie{}; 
        ///Overflow interrupt request enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovie{}; 
        ///Measurement completion interrupt request bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> edir{}; 
        ///Overflow interrupt request bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovir{}; 
    }
    namespace NonepwcDtbf{    ///<Data Buffer Register
        using Addr = Register::Address<0x40025004,0xffffffff,0,unsigned>;
    }
}
