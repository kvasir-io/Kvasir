#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FMC_pfapr{
        using Addr = Register::Address<0x4001f000,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> M1AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M2AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> M3AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M4AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> M5AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M6AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> M7AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> M0PFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> M1PFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> M2PFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> M3PFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> M4PFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> M5PFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> M6PFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> M7PFD; 
    }
    namespace FMC_pfb0cr{
        using Addr = Register::Address<0x4001f004,0x0001ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> B0SEBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> B0IPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> B0DPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> B0ICE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> B0DCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> CRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> B0MW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> S_B_INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CINV_WAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CLCK_WAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> B0RWSC; 
    }
    namespace FMC_pfb1cr{
        using Addr = Register::Address<0x4001f008,0x0ff9ffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> B1SEBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> B1IPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> B1DPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> B1ICE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> B1DCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> B1MW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> B1RWSC; 
    }
    namespace FMC_tagvdw0s0{
        using Addr = Register::Address<0x4001f100,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw0s1{
        using Addr = Register::Address<0x4001f104,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw0s2{
        using Addr = Register::Address<0x4001f108,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw0s3{
        using Addr = Register::Address<0x4001f10c,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw0s4{
        using Addr = Register::Address<0x4001f110,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw0s5{
        using Addr = Register::Address<0x4001f114,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw0s6{
        using Addr = Register::Address<0x4001f118,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw0s7{
        using Addr = Register::Address<0x4001f11c,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw1s0{
        using Addr = Register::Address<0x4001f120,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw1s1{
        using Addr = Register::Address<0x4001f124,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw1s2{
        using Addr = Register::Address<0x4001f128,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw1s3{
        using Addr = Register::Address<0x4001f12c,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw1s4{
        using Addr = Register::Address<0x4001f130,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw1s5{
        using Addr = Register::Address<0x4001f134,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw1s6{
        using Addr = Register::Address<0x4001f138,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw1s7{
        using Addr = Register::Address<0x4001f13c,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw2s0{
        using Addr = Register::Address<0x4001f140,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw2s1{
        using Addr = Register::Address<0x4001f144,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw2s2{
        using Addr = Register::Address<0x4001f148,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw2s3{
        using Addr = Register::Address<0x4001f14c,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw2s4{
        using Addr = Register::Address<0x4001f150,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw2s5{
        using Addr = Register::Address<0x4001f154,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw2s6{
        using Addr = Register::Address<0x4001f158,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw2s7{
        using Addr = Register::Address<0x4001f15c,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw3s0{
        using Addr = Register::Address<0x4001f160,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw3s1{
        using Addr = Register::Address<0x4001f164,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw3s2{
        using Addr = Register::Address<0x4001f168,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw3s3{
        using Addr = Register::Address<0x4001f16c,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw3s4{
        using Addr = Register::Address<0x4001f170,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw3s5{
        using Addr = Register::Address<0x4001f174,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw3s6{
        using Addr = Register::Address<0x4001f178,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_tagvdw3s7{
        using Addr = Register::Address<0x4001f17c,0xfff8001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5)> tag; 
    }
    namespace FMC_dataw0s0u{
        using Addr = Register::Address<0x4001f200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s1u{
        using Addr = Register::Address<0x4001f208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s2u{
        using Addr = Register::Address<0x4001f210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s3u{
        using Addr = Register::Address<0x4001f218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s4u{
        using Addr = Register::Address<0x4001f220,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s5u{
        using Addr = Register::Address<0x4001f228,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s6u{
        using Addr = Register::Address<0x4001f230,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s7u{
        using Addr = Register::Address<0x4001f238,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s0l{
        using Addr = Register::Address<0x4001f204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s1l{
        using Addr = Register::Address<0x4001f20c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s2l{
        using Addr = Register::Address<0x4001f214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s3l{
        using Addr = Register::Address<0x4001f21c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s4l{
        using Addr = Register::Address<0x4001f224,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s5l{
        using Addr = Register::Address<0x4001f22c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s6l{
        using Addr = Register::Address<0x4001f234,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s7l{
        using Addr = Register::Address<0x4001f23c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s0u{
        using Addr = Register::Address<0x4001f240,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s1u{
        using Addr = Register::Address<0x4001f248,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s2u{
        using Addr = Register::Address<0x4001f250,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s3u{
        using Addr = Register::Address<0x4001f258,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s4u{
        using Addr = Register::Address<0x4001f260,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s5u{
        using Addr = Register::Address<0x4001f268,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s6u{
        using Addr = Register::Address<0x4001f270,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s7u{
        using Addr = Register::Address<0x4001f278,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s0l{
        using Addr = Register::Address<0x4001f244,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s1l{
        using Addr = Register::Address<0x4001f24c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s2l{
        using Addr = Register::Address<0x4001f254,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s3l{
        using Addr = Register::Address<0x4001f25c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s4l{
        using Addr = Register::Address<0x4001f264,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s5l{
        using Addr = Register::Address<0x4001f26c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s6l{
        using Addr = Register::Address<0x4001f274,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s7l{
        using Addr = Register::Address<0x4001f27c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s0u{
        using Addr = Register::Address<0x4001f280,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s1u{
        using Addr = Register::Address<0x4001f288,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s2u{
        using Addr = Register::Address<0x4001f290,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s3u{
        using Addr = Register::Address<0x4001f298,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s4u{
        using Addr = Register::Address<0x4001f2a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s5u{
        using Addr = Register::Address<0x4001f2a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s6u{
        using Addr = Register::Address<0x4001f2b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s7u{
        using Addr = Register::Address<0x4001f2b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s0l{
        using Addr = Register::Address<0x4001f284,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s1l{
        using Addr = Register::Address<0x4001f28c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s2l{
        using Addr = Register::Address<0x4001f294,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s3l{
        using Addr = Register::Address<0x4001f29c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s4l{
        using Addr = Register::Address<0x4001f2a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s5l{
        using Addr = Register::Address<0x4001f2ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s6l{
        using Addr = Register::Address<0x4001f2b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s7l{
        using Addr = Register::Address<0x4001f2bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s0u{
        using Addr = Register::Address<0x4001f2c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s1u{
        using Addr = Register::Address<0x4001f2c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s2u{
        using Addr = Register::Address<0x4001f2d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s3u{
        using Addr = Register::Address<0x4001f2d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s4u{
        using Addr = Register::Address<0x4001f2e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s5u{
        using Addr = Register::Address<0x4001f2e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s6u{
        using Addr = Register::Address<0x4001f2f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s7u{
        using Addr = Register::Address<0x4001f2f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s0l{
        using Addr = Register::Address<0x4001f2c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s1l{
        using Addr = Register::Address<0x4001f2cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s2l{
        using Addr = Register::Address<0x4001f2d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s3l{
        using Addr = Register::Address<0x4001f2dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s4l{
        using Addr = Register::Address<0x4001f2e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s5l{
        using Addr = Register::Address<0x4001f2ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s6l{
        using Addr = Register::Address<0x4001f2f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s7l{
        using Addr = Register::Address<0x4001f2fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
}
