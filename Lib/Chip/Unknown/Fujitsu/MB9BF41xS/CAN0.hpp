#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonectrlr{
        using Addr = Register::Address<0x40062000,0xffffff10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TEST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INIT; 
    }
    namespace Nonestatr{
        using Addr = Register::Address<0x40062002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EWARN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> LEC; 
    }
    namespace Noneerrcnt{
        using Addr = Register::Address<0x40062004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> REC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TEC; 
    }
    namespace Nonebtr{
        using Addr = Register::Address<0x40062006,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> TSEG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TSEG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SJW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> BRP; 
    }
    namespace Noneintr{
        using Addr = Register::Address<0x40062008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INTID; 
    }
    namespace Nonetestr{
        using Addr = Register::Address<0x4006200a,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LBACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SILENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BASIC; 
    }
    namespace Nonebrper{
        using Addr = Register::Address<0x4006200c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BRPE; 
    }
    namespace Noneif1creq{
        using Addr = Register::Address<0x40062010,0xffff7f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MESSAGENUMBER; 
    }
    namespace Noneif1cmsk{
        using Addr = Register::Address<0x40062012,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WRRD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ARB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CONTROL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NEWDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATAA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATAB; 
    }
    namespace Noneif1msk1{
        using Addr = Register::Address<0x40062014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MSK15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MSK14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MSK13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MSK12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MSK11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MSK10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MSK9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MSK8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSK7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MSK6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSK5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSK4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MSK3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MSK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MSK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSK0; 
    }
    namespace Noneif1msk2{
        using Addr = Register::Address<0x40062016,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MXTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MSK28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MSK27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MSK26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MSK25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MSK24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSK23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MSK22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSK21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSK20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MSK19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MSK18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MSK17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSK16; 
    }
    namespace Noneif1arb1{
        using Addr = Register::Address<0x40062018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ID15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ID14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ID13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ID12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ID11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ID10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ID9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ID8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ID0; 
    }
    namespace Noneif1arb2{
        using Addr = Register::Address<0x4006201a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MSGVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> XTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ID28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ID27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ID26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ID25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ID24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ID23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ID22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ID21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ID20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ID19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ID18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ID17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ID16; 
    }
    namespace Noneif1mctr{
        using Addr = Register::Address<0x4006201c,0xffff0070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NEWDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MSGLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> INTPND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RMTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXRQST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EOB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DLC; 
    }
    namespace Noneif1dta1_l{
        using Addr = Register::Address<0x40062020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_1_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_0_; 
    }
    namespace Noneif1dta2_l{
        using Addr = Register::Address<0x40062022,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_3_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_2_; 
    }
    namespace Noneif1dtb1_l{
        using Addr = Register::Address<0x40062024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_5_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_4_; 
    }
    namespace Noneif1dtb2_l{
        using Addr = Register::Address<0x40062026,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_7_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_6_; 
    }
    namespace Noneif1dta2_b{
        using Addr = Register::Address<0x40062030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_2_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_3_; 
    }
    namespace Noneif1dta1_b{
        using Addr = Register::Address<0x40062032,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_0_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_1_; 
    }
    namespace Noneif1dtb2_b{
        using Addr = Register::Address<0x40062034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_6_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_7_; 
    }
    namespace Noneif1dtb1_b{
        using Addr = Register::Address<0x40062036,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_4_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_5_; 
    }
    namespace Noneif2creq{
        using Addr = Register::Address<0x40062040,0xffff7f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MESSAGENUMBER; 
    }
    namespace Noneif2cmsk{
        using Addr = Register::Address<0x40062042,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WRRD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ARB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CONTROL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NEWDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATAA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATAB; 
    }
    namespace Noneif2msk1{
        using Addr = Register::Address<0x40062044,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MSK15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MSK14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MSK13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MSK12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MSK11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MSK10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MSK9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MSK8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSK7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MSK6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSK5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSK4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MSK3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MSK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MSK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSK0; 
    }
    namespace Noneif2msk2{
        using Addr = Register::Address<0x40062046,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MXTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MSK28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MSK27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MSK26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MSK25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MSK24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSK23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MSK22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSK21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSK20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MSK19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MSK18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MSK17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSK16; 
    }
    namespace Noneif2arb1{
        using Addr = Register::Address<0x40062048,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ID15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ID14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ID13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ID12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ID11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ID10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ID9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ID8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ID0; 
    }
    namespace Noneif2arb2{
        using Addr = Register::Address<0x4006204a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MSGVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> XTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ID28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ID27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ID26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ID25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ID24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ID23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ID22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ID21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ID20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ID19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ID18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ID17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ID16; 
    }
    namespace Noneif2mctr{
        using Addr = Register::Address<0x4006204c,0xffff0070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NEWDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MSGLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> INTPND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RMTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXRQST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EOB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DLC; 
    }
    namespace Noneif2dta1_l{
        using Addr = Register::Address<0x40062050,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_1_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_0_; 
    }
    namespace Noneif2dta2_l{
        using Addr = Register::Address<0x40062052,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_3_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_2_; 
    }
    namespace Noneif2dtb1_l{
        using Addr = Register::Address<0x40062054,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_5_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_4_; 
    }
    namespace Noneif2dtb2_l{
        using Addr = Register::Address<0x40062056,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_7_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_6_; 
    }
    namespace Noneif2dta2_b{
        using Addr = Register::Address<0x40062060,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_2_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_3_; 
    }
    namespace Noneif2dta1_b{
        using Addr = Register::Address<0x40062062,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_0_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_1_; 
    }
    namespace Noneif2dtb2_b{
        using Addr = Register::Address<0x40062064,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_6_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_7_; 
    }
    namespace Noneif2dtb1_b{
        using Addr = Register::Address<0x40062066,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_4_; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_5_; 
    }
    namespace Nonetreqr1{
        using Addr = Register::Address<0x40062080,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TXRQST16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TXRQST15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TXRQST14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TXRQST13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRQST12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXRQST11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXRQST10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXRQST9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXRQST8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXRQST7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXRQST6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXRQST5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXRQST4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRQST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRQST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRQST1; 
    }
    namespace Nonetreqr2{
        using Addr = Register::Address<0x40062082,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TXRQST32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TXRQST31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TXRQST30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TXRQST29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRQST28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXRQST27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXRQST26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXRQST25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXRQST24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXRQST23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXRQST22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXRQST21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXRQST20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRQST19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRQST18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRQST17; 
    }
    namespace Nonenewdt1{
        using Addr = Register::Address<0x40062090,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NEWDAT16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NEWDAT15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NEWDAT14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NEWDAT13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> NEWDAT12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> NEWDAT11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> NEWDAT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NEWDAT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NEWDAT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NEWDAT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NEWDAT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NEWDAT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NEWDAT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NEWDAT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NEWDAT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NEWDAT1; 
    }
    namespace Nonenewdt2{
        using Addr = Register::Address<0x40062092,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NEWDAT32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NEWDAT31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NEWDAT30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NEWDAT29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> NEWDAT28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> NEWDAT27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> NEWDAT26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NEWDAT25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NEWDAT24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NEWDAT23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NEWDAT22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NEWDAT21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NEWDAT20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NEWDAT19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NEWDAT18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NEWDAT17; 
    }
    namespace Noneintpnd1{
        using Addr = Register::Address<0x400620a0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> INTPND16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> INTPND15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> INTPND14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> INTPND13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> INTPND12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> INTPND11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> INTPND10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INTPND9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> INTPND8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INTPND7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INTPND6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INTPND5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTPND4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTPND3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTPND2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTPND1; 
    }
    namespace Noneintpnd2{
        using Addr = Register::Address<0x400620a2,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> INTPND32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> INTPND31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> INTPND30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> INTPND29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> INTPND28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> INTPND27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> INTPND26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INTPND25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> INTPND24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INTPND23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INTPND22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INTPND21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTPND20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTPND19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTPND18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTPND17; 
    }
    namespace Nonemsgval1{
        using Addr = Register::Address<0x400620b0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MSGVAL16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MSGVAL15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MSGVAL14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MSGVAL13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MSGVAL12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MSGVAL11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MSGVAL10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MSGVAL9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSGVAL8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MSGVAL7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSGVAL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSGVAL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MSGVAL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MSGVAL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MSGVAL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSGVAL1; 
    }
    namespace Nonemsgval2{
        using Addr = Register::Address<0x400620b2,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MSGVAL32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MSGVAL31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MSGVAL30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MSGVAL29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MSGVAL28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MSGVAL27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MSGVAL26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MSGVAL25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSGVAL24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MSGVAL23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSGVAL22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSGVAL21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MSGVAL20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MSGVAL19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MSGVAL18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSGVAL17; 
    }
}
