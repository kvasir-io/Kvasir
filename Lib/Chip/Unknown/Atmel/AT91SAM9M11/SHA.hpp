#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Secure Hash Algorithm
    namespace ShaCr{    ///<Control Register
        using Addr = Register::Address<0xfffc8000,0xfffffeee,0x00000000,unsigned>;
        ///Start Processing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> start{}; 
        ///First Block of a Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> first{}; 
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
    }
    namespace ShaMr{    ///<Mode Register
        using Addr = Register::Address<0xfffc8004,0xfffffeec,0x00000000,unsigned>;
        ///Start Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> smod{}; 
        ///Processing Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> procdly{}; 
        ///SHA Algorithm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> algo{}; 
    }
    namespace ShaIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffc8010,0xfffffef8,0x00000000,unsigned>;
        ///Data Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> datrdy{}; 
        ///End of Transmit Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endtx{}; 
        ///Transmit Buffer Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txbufe{}; 
        ///Unspecified Register Access Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> urad{}; 
    }
    namespace ShaIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffc8014,0xfffffef8,0x00000000,unsigned>;
        ///Data Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> datrdy{}; 
        ///End of Transmit Buffer Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endtx{}; 
        ///Transmit Buffer Empty Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txbufe{}; 
        ///Unspecified Register Access Detection Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> urad{}; 
    }
    namespace ShaImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffc8018,0xfffffef8,0x00000000,unsigned>;
        ///Data Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> datrdy{}; 
        ///End of Transmit Buffer Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endtx{}; 
        ///Transmit Buffer Empty Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txbufe{}; 
        ///Unspecified Register Access Detection Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> urad{}; 
    }
    namespace ShaIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xfffc801c,0xffff8ef8,0x00000000,unsigned>;
        ///Data Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> datrdy{}; 
        ///End of TX Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endtx{}; 
        ///TX Buffer Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txbufe{}; 
        ///Unspecified Register Access Detection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> urad{}; 
        ///Unspecified Register Access Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> urat{}; 
    }
    namespace ShaTpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0xfffc8108,0x00000000,0x00000000,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
    }
    namespace ShaTcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0xfffc810c,0xffff0000,0x00000000,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
    }
    namespace ShaTnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0xfffc8118,0x00000000,0x00000000,unsigned>;
        ///Transmit Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
    }
    namespace ShaTncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0xfffc811c,0xffff0000,0x00000000,unsigned>;
        ///Transmit Counter Next
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
    }
    namespace ShaPtcr{    ///<Transfer Control Register
        using Addr = Register::Address<0xfffc8120,0xfffffcfc,0x00000000,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxten{}; 
        ///Receiver Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxtdis{}; 
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txten{}; 
        ///Transmitter Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txtdis{}; 
    }
    namespace ShaPtsr{    ///<Transfer Status Register
        using Addr = Register::Address<0xfffc8124,0xfffffefe,0x00000000,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxten{}; 
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txten{}; 
    }
    namespace ShaIdataxr0{    ///<Input Data Register
        using Addr = Register::Address<0xfffc8040,0x00000000,0x00000000,unsigned>;
        ///Input Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idatax{}; 
    }
    namespace ShaIdataxr1{    ///<Input Data Register
        using Addr = Register::Address<0xfffc8044,0x00000000,0x00000000,unsigned>;
        ///Input Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idatax{}; 
    }
    namespace ShaIdataxr2{    ///<Input Data Register
        using Addr = Register::Address<0xfffc8048,0x00000000,0x00000000,unsigned>;
        ///Input Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idatax{}; 
    }
    namespace ShaIdataxr3{    ///<Input Data Register
        using Addr = Register::Address<0xfffc804c,0x00000000,0x00000000,unsigned>;
        ///Input Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idatax{}; 
    }
    namespace ShaIdataxr4{    ///<Input Data Register
        using Addr = Register::Address<0xfffc8050,0x00000000,0x00000000,unsigned>;
        ///Input Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idatax{}; 
    }
    namespace ShaIdataxr5{    ///<Input Data Register
        using Addr = Register::Address<0xfffc8054,0x00000000,0x00000000,unsigned>;
        ///Input Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idatax{}; 
    }
    namespace ShaIdataxr6{    ///<Input Data Register
        using Addr = Register::Address<0xfffc8058,0x00000000,0x00000000,unsigned>;
        ///Input Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idatax{}; 
    }
    namespace ShaIdataxr7{    ///<Input Data Register
        using Addr = Register::Address<0xfffc805c,0x00000000,0x00000000,unsigned>;
        ///Input Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idatax{}; 
    }
    namespace ShaIdataxr8{    ///<Input Data Register
        using Addr = Register::Address<0xfffc8060,0x00000000,0x00000000,unsigned>;
        ///Input Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idatax{}; 
    }
    namespace ShaIdataxr9{    ///<Input Data Register
        using Addr = Register::Address<0xfffc8064,0x00000000,0x00000000,unsigned>;
        ///Input Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idatax{}; 
    }
    namespace ShaIdataxr10{    ///<Input Data Register
        using Addr = Register::Address<0xfffc8068,0x00000000,0x00000000,unsigned>;
        ///Input Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idatax{}; 
    }
    namespace ShaIdataxr11{    ///<Input Data Register
        using Addr = Register::Address<0xfffc806c,0x00000000,0x00000000,unsigned>;
        ///Input Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idatax{}; 
    }
    namespace ShaIdataxr12{    ///<Input Data Register
        using Addr = Register::Address<0xfffc8070,0x00000000,0x00000000,unsigned>;
        ///Input Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idatax{}; 
    }
    namespace ShaIdataxr13{    ///<Input Data Register
        using Addr = Register::Address<0xfffc8074,0x00000000,0x00000000,unsigned>;
        ///Input Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idatax{}; 
    }
    namespace ShaIdataxr14{    ///<Input Data Register
        using Addr = Register::Address<0xfffc8078,0x00000000,0x00000000,unsigned>;
        ///Input Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idatax{}; 
    }
    namespace ShaIdataxr15{    ///<Input Data Register
        using Addr = Register::Address<0xfffc807c,0x00000000,0x00000000,unsigned>;
        ///Input Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idatax{}; 
    }
    namespace ShaOdataxr0{    ///<Output Data Register
        using Addr = Register::Address<0xfffc8080,0x00000000,0x00000000,unsigned>;
        ///Output Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> odatax{}; 
    }
    namespace ShaOdataxr1{    ///<Output Data Register
        using Addr = Register::Address<0xfffc8084,0x00000000,0x00000000,unsigned>;
        ///Output Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> odatax{}; 
    }
    namespace ShaOdataxr2{    ///<Output Data Register
        using Addr = Register::Address<0xfffc8088,0x00000000,0x00000000,unsigned>;
        ///Output Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> odatax{}; 
    }
    namespace ShaOdataxr3{    ///<Output Data Register
        using Addr = Register::Address<0xfffc808c,0x00000000,0x00000000,unsigned>;
        ///Output Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> odatax{}; 
    }
    namespace ShaOdataxr4{    ///<Output Data Register
        using Addr = Register::Address<0xfffc8090,0x00000000,0x00000000,unsigned>;
        ///Output Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> odatax{}; 
    }
    namespace ShaOdataxr5{    ///<Output Data Register
        using Addr = Register::Address<0xfffc8094,0x00000000,0x00000000,unsigned>;
        ///Output Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> odatax{}; 
    }
    namespace ShaOdataxr6{    ///<Output Data Register
        using Addr = Register::Address<0xfffc8098,0x00000000,0x00000000,unsigned>;
        ///Output Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> odatax{}; 
    }
    namespace ShaOdataxr7{    ///<Output Data Register
        using Addr = Register::Address<0xfffc809c,0x00000000,0x00000000,unsigned>;
        ///Output Data x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> odatax{}; 
    }
}
