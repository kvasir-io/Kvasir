#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneintstat{
        using Addr = Register::Address<0x40002000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTSTAT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTSTAT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTSTAT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTSTAT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INTSTAT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INTSTAT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INTSTAT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> INTSTAT7; 
    }
    namespace Noneinttcstat{
        using Addr = Register::Address<0x40002004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTTCSTAT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTTCSTAT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTTCSTAT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTTCSTAT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INTTCSTAT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INTTCSTAT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INTTCSTAT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> INTTCSTAT7; 
    }
    namespace Noneinttcclear{
        using Addr = Register::Address<0x40002008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTTCCLEAR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTTCCLEAR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTTCCLEAR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTTCCLEAR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INTTCCLEAR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INTTCCLEAR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INTTCCLEAR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> INTTCCLEAR7; 
    }
    namespace Noneinterrstat{
        using Addr = Register::Address<0x4000200c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTERRSTAT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTERRSTAT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTERRSTAT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTERRSTAT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INTERRSTAT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INTERRSTAT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INTERRSTAT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> INTERRSTAT7; 
    }
    namespace Noneinterrclr{
        using Addr = Register::Address<0x40002010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTERRCLR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTERRCLR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTERRCLR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTERRCLR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INTERRCLR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INTERRCLR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INTERRCLR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> INTERRCLR7; 
    }
    namespace Nonerawinttcstat{
        using Addr = Register::Address<0x40002014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RAWINTTCSTAT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RAWINTTCSTAT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RAWINTTCSTAT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RAWINTTCSTAT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RAWINTTCSTAT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RAWINTTCSTAT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RAWINTTCSTAT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RAWINTTCSTAT7; 
    }
    namespace Nonerawinterrstat{
        using Addr = Register::Address<0x40002018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RAWINTERRSTAT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RAWINTERRSTAT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RAWINTERRSTAT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RAWINTERRSTAT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RAWINTERRSTAT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RAWINTERRSTAT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RAWINTERRSTAT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RAWINTERRSTAT7; 
    }
    namespace Noneenbldchns{
        using Addr = Register::Address<0x4000201c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLEDCHANNELS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLEDCHANNELS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENABLEDCHANNELS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENABLEDCHANNELS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENABLEDCHANNELS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENABLEDCHANNELS5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENABLEDCHANNELS6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENABLEDCHANNELS7; 
    }
    namespace Nonesoftbreq{
        using Addr = Register::Address<0x40002020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOFTBREQ0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SOFTBREQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SOFTBREQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SOFTBREQ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SOFTBREQ4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SOFTBREQ5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SOFTBREQ6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SOFTBREQ7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SOFTBREQ8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SOFTBREQ9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SOFTBREQ10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SOFTBREQ11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SOFTBREQ12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SOFTBREQ13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SOFTBREQ14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SOFTBREQ15; 
    }
    namespace Nonesoftsreq{
        using Addr = Register::Address<0x40002024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOFTSREQ0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SOFTSREQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SOFTSREQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SOFTSREQ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SOFTSREQ4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SOFTSREQ5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SOFTSREQ6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SOFTSREQ7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SOFTSREQ8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SOFTSREQ9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SOFTSREQ10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SOFTSREQ11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SOFTSREQ12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SOFTSREQ13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SOFTSREQ14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SOFTSREQ15; 
    }
    namespace Nonesoftlbreq{
        using Addr = Register::Address<0x40002028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOFTLBREQ0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SOFTLBREQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SOFTLBREQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SOFTLBREQ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SOFTLBREQ4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SOFTLBREQ5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SOFTLBREQ6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SOFTLBREQ7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SOFTLBREQ8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SOFTLBREQ9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SOFTLBREQ10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SOFTLBREQ11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SOFTLBREQ12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SOFTLBREQ13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SOFTLBREQ14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SOFTLBREQ15; 
    }
    namespace Nonesoftlsreq{
        using Addr = Register::Address<0x4000202c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOFTLSREQ0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SOFTLSREQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SOFTLSREQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SOFTLSREQ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SOFTLSREQ4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SOFTLSREQ5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SOFTLSREQ6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SOFTLSREQ7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SOFTLSREQ8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SOFTLSREQ9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SOFTLSREQ10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SOFTLSREQ11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SOFTLSREQ12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SOFTLSREQ13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SOFTLSREQ14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SOFTLSREQ15; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x40002030,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> M0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> M1; 
    }
    namespace Nonesync{
        using Addr = Register::Address<0x40002034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMACSYNC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMACSYNC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMACSYNC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DMACSYNC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DMACSYNC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DMACSYNC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DMACSYNC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DMACSYNC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMACSYNC8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DMACSYNC9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DMACSYNC10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DMACSYNC11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DMACSYNC12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DMACSYNC13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DMACSYNC14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DMACSYNC15; 
    }
    namespace Nonec0srcaddr{
        using Addr = Register::Address<0x40002100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRCADDR; 
    }
    namespace Nonec1srcaddr{
        using Addr = Register::Address<0x40002120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRCADDR; 
    }
    namespace Nonec2srcaddr{
        using Addr = Register::Address<0x40002140,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRCADDR; 
    }
    namespace Nonec3srcaddr{
        using Addr = Register::Address<0x40002160,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRCADDR; 
    }
    namespace Nonec4srcaddr{
        using Addr = Register::Address<0x40002180,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRCADDR; 
    }
    namespace Nonec5srcaddr{
        using Addr = Register::Address<0x400021a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRCADDR; 
    }
    namespace Nonec6srcaddr{
        using Addr = Register::Address<0x400021c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRCADDR; 
    }
    namespace Nonec7srcaddr{
        using Addr = Register::Address<0x400021e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRCADDR; 
    }
    namespace Nonec0destaddr{
        using Addr = Register::Address<0x40002104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DESTADDR; 
    }
    namespace Nonec1destaddr{
        using Addr = Register::Address<0x40002124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DESTADDR; 
    }
    namespace Nonec2destaddr{
        using Addr = Register::Address<0x40002144,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DESTADDR; 
    }
    namespace Nonec3destaddr{
        using Addr = Register::Address<0x40002164,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DESTADDR; 
    }
    namespace Nonec4destaddr{
        using Addr = Register::Address<0x40002184,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DESTADDR; 
    }
    namespace Nonec5destaddr{
        using Addr = Register::Address<0x400021a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DESTADDR; 
    }
    namespace Nonec6destaddr{
        using Addr = Register::Address<0x400021c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DESTADDR; 
    }
    namespace Nonec7destaddr{
        using Addr = Register::Address<0x400021e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DESTADDR; 
    }
    namespace Nonec0lli{
        using Addr = Register::Address<0x40002108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> LLI; 
    }
    namespace Nonec1lli{
        using Addr = Register::Address<0x40002128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> LLI; 
    }
    namespace Nonec2lli{
        using Addr = Register::Address<0x40002148,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> LLI; 
    }
    namespace Nonec3lli{
        using Addr = Register::Address<0x40002168,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> LLI; 
    }
    namespace Nonec4lli{
        using Addr = Register::Address<0x40002188,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> LLI; 
    }
    namespace Nonec5lli{
        using Addr = Register::Address<0x400021a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> LLI; 
    }
    namespace Nonec6lli{
        using Addr = Register::Address<0x400021c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> LLI; 
    }
    namespace Nonec7lli{
        using Addr = Register::Address<0x400021e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> LLI; 
    }
    namespace Nonec0control{
        using Addr = Register::Address<0x4000210c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TRANSFERSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> DBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PROT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PROT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I; 
    }
    namespace Nonec1control{
        using Addr = Register::Address<0x4000212c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TRANSFERSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> DBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PROT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PROT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I; 
    }
    namespace Nonec2control{
        using Addr = Register::Address<0x4000214c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TRANSFERSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> DBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PROT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PROT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I; 
    }
    namespace Nonec3control{
        using Addr = Register::Address<0x4000216c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TRANSFERSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> DBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PROT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PROT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I; 
    }
    namespace Nonec4control{
        using Addr = Register::Address<0x4000218c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TRANSFERSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> DBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PROT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PROT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I; 
    }
    namespace Nonec5control{
        using Addr = Register::Address<0x400021ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TRANSFERSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> DBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PROT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PROT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I; 
    }
    namespace Nonec6control{
        using Addr = Register::Address<0x400021cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TRANSFERSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> DBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PROT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PROT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I; 
    }
    namespace Nonec7control{
        using Addr = Register::Address<0x400021ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TRANSFERSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> DBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PROT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PROT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I; 
    }
    namespace Nonec0config{
        using Addr = Register::Address<0x40002110,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1)> SRCPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> DESTPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> FLOWCNTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ITC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> H; 
    }
    namespace Nonec1config{
        using Addr = Register::Address<0x40002130,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1)> SRCPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> DESTPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> FLOWCNTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ITC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> H; 
    }
    namespace Nonec2config{
        using Addr = Register::Address<0x40002150,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1)> SRCPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> DESTPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> FLOWCNTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ITC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> H; 
    }
    namespace Nonec3config{
        using Addr = Register::Address<0x40002170,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1)> SRCPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> DESTPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> FLOWCNTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ITC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> H; 
    }
    namespace Nonec4config{
        using Addr = Register::Address<0x40002190,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1)> SRCPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> DESTPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> FLOWCNTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ITC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> H; 
    }
    namespace Nonec5config{
        using Addr = Register::Address<0x400021b0,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1)> SRCPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> DESTPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> FLOWCNTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ITC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> H; 
    }
    namespace Nonec6config{
        using Addr = Register::Address<0x400021d0,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1)> SRCPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> DESTPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> FLOWCNTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ITC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> H; 
    }
    namespace Nonec7config{
        using Addr = Register::Address<0x400021f0,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1)> SRCPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> DESTPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> FLOWCNTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ITC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> H; 
    }
}
