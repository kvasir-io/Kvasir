#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SMC_cfg{
        using Addr = Register::Address<0x400e0000,0xff80ccfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PAGESIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WSPARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RSPARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EDGECTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RBEDGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DTOCYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DTOMUL; 
    }
    namespace SMC_ctrl{
        using Addr = Register::Address<0x400e0004,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NFCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NFCDIS; 
    }
    namespace SMC_sr{
        using Addr = Register::Address<0x400e0008,0xfe0c86ce>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SMCSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RB_RISE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RB_FALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NFCBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> NFCWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> NFCSID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> XFRDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CMDDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> UNDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> AWB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> NFCASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RB_EDGE0; 
    }
    namespace SMC_ier{
        using Addr = Register::Address<0x400e000c,0xfe0cffcf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RB_RISE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RB_FALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> XFRDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CMDDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> UNDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> AWB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> NFCASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RB_EDGE0; 
    }
    namespace SMC_idr{
        using Addr = Register::Address<0x400e0010,0xfe0cffcf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RB_RISE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RB_FALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> XFRDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CMDDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> UNDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> AWB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> NFCASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RB_EDGE0; 
    }
    namespace SMC_imr{
        using Addr = Register::Address<0x400e0014,0xfe0cffcf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RB_RISE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RB_FALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> XFRDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CMDDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DTOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> UNDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> AWB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> NFCASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RB_EDGE0; 
    }
    namespace SMC_addr{
        using Addr = Register::Address<0x400e0018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADDR_CYCLE0; 
    }
    namespace SMC_bank{
        using Addr = Register::Address<0x400e001c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BANK; 
    }
    namespace SMC_ecc_ctrl{
        using Addr = Register::Address<0x400e0020,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SWRST; 
    }
    namespace SMC_ecc_md{
        using Addr = Register::Address<0x400e0024,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ECC_PAGESIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TYPCORREC; 
    }
    namespace SMC_ecc_sr1{
        using Addr = Register::Address<0x400e0028,0x88888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RECERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> ECCERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RECERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ECCERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MULERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RECERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ECCERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MULERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RECERR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ECCERR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MULERR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RECERR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> ECCERR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RECERR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> ECCERR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RECERR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,25)> ECCERR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RECERR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> ECCERR7; 
    }
    namespace SMC_ecc_pr0{
        using Addr = Register::Address<0x400e002c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> WORDADDR; 
    }
    namespace SMC_ecc_pr0_w9bit{
        using Addr = Register::Address<0x400e002c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,12)> NPARITY; 
    }
    namespace SMC_ecc_pr0_w8bit{
        using Addr = Register::Address<0x400e002c,0xff800800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12)> NPARITY; 
    }
    namespace SMC_ecc_pr1{
        using Addr = Register::Address<0x400e0030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NPARITY; 
    }
    namespace SMC_ecc_pr1_w9bit{
        using Addr = Register::Address<0x400e0030,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,12)> NPARITY; 
    }
    namespace SMC_ecc_pr1_w8bit{
        using Addr = Register::Address<0x400e0030,0xff800800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12)> NPARITY; 
    }
    namespace SMC_ecc_sr2{
        using Addr = Register::Address<0x400e0034,0x88888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RECERR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> ECCERR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RECERR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ECCERR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MULERR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RECERR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ECCERR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MULERR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RECERR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ECCERR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MULERR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RECERR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> ECCERR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RECERR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> ECCERR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RECERR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,25)> ECCERR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RECERR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> ECCERR15; 
    }
    namespace SMC_ecc_pr2{
        using Addr = Register::Address<0x400e0038,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,12)> NPARITY; 
    }
    namespace SMC_ecc_pr2_w8bit{
        using Addr = Register::Address<0x400e0038,0xff800800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12)> NPARITY; 
    }
    namespace SMC_ecc_pr3{
        using Addr = Register::Address<0x400e003c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,12)> NPARITY; 
    }
    namespace SMC_ecc_pr3_w8bit{
        using Addr = Register::Address<0x400e003c,0xff800800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12)> NPARITY; 
    }
    namespace SMC_ecc_pr4{
        using Addr = Register::Address<0x400e0040,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,12)> NPARITY; 
    }
    namespace SMC_ecc_pr4_w8bit{
        using Addr = Register::Address<0x400e0040,0xff800800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12)> NPARITY; 
    }
    namespace SMC_ecc_pr5{
        using Addr = Register::Address<0x400e0044,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,12)> NPARITY; 
    }
    namespace SMC_ecc_pr5_w8bit{
        using Addr = Register::Address<0x400e0044,0xff800800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12)> NPARITY; 
    }
    namespace SMC_ecc_pr6{
        using Addr = Register::Address<0x400e0048,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,12)> NPARITY; 
    }
    namespace SMC_ecc_pr6_w8bit{
        using Addr = Register::Address<0x400e0048,0xff800800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12)> NPARITY; 
    }
    namespace SMC_ecc_pr7{
        using Addr = Register::Address<0x400e004c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,12)> NPARITY; 
    }
    namespace SMC_ecc_pr7_w8bit{
        using Addr = Register::Address<0x400e004c,0xff800800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12)> NPARITY; 
    }
    namespace SMC_ecc_pr8{
        using Addr = Register::Address<0x400e0050,0xff800800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12)> NPARITY; 
    }
    namespace SMC_ecc_pr9{
        using Addr = Register::Address<0x400e0054,0xff800800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12)> NPARITY; 
    }
    namespace SMC_ecc_pr10{
        using Addr = Register::Address<0x400e0058,0xff800800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12)> NPARITY; 
    }
    namespace SMC_ecc_pr11{
        using Addr = Register::Address<0x400e005c,0xff800800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12)> NPARITY; 
    }
    namespace SMC_ecc_pr12{
        using Addr = Register::Address<0x400e0060,0xff800800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12)> NPARITY; 
    }
    namespace SMC_ecc_pr13{
        using Addr = Register::Address<0x400e0064,0xff800800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12)> NPARITY; 
    }
    namespace SMC_ecc_pr14{
        using Addr = Register::Address<0x400e0068,0xff800800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12)> NPARITY; 
    }
    namespace SMC_ecc_pr15{
        using Addr = Register::Address<0x400e006c,0xff800800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BITADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3)> WORDADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12)> NPARITY; 
    }
    namespace SMC_setup0{
        using Addr = Register::Address<0x400e0070,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse0{
        using Addr = Register::Address<0x400e0074,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle0{
        using Addr = Register::Address<0x400e0078,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_timings0{
        using Addr = Register::Address<0x400e007c,0x00f0e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TADL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OCMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TWB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> RBNSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> NFSEL; 
    }
    namespace SMC_mode0{
        using Addr = Register::Address<0x400e0080,0xffe0eecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READ_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WRITE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EXNW_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DBW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TDF_CYCLES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDF_MODE; 
    }
    namespace SMC_setup1{
        using Addr = Register::Address<0x400e0084,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse1{
        using Addr = Register::Address<0x400e0088,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle1{
        using Addr = Register::Address<0x400e008c,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_timings1{
        using Addr = Register::Address<0x400e0090,0x00f0e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TADL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OCMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TWB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> RBNSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> NFSEL; 
    }
    namespace SMC_mode1{
        using Addr = Register::Address<0x400e0094,0xffe0eecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READ_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WRITE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EXNW_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DBW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TDF_CYCLES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDF_MODE; 
    }
    namespace SMC_setup2{
        using Addr = Register::Address<0x400e0098,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse2{
        using Addr = Register::Address<0x400e009c,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle2{
        using Addr = Register::Address<0x400e00a0,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_timings2{
        using Addr = Register::Address<0x400e00a4,0x00f0e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TADL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OCMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TWB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> RBNSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> NFSEL; 
    }
    namespace SMC_mode2{
        using Addr = Register::Address<0x400e00a8,0xffe0eecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READ_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WRITE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EXNW_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DBW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TDF_CYCLES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDF_MODE; 
    }
    namespace SMC_setup3{
        using Addr = Register::Address<0x400e00ac,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_SETUP; 
    }
    namespace SMC_pulse3{
        using Addr = Register::Address<0x400e00b0,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NWE_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NCS_WR_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NRD_PULSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> NCS_RD_PULSE; 
    }
    namespace SMC_cycle3{
        using Addr = Register::Address<0x400e00b4,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> NWE_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> NRD_CYCLE; 
    }
    namespace SMC_timings3{
        using Addr = Register::Address<0x400e00b8,0x00f0e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TADL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OCMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TWB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> RBNSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> NFSEL; 
    }
    namespace SMC_mode3{
        using Addr = Register::Address<0x400e00bc,0xffe0eecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READ_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WRITE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EXNW_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DBW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TDF_CYCLES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDF_MODE; 
    }
    namespace SMC_ocms{
        using Addr = Register::Address<0x400e0110,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SMSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SRSE; 
    }
    namespace SMC_key1{
        using Addr = Register::Address<0x400e0114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEY1; 
    }
    namespace SMC_key2{
        using Addr = Register::Address<0x400e0118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEY2; 
    }
    namespace SMC_wpcr{
        using Addr = Register::Address<0x400e01e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WP_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WP_KEY; 
    }
    namespace SMC_wpsr{
        using Addr = Register::Address<0x400e01e8,0xff0000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WP_VS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WP_VSRC; 
    }
}
