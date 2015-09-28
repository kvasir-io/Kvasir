#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneintstatus{
        using Addr = Register::Address<0x40000000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTSTATUS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTSTATUS1; 
    }
    namespace Noneinttcstatus{
        using Addr = Register::Address<0x40000004,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTTCSTATUS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTTCSTATUS1; 
    }
    namespace Noneinttcclear{
        using Addr = Register::Address<0x40000008,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTTCCLEAR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTTCCLEAR1; 
    }
    namespace Noneinterrorstatus{
        using Addr = Register::Address<0x4000000c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTERRSTATUS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTERRSTATUS1; 
    }
    namespace Noneinterrclr{
        using Addr = Register::Address<0x40000010,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTERRCLR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTERRCLR1; 
    }
    namespace Nonerawinttcstatus{
        using Addr = Register::Address<0x40000014,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RAWINTTCS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RAWINTTCS1; 
    }
    namespace Nonerawinterrorstatus{
        using Addr = Register::Address<0x40000018,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RAWINTERRS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RAWINTERRS1; 
    }
    namespace Noneenbldchns{
        using Addr = Register::Address<0x4000001c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLEDCH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLEDCH1; 
    }
    namespace Nonesoftbreq{
        using Addr = Register::Address<0x40000020,0xffff0000>;
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
        using Addr = Register::Address<0x40000024,0xffff03ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SOFTSREQ10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SOFTSREQ11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SOFTSREQ12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SOFTSREQ13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SOFTSREQ14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SOFTSREQ15; 
    }
    namespace Noneconfiguration{
        using Addr = Register::Address<0x40000030,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> M; 
    }
    namespace Nonec0srcaddr{
        using Addr = Register::Address<0x40000100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRCADDR; 
    }
    namespace Nonec0destaddr{
        using Addr = Register::Address<0x40000104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DESTADDR; 
    }
    namespace Nonec0lli{
        using Addr = Register::Address<0x40000108,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> LLI; 
    }
    namespace Nonec0control{
        using Addr = Register::Address<0x4000010c,0x73000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TRANSFERSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> DBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I; 
    }
    namespace Nonec0configuration{
        using Addr = Register::Address<0x40000110,0xfff80420>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,1)> SRCPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> DESTPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> FLOWCNTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ITC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> HALT; 
    }
    namespace Nonec1srcaddr{
        using Addr = Register::Address<0x40000120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRCADDR; 
    }
    namespace Nonec1destaddr{
        using Addr = Register::Address<0x40000124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DESTADDR; 
    }
    namespace Nonec1lli{
        using Addr = Register::Address<0x40000128,0x00000001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,1)> LLI; 
    }
    namespace Nonec1control{
        using Addr = Register::Address<0x4000012c,0x73000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TRANSFERSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> DBSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I; 
    }
    namespace Nonec1configuration{
        using Addr = Register::Address<0x40000130,0xfff80420>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,1)> SRCPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> DESTPERIPHERAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> FLOWCNTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ITC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> HALT; 
    }
}
