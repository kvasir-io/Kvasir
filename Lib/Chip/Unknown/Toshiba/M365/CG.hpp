#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Clock Generator (CG)
    namespace Nonesyscr{    ///<System Control Register
        using Addr = Register::Address<0x400f3000,0xffece8f8,0,unsigned>;
        ///GEAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> gear{}; 
        namespace GearValC{
        }
        ///PRCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> prck{}; 
        namespace PrckValC{
        }
        ///FPSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fpsel{}; 
        namespace FpselValC{
        }
        ///SCOSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> scosel{}; 
        namespace ScoselValC{
        }
        ///FCSTOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> fcstop{}; 
        namespace FcstopValC{
        }
    }
    namespace Noneosccr{    ///<Oscillation Control Register
        using Addr = Register::Address<0x400f3004,0x0000fef8,0,unsigned>;
        ///WUEON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wueon{}; 
        namespace WueonValC{
        }
        ///WUEF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wuef{}; 
        namespace WuefValC{
        }
        ///PLLON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pllon{}; 
        namespace PllonValC{
        }
        ///XEN1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> xen1{}; 
        namespace Xen1ValC{
        }
        ///XEN2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> xen2{}; 
        namespace Xen2ValC{
        }
        ///OSCSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> oscsel{}; 
        namespace OscselValC{
        }
        ///EHOSCSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ehoscsel{}; 
        namespace EhoscselValC{
        }
        ///HWUPSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> hwupsel{}; 
        namespace HwupselValC{
        }
        ///WUODR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> wuodr{}; 
        namespace WuodrValC{
        }
    }
    namespace Nonestbycr{    ///<Standby Control Register
        using Addr = Register::Address<0x400f3008,0xfffefff8,0,unsigned>;
        ///STBY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> stby{}; 
        namespace StbyValC{
        }
        ///DRVE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> drve{}; 
        namespace DrveValC{
        }
    }
    namespace Nonepllsel{    ///<PLL Selection Register
        using Addr = Register::Address<0x400f300c,0xffff0000,0,unsigned>;
        ///PLLSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pllsel{}; 
        namespace PllselValC{
        }
        ///PLLSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,1),Register::ReadWriteAccess,unsigned> pllset{}; 
        namespace PllsetValC{
        }
    }
    namespace Noneusbctl{    ///<USB Clock and Reset Control register
        using Addr = Register::Address<0x400f3038,0xfffffcff,0,unsigned>;
        ///USBCLKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> usbclken{}; 
        namespace UsbclkenValC{
        }
        ///USBCLKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usbclksel{}; 
        namespace UsbclkselValC{
        }
    }
    namespace Noneprotect{    ///<Protect Register
        using Addr = Register::Address<0x400f303c,0xffffff00,0,unsigned>;
        ///CGPROTECT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cgprotect{}; 
        namespace CgprotectValC{
        }
    }
    namespace Noneimcga{    ///<CG Interrupt Mode Control Register A
        using Addr = Register::Address<0x400f3040,0x82828282,0,unsigned>;
        ///INT0EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> int0en{}; 
        namespace Int0enValC{
        }
        ///EMST0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> emst0{}; 
        namespace Emst0ValC{
        }
        ///EMCG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> emcg0{}; 
        namespace Emcg0ValC{
        }
        ///INT1EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> int1en{}; 
        namespace Int1enValC{
        }
        ///EMST1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> emst1{}; 
        namespace Emst1ValC{
        }
        ///EMCG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> emcg1{}; 
        namespace Emcg1ValC{
        }
        ///INT2EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> int2en{}; 
        namespace Int2enValC{
        }
        ///EMST2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> emst2{}; 
        namespace Emst2ValC{
        }
        ///EMCG2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> emcg2{}; 
        namespace Emcg2ValC{
        }
        ///INT3EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> int3en{}; 
        namespace Int3enValC{
        }
        ///EMST3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> emst3{}; 
        namespace Emst3ValC{
        }
        ///EMCG3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> emcg3{}; 
        namespace Emcg3ValC{
        }
    }
    namespace Noneimcgb{    ///<CG Interrupt Mode Control Register B
        using Addr = Register::Address<0x400f3044,0x82828282,0,unsigned>;
        ///INT4EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> int4en{}; 
        namespace Int4enValC{
        }
        ///EMST4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> emst4{}; 
        namespace Emst4ValC{
        }
        ///EMCG4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> emcg4{}; 
        namespace Emcg4ValC{
        }
        ///INT5EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> int5en{}; 
        namespace Int5enValC{
        }
        ///EMST5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> emst5{}; 
        namespace Emst5ValC{
        }
        ///EMCG5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> emcg5{}; 
        namespace Emcg5ValC{
        }
        ///INT6EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> int6en{}; 
        namespace Int6enValC{
        }
        ///EMST6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> emst6{}; 
        namespace Emst6ValC{
        }
        ///EMCG6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> emcg6{}; 
        namespace Emcg6ValC{
        }
        ///INT7EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> int7en{}; 
        namespace Int7enValC{
        }
        ///EMST7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> emst7{}; 
        namespace Emst7ValC{
        }
        ///EMCG7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> emcg7{}; 
        namespace Emcg7ValC{
        }
    }
    namespace Noneimcgc{    ///<CG Interrupt Mode Control Register C
        using Addr = Register::Address<0x400f3048,0x82828282,0,unsigned>;
        ///INT8EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> int8en{}; 
        namespace Int8enValC{
        }
        ///EMST8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> emst8{}; 
        namespace Emst8ValC{
        }
        ///EMCG8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> emcg8{}; 
        namespace Emcg8ValC{
        }
        ///INT9EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> int9en{}; 
        namespace Int9enValC{
        }
        ///EMST9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> emst9{}; 
        namespace Emst9ValC{
        }
        ///EMCG9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> emcg9{}; 
        namespace Emcg9ValC{
        }
        ///INTAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> intaen{}; 
        namespace IntaenValC{
        }
        ///EMSTA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> emsta{}; 
        namespace EmstaValC{
        }
        ///EMCGA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> emcga{}; 
        namespace EmcgaValC{
        }
        ///INTBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> intben{}; 
        namespace IntbenValC{
        }
        ///EMSTB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> emstb{}; 
        namespace EmstbValC{
        }
        ///EMCGB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> emcgb{}; 
        namespace EmcgbValC{
        }
    }
    namespace Noneicrcg{    ///<CG Interrupt Request Clear Register
        using Addr = Register::Address<0x400f3060,0xffffffe0,0,unsigned>;
        ///ICRCG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> icrcg{}; 
        namespace IcrcgValC{
        }
    }
    namespace Nonerstflg{    ///<Reset Flag Register
        using Addr = Register::Address<0x400f3064,0xffffffe2,0,unsigned>;
        ///PINRSTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinrstf{}; 
        namespace PinrstfValC{
        }
        ///WDTRSTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wdtrstf{}; 
        namespace WdtrstfValC{
        }
        ///STOP2RSTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stop2rstf{}; 
        namespace Stop2rstfValC{
        }
        ///DBGRSTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dbgrstf{}; 
        namespace DbgrstfValC{
        }
    }
    namespace Nonenmiflg{    ///<NMI Flag Register
        using Addr = Register::Address<0x400f3068,0xfffffffc,0,unsigned>;
        ///NMIFLG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmiflg0{}; 
        namespace Nmiflg0ValC{
        }
        ///NMIFLG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nmiflg1{}; 
        namespace Nmiflg1ValC{
        }
    }
}
