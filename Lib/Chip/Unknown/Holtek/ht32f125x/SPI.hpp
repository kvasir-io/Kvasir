#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//SPI
    namespace NonespiCr0{    ///<SPI_CR0
        using Addr = Register::Address<0x40004000,0xffffffe6,0,unsigned>;
        ///SPIEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> spien{}; 
        ///SELOEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> seloen{}; 
        ///SSELC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sselc{}; 
    }
    namespace NonespiCr1{    ///<SPI_CR1
        using Addr = Register::Address<0x40004004,0xffff80f0,0,unsigned>;
        ///DFL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dfl{}; 
        ///FORMAT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> format{}; 
        ///SELAP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> selap{}; 
        ///FIRSTBIT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> firstbit{}; 
        ///SELM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> selm{}; 
        ///MODE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mode{}; 
    }
    namespace NonespiIer{    ///<SPI_IER
        using Addr = Register::Address<0x40004008,0xffffff00,0,unsigned>;
        ///TXBEIEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txbeien{}; 
        ///TXEIEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txeien{}; 
        ///RXBNEIEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxbneien{}; 
        ///WCIEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wcien{}; 
        ///ROIEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> roien{}; 
        ///MFIEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mfien{}; 
        ///SAIEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> saien{}; 
        ///TOIEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> toien{}; 
    }
    namespace NonespiCpr{    ///<SPI_CPR
        using Addr = Register::Address<0x4000400c,0xffff0000,0,unsigned>;
        ///CP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cp{}; 
    }
    namespace NonespiDr{    ///<SPI_DR
        using Addr = Register::Address<0x40004010,0xffff0000,0,unsigned>;
        ///DR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dr{}; 
    }
    namespace NonespiSr{    ///<SPI_SR
        using Addr = Register::Address<0x40004014,0xfffffe00,0,unsigned>;
        ///TXBE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txbe{}; 
        ///TXE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txe{}; 
        ///RXBNE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxbne{}; 
        ///WC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wc{}; 
        ///RO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ro{}; 
        ///MF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mf{}; 
        ///SA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sa{}; 
        ///TO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> to{}; 
        ///BUSY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> busy{}; 
    }
    namespace NonespiFcr{    ///<SPI_FCR
        using Addr = Register::Address<0x40004018,0xfffff800,0,unsigned>;
        ///TXFTLS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> txftls{}; 
        ///RXFTLS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> rxftls{}; 
        ///TFPR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tfpr{}; 
        ///RFPR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rfpr{}; 
        ///FIFOEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fifoen{}; 
    }
    namespace NonespiFsr{    ///<SPI_FSR
        using Addr = Register::Address<0x4000401c,0xffffff00,0,unsigned>;
        ///TXFS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> txfs{}; 
        ///RXFS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> rxfs{}; 
    }
    namespace NonespiFtocr{    ///<SPI_FTOCR
        using Addr = Register::Address<0x40004020,0x00000000,0,unsigned>;
        ///TOC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> toc{}; 
    }
}
