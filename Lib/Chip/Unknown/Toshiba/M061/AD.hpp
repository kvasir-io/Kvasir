#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Analog-to-Digital Converter (AD)
    namespace AdClk{    ///<AD Conversion Clock Setting Register
        using Addr = Register::Address<0x400fc000,0xffffff38,0x00000000,unsigned>;
        ///ADCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> adclk{}; 
        ///ADCC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> adcc{}; 
    }
    namespace AdMod0{    ///<AD Mode Control Register 0
        using Addr = Register::Address<0x400fc004,0xffffff20,0x00000000,unsigned>;
        ///ADS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ads{}; 
        ///SCAN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scan{}; 
        ///REPEAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> repeat{}; 
        ///ITM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> itm{}; 
        ///ADBFN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adbfn{}; 
        ///EOCFN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eocfn{}; 
    }
    namespace AdMod1{    ///<AD Mode Control Register 1
        using Addr = Register::Address<0x400fc008,0xffffff00,0x00000000,unsigned>;
        ///ADCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> adch{}; 
        ///ADSCN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> adscn{}; 
        ///I2AD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> i2ad{}; 
        ///VREFON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> vrefon{}; 
    }
    namespace AdMod2{    ///<AD Mode Control Register 2
        using Addr = Register::Address<0x400fc00c,0xffffff10,0x00000000,unsigned>;
        ///HPADCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> hpadch{}; 
        ///HPADCE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hpadce{}; 
        ///ADBFHP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adbfhp{}; 
        ///EOCFHP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eocfhp{}; 
    }
    namespace AdMod3{    ///<AD Mode Control Register 3
        using Addr = Register::Address<0x400fc010,0xffffffc0,0x00000000,unsigned>;
        ///ADOBSV0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adobsv0{}; 
        ///ADREGS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> adregs0{}; 
        ///ADOBIC0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adobic0{}; 
    }
    namespace AdMod4{    ///<AD Mode Control Register 4
        using Addr = Register::Address<0x400fc014,0xffffff0c,0x00000000,unsigned>;
        ///ADRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrst{}; 
        ///ADHTG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adhtg{}; 
        ///ADHS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adhs{}; 
        ///HADHTG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hadhtg{}; 
        ///HADHS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hadhs{}; 
    }
    namespace AdMod5{    ///<AD Mode Control Register 5
        using Addr = Register::Address<0x400fc018,0xffffffc0,0x00000000,unsigned>;
        ///ADOBSV1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adobsv1{}; 
        ///ADREGS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> adregs1{}; 
        ///ADOBIC1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adobic1{}; 
    }
    namespace AdReg0{    ///<AD Conversion Result Register 08
        using Addr = Register::Address<0x400fc030,0xffff003c,0x00000000,unsigned>;
        ///ADR0RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr0rf{}; 
        ///OVR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovr0{}; 
        ///ADR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr0{}; 
    }
    namespace AdReg1{    ///<AD Conversion Result Register 19
        using Addr = Register::Address<0x400fc034,0xffff003c,0x00000000,unsigned>;
        ///ADR1RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr1rf{}; 
        ///OVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovr1{}; 
        ///ADR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr1{}; 
    }
    namespace AdReg2{    ///<AD Conversion Result Register 2A
        using Addr = Register::Address<0x400fc038,0xffff003c,0x00000000,unsigned>;
        ///ADR2RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr2rf{}; 
        ///OVR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovr2{}; 
        ///ADR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr2{}; 
    }
    namespace AdReg3{    ///<AD Conversion Result Register 3B
        using Addr = Register::Address<0x400fc03c,0xffff003c,0x00000000,unsigned>;
        ///ADR3RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr3rf{}; 
        ///OVR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovr3{}; 
        ///ADR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr3{}; 
    }
    namespace AdReg4{    ///<AD Conversion Result Register 4C
        using Addr = Register::Address<0x400fc040,0xffff003c,0x00000000,unsigned>;
        ///ADR4RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr4rf{}; 
        ///OVR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovr4{}; 
        ///ADR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr4{}; 
    }
    namespace AdReg5{    ///<AD Conversion Result Register 5D
        using Addr = Register::Address<0x400fc044,0xffff003c,0x00000000,unsigned>;
        ///ADR5RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr5rf{}; 
        ///OVR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovr5{}; 
        ///ADR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr5{}; 
    }
    namespace AdReg6{    ///<AD Conversion Result Register 6E
        using Addr = Register::Address<0x400fc048,0xffff003c,0x00000000,unsigned>;
        ///ADR6RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr6rf{}; 
        ///OVR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovr6{}; 
        ///ADR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr6{}; 
    }
    namespace AdReg7{    ///<AD Conversion Result Register 7F
        using Addr = Register::Address<0x400fc04c,0xffff003c,0x00000000,unsigned>;
        ///ADR7RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr7rf{}; 
        ///OVR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovr7{}; 
        ///ADR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr7{}; 
    }
    namespace AdReg8{    ///<AD Conversion Result Register 8
        using Addr = Register::Address<0x400fc050,0xffff003c,0x00000000,unsigned>;
        ///ADR8RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr8rf{}; 
        ///OVR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovr8{}; 
        ///ADR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr8{}; 
    }
    namespace AdReg9{    ///<AD Conversion Result Register 9
        using Addr = Register::Address<0x400fc054,0xffff003c,0x00000000,unsigned>;
        ///ADR9RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr9rf{}; 
        ///OVR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovr9{}; 
        ///ADR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr9{}; 
    }
    namespace AdReg10{    ///<AD Conversion Result Register 10
        using Addr = Register::Address<0x400fc058,0xffff003c,0x00000000,unsigned>;
        ///ADR10RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr10rf{}; 
        ///OVR10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovr10{}; 
        ///ADR10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr10{}; 
    }
    namespace AdReg11{    ///<AD Conversion Result Register 11
        using Addr = Register::Address<0x400fc05c,0xffff003c,0x00000000,unsigned>;
        ///ADR11RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr11rf{}; 
        ///OVR11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovr11{}; 
        ///ADR11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr11{}; 
    }
    namespace AdRegsp{    ///<AD Conversion Result Register SP
        using Addr = Register::Address<0x400fc060,0xffff003c,0x00000000,unsigned>;
        ///ADRSPRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrsprf{}; 
        ///OVRSP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovrsp{}; 
        ///ADRSP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrsp{}; 
    }
    namespace AdCmp0{    ///<AD Conversion Result Comparison Register 0
        using Addr = Register::Address<0x400fc064,0xffff003f,0x00000000,unsigned>;
        ///ADCOM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> adcom0{}; 
    }
    namespace AdCmp1{    ///<AD Conversion Result Comparison Register 1
        using Addr = Register::Address<0x400fc068,0xffff003f,0x00000000,unsigned>;
        ///ADCOM1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> adcom1{}; 
    }
}
