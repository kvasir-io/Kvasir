#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Base Timer 0
    namespace NonepwmTmcr{    ///<Timer Control Register
        using Addr = Register::Address<0x4002500c,0xffff8080,0,unsigned>;
        ///Count clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks20{}; 
        namespace Cks20ValC{
        }
        ///Restart enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rtgen{}; 
        namespace RtgenValC{
        }
        ///Pulse output mask bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmsk{}; 
        namespace PmskValC{
        }
        ///Trigger input edge selection bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> egs{}; 
        namespace EgsValC{
        }
        ///Timer function selection bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        namespace FmdValC{
        }
        ///Output polarity specification bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osel{}; 
        namespace OselValC{
        }
        ///Mode selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        namespace MdseValC{
        }
        ///Count operation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
        namespace CtenValC{
        }
        ///Software trigger bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> strg{}; 
        namespace StrgValC{
        }
    }
    namespace NonepwmTmcr2{    ///<Timer Control Register 2
        using Addr = Register::Address<0x40025011,0xfffffffe,0,unsigned char>;
        ///Count clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cks3{}; 
        namespace Cks3ValC{
        }
    }
    namespace NonepwmStc{    ///< Status Control Register
        using Addr = Register::Address<0x40025010,0xffffff88,0,unsigned char>;
        ///Trigger interrupt request enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tgie{}; 
        namespace TgieValC{
        }
        ///Duty match interrupt request enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dtie{}; 
        namespace DtieValC{
        }
        ///Underflow interrupt request enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> udie{}; 
        namespace UdieValC{
        }
        ///Trigger interrupt request bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tgir{}; 
        namespace TgirValC{
        }
        ///Duty match interrupt request bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dtir{}; 
        namespace DtirValC{
        }
        ///Underflow interrupt request bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> udir{}; 
        namespace UdirValC{
        }
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks20{}; 
        namespace Cks20ValC{
        }
        ///Restart enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rtgen{}; 
        namespace RtgenValC{
        }
        /// Pulse output mask bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmsk{}; 
        namespace PmskValC{
        }
        ///Trigger input edge selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> egs{}; 
        namespace EgsValC{
        }
        ///Timer function selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        namespace FmdValC{
        }
        ///Output polarity specification bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osel{}; 
        namespace OselValC{
        }
        ///Mode selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        namespace MdseValC{
        }
        ///Count operation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
        namespace CtenValC{
        }
        ///Software trigger bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> strg{}; 
        namespace StrgValC{
        }
    }
    namespace NoneppgTmcr2{    ///<Timer Control Register 2
        using Addr = Register::Address<0x40025011,0xfffffffd,0,unsigned char>;
        ///Count clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cks3{}; 
        namespace Cks3ValC{
        }
    }
    namespace NoneppgStc{    ///<Status Control Register
        using Addr = Register::Address<0x40025010,0xffffffaa,0,unsigned char>;
        ///Trigger interrupt request enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tgie{}; 
        namespace TgieValC{
        }
        ///Underflow interrupt request enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> udie{}; 
        namespace UdieValC{
        }
        ///Trigger interrupt request bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tgir{}; 
        namespace TgirValC{
        }
        ///Underflow interrupt request bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> udir{}; 
        namespace UdirValC{
        }
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks20{}; 
        namespace Cks20ValC{
        }
        ///Trigger input edge selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> egs{}; 
        namespace EgsValC{
        }
        ///32-bit timer selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> t32{}; 
        namespace T32ValC{
        }
        ///Timer function selection bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        namespace FmdValC{
        }
        ///Output polarity specification bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osel{}; 
        namespace OselValC{
        }
        ///Mode selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        namespace MdseValC{
        }
        ///Timer enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
        namespace CtenValC{
        }
        ///Software trigger bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> strg{}; 
        namespace StrgValC{
        }
    }
    namespace NonertTmcr2{    ///<Timer Control Register 2
        using Addr = Register::Address<0x40025011,0xfffffffe,0,unsigned char>;
        ///Count clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cks3{}; 
        namespace Cks3ValC{
        }
    }
    namespace NonertStc{    ///<Status Control Register
        using Addr = Register::Address<0x40025010,0xffffffaa,0,unsigned char>;
        ///Trigger interrupt request enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tgie{}; 
        namespace TgieValC{
        }
        ///Underflow interrupt request enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> udie{}; 
        namespace UdieValC{
        }
        ///Trigger interrupt request bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tgir{}; 
        namespace TgirValC{
        }
        ///Underflow interrupt request bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> udir{}; 
        namespace UdirValC{
        }
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks20{}; 
        namespace Cks20ValC{
        }
        ///Measurement edge selection bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> egs{}; 
        namespace EgsValC{
        }
        ///32-bit timer selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> t32{}; 
        namespace T32ValC{
        }
        ///Timer function selection bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        namespace FmdValC{
        }
        ///Mode selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        namespace MdseValC{
        }
        ///Timer enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
        namespace CtenValC{
        }
    }
    namespace NonepwcTmcr2{    ///<Timer Control Register 2
        using Addr = Register::Address<0x40025011,0xfffffffe,0,unsigned char>;
        ///Count clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cks3{}; 
        namespace Cks3ValC{
        }
    }
    namespace NonepwcStc{    ///<Status Control Register
        using Addr = Register::Address<0x40025010,0xffffff2a,0,unsigned char>;
        ///Error flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> err{}; 
        namespace ErrValC{
        }
        ///Measurement completion interrupt request enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> edie{}; 
        namespace EdieValC{
        }
        ///Overflow interrupt request enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovie{}; 
        namespace OvieValC{
        }
        ///Measurement completion interrupt request bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> edir{}; 
        namespace EdirValC{
        }
        ///Overflow interrupt request bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovir{}; 
        namespace OvirValC{
        }
    }
    namespace NonepwcDtbf{    ///<Data Buffer Register
        using Addr = Register::Address<0x40025004,0xffffffff,0,unsigned>;
    }
}
