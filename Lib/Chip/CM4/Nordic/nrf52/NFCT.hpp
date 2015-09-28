#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_activate{
        using Addr = Register::Address<0x40005000,0xffffffff>;
    }
    namespace Nonetasks_disable{
        using Addr = Register::Address<0x40005004,0xffffffff>;
    }
    namespace Nonetasks_sense{
        using Addr = Register::Address<0x40005008,0xffffffff>;
    }
    namespace Nonetasks_starttx{
        using Addr = Register::Address<0x4000500c,0xffffffff>;
    }
    namespace Nonetasks_enablerxdata{
        using Addr = Register::Address<0x4000501c,0xffffffff>;
    }
    namespace Nonetasks_goidle{
        using Addr = Register::Address<0x40005024,0xffffffff>;
    }
    namespace Nonetasks_gosleep{
        using Addr = Register::Address<0x40005028,0xffffffff>;
    }
    namespace Noneevents_ready{
        using Addr = Register::Address<0x40005100,0xffffffff>;
    }
    namespace Noneevents_fielddetected{
        using Addr = Register::Address<0x40005104,0xffffffff>;
    }
    namespace Noneevents_fieldlost{
        using Addr = Register::Address<0x40005108,0xffffffff>;
    }
    namespace Noneevents_txframestart{
        using Addr = Register::Address<0x4000510c,0xffffffff>;
    }
    namespace Noneevents_txframeend{
        using Addr = Register::Address<0x40005110,0xffffffff>;
    }
    namespace Noneevents_rxframestart{
        using Addr = Register::Address<0x40005114,0xffffffff>;
    }
    namespace Noneevents_rxframeend{
        using Addr = Register::Address<0x40005118,0xffffffff>;
    }
    namespace Noneevents_error{
        using Addr = Register::Address<0x4000511c,0xffffffff>;
    }
    namespace Noneevents_rxerror{
        using Addr = Register::Address<0x40005128,0xffffffff>;
    }
    namespace Noneevents_endrx{
        using Addr = Register::Address<0x4000512c,0xffffffff>;
    }
    namespace Noneevents_endtx{
        using Addr = Register::Address<0x40005130,0xffffffff>;
    }
    namespace Noneevents_autocolresstarted{
        using Addr = Register::Address<0x40005138,0xffffffff>;
    }
    namespace Noneevents_collision{
        using Addr = Register::Address<0x40005148,0xffffffff>;
    }
    namespace Noneevents_selected{
        using Addr = Register::Address<0x4000514c,0xffffffff>;
    }
    namespace Noneevents_started{
        using Addr = Register::Address<0x40005150,0xffffffff>;
    }
    namespace Noneshorts{
        using Addr = Register::Address<0x40005200,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FIELDDETECTED_ACTIVATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FIELDLOST_SENSE; 
    }
    namespace Noneinten{
        using Addr = Register::Address<0x40005300,0xffe3a300>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FIELDDETECTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FIELDLOST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXFRAMESTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXFRAMEEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXFRAMESTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXFRAMEEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RXERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AUTOCOLRESSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> COLLISION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SELECTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STARTED; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40005304,0xffe3a300>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FIELDDETECTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FIELDLOST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXFRAMESTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXFRAMEEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXFRAMESTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXFRAMEEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RXERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AUTOCOLRESSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> COLLISION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SELECTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STARTED; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40005308,0xffe3a300>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FIELDDETECTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FIELDLOST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXFRAMESTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXFRAMEEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXFRAMESTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXFRAMEEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RXERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AUTOCOLRESSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> COLLISION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SELECTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> STARTED; 
    }
    namespace Noneerrorstatus{
        using Addr = Register::Address<0x40005404,0xffffffb0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRAMEDELAYTIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INVALIDNFCSYMBOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NFCFIELDTOOSTRONG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NFCFIELDTOOWEAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EOFERROR; 
    }
    namespace Nonecurrentloadctrl{
        using Addr = Register::Address<0x40005430,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CURRENTLOADCTRL; 
    }
    namespace Nonefieldpresent{
        using Addr = Register::Address<0x4000543c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FIELDPRESENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOCKDETECT; 
    }
    namespace Noneframedelaymin{
        using Addr = Register::Address<0x40005504,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> FRAMEDELAYMIN; 
    }
    namespace Noneframedelaymax{
        using Addr = Register::Address<0x40005508,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> FRAMEDELAYMAX; 
    }
    namespace Noneframedelaymode{
        using Addr = Register::Address<0x4000550c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FRAMEDELAYMODE; 
    }
    namespace Nonepacketptr{
        using Addr = Register::Address<0x40005510,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PTR; 
    }
    namespace Nonemaxlen{
        using Addr = Register::Address<0x40005514,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> MAXLEN; 
    }
    namespace Nonenfcid1_last{
        using Addr = Register::Address<0x40005590,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> NFCID1_Z; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> NFCID1_Y; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> NFCID1_X; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> NFCID1_W; 
    }
    namespace Nonenfcid1_2nd_last{
        using Addr = Register::Address<0x40005594,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> NFCID1_V; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> NFCID1_U; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> NFCID1_T; 
    }
    namespace Nonenfcid1_3rd_last{
        using Addr = Register::Address<0x40005598,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> NFCID1_S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> NFCID1_R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> NFCID1_Q; 
    }
    namespace Noneautocolresconfig{
        using Addr = Register::Address<0x4000559c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FILTER; 
    }
    namespace Nonesensres{
        using Addr = Register::Address<0x400055a0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> BITFRAMESDD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RFU5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> NFCIDSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> PLATFCONFIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> RFU74; 
    }
    namespace Noneselres{
        using Addr = Register::Address<0x400055a4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RFU10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CASCADE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> RFU43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> PROTOCOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RFU7; 
    }
}
