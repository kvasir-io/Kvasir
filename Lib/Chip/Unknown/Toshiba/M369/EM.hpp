#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneifvrr{
        using Addr = Register::Address<0x4000a000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> REV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> VER; 
    }
    namespace Noneifcr{
        using Addr = Register::Address<0x4000a004,0xfffff8ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IOTOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DMATOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DMAERR; 
    }
    namespace Noneifintst{
        using Addr = Register::Address<0x4000a010,0xff7870fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EMDMACINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SLAVE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLAVE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SLAVE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SLAVE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> IOTOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MASTER0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MASTER1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MASTER2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> DMATOUT; 
    }
    namespace Noneifinten{
        using Addr = Register::Address<0x4000a014,0xff7870fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EMDMACINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SLAVE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLAVE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SLAVE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SLAVE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> IOTOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MASTER0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MASTER1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MASTER2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> DMATOUT; 
    }
    namespace Nonedcr{
        using Addr = Register::Address<0x4000b000,0xffffff8e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DE; 
    }
    namespace Nonedten{
        using Addr = Register::Address<0x4000b008,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRNS; 
    }
    namespace Nonedren{
        using Addr = Register::Address<0x4000b010,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RCV; 
    }
    namespace Nonedtdpr{
        using Addr = Register::Address<0x4000b018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TDPA; 
    }
    namespace Nonedrdpr{
        using Addr = Register::Address<0x4000b020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RDPA; 
    }
    namespace Nonedintst{
        using Addr = Register::Address<0x4000b028,0xb800f060>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RINT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> FTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> BER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RFRMER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> RABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> TWB; 
    }
    namespace Nonedinten{
        using Addr = Register::Address<0x4000b030,0xb800f060>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RINT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> FTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> BER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RFRMER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> RABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> TWB; 
    }
    namespace Nonederr{
        using Addr = Register::Address<0x4000b038,0xfffff060>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RINT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TINT4; 
    }
    namespace Nonedmfcr{
        using Addr = Register::Address<0x4000b040,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MIS; 
    }
    namespace Nonedtftr{
        using Addr = Register::Address<0x4000b048,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> TFTH; 
    }
    namespace Nonedfcdr{
        using Addr = Register::Address<0x4000b050,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> TA; 
    }
    namespace Nonedrrcr{
        using Addr = Register::Address<0x4000b058,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RNR; 
    }
    namespace Nonedeadr{
        using Addr = Register::Address<0x4000b060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ERRADR; 
    }
    namespace Nonedtufr{
        using Addr = Register::Address<0x4000b064,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> UNDER; 
    }
    namespace Nonedrofr{
        using Addr = Register::Address<0x4000b068,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> OVER; 
    }
    namespace Nonedrbtr{
        using Addr = Register::Address<0x4000b070,0xfff8fff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> RFDO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> RFFO; 
    }
    namespace Nonedrpdr{
        using Addr = Register::Address<0x4000b078,0xfffcffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> PADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PADS; 
    }
    namespace Nonedtimer{
        using Addr = Register::Address<0x4000b07c,0xffffffee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIM; 
    }
    namespace Nonedrbar{
        using Addr = Register::Address<0x4000b0c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RBWA; 
    }
    namespace Nonedrdar{
        using Addr = Register::Address<0x4000b0cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RDRA; 
    }
    namespace Nonedtbar{
        using Addr = Register::Address<0x4000b0d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TBRA; 
    }
    namespace Nonedtdar{
        using Addr = Register::Address<0x4000b0d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TDRA; 
    }
    namespace Noneccr{
        using Addr = Register::Address<0x4000b100,0xffe0ed90>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OLB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ILB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TPC; 
    }
    namespace Nonecrflr{
        using Addr = Register::Address<0x4000b108,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> FLEN_ULMT; 
    }
    namespace Nonecintst{
        using Addr = Register::Address<0x4000b110,0xffffffc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FCIDTCT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MAGICPKT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LINKCHNG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PSRTROV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BRDSRCV; 
    }
    namespace Nonecinten{
        using Addr = Register::Address<0x4000b118,0xffffffc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FCIDTCT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MAGICPKT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LINKCHNG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PSRTROV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BRDSRCV; 
    }
    namespace Nonecmiicr{
        using Addr = Register::Address<0x4000b120,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MDC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MDO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MDI; 
    }
    namespace Nonecphyst{
        using Addr = Register::Address<0x4000b128,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LINK; 
    }
    namespace Nonecicr{
        using Addr = Register::Address<0x4000b150,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> IPG; 
    }
    namespace Nonecapr{
        using Addr = Register::Address<0x4000b154,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> APAUSE; 
    }
    namespace Nonecmpr{
        using Addr = Register::Address<0x4000b158,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MPAUSE; 
    }
    namespace Nonecrpcr{
        using Addr = Register::Address<0x4000b160,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RPAUSE; 
    }
    namespace Nonecpulr{
        using Addr = Register::Address<0x4000b164,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXPAUSE; 
    }
    namespace Nonecpcr{
        using Addr = Register::Address<0x4000b168,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TPAUSE; 
    }
    namespace Nonecbrr{
        using Addr = Register::Address<0x4000b16c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BCF; 
    }
    namespace Nonecmahr{
        using Addr = Register::Address<0x4000b1c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MACADRH; 
    }
    namespace Nonecmalr{
        using Addr = Register::Address<0x4000b1c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MACADRL; 
    }
    namespace Nonectrer{
        using Addr = Register::Address<0x4000b1d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TINT1CNT; 
    }
    namespace Nonectcdr{
        using Addr = Register::Address<0x4000b1d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TINT2CNT; 
    }
    namespace Nonectclr{
        using Addr = Register::Address<0x4000b1d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TINT3CNT; 
    }
    namespace Nonectndr{
        using Addr = Register::Address<0x4000b1dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TINT4CNT; 
    }
    namespace Nonecrcer{
        using Addr = Register::Address<0x4000b1e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RINT1CNT; 
    }
    namespace Nonecrfer{
        using Addr = Register::Address<0x4000b1e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RINT2CNT; 
    }
    namespace Nonecrlsr{
        using Addr = Register::Address<0x4000b1ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RINT3CNT; 
    }
    namespace Nonecrlor{
        using Addr = Register::Address<0x4000b1f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RINT4CNT; 
    }
    namespace Nonecrrfr{
        using Addr = Register::Address<0x4000b1f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RINT5CNT; 
    }
    namespace Nonecrmfr{
        using Addr = Register::Address<0x4000b1f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RINT8CNT; 
    }
}
