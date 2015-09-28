#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace MPU_cesr{
        using Addr = Register::Address<0x4000d000,0x07f000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> NRGD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> NSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> HRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,27)> SPERR; 
    }
    namespace MPU_ear0{
        using Addr = Register::Address<0x4000d010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> EADDR; 
    }
    namespace MPU_ear1{
        using Addr = Register::Address<0x4000d018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> EADDR; 
    }
    namespace MPU_ear2{
        using Addr = Register::Address<0x4000d020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> EADDR; 
    }
    namespace MPU_ear3{
        using Addr = Register::Address<0x4000d028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> EADDR; 
    }
    namespace MPU_ear4{
        using Addr = Register::Address<0x4000d030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> EADDR; 
    }
    namespace MPU_edr0{
        using Addr = Register::Address<0x4000d014,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> EATTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EMN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> EACD; 
    }
    namespace MPU_edr1{
        using Addr = Register::Address<0x4000d01c,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> EATTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EMN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> EACD; 
    }
    namespace MPU_edr2{
        using Addr = Register::Address<0x4000d024,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> EATTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EMN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> EACD; 
    }
    namespace MPU_edr3{
        using Addr = Register::Address<0x4000d02c,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> EATTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EMN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> EACD; 
    }
    namespace MPU_edr4{
        using Addr = Register::Address<0x4000d034,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> EATTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EMN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> EACD; 
    }
    namespace MPU_rgd0_word0{
        using Addr = Register::Address<0x4000d400,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> SRTADDR; 
    }
    namespace MPU_rgd1_word0{
        using Addr = Register::Address<0x4000d410,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> SRTADDR; 
    }
    namespace MPU_rgd2_word0{
        using Addr = Register::Address<0x4000d420,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> SRTADDR; 
    }
    namespace MPU_rgd3_word0{
        using Addr = Register::Address<0x4000d430,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> SRTADDR; 
    }
    namespace MPU_rgd4_word0{
        using Addr = Register::Address<0x4000d440,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> SRTADDR; 
    }
    namespace MPU_rgd5_word0{
        using Addr = Register::Address<0x4000d450,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> SRTADDR; 
    }
    namespace MPU_rgd6_word0{
        using Addr = Register::Address<0x4000d460,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> SRTADDR; 
    }
    namespace MPU_rgd7_word0{
        using Addr = Register::Address<0x4000d470,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> SRTADDR; 
    }
    namespace MPU_rgd0_word1{
        using Addr = Register::Address<0x4000d404,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> ENDADDR; 
    }
    namespace MPU_rgd1_word1{
        using Addr = Register::Address<0x4000d414,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> ENDADDR; 
    }
    namespace MPU_rgd2_word1{
        using Addr = Register::Address<0x4000d424,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> ENDADDR; 
    }
    namespace MPU_rgd3_word1{
        using Addr = Register::Address<0x4000d434,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> ENDADDR; 
    }
    namespace MPU_rgd4_word1{
        using Addr = Register::Address<0x4000d444,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> ENDADDR; 
    }
    namespace MPU_rgd5_word1{
        using Addr = Register::Address<0x4000d454,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> ENDADDR; 
    }
    namespace MPU_rgd6_word1{
        using Addr = Register::Address<0x4000d464,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> ENDADDR; 
    }
    namespace MPU_rgd7_word1{
        using Addr = Register::Address<0x4000d474,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> ENDADDR; 
    }
    namespace MPU_rgd0_word2{
        using Addr = Register::Address<0x4000d408,0x00820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> M4WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> M4RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> M5WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> M5RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> M6WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> M6RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> M7WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> M7RE; 
    }
    namespace MPU_rgd1_word2{
        using Addr = Register::Address<0x4000d418,0x00820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> M4WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> M4RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> M5WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> M5RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> M6WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> M6RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> M7WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> M7RE; 
    }
    namespace MPU_rgd2_word2{
        using Addr = Register::Address<0x4000d428,0x00820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> M4WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> M4RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> M5WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> M5RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> M6WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> M6RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> M7WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> M7RE; 
    }
    namespace MPU_rgd3_word2{
        using Addr = Register::Address<0x4000d438,0x00820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> M4WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> M4RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> M5WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> M5RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> M6WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> M6RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> M7WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> M7RE; 
    }
    namespace MPU_rgd4_word2{
        using Addr = Register::Address<0x4000d448,0x00820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> M4WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> M4RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> M5WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> M5RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> M6WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> M6RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> M7WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> M7RE; 
    }
    namespace MPU_rgd5_word2{
        using Addr = Register::Address<0x4000d458,0x00820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> M4WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> M4RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> M5WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> M5RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> M6WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> M6RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> M7WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> M7RE; 
    }
    namespace MPU_rgd6_word2{
        using Addr = Register::Address<0x4000d468,0x00820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> M4WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> M4RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> M5WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> M5RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> M6WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> M6RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> M7WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> M7RE; 
    }
    namespace MPU_rgd7_word2{
        using Addr = Register::Address<0x4000d478,0x00820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> M4WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> M4RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> M5WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> M5RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> M6WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> M6RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> M7WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> M7RE; 
    }
    namespace MPU_rgd0_word3{
        using Addr = Register::Address<0x4000d40c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VLD; 
    }
    namespace MPU_rgd1_word3{
        using Addr = Register::Address<0x4000d41c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VLD; 
    }
    namespace MPU_rgd2_word3{
        using Addr = Register::Address<0x4000d42c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VLD; 
    }
    namespace MPU_rgd3_word3{
        using Addr = Register::Address<0x4000d43c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VLD; 
    }
    namespace MPU_rgd4_word3{
        using Addr = Register::Address<0x4000d44c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VLD; 
    }
    namespace MPU_rgd5_word3{
        using Addr = Register::Address<0x4000d45c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VLD; 
    }
    namespace MPU_rgd6_word3{
        using Addr = Register::Address<0x4000d46c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VLD; 
    }
    namespace MPU_rgd7_word3{
        using Addr = Register::Address<0x4000d47c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VLD; 
    }
    namespace MPU_rgdaac0{
        using Addr = Register::Address<0x4000d800,0x00820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> M4WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> M4RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> M5WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> M5RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> M6WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> M6RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> M7WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> M7RE; 
    }
    namespace MPU_rgdaac1{
        using Addr = Register::Address<0x4000d804,0x00820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> M4WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> M4RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> M5WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> M5RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> M6WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> M6RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> M7WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> M7RE; 
    }
    namespace MPU_rgdaac2{
        using Addr = Register::Address<0x4000d808,0x00820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> M4WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> M4RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> M5WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> M5RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> M6WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> M6RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> M7WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> M7RE; 
    }
    namespace MPU_rgdaac3{
        using Addr = Register::Address<0x4000d80c,0x00820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> M4WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> M4RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> M5WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> M5RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> M6WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> M6RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> M7WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> M7RE; 
    }
    namespace MPU_rgdaac4{
        using Addr = Register::Address<0x4000d810,0x00820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> M4WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> M4RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> M5WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> M5RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> M6WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> M6RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> M7WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> M7RE; 
    }
    namespace MPU_rgdaac5{
        using Addr = Register::Address<0x4000d814,0x00820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> M4WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> M4RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> M5WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> M5RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> M6WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> M6RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> M7WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> M7RE; 
    }
    namespace MPU_rgdaac6{
        using Addr = Register::Address<0x4000d818,0x00820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> M4WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> M4RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> M5WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> M5RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> M6WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> M6RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> M7WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> M7RE; 
    }
    namespace MPU_rgdaac7{
        using Addr = Register::Address<0x4000d81c,0x00820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> M4WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> M4RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> M5WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> M5RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> M6WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> M6RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> M7WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> M7RE; 
    }
}
