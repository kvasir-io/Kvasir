#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemc{
        using Addr = Register::Address<0x40005400,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MC; 
    }
    namespace Nonemd{
        using Addr = Register::Address<0x40005408,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MD; 
    }
    namespace Nonetrs{
        using Addr = Register::Address<0x40005410,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0)> TRS; 
    }
    namespace Nonetrr{
        using Addr = Register::Address<0x40005418,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0)> TRR; 
    }
    namespace Noneta{
        using Addr = Register::Address<0x40005420,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0)> TA; 
    }
    namespace Noneaa{
        using Addr = Register::Address<0x40005428,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0)> AA; 
    }
    namespace Nonermp{
        using Addr = Register::Address<0x40005430,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RMP; 
    }
    namespace Nonerml{
        using Addr = Register::Address<0x40005438,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RML; 
    }
    namespace Nonelam{
        using Addr = Register::Address<0x40005440,0x60000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> LAM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LAMI; 
    }
    namespace Nonegam{
        using Addr = Register::Address<0x40005448,0x60000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> GAM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> GAMI; 
    }
    namespace Nonemcr{
        using Addr = Register::Address<0x40005450,0xfffff424>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TSCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MTOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WUBA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SMR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TSTERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TSTLB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SUR; 
    }
    namespace Nonegsr{
        using Addr = Register::Address<0x40005458,0xfffe0230>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TSO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SUA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,12)> MIS; 
    }
    namespace Nonebcr1{
        using Addr = Register::Address<0x40005460,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> BRP; 
    }
    namespace Nonebcr2{
        using Addr = Register::Address<0x40005468,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TSEG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TSEG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SAM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SJW; 
    }
    namespace Nonegif{
        using Addr = Register::Address<0x40005470,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WLIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BOIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TSOIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRMABF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RMLIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WUIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RFPF; 
    }
    namespace Nonegim{
        using Addr = Register::Address<0x40005478,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WLIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BOIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TSOIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRMABF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RMLIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WUIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RFPM; 
    }
    namespace Nonembtif{
        using Addr = Register::Address<0x40005480,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0)> MBTIF; 
    }
    namespace Nonembrif{
        using Addr = Register::Address<0x40005488,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MBRIF; 
    }
    namespace Nonembim{
        using Addr = Register::Address<0x40005490,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MBIM; 
    }
    namespace Nonecdr{
        using Addr = Register::Address<0x40005498,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0)> CDR; 
    }
    namespace Nonerfp{
        using Addr = Register::Address<0x400054a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RFP; 
    }
    namespace Nonecec{
        using Addr = Register::Address<0x400054a8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> REC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TEC; 
    }
    namespace Nonetsp{
        using Addr = Register::Address<0x400054b0,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TSP; 
    }
    namespace Nonetsc{
        using Addr = Register::Address<0x400054b8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TSC; 
    }
}
