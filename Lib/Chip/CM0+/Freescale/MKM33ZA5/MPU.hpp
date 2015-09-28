#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace MPU_cesr{
        using Addr = Register::Address<0x4000a000,0x3ff000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> NRGD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> NSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> HRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> SPERR; 
    }
    namespace MPU_ear0{
        using Addr = Register::Address<0x4000a010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> EADDR; 
    }
    namespace MPU_ear1{
        using Addr = Register::Address<0x4000a018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> EADDR; 
    }
    namespace MPU_edr0{
        using Addr = Register::Address<0x4000a014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> EATTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EMN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> EACD; 
    }
    namespace MPU_edr1{
        using Addr = Register::Address<0x4000a01c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> EATTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EMN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> EACD; 
    }
    namespace MPU_rgd0_word0{
        using Addr = Register::Address<0x4000a400,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> SRTADDR; 
    }
    namespace MPU_rgd1_word0{
        using Addr = Register::Address<0x4000a410,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> SRTADDR; 
    }
    namespace MPU_rgd2_word0{
        using Addr = Register::Address<0x4000a420,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> SRTADDR; 
    }
    namespace MPU_rgd3_word0{
        using Addr = Register::Address<0x4000a430,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> SRTADDR; 
    }
    namespace MPU_rgd4_word0{
        using Addr = Register::Address<0x4000a440,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> SRTADDR; 
    }
    namespace MPU_rgd5_word0{
        using Addr = Register::Address<0x4000a450,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> SRTADDR; 
    }
    namespace MPU_rgd6_word0{
        using Addr = Register::Address<0x4000a460,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> SRTADDR; 
    }
    namespace MPU_rgd7_word0{
        using Addr = Register::Address<0x4000a470,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> SRTADDR; 
    }
    namespace MPU_rgd0_word1{
        using Addr = Register::Address<0x4000a404,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> ENDADDR; 
    }
    namespace MPU_rgd1_word1{
        using Addr = Register::Address<0x4000a414,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> ENDADDR; 
    }
    namespace MPU_rgd2_word1{
        using Addr = Register::Address<0x4000a424,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> ENDADDR; 
    }
    namespace MPU_rgd3_word1{
        using Addr = Register::Address<0x4000a434,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> ENDADDR; 
    }
    namespace MPU_rgd4_word1{
        using Addr = Register::Address<0x4000a444,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> ENDADDR; 
    }
    namespace MPU_rgd5_word1{
        using Addr = Register::Address<0x4000a454,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> ENDADDR; 
    }
    namespace MPU_rgd6_word1{
        using Addr = Register::Address<0x4000a464,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> ENDADDR; 
    }
    namespace MPU_rgd7_word1{
        using Addr = Register::Address<0x4000a474,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> ENDADDR; 
    }
    namespace MPU_rgd0_word2{
        using Addr = Register::Address<0x4000a408,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M0PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> M1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> M2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> M3PE; 
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
        using Addr = Register::Address<0x4000a418,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M0PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> M1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> M2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> M3PE; 
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
        using Addr = Register::Address<0x4000a428,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M0PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> M1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> M2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> M3PE; 
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
        using Addr = Register::Address<0x4000a438,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M0PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> M1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> M2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> M3PE; 
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
        using Addr = Register::Address<0x4000a448,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M0PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> M1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> M2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> M3PE; 
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
        using Addr = Register::Address<0x4000a458,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M0PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> M1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> M2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> M3PE; 
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
        using Addr = Register::Address<0x4000a468,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M0PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> M1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> M2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> M3PE; 
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
        using Addr = Register::Address<0x4000a478,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M0PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> M1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> M2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> M3PE; 
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
        using Addr = Register::Address<0x4000a40c,0x0000fffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PIDMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PID; 
    }
    namespace MPU_rgd1_word3{
        using Addr = Register::Address<0x4000a41c,0x0000fffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PIDMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PID; 
    }
    namespace MPU_rgd2_word3{
        using Addr = Register::Address<0x4000a42c,0x0000fffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PIDMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PID; 
    }
    namespace MPU_rgd3_word3{
        using Addr = Register::Address<0x4000a43c,0x0000fffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PIDMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PID; 
    }
    namespace MPU_rgd4_word3{
        using Addr = Register::Address<0x4000a44c,0x0000fffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PIDMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PID; 
    }
    namespace MPU_rgd5_word3{
        using Addr = Register::Address<0x4000a45c,0x0000fffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PIDMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PID; 
    }
    namespace MPU_rgd6_word3{
        using Addr = Register::Address<0x4000a46c,0x0000fffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PIDMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PID; 
    }
    namespace MPU_rgd7_word3{
        using Addr = Register::Address<0x4000a47c,0x0000fffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PIDMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PID; 
    }
    namespace MPU_rgdaac0{
        using Addr = Register::Address<0x4000a800,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M0PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> M1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> M2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> M3PE; 
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
        using Addr = Register::Address<0x4000a804,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M0PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> M1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> M2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> M3PE; 
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
        using Addr = Register::Address<0x4000a808,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M0PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> M1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> M2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> M3PE; 
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
        using Addr = Register::Address<0x4000a80c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M0PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> M1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> M2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> M3PE; 
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
        using Addr = Register::Address<0x4000a810,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M0PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> M1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> M2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> M3PE; 
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
        using Addr = Register::Address<0x4000a814,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M0PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> M1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> M2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> M3PE; 
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
        using Addr = Register::Address<0x4000a818,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M0PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> M1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> M2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> M3PE; 
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
        using Addr = Register::Address<0x4000a81c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> M0SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M0PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> M1UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> M1SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> M1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M2UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> M2SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> M2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> M3UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> M3SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> M3PE; 
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
