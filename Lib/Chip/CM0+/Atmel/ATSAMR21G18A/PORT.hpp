#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PORT_ctrl0{
        using Addr = Register::Address<0x41004424,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SAMPLING; 
    }
    namespace PORT_ctrl1{
        using Addr = Register::Address<0x410044a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SAMPLING; 
    }
    namespace PORT_ctrl2{
        using Addr = Register::Address<0x41004524,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SAMPLING; 
    }
    namespace PORT_dir0{
        using Addr = Register::Address<0x41004400,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DIR; 
    }
    namespace PORT_dir1{
        using Addr = Register::Address<0x41004480,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DIR; 
    }
    namespace PORT_dir2{
        using Addr = Register::Address<0x41004500,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DIR; 
    }
    namespace PORT_dirclr0{
        using Addr = Register::Address<0x41004404,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DIRCLR; 
    }
    namespace PORT_dirclr1{
        using Addr = Register::Address<0x41004484,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DIRCLR; 
    }
    namespace PORT_dirclr2{
        using Addr = Register::Address<0x41004504,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DIRCLR; 
    }
    namespace PORT_dirset0{
        using Addr = Register::Address<0x41004408,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DIRSET; 
    }
    namespace PORT_dirset1{
        using Addr = Register::Address<0x41004488,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DIRSET; 
    }
    namespace PORT_dirset2{
        using Addr = Register::Address<0x41004508,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DIRSET; 
    }
    namespace PORT_dirtgl0{
        using Addr = Register::Address<0x4100440c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DIRTGL; 
    }
    namespace PORT_dirtgl1{
        using Addr = Register::Address<0x4100448c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DIRTGL; 
    }
    namespace PORT_dirtgl2{
        using Addr = Register::Address<0x4100450c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DIRTGL; 
    }
    namespace PORT_in0{
        using Addr = Register::Address<0x41004420,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IN; 
    }
    namespace PORT_in1{
        using Addr = Register::Address<0x410044a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IN; 
    }
    namespace PORT_in2{
        using Addr = Register::Address<0x41004520,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IN; 
    }
    namespace PORT_out0{
        using Addr = Register::Address<0x41004410,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OUT; 
    }
    namespace PORT_out1{
        using Addr = Register::Address<0x41004490,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OUT; 
    }
    namespace PORT_out2{
        using Addr = Register::Address<0x41004510,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OUT; 
    }
    namespace PORT_outclr0{
        using Addr = Register::Address<0x41004414,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OUTCLR; 
    }
    namespace PORT_outclr1{
        using Addr = Register::Address<0x41004494,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OUTCLR; 
    }
    namespace PORT_outclr2{
        using Addr = Register::Address<0x41004514,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OUTCLR; 
    }
    namespace PORT_outset0{
        using Addr = Register::Address<0x41004418,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OUTSET; 
    }
    namespace PORT_outset1{
        using Addr = Register::Address<0x41004498,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OUTSET; 
    }
    namespace PORT_outset2{
        using Addr = Register::Address<0x41004518,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OUTSET; 
    }
    namespace PORT_outtgl0{
        using Addr = Register::Address<0x4100441c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OUTTGL; 
    }
    namespace PORT_outtgl1{
        using Addr = Register::Address<0x4100449c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OUTTGL; 
    }
    namespace PORT_outtgl2{
        using Addr = Register::Address<0x4100451c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OUTTGL; 
    }
    namespace PORT_pincfg0_0{
        using Addr = Register::Address<0x41004440,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_1{
        using Addr = Register::Address<0x41004441,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_2{
        using Addr = Register::Address<0x41004442,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_3{
        using Addr = Register::Address<0x41004443,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_4{
        using Addr = Register::Address<0x41004444,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_5{
        using Addr = Register::Address<0x41004445,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_6{
        using Addr = Register::Address<0x41004446,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_7{
        using Addr = Register::Address<0x41004447,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_8{
        using Addr = Register::Address<0x41004448,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_9{
        using Addr = Register::Address<0x41004449,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_10{
        using Addr = Register::Address<0x4100444a,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_11{
        using Addr = Register::Address<0x4100444b,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_12{
        using Addr = Register::Address<0x4100444c,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_13{
        using Addr = Register::Address<0x4100444d,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_14{
        using Addr = Register::Address<0x4100444e,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_15{
        using Addr = Register::Address<0x4100444f,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_16{
        using Addr = Register::Address<0x41004450,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_17{
        using Addr = Register::Address<0x41004451,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_18{
        using Addr = Register::Address<0x41004452,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_19{
        using Addr = Register::Address<0x41004453,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_20{
        using Addr = Register::Address<0x41004454,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_21{
        using Addr = Register::Address<0x41004455,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_22{
        using Addr = Register::Address<0x41004456,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_23{
        using Addr = Register::Address<0x41004457,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_24{
        using Addr = Register::Address<0x41004458,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_25{
        using Addr = Register::Address<0x41004459,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_26{
        using Addr = Register::Address<0x4100445a,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_27{
        using Addr = Register::Address<0x4100445b,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_28{
        using Addr = Register::Address<0x4100445c,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_29{
        using Addr = Register::Address<0x4100445d,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_30{
        using Addr = Register::Address<0x4100445e,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg0_31{
        using Addr = Register::Address<0x4100445f,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DRVSTR; 
    }
    namespace PORT_pincfg1_0{
        using Addr = Register::Address<0x410044c0,0xffffffff>;
    }
    namespace PORT_pincfg1_1{
        using Addr = Register::Address<0x410044c1,0xffffffff>;
    }
    namespace PORT_pincfg1_2{
        using Addr = Register::Address<0x410044c2,0xffffffff>;
    }
    namespace PORT_pincfg1_3{
        using Addr = Register::Address<0x410044c3,0xffffffff>;
    }
    namespace PORT_pincfg1_4{
        using Addr = Register::Address<0x410044c4,0xffffffff>;
    }
    namespace PORT_pincfg1_5{
        using Addr = Register::Address<0x410044c5,0xffffffff>;
    }
    namespace PORT_pincfg1_6{
        using Addr = Register::Address<0x410044c6,0xffffffff>;
    }
    namespace PORT_pincfg1_7{
        using Addr = Register::Address<0x410044c7,0xffffffff>;
    }
    namespace PORT_pincfg1_8{
        using Addr = Register::Address<0x410044c8,0xffffffff>;
    }
    namespace PORT_pincfg1_9{
        using Addr = Register::Address<0x410044c9,0xffffffff>;
    }
    namespace PORT_pincfg1_10{
        using Addr = Register::Address<0x410044ca,0xffffffff>;
    }
    namespace PORT_pincfg1_11{
        using Addr = Register::Address<0x410044cb,0xffffffff>;
    }
    namespace PORT_pincfg1_12{
        using Addr = Register::Address<0x410044cc,0xffffffff>;
    }
    namespace PORT_pincfg1_13{
        using Addr = Register::Address<0x410044cd,0xffffffff>;
    }
    namespace PORT_pincfg1_14{
        using Addr = Register::Address<0x410044ce,0xffffffff>;
    }
    namespace PORT_pincfg1_15{
        using Addr = Register::Address<0x410044cf,0xffffffff>;
    }
    namespace PORT_pincfg1_16{
        using Addr = Register::Address<0x410044d0,0xffffffff>;
    }
    namespace PORT_pincfg1_17{
        using Addr = Register::Address<0x410044d1,0xffffffff>;
    }
    namespace PORT_pincfg1_18{
        using Addr = Register::Address<0x410044d2,0xffffffff>;
    }
    namespace PORT_pincfg1_19{
        using Addr = Register::Address<0x410044d3,0xffffffff>;
    }
    namespace PORT_pincfg1_20{
        using Addr = Register::Address<0x410044d4,0xffffffff>;
    }
    namespace PORT_pincfg1_21{
        using Addr = Register::Address<0x410044d5,0xffffffff>;
    }
    namespace PORT_pincfg1_22{
        using Addr = Register::Address<0x410044d6,0xffffffff>;
    }
    namespace PORT_pincfg1_23{
        using Addr = Register::Address<0x410044d7,0xffffffff>;
    }
    namespace PORT_pincfg1_24{
        using Addr = Register::Address<0x410044d8,0xffffffff>;
    }
    namespace PORT_pincfg1_25{
        using Addr = Register::Address<0x410044d9,0xffffffff>;
    }
    namespace PORT_pincfg1_26{
        using Addr = Register::Address<0x410044da,0xffffffff>;
    }
    namespace PORT_pincfg1_27{
        using Addr = Register::Address<0x410044db,0xffffffff>;
    }
    namespace PORT_pincfg1_28{
        using Addr = Register::Address<0x410044dc,0xffffffff>;
    }
    namespace PORT_pincfg1_29{
        using Addr = Register::Address<0x410044dd,0xffffffff>;
    }
    namespace PORT_pincfg1_30{
        using Addr = Register::Address<0x410044de,0xffffffff>;
    }
    namespace PORT_pincfg1_31{
        using Addr = Register::Address<0x410044df,0xffffffff>;
    }
    namespace PORT_pincfg2_0{
        using Addr = Register::Address<0x41004540,0xffffffff>;
    }
    namespace PORT_pincfg2_1{
        using Addr = Register::Address<0x41004541,0xffffffff>;
    }
    namespace PORT_pincfg2_2{
        using Addr = Register::Address<0x41004542,0xffffffff>;
    }
    namespace PORT_pincfg2_3{
        using Addr = Register::Address<0x41004543,0xffffffff>;
    }
    namespace PORT_pincfg2_4{
        using Addr = Register::Address<0x41004544,0xffffffff>;
    }
    namespace PORT_pincfg2_5{
        using Addr = Register::Address<0x41004545,0xffffffff>;
    }
    namespace PORT_pincfg2_6{
        using Addr = Register::Address<0x41004546,0xffffffff>;
    }
    namespace PORT_pincfg2_7{
        using Addr = Register::Address<0x41004547,0xffffffff>;
    }
    namespace PORT_pincfg2_8{
        using Addr = Register::Address<0x41004548,0xffffffff>;
    }
    namespace PORT_pincfg2_9{
        using Addr = Register::Address<0x41004549,0xffffffff>;
    }
    namespace PORT_pincfg2_10{
        using Addr = Register::Address<0x4100454a,0xffffffff>;
    }
    namespace PORT_pincfg2_11{
        using Addr = Register::Address<0x4100454b,0xffffffff>;
    }
    namespace PORT_pincfg2_12{
        using Addr = Register::Address<0x4100454c,0xffffffff>;
    }
    namespace PORT_pincfg2_13{
        using Addr = Register::Address<0x4100454d,0xffffffff>;
    }
    namespace PORT_pincfg2_14{
        using Addr = Register::Address<0x4100454e,0xffffffff>;
    }
    namespace PORT_pincfg2_15{
        using Addr = Register::Address<0x4100454f,0xffffffff>;
    }
    namespace PORT_pincfg2_16{
        using Addr = Register::Address<0x41004550,0xffffffff>;
    }
    namespace PORT_pincfg2_17{
        using Addr = Register::Address<0x41004551,0xffffffff>;
    }
    namespace PORT_pincfg2_18{
        using Addr = Register::Address<0x41004552,0xffffffff>;
    }
    namespace PORT_pincfg2_19{
        using Addr = Register::Address<0x41004553,0xffffffff>;
    }
    namespace PORT_pincfg2_20{
        using Addr = Register::Address<0x41004554,0xffffffff>;
    }
    namespace PORT_pincfg2_21{
        using Addr = Register::Address<0x41004555,0xffffffff>;
    }
    namespace PORT_pincfg2_22{
        using Addr = Register::Address<0x41004556,0xffffffff>;
    }
    namespace PORT_pincfg2_23{
        using Addr = Register::Address<0x41004557,0xffffffff>;
    }
    namespace PORT_pincfg2_24{
        using Addr = Register::Address<0x41004558,0xffffffff>;
    }
    namespace PORT_pincfg2_25{
        using Addr = Register::Address<0x41004559,0xffffffff>;
    }
    namespace PORT_pincfg2_26{
        using Addr = Register::Address<0x4100455a,0xffffffff>;
    }
    namespace PORT_pincfg2_27{
        using Addr = Register::Address<0x4100455b,0xffffffff>;
    }
    namespace PORT_pincfg2_28{
        using Addr = Register::Address<0x4100455c,0xffffffff>;
    }
    namespace PORT_pincfg2_29{
        using Addr = Register::Address<0x4100455d,0xffffffff>;
    }
    namespace PORT_pincfg2_30{
        using Addr = Register::Address<0x4100455e,0xffffffff>;
    }
    namespace PORT_pincfg2_31{
        using Addr = Register::Address<0x4100455f,0xffffffff>;
    }
    namespace PORT_pmux0_0{
        using Addr = Register::Address<0x41004430,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PMUXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PMUXO; 
    }
    namespace PORT_pmux0_1{
        using Addr = Register::Address<0x41004431,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PMUXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PMUXO; 
    }
    namespace PORT_pmux0_2{
        using Addr = Register::Address<0x41004432,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PMUXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PMUXO; 
    }
    namespace PORT_pmux0_3{
        using Addr = Register::Address<0x41004433,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PMUXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PMUXO; 
    }
    namespace PORT_pmux0_4{
        using Addr = Register::Address<0x41004434,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PMUXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PMUXO; 
    }
    namespace PORT_pmux0_5{
        using Addr = Register::Address<0x41004435,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PMUXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PMUXO; 
    }
    namespace PORT_pmux0_6{
        using Addr = Register::Address<0x41004436,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PMUXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PMUXO; 
    }
    namespace PORT_pmux0_7{
        using Addr = Register::Address<0x41004437,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PMUXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PMUXO; 
    }
    namespace PORT_pmux0_8{
        using Addr = Register::Address<0x41004438,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PMUXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PMUXO; 
    }
    namespace PORT_pmux0_9{
        using Addr = Register::Address<0x41004439,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PMUXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PMUXO; 
    }
    namespace PORT_pmux0_10{
        using Addr = Register::Address<0x4100443a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PMUXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PMUXO; 
    }
    namespace PORT_pmux0_11{
        using Addr = Register::Address<0x4100443b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PMUXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PMUXO; 
    }
    namespace PORT_pmux0_12{
        using Addr = Register::Address<0x4100443c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PMUXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PMUXO; 
    }
    namespace PORT_pmux0_13{
        using Addr = Register::Address<0x4100443d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PMUXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PMUXO; 
    }
    namespace PORT_pmux0_14{
        using Addr = Register::Address<0x4100443e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PMUXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PMUXO; 
    }
    namespace PORT_pmux0_15{
        using Addr = Register::Address<0x4100443f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PMUXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PMUXO; 
    }
    namespace PORT_pmux1_0{
        using Addr = Register::Address<0x410044b0,0xffffffff>;
    }
    namespace PORT_pmux1_1{
        using Addr = Register::Address<0x410044b1,0xffffffff>;
    }
    namespace PORT_pmux1_2{
        using Addr = Register::Address<0x410044b2,0xffffffff>;
    }
    namespace PORT_pmux1_3{
        using Addr = Register::Address<0x410044b3,0xffffffff>;
    }
    namespace PORT_pmux1_4{
        using Addr = Register::Address<0x410044b4,0xffffffff>;
    }
    namespace PORT_pmux1_5{
        using Addr = Register::Address<0x410044b5,0xffffffff>;
    }
    namespace PORT_pmux1_6{
        using Addr = Register::Address<0x410044b6,0xffffffff>;
    }
    namespace PORT_pmux1_7{
        using Addr = Register::Address<0x410044b7,0xffffffff>;
    }
    namespace PORT_pmux1_8{
        using Addr = Register::Address<0x410044b8,0xffffffff>;
    }
    namespace PORT_pmux1_9{
        using Addr = Register::Address<0x410044b9,0xffffffff>;
    }
    namespace PORT_pmux1_10{
        using Addr = Register::Address<0x410044ba,0xffffffff>;
    }
    namespace PORT_pmux1_11{
        using Addr = Register::Address<0x410044bb,0xffffffff>;
    }
    namespace PORT_pmux1_12{
        using Addr = Register::Address<0x410044bc,0xffffffff>;
    }
    namespace PORT_pmux1_13{
        using Addr = Register::Address<0x410044bd,0xffffffff>;
    }
    namespace PORT_pmux1_14{
        using Addr = Register::Address<0x410044be,0xffffffff>;
    }
    namespace PORT_pmux1_15{
        using Addr = Register::Address<0x410044bf,0xffffffff>;
    }
    namespace PORT_pmux2_0{
        using Addr = Register::Address<0x41004530,0xffffffff>;
    }
    namespace PORT_pmux2_1{
        using Addr = Register::Address<0x41004531,0xffffffff>;
    }
    namespace PORT_pmux2_2{
        using Addr = Register::Address<0x41004532,0xffffffff>;
    }
    namespace PORT_pmux2_3{
        using Addr = Register::Address<0x41004533,0xffffffff>;
    }
    namespace PORT_pmux2_4{
        using Addr = Register::Address<0x41004534,0xffffffff>;
    }
    namespace PORT_pmux2_5{
        using Addr = Register::Address<0x41004535,0xffffffff>;
    }
    namespace PORT_pmux2_6{
        using Addr = Register::Address<0x41004536,0xffffffff>;
    }
    namespace PORT_pmux2_7{
        using Addr = Register::Address<0x41004537,0xffffffff>;
    }
    namespace PORT_pmux2_8{
        using Addr = Register::Address<0x41004538,0xffffffff>;
    }
    namespace PORT_pmux2_9{
        using Addr = Register::Address<0x41004539,0xffffffff>;
    }
    namespace PORT_pmux2_10{
        using Addr = Register::Address<0x4100453a,0xffffffff>;
    }
    namespace PORT_pmux2_11{
        using Addr = Register::Address<0x4100453b,0xffffffff>;
    }
    namespace PORT_pmux2_12{
        using Addr = Register::Address<0x4100453c,0xffffffff>;
    }
    namespace PORT_pmux2_13{
        using Addr = Register::Address<0x4100453d,0xffffffff>;
    }
    namespace PORT_pmux2_14{
        using Addr = Register::Address<0x4100453e,0xffffffff>;
    }
    namespace PORT_pmux2_15{
        using Addr = Register::Address<0x4100453f,0xffffffff>;
    }
    namespace PORT_wrconfig0{
        using Addr = Register::Address<0x41004428,0x20b80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PINMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DRVSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> PMUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> WRPMUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> WRPINCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> HWSEL; 
    }
    namespace PORT_wrconfig1{
        using Addr = Register::Address<0x410044a8,0x20b80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PINMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DRVSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> PMUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> WRPMUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> WRPINCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> HWSEL; 
    }
    namespace PORT_wrconfig2{
        using Addr = Register::Address<0x41004528,0x20b80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PINMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PMUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PULLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DRVSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> PMUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> WRPMUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> WRPINCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> HWSEL; 
    }
}
