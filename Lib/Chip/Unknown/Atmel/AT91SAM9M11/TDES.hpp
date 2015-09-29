#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Triple Data Encryption Standard
    namespace TdesCr{    ///<Control Register
        using Addr = Register::Address<0xfffc4000,0xfffefefe,0,unsigned>;
        ///Start Processing
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
        ///Software Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Load Seed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> loadseed{}; 
    }
    namespace TdesMr{    ///<Mode Register
        using Addr = Register::Address<0xfffc4004,0xc00c4cec,0,unsigned>;
        ///Processing Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cipher{}; 
        ///ALGORITHM mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdesmod{}; 
        ///Key Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> keymod{}; 
        ///Start Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> smod{}; 
        ///Operation Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> opmod{}; 
        ///Last Output Data Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lod{}; 
        ///Cipher Feedback Data Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> cfbs{}; 
        ///Countermeasure Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> ckey{}; 
        ///Countermeasure Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ctype{}; 
    }
    namespace TdesIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffc4010,0xfffffee0,0,unsigned>;
        ///Data Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
        ///End of Receive Buffer Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Buffer Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Receive Buffer Full Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Transmit Buffer Empty Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Unspecified Register Access Detection Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> urad{}; 
    }
    namespace TdesIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffc4014,0xfffffee0,0,unsigned>;
        ///Data Ready Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
        ///End of Receive Buffer Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Buffer Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Receive Buffer Full Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Transmit Buffer Empty Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Unspecified Register Access Detection Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> urad{}; 
    }
    namespace TdesImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffc4018,0xfffffee0,0,unsigned>;
        ///Data Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
        ///End of Receive Buffer Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Buffer Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Receive Buffer Full Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Transmit Buffer Empty Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Unspecified Register Access Detection Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> urad{}; 
    }
    namespace TdesIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xfffc401c,0xffffcee0,0,unsigned>;
        ///Data Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
        ///End of RX Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of TX Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///RX Buffer Full
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///TX Buffer Empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Unspecified Register Access Detection Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> urad{}; 
        ///Unspecified Register Access Type:
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> urat{}; 
    }
    namespace TdesKey1wxr0{    ///<Key 1 Word Register
        using Addr = Register::Address<0xfffc4020,0x00000000,0,unsigned>;
        ///Key 1 Word x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> key1wx{}; 
    }
    namespace TdesKey1wxr1{    ///<Key 1 Word Register
        using Addr = Register::Address<0xfffc4024,0x00000000,0,unsigned>;
        ///Key 1 Word x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> key1wx{}; 
    }
    namespace TdesKey2wxr0{    ///<Key 2 Word Register
        using Addr = Register::Address<0xfffc4028,0x00000000,0,unsigned>;
        ///Key 2 Word x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> key2wx{}; 
    }
    namespace TdesKey2wxr1{    ///<Key 2 Word Register
        using Addr = Register::Address<0xfffc402c,0x00000000,0,unsigned>;
        ///Key 2 Word x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> key2wx{}; 
    }
    namespace TdesKey3wxr0{    ///<Key 3 Word Register
        using Addr = Register::Address<0xfffc4030,0x00000000,0,unsigned>;
        ///Key 3 Word x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> key3wx{}; 
    }
    namespace TdesKey3wxr1{    ///<Key 3 Word Register
        using Addr = Register::Address<0xfffc4034,0x00000000,0,unsigned>;
        ///Key 3 Word x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> key3wx{}; 
    }
    namespace TdesIdataxr0{    ///<Input Data Register
        using Addr = Register::Address<0xfffc4040,0x00000000,0,unsigned>;
        ///Input Data x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idatax{}; 
    }
    namespace TdesIdataxr1{    ///<Input Data Register
        using Addr = Register::Address<0xfffc4044,0x00000000,0,unsigned>;
        ///Input Data x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idatax{}; 
    }
    namespace TdesOdataxr0{    ///<Output Data Register
        using Addr = Register::Address<0xfffc4050,0x00000000,0,unsigned>;
        ///Output Data x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odatax{}; 
    }
    namespace TdesOdataxr1{    ///<Output Data Register
        using Addr = Register::Address<0xfffc4054,0x00000000,0,unsigned>;
        ///Output Data x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odatax{}; 
    }
    namespace TdesIvxr0{    ///<Initialization Vector Register
        using Addr = Register::Address<0xfffc4060,0x00000000,0,unsigned>;
        ///Initialization Vector x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ivx{}; 
    }
    namespace TdesIvxr1{    ///<Initialization Vector Register
        using Addr = Register::Address<0xfffc4064,0x00000000,0,unsigned>;
        ///Initialization Vector x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ivx{}; 
    }
    namespace TdesRpr{    ///<Receive Pointer Register
        using Addr = Register::Address<0xfffc4100,0x00000000,0,unsigned>;
        ///Receive Pointer Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxptr{}; 
    }
    namespace TdesRcr{    ///<Receive Counter Register
        using Addr = Register::Address<0xfffc4104,0xffff0000,0,unsigned>;
        ///Receive Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxctr{}; 
    }
    namespace TdesTpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0xfffc4108,0x00000000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
    }
    namespace TdesTcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0xfffc410c,0xffff0000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
    }
    namespace TdesRnpr{    ///<Receive Next Pointer Register
        using Addr = Register::Address<0xfffc4110,0x00000000,0,unsigned>;
        ///Receive Next Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxnptr{}; 
    }
    namespace TdesRncr{    ///<Receive Next Counter Register
        using Addr = Register::Address<0xfffc4114,0xffff0000,0,unsigned>;
        ///Receive Next Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxnctr{}; 
    }
    namespace TdesTnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0xfffc4118,0x00000000,0,unsigned>;
        ///Transmit Next Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
    }
    namespace TdesTncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0xfffc411c,0xffff0000,0,unsigned>;
        ///Transmit Counter Next
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
    }
    namespace TdesPtcr{    ///<Transfer Control Register
        using Addr = Register::Address<0xfffc4120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Receiver Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        ///Transmitter Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
    }
    namespace TdesPtsr{    ///<Transfer Status Register
        using Addr = Register::Address<0xfffc4124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
    }
}
