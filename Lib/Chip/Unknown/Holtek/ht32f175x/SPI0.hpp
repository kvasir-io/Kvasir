#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//SPI0
    namespace Nonespi0Cr0{    ///<SPI0_CR0
        using Addr = Register::Address<0x40004000,0xffffffe0,0,unsigned>;
        ///SPIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> spien{}; 
        namespace SpienValC{
        }
        ///TXDMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txdmae{}; 
        namespace TxdmaeValC{
        }
        ///RXDMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxdmae{}; 
        namespace RxdmaeValC{
        }
        ///SELOEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> seloen{}; 
        namespace SeloenValC{
        }
        ///SSELC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sselc{}; 
        namespace SselcValC{
        }
    }
    namespace Nonespi0Cr1{    ///<SPI0_CR1
        using Addr = Register::Address<0x40004004,0xffff80f0,0,unsigned>;
        ///DFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dfl{}; 
        namespace DflValC{
        }
        ///FORMAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> format{}; 
        namespace FormatValC{
        }
        ///SELAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> selap{}; 
        namespace SelapValC{
        }
        ///FIRSTBIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> firstbit{}; 
        namespace FirstbitValC{
        }
        ///SELM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> selm{}; 
        namespace SelmValC{
        }
        ///MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mode{}; 
        namespace ModeValC{
        }
    }
    namespace Nonespi0Ier{    ///<SPI0_IER
        using Addr = Register::Address<0x40004008,0xffffff00,0,unsigned>;
        ///TXBEIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txbeien{}; 
        namespace TxbeienValC{
        }
        ///TXEIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txeien{}; 
        namespace TxeienValC{
        }
        ///RXBNEIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxbneien{}; 
        namespace RxbneienValC{
        }
        ///WCIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wcien{}; 
        namespace WcienValC{
        }
        ///ROIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> roien{}; 
        namespace RoienValC{
        }
        ///MFIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mfien{}; 
        namespace MfienValC{
        }
        ///SAIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> saien{}; 
        namespace SaienValC{
        }
        ///TOIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> toien{}; 
        namespace ToienValC{
        }
    }
    namespace Nonespi0Cpr{    ///<SPI0_CPR
        using Addr = Register::Address<0x4000400c,0xffff0000,0,unsigned>;
        ///CP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cp{}; 
        namespace CpValC{
        }
    }
    namespace Nonespi0Dr{    ///<SPI0_DR
        using Addr = Register::Address<0x40004010,0xffff0000,0,unsigned>;
        ///DR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dr{}; 
        namespace DrValC{
        }
    }
    namespace Nonespi0Sr{    ///<SPI0_SR
        using Addr = Register::Address<0x40004014,0xfffffe00,0,unsigned>;
        ///TXBE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txbe{}; 
        namespace TxbeValC{
        }
        ///TXE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txe{}; 
        namespace TxeValC{
        }
        ///RXBNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxbne{}; 
        namespace RxbneValC{
        }
        ///WC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wc{}; 
        namespace WcValC{
        }
        ///RO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ro{}; 
        namespace RoValC{
        }
        ///MF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mf{}; 
        namespace MfValC{
        }
        ///SA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sa{}; 
        namespace SaValC{
        }
        ///TO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> to{}; 
        namespace ToValC{
        }
        ///BUSY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
    }
    namespace Nonespi0Fcr{    ///<SPI0_FCR
        using Addr = Register::Address<0x40004018,0xfffff800,0,unsigned>;
        ///TXFTLS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> txftls{}; 
        namespace TxftlsValC{
        }
        ///RXFTLS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> rxftls{}; 
        namespace RxftlsValC{
        }
        ///TFPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tfpr{}; 
        namespace TfprValC{
        }
        ///RFPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rfpr{}; 
        namespace RfprValC{
        }
        ///FIFOEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fifoen{}; 
        namespace FifoenValC{
        }
    }
    namespace Nonespi0Fsr{    ///<SPI0_FSR
        using Addr = Register::Address<0x4000401c,0xffffff00,0,unsigned>;
        ///TXFS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> txfs{}; 
        namespace TxfsValC{
        }
        ///RXFS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> rxfs{}; 
        namespace RxfsValC{
        }
    }
    namespace Nonespi0Ftocr{    ///<SPI0_FTOCR
        using Addr = Register::Address<0x40004020,0x00000000,0,unsigned>;
        ///TOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> toc{}; 
        namespace TocValC{
        }
    }
}
