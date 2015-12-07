#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//16-bit Multi-Purpose Timer (MPT-PMD)
    namespace Nonemden{    ///<PMD Enable Register
        using Addr = Register::Address<0x400f6000,0xfffffffe,0,unsigned>;
        ///PWMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pwmen{}; 
        namespace PwmenValC{
        }
    }
    namespace Noneportmd{    ///<Port Output Mode Register
        using Addr = Register::Address<0x400f6004,0xfffffffe,0,unsigned>;
        ///PORTMD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> portmd{}; 
        namespace PortmdValC{
        }
    }
    namespace Nonemdcr{    ///<PMD Control Register
        using Addr = Register::Address<0x400f6008,0xffffff80,0,unsigned>;
        ///PWMMD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pwmmd{}; 
        namespace PwmmdValC{
        }
        ///INTPRD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> intprd{}; 
        namespace IntprdValC{
        }
        ///PINT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pint{}; 
        namespace PintValC{
        }
        ///DTYMD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dtymd{}; 
        namespace DtymdValC{
        }
        ///SYNTMD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> syntmd{}; 
        namespace SyntmdValC{
        }
        ///PWMCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pwmck{}; 
        namespace PwmckValC{
        }
    }
    namespace Nonecntsta{    ///<PWM Counter Status Register
        using Addr = Register::Address<0x400f600c,0xfffffffe,0,unsigned>;
        ///UPDWN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> updwn{}; 
        namespace UpdwnValC{
        }
    }
    namespace Nonemdcnt{    ///<PWM Counter Register
        using Addr = Register::Address<0x400f6010,0xffff0000,0,unsigned>;
        ///MDCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mdcnt{}; 
        namespace MdcntValC{
        }
    }
    namespace Nonemdprd{    ///<PWM Period Register
        using Addr = Register::Address<0x400f6014,0xffff0000,0,unsigned>;
        ///MDPRD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mdprd{}; 
        namespace MdprdValC{
        }
    }
    namespace Nonecmpu{    ///<PWM Compare Register
        using Addr = Register::Address<0x400f6018,0xffff0000,0,unsigned>;
        ///CMPU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmpu{}; 
        namespace CmpuValC{
        }
    }
    namespace Nonecmpv{    ///<PWM Compare Register
        using Addr = Register::Address<0x400f601c,0xffff0000,0,unsigned>;
        ///CMPV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmpv{}; 
        namespace CmpvValC{
        }
    }
    namespace Nonecmpw{    ///<PWM Compare Register
        using Addr = Register::Address<0x400f6020,0xffff0000,0,unsigned>;
        ///CMPW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmpw{}; 
        namespace CmpwValC{
        }
    }
    namespace Nonemdout{    ///<PMD Output Control Register
        using Addr = Register::Address<0x400f6028,0xfffff8c0,0,unsigned>;
        ///UOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> uoc{}; 
        namespace UocValC{
        }
        ///VOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> voc{}; 
        namespace VocValC{
        }
        ///WOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> woc{}; 
        namespace WocValC{
        }
        ///UPWM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> upwm{}; 
        namespace UpwmValC{
        }
        ///VPWM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> vpwm{}; 
        namespace VpwmValC{
        }
        ///WPWM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wpwm{}; 
        namespace WpwmValC{
        }
    }
    namespace Nonemdpot{    ///<PMD Output Setting Register
        using Addr = Register::Address<0x400f602c,0xfffffff0,0,unsigned>;
        ///PSYNCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> psyncs{}; 
        namespace PsyncsValC{
        }
        ///POLL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> poll{}; 
        namespace PollValC{
        }
        ///POLH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> polh{}; 
        namespace PolhValC{
        }
    }
    namespace Noneemgrel{    ///<EMG Release Register
        using Addr = Register::Address<0x400f6030,0xffffff00,0,unsigned>;
        ///EMGREL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> emgrel{}; 
        namespace EmgrelValC{
        }
    }
    namespace Noneemgcr{    ///<EMG Control Register
        using Addr = Register::Address<0x400f6034,0xfffff0c4,0,unsigned>;
        ///EMGEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> emgen{}; 
        namespace EmgenValC{
        }
        ///EMGRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> emgrs{}; 
        namespace EmgrsValC{
        }
        ///EMGMD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> emgmd{}; 
        namespace EmgmdValC{
        }
        ///INHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> inhen{}; 
        namespace InhenValC{
        }
        ///EMGCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> emgcnt{}; 
        namespace EmgcntValC{
        }
    }
    namespace Noneemgsta{    ///<EMG Status Register
        using Addr = Register::Address<0x400f6038,0xfffffffc,0,unsigned>;
        ///EMGST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> emgst{}; 
        namespace EmgstValC{
        }
        ///EMGI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> emgi{}; 
        namespace EmgiValC{
        }
    }
    namespace Nonedtr{    ///<Dead Time Register
        using Addr = Register::Address<0x400f6044,0xffffff00,0,unsigned>;
        ///DTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dtr{}; 
        namespace DtrValC{
        }
    }
    namespace Nonetrgcmp0{    ///<Trigger Compare Register0
        using Addr = Register::Address<0x400f6048,0xffff0000,0,unsigned>;
        ///TRGCMP0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> trgcmp0{}; 
        namespace Trgcmp0ValC{
        }
    }
    namespace Nonetrgcr{    ///<Trigger Register
        using Addr = Register::Address<0x400f6058,0xfffffff0,0,unsigned>;
        ///TRG0MD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> trg0md{}; 
        namespace Trg0mdValC{
        }
        ///TRG0BE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> trg0be{}; 
        namespace Trg0beValC{
        }
    }
    namespace Nonetrgmd{    ///<Trigger mode Register
        using Addr = Register::Address<0x400f605c,0xfffffffe,0,unsigned>;
        ///EMGTGE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> emgtge{}; 
        namespace EmgtgeValC{
        }
    }
}
