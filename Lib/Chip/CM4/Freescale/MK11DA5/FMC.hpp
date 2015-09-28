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
        using Addr = Register::Address<0x4001f100,0xfff8000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,4)> tag; 
    }
    namespace FMC_tagvdw0s1{
        using Addr = Register::Address<0x4001f104,0xfff8000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,4)> tag; 
    }
    namespace FMC_tagvdw1s0{
        using Addr = Register::Address<0x4001f108,0xfff8000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,4)> tag; 
    }
    namespace FMC_tagvdw1s1{
        using Addr = Register::Address<0x4001f10c,0xfff8000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,4)> tag; 
    }
    namespace FMC_tagvdw2s0{
        using Addr = Register::Address<0x4001f110,0xfff8000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,4)> tag; 
    }
    namespace FMC_tagvdw2s1{
        using Addr = Register::Address<0x4001f114,0xfff8000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,4)> tag; 
    }
    namespace FMC_tagvdw3s0{
        using Addr = Register::Address<0x4001f118,0xfff8000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,4)> tag; 
    }
    namespace FMC_tagvdw3s1{
        using Addr = Register::Address<0x4001f11c,0xfff8000e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,4)> tag; 
    }
    namespace FMC_dataw0s0u{
        using Addr = Register::Address<0x4001f200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s1u{
        using Addr = Register::Address<0x4001f208,0x00000000>;
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
    namespace FMC_dataw1s0u{
        using Addr = Register::Address<0x4001f210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s1u{
        using Addr = Register::Address<0x4001f218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s0l{
        using Addr = Register::Address<0x4001f214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s1l{
        using Addr = Register::Address<0x4001f21c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s0u{
        using Addr = Register::Address<0x4001f220,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s1u{
        using Addr = Register::Address<0x4001f228,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s0l{
        using Addr = Register::Address<0x4001f224,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s1l{
        using Addr = Register::Address<0x4001f22c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s0u{
        using Addr = Register::Address<0x4001f230,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s1u{
        using Addr = Register::Address<0x4001f238,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s0l{
        using Addr = Register::Address<0x4001f234,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s1l{
        using Addr = Register::Address<0x4001f23c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
}
