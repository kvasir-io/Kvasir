#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Base Timer 0
    namespace Bt0PwmTmcr{    ///<Timer Control Register
        using Addr = Register::Address<0x4002500c,0xffff8080,0x00000000,unsigned>;
        ///Count clock selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks{}; 
        ///Restart enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rtgen{}; 
        ///Pulse output mask bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmsk{}; 
        ///Trigger input edge selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> egs{}; 
        ///Timer function selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        ///Output polarity specification bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osel{}; 
        ///Mode selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        ///Count operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
        ///Software trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> strg{}; 
    }
    namespace Bt0PwmTmcr2{    ///<Timer Control Register 2
        using Addr = Register::Address<0x40025011,0xfffffffe,0x00000000,unsigned char>;
        ///Count clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cks3{}; 
    }
    namespace Bt0PwmStc{    ///<Status Control Register
        using Addr = Register::Address<0x40025010,0xffffff88,0x00000000,unsigned char>;
        ///Trigger interrupt request enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tgie{}; 
        ///Duty match interrupt request enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dtie{}; 
        ///Underflow interrupt request enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> udie{}; 
        ///Trigger interrupt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tgir{}; 
        ///Duty match interrupt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dtir{}; 
        ///Underflow interrupt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> udir{}; 
    }
    namespace Bt0PwmPcsr{    ///<PWM Cycle Set Register
        using Addr = Register::Address<0x40025000,0xffffffff,0x00000000,unsigned>;
    }
    namespace Bt0PwmPdut{    ///<PWM Duty Set Register
        using Addr = Register::Address<0x40025004,0xffffffff,0x00000000,unsigned>;
    }
    namespace Bt0PwmTmr{    ///<Timer Register
        using Addr = Register::Address<0x40025008,0xffffffff,0x00000000,unsigned>;
    }
    namespace Bt0PpgTmcr{    ///<Timer Control Register
        using Addr = Register::Address<0x4002500c,0xffff8080,0x00000000,unsigned>;
        ///Count clock selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks{}; 
        ///Restart enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rtgen{}; 
        /// Pulse output mask bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmsk{}; 
        ///Trigger input edge selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> egs{}; 
        ///Timer function selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        ///Output polarity specification bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osel{}; 
        ///Mode selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        ///Count operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
        ///Software trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> strg{}; 
    }
    namespace Bt0PpgTmcr2{    ///<Timer Control Register 2
        using Addr = Register::Address<0x40025011,0xfffffffe,0x00000000,unsigned char>;
        ///Count clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cks3{}; 
    }
    namespace Bt0PpgStc{    ///<Status Control Register
        using Addr = Register::Address<0x40025010,0xffffffaa,0x00000000,unsigned char>;
        ///Trigger interrupt request enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tgie{}; 
        ///Underflow interrupt request enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> udie{}; 
        ///Trigger interrupt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tgir{}; 
        ///Underflow interrupt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> udir{}; 
    }
    namespace Bt0PpgPrll{    ///<LOW Width Reload Register
        using Addr = Register::Address<0x40025000,0xffffffff,0x00000000,unsigned>;
    }
    namespace Bt0PpgPrlh{    ///<HIGH Width Reload Register
        using Addr = Register::Address<0x40025004,0xffffffff,0x00000000,unsigned>;
    }
    namespace Bt0PpgTmr{    ///<Timer Register
        using Addr = Register::Address<0x40025008,0xffffffff,0x00000000,unsigned>;
    }
    namespace Bt0RtTmcr{    ///<Timer Control Register
        using Addr = Register::Address<0x4002500c,0xffff8c00,0x00000000,unsigned>;
        ///Count clock selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks{}; 
        ///Slection bits of trigger input edge and gate function level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> egs{}; 
        ///32-bit timer selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> t32{}; 
        ///Timer function selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        ///Output polarity specification bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osel{}; 
        ///Mode selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        ///Timer enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
        ///Software trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> strg{}; 
    }
    namespace Bt0RtTmcr2{    ///<Timer Control Register 2
        using Addr = Register::Address<0x40025011,0xffffff7e,0x00000000,unsigned char>;
        ///Gate Input Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gate{}; 
        ///Count clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cks3{}; 
    }
    namespace Bt0RtStc{    ///<Status Control Register
        using Addr = Register::Address<0x40025010,0xffffffaa,0x00000000,unsigned char>;
        ///Trigger interrupt request enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tgie{}; 
        ///Underflow interrupt request enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> udie{}; 
        ///Trigger interrupt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tgir{}; 
        ///Underflow interrupt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> udir{}; 
    }
    namespace Bt0RtPcsr{    ///<Cycle Set Register
        using Addr = Register::Address<0x40025000,0xffffffff,0x00000000,unsigned>;
    }
    namespace Bt0RtTmr{    ///<Timer Register
        using Addr = Register::Address<0x40025008,0xffffffff,0x00000000,unsigned>;
    }
    namespace Bt0PwcTmcr{    ///<Timer Control Register
        using Addr = Register::Address<0x4002500c,0xffff8809,0x00000000,unsigned>;
        ///Count clock selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks{}; 
        ///Measurement edge selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> egs{}; 
        ///32-bit timer selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> t32{}; 
        ///Timer function selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        ///Mode selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        ///Timer enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
    }
    namespace Bt0PwcTmcr2{    ///<Timer Control Register 2
        using Addr = Register::Address<0x40025011,0xfffffffe,0x00000000,unsigned char>;
        ///Count clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cks3{}; 
    }
    namespace Bt0PwcStc{    ///<Status Control Register
        using Addr = Register::Address<0x40025010,0xffffff2a,0x00000000,unsigned char>;
        ///Error flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err{}; 
        ///Measurement completion interrupt request enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> edie{}; 
        ///Overflow interrupt request enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovie{}; 
        ///Measurement completion interrupt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> edir{}; 
        ///Overflow interrupt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovir{}; 
    }
    namespace Bt0PwcDtbf{    ///<Data Buffer Register
        using Addr = Register::Address<0x40025004,0xffffffff,0x00000000,unsigned>;
    }
}
