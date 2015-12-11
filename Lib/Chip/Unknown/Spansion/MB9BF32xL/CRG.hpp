#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Clock Unit Registers
    namespace NonescmCtl{    ///<System Clock Mode Control Register
        using Addr = Register::Address<0x40010000,0xffffff05,0,unsigned char>;
        ///Master clock switch control bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> rcs{}; 
        ///PLL oscillation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> plle{}; 
        ///Sub clock oscillation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sosce{}; 
        ///Main clock oscillation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mosce{}; 
    }
    namespace NonescmStr{    ///<System Clock Mode Status Register
        using Addr = Register::Address<0x40010004,0xffffff05,0,unsigned char>;
        ///Master clock selection bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> rcm{}; 
        ///PLL oscillation stable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> plrdy{}; 
        ///Sub clock oscillation stable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sordy{}; 
        ///Main clock oscillation stable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mordy{}; 
    }
    namespace NonebscPsr{    ///<Base Clock Prescaler Register
        using Addr = Register::Address<0x40010010,0xfffffff8,0,unsigned char>;
        ///Base clock frequency division ratio setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bsr{}; 
    }
    namespace Noneapbc0Psr{    ///<APB0 Prescaler Register
        using Addr = Register::Address<0x40010014,0xfffffffc,0,unsigned char>;
        ///APB0 bus clock frequency division ratio setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> apbc0{}; 
    }
    namespace Noneapbc1Psr{    ///<APB1 Prescaler Register
        using Addr = Register::Address<0x40010018,0xffffff6c,0,unsigned char>;
        ///APB1 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> apbc1en{}; 
        ///APB1 bus reset control bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> apbc1rst{}; 
        ///APB1 bus clock frequency division ratio setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> apbc1{}; 
    }
    namespace Noneapbc2Psr{    ///<APB2 Prescaler Register
        using Addr = Register::Address<0x4001001c,0xffffff6c,0,unsigned char>;
        ///APB2 clock enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> apbc2en{}; 
        ///APB2 bus reset control bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> apbc2rst{}; 
        ///APB2 bus clock frequency division ratio setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> apbc2{}; 
    }
    namespace NoneswcPsr{    ///<Software Watchdog Clock Prescaler Register
        using Addr = Register::Address<0x40010020,0xffffff7c,0,unsigned char>;
        ///TEST bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> testb{}; 
        ///Software watchdog clock frequency division ratio setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> swds{}; 
    }
    namespace NonettcPsr{    ///<Trace Clock Prescaler Register
        using Addr = Register::Address<0x40010028,0xfffffffc,0,unsigned char>;
        ///Trace clock frequency division ratio setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ttc{}; 
    }
    namespace NonecswTmr{    ///<Clock Stabilization Wait Time Register
        using Addr = Register::Address<0x40010030,0xffffff80,0,unsigned char>;
        ///Sub clock stabilization wait time setup bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> sowt{}; 
        ///Main clock stabilization wait time setup bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mowt{}; 
    }
    namespace NonepswTmr{    ///<PLL Clock Stabilization Wait Time Setup Register
        using Addr = Register::Address<0x40010034,0xffffffe8,0,unsigned char>;
        ///PLL input clock select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///PLL clock stabilization wait time setup bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> powt{}; 
    }
    namespace NonepllCtl1{    ///<PLL Control Register 1
        using Addr = Register::Address<0x40010038,0xffffff00,0,unsigned char>;
        ///PLL input clock frequency division ratio setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pllk{}; 
        ///PLL VCO clock frequency division ratio setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pllm{}; 
    }
    namespace NonepllCtl2{    ///<PLL Control Register 2
        using Addr = Register::Address<0x4001003c,0xffffffc0,0,unsigned char>;
        ///PLL feedback frequency division ratio setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> plln{}; 
    }
    namespace NonedbwdtCtl{    ///<Debug Break Watchdog Timer Control Register
        using Addr = Register::Address<0x40010054,0xffffff5f,0,unsigned char>;
        ///HW-WDG debug mode break bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dphwbe{}; 
        ///SW-WDG debug mode break bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dpswbe{}; 
    }
    namespace NoneintEnr{    ///< Interrupt Enable Register
        using Addr = Register::Address<0x40010060,0xffffffd8,0,unsigned char>;
        ///Anomalous frequency detection interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fcse{}; 
        ///PLL oscillation stabilization completion interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcse{}; 
        ///Sub oscillation stabilization completion interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scse{}; 
        ///Main oscillation stabilization completion interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcse{}; 
    }
    namespace NoneintStr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40010064,0xffffffd8,0,unsigned char>;
        ///Anomalous frequency detection interrupt status bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fcsi{}; 
        ///PLL oscillation stabilization completion interrupt status bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcsi{}; 
        ///Sub oscillation stabilization completion interrupt status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scsi{}; 
        ///Main oscillation stabilization completion interrupt status bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcsi{}; 
    }
    namespace NoneintClr{    ///<Interrupt Clear Register
        using Addr = Register::Address<0x40010068,0xffffffd8,0,unsigned char>;
        ///Anomalous frequency detection interrupt cause clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fcsc{}; 
        ///PLL oscillation stabilization completion interrupt cause clear bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcsc{}; 
        ///Sub oscillation stabilization completion interrupt cause clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scsc{}; 
        ///Main oscillation stabilization completion interrupt cause clear bit  
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcsc{}; 
    }
    namespace NonerstStr{    ///<Reset Cause Register
        using Addr = Register::Address<0x4001000c,0xfffffe0c,0,unsigned>;
        ///Software reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srst{}; 
        ///Flag for anomalous frequency detection reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fcsr{}; 
        ///Clock failure detection reset flag 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> csvr{}; 
        ///Hardware watchdog reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hwdg{}; 
        ///Software watchdog reset flag 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> swdg{}; 
        ///INITX pin input reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> initx{}; 
        ///Power-on reset/low-voltage detection reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ponr{}; 
    }
    namespace NonestbCtl{    ///<Standby Mode Control Register
        using Addr = Register::Address<0x40010008,0x0000ffe8,0,unsigned>;
        ///Standby mode control write control bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> key{}; 
        ///Standby pin level setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> spl{}; 
        ///Deep standby mode select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dstm{}; 
        ///Standby mode selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> stm{}; 
    }
    namespace NonecsvCtl{    ///<CSV control register
        using Addr = Register::Address<0x40010040,0xffff8cfc,0,unsigned>;
        ///FCS count cycle setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> fcd{}; 
        ///FCS reset output enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fcsre{}; 
        ///FCS function enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fcsde{}; 
        ///Sub CSV function enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scsve{}; 
        ///Main CSV function enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcsve{}; 
    }
    namespace NonecsvStr{    ///<CSV status register
        using Addr = Register::Address<0x40010044,0xfffffffc,0,unsigned char>;
        ///Sub clock failure detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scmf{}; 
        ///Main clock failure detection flag 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcmf{}; 
    }
    namespace NonefcswhCtl{    ///<Frequency detection window setting register
        using Addr = Register::Address<0x40010048,0xffffffff,0,unsigned>;
    }
    namespace NonefcswlCtl{    ///<Frequency detection window setting register
        using Addr = Register::Address<0x4001004c,0xffffffff,0,unsigned>;
    }
    namespace NonefcswdCtl{    ///<Frequency detection counter register
        using Addr = Register::Address<0x40010050,0xffffffff,0,unsigned>;
    }
}
