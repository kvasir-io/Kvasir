#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneintstat{
        using Addr = Register::Address<0x20080000,0xffffff00>;
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
        using Addr = Register::Address<0x20080004,0xffffff00>;
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
        using Addr = Register::Address<0x20080008,0xffffff00>;
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
        using Addr = Register::Address<0x2008000c,0xffffff00>;
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
        using Addr = Register::Address<0x20080010,0xffffff00>;
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
        using Addr = Register::Address<0x20080014,0xffffff00>;
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
        using Addr = Register::Address<0x20080018,0xffffff00>;
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
        using Addr = Register::Address<0x2008001c,0xffffff00>;
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
        using Addr = Register::Address<0x20080020,0xffff0000>;
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
        using Addr = Register::Address<0x20080024,0xffff0000>;
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
        using Addr = Register::Address<0x20080028,0xffff0000>;
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
        using Addr = Register::Address<0x2008002c,0xffff0000>;
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
        using Addr = Register::Address<0x20080030,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> M; 
    }
    namespace Nonesync{
        using Addr = Register::Address<0x20080034,0xffff0000>;
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
    namespace Nonesrcaddr0{
        using Addr = Register::Address<0x20080100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRCADDR; 
    }
    namespace Nonesrcaddr1{
        using Addr = Register::Address<0x20080120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRCADDR; 
    }
    namespace Nonesrcaddr2{
        using Addr = Register::Address<0x20080140,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRCADDR; 
    }
    namespace Nonesrcaddr3{
        using Addr = Register::Address<0x20080160,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRCADDR; 
    }
    namespace Nonesrcaddr4{
        using Addr = Register::Address<0x20080180,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRCADDR; 
    }
    namespace Nonesrcaddr5{
        using Addr = Register::Address<0x200801a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRCADDR; 
    }
    namespace Nonesrcaddr6{
        using Addr = Register::Address<0x200801c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRCADDR; 
    }
    namespace Nonesrcaddr7{
        using Addr = Register::Address<0x200801e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRCADDR; 
    }
    namespace Nonedestaddr0{
        using Addr = Register::Address<0x20080104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DESTADDR; 
    }
    namespace Nonedestaddr1{
        using Addr = Register::Address<0x20080124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DESTADDR; 
    }
    namespace Nonedestaddr2{
        using Addr = Register::Address<0x20080144,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DESTADDR; 
    }
    namespace Nonedestaddr3{
        using Addr = Register::Address<0x20080164,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DESTADDR; 
    }
    namespace Nonedestaddr4{
        using Addr = Register::Address<0x20080184,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DESTADDR; 
    }
    namespace Nonedestaddr5{
        using Addr = Register::Address<0x200801a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DESTADDR; 
    }
    namespace Nonedestaddr6{
        using Addr = Register::Address<0x200801c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DESTADDR; 
    }
    namespace Nonedestaddr7{
        using Addr = Register::Address<0x200801e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DESTADDR; 
    }
    namespace Nonelli0{
        using Addr = Register::Address<0x20080108,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> LLI; 
    }
    namespace Nonelli1{
        using Addr = Register::Address<0x20080128,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> LLI; 
    }
    namespace Nonelli2{
        using Addr = Register::Address<0x20080148,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> LLI; 
    }
    namespace Nonelli3{
        using Addr = Register::Address<0x20080168,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> LLI; 
    }
    namespace Nonelli4{
        using Addr = Register::Address<0x20080188,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> LLI; 
    }
    namespace Nonelli5{
        using Addr = Register::Address<0x200801a8,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> LLI; 
    }
    namespace Nonelli6{
        using Addr = Register::Address<0x200801c8,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> LLI; 
    }
    namespace Nonelli7{
        using Addr = Register::Address<0x200801e8,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> LLI; 
    }
    namespace Nonecontrol0{
        using Addr = Register::Address<0x2008010c,0x03000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TRANSFERSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> DBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PROT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PROT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I; 
    }
    namespace Nonecontrol1{
        using Addr = Register::Address<0x2008012c,0x03000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TRANSFERSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> DBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PROT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PROT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I; 
    }
    namespace Nonecontrol2{
        using Addr = Register::Address<0x2008014c,0x03000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TRANSFERSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> DBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PROT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PROT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I; 
    }
    namespace Nonecontrol3{
        using Addr = Register::Address<0x2008016c,0x03000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TRANSFERSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> DBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PROT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PROT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I; 
    }
    namespace Nonecontrol4{
        using Addr = Register::Address<0x2008018c,0x03000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TRANSFERSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> DBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PROT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PROT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I; 
    }
    namespace Nonecontrol5{
        using Addr = Register::Address<0x200801ac,0x03000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TRANSFERSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> DBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PROT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PROT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I; 
    }
    namespace Nonecontrol6{
        using Addr = Register::Address<0x200801cc,0x03000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TRANSFERSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> DBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PROT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PROT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I; 
    }
    namespace Nonecontrol7{
        using Addr = Register::Address<0x200801ec,0x03000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TRANSFERSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> DBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PROT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PROT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I; 
    }
    namespace Noneconfig0{
        using Addr = Register::Address<0x20080110,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1)> SRCPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> DESTPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> TRANSFERTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ITC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> H; 
    }
    namespace Noneconfig1{
        using Addr = Register::Address<0x20080130,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1)> SRCPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> DESTPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> TRANSFERTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ITC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> H; 
    }
    namespace Noneconfig2{
        using Addr = Register::Address<0x20080150,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1)> SRCPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> DESTPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> TRANSFERTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ITC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> H; 
    }
    namespace Noneconfig3{
        using Addr = Register::Address<0x20080170,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1)> SRCPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> DESTPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> TRANSFERTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ITC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> H; 
    }
    namespace Noneconfig4{
        using Addr = Register::Address<0x20080190,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1)> SRCPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> DESTPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> TRANSFERTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ITC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> H; 
    }
    namespace Noneconfig5{
        using Addr = Register::Address<0x200801b0,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1)> SRCPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> DESTPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> TRANSFERTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ITC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> H; 
    }
    namespace Noneconfig6{
        using Addr = Register::Address<0x200801d0,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1)> SRCPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> DESTPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> TRANSFERTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ITC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> H; 
    }
    namespace Noneconfig7{
        using Addr = Register::Address<0x200801f0,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1)> SRCPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> DESTPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> TRANSFERTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ITC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> H; 
    }
}
