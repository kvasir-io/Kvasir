#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneadr{
        using Addr = Register::Address<0x40008200,0xffff0080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> DEV_ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DEFAULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ADDRESSED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CONFIGURED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SUSPEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CUR_SPEED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EP_BI_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STAGE_ERR; 
    }
    namespace Nonefrm{
        using Addr = Register::Address<0x40008204,0xffff4800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> F_STATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CREATE_SOF; 
    }
    namespace Nonecmd{
        using Addr = Register::Address<0x4000820c,0xffff7000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> COM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> RX_NULLPKT_EP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> INT_TOGGLE; 
    }
    namespace Nonebrq{
        using Addr = Register::Address<0x40008210,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> RECIPIENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> REQ_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> REQUESET; 
    }
    namespace Nonewvl{
        using Addr = Register::Address<0x40008214,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VALUE; 
    }
    namespace Nonewidx{
        using Addr = Register::Address<0x40008218,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INDEX; 
    }
    namespace Nonewlgth{
        using Addr = Register::Address<0x4000821c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LENGTH; 
    }
    namespace Noneint{
        using Addr = Register::Address<0x40008220,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> I_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> I_STATUS_NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> I_STATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> I_RX_DATA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> I_SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> I_EP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> I_EP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> I_NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> M_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> M_STATUS_NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> M_STATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> M_RX_DATA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> M_SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> M_EP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> M_EP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> M_NAK; 
    }
    namespace Noneintep{
        using Addr = Register::Address<0x40008224,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> I_EP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> I_EP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> I_EP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> I_EP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> I_EP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> I_EP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> I_EP7; 
    }
    namespace Noneintepmsk{
        using Addr = Register::Address<0x40008228,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> M_EP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> M_EP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> M_EP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> M_EP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> M_EP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M_EP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> M_EP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> M_EP7; 
    }
    namespace Noneintrx0{
        using Addr = Register::Address<0x4000822c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RX_D0_EP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RX_D0_EP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RX_D0_EP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RX_D0_EP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RX_D0_EP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RX_D0_EP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RX_D0_EP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RX_D0_EP7; 
    }
    namespace Noneep0msz{
        using Addr = Register::Address<0x40008230,0xffff6f80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> MAX_PKT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TX0_DATA; 
    }
    namespace Noneep0sts{
        using Addr = Register::Address<0x40008234,0xffff41ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> STATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> TOGGLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EP0_MASK; 
    }
    namespace Noneep0dsz{
        using Addr = Register::Address<0x40008238,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> SIZE; 
    }
    namespace Noneep0fifo{
        using Addr = Register::Address<0x4000823c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
    }
    namespace Noneep1msz{
        using Addr = Register::Address<0x40008240,0xffff6800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MAX_PKT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TX0_DATA; 
    }
    namespace Noneep1sts{
        using Addr = Register::Address<0x40008244,0xffff0070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> NUM_MF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> T_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DISABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> STATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> TOGGLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BUS_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PKT_MODE; 
    }
    namespace Noneep1dsz{
        using Addr = Register::Address<0x40008248,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> SIZE; 
    }
    namespace Noneep1fifo{
        using Addr = Register::Address<0x4000824c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
    }
    namespace Noneep2msz{
        using Addr = Register::Address<0x40008250,0xffff6800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MAX_PKT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TX0_DATA; 
    }
    namespace Noneep2sts{
        using Addr = Register::Address<0x40008254,0xffff0070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> NUM_MF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> T_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DISABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> STATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> TOGGLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BUS_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PKT_MODE; 
    }
    namespace Noneep2dsz{
        using Addr = Register::Address<0x40008258,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> SIZE; 
    }
    namespace Noneep2fifo{
        using Addr = Register::Address<0x4000825c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
    }
    namespace Noneep3msz{
        using Addr = Register::Address<0x40008260,0xffff6800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MAX_PKT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TX0_DATA; 
    }
    namespace Noneep3sts{
        using Addr = Register::Address<0x40008264,0xffff0070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> NUM_MF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> T_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DISABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> STATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> TOGGLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BUS_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PKT_MODE; 
    }
    namespace Noneep3dsz{
        using Addr = Register::Address<0x40008268,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> SIZE; 
    }
    namespace Noneep3fifo{
        using Addr = Register::Address<0x4000826c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
    }
    namespace Noneep4msz{
        using Addr = Register::Address<0x40008270,0xffff6800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MAX_PKT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TX0_DATA; 
    }
    namespace Noneep4sts{
        using Addr = Register::Address<0x40008274,0xffff0070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> NUM_MF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> T_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DISABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> STATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> TOGGLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BUS_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PKT_MODE; 
    }
    namespace Noneep4dsz{
        using Addr = Register::Address<0x40008278,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> SIZE; 
    }
    namespace Noneep4fifo{
        using Addr = Register::Address<0x4000827c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
    }
    namespace Noneep5msz{
        using Addr = Register::Address<0x40008280,0xffff6800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MAX_PKT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TX0_DATA; 
    }
    namespace Noneep5sts{
        using Addr = Register::Address<0x40008284,0xffff0070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> NUM_MF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> T_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DISABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> STATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> TOGGLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BUS_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PKT_MODE; 
    }
    namespace Noneep5dsz{
        using Addr = Register::Address<0x40008288,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> SIZE; 
    }
    namespace Noneep5fifo{
        using Addr = Register::Address<0x4000828c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
    }
    namespace Noneep6msz{
        using Addr = Register::Address<0x40008290,0xffff6800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MAX_PKT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TX0_DATA; 
    }
    namespace Noneep6sts{
        using Addr = Register::Address<0x40008294,0xffff0070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> NUM_MF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> T_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DISABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> STATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> TOGGLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BUS_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PKT_MODE; 
    }
    namespace Noneep6dsz{
        using Addr = Register::Address<0x40008298,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> SIZE; 
    }
    namespace Noneep6fifo{
        using Addr = Register::Address<0x4000829c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
    }
    namespace Noneep7msz{
        using Addr = Register::Address<0x400082a0,0xffff6800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MAX_PKT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TX0_DATA; 
    }
    namespace Noneep7sts{
        using Addr = Register::Address<0x400082a4,0xffff0070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> NUM_MF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> T_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DISABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> STATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> TOGGLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BUS_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PKT_MODE; 
    }
    namespace Noneep7dsz{
        using Addr = Register::Address<0x400082a8,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> SIZE; 
    }
    namespace Noneep7fifo{
        using Addr = Register::Address<0x400082ac,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
    }
    namespace Noneintnak{
        using Addr = Register::Address<0x40008330,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> I_EP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> I_EP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> I_EP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> I_EP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> I_EP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> I_EP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> I_EP7; 
    }
    namespace Noneintnakmsk{
        using Addr = Register::Address<0x40008334,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> M_EP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> M_EP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> M_EP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> M_EP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M_EP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> M_EP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> M_EP7; 
    }
}
