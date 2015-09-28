#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PMECC_cfg{
        using Addr = Register::Address<0xffffe000,0xffeeece8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BCH_ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SECTORSZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PAGESIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NANDWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SPAREEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> AUTO; 
    }
    namespace PMECC_sarea{
        using Addr = Register::Address<0xffffe004,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SPARESIZE; 
    }
    namespace PMECC_saddr{
        using Addr = Register::Address<0xffffe008,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> STARTADDR; 
    }
    namespace PMECC_eaddr{
        using Addr = Register::Address<0xffffe00c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> ENDADDR; 
    }
    namespace PMECC_clk{
        using Addr = Register::Address<0xffffe010,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CLKCTRL; 
    }
    namespace PMECC_ctrl{
        using Addr = Register::Address<0xffffe014,0xffffffc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> USER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DISABLE; 
    }
    namespace PMECC_sr{
        using Addr = Register::Address<0xffffe018,0xffffffee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENABLE; 
    }
    namespace PMECC_ier{
        using Addr = Register::Address<0xffffe01c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERRIE; 
    }
    namespace PMECC_idr{
        using Addr = Register::Address<0xffffe020,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERRID; 
    }
    namespace PMECC_imr{
        using Addr = Register::Address<0xffffe024,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERRIM; 
    }
    namespace PMECC_isr{
        using Addr = Register::Address<0xffffe028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ERRIS; 
    }
    namespace PMECC_ecc0_0{
        using Addr = Register::Address<0xffffe040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc1_0{
        using Addr = Register::Address<0xffffe044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc2_0{
        using Addr = Register::Address<0xffffe048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc3_0{
        using Addr = Register::Address<0xffffe04c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc4_0{
        using Addr = Register::Address<0xffffe050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc5_0{
        using Addr = Register::Address<0xffffe054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc6_0{
        using Addr = Register::Address<0xffffe058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc7_0{
        using Addr = Register::Address<0xffffe05c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc8_0{
        using Addr = Register::Address<0xffffe060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc9_0{
        using Addr = Register::Address<0xffffe064,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc10_0{
        using Addr = Register::Address<0xffffe068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc0_1{
        using Addr = Register::Address<0xffffe080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc1_1{
        using Addr = Register::Address<0xffffe084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc2_1{
        using Addr = Register::Address<0xffffe088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc3_1{
        using Addr = Register::Address<0xffffe08c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc4_1{
        using Addr = Register::Address<0xffffe090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc5_1{
        using Addr = Register::Address<0xffffe094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc6_1{
        using Addr = Register::Address<0xffffe098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc7_1{
        using Addr = Register::Address<0xffffe09c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc8_1{
        using Addr = Register::Address<0xffffe0a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc9_1{
        using Addr = Register::Address<0xffffe0a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc10_1{
        using Addr = Register::Address<0xffffe0a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc0_2{
        using Addr = Register::Address<0xffffe0c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc1_2{
        using Addr = Register::Address<0xffffe0c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc2_2{
        using Addr = Register::Address<0xffffe0c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc3_2{
        using Addr = Register::Address<0xffffe0cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc4_2{
        using Addr = Register::Address<0xffffe0d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc5_2{
        using Addr = Register::Address<0xffffe0d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc6_2{
        using Addr = Register::Address<0xffffe0d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc7_2{
        using Addr = Register::Address<0xffffe0dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc8_2{
        using Addr = Register::Address<0xffffe0e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc9_2{
        using Addr = Register::Address<0xffffe0e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc10_2{
        using Addr = Register::Address<0xffffe0e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc0_3{
        using Addr = Register::Address<0xffffe100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc1_3{
        using Addr = Register::Address<0xffffe104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc2_3{
        using Addr = Register::Address<0xffffe108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc3_3{
        using Addr = Register::Address<0xffffe10c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc4_3{
        using Addr = Register::Address<0xffffe110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc5_3{
        using Addr = Register::Address<0xffffe114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc6_3{
        using Addr = Register::Address<0xffffe118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc7_3{
        using Addr = Register::Address<0xffffe11c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc8_3{
        using Addr = Register::Address<0xffffe120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc9_3{
        using Addr = Register::Address<0xffffe124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc10_3{
        using Addr = Register::Address<0xffffe128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc0_4{
        using Addr = Register::Address<0xffffe140,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc1_4{
        using Addr = Register::Address<0xffffe144,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc2_4{
        using Addr = Register::Address<0xffffe148,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc3_4{
        using Addr = Register::Address<0xffffe14c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc4_4{
        using Addr = Register::Address<0xffffe150,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc5_4{
        using Addr = Register::Address<0xffffe154,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc6_4{
        using Addr = Register::Address<0xffffe158,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc7_4{
        using Addr = Register::Address<0xffffe15c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc8_4{
        using Addr = Register::Address<0xffffe160,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc9_4{
        using Addr = Register::Address<0xffffe164,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc10_4{
        using Addr = Register::Address<0xffffe168,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc0_5{
        using Addr = Register::Address<0xffffe180,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc1_5{
        using Addr = Register::Address<0xffffe184,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc2_5{
        using Addr = Register::Address<0xffffe188,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc3_5{
        using Addr = Register::Address<0xffffe18c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc4_5{
        using Addr = Register::Address<0xffffe190,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc5_5{
        using Addr = Register::Address<0xffffe194,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc6_5{
        using Addr = Register::Address<0xffffe198,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc7_5{
        using Addr = Register::Address<0xffffe19c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc8_5{
        using Addr = Register::Address<0xffffe1a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc9_5{
        using Addr = Register::Address<0xffffe1a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc10_5{
        using Addr = Register::Address<0xffffe1a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc0_6{
        using Addr = Register::Address<0xffffe1c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc1_6{
        using Addr = Register::Address<0xffffe1c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc2_6{
        using Addr = Register::Address<0xffffe1c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc3_6{
        using Addr = Register::Address<0xffffe1cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc4_6{
        using Addr = Register::Address<0xffffe1d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc5_6{
        using Addr = Register::Address<0xffffe1d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc6_6{
        using Addr = Register::Address<0xffffe1d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc7_6{
        using Addr = Register::Address<0xffffe1dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc8_6{
        using Addr = Register::Address<0xffffe1e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc9_6{
        using Addr = Register::Address<0xffffe1e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc10_6{
        using Addr = Register::Address<0xffffe1e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc0_7{
        using Addr = Register::Address<0xffffe200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc1_7{
        using Addr = Register::Address<0xffffe204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc2_7{
        using Addr = Register::Address<0xffffe208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc3_7{
        using Addr = Register::Address<0xffffe20c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc4_7{
        using Addr = Register::Address<0xffffe210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc5_7{
        using Addr = Register::Address<0xffffe214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc6_7{
        using Addr = Register::Address<0xffffe218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc7_7{
        using Addr = Register::Address<0xffffe21c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc8_7{
        using Addr = Register::Address<0xffffe220,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc9_7{
        using Addr = Register::Address<0xffffe224,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_ecc10_7{
        using Addr = Register::Address<0xffffe228,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECC; 
    }
    namespace PMECC_rem0_0{
        using Addr = Register::Address<0xffffe240,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem1_0{
        using Addr = Register::Address<0xffffe244,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem2_0{
        using Addr = Register::Address<0xffffe248,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem3_0{
        using Addr = Register::Address<0xffffe24c,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem4_0{
        using Addr = Register::Address<0xffffe250,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem5_0{
        using Addr = Register::Address<0xffffe254,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem6_0{
        using Addr = Register::Address<0xffffe258,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem7_0{
        using Addr = Register::Address<0xffffe25c,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem8_0{
        using Addr = Register::Address<0xffffe260,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem9_0{
        using Addr = Register::Address<0xffffe264,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem10_0{
        using Addr = Register::Address<0xffffe268,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem11_0{
        using Addr = Register::Address<0xffffe26c,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem0_1{
        using Addr = Register::Address<0xffffe280,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem1_1{
        using Addr = Register::Address<0xffffe284,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem2_1{
        using Addr = Register::Address<0xffffe288,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem3_1{
        using Addr = Register::Address<0xffffe28c,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem4_1{
        using Addr = Register::Address<0xffffe290,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem5_1{
        using Addr = Register::Address<0xffffe294,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem6_1{
        using Addr = Register::Address<0xffffe298,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem7_1{
        using Addr = Register::Address<0xffffe29c,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem8_1{
        using Addr = Register::Address<0xffffe2a0,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem9_1{
        using Addr = Register::Address<0xffffe2a4,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem10_1{
        using Addr = Register::Address<0xffffe2a8,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem11_1{
        using Addr = Register::Address<0xffffe2ac,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem0_2{
        using Addr = Register::Address<0xffffe2c0,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem1_2{
        using Addr = Register::Address<0xffffe2c4,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem2_2{
        using Addr = Register::Address<0xffffe2c8,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem3_2{
        using Addr = Register::Address<0xffffe2cc,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem4_2{
        using Addr = Register::Address<0xffffe2d0,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem5_2{
        using Addr = Register::Address<0xffffe2d4,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem6_2{
        using Addr = Register::Address<0xffffe2d8,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem7_2{
        using Addr = Register::Address<0xffffe2dc,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem8_2{
        using Addr = Register::Address<0xffffe2e0,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem9_2{
        using Addr = Register::Address<0xffffe2e4,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem10_2{
        using Addr = Register::Address<0xffffe2e8,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem11_2{
        using Addr = Register::Address<0xffffe2ec,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem0_3{
        using Addr = Register::Address<0xffffe300,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem1_3{
        using Addr = Register::Address<0xffffe304,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem2_3{
        using Addr = Register::Address<0xffffe308,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem3_3{
        using Addr = Register::Address<0xffffe30c,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem4_3{
        using Addr = Register::Address<0xffffe310,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem5_3{
        using Addr = Register::Address<0xffffe314,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem6_3{
        using Addr = Register::Address<0xffffe318,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem7_3{
        using Addr = Register::Address<0xffffe31c,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem8_3{
        using Addr = Register::Address<0xffffe320,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem9_3{
        using Addr = Register::Address<0xffffe324,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem10_3{
        using Addr = Register::Address<0xffffe328,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem11_3{
        using Addr = Register::Address<0xffffe32c,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem0_4{
        using Addr = Register::Address<0xffffe340,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem1_4{
        using Addr = Register::Address<0xffffe344,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem2_4{
        using Addr = Register::Address<0xffffe348,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem3_4{
        using Addr = Register::Address<0xffffe34c,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem4_4{
        using Addr = Register::Address<0xffffe350,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem5_4{
        using Addr = Register::Address<0xffffe354,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem6_4{
        using Addr = Register::Address<0xffffe358,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem7_4{
        using Addr = Register::Address<0xffffe35c,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem8_4{
        using Addr = Register::Address<0xffffe360,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem9_4{
        using Addr = Register::Address<0xffffe364,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem10_4{
        using Addr = Register::Address<0xffffe368,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem11_4{
        using Addr = Register::Address<0xffffe36c,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem0_5{
        using Addr = Register::Address<0xffffe380,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem1_5{
        using Addr = Register::Address<0xffffe384,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem2_5{
        using Addr = Register::Address<0xffffe388,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem3_5{
        using Addr = Register::Address<0xffffe38c,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem4_5{
        using Addr = Register::Address<0xffffe390,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem5_5{
        using Addr = Register::Address<0xffffe394,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem6_5{
        using Addr = Register::Address<0xffffe398,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem7_5{
        using Addr = Register::Address<0xffffe39c,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem8_5{
        using Addr = Register::Address<0xffffe3a0,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem9_5{
        using Addr = Register::Address<0xffffe3a4,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem10_5{
        using Addr = Register::Address<0xffffe3a8,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem11_5{
        using Addr = Register::Address<0xffffe3ac,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem0_6{
        using Addr = Register::Address<0xffffe3c0,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem1_6{
        using Addr = Register::Address<0xffffe3c4,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem2_6{
        using Addr = Register::Address<0xffffe3c8,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem3_6{
        using Addr = Register::Address<0xffffe3cc,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem4_6{
        using Addr = Register::Address<0xffffe3d0,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem5_6{
        using Addr = Register::Address<0xffffe3d4,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem6_6{
        using Addr = Register::Address<0xffffe3d8,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem7_6{
        using Addr = Register::Address<0xffffe3dc,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem8_6{
        using Addr = Register::Address<0xffffe3e0,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem9_6{
        using Addr = Register::Address<0xffffe3e4,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem10_6{
        using Addr = Register::Address<0xffffe3e8,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem11_6{
        using Addr = Register::Address<0xffffe3ec,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem0_7{
        using Addr = Register::Address<0xffffe400,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem1_7{
        using Addr = Register::Address<0xffffe404,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem2_7{
        using Addr = Register::Address<0xffffe408,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem3_7{
        using Addr = Register::Address<0xffffe40c,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem4_7{
        using Addr = Register::Address<0xffffe410,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem5_7{
        using Addr = Register::Address<0xffffe414,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem6_7{
        using Addr = Register::Address<0xffffe418,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem7_7{
        using Addr = Register::Address<0xffffe41c,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem8_7{
        using Addr = Register::Address<0xffffe420,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem9_7{
        using Addr = Register::Address<0xffffe424,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem10_7{
        using Addr = Register::Address<0xffffe428,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
    namespace PMECC_rem11_7{
        using Addr = Register::Address<0xffffe42c,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> REM2NP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> REM2NP3; 
    }
}
