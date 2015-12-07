#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral USBCLK 
    namespace Noneuccr{    ///< register UCCR 
        using Addr = Register::Address<0x40036000,0xfffffffc,0,unsigned char>;
        /// bitfield UCSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ucsel{}; 
        namespace UcselValC{
        }
        /// bitfield UCEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ucen{}; 
        namespace UcenValC{
        }
    }
    namespace Noneupcr1{    ///< register UPCR1 
        using Addr = Register::Address<0x40036004,0xfffffffc,0,unsigned char>;
        /// bitfield UPINC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> upinc{}; 
        namespace UpincValC{
        }
        /// bitfield UPLLEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> upllen{}; 
        namespace UpllenValC{
        }
    }
    namespace Noneupcr2{    ///< register UPCR2 
        using Addr = Register::Address<0x40036008,0xfffffff8,0,unsigned char>;
        /// bitfield UPOWT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> upowt{}; 
        namespace UpowtValC{
        }
    }
    namespace Noneupcr3{    ///< register UPCR3 
        using Addr = Register::Address<0x4003600c,0xffffffe0,0,unsigned char>;
        /// bitfield UPLLK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> upllk{}; 
        namespace UpllkValC{
        }
    }
    namespace Noneupcr4{    ///< register UPCR4 
        using Addr = Register::Address<0x40036010,0xffffffe0,0,unsigned char>;
        /// bitfield UPLLN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> uplln{}; 
        namespace UpllnValC{
        }
    }
    namespace Noneupcr5{    ///< register UPCR5 
        using Addr = Register::Address<0x40036024,0xfffffff0,0,unsigned char>;
        /// bitfield UPLLM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> upllm{}; 
        namespace UpllmValC{
        }
    }
    namespace NoneupStr{    ///< register UP_STR 
        using Addr = Register::Address<0x40036014,0xfffffffe,0,unsigned char>;
        /// bitfield UPRDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uprdy{}; 
        namespace UprdyValC{
        }
    }
    namespace NoneupintEnr{    ///< register UPINT_ENR 
        using Addr = Register::Address<0x40036018,0xfffffffe,0,unsigned char>;
        /// bitfield UPCSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> upcse{}; 
        namespace UpcseValC{
        }
    }
    namespace NoneupintStr{    ///< register UPINT_STR 
        using Addr = Register::Address<0x40036020,0xfffffffe,0,unsigned char>;
        /// bitfield UPCSI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> upcsi{}; 
        namespace UpcsiValC{
        }
    }
    namespace NoneupintClr{    ///< register UPINT_CLR 
        using Addr = Register::Address<0x4003601c,0xfffffffe,0,unsigned char>;
        /// bitfield UPCSC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> upcsc{}; 
        namespace UpcscValC{
        }
    }
    namespace Noneusben{    ///< register USBEN 
        using Addr = Register::Address<0x40036030,0xfffffffe,0,unsigned char>;
        /// bitfield USBEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usben{}; 
        namespace UsbenValC{
        }
    }
}
