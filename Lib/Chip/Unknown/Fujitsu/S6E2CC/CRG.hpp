#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Clock Unit Registers
    namespace NonescmCtl{    ///<System Clock Mode Control Register
        using Addr = Register::Address<0x40010000,0xffffff05,0,unsigned>;
        ///Master clock switch control bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> rcs{}; 
        namespace RcsValC{
        }
        ///PLL oscillation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> plle{}; 
        namespace PlleValC{
        }
        ///Sub clock oscillation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sosce{}; 
        namespace SosceValC{
        }
        ///Main clock oscillation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mosce{}; 
        namespace MosceValC{
        }
    }
    namespace NonescmStr{    ///<System Clock Mode Status Register
        using Addr = Register::Address<0x40010004,0xffffff05,0,unsigned>;
        ///Master clock selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> rcm{}; 
        namespace RcmValC{
        }
        ///PLL oscillation stable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> plrdy{}; 
        namespace PlrdyValC{
        }
        ///Sub clock oscillation stable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sordy{}; 
        namespace SordyValC{
        }
        ///Main clock oscillation stable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mordy{}; 
        namespace MordyValC{
        }
    }
    namespace NonestbCtl{    ///<Standby Mode Control Register
        using Addr = Register::Address<0x40010008,0x0000ffe8,0,unsigned>;
        ///Standby mode control write control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
        ///Standby pin level setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> spl{}; 
        namespace SplValC{
        }
        ///Deep standby mode select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dstm{}; 
        namespace DstmValC{
        }
        ///Standby mode selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> stm{}; 
        namespace StmValC{
        }
    }
    namespace NonerstStr{    ///<Reset Cause Register
        using Addr = Register::Address<0x4001000c,0xfffffe0c,0,unsigned>;
        ///Software reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srst{}; 
        namespace SrstValC{
        }
        ///Flag for anomalous frequency detection reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fcsr{}; 
        namespace FcsrValC{
        }
        ///Clock failure detection reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> csvr{}; 
        namespace CsvrValC{
        }
        ///Hardware watchdog reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hwdt{}; 
        namespace HwdtValC{
        }
        ///Software watchdog reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> swdt{}; 
        namespace SwdtValC{
        }
        ///INITX pin input reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> initx{}; 
        namespace InitxValC{
        }
        ///Power-on reset/low-voltage detection reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ponr{}; 
        namespace PonrValC{
        }
    }
    namespace NonebscPsr{    ///<Base Clock Prescaler Register
        using Addr = Register::Address<0x40010010,0xfffffff8,0,unsigned>;
        ///Base clock frequency division ratio setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bsr{}; 
        namespace BsrValC{
        }
    }
    namespace Noneapbc0Psr{    ///<APB0 Prescaler Register
        using Addr = Register::Address<0x40010014,0xfffffffc,0,unsigned>;
        ///APB0 bus clock frequency division ratio setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> apbc0{}; 
        namespace Apbc0ValC{
        }
    }
    namespace Noneapbc1Psr{    ///<APB1 Prescaler Register
        using Addr = Register::Address<0x40010018,0xffffff6c,0,unsigned>;
        ///APB1 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> apbc1en{}; 
        namespace Apbc1enValC{
        }
        ///APB1 bus reset control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> apbc1rst{}; 
        namespace Apbc1rstValC{
        }
        ///APB1 bus clock frequency division ratio setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> apbc1{}; 
        namespace Apbc1ValC{
        }
    }
    namespace Noneapbc2Psr{    ///<APB2 Prescaler Register
        using Addr = Register::Address<0x4001001c,0xffffff6c,0,unsigned>;
        ///APB2 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> apbc2en{}; 
        namespace Apbc2enValC{
        }
        ///APB2 bus reset control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> apbc2rst{}; 
        namespace Apbc2rstValC{
        }
        ///APB2 bus clock frequency division ratio setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> apbc2{}; 
        namespace Apbc2ValC{
        }
    }
    namespace NoneswcPsr{    ///<Software Watchdog Clock Prescaler Register
        using Addr = Register::Address<0x40010020,0xfffffffc,0,unsigned>;
        ///Software watchdog clock frequency division ratio setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> swds{}; 
        namespace SwdsValC{
        }
    }
    namespace NonettcPsr{    ///<Trace Clock Prescaler Register
        using Addr = Register::Address<0x40010028,0xfffffffc,0,unsigned>;
        ///Trace clock frequency division ratio setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ttc{}; 
        namespace TtcValC{
        }
    }
    namespace NonecswTmr{    ///<Clock Stabilization Wait Time Register
        using Addr = Register::Address<0x40010030,0xffffff00,0,unsigned>;
        ///Sub clock stabilization wait time setup bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> sowt{}; 
        namespace SowtValC{
        }
        ///Main clock stabilization wait time setup bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mowt{}; 
        namespace MowtValC{
        }
    }
    namespace NonepswTmr{    ///<PLL Clock Stabilization Wait Time Setup Register
        using Addr = Register::Address<0x40010034,0xffffffe8,0,unsigned>;
        ///PLL input clock select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinc{}; 
        namespace PincValC{
        }
        ///PLL clock stabilization wait time setup bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> powt{}; 
        namespace PowtValC{
        }
    }
    namespace NonepllCtl1{    ///<PLL Control Register 1
        using Addr = Register::Address<0x40010038,0xffffff00,0,unsigned>;
        ///PLL input clock frequency division ratio setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pllk{}; 
        namespace PllkValC{
        }
        ///PLL VCO clock frequency division ratio setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pllm{}; 
        namespace PllmValC{
        }
    }
    namespace NonepllCtl2{    ///<PLL Control Register 2
        using Addr = Register::Address<0x4001003c,0xffffffc0,0,unsigned>;
        ///PLL feedback frequency division ratio setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> plln{}; 
        namespace PllnValC{
        }
    }
    namespace NonecsvCtl{    ///<CSV control register
        using Addr = Register::Address<0x40010040,0xffff8cfc,0,unsigned>;
        ///FCS count cycle setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> fcd{}; 
        namespace FcdValC{
        }
        ///FCS reset output enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fcsre{}; 
        namespace FcsreValC{
        }
        ///FCS function enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fcsde{}; 
        namespace FcsdeValC{
        }
        ///Sub CSV function enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scsve{}; 
        namespace ScsveValC{
        }
        ///Main CSV function enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcsve{}; 
        namespace McsveValC{
        }
    }
    namespace NonecsvStr{    ///<CSV status register
        using Addr = Register::Address<0x40010044,0xfffffffc,0,unsigned>;
        ///Sub clock failure detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scmf{}; 
        namespace ScmfValC{
        }
        ///Main clock failure detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcmf{}; 
        namespace McmfValC{
        }
    }
    namespace NonefcswhCtl{    ///<Frequency detection window setting register
        using Addr = Register::Address<0x40010048,0xffff0000,0,unsigned>;
        ///Frequency detection window setting bits (Upper)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> fwh{}; 
        namespace FwhValC{
        }
    }
    namespace NonefcswlCtl{    ///<Frequency detection window setting register
        using Addr = Register::Address<0x4001004c,0xffff0000,0,unsigned>;
        ///Frequency detection window setting bits (Lower)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> fwl{}; 
        namespace FwlValC{
        }
    }
    namespace NonefcswdCtl{    ///<Frequency detection counter register
        using Addr = Register::Address<0x40010050,0xffff0000,0,unsigned>;
        ///Frequency detection count data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> fwd{}; 
        namespace FwdValC{
        }
    }
    namespace NonedbwdtCtl{    ///<Debug Break Watchdog Timer Control Register
        using Addr = Register::Address<0x40010054,0xffffff5f,0,unsigned>;
        ///HW-WDG debug mode break bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dphwbe{}; 
        namespace DphwbeValC{
        }
        ///SW-WDG debug mode break bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dpswbe{}; 
        namespace DpswbeValC{
        }
    }
    namespace NoneintEnr{    ///< Interrupt Enable Register
        using Addr = Register::Address<0x40010060,0xffffffd8,0,unsigned>;
        ///Anomalous frequency detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fcse{}; 
        namespace FcseValC{
        }
        ///PLL oscillation stabilization completion interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcse{}; 
        namespace PcseValC{
        }
        ///Sub oscillation stabilization completion interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scse{}; 
        namespace ScseValC{
        }
        ///Main oscillation stabilization completion interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcse{}; 
        namespace McseValC{
        }
    }
    namespace NoneintStr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40010064,0xffffffd8,0,unsigned>;
        ///Anomalous frequency detection interrupt status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fcsi{}; 
        namespace FcsiValC{
        }
        ///PLL oscillation stabilization completion interrupt status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcsi{}; 
        namespace PcsiValC{
        }
        ///Sub oscillation stabilization completion interrupt status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scsi{}; 
        namespace ScsiValC{
        }
        ///Main oscillation stabilization completion interrupt status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcsi{}; 
        namespace McsiValC{
        }
    }
    namespace NoneintClr{    ///<Interrupt Clear Register
        using Addr = Register::Address<0x40010068,0xffffffd8,0,unsigned>;
        ///Anomalous frequency detection interrupt cause clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fcsc{}; 
        namespace FcscValC{
        }
        ///PLL oscillation stabilization completion interrupt cause clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcsc{}; 
        namespace PcscValC{
        }
        ///Sub oscillation stabilization completion interrupt cause clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scsc{}; 
        namespace ScscValC{
        }
        ///Main oscillation stabilization completion interrupt cause clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcsc{}; 
        namespace McscValC{
        }
    }
}
