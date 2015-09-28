#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonelcdcc1{
        using Addr = Register::Address<0x40032000,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> VSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> MS; 
    }
    namespace Nonelcdcc2{
        using Addr = Register::Address<0x40032001,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BLS8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LCDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LCDIF; 
    }
    namespace Nonelcdcc3{
        using Addr = Register::Address<0x40032002,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PICTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BLSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> VE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> VE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VE0; 
    }
    namespace Nonelcdc_psr{
        using Addr = Register::Address<0x40032004,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,0)> CLKDIV; 
    }
    namespace Nonelcdc_comen{
        using Addr = Register::Address<0x40032008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COM7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> COM6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COM5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> COM4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> COM3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> COM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> COM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COM0; 
    }
    namespace Nonelcdc_segen1{
        using Addr = Register::Address<0x4003200c,0x0001c360>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SEG31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SEG30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SEG29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SEG28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SEG27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SEG26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SEG25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SEG24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SEG23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SEG22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SEG21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SEG20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SEG19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SEG18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SEG17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SEG13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SEG12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SEG11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SEG10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SEG07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SEG04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SEG03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SEG02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SEG01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SEG00; 
    }
    namespace Nonelcdc_segen2{
        using Addr = Register::Address<0x40032010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SEG39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SEG38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SEG37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SEG36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SEG35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SEG34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SEG33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SEG32; 
    }
    namespace Nonelcdc_blink{
        using Addr = Register::Address<0x40032014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BLD15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BLD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> BLD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BLD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BLD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BLD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BLD09; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BLD08; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BLD07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BLD06; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BLD05; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BLD04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BLD03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BLD02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BLD01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BLD00; 
    }
    namespace Nonelcdram00{
        using Addr = Register::Address<0x4003201c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram01{
        using Addr = Register::Address<0x4003201d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram02{
        using Addr = Register::Address<0x4003201e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram03{
        using Addr = Register::Address<0x4003201f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram04{
        using Addr = Register::Address<0x40032020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram05{
        using Addr = Register::Address<0x40032021,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram06{
        using Addr = Register::Address<0x40032022,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram07{
        using Addr = Register::Address<0x40032023,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram08{
        using Addr = Register::Address<0x40032024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram09{
        using Addr = Register::Address<0x40032025,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram10{
        using Addr = Register::Address<0x40032026,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram11{
        using Addr = Register::Address<0x40032027,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram12{
        using Addr = Register::Address<0x40032028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram13{
        using Addr = Register::Address<0x40032029,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram14{
        using Addr = Register::Address<0x4003202a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram15{
        using Addr = Register::Address<0x4003202b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram16{
        using Addr = Register::Address<0x4003202c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram17{
        using Addr = Register::Address<0x4003202d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram18{
        using Addr = Register::Address<0x4003202e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram19{
        using Addr = Register::Address<0x4003202f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram20{
        using Addr = Register::Address<0x40032030,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram21{
        using Addr = Register::Address<0x40032031,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram22{
        using Addr = Register::Address<0x40032032,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram23{
        using Addr = Register::Address<0x40032033,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram24{
        using Addr = Register::Address<0x40032034,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram25{
        using Addr = Register::Address<0x40032035,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram26{
        using Addr = Register::Address<0x40032036,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram27{
        using Addr = Register::Address<0x40032037,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram28{
        using Addr = Register::Address<0x40032038,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram29{
        using Addr = Register::Address<0x40032039,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram30{
        using Addr = Register::Address<0x4003203a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram31{
        using Addr = Register::Address<0x4003203b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram32{
        using Addr = Register::Address<0x4003203c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram33{
        using Addr = Register::Address<0x4003203d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram34{
        using Addr = Register::Address<0x4003203e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram35{
        using Addr = Register::Address<0x4003203f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram36{
        using Addr = Register::Address<0x40032040,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram37{
        using Addr = Register::Address<0x40032041,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram38{
        using Addr = Register::Address<0x40032042,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
    namespace Nonelcdram39{
        using Addr = Register::Address<0x40032043,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCDRAM; 
    }
}
