#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//AC97 Controller
    namespace Ac97cMr{    ///<Mode Register
        using Addr = Register::Address<0xfffac008,0xfffffff8,0,unsigned>;
        ///AC97 Controller Global Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena{}; 
        namespace EnaValC{
        }
        ///Warm Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wrst{}; 
        namespace WrstValC{
        }
        ///Variable Rate (for Data Slots 3-12)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vra{}; 
        namespace VraValC{
        }
    }
    namespace Ac97cIca{    ///<Input Channel Assignment Register
        using Addr = Register::Address<0xfffac010,0xc0000000,0,unsigned>;
        ///Channel ID for the input slot 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> chid3{}; 
        namespace Chid3ValC{
        }
        ///Channel ID for the input slot 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> chid4{}; 
        namespace Chid4ValC{
        }
        ///Channel ID for the input slot 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> chid5{}; 
        namespace Chid5ValC{
        }
        ///Channel ID for the input slot 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> chid6{}; 
        namespace Chid6ValC{
        }
        ///Channel ID for the input slot 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> chid7{}; 
        namespace Chid7ValC{
        }
        ///Channel ID for the input slot 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> chid8{}; 
        namespace Chid8ValC{
        }
        ///Channel ID for the input slot 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> chid9{}; 
        namespace Chid9ValC{
        }
        ///Channel ID for the input slot 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> chid10{}; 
        namespace Chid10ValC{
        }
        ///Channel ID for the input slot 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> chid11{}; 
        namespace Chid11ValC{
        }
        ///Channel ID for the input slot 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,27),Register::ReadWriteAccess,unsigned> chid12{}; 
        namespace Chid12ValC{
        }
    }
    namespace Ac97cOca{    ///<Output Channel Assignment Register
        using Addr = Register::Address<0xfffac014,0xc0000000,0,unsigned>;
        ///Channel ID for the output slot 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> chid3{}; 
        namespace Chid3ValC{
        }
        ///Channel ID for the output slot 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> chid4{}; 
        namespace Chid4ValC{
        }
        ///Channel ID for the output slot 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> chid5{}; 
        namespace Chid5ValC{
        }
        ///Channel ID for the output slot 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> chid6{}; 
        namespace Chid6ValC{
        }
        ///Channel ID for the output slot 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> chid7{}; 
        namespace Chid7ValC{
        }
        ///Channel ID for the output slot 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> chid8{}; 
        namespace Chid8ValC{
        }
        ///Channel ID for the output slot 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> chid9{}; 
        namespace Chid9ValC{
        }
        ///Channel ID for the output slot 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> chid10{}; 
        namespace Chid10ValC{
        }
        ///Channel ID for the output slot 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> chid11{}; 
        namespace Chid11ValC{
        }
        ///Channel ID for the output slot 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,27),Register::ReadWriteAccess,unsigned> chid12{}; 
        namespace Chid12ValC{
        }
    }
    namespace Ac97cCarhr{    ///<Channel A Receive Holding Register
        using Addr = Register::Address<0xfffac020,0xfff00000,0,unsigned>;
        ///Receive Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> rdata{}; 
        namespace RdataValC{
        }
    }
    namespace Ac97cCathr{    ///<Channel A Transmit Holding Register
        using Addr = Register::Address<0xfffac024,0xfff00000,0,unsigned>;
        ///Transmit Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> tdata{}; 
        namespace TdataValC{
        }
    }
    namespace Ac97cCasr{    ///<Channel A Status Register
        using Addr = Register::Address<0xfffac028,0xffff33c8,0,unsigned>;
        ///Channel Transmit Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Channel Transmit Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txempty{}; 
        namespace TxemptyValC{
        }
        ///Transmit Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> unrun{}; 
        namespace UnrunValC{
        }
        ///Channel Receive Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrun{}; 
        namespace OvrunValC{
        }
        ///End of Transmission for Channel A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///Transmit Buffer Empty for Channel A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
        ///End of Reception for Channel A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> endrx{}; 
        namespace EndrxValC{
        }
        ///Receive Buffer Full for Channel A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        namespace RxbuffValC{
        }
    }
    namespace Ac97cCamr{    ///<Channel A Mode Register
        using Addr = Register::Address<0xfffac02c,0xff9833c8,0,unsigned>;
        ///Channel Transmit Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Channel Transmit Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txempty{}; 
        namespace TxemptyValC{
        }
        ///Transmit Underrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> unrun{}; 
        namespace UnrunValC{
        }
        ///Channel Receive Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Receive Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrun{}; 
        namespace OvrunValC{
        }
        ///End of Transmission for Channel A Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///Transmit Buffer Empty for Channel A Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
        ///End of Reception for Channel A Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> endrx{}; 
        namespace EndrxValC{
        }
        ///Receive Buffer Full for Channel A Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        namespace RxbuffValC{
        }
        ///Channel A Data Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> size{}; 
        namespace SizeValC{
        }
        ///Channel A Endian Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cem{}; 
        namespace CemValC{
        }
        ///Channel A Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> cen{}; 
        namespace CenValC{
        }
        ///Peripheral Data Controller Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdcen{}; 
        namespace PdcenValC{
        }
    }
    namespace Ac97cCbrhr{    ///<Channel B Receive Holding Register
        using Addr = Register::Address<0xfffac030,0xfff00000,0,unsigned>;
        ///Receive Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> rdata{}; 
        namespace RdataValC{
        }
    }
    namespace Ac97cCbthr{    ///<Channel B Transmit Holding Register
        using Addr = Register::Address<0xfffac034,0xfff00000,0,unsigned>;
        ///Transmit Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> tdata{}; 
        namespace TdataValC{
        }
    }
    namespace Ac97cCbsr{    ///<Channel B Status Register
        using Addr = Register::Address<0xfffac038,0xffff39c8,0,unsigned>;
        ///Channel Transmit Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Channel Transmit Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txempty{}; 
        namespace TxemptyValC{
        }
        ///Transmit Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> unrun{}; 
        namespace UnrunValC{
        }
        ///Channel Receive Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrun{}; 
        namespace OvrunValC{
        }
        ///End of Transmission for Channel B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///Transmit Buffer Empty for Channel B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
        ///End of Reception for Channel B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> endrx{}; 
        namespace EndrxValC{
        }
        ///Receive Buffer Full for Channel B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        namespace RxbuffValC{
        }
    }
    namespace Ac97cCbmr{    ///<Channel B Mode Register
        using Addr = Register::Address<0xfffac03c,0xff9833c8,0,unsigned>;
        ///Channel Transmit Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Channel Transmit Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txempty{}; 
        namespace TxemptyValC{
        }
        ///Transmit Underrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> unrun{}; 
        namespace UnrunValC{
        }
        ///Channel Receive Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Receive Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrun{}; 
        namespace OvrunValC{
        }
        ///End of Transmission for Channel B Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///Transmit Buffer Empty for Channel B Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
        ///End of Reception for Channel B Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> endrx{}; 
        namespace EndrxValC{
        }
        ///Receive Buffer Full for Channel B Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        namespace RxbuffValC{
        }
        ///Channel B Data Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> size{}; 
        namespace SizeValC{
        }
        ///Channel B Endian Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cem{}; 
        namespace CemValC{
        }
        ///Channel B Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> cen{}; 
        namespace CenValC{
        }
        ///Peripheral Data Controller Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdcen{}; 
        namespace PdcenValC{
        }
    }
    namespace Ac97cCorhr{    ///<Codec Channel Receive Holding Register
        using Addr = Register::Address<0xfffac040,0xffff0000,0,unsigned>;
        ///Status Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> sdata{}; 
        namespace SdataValC{
        }
    }
    namespace Ac97cCothr{    ///<Codec Channel Transmit Holding Register
        using Addr = Register::Address<0xfffac044,0xff000000,0,unsigned>;
        ///Command Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdata{}; 
        namespace CdataValC{
        }
        ///CODEC control register index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> caddr{}; 
        namespace CaddrValC{
        }
        ///Read-write command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> read{}; 
        namespace ReadValC{
        }
    }
    namespace Ac97cCosr{    ///<Codec Status Register
        using Addr = Register::Address<0xfffac048,0xffffffc8,0,unsigned>;
        ///Channel Transmit Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Channel Transmit Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txempty{}; 
        namespace TxemptyValC{
        }
        ///Transmit Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> unrun{}; 
        namespace UnrunValC{
        }
        ///Channel Receive Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrun{}; 
        namespace OvrunValC{
        }
    }
    namespace Ac97cComr{    ///<Codec Mode Register
        using Addr = Register::Address<0xfffac04c,0xffffffc8,0,unsigned>;
        ///Channel Transmit Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Channel Transmit Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txempty{}; 
        namespace TxemptyValC{
        }
        ///Transmit Underrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> unrun{}; 
        namespace UnrunValC{
        }
        ///Channel Receive Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Receive Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrun{}; 
        namespace OvrunValC{
        }
    }
    namespace Ac97cSr{    ///<Status Register
        using Addr = Register::Address<0xfffac050,0xffffffe0,0,unsigned>;
        ///Start Of Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sof{}; 
        namespace SofValC{
        }
        ///Wake Up detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wkup{}; 
        namespace WkupValC{
        }
        ///CODEC Channel Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> coevt{}; 
        namespace CoevtValC{
        }
        ///Channel A Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> caevt{}; 
        namespace CaevtValC{
        }
        ///Channel B Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cbevt{}; 
        namespace CbevtValC{
        }
    }
    namespace Ac97cIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffac054,0xffffffe0,0,unsigned>;
        ///Start Of Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sof{}; 
        namespace SofValC{
        }
        ///Wake Up
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wkup{}; 
        namespace WkupValC{
        }
        ///Codec Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> coevt{}; 
        namespace CoevtValC{
        }
        ///Channel A Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> caevt{}; 
        namespace CaevtValC{
        }
        ///Channel B Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cbevt{}; 
        namespace CbevtValC{
        }
    }
    namespace Ac97cIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffac058,0xffffffe0,0,unsigned>;
        ///Start Of Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sof{}; 
        namespace SofValC{
        }
        ///Wake Up
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wkup{}; 
        namespace WkupValC{
        }
        ///Codec Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> coevt{}; 
        namespace CoevtValC{
        }
        ///Channel A Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> caevt{}; 
        namespace CaevtValC{
        }
        ///Channel B Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cbevt{}; 
        namespace CbevtValC{
        }
    }
    namespace Ac97cImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffac05c,0xffffffe0,0,unsigned>;
        ///Start Of Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sof{}; 
        namespace SofValC{
        }
        ///Wake Up
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wkup{}; 
        namespace WkupValC{
        }
        ///Codec Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> coevt{}; 
        namespace CoevtValC{
        }
        ///Channel A Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> caevt{}; 
        namespace CaevtValC{
        }
        ///Channel B Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cbevt{}; 
        namespace CbevtValC{
        }
    }
    namespace Ac97cRpr{    ///<Receive Pointer Register
        using Addr = Register::Address<0xfffac100,0x00000000,0,unsigned>;
        ///Receive Pointer Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxptr{}; 
        namespace RxptrValC{
        }
    }
    namespace Ac97cRcr{    ///<Receive Counter Register
        using Addr = Register::Address<0xfffac104,0xffff0000,0,unsigned>;
        ///Receive Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxctr{}; 
        namespace RxctrValC{
        }
    }
    namespace Ac97cTpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0xfffac108,0x00000000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
        namespace TxptrValC{
        }
    }
    namespace Ac97cTcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0xfffac10c,0xffff0000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
        namespace TxctrValC{
        }
    }
    namespace Ac97cRnpr{    ///<Receive Next Pointer Register
        using Addr = Register::Address<0xfffac110,0x00000000,0,unsigned>;
        ///Receive Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxnptr{}; 
        namespace RxnptrValC{
        }
    }
    namespace Ac97cRncr{    ///<Receive Next Counter Register
        using Addr = Register::Address<0xfffac114,0xffff0000,0,unsigned>;
        ///Receive Next Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxnctr{}; 
        namespace RxnctrValC{
        }
    }
    namespace Ac97cTnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0xfffac118,0x00000000,0,unsigned>;
        ///Transmit Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
        namespace TxnptrValC{
        }
    }
    namespace Ac97cTncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0xfffac11c,0xffff0000,0,unsigned>;
        ///Transmit Counter Next
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
        namespace TxnctrValC{
        }
    }
    namespace Ac97cPtcr{    ///<Transfer Control Register
        using Addr = Register::Address<0xfffac120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        namespace RxtenValC{
        }
        ///Receiver Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        namespace RxtdisValC{
        }
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        namespace TxtenValC{
        }
        ///Transmitter Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
        namespace TxtdisValC{
        }
    }
    namespace Ac97cPtsr{    ///<Transfer Status Register
        using Addr = Register::Address<0xfffac124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        namespace RxtenValC{
        }
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        namespace TxtenValC{
        }
    }
}
