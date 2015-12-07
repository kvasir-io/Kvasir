#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB
    namespace NoneusbCsr{    ///<USB_CSR
        using Addr = Register::Address<0x4004e000,0xfffffe11,0,unsigned>;
        ///FRES
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fres{}; 
        namespace FresValC{
        }
        ///PDWN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pdwn{}; 
        namespace PdwnValC{
        }
        ///LPMODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lpmode{}; 
        namespace LpmodeValC{
        }
        ///GENRSM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> genrsm{}; 
        namespace GenrsmValC{
        }
        ///RXDP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxdp{}; 
        namespace RxdpValC{
        }
        ///RXDM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rxdm{}; 
        namespace RxdmValC{
        }
        ///ADRSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> adrset{}; 
        namespace AdrsetValC{
        }
    }
    namespace NoneusbIer{    ///<USB_IER
        using Addr = Register::Address<0x4004e004,0xffff00c0,0,unsigned>;
        ///UGIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ugie{}; 
        namespace UgieValC{
        }
        ///SOFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sofie{}; 
        namespace SofieValC{
        }
        ///URSTIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> urstie{}; 
        namespace UrstieValC{
        }
        ///RSMIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsmie{}; 
        namespace RsmieValC{
        }
        ///SUSPIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> suspie{}; 
        namespace SuspieValC{
        }
        ///ESOFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> esofie{}; 
        namespace EsofieValC{
        }
        ///EP0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ep0ie{}; 
        namespace Ep0ieValC{
        }
        ///EP1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ep1ie{}; 
        namespace Ep1ieValC{
        }
        ///EP2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ep2ie{}; 
        namespace Ep2ieValC{
        }
        ///EP3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ep3ie{}; 
        namespace Ep3ieValC{
        }
        ///EP4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ep4ie{}; 
        namespace Ep4ieValC{
        }
        ///EP5IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ep5ie{}; 
        namespace Ep5ieValC{
        }
        ///EP6IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ep6ie{}; 
        namespace Ep6ieValC{
        }
        ///EP7IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ep7ie{}; 
        namespace Ep7ieValC{
        }
    }
    namespace NoneusbIsr{    ///<USB_ISR
        using Addr = Register::Address<0x4004e008,0xffff00c1,0,unsigned>;
        ///SOFIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sofif{}; 
        namespace SofifValC{
        }
        ///URSTIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> urstif{}; 
        namespace UrstifValC{
        }
        ///RSMIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsmif{}; 
        namespace RsmifValC{
        }
        ///SUSPIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> suspif{}; 
        namespace SuspifValC{
        }
        ///ESOFIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> esofif{}; 
        namespace EsofifValC{
        }
        ///EP0IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ep0if{}; 
        namespace Ep0ifValC{
        }
        ///EP1IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ep1if{}; 
        namespace Ep1ifValC{
        }
        ///EP2IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ep2if{}; 
        namespace Ep2ifValC{
        }
        ///EP3IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ep3if{}; 
        namespace Ep3ifValC{
        }
        ///EP4IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ep4if{}; 
        namespace Ep4ifValC{
        }
        ///EP5IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ep5if{}; 
        namespace Ep5ifValC{
        }
        ///EP6IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ep6if{}; 
        namespace Ep6ifValC{
        }
        ///EP7IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ep7if{}; 
        namespace Ep7ifValC{
        }
    }
    namespace NoneusbFcr{    ///<USB_FCR
        using Addr = Register::Address<0x4004e00c,0xfff8f800,0,unsigned>;
        ///FRNUM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> frnum{}; 
        namespace FrnumValC{
        }
        ///SOFLCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> soflck{}; 
        namespace SoflckValC{
        }
        ///LSOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> lsof{}; 
        namespace LsofValC{
        }
    }
    namespace NoneusbDevar{    ///<USB_DEVAR
        using Addr = Register::Address<0x4004e010,0xffffff80,0,unsigned>;
        ///DEVA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> deva{}; 
        namespace DevaValC{
        }
    }
    namespace NoneusbEp0csr{    ///<USB_EP0CSR
        using Addr = Register::Address<0x4004e014,0xffffffc0,0,unsigned>;
        ///DTGTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtgtx{}; 
        namespace DtgtxValC{
        }
        ///NAKTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> naktx{}; 
        namespace NaktxValC{
        }
        ///STLTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stltx{}; 
        namespace StltxValC{
        }
        ///DTGRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtgrx{}; 
        namespace DtgrxValC{
        }
        ///NAKRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakrx{}; 
        namespace NakrxValC{
        }
        ///STLRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stlrx{}; 
        namespace StlrxValC{
        }
    }
    namespace NoneusbEp0ier{    ///<USB_EP0IER
        using Addr = Register::Address<0x4004e018,0xfffff000,0,unsigned>;
        ///OTRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otrxie{}; 
        namespace OtrxieValC{
        }
        ///ODRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odrxie{}; 
        namespace OdrxieValC{
        }
        ///ODOVIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odovie{}; 
        namespace OdovieValC{
        }
        ///ITRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> itrxie{}; 
        namespace ItrxieValC{
        }
        ///IDTXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idtxie{}; 
        namespace IdtxieValC{
        }
        ///NAKIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nakie{}; 
        namespace NakieValC{
        }
        ///STLIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stlie{}; 
        namespace StlieValC{
        }
        ///UERIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uerie{}; 
        namespace UerieValC{
        }
        ///STRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> strxie{}; 
        namespace StrxieValC{
        }
        ///SDRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sdrxie{}; 
        namespace SdrxieValC{
        }
        ///SDERIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sderie{}; 
        namespace SderieValC{
        }
        ///ZLRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> zlrxie{}; 
        namespace ZlrxieValC{
        }
    }
    namespace NoneusbEp0isr{    ///<USB_EP0ISR
        using Addr = Register::Address<0x4004e01c,0xfffff000,0,unsigned>;
        ///OTRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otrxif{}; 
        namespace OtrxifValC{
        }
        ///ODRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odrxif{}; 
        namespace OdrxifValC{
        }
        ///ODOVIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odovif{}; 
        namespace OdovifValC{
        }
        ///ITRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> itrxif{}; 
        namespace ItrxifValC{
        }
        ///IDTXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idtxif{}; 
        namespace IdtxifValC{
        }
        ///NAKIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nakif{}; 
        namespace NakifValC{
        }
        ///STLIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stlif{}; 
        namespace StlifValC{
        }
        ///UERIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uerif{}; 
        namespace UerifValC{
        }
        ///STRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> strxif{}; 
        namespace StrxifValC{
        }
        ///SDRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sdrxif{}; 
        namespace SdrxifValC{
        }
        ///SDERIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sderif{}; 
        namespace SderifValC{
        }
        ///ZLRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> zlrxif{}; 
        namespace ZlrxifValC{
        }
    }
    namespace NoneusbEp0tcr{    ///<USB_EP0TCR
        using Addr = Register::Address<0x4004e020,0xff80ff80,0,unsigned>;
        ///TXCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> txcnt{}; 
        namespace TxcntValC{
        }
        ///RXCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> rxcnt{}; 
        namespace RxcntValC{
        }
    }
    namespace NoneusbEp0cfgr{    ///<USB_EP0CFGR
        using Addr = Register::Address<0x4004e024,0x70fe0000,0,unsigned>;
        ///EPBUFA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> epbufa{}; 
        namespace EpbufaValC{
        }
        ///EPLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,10),Register::ReadWriteAccess,unsigned> eplen{}; 
        namespace EplenValC{
        }
        ///EPADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> epadr{}; 
        namespace EpadrValC{
        }
        ///EPEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epen{}; 
        namespace EpenValC{
        }
    }
    namespace NoneusbEp1csr{    ///<USB_EP1CSR
        using Addr = Register::Address<0x4004e028,0xffffffc0,0,unsigned>;
        ///DTGTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtgtx{}; 
        namespace DtgtxValC{
        }
        ///NAKTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> naktx{}; 
        namespace NaktxValC{
        }
        ///STLTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stltx{}; 
        namespace StltxValC{
        }
        ///DTGRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtgrx{}; 
        namespace DtgrxValC{
        }
        ///NAKRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakrx{}; 
        namespace NakrxValC{
        }
        ///STLRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stlrx{}; 
        namespace StlrxValC{
        }
    }
    namespace NoneusbEp1ier{    ///<USB_EP1IER
        using Addr = Register::Address<0x4004e02c,0xffffff00,0,unsigned>;
        ///OTRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otrxie{}; 
        namespace OtrxieValC{
        }
        ///ODRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odrxie{}; 
        namespace OdrxieValC{
        }
        ///ODOVIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odovie{}; 
        namespace OdovieValC{
        }
        ///ITRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> itrxie{}; 
        namespace ItrxieValC{
        }
        ///IDTXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idtxie{}; 
        namespace IdtxieValC{
        }
        ///NAKIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nakie{}; 
        namespace NakieValC{
        }
        ///STLIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stlie{}; 
        namespace StlieValC{
        }
        ///UERIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uerie{}; 
        namespace UerieValC{
        }
    }
    namespace NoneusbEp1isr{    ///<USB_EP1ISR
        using Addr = Register::Address<0x4004e030,0xffffff00,0,unsigned>;
        ///OTRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otrxif{}; 
        namespace OtrxifValC{
        }
        ///ODRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odrxif{}; 
        namespace OdrxifValC{
        }
        ///ODOVIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odovif{}; 
        namespace OdovifValC{
        }
        ///ITRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> itrxif{}; 
        namespace ItrxifValC{
        }
        ///IDTXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idtxif{}; 
        namespace IdtxifValC{
        }
        ///NAKIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nakif{}; 
        namespace NakifValC{
        }
        ///STLIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stlif{}; 
        namespace StlifValC{
        }
        ///UERIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uerif{}; 
        namespace UerifValC{
        }
    }
    namespace NoneusbEp1tcr{    ///<USB_EP1TCR
        using Addr = Register::Address<0x4004e034,0xfffffe00,0,unsigned>;
        ///TCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> tcnt{}; 
        namespace TcntValC{
        }
    }
    namespace NoneusbEp1cfgr{    ///<USB_EP1CFGR
        using Addr = Register::Address<0x4004e038,0x40fe0000,0,unsigned>;
        ///EPBUFA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> epbufa{}; 
        namespace EpbufaValC{
        }
        ///EPLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,10),Register::ReadWriteAccess,unsigned> eplen{}; 
        namespace EplenValC{
        }
        ///EPADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> epadr{}; 
        namespace EpadrValC{
        }
        ///EPDIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epdir{}; 
        namespace EpdirValC{
        }
        ///EPTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eptype{}; 
        namespace EptypeValC{
        }
        ///EPEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epen{}; 
        namespace EpenValC{
        }
    }
    namespace NoneusbEp2csr{    ///<USB_EP2CSR
        using Addr = Register::Address<0x4004e03c,0xffffffc0,0,unsigned>;
        ///DTGTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtgtx{}; 
        namespace DtgtxValC{
        }
        ///NAKTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> naktx{}; 
        namespace NaktxValC{
        }
        ///STLTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stltx{}; 
        namespace StltxValC{
        }
        ///DTGRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtgrx{}; 
        namespace DtgrxValC{
        }
        ///NAKRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakrx{}; 
        namespace NakrxValC{
        }
        ///STLRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stlrx{}; 
        namespace StlrxValC{
        }
    }
    namespace NoneusbEp2ier{    ///<USB_EP2IER
        using Addr = Register::Address<0x4004e040,0xffffff00,0,unsigned>;
        ///OTRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otrxie{}; 
        namespace OtrxieValC{
        }
        ///ODRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odrxie{}; 
        namespace OdrxieValC{
        }
        ///ODOVIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odovie{}; 
        namespace OdovieValC{
        }
        ///ITRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> itrxie{}; 
        namespace ItrxieValC{
        }
        ///IDTXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idtxie{}; 
        namespace IdtxieValC{
        }
        ///NAKIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nakie{}; 
        namespace NakieValC{
        }
        ///STLIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stlie{}; 
        namespace StlieValC{
        }
        ///UERIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uerie{}; 
        namespace UerieValC{
        }
    }
    namespace NoneusbEp2isr{    ///<USB_EP2ISR
        using Addr = Register::Address<0x4004e044,0xffffff00,0,unsigned>;
        ///OTRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otrxif{}; 
        namespace OtrxifValC{
        }
        ///ODRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odrxif{}; 
        namespace OdrxifValC{
        }
        ///ODOVIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odovif{}; 
        namespace OdovifValC{
        }
        ///ITRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> itrxif{}; 
        namespace ItrxifValC{
        }
        ///IDTXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idtxif{}; 
        namespace IdtxifValC{
        }
        ///NAKIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nakif{}; 
        namespace NakifValC{
        }
        ///STLIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stlif{}; 
        namespace StlifValC{
        }
        ///UERIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uerif{}; 
        namespace UerifValC{
        }
    }
    namespace NoneusbEp2tcr{    ///<USB_EP2TCR
        using Addr = Register::Address<0x4004e048,0xfffffe00,0,unsigned>;
        ///TCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> tcnt{}; 
        namespace TcntValC{
        }
    }
    namespace NoneusbEp2cfgr{    ///<USB_EP2CFGR
        using Addr = Register::Address<0x4004e04c,0x40fe0000,0,unsigned>;
        ///EPBUFA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> epbufa{}; 
        namespace EpbufaValC{
        }
        ///EPLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,10),Register::ReadWriteAccess,unsigned> eplen{}; 
        namespace EplenValC{
        }
        ///EPADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> epadr{}; 
        namespace EpadrValC{
        }
        ///EPDIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epdir{}; 
        namespace EpdirValC{
        }
        ///EPTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eptype{}; 
        namespace EptypeValC{
        }
        ///EPEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epen{}; 
        namespace EpenValC{
        }
    }
    namespace NoneusbEp3csr{    ///<USB_EP3CSR
        using Addr = Register::Address<0x4004e050,0xffffffc0,0,unsigned>;
        ///DTGTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtgtx{}; 
        namespace DtgtxValC{
        }
        ///NAKTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> naktx{}; 
        namespace NaktxValC{
        }
        ///STLTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stltx{}; 
        namespace StltxValC{
        }
        ///DTGRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtgrx{}; 
        namespace DtgrxValC{
        }
        ///NAKRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakrx{}; 
        namespace NakrxValC{
        }
        ///STLRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stlrx{}; 
        namespace StlrxValC{
        }
    }
    namespace NoneusbEp3ier{    ///<USB_EP3IER
        using Addr = Register::Address<0x4004e054,0xffffff00,0,unsigned>;
        ///OTRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otrxie{}; 
        namespace OtrxieValC{
        }
        ///ODRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odrxie{}; 
        namespace OdrxieValC{
        }
        ///ODOVIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odovie{}; 
        namespace OdovieValC{
        }
        ///ITRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> itrxie{}; 
        namespace ItrxieValC{
        }
        ///IDTXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idtxie{}; 
        namespace IdtxieValC{
        }
        ///NAKIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nakie{}; 
        namespace NakieValC{
        }
        ///STLIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stlie{}; 
        namespace StlieValC{
        }
        ///UERIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uerie{}; 
        namespace UerieValC{
        }
    }
    namespace NoneusbEp3isr{    ///<USB_EP3ISR
        using Addr = Register::Address<0x4004e058,0xffffff00,0,unsigned>;
        ///OTRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otrxif{}; 
        namespace OtrxifValC{
        }
        ///ODRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odrxif{}; 
        namespace OdrxifValC{
        }
        ///ODOVIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odovif{}; 
        namespace OdovifValC{
        }
        ///ITRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> itrxif{}; 
        namespace ItrxifValC{
        }
        ///IDTXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idtxif{}; 
        namespace IdtxifValC{
        }
        ///NAKIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nakif{}; 
        namespace NakifValC{
        }
        ///STLIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stlif{}; 
        namespace StlifValC{
        }
        ///UERIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uerif{}; 
        namespace UerifValC{
        }
    }
    namespace NoneusbEp3tcr{    ///<USB_EP3TCR
        using Addr = Register::Address<0x4004e05c,0xfffffe00,0,unsigned>;
        ///TCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> tcnt{}; 
        namespace TcntValC{
        }
    }
    namespace NoneusbEp3cfgr{    ///<USB_EP3CFGR
        using Addr = Register::Address<0x4004e060,0x40fe0000,0,unsigned>;
        ///EPBUFA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> epbufa{}; 
        namespace EpbufaValC{
        }
        ///EPLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,10),Register::ReadWriteAccess,unsigned> eplen{}; 
        namespace EplenValC{
        }
        ///EPADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> epadr{}; 
        namespace EpadrValC{
        }
        ///EPDIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epdir{}; 
        namespace EpdirValC{
        }
        ///EPTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eptype{}; 
        namespace EptypeValC{
        }
        ///EPEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epen{}; 
        namespace EpenValC{
        }
    }
    namespace NoneusbEp4csr{    ///<USB_EP4CSR
        using Addr = Register::Address<0x4004e064,0xffffff00,0,unsigned>;
        ///DTGTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtgtx{}; 
        namespace DtgtxValC{
        }
        ///NAKTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> naktx{}; 
        namespace NaktxValC{
        }
        ///STLTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stltx{}; 
        namespace StltxValC{
        }
        ///DTGRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtgrx{}; 
        namespace DtgrxValC{
        }
        ///NAKRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakrx{}; 
        namespace NakrxValC{
        }
        ///STLRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stlrx{}; 
        namespace StlrxValC{
        }
        ///MDBTG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mdbtg{}; 
        namespace MdbtgValC{
        }
        ///UDBTG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> udbtg{}; 
        namespace UdbtgValC{
        }
    }
    namespace NoneusbEp4ier{    ///<USB_EP4IER
        using Addr = Register::Address<0x4004e068,0xffffff00,0,unsigned>;
        ///OTRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otrxie{}; 
        namespace OtrxieValC{
        }
        ///ODRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odrxie{}; 
        namespace OdrxieValC{
        }
        ///ODOVIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odovie{}; 
        namespace OdovieValC{
        }
        ///ITRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> itrxie{}; 
        namespace ItrxieValC{
        }
        ///IDTXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idtxie{}; 
        namespace IdtxieValC{
        }
        ///NAKIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nakie{}; 
        namespace NakieValC{
        }
        ///STLIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stlie{}; 
        namespace StlieValC{
        }
        ///UERIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uerie{}; 
        namespace UerieValC{
        }
    }
    namespace NoneusbEp4isr{    ///<USB_EP4ISR
        using Addr = Register::Address<0x4004e06c,0xffffff00,0,unsigned>;
        ///OTRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otrxif{}; 
        namespace OtrxifValC{
        }
        ///ODRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odrxif{}; 
        namespace OdrxifValC{
        }
        ///ODOVIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odovif{}; 
        namespace OdovifValC{
        }
        ///ITRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> itrxif{}; 
        namespace ItrxifValC{
        }
        ///IDTXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idtxif{}; 
        namespace IdtxifValC{
        }
        ///NAKIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nakif{}; 
        namespace NakifValC{
        }
        ///STLIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stlif{}; 
        namespace StlifValC{
        }
        ///UERIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uerif{}; 
        namespace UerifValC{
        }
    }
    namespace NoneusbEp4tcr{    ///<USB_EP4TCR
        using Addr = Register::Address<0x4004e070,0xfc00fc00,0,unsigned>;
        ///TCNT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> tcnt0{}; 
        namespace Tcnt0ValC{
        }
        ///TCNT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> tcnt1{}; 
        namespace Tcnt1ValC{
        }
    }
    namespace NoneusbEp4cfgr{    ///<USB_EP4CFGR
        using Addr = Register::Address<0x4004e074,0x40700000,0,unsigned>;
        ///EPBUFA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> epbufa{}; 
        namespace EpbufaValC{
        }
        ///EPLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,10),Register::ReadWriteAccess,unsigned> eplen{}; 
        namespace EplenValC{
        }
        ///SDBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> sdbs{}; 
        namespace SdbsValC{
        }
        ///EPADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> epadr{}; 
        namespace EpadrValC{
        }
        ///EPDIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epdir{}; 
        namespace EpdirValC{
        }
        ///EPTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eptype{}; 
        namespace EptypeValC{
        }
        ///EPEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epen{}; 
        namespace EpenValC{
        }
    }
    namespace NoneusbEp5csr{    ///<USB_EP5CSR
        using Addr = Register::Address<0x4004e078,0xffffff00,0,unsigned>;
        ///DTGTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtgtx{}; 
        namespace DtgtxValC{
        }
        ///NAKTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> naktx{}; 
        namespace NaktxValC{
        }
        ///STLTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stltx{}; 
        namespace StltxValC{
        }
        ///DTGRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtgrx{}; 
        namespace DtgrxValC{
        }
        ///NAKRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakrx{}; 
        namespace NakrxValC{
        }
        ///STLRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stlrx{}; 
        namespace StlrxValC{
        }
        ///MDBTG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mdbtg{}; 
        namespace MdbtgValC{
        }
        ///UDBTG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> udbtg{}; 
        namespace UdbtgValC{
        }
    }
    namespace NoneusbEp5ier{    ///<USB_EP5IER
        using Addr = Register::Address<0x4004e07c,0xffffff00,0,unsigned>;
        ///OTRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otrxie{}; 
        namespace OtrxieValC{
        }
        ///ODRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odrxie{}; 
        namespace OdrxieValC{
        }
        ///ODOVIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odovie{}; 
        namespace OdovieValC{
        }
        ///ITRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> itrxie{}; 
        namespace ItrxieValC{
        }
        ///IDTXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idtxie{}; 
        namespace IdtxieValC{
        }
        ///NAKIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nakie{}; 
        namespace NakieValC{
        }
        ///STLIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stlie{}; 
        namespace StlieValC{
        }
        ///UERIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uerie{}; 
        namespace UerieValC{
        }
    }
    namespace NoneusbEp5isr{    ///<USB_EP5ISR
        using Addr = Register::Address<0x4004e080,0xffffff00,0,unsigned>;
        ///OTRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otrxif{}; 
        namespace OtrxifValC{
        }
        ///ODRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odrxif{}; 
        namespace OdrxifValC{
        }
        ///ODOVIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odovif{}; 
        namespace OdovifValC{
        }
        ///ITRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> itrxif{}; 
        namespace ItrxifValC{
        }
        ///IDTXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idtxif{}; 
        namespace IdtxifValC{
        }
        ///NAKIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nakif{}; 
        namespace NakifValC{
        }
        ///STLIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stlif{}; 
        namespace StlifValC{
        }
        ///UERIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uerif{}; 
        namespace UerifValC{
        }
    }
    namespace NoneusbEp5tcr{    ///<USB_EP5TCR
        using Addr = Register::Address<0x4004e084,0xfc00fc00,0,unsigned>;
        ///TCNT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> tcnt0{}; 
        namespace Tcnt0ValC{
        }
        ///TCNT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> tcnt1{}; 
        namespace Tcnt1ValC{
        }
    }
    namespace NoneusbEp5cfgr{    ///<USB_EP5CFGR
        using Addr = Register::Address<0x4004e088,0x40700000,0,unsigned>;
        ///EPBUFA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> epbufa{}; 
        namespace EpbufaValC{
        }
        ///EPLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,10),Register::ReadWriteAccess,unsigned> eplen{}; 
        namespace EplenValC{
        }
        ///SDBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> sdbs{}; 
        namespace SdbsValC{
        }
        ///EPADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> epadr{}; 
        namespace EpadrValC{
        }
        ///EPDIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epdir{}; 
        namespace EpdirValC{
        }
        ///EPTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eptype{}; 
        namespace EptypeValC{
        }
        ///EPEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epen{}; 
        namespace EpenValC{
        }
    }
    namespace NoneusbEp6csr{    ///<USB_EP6CSR
        using Addr = Register::Address<0x4004e08c,0xffffff00,0,unsigned>;
        ///DTGTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtgtx{}; 
        namespace DtgtxValC{
        }
        ///NAKTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> naktx{}; 
        namespace NaktxValC{
        }
        ///STLTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stltx{}; 
        namespace StltxValC{
        }
        ///DTGRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtgrx{}; 
        namespace DtgrxValC{
        }
        ///NAKRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakrx{}; 
        namespace NakrxValC{
        }
        ///STLRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stlrx{}; 
        namespace StlrxValC{
        }
        ///MDBTG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mdbtg{}; 
        namespace MdbtgValC{
        }
        ///UDBTG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> udbtg{}; 
        namespace UdbtgValC{
        }
    }
    namespace NoneusbEp6ier{    ///<USB_EP6IER
        using Addr = Register::Address<0x4004e090,0xffffff00,0,unsigned>;
        ///OTRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otrxie{}; 
        namespace OtrxieValC{
        }
        ///ODRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odrxie{}; 
        namespace OdrxieValC{
        }
        ///ODOVIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odovie{}; 
        namespace OdovieValC{
        }
        ///ITRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> itrxie{}; 
        namespace ItrxieValC{
        }
        ///IDTXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idtxie{}; 
        namespace IdtxieValC{
        }
        ///NAKIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nakie{}; 
        namespace NakieValC{
        }
        ///STLIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stlie{}; 
        namespace StlieValC{
        }
        ///UERIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uerie{}; 
        namespace UerieValC{
        }
    }
    namespace NoneusbEp6isr{    ///<USB_EP6ISR
        using Addr = Register::Address<0x4004e094,0xffffff00,0,unsigned>;
        ///OTRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otrxif{}; 
        namespace OtrxifValC{
        }
        ///ODRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odrxif{}; 
        namespace OdrxifValC{
        }
        ///ODOVIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odovif{}; 
        namespace OdovifValC{
        }
        ///ITRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> itrxif{}; 
        namespace ItrxifValC{
        }
        ///IDTXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idtxif{}; 
        namespace IdtxifValC{
        }
        ///NAKIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nakif{}; 
        namespace NakifValC{
        }
        ///STLIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stlif{}; 
        namespace StlifValC{
        }
        ///UERIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uerif{}; 
        namespace UerifValC{
        }
    }
    namespace NoneusbEp6tcr{    ///<USB_EP6TCR
        using Addr = Register::Address<0x4004e098,0xfc00fc00,0,unsigned>;
        ///TCNT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> tcnt0{}; 
        namespace Tcnt0ValC{
        }
        ///TCNT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> tcnt1{}; 
        namespace Tcnt1ValC{
        }
    }
    namespace NoneusbEp6cfgr{    ///<USB_EP6CFGR
        using Addr = Register::Address<0x4004e09c,0x40700000,0,unsigned>;
        ///EPBUFA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> epbufa{}; 
        namespace EpbufaValC{
        }
        ///EPLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,10),Register::ReadWriteAccess,unsigned> eplen{}; 
        namespace EplenValC{
        }
        ///SDBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> sdbs{}; 
        namespace SdbsValC{
        }
        ///EPADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> epadr{}; 
        namespace EpadrValC{
        }
        ///EPDIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epdir{}; 
        namespace EpdirValC{
        }
        ///EPTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eptype{}; 
        namespace EptypeValC{
        }
        ///EPEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epen{}; 
        namespace EpenValC{
        }
    }
    namespace NoneusbEp7csr{    ///<USB_EP7CSR
        using Addr = Register::Address<0x4004e0a0,0xffffff00,0,unsigned>;
        ///DTGTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtgtx{}; 
        namespace DtgtxValC{
        }
        ///NAKTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> naktx{}; 
        namespace NaktxValC{
        }
        ///STLTX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stltx{}; 
        namespace StltxValC{
        }
        ///DTGRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtgrx{}; 
        namespace DtgrxValC{
        }
        ///NAKRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakrx{}; 
        namespace NakrxValC{
        }
        ///STLRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stlrx{}; 
        namespace StlrxValC{
        }
        ///MDBTG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mdbtg{}; 
        namespace MdbtgValC{
        }
        ///UDBTG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> udbtg{}; 
        namespace UdbtgValC{
        }
    }
    namespace NoneusbEp7ier{    ///<USB_EP7IER
        using Addr = Register::Address<0x4004e0a4,0xffffff00,0,unsigned>;
        ///OTRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otrxie{}; 
        namespace OtrxieValC{
        }
        ///ODRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odrxie{}; 
        namespace OdrxieValC{
        }
        ///ODOVIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odovie{}; 
        namespace OdovieValC{
        }
        ///ITRXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> itrxie{}; 
        namespace ItrxieValC{
        }
        ///IDTXIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idtxie{}; 
        namespace IdtxieValC{
        }
        ///NAKIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nakie{}; 
        namespace NakieValC{
        }
        ///STLIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stlie{}; 
        namespace StlieValC{
        }
        ///UERIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uerie{}; 
        namespace UerieValC{
        }
    }
    namespace NoneusbEp7isr{    ///<USB_EP7ISR
        using Addr = Register::Address<0x4004e0a8,0xffffff00,0,unsigned>;
        ///OTRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otrxif{}; 
        namespace OtrxifValC{
        }
        ///ODRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odrxif{}; 
        namespace OdrxifValC{
        }
        ///ODOVIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odovif{}; 
        namespace OdovifValC{
        }
        ///ITRXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> itrxif{}; 
        namespace ItrxifValC{
        }
        ///IDTXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idtxif{}; 
        namespace IdtxifValC{
        }
        ///NAKIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nakif{}; 
        namespace NakifValC{
        }
        ///STLIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stlif{}; 
        namespace StlifValC{
        }
        ///UERIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uerif{}; 
        namespace UerifValC{
        }
    }
    namespace NoneusbEp7tcr{    ///<USB_EP7TCR
        using Addr = Register::Address<0x4004e0ac,0xfc00fc00,0,unsigned>;
        ///TCNT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> tcnt0{}; 
        namespace Tcnt0ValC{
        }
        ///TCNT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> tcnt1{}; 
        namespace Tcnt1ValC{
        }
    }
    namespace NoneusbEp7cfgr{    ///<USB_EP7CFGR
        using Addr = Register::Address<0x4004e0b0,0x40700000,0,unsigned>;
        ///EPBUFA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> epbufa{}; 
        namespace EpbufaValC{
        }
        ///EPLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,10),Register::ReadWriteAccess,unsigned> eplen{}; 
        namespace EplenValC{
        }
        ///SDBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> sdbs{}; 
        namespace SdbsValC{
        }
        ///EPADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> epadr{}; 
        namespace EpadrValC{
        }
        ///EPDIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epdir{}; 
        namespace EpdirValC{
        }
        ///EPTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eptype{}; 
        namespace EptypeValC{
        }
        ///EPEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epen{}; 
        namespace EpenValC{
        }
    }
}
