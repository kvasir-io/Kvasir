#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemac1{
        using Addr = Register::Address<0x50000000,0xffff30e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PARF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXFLOWCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXFLOWCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LOOPBACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RESETTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RESETMCSTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RESETRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RESETMCSRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SIMRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SOFTRESET; 
    }
    namespace Nonemac2{
        using Addr = Register::Address<0x50000004,0xffff8c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FULLDUPLEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DELAYEDCRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PADCRCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> VLANPADEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AUTODETPADEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PPENF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LPENF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NOBACKOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> BP_NOBACKOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXCESSDEFER; 
    }
    namespace Noneipgt{
        using Addr = Register::Address<0x50000008,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> BTOBINTEGAP; 
    }
    namespace Noneipgr{
        using Addr = Register::Address<0x5000000c,0xffff8080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> NBTOBINTEGAP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> NBTOBINTEGAP1; 
    }
    namespace Noneclrt{
        using Addr = Register::Address<0x50000010,0xffffc0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RETRANSMAX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> COLLWIN; 
    }
    namespace Nonemaxf{
        using Addr = Register::Address<0x50000014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MAXFLEN; 
    }
    namespace Nonesupp{
        using Addr = Register::Address<0x50000018,0xfffffeff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SPEED; 
    }
    namespace Nonetest{
        using Addr = Register::Address<0x5000001c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SCPQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TESTPAUSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TESTBP; 
    }
    namespace Nonemcfg{
        using Addr = Register::Address<0x50000020,0xffff7fc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SCANINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SUPPPREAMBLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> CLOCKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RESETMIIMGMT; 
    }
    namespace Nonemcmd{
        using Addr = Register::Address<0x50000024,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SCAN; 
    }
    namespace Nonemadr{
        using Addr = Register::Address<0x50000028,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> REGADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> PHYADDR; 
    }
    namespace Nonemwtd{
        using Addr = Register::Address<0x5000002c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WRITEDATA; 
    }
    namespace Nonemrdd{
        using Addr = Register::Address<0x50000030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> READDATA; 
    }
    namespace Nonemind{
        using Addr = Register::Address<0x50000034,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SCANNING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NOTVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MIILINKFAIL; 
    }
    namespace Nonesa0{
        using Addr = Register::Address<0x50000040,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SADDR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SADDR1; 
    }
    namespace Nonesa1{
        using Addr = Register::Address<0x50000044,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SADDR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SADDR3; 
    }
    namespace Nonesa2{
        using Addr = Register::Address<0x50000048,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SADDR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SADDR5; 
    }
    namespace Nonecommand{
        using Addr = Register::Address<0x50000100,0xfffff804>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REGRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PASSRUNTFRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PASSRXFILTER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXFLOWCONTROL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RMII; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FULLDUPLEX; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x50000104,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXSTATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXSTATUS; 
    }
    namespace Nonerxdescriptor{
        using Addr = Register::Address<0x50000108,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> RXDESCRIPTOR; 
    }
    namespace Nonerxstatus{
        using Addr = Register::Address<0x5000010c,0x00000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,3)> RXSTATUS; 
    }
    namespace Nonerxdescriptornumber{
        using Addr = Register::Address<0x50000110,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXDESCRIPTORN; 
    }
    namespace Nonerxproduceindex{
        using Addr = Register::Address<0x50000114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXPRODUCEIX; 
    }
    namespace Nonerxconsumeindex{
        using Addr = Register::Address<0x50000118,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCONSUMEIX; 
    }
    namespace Nonetxdescriptor{
        using Addr = Register::Address<0x5000011c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> TXD; 
    }
    namespace Nonetxstatus{
        using Addr = Register::Address<0x50000120,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> TXSTAT; 
    }
    namespace Nonetxdescriptornumber{
        using Addr = Register::Address<0x50000124,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXDN; 
    }
    namespace Nonetxproduceindex{
        using Addr = Register::Address<0x50000128,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXPI; 
    }
    namespace Nonetxconsumeindex{
        using Addr = Register::Address<0x5000012c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCI; 
    }
    namespace Nonetsv0{
        using Addr = Register::Address<0x50000158,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CRCERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MULTICAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BROADCAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PACKETDEFER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EXDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EXCOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LCOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GIANT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UNDERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12)> TOTALBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> CONTROLFRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PAUSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BACKPRESSURE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> VLAN; 
    }
    namespace Nonetsv1{
        using Addr = Register::Address<0x5000015c,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TBC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TCC; 
    }
    namespace Nonersv{
        using Addr = Register::Address<0x50000160,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RBC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXDVSEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CESEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CRCERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LCERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ROK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MULTICAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> BROADCAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DRIBBLENIBBLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CONTROLFRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PAUSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> VLAN; 
    }
    namespace Noneflowcontrolcounter{
        using Addr = Register::Address<0x50000170,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> PT; 
    }
    namespace Noneflowcontrolstatus{
        using Addr = Register::Address<0x50000174,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MCC; 
    }
    namespace Nonerxfilterctrl{
        using Addr = Register::Address<0x50000200,0xffffcfc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ABE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AUHE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AMHE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> APE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MPEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RFEW; 
    }
    namespace Nonerxfilterwolstatus{
        using Addr = Register::Address<0x50000204,0xfffffe40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AUW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ABW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AMW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AUHW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AMHW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> APW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RFW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MPW; 
    }
    namespace Nonerxfilterwolclear{
        using Addr = Register::Address<0x50000208,0xfffffe40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AUWCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ABWCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AMWCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AUHWCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AMHWCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> APWCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RFWCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MPWCLR; 
    }
    namespace Nonehashfilterl{
        using Addr = Register::Address<0x50000210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HFL; 
    }
    namespace Nonehashfilterh{
        using Addr = Register::Address<0x50000214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HFH; 
    }
    namespace Noneintstatus{
        using Addr = Register::Address<0x50000fe0,0xffffcf00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXOVERRUNINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXERRORINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXFINISHEDINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXDONEINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXUNDERRUNINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXERRORINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXFINISHEDINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXDONEINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SOFTINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAKEUPINT; 
    }
    namespace Noneintenable{
        using Addr = Register::Address<0x50000fe4,0xffffcf00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXOVERRUNINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXERRORINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXFINISHEDINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXDONEINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXUNDERRUNINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXERRORINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXFINISHEDINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXDONEINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SOFTINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAKEUPINTEN; 
    }
    namespace Noneintclear{
        using Addr = Register::Address<0x50000fe8,0xffffcf00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXOVERRUNINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXERRORINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXFINISHEDINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXDONEINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXUNDERRUNINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXERRORINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXFINISHEDINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXDONEINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SOFTINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAKEUPINTCLR; 
    }
    namespace Noneintset{
        using Addr = Register::Address<0x50000fec,0xffffcf00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXOVERRUNINTSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXERRORINTSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXFINISHEDINTSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXDONEINTSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXUNDERRUNINTSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXERRORINTSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXFINISHEDINTSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXDONEINTSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SOFTINTSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAKEUPINTSET; 
    }
    namespace Nonepowerdown{
        using Addr = Register::Address<0x50000ff4,0x7fffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PD; 
    }
}
