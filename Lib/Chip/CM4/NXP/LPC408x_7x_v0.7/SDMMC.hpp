#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepwr{
        using Addr = Register::Address<0x400c0000,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OPENDRAIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ROD; 
    }
    namespace Noneclock{
        using Addr = Register::Address<0x400c0004,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PWRSAVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WIDEBUS; 
    }
    namespace Noneargument{
        using Addr = Register::Address<0x400c0008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CmdArg; 
    }
    namespace Nonecommand{
        using Addr = Register::Address<0x400c000c,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CmdIndex; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> Response; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LongRsp; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> Interrupt; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> Pending; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> Enable; 
    }
    namespace Nonerespcmd{
        using Addr = Register::Address<0x400c0010,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> RESPCMD; 
    }
    namespace Noneresponse0{
        using Addr = Register::Address<0x400c0014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATUS; 
    }
    namespace Noneresponse1{
        using Addr = Register::Address<0x400c0018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATUS; 
    }
    namespace Noneresponse2{
        using Addr = Register::Address<0x400c001c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATUS; 
    }
    namespace Noneresponse3{
        using Addr = Register::Address<0x400c0020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STATUS; 
    }
    namespace Nonedatatimer{
        using Addr = Register::Address<0x400c0024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATATIME; 
    }
    namespace Nonedatalength{
        using Addr = Register::Address<0x400c0028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATALENGTH; 
    }
    namespace Nonedatactrl{
        using Addr = Register::Address<0x400c002c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIRECTION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DMAENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> BLOCKSIZE; 
    }
    namespace Nonedatacnt{
        using Addr = Register::Address<0x400c0030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATACOUNT; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x400c0034,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDCRCFAIL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATACRCFAIL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMDTIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DATATIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXUNDERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXOVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CMDRESPEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CMDSENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DATAEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STARTBITERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DATABLOCKEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CMDACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TXACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RXACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TXFIFOHALFEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXFIFOHALFFULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXFIFOFULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXFIFOFULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TXFIFOEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXFIFOEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TXDATAAVLBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RXDATAAVLBL; 
    }
    namespace Noneclear{
        using Addr = Register::Address<0x400c0038,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDCRCFAILCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATACRCFAILCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMDTIMEOUTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DATATIMEOUTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXUNDERRUNCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXOVERRUNCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CMDRESPENDCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CMDSENTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DATAENDCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STARTBITERRCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DATABLOCKENDCLR; 
    }
    namespace Nonemask0{
        using Addr = Register::Address<0x400c003c,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MASK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MASK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MASK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MASK3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MASK4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MASK5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MASK6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MASK7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MASK8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MASK9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MASK10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MASK11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MASK12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MASK13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MASK14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MASK15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MASK16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MASK17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MASK18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MASK19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MASK20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> MASK21; 
    }
    namespace Nonefifocnt{
        using Addr = Register::Address<0x400c0048,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> DATACOUNT; 
    }
    namespace Nonefifo0{
        using Addr = Register::Address<0x400c0080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonefifo1{
        using Addr = Register::Address<0x400c0084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonefifo2{
        using Addr = Register::Address<0x400c0088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonefifo3{
        using Addr = Register::Address<0x400c008c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonefifo4{
        using Addr = Register::Address<0x400c0090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonefifo5{
        using Addr = Register::Address<0x400c0094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonefifo6{
        using Addr = Register::Address<0x400c0098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonefifo7{
        using Addr = Register::Address<0x400c009c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonefifo8{
        using Addr = Register::Address<0x400c00a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonefifo9{
        using Addr = Register::Address<0x400c00a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonefifo10{
        using Addr = Register::Address<0x400c00a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonefifo11{
        using Addr = Register::Address<0x400c00ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonefifo12{
        using Addr = Register::Address<0x400c00b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonefifo13{
        using Addr = Register::Address<0x400c00b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonefifo14{
        using Addr = Register::Address<0x400c00b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonefifo15{
        using Addr = Register::Address<0x400c00bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
}
