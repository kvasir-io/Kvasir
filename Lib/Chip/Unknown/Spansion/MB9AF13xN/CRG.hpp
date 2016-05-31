#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Clock Unit Registers
    namespace CrgScmCtl{    ///<System Clock Mode Control Register
        using Addr = Register::Address<0x40010000,0xffffff05,0x00000000,unsigned char>;
        ///Master clock switch control bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> rcs{}; 
        ///PLL oscillation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> plle{}; 
        ///Sub clock oscillation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sosce{}; 
        ///Main clock oscillation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mosce{}; 
    }
    namespace CrgScmStr{    ///<System Clock Mode Status Register
        using Addr = Register::Address<0x40010004,0xffffff05,0x00000000,unsigned char>;
        ///Master clock selection bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcm{}; 
        ///PLL oscillation stable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> plrdy{}; 
        ///Sub clock oscillation stable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sordy{}; 
        ///Main clock oscillation stable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mordy{}; 
    }
    namespace CrgBscPsr{    ///<Base Clock Prescaler Register
        using Addr = Register::Address<0x40010010,0xfffffff8,0x00000000,unsigned char>;
        ///Base clock frequency division ratio setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bsr{}; 
    }
    namespace CrgApbc0Psr{    ///<APB0 Prescaler Register
        using Addr = Register::Address<0x40010014,0xfffffffc,0x00000000,unsigned char>;
        ///APB0 bus clock frequency division ratio setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> apbc0{}; 
    }
    namespace CrgApbc1Psr{    ///<APB1 Prescaler Register
        using Addr = Register::Address<0x40010018,0xffffff6c,0x00000000,unsigned char>;
        ///APB1 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> apbc1en{}; 
        ///APB1 bus reset control bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> apbc1rst{}; 
        ///APB1 bus clock frequency division ratio setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> apbc1{}; 
    }
    namespace CrgApbc2Psr{    ///<APB2 Prescaler Register
        using Addr = Register::Address<0x4001001c,0xffffff6c,0x00000000,unsigned char>;
        ///APB2 clock enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> apbc2en{}; 
        ///APB2 bus reset control bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> apbc2rst{}; 
        ///APB2 bus clock frequency division ratio setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> apbc2{}; 
    }
    namespace CrgSwcPsr{    ///<Software Watchdog Clock Prescaler Register
        using Addr = Register::Address<0x40010020,0xffffff7c,0x00000000,unsigned char>;
        ///TEST bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> testb{}; 
        ///Software watchdog clock frequency division ratio setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> swds{}; 
    }
    namespace CrgTtcPsr{    ///<Trace Clock Prescaler Register
        using Addr = Register::Address<0x40010028,0xfffffffc,0x00000000,unsigned char>;
        ///Trace clock frequency division ratio setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ttc{}; 
    }
    namespace CrgCswTmr{    ///<Clock Stabilization Wait Time Register
        using Addr = Register::Address<0x40010030,0xffffff80,0x00000000,unsigned char>;
        ///Sub clock stabilization wait time setup bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> sowt{}; 
        ///Main clock stabilization wait time setup bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mowt{}; 
    }
    namespace CrgPswTmr{    ///<PLL Clock Stabilization Wait Time Setup Register
        using Addr = Register::Address<0x40010034,0xffffffe8,0x00000000,unsigned char>;
        ///PLL input clock select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///PLL clock stabilization wait time setup bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> powt{}; 
    }
    namespace CrgPllCtl1{    ///<PLL Control Register 1
        using Addr = Register::Address<0x40010038,0xffffff00,0x00000000,unsigned char>;
        ///PLL input clock frequency division ratio setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pllk{}; 
        ///PLL VCO clock frequency division ratio setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pllm{}; 
    }
    namespace CrgPllCtl2{    ///<PLL Control Register 2
        using Addr = Register::Address<0x4001003c,0xffffffc0,0x00000000,unsigned char>;
        ///PLL feedback frequency division ratio setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> plln{}; 
    }
    namespace CrgDbwdtCtl{    ///<Debug Break Watchdog Timer Control Register
        using Addr = Register::Address<0x40010054,0xffffff5f,0x00000000,unsigned char>;
        ///HW-WDG debug mode break bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dphwbe{}; 
        ///SW-WDG debug mode break bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dpswbe{}; 
    }
    namespace CrgIntEnr{    ///< Interrupt Enable Register
        using Addr = Register::Address<0x40010060,0xffffffd8,0x00000000,unsigned char>;
        ///Anomalous frequency detection interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fcse{}; 
        ///PLL oscillation stabilization completion interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcse{}; 
        ///Sub oscillation stabilization completion interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scse{}; 
        ///Main oscillation stabilization completion interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcse{}; 
    }
    namespace CrgIntStr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40010064,0xffffffd8,0x00000000,unsigned char>;
        ///Anomalous frequency detection interrupt status bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fcsi{}; 
        ///PLL oscillation stabilization completion interrupt status bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pcsi{}; 
        ///Sub oscillation stabilization completion interrupt status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> scsi{}; 
        ///Main oscillation stabilization completion interrupt status bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mcsi{}; 
    }
    namespace CrgIntClr{    ///<Interrupt Clear Register
        using Addr = Register::Address<0x40010068,0xffffffd8,0x00000000,unsigned char>;
        ///Anomalous frequency detection interrupt cause clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fcsc{}; 
        ///PLL oscillation stabilization completion interrupt cause clear bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pcsc{}; 
        ///Sub oscillation stabilization completion interrupt cause clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> scsc{}; 
        ///Main oscillation stabilization completion interrupt cause clear bit  
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mcsc{}; 
    }
    namespace CrgRstStr{    ///<Reset Cause Register
        using Addr = Register::Address<0x4001000c,0xfffffe04,0x00000000,unsigned>;
        ///Software reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> srst{}; 
        ///Flag for anomalous frequency detection reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fcsr{}; 
        ///Clock failure detection reset flag 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> csvr{}; 
        ///Hardware watchdog reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hwdg{}; 
        ///Software watchdog reset flag 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swdg{}; 
        ///Low-voltage detection reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvdh{}; 
        ///INITX pin input reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> initx{}; 
        ///Power-on reset/low-voltage detection reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ponr{}; 
    }
    namespace CrgStbCtl{    ///<Standby Mode Control Register
        using Addr = Register::Address<0x40010008,0x0000ffe8,0x00000000,unsigned>;
        ///Standby mode control write control bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> key{}; 
        ///Standby pin level setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> spl{}; 
        ///Deep standby mode select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dstm{}; 
        ///Standby mode selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> stm{}; 
    }
    namespace CrgCsvCtl{    ///<CSV control register
        using Addr = Register::Address<0x40010040,0xffff8cfc,0x00000000,unsigned>;
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
    namespace CrgCsvStr{    ///<CSV status register
        using Addr = Register::Address<0x40010044,0xfffffffc,0x00000000,unsigned char>;
        ///Sub clock failure detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> scmf{}; 
        ///Main clock failure detection flag 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mcmf{}; 
    }
    namespace CrgFcswhCtl{    ///<Frequency detection window setting register
        using Addr = Register::Address<0x40010048,0xffffffff,0x00000000,unsigned>;
    }
    namespace CrgFcswlCtl{    ///<Frequency detection window setting register
        using Addr = Register::Address<0x4001004c,0xffffffff,0x00000000,unsigned>;
    }
    namespace CrgFcswdCtl{    ///<Frequency detection counter register
        using Addr = Register::Address<0x40010050,0xffffffff,0x00000000,unsigned>;
    }
}
