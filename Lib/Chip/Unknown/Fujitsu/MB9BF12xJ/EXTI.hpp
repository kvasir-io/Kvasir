#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//External Interrupt and NMI Control
    namespace ExtiEnir{    ///<Enable Interrupt Request Register
        using Addr = Register::Address<0x40030000,0xfff3bf33,0x00000000,unsigned>;
        ///Bit19 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> en19{}; 
        ///Bit18 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> en18{}; 
        ///Bit14 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> en14{}; 
        ///Bit7 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> en7{}; 
        ///Bit6 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> en6{}; 
        ///Bit3 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> en3{}; 
        ///Bit2 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> en2{}; 
    }
    namespace ExtiEirr{    ///<External Interrupt Request Register
        using Addr = Register::Address<0x40030004,0xfff3bf33,0x00000000,unsigned>;
        ///Bit19 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> er19{}; 
        ///Bit18 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> er18{}; 
        ///Bit14 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> er14{}; 
        ///Bit7 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> er7{}; 
        ///Bit6 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> er6{}; 
        ///Bit3 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> er3{}; 
        ///Bit2 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> er2{}; 
    }
    namespace ExtiEicl{    ///<External Interrupt Clear Register
        using Addr = Register::Address<0x40030008,0xfff3bf33,0x00000000,unsigned>;
        ///Bit19 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ecl19{}; 
        ///Bit18 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ecl18{}; 
        ///Bit14 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ecl14{}; 
        ///Bit7 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ecl7{}; 
        ///Bit6 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ecl6{}; 
        ///Bit3 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ecl3{}; 
        ///Bit2 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ecl2{}; 
    }
    namespace ExtiElvr{    ///<External Interrupt Level Register
        using Addr = Register::Address<0x4003000c,0xcfff0f0f,0x00000000,unsigned>;
        ///Bit29 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> lb14{}; 
        ///Bit28 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> la14{}; 
        ///Bit15 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lb7{}; 
        ///Bit14 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> la7{}; 
        ///Bit13 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lb6{}; 
        ///Bit12 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> la6{}; 
        ///Bit7 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lb3{}; 
        ///Bit6 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> la3{}; 
        ///Bit5 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lb2{}; 
        ///Bit4 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> la2{}; 
    }
    namespace ExtiElvr1{    ///<External Interrupt Level Register 1
        using Addr = Register::Address<0x40030010,0xffffff0f,0x00000000,unsigned>;
        ///Bit7 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lb19{}; 
        ///Bit6 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> la19{}; 
        ///Bit5 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lb18{}; 
        ///Bit4 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> la18{}; 
    }
    namespace ExtiNmirr{    ///<Non Maskable Interrupt Request Register
        using Addr = Register::Address<0x40030014,0xfffffffe,0x00000000,unsigned char>;
        ///NMI interrupt request detection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nr{}; 
    }
    namespace ExtiNmicl{    ///<Non Maskable Interrupt Clear Register
        using Addr = Register::Address<0x40030018,0xfffffffe,0x00000000,unsigned char>;
        ///NMI interrupt cause clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ncl{}; 
    }
}
