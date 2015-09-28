#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FMC_pfapr{
        using Addr = Register::Address<0x4001f000,0xfff8ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> M1AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M2AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> M0PFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> M1PFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> M2PFD; 
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
        using Addr = Register::Address<0x4001f008,0xffffffff>;
    }
    namespace FMC_tagvdw0s0{
        using Addr = Register::Address<0x4001f100,0xfff0001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,5)> cache_tag; 
    }
    namespace FMC_tagvdw0s1{
        using Addr = Register::Address<0x4001f104,0xfff0001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,5)> cache_tag; 
    }
    namespace FMC_tagvdw1s0{
        using Addr = Register::Address<0x4001f108,0xfff0001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,5)> cache_tag; 
    }
    namespace FMC_tagvdw1s1{
        using Addr = Register::Address<0x4001f10c,0xfff0001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,5)> cache_tag; 
    }
    namespace FMC_tagvdw2s0{
        using Addr = Register::Address<0x4001f110,0xfff0001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,5)> cache_tag; 
    }
    namespace FMC_tagvdw2s1{
        using Addr = Register::Address<0x4001f114,0xfff0001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,5)> cache_tag; 
    }
    namespace FMC_tagvdw3s0{
        using Addr = Register::Address<0x4001f118,0xfff0001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,5)> cache_tag; 
    }
    namespace FMC_tagvdw3s1{
        using Addr = Register::Address<0x4001f11c,0xfff0001e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,5)> cache_tag; 
    }
    namespace FMC_dataw0s0um{
        using Addr = Register::Address<0x4001f200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s1um{
        using Addr = Register::Address<0x4001f210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s0mu{
        using Addr = Register::Address<0x4001f204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s1mu{
        using Addr = Register::Address<0x4001f214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s0ml{
        using Addr = Register::Address<0x4001f208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s1ml{
        using Addr = Register::Address<0x4001f218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s0lm{
        using Addr = Register::Address<0x4001f20c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s1lm{
        using Addr = Register::Address<0x4001f21c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s0um{
        using Addr = Register::Address<0x4001f240,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s1um{
        using Addr = Register::Address<0x4001f250,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s0mu{
        using Addr = Register::Address<0x4001f244,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s1mu{
        using Addr = Register::Address<0x4001f254,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s0ml{
        using Addr = Register::Address<0x4001f248,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s1ml{
        using Addr = Register::Address<0x4001f258,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s0lm{
        using Addr = Register::Address<0x4001f24c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s1lm{
        using Addr = Register::Address<0x4001f25c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s0um{
        using Addr = Register::Address<0x4001f280,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s1um{
        using Addr = Register::Address<0x4001f290,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s0mu{
        using Addr = Register::Address<0x4001f284,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s1mu{
        using Addr = Register::Address<0x4001f294,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s0ml{
        using Addr = Register::Address<0x4001f288,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s1ml{
        using Addr = Register::Address<0x4001f298,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s0lm{
        using Addr = Register::Address<0x4001f28c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s1lm{
        using Addr = Register::Address<0x4001f29c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s0um{
        using Addr = Register::Address<0x4001f2c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s1um{
        using Addr = Register::Address<0x4001f2d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s0mu{
        using Addr = Register::Address<0x4001f2c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s1mu{
        using Addr = Register::Address<0x4001f2d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s0ml{
        using Addr = Register::Address<0x4001f2c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s1ml{
        using Addr = Register::Address<0x4001f2d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s0lm{
        using Addr = Register::Address<0x4001f2cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s1lm{
        using Addr = Register::Address<0x4001f2dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
}
