#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_txen{
        using Addr = Register::Address<0x40001000,0xffffffff>;
    }
    namespace Nonetasks_rxen{
        using Addr = Register::Address<0x40001004,0xffffffff>;
    }
    namespace Nonetasks_start{
        using Addr = Register::Address<0x40001008,0xffffffff>;
    }
    namespace Nonetasks_stop{
        using Addr = Register::Address<0x4000100c,0xffffffff>;
    }
    namespace Nonetasks_disable{
        using Addr = Register::Address<0x40001010,0xffffffff>;
    }
    namespace Nonetasks_rssistart{
        using Addr = Register::Address<0x40001014,0xffffffff>;
    }
    namespace Nonetasks_rssistop{
        using Addr = Register::Address<0x40001018,0xffffffff>;
    }
    namespace Nonetasks_bcstart{
        using Addr = Register::Address<0x4000101c,0xffffffff>;
    }
    namespace Nonetasks_bcstop{
        using Addr = Register::Address<0x40001020,0xffffffff>;
    }
    namespace Noneevents_ready{
        using Addr = Register::Address<0x40001100,0xffffffff>;
    }
    namespace Noneevents_address{
        using Addr = Register::Address<0x40001104,0xffffffff>;
    }
    namespace Noneevents_payload{
        using Addr = Register::Address<0x40001108,0xffffffff>;
    }
    namespace Noneevents_end{
        using Addr = Register::Address<0x4000110c,0xffffffff>;
    }
    namespace Noneevents_disabled{
        using Addr = Register::Address<0x40001110,0xffffffff>;
    }
    namespace Noneevents_devmatch{
        using Addr = Register::Address<0x40001114,0xffffffff>;
    }
    namespace Noneevents_devmiss{
        using Addr = Register::Address<0x40001118,0xffffffff>;
    }
    namespace Noneevents_rssiend{
        using Addr = Register::Address<0x4000111c,0xffffffff>;
    }
    namespace Noneevents_bcmatch{
        using Addr = Register::Address<0x40001128,0xffffffff>;
    }
    namespace Noneshorts{
        using Addr = Register::Address<0x40001200,0xfffffe80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READY_START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> END_DISABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISABLED_TXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DISABLED_RXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADDRESS_RSSISTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADDRESS_BCSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DISABLED_RSSISTOP; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40001304,0xfffffb00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADDRESS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PAYLOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> END; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DISABLED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DEVMATCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DEVMISS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RSSIEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BCMATCH; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40001308,0xfffffb00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADDRESS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PAYLOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> END; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DISABLED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DEVMATCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DEVMISS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RSSIEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BCMATCH; 
    }
    namespace Nonecrcstatus{
        using Addr = Register::Address<0x40001400,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CRCSTATUS; 
    }
    namespace Nonerxmatch{
        using Addr = Register::Address<0x40001408,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> RXMATCH; 
    }
    namespace Nonerxcrc{
        using Addr = Register::Address<0x4000140c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> RXCRC; 
    }
    namespace Nonedai{
        using Addr = Register::Address<0x40001410,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DAI; 
    }
    namespace Nonepacketptr{
        using Addr = Register::Address<0x40001504,0xffffffff>;
    }
    namespace Nonefrequency{
        using Addr = Register::Address<0x40001508,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> FREQUENCY; 
    }
    namespace Nonetxpower{
        using Addr = Register::Address<0x4000150c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXPOWER; 
    }
    namespace Nonemode{
        using Addr = Register::Address<0x40001510,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE; 
    }
    namespace Nonepcnf0{
        using Addr = Register::Address<0x40001514,0xfff0fef0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> LFLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> S0LEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> S1LEN; 
    }
    namespace Nonepcnf1{
        using Addr = Register::Address<0x40001518,0xfcf80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MAXLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> STATLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> BALEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ENDIAN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WHITEEN; 
    }
    namespace Nonebase0{
        using Addr = Register::Address<0x4000151c,0xffffffff>;
    }
    namespace Nonebase1{
        using Addr = Register::Address<0x40001520,0xffffffff>;
    }
    namespace Noneprefix0{
        using Addr = Register::Address<0x40001524,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> AP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> AP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> AP3; 
    }
    namespace Noneprefix1{
        using Addr = Register::Address<0x40001528,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> AP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> AP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> AP7; 
    }
    namespace Nonetxaddress{
        using Addr = Register::Address<0x4000152c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TXADDRESS; 
    }
    namespace Nonerxaddresses{
        using Addr = Register::Address<0x40001530,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADDR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADDR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADDR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADDR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADDR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ADDR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADDR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADDR7; 
    }
    namespace Nonecrccnf{
        using Addr = Register::Address<0x40001534,0xfffffefc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> LEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SKIPADDR; 
    }
    namespace Nonecrcpoly{
        using Addr = Register::Address<0x40001538,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CRCPOLY; 
    }
    namespace Nonecrcinit{
        using Addr = Register::Address<0x4000153c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CRCINIT; 
    }
    namespace Nonetest{
        using Addr = Register::Address<0x40001540,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CONSTCARRIER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PLLLOCK; 
    }
    namespace Nonetifs{
        using Addr = Register::Address<0x40001544,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TIFS; 
    }
    namespace Nonerssisample{
        using Addr = Register::Address<0x40001548,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> RSSISAMPLE; 
    }
    namespace Nonestate{
        using Addr = Register::Address<0x40001550,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> STATE; 
    }
    namespace Nonedatawhiteiv{
        using Addr = Register::Address<0x40001554,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> DATAWHITEIV; 
    }
    namespace Nonebcc{
        using Addr = Register::Address<0x40001560,0xffffffff>;
    }
    namespace Nonedab0{
        using Addr = Register::Address<0x40001600,0xffffffff>;
    }
    namespace Nonedab1{
        using Addr = Register::Address<0x40001604,0xffffffff>;
    }
    namespace Nonedab2{
        using Addr = Register::Address<0x40001608,0xffffffff>;
    }
    namespace Nonedab3{
        using Addr = Register::Address<0x4000160c,0xffffffff>;
    }
    namespace Nonedab4{
        using Addr = Register::Address<0x40001610,0xffffffff>;
    }
    namespace Nonedab5{
        using Addr = Register::Address<0x40001614,0xffffffff>;
    }
    namespace Nonedab6{
        using Addr = Register::Address<0x40001618,0xffffffff>;
    }
    namespace Nonedab7{
        using Addr = Register::Address<0x4000161c,0xffffffff>;
    }
    namespace Nonedap0{
        using Addr = Register::Address<0x40001620,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DAP; 
    }
    namespace Nonedap1{
        using Addr = Register::Address<0x40001624,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DAP; 
    }
    namespace Nonedap2{
        using Addr = Register::Address<0x40001628,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DAP; 
    }
    namespace Nonedap3{
        using Addr = Register::Address<0x4000162c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DAP; 
    }
    namespace Nonedap4{
        using Addr = Register::Address<0x40001630,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DAP; 
    }
    namespace Nonedap5{
        using Addr = Register::Address<0x40001634,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DAP; 
    }
    namespace Nonedap6{
        using Addr = Register::Address<0x40001638,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DAP; 
    }
    namespace Nonedap7{
        using Addr = Register::Address<0x4000163c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DAP; 
    }
    namespace Nonedacnf{
        using Addr = Register::Address<0x40001640,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXADD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXADD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXADD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXADD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TXADD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TXADD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TXADD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TXADD7; 
    }
    namespace Noneoverride0{
        using Addr = Register::Address<0x40001724,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OVERRIDE0; 
    }
    namespace Noneoverride1{
        using Addr = Register::Address<0x40001728,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OVERRIDE1; 
    }
    namespace Noneoverride2{
        using Addr = Register::Address<0x4000172c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OVERRIDE2; 
    }
    namespace Noneoverride3{
        using Addr = Register::Address<0x40001730,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OVERRIDE3; 
    }
    namespace Noneoverride4{
        using Addr = Register::Address<0x40001734,0x70000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> OVERRIDE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ENABLE; 
    }
    namespace Nonepower{
        using Addr = Register::Address<0x40001ffc,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POWER; 
    }
}
