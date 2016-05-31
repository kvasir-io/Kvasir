#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral USBCLK 
    namespace UsbclkUccr{    ///< register UCCR 
        using Addr = Register::Address<0x40036000,0xfffffff4,0x00000000,unsigned char>;
        /// bitfield UCEN1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ucen1{}; 
        /// bitfield UCSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ucsel{}; 
        /// bitfield UCEN0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ucen0{}; 
    }
    namespace UsbclkUpcr1{    ///< register UPCR1 
        using Addr = Register::Address<0x40036004,0xfffffffc,0x00000000,unsigned char>;
        /// bitfield UPINC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> upinc{}; 
        /// bitfield UPLLEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> upllen{}; 
    }
    namespace UsbclkUpcr2{    ///< register UPCR2 
        using Addr = Register::Address<0x40036008,0xfffffff8,0x00000000,unsigned char>;
        /// bitfield UPOWT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> upowt{}; 
    }
    namespace UsbclkUpcr3{    ///< register UPCR3 
        using Addr = Register::Address<0x4003600c,0xffffffe0,0x00000000,unsigned char>;
        /// bitfield UPLLK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> upllk{}; 
    }
    namespace UsbclkUpcr4{    ///< register UPCR4 
        using Addr = Register::Address<0x40036010,0xffffff80,0x00000000,unsigned char>;
        /// bitfield UPLLN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> uplln{}; 
    }
    namespace UsbclkUpcr5{    ///< register UPCR5 
        using Addr = Register::Address<0x40036024,0xfffffff0,0x00000000,unsigned char>;
        /// bitfield UPLLM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> upllm{}; 
    }
    namespace UsbclkUpStr{    ///< register UP_STR 
        using Addr = Register::Address<0x40036014,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield UPRDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uprdy{}; 
    }
    namespace UsbclkUpintEnr{    ///< register UPINT_ENR 
        using Addr = Register::Address<0x40036018,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield UPCSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> upcse{}; 
    }
    namespace UsbclkUpintStr{    ///< register UPINT_STR 
        using Addr = Register::Address<0x40036020,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield UPCSI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> upcsi{}; 
    }
    namespace UsbclkUpintClr{    ///< register UPINT_CLR 
        using Addr = Register::Address<0x4003601c,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield UPCSC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> upcsc{}; 
    }
    namespace UsbclkUsben0{    ///< register USBEN0 
        using Addr = Register::Address<0x40036030,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield USBEN0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usben0{}; 
    }
    namespace UsbclkUsben1{    ///< register USBEN1 
        using Addr = Register::Address<0x40036034,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield USBEN1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usben1{}; 
    }
}
