#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneadc_rst{
        using Addr = Register::Address<0x40010004,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADRST; 
    }
    namespace Noneadc_conv{
        using Addr = Register::Address<0x40010008,0xfff8f8fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> ADSEQL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> ADSUBL; 
    }
    namespace Noneadc_lst0{
        using Addr = Register::Address<0x40010010,0xe0e0e0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ADSEQ0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> ADSEQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> ADSEQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> ADSEQ3; 
    }
    namespace Noneadc_lst1{
        using Addr = Register::Address<0x40010014,0xe0e0e0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ADSEQ4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> ADSEQ5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> ADSEQ6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> ADSEQ7; 
    }
    namespace Noneadc_str0{
        using Addr = Register::Address<0x40010070,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADST0; 
    }
    namespace Noneadc_str1{
        using Addr = Register::Address<0x40010074,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADST1; 
    }
    namespace Noneadc_str2{
        using Addr = Register::Address<0x40010078,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADST2; 
    }
    namespace Noneadc_str3{
        using Addr = Register::Address<0x4001007c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADST3; 
    }
    namespace Noneadc_str4{
        using Addr = Register::Address<0x40010080,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADST4; 
    }
    namespace Noneadc_str5{
        using Addr = Register::Address<0x40010084,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADST5; 
    }
    namespace Noneadc_str6{
        using Addr = Register::Address<0x40010088,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADST6; 
    }
    namespace Noneadc_str7{
        using Addr = Register::Address<0x4001008c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADST7; 
    }
    namespace Noneadc_dr0{
        using Addr = Register::Address<0x400100b0,0x7fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ADVLD0; 
    }
    namespace Noneadc_dr1{
        using Addr = Register::Address<0x400100b4,0x7fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ADVLD1; 
    }
    namespace Noneadc_dr2{
        using Addr = Register::Address<0x400100b8,0x7fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ADVLD2; 
    }
    namespace Noneadc_dr3{
        using Addr = Register::Address<0x400100bc,0x7fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ADVLD3; 
    }
    namespace Noneadc_dr4{
        using Addr = Register::Address<0x400100c0,0x7fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ADVLD4; 
    }
    namespace Noneadc_dr5{
        using Addr = Register::Address<0x400100c4,0x7fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ADVLD5; 
    }
    namespace Noneadc_dr6{
        using Addr = Register::Address<0x400100c8,0x7fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ADVLD6; 
    }
    namespace Noneadc_dr7{
        using Addr = Register::Address<0x400100cc,0x7fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ADVLD7; 
    }
    namespace Noneadc_tcr{
        using Addr = Register::Address<0x40010100,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADEXTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GPTM; 
    }
    namespace Noneadc_tsr{
        using Addr = Register::Address<0x40010104,0xf8f8f0fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ADEXTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> GPTMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> GPTME; 
    }
    namespace Noneadc_wcr{
        using Addr = Register::Address<0x40010120,0xf0f0f0f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADWLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADWUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ADWCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> ADLCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> ADUCH; 
    }
    namespace Noneadc_ltr{
        using Addr = Register::Address<0x40010124,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADLT; 
    }
    namespace Noneadc_utr{
        using Addr = Register::Address<0x40010128,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADUT; 
    }
    namespace Noneadc_imr{
        using Addr = Register::Address<0x40010130,0xfefcfff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADIMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADIMG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADIMC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADIML; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADIMU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ADIMO; 
    }
    namespace Noneadc_iraw{
        using Addr = Register::Address<0x40010134,0xfefcfff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADIRAWS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADIRAWG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADIRAWC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADIRAWL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADIRAWU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ADIRAWO; 
    }
    namespace Noneadc_imask{
        using Addr = Register::Address<0x40010138,0xfefcfff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADIMASKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADIMASKG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADIMASKC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADIMASKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADIMASKU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ADIMASKO; 
    }
    namespace Noneadc_iclr{
        using Addr = Register::Address<0x4001013c,0xfefcfff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADICLRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADICLRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADICLRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADICLRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADICLRU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ADICLRO; 
    }
}
