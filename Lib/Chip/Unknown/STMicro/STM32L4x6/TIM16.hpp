#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General purpose timers
    namespace Nonecr1{    ///<control register 1
        using Addr = Register::Address<0x40014400,0xfffff470,0,unsigned>;
        ///Counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        namespace CenValC{
        }
        ///Update disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> udis{}; 
        namespace UdisValC{
        }
        ///Update request source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> urs{}; 
        namespace UrsValC{
        }
        ///One-pulse mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> opm{}; 
        namespace OpmValC{
        }
        ///Auto-reload preload enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arpe{}; 
        namespace ArpeValC{
        }
        ///Clock division
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ckd{}; 
        namespace CkdValC{
        }
        ///UIF status bit remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> uifremap{}; 
        namespace UifremapValC{
        }
    }
    namespace Nonecr2{    ///<control register 2
        using Addr = Register::Address<0x40014404,0xfffffcf2,0,unsigned>;
        ///Output Idle state 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ois1n{}; 
        namespace Ois1nValC{
        }
        ///Output Idle state 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ois1{}; 
        namespace Ois1ValC{
        }
        ///Capture/compare DMA
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ccds{}; 
        namespace CcdsValC{
        }
        ///Capture/compare control update
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ccus{}; 
        namespace CcusValC{
        }
        ///Capture/compare preloaded
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccpc{}; 
        namespace CcpcValC{
        }
    }
    namespace Nonedier{    ///<DMA/Interrupt enable register
        using Addr = Register::Address<0x4001440c,0xffff9c1c,0,unsigned>;
        ///Trigger DMA request enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tde{}; 
        namespace TdeValC{
        }
        ///COM DMA request enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> comde{}; 
        namespace ComdeValC{
        }
        ///Capture/Compare 1 DMA request
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1de{}; 
        namespace Cc1deValC{
        }
        ///Update DMA request enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ude{}; 
        namespace UdeValC{
        }
        ///Break interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bie{}; 
        namespace BieValC{
        }
        ///Trigger interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tie{}; 
        namespace TieValC{
        }
        ///COM interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comie{}; 
        namespace ComieValC{
        }
        ///Capture/Compare 1 interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1ie{}; 
        namespace Cc1ieValC{
        }
        ///Update interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uie{}; 
        namespace UieValC{
        }
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x40014410,0xfffffd1c,0,unsigned>;
        ///Capture/Compare 1 overcapture
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1of{}; 
        namespace Cc1ofValC{
        }
        ///Break interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bif{}; 
        namespace BifValC{
        }
        ///Trigger interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tif{}; 
        namespace TifValC{
        }
        ///COM interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comif{}; 
        namespace ComifValC{
        }
        ///Capture/compare 1 interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1if{}; 
        namespace Cc1ifValC{
        }
        ///Update interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uif{}; 
        namespace UifValC{
        }
    }
    namespace Noneegr{    ///<event generation register
        using Addr = Register::Address<0x40014414,0xffffff1c,0,unsigned>;
        ///Break generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bg{}; 
        namespace BgValC{
        }
        ///Trigger generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tg{}; 
        namespace TgValC{
        }
        ///Capture/Compare control update
              generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comg{}; 
        namespace ComgValC{
        }
        ///Capture/compare 1
              generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1g{}; 
        namespace Cc1gValC{
        }
        ///Update generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ug{}; 
        namespace UgValC{
        }
    }
    namespace Noneccmr1Output{    ///<capture/compare mode register (output
          mode)
        using Addr = Register::Address<0x40014418,0xfffeff80,0,unsigned>;
        ///Output Compare 1 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> oc1m2{}; 
        namespace Oc1m2ValC{
        }
        ///Output Compare 1 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc1m{}; 
        namespace Oc1mValC{
        }
        ///Output Compare 1 preload
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc1pe{}; 
        namespace Oc1peValC{
        }
        ///Output Compare 1 fast
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc1fe{}; 
        namespace Oc1feValC{
        }
        ///Capture/Compare 1
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
        namespace Cc1sValC{
        }
    }
    namespace Noneccmr1Input{    ///<capture/compare mode register 1 (input
          mode)
        using Addr = Register::Address<0x40014418,0xffffff00,0,unsigned>;
        ///Input capture 1 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic1f{}; 
        namespace Ic1fValC{
        }
        ///Input capture 1 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ic1psc{}; 
        namespace Ic1pscValC{
        }
        ///Capture/Compare 1
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
        namespace Cc1sValC{
        }
    }
    namespace Noneccer{    ///<capture/compare enable
          register
        using Addr = Register::Address<0x40014420,0xfffffff0,0,unsigned>;
        ///Capture/Compare 1 output
              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc1np{}; 
        namespace Cc1npValC{
        }
        ///Capture/Compare 1 complementary output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc1ne{}; 
        namespace Cc1neValC{
        }
        ///Capture/Compare 1 output
              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1p{}; 
        namespace Cc1pValC{
        }
        ///Capture/Compare 1 output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cc1e{}; 
        namespace Cc1eValC{
        }
    }
    namespace Nonecnt{    ///<counter
        using Addr = Register::Address<0x40014424,0x7fff0000,0,unsigned>;
        ///counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
        ///UIF Copy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> uifcpy{}; 
        namespace UifcpyValC{
        }
    }
    namespace Nonepsc{    ///<prescaler
        using Addr = Register::Address<0x40014428,0xffff0000,0,unsigned>;
        ///Prescaler value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> psc{}; 
        namespace PscValC{
        }
    }
    namespace Nonearr{    ///<auto-reload register
        using Addr = Register::Address<0x4001442c,0xffff0000,0,unsigned>;
        ///Auto-reload value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> arr{}; 
        namespace ArrValC{
        }
    }
    namespace Nonercr{    ///<repetition counter register
        using Addr = Register::Address<0x40014430,0xffffff00,0,unsigned>;
        ///Repetition counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rep{}; 
        namespace RepValC{
        }
    }
    namespace Noneccr1{    ///<capture/compare register 1
        using Addr = Register::Address<0x40014434,0xffff0000,0,unsigned>;
        ///Capture/Compare 1 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr1{}; 
        namespace Ccr1ValC{
        }
    }
    namespace Nonebdtr{    ///<break and dead-time register
        using Addr = Register::Address<0x40014444,0xfff00000,0,unsigned>;
        ///Dead-time generator setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dtg{}; 
        namespace DtgValC{
        }
        ///Lock configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> lock{}; 
        namespace LockValC{
        }
        ///Off-state selection for Idle
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ossi{}; 
        namespace OssiValC{
        }
        ///Off-state selection for Run
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ossr{}; 
        namespace OssrValC{
        }
        ///Break enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bke{}; 
        namespace BkeValC{
        }
        ///Break polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
        ///Automatic output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> aoe{}; 
        namespace AoeValC{
        }
        ///Main output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> moe{}; 
        namespace MoeValC{
        }
        ///Break filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> bkf{}; 
        namespace BkfValC{
        }
    }
    namespace Nonedcr{    ///<DMA control register
        using Addr = Register::Address<0x40014448,0xffffe0e0,0,unsigned>;
        ///DMA burst length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> dbl{}; 
        namespace DblValC{
        }
        ///DMA base address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dba{}; 
        namespace DbaValC{
        }
    }
    namespace Nonedmar{    ///<DMA address for full transfer
        using Addr = Register::Address<0x4001444c,0xffff0000,0,unsigned>;
        ///DMA register for burst
              accesses
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dmab{}; 
        namespace DmabValC{
        }
    }
    namespace Noneor1{    ///<TIM16 option register 1
        using Addr = Register::Address<0x40014450,0xfffffffc,0,unsigned>;
        ///Input capture 1 remap
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ti1Rmp{}; 
        namespace Ti1rmpValC{
        }
    }
    namespace Noneor2{    ///<TIM17 option register 1
        using Addr = Register::Address<0x40014460,0xfffff0f8,0,unsigned>;
        ///BRK BKIN input enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bkine{}; 
        namespace BkineValC{
        }
        ///BRK COMP1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bkcmp1e{}; 
        namespace Bkcmp1eValC{
        }
        ///BRK COMP2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bkcmp2e{}; 
        namespace Bkcmp2eValC{
        }
        ///BRK DFSDM_BREAK1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bkdfbk1e{}; 
        namespace Bkdfbk1eValC{
        }
        ///BRK BKIN input polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bkinp{}; 
        namespace BkinpValC{
        }
        ///BRK COMP1 input polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bkcmp1p{}; 
        namespace Bkcmp1pValC{
        }
        ///BRK COMP2 input polarit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bkcmp2p{}; 
        namespace Bkcmp2pValC{
        }
    }
}
