#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Low power timer
    namespace Noneisr{    ///<Interrupt and Status Register
        using Addr = Register::Address<0x40007c00,0xffffff80,0,unsigned>;
        ///Counter direction change up to
              down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> down{}; 
        namespace DownValC{
        }
        ///Counter direction change down to
              up
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> up{}; 
        namespace UpValC{
        }
        ///Autoreload register update
              OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> arrok{}; 
        namespace ArrokValC{
        }
        ///Compare register update OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmpok{}; 
        namespace CmpokValC{
        }
        ///External trigger edge
              event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exttrig{}; 
        namespace ExttrigValC{
        }
        ///Autoreload match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> arrm{}; 
        namespace ArrmValC{
        }
        ///Compare match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmpm{}; 
        namespace CmpmValC{
        }
    }
    namespace Noneicr{    ///<Interrupt Clear Register
        using Addr = Register::Address<0x40007c04,0xffffff80,0,unsigned>;
        ///Direction change to down Clear
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> downcf{}; 
        namespace DowncfValC{
        }
        ///Direction change to UP Clear
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> upcf{}; 
        namespace UpcfValC{
        }
        ///Autoreload register update OK Clear
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> arrokcf{}; 
        namespace ArrokcfValC{
        }
        ///Compare register update OK Clear
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmpokcf{}; 
        namespace CmpokcfValC{
        }
        ///External trigger valid edge Clear
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exttrigcf{}; 
        namespace ExttrigcfValC{
        }
        ///Autoreload match Clear
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> arrmcf{}; 
        namespace ArrmcfValC{
        }
        ///compare match Clear Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmpmcf{}; 
        namespace CmpmcfValC{
        }
    }
    namespace Noneier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40007c08,0xffffff80,0,unsigned>;
        ///Direction change to down Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> downie{}; 
        namespace DownieValC{
        }
        ///Direction change to UP Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> upie{}; 
        namespace UpieValC{
        }
        ///Autoreload register update OK Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> arrokie{}; 
        namespace ArrokieValC{
        }
        ///Compare register update OK Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmpokie{}; 
        namespace CmpokieValC{
        }
        ///External trigger valid edge Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exttrigie{}; 
        namespace ExttrigieValC{
        }
        ///Autoreload match Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> arrmie{}; 
        namespace ArrmieValC{
        }
        ///Compare match Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmpmie{}; 
        namespace CmpmieValC{
        }
    }
    namespace Nonecfgr{    ///<Configuration Register
        using Addr = Register::Address<0x40007c0c,0xfe011120,0,unsigned>;
        ///Encoder mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> enc{}; 
        namespace EncValC{
        }
        ///counter mode enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> countmode{}; 
        namespace CountmodeValC{
        }
        ///Registers update mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> preload{}; 
        namespace PreloadValC{
        }
        ///Waveform shape polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> wavpol{}; 
        namespace WavpolValC{
        }
        ///Waveform shape
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> wave{}; 
        namespace WaveValC{
        }
        ///Timeout enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> timout{}; 
        namespace TimoutValC{
        }
        ///Trigger enable and
              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> trigen{}; 
        namespace TrigenValC{
        }
        ///Trigger selector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> trigsel{}; 
        namespace TrigselValC{
        }
        ///Clock prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> presc{}; 
        namespace PrescValC{
        }
        ///Configurable digital filter for
              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> trgflt{}; 
        namespace TrgfltValC{
        }
        ///Configurable digital filter for external
              clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> ckflt{}; 
        namespace CkfltValC{
        }
        ///Clock Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> ckpol{}; 
        namespace CkpolValC{
        }
        ///Clock selector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cksel{}; 
        namespace CkselValC{
        }
    }
    namespace Nonecr{    ///<Control Register
        using Addr = Register::Address<0x40007c10,0xfffffff8,0,unsigned>;
        ///Timer start in continuous
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cntstrt{}; 
        namespace CntstrtValC{
        }
        ///LPTIM start in single mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sngstrt{}; 
        namespace SngstrtValC{
        }
        ///LPTIM Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
    }
    namespace Nonecmp{    ///<Compare Register
        using Addr = Register::Address<0x40007c14,0xffff0000,0,unsigned>;
        ///Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp{}; 
        namespace CmpValC{
        }
    }
    namespace Nonearr{    ///<Autoreload Register
        using Addr = Register::Address<0x40007c18,0xffff0000,0,unsigned>;
        ///Auto reload value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> arr{}; 
        namespace ArrValC{
        }
    }
    namespace Nonecnt{    ///<Counter Register
        using Addr = Register::Address<0x40007c1c,0xffff0000,0,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
}
