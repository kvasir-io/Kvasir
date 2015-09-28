#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonewtcr10{
        using Addr = Register::Address<0x4003b100,0xffffff02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SCST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ST; 
    }
    namespace Nonewtcr11{
        using Addr = Register::Address<0x4003b104,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> YEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MIEN; 
    }
    namespace Nonewtcr12{
        using Addr = Register::Address<0x4003b108,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> INTCRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INTERI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INTALI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INTTMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTHI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTSSI; 
    }
    namespace Nonewtcr13{
        using Addr = Register::Address<0x4003b10c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> INTCRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INTERIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INTALIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INTTMIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTMIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTSSIE; 
    }
    namespace Nonewtcr20{
        using Addr = Register::Address<0x4003b110,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PWRITE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PREAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BWRITE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BREAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CWRITE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CREAD; 
    }
    namespace Nonewtcr21{
        using Addr = Register::Address<0x4003b114,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TMRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TMST; 
    }
    namespace Nonewtsr{
        using Addr = Register::Address<0x4003b11c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> S; 
    }
    namespace Nonewtmir{
        using Addr = Register::Address<0x4003b120,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MI; 
    }
    namespace Nonewthr{
        using Addr = Register::Address<0x4003b124,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> H; 
    }
    namespace Nonewtdr{
        using Addr = Register::Address<0x4003b128,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> D; 
    }
    namespace Nonewtdw{
        using Addr = Register::Address<0x4003b12c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DW; 
    }
    namespace Nonewtmor{
        using Addr = Register::Address<0x4003b130,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TMO0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MO; 
    }
    namespace Nonewtyr{
        using Addr = Register::Address<0x4003b134,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> Y; 
    }
    namespace Nonealmir{
        using Addr = Register::Address<0x4003b138,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TAMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> AMI; 
    }
    namespace Nonealhr{
        using Addr = Register::Address<0x4003b13c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> AH; 
    }
    namespace Nonealdr{
        using Addr = Register::Address<0x4003b140,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> AD; 
    }
    namespace Nonealmor{
        using Addr = Register::Address<0x4003b144,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TAMO0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> AMO; 
    }
    namespace Nonealyr{
        using Addr = Register::Address<0x4003b148,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> AY; 
    }
    namespace Nonewttr0{
        using Addr = Register::Address<0x4003b14c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TM; 
    }
    namespace Nonewttr1{
        using Addr = Register::Address<0x4003b150,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TM; 
    }
    namespace Nonewttr2{
        using Addr = Register::Address<0x4003b154,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TM; 
    }
    namespace Nonewtcal0{
        using Addr = Register::Address<0x4003b158,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WTCAL0; 
    }
    namespace Nonewtcal1{
        using Addr = Register::Address<0x4003b15c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WTCAL1; 
    }
    namespace Nonewtcalen{
        using Addr = Register::Address<0x4003b160,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WTCALEN; 
    }
    namespace Nonewtdiv{
        using Addr = Register::Address<0x4003b164,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WTDIV; 
    }
    namespace Nonewtdiven{
        using Addr = Register::Address<0x4003b168,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WTDIVRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WTDIVEN; 
    }
    namespace Nonewtcalprd{
        using Addr = Register::Address<0x4003b16c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> WTCALPRD; 
    }
    namespace Nonewtcosel{
        using Addr = Register::Address<0x4003b170,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WTCOSEL; 
    }
    namespace Nonevb_clkdiv{
        using Addr = Register::Address<0x4003b174,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Nonewtosccnt{
        using Addr = Register::Address<0x4003b178,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SOSCNTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOSCEX; 
    }
    namespace Noneccs{
        using Addr = Register::Address<0x4003b17c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCS; 
    }
    namespace Noneccb{
        using Addr = Register::Address<0x4003b180,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCB; 
    }
    namespace Noneboost{
        using Addr = Register::Address<0x4003b188,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> BOOST; 
    }
    namespace Noneewkup{
        using Addr = Register::Address<0x4003b18c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WUP0; 
    }
    namespace Nonevdet{
        using Addr = Register::Address<0x4003b190,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PON; 
    }
    namespace Nonehibrst{
        using Addr = Register::Address<0x4003b198,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HIBRST; 
    }
    namespace Nonevbpfr{
        using Addr = Register::Address<0x4003b19c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> SPSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VPFR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VPFR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VPFR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VPFR0; 
    }
    namespace Nonevbpcr{
        using Addr = Register::Address<0x4003b1a0,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VPCR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VPCR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VPCR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VPCR0; 
    }
    namespace Nonevbddr{
        using Addr = Register::Address<0x4003b1a4,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VDDR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VDDR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VDDR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VDDR0; 
    }
    namespace Nonevbdir{
        using Addr = Register::Address<0x4003b1a8,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VDIR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VDIR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VDIR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VDIR0; 
    }
    namespace Nonevbdor{
        using Addr = Register::Address<0x4003b1ac,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VDOR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VDOR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VDOR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VDOR0; 
    }
    namespace Nonevbpzr{
        using Addr = Register::Address<0x4003b1b0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VPZR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VPZR0; 
    }
    namespace Nonebreg00{
        using Addr = Register::Address<0x4003b200,0xffffffff>;
    }
    namespace Nonebreg01{
        using Addr = Register::Address<0x4003b201,0xffffffff>;
    }
    namespace Nonebreg02{
        using Addr = Register::Address<0x4003b202,0xffffffff>;
    }
    namespace Nonebreg03{
        using Addr = Register::Address<0x4003b203,0xffffffff>;
    }
    namespace Nonebreg04{
        using Addr = Register::Address<0x4003b204,0xffffffff>;
    }
    namespace Nonebreg05{
        using Addr = Register::Address<0x4003b205,0xffffffff>;
    }
    namespace Nonebreg06{
        using Addr = Register::Address<0x4003b206,0xffffffff>;
    }
    namespace Nonebreg07{
        using Addr = Register::Address<0x4003b207,0xffffffff>;
    }
    namespace Nonebreg08{
        using Addr = Register::Address<0x4003b208,0xffffffff>;
    }
    namespace Nonebreg09{
        using Addr = Register::Address<0x4003b209,0xffffffff>;
    }
    namespace Nonebreg0a{
        using Addr = Register::Address<0x4003b20a,0xffffffff>;
    }
    namespace Nonebreg0b{
        using Addr = Register::Address<0x4003b20b,0xffffffff>;
    }
    namespace Nonebreg0c{
        using Addr = Register::Address<0x4003b20c,0xffffffff>;
    }
    namespace Nonebreg0d{
        using Addr = Register::Address<0x4003b20d,0xffffffff>;
    }
    namespace Nonebreg0e{
        using Addr = Register::Address<0x4003b20e,0xffffffff>;
    }
    namespace Nonebreg0f{
        using Addr = Register::Address<0x4003b20f,0xffffffff>;
    }
    namespace Nonebreg10{
        using Addr = Register::Address<0x4003b210,0xffffffff>;
    }
    namespace Nonebreg11{
        using Addr = Register::Address<0x4003b211,0xffffffff>;
    }
    namespace Nonebreg12{
        using Addr = Register::Address<0x4003b212,0xffffffff>;
    }
    namespace Nonebreg13{
        using Addr = Register::Address<0x4003b213,0xffffffff>;
    }
    namespace Nonebreg14{
        using Addr = Register::Address<0x4003b214,0xffffffff>;
    }
    namespace Nonebreg15{
        using Addr = Register::Address<0x4003b215,0xffffffff>;
    }
    namespace Nonebreg16{
        using Addr = Register::Address<0x4003b216,0xffffffff>;
    }
    namespace Nonebreg17{
        using Addr = Register::Address<0x4003b217,0xffffffff>;
    }
    namespace Nonebreg18{
        using Addr = Register::Address<0x4003b218,0xffffffff>;
    }
    namespace Nonebreg19{
        using Addr = Register::Address<0x4003b219,0xffffffff>;
    }
    namespace Nonebreg1a{
        using Addr = Register::Address<0x4003b21a,0xffffffff>;
    }
    namespace Nonebreg1b{
        using Addr = Register::Address<0x4003b21b,0xffffffff>;
    }
    namespace Nonebreg1c{
        using Addr = Register::Address<0x4003b21c,0xffffffff>;
    }
    namespace Nonebreg1d{
        using Addr = Register::Address<0x4003b21d,0xffffffff>;
    }
    namespace Nonebreg1e{
        using Addr = Register::Address<0x4003b21e,0xffffffff>;
    }
    namespace Nonebreg1f{
        using Addr = Register::Address<0x4003b21f,0xffffffff>;
    }
    namespace Nonebreg20{
        using Addr = Register::Address<0x4003b220,0xffffffff>;
    }
    namespace Nonebreg21{
        using Addr = Register::Address<0x4003b221,0xffffffff>;
    }
    namespace Nonebreg22{
        using Addr = Register::Address<0x4003b222,0xffffffff>;
    }
    namespace Nonebreg23{
        using Addr = Register::Address<0x4003b223,0xffffffff>;
    }
    namespace Nonebreg24{
        using Addr = Register::Address<0x4003b224,0xffffffff>;
    }
    namespace Nonebreg25{
        using Addr = Register::Address<0x4003b225,0xffffffff>;
    }
    namespace Nonebreg26{
        using Addr = Register::Address<0x4003b226,0xffffffff>;
    }
    namespace Nonebreg27{
        using Addr = Register::Address<0x4003b227,0xffffffff>;
    }
    namespace Nonebreg28{
        using Addr = Register::Address<0x4003b228,0xffffffff>;
    }
    namespace Nonebreg29{
        using Addr = Register::Address<0x4003b229,0xffffffff>;
    }
    namespace Nonebreg2a{
        using Addr = Register::Address<0x4003b22a,0xffffffff>;
    }
    namespace Nonebreg2b{
        using Addr = Register::Address<0x4003b22b,0xffffffff>;
    }
    namespace Nonebreg2c{
        using Addr = Register::Address<0x4003b22c,0xffffffff>;
    }
    namespace Nonebreg2d{
        using Addr = Register::Address<0x4003b22d,0xffffffff>;
    }
    namespace Nonebreg2e{
        using Addr = Register::Address<0x4003b22e,0xffffffff>;
    }
    namespace Nonebreg2f{
        using Addr = Register::Address<0x4003b22f,0xffffffff>;
    }
    namespace Nonebreg30{
        using Addr = Register::Address<0x4003b230,0xffffffff>;
    }
    namespace Nonebreg31{
        using Addr = Register::Address<0x4003b231,0xffffffff>;
    }
    namespace Nonebreg32{
        using Addr = Register::Address<0x4003b232,0xffffffff>;
    }
    namespace Nonebreg33{
        using Addr = Register::Address<0x4003b233,0xffffffff>;
    }
    namespace Nonebreg34{
        using Addr = Register::Address<0x4003b234,0xffffffff>;
    }
    namespace Nonebreg35{
        using Addr = Register::Address<0x4003b235,0xffffffff>;
    }
    namespace Nonebreg36{
        using Addr = Register::Address<0x4003b236,0xffffffff>;
    }
    namespace Nonebreg37{
        using Addr = Register::Address<0x4003b237,0xffffffff>;
    }
    namespace Nonebreg38{
        using Addr = Register::Address<0x4003b238,0xffffffff>;
    }
    namespace Nonebreg39{
        using Addr = Register::Address<0x4003b239,0xffffffff>;
    }
    namespace Nonebreg3a{
        using Addr = Register::Address<0x4003b23a,0xffffffff>;
    }
    namespace Nonebreg3b{
        using Addr = Register::Address<0x4003b23b,0xffffffff>;
    }
    namespace Nonebreg3c{
        using Addr = Register::Address<0x4003b23c,0xffffffff>;
    }
    namespace Nonebreg3d{
        using Addr = Register::Address<0x4003b23d,0xffffffff>;
    }
    namespace Nonebreg3e{
        using Addr = Register::Address<0x4003b23e,0xffffffff>;
    }
    namespace Nonebreg3f{
        using Addr = Register::Address<0x4003b23f,0xffffffff>;
    }
    namespace Nonebreg40{
        using Addr = Register::Address<0x4003b240,0xffffffff>;
    }
    namespace Nonebreg41{
        using Addr = Register::Address<0x4003b241,0xffffffff>;
    }
    namespace Nonebreg42{
        using Addr = Register::Address<0x4003b242,0xffffffff>;
    }
    namespace Nonebreg43{
        using Addr = Register::Address<0x4003b243,0xffffffff>;
    }
    namespace Nonebreg44{
        using Addr = Register::Address<0x4003b244,0xffffffff>;
    }
    namespace Nonebreg45{
        using Addr = Register::Address<0x4003b245,0xffffffff>;
    }
    namespace Nonebreg46{
        using Addr = Register::Address<0x4003b246,0xffffffff>;
    }
    namespace Nonebreg47{
        using Addr = Register::Address<0x4003b247,0xffffffff>;
    }
    namespace Nonebreg48{
        using Addr = Register::Address<0x4003b248,0xffffffff>;
    }
    namespace Nonebreg49{
        using Addr = Register::Address<0x4003b249,0xffffffff>;
    }
    namespace Nonebreg4a{
        using Addr = Register::Address<0x4003b24a,0xffffffff>;
    }
    namespace Nonebreg4b{
        using Addr = Register::Address<0x4003b24b,0xffffffff>;
    }
    namespace Nonebreg4c{
        using Addr = Register::Address<0x4003b24c,0xffffffff>;
    }
    namespace Nonebreg4d{
        using Addr = Register::Address<0x4003b24d,0xffffffff>;
    }
    namespace Nonebreg4e{
        using Addr = Register::Address<0x4003b24e,0xffffffff>;
    }
    namespace Nonebreg4f{
        using Addr = Register::Address<0x4003b24f,0xffffffff>;
    }
    namespace Nonebreg50{
        using Addr = Register::Address<0x4003b250,0xffffffff>;
    }
    namespace Nonebreg51{
        using Addr = Register::Address<0x4003b251,0xffffffff>;
    }
    namespace Nonebreg52{
        using Addr = Register::Address<0x4003b252,0xffffffff>;
    }
    namespace Nonebreg53{
        using Addr = Register::Address<0x4003b253,0xffffffff>;
    }
    namespace Nonebreg54{
        using Addr = Register::Address<0x4003b254,0xffffffff>;
    }
    namespace Nonebreg55{
        using Addr = Register::Address<0x4003b255,0xffffffff>;
    }
    namespace Nonebreg56{
        using Addr = Register::Address<0x4003b256,0xffffffff>;
    }
    namespace Nonebreg57{
        using Addr = Register::Address<0x4003b257,0xffffffff>;
    }
    namespace Nonebreg58{
        using Addr = Register::Address<0x4003b258,0xffffffff>;
    }
    namespace Nonebreg59{
        using Addr = Register::Address<0x4003b259,0xffffffff>;
    }
    namespace Nonebreg5a{
        using Addr = Register::Address<0x4003b25a,0xffffffff>;
    }
    namespace Nonebreg5b{
        using Addr = Register::Address<0x4003b25b,0xffffffff>;
    }
    namespace Nonebreg5c{
        using Addr = Register::Address<0x4003b25c,0xffffffff>;
    }
    namespace Nonebreg5d{
        using Addr = Register::Address<0x4003b25d,0xffffffff>;
    }
    namespace Nonebreg5e{
        using Addr = Register::Address<0x4003b25e,0xffffffff>;
    }
    namespace Nonebreg5f{
        using Addr = Register::Address<0x4003b25f,0xffffffff>;
    }
    namespace Nonebreg60{
        using Addr = Register::Address<0x4003b260,0xffffffff>;
    }
    namespace Nonebreg61{
        using Addr = Register::Address<0x4003b261,0xffffffff>;
    }
    namespace Nonebreg62{
        using Addr = Register::Address<0x4003b262,0xffffffff>;
    }
    namespace Nonebreg63{
        using Addr = Register::Address<0x4003b263,0xffffffff>;
    }
    namespace Nonebreg64{
        using Addr = Register::Address<0x4003b264,0xffffffff>;
    }
    namespace Nonebreg65{
        using Addr = Register::Address<0x4003b265,0xffffffff>;
    }
    namespace Nonebreg66{
        using Addr = Register::Address<0x4003b266,0xffffffff>;
    }
    namespace Nonebreg67{
        using Addr = Register::Address<0x4003b267,0xffffffff>;
    }
    namespace Nonebreg68{
        using Addr = Register::Address<0x4003b268,0xffffffff>;
    }
    namespace Nonebreg69{
        using Addr = Register::Address<0x4003b269,0xffffffff>;
    }
    namespace Nonebreg6a{
        using Addr = Register::Address<0x4003b26a,0xffffffff>;
    }
    namespace Nonebreg6b{
        using Addr = Register::Address<0x4003b26b,0xffffffff>;
    }
    namespace Nonebreg6c{
        using Addr = Register::Address<0x4003b26c,0xffffffff>;
    }
    namespace Nonebreg6d{
        using Addr = Register::Address<0x4003b26d,0xffffffff>;
    }
    namespace Nonebreg6e{
        using Addr = Register::Address<0x4003b26e,0xffffffff>;
    }
    namespace Nonebreg6f{
        using Addr = Register::Address<0x4003b26f,0xffffffff>;
    }
    namespace Nonebreg70{
        using Addr = Register::Address<0x4003b270,0xffffffff>;
    }
    namespace Nonebreg71{
        using Addr = Register::Address<0x4003b271,0xffffffff>;
    }
    namespace Nonebreg72{
        using Addr = Register::Address<0x4003b272,0xffffffff>;
    }
    namespace Nonebreg73{
        using Addr = Register::Address<0x4003b273,0xffffffff>;
    }
    namespace Nonebreg74{
        using Addr = Register::Address<0x4003b274,0xffffffff>;
    }
    namespace Nonebreg75{
        using Addr = Register::Address<0x4003b275,0xffffffff>;
    }
    namespace Nonebreg76{
        using Addr = Register::Address<0x4003b276,0xffffffff>;
    }
    namespace Nonebreg77{
        using Addr = Register::Address<0x4003b277,0xffffffff>;
    }
    namespace Nonebreg78{
        using Addr = Register::Address<0x4003b278,0xffffffff>;
    }
    namespace Nonebreg79{
        using Addr = Register::Address<0x4003b279,0xffffffff>;
    }
    namespace Nonebreg7a{
        using Addr = Register::Address<0x4003b27a,0xffffffff>;
    }
    namespace Nonebreg7b{
        using Addr = Register::Address<0x4003b27b,0xffffffff>;
    }
    namespace Nonebreg7c{
        using Addr = Register::Address<0x4003b27c,0xffffffff>;
    }
    namespace Nonebreg7d{
        using Addr = Register::Address<0x4003b27d,0xffffffff>;
    }
    namespace Nonebreg7e{
        using Addr = Register::Address<0x4003b27e,0xffffffff>;
    }
    namespace Nonebreg7f{
        using Addr = Register::Address<0x4003b27f,0xffffffff>;
    }
}
