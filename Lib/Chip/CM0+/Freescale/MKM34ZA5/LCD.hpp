#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace LCD_gcr{
        using Addr = Register::Address<0x40043000,0x704d0c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DUTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> LCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SOURCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LCDSTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LCDDOZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> ALTDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FDCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LCDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> VSUPPLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> LADJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CPSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> RVTRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RVEN; 
    }
    namespace LCD_ar{
        using Addr = Register::Address<0x40043004,0xffff7f10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BRATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BLANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ALT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BLINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LCDIF; 
    }
    namespace LCD_fdcr{
        using Addr = Register::Address<0x40043008,0xffff8100>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> FDPINID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FDBPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> FDSWW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> FDPRS; 
    }
    namespace LCD_fdsr{
        using Addr = Register::Address<0x4004300c,0xffff7f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FDCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FDCF; 
    }
    namespace LCD_penl{
        using Addr = Register::Address<0x40043010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PEN; 
    }
    namespace LCD_penh{
        using Addr = Register::Address<0x40043014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PEN; 
    }
    namespace LCD_bpenl{
        using Addr = Register::Address<0x40043018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BPEN; 
    }
    namespace LCD_bpenh{
        using Addr = Register::Address<0x4004301c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BPEN; 
    }
    namespace LCD_wf3to0{
        using Addr = Register::Address<0x40043020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> WF3; 
    }
    namespace LCD_wf0{
        using Addr = Register::Address<0x40043020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD0; 
    }
    namespace LCD_wf1{
        using Addr = Register::Address<0x40043021,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD1; 
    }
    namespace LCD_wf2{
        using Addr = Register::Address<0x40043022,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD2; 
    }
    namespace LCD_wf3{
        using Addr = Register::Address<0x40043023,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD3; 
    }
    namespace LCD_wf4{
        using Addr = Register::Address<0x40043024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD4; 
    }
    namespace LCD_wf7to4{
        using Addr = Register::Address<0x40043024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> WF7; 
    }
    namespace LCD_wf5{
        using Addr = Register::Address<0x40043025,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD5; 
    }
    namespace LCD_wf6{
        using Addr = Register::Address<0x40043026,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD6; 
    }
    namespace LCD_wf7{
        using Addr = Register::Address<0x40043027,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD7; 
    }
    namespace LCD_wf11to8{
        using Addr = Register::Address<0x40043028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WF8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WF9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WF10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> WF11; 
    }
    namespace LCD_wf8{
        using Addr = Register::Address<0x40043028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD8; 
    }
    namespace LCD_wf9{
        using Addr = Register::Address<0x40043029,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD9; 
    }
    namespace LCD_wf10{
        using Addr = Register::Address<0x4004302a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD10; 
    }
    namespace LCD_wf11{
        using Addr = Register::Address<0x4004302b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD11; 
    }
    namespace LCD_wf15to12{
        using Addr = Register::Address<0x4004302c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WF12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WF13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WF14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> WF15; 
    }
    namespace LCD_wf12{
        using Addr = Register::Address<0x4004302c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD12; 
    }
    namespace LCD_wf13{
        using Addr = Register::Address<0x4004302d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD13; 
    }
    namespace LCD_wf14{
        using Addr = Register::Address<0x4004302e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD14; 
    }
    namespace LCD_wf15{
        using Addr = Register::Address<0x4004302f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD15; 
    }
    namespace LCD_wf16{
        using Addr = Register::Address<0x40043030,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD16; 
    }
    namespace LCD_wf19to16{
        using Addr = Register::Address<0x40043030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WF16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WF17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WF18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> WF19; 
    }
    namespace LCD_wf17{
        using Addr = Register::Address<0x40043031,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD17; 
    }
    namespace LCD_wf18{
        using Addr = Register::Address<0x40043032,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD18; 
    }
    namespace LCD_wf19{
        using Addr = Register::Address<0x40043033,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD19; 
    }
    namespace LCD_wf20{
        using Addr = Register::Address<0x40043034,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD20; 
    }
    namespace LCD_wf23to20{
        using Addr = Register::Address<0x40043034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WF20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WF21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WF22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> WF23; 
    }
    namespace LCD_wf21{
        using Addr = Register::Address<0x40043035,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD21; 
    }
    namespace LCD_wf22{
        using Addr = Register::Address<0x40043036,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD22; 
    }
    namespace LCD_wf23{
        using Addr = Register::Address<0x40043037,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD23; 
    }
    namespace LCD_wf27to24{
        using Addr = Register::Address<0x40043038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WF24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WF25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WF26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> WF27; 
    }
    namespace LCD_wf24{
        using Addr = Register::Address<0x40043038,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD24; 
    }
    namespace LCD_wf25{
        using Addr = Register::Address<0x40043039,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD25; 
    }
    namespace LCD_wf26{
        using Addr = Register::Address<0x4004303a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD26; 
    }
    namespace LCD_wf27{
        using Addr = Register::Address<0x4004303b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD27; 
    }
    namespace LCD_wf31to28{
        using Addr = Register::Address<0x4004303c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WF28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WF29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WF30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> WF31; 
    }
    namespace LCD_wf28{
        using Addr = Register::Address<0x4004303c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD28; 
    }
    namespace LCD_wf29{
        using Addr = Register::Address<0x4004303d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD29; 
    }
    namespace LCD_wf30{
        using Addr = Register::Address<0x4004303e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD30; 
    }
    namespace LCD_wf31{
        using Addr = Register::Address<0x4004303f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD31; 
    }
    namespace LCD_wf32{
        using Addr = Register::Address<0x40043040,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD32; 
    }
    namespace LCD_wf35to32{
        using Addr = Register::Address<0x40043040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WF32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WF33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WF34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> WF35; 
    }
    namespace LCD_wf33{
        using Addr = Register::Address<0x40043041,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD33; 
    }
    namespace LCD_wf34{
        using Addr = Register::Address<0x40043042,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD34; 
    }
    namespace LCD_wf35{
        using Addr = Register::Address<0x40043043,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD35; 
    }
    namespace LCD_wf39to36{
        using Addr = Register::Address<0x40043044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WF36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WF37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WF38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> WF39; 
    }
    namespace LCD_wf36{
        using Addr = Register::Address<0x40043044,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD36; 
    }
    namespace LCD_wf37{
        using Addr = Register::Address<0x40043045,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD37; 
    }
    namespace LCD_wf38{
        using Addr = Register::Address<0x40043046,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD38; 
    }
    namespace LCD_wf39{
        using Addr = Register::Address<0x40043047,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD39; 
    }
    namespace LCD_wf43to40{
        using Addr = Register::Address<0x40043048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WF40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WF41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WF42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> WF43; 
    }
    namespace LCD_wf40{
        using Addr = Register::Address<0x40043048,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD40; 
    }
    namespace LCD_wf41{
        using Addr = Register::Address<0x40043049,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD41; 
    }
    namespace LCD_wf42{
        using Addr = Register::Address<0x4004304a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD42; 
    }
    namespace LCD_wf43{
        using Addr = Register::Address<0x4004304b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD43; 
    }
    namespace LCD_wf44{
        using Addr = Register::Address<0x4004304c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD44; 
    }
    namespace LCD_wf47to44{
        using Addr = Register::Address<0x4004304c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WF44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WF45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WF46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> WF47; 
    }
    namespace LCD_wf45{
        using Addr = Register::Address<0x4004304d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD45; 
    }
    namespace LCD_wf46{
        using Addr = Register::Address<0x4004304e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD46; 
    }
    namespace LCD_wf47{
        using Addr = Register::Address<0x4004304f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD47; 
    }
    namespace LCD_wf48{
        using Addr = Register::Address<0x40043050,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD48; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD48; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD48; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD48; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD48; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD48; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD48; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD48; 
    }
    namespace LCD_wf51to48{
        using Addr = Register::Address<0x40043050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WF48; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WF49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WF50; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> WF51; 
    }
    namespace LCD_wf49{
        using Addr = Register::Address<0x40043051,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD49; 
    }
    namespace LCD_wf50{
        using Addr = Register::Address<0x40043052,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD50; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD50; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD50; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD50; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD50; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD50; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD50; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD50; 
    }
    namespace LCD_wf51{
        using Addr = Register::Address<0x40043053,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD51; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD51; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD51; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD51; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD51; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD51; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD51; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD51; 
    }
    namespace LCD_wf55to52{
        using Addr = Register::Address<0x40043054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WF52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WF53; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WF54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> WF55; 
    }
    namespace LCD_wf52{
        using Addr = Register::Address<0x40043054,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD52; 
    }
    namespace LCD_wf53{
        using Addr = Register::Address<0x40043055,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD53; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD53; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD53; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD53; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD53; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD53; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD53; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD53; 
    }
    namespace LCD_wf54{
        using Addr = Register::Address<0x40043056,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD54; 
    }
    namespace LCD_wf55{
        using Addr = Register::Address<0x40043057,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD55; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD55; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD55; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD55; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD55; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD55; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD55; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD55; 
    }
    namespace LCD_wf56{
        using Addr = Register::Address<0x40043058,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD56; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD56; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD56; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD56; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD56; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD56; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD56; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD56; 
    }
    namespace LCD_wf59to56{
        using Addr = Register::Address<0x40043058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WF56; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WF57; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WF58; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> WF59; 
    }
    namespace LCD_wf57{
        using Addr = Register::Address<0x40043059,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD57; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD57; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD57; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD57; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD57; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD57; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD57; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD57; 
    }
    namespace LCD_wf58{
        using Addr = Register::Address<0x4004305a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD58; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD58; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD58; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD58; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD58; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD58; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD58; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD58; 
    }
    namespace LCD_wf59{
        using Addr = Register::Address<0x4004305b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD59; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD59; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD59; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD59; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD59; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD59; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD59; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD59; 
    }
    namespace LCD_wf60{
        using Addr = Register::Address<0x4004305c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD60; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD60; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD60; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD60; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD60; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD60; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD60; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD60; 
    }
    namespace LCD_wf63to60{
        using Addr = Register::Address<0x4004305c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WF60; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WF61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WF62; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> WF63; 
    }
    namespace LCD_wf61{
        using Addr = Register::Address<0x4004305d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD61; 
    }
    namespace LCD_wf62{
        using Addr = Register::Address<0x4004305e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD62; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD62; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD62; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD62; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD62; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD62; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD62; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD62; 
    }
    namespace LCD_wf63{
        using Addr = Register::Address<0x4004305f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BPALCD63; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPBLCD63; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BPCLCD63; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPDLCD63; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BPELCD63; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BPFLCD63; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BPGLCD63; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BPHLCD63; 
    }
}
