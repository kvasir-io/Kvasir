#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FMC_pfapr{
        using Addr = Register::Address<0x4001f000,0xfff0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> M1AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M2AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> M3AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> M0PFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> M1PFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> M2PFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> M3PFD; 
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
    namespace FMC_tagvdw0s0{
        using Addr = Register::Address<0x4001f100,0xfff8003e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,6)> tag; 
    }
    namespace FMC_tagvdw0s1{
        using Addr = Register::Address<0x4001f104,0xfff8003e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,6)> tag; 
    }
    namespace FMC_tagvdw1s0{
        using Addr = Register::Address<0x4001f120,0xfff8003e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,6)> tag; 
    }
    namespace FMC_tagvdw1s1{
        using Addr = Register::Address<0x4001f124,0xfff8003e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,6)> tag; 
    }
    namespace FMC_tagvdw2s0{
        using Addr = Register::Address<0x4001f140,0xfff8003e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,6)> tag; 
    }
    namespace FMC_tagvdw2s1{
        using Addr = Register::Address<0x4001f144,0xfff8003e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,6)> tag; 
    }
    namespace FMC_tagvdw3s0{
        using Addr = Register::Address<0x4001f160,0xfff8003e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,6)> tag; 
    }
    namespace FMC_tagvdw3s1{
        using Addr = Register::Address<0x4001f164,0xfff8003e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> valid; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,6)> tag; 
    }
    namespace FMC_dataw0s0{
        using Addr = Register::Address<0x4001f204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw0s1{
        using Addr = Register::Address<0x4001f20c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s0{
        using Addr = Register::Address<0x4001f244,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw1s1{
        using Addr = Register::Address<0x4001f24c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s0{
        using Addr = Register::Address<0x4001f284,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw2s1{
        using Addr = Register::Address<0x4001f28c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s0{
        using Addr = Register::Address<0x4001f2c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
    namespace FMC_dataw3s1{
        using Addr = Register::Address<0x4001f2cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> data; 
    }
}
