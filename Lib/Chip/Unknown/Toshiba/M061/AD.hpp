#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-Digital Converter (AD)
    namespace Noneclk{    ///<AD Conversion Clock Setting Register
        using Addr = Register::Address<0x400fc000,0xffffff38,0,unsigned>;
        ///ADCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> adclk{}; 
        namespace AdclkValC{
        }
        ///ADCC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> adcc{}; 
        namespace AdccValC{
        }
    }
    namespace Nonemod0{    ///<AD Mode Control Register 0
        using Addr = Register::Address<0x400fc004,0xffffff20,0,unsigned>;
        ///ADS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ads{}; 
        namespace AdsValC{
        }
        ///SCAN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scan{}; 
        namespace ScanValC{
        }
        ///REPEAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> repeat{}; 
        namespace RepeatValC{
        }
        ///ITM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> itm{}; 
        namespace ItmValC{
        }
        ///ADBFN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> adbfn{}; 
        namespace AdbfnValC{
        }
        ///EOCFN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eocfn{}; 
        namespace EocfnValC{
        }
    }
    namespace Nonemod1{    ///<AD Mode Control Register 1
        using Addr = Register::Address<0x400fc008,0xffffff00,0,unsigned>;
        ///ADCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> adch{}; 
        namespace AdchValC{
        }
        ///ADSCN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> adscn{}; 
        namespace AdscnValC{
        }
        ///I2AD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> i2ad{}; 
        namespace I2adValC{
        }
        ///VREFON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> vrefon{}; 
        namespace VrefonValC{
        }
    }
    namespace Nonemod2{    ///<AD Mode Control Register 2
        using Addr = Register::Address<0x400fc00c,0xffffff10,0,unsigned>;
        ///HPADCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> hpadch{}; 
        namespace HpadchValC{
        }
        ///HPADCE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hpadce{}; 
        namespace HpadceValC{
        }
        ///ADBFHP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> adbfhp{}; 
        namespace AdbfhpValC{
        }
        ///EOCFHP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eocfhp{}; 
        namespace EocfhpValC{
        }
    }
    namespace Nonemod3{    ///<AD Mode Control Register 3
        using Addr = Register::Address<0x400fc010,0xffffffc0,0,unsigned>;
        ///ADOBSV0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adobsv0{}; 
        namespace Adobsv0ValC{
        }
        ///ADREGS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> adregs0{}; 
        namespace Adregs0ValC{
        }
        ///ADOBIC0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adobic0{}; 
        namespace Adobic0ValC{
        }
    }
    namespace Nonemod4{    ///<AD Mode Control Register 4
        using Addr = Register::Address<0x400fc014,0xffffff0c,0,unsigned>;
        ///ADRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> adrst{}; 
        namespace AdrstValC{
        }
        ///ADHTG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adhtg{}; 
        namespace AdhtgValC{
        }
        ///ADHS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adhs{}; 
        namespace AdhsValC{
        }
        ///HADHTG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hadhtg{}; 
        namespace HadhtgValC{
        }
        ///HADHS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hadhs{}; 
        namespace HadhsValC{
        }
    }
    namespace Nonemod5{    ///<AD Mode Control Register 5
        using Addr = Register::Address<0x400fc018,0xffffffc0,0,unsigned>;
        ///ADOBSV1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adobsv1{}; 
        namespace Adobsv1ValC{
        }
        ///ADREGS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> adregs1{}; 
        namespace Adregs1ValC{
        }
        ///ADOBIC1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adobic1{}; 
        namespace Adobic1ValC{
        }
    }
    namespace Nonereg0{    ///<AD Conversion Result Register 08
        using Addr = Register::Address<0x400fc030,0xffff003c,0,unsigned>;
        ///ADR0RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adr0rf{}; 
        namespace Adr0rfValC{
        }
        ///OVR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovr0{}; 
        namespace Ovr0ValC{
        }
        ///ADR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> adr0{}; 
        namespace Adr0ValC{
        }
    }
    namespace Nonereg1{    ///<AD Conversion Result Register 19
        using Addr = Register::Address<0x400fc034,0xffff003c,0,unsigned>;
        ///ADR1RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adr1rf{}; 
        namespace Adr1rfValC{
        }
        ///OVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovr1{}; 
        namespace Ovr1ValC{
        }
        ///ADR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> adr1{}; 
        namespace Adr1ValC{
        }
    }
    namespace Nonereg2{    ///<AD Conversion Result Register 2A
        using Addr = Register::Address<0x400fc038,0xffff003c,0,unsigned>;
        ///ADR2RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adr2rf{}; 
        namespace Adr2rfValC{
        }
        ///OVR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovr2{}; 
        namespace Ovr2ValC{
        }
        ///ADR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> adr2{}; 
        namespace Adr2ValC{
        }
    }
    namespace Nonereg3{    ///<AD Conversion Result Register 3B
        using Addr = Register::Address<0x400fc03c,0xffff003c,0,unsigned>;
        ///ADR3RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adr3rf{}; 
        namespace Adr3rfValC{
        }
        ///OVR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovr3{}; 
        namespace Ovr3ValC{
        }
        ///ADR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> adr3{}; 
        namespace Adr3ValC{
        }
    }
    namespace Nonereg4{    ///<AD Conversion Result Register 4C
        using Addr = Register::Address<0x400fc040,0xffff003c,0,unsigned>;
        ///ADR4RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adr4rf{}; 
        namespace Adr4rfValC{
        }
        ///OVR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovr4{}; 
        namespace Ovr4ValC{
        }
        ///ADR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> adr4{}; 
        namespace Adr4ValC{
        }
    }
    namespace Nonereg5{    ///<AD Conversion Result Register 5D
        using Addr = Register::Address<0x400fc044,0xffff003c,0,unsigned>;
        ///ADR5RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adr5rf{}; 
        namespace Adr5rfValC{
        }
        ///OVR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovr5{}; 
        namespace Ovr5ValC{
        }
        ///ADR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> adr5{}; 
        namespace Adr5ValC{
        }
    }
    namespace Nonereg6{    ///<AD Conversion Result Register 6E
        using Addr = Register::Address<0x400fc048,0xffff003c,0,unsigned>;
        ///ADR6RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adr6rf{}; 
        namespace Adr6rfValC{
        }
        ///OVR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovr6{}; 
        namespace Ovr6ValC{
        }
        ///ADR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> adr6{}; 
        namespace Adr6ValC{
        }
    }
    namespace Nonereg7{    ///<AD Conversion Result Register 7F
        using Addr = Register::Address<0x400fc04c,0xffff003c,0,unsigned>;
        ///ADR7RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adr7rf{}; 
        namespace Adr7rfValC{
        }
        ///OVR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovr7{}; 
        namespace Ovr7ValC{
        }
        ///ADR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> adr7{}; 
        namespace Adr7ValC{
        }
    }
    namespace Nonereg8{    ///<AD Conversion Result Register 8
        using Addr = Register::Address<0x400fc050,0xffff003c,0,unsigned>;
        ///ADR8RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adr8rf{}; 
        namespace Adr8rfValC{
        }
        ///OVR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovr8{}; 
        namespace Ovr8ValC{
        }
        ///ADR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> adr8{}; 
        namespace Adr8ValC{
        }
    }
    namespace Nonereg9{    ///<AD Conversion Result Register 9
        using Addr = Register::Address<0x400fc054,0xffff003c,0,unsigned>;
        ///ADR9RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adr9rf{}; 
        namespace Adr9rfValC{
        }
        ///OVR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovr9{}; 
        namespace Ovr9ValC{
        }
        ///ADR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> adr9{}; 
        namespace Adr9ValC{
        }
    }
    namespace Nonereg10{    ///<AD Conversion Result Register 10
        using Addr = Register::Address<0x400fc058,0xffff003c,0,unsigned>;
        ///ADR10RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adr10rf{}; 
        namespace Adr10rfValC{
        }
        ///OVR10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovr10{}; 
        namespace Ovr10ValC{
        }
        ///ADR10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> adr10{}; 
        namespace Adr10ValC{
        }
    }
    namespace Nonereg11{    ///<AD Conversion Result Register 11
        using Addr = Register::Address<0x400fc05c,0xffff003c,0,unsigned>;
        ///ADR11RF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adr11rf{}; 
        namespace Adr11rfValC{
        }
        ///OVR11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovr11{}; 
        namespace Ovr11ValC{
        }
        ///ADR11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> adr11{}; 
        namespace Adr11ValC{
        }
    }
    namespace Noneregsp{    ///<AD Conversion Result Register SP
        using Addr = Register::Address<0x400fc060,0xffff003c,0,unsigned>;
        ///ADRSPRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrsprf{}; 
        namespace AdrsprfValC{
        }
        ///OVRSP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovrsp{}; 
        namespace OvrspValC{
        }
        ///ADRSP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> adrsp{}; 
        namespace AdrspValC{
        }
    }
    namespace Nonecmp0{    ///<AD Conversion Result Comparison Register 0
        using Addr = Register::Address<0x400fc064,0xffff003f,0,unsigned>;
        ///ADCOM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> adcom0{}; 
        namespace Adcom0ValC{
        }
    }
    namespace Nonecmp1{    ///<AD Conversion Result Comparison Register 1
        using Addr = Register::Address<0x400fc068,0xffff003f,0,unsigned>;
        ///ADCOM1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> adcom1{}; 
        namespace Adcom1ValC{
        }
    }
}
