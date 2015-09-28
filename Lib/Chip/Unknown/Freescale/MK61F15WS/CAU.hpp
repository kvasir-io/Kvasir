#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecau_direct0{
        using Addr = Register::Address<0xe0081000,0xffffffff>;
    }
    namespace Nonecau_direct1{
        using Addr = Register::Address<0xe0081004,0xffffffff>;
    }
    namespace Nonecau_direct2{
        using Addr = Register::Address<0xe0081008,0xffffffff>;
    }
    namespace Nonecau_direct3{
        using Addr = Register::Address<0xe008100c,0xffffffff>;
    }
    namespace Nonecau_direct4{
        using Addr = Register::Address<0xe0081010,0xffffffff>;
    }
    namespace Nonecau_direct5{
        using Addr = Register::Address<0xe0081014,0xffffffff>;
    }
    namespace Nonecau_direct6{
        using Addr = Register::Address<0xe0081018,0xffffffff>;
    }
    namespace Nonecau_direct7{
        using Addr = Register::Address<0xe008101c,0xffffffff>;
    }
    namespace Nonecau_direct8{
        using Addr = Register::Address<0xe0081020,0xffffffff>;
    }
    namespace Nonecau_direct9{
        using Addr = Register::Address<0xe0081024,0xffffffff>;
    }
    namespace Nonecau_direct10{
        using Addr = Register::Address<0xe0081028,0xffffffff>;
    }
    namespace Nonecau_direct11{
        using Addr = Register::Address<0xe008102c,0xffffffff>;
    }
    namespace Nonecau_direct12{
        using Addr = Register::Address<0xe0081030,0xffffffff>;
    }
    namespace Nonecau_direct13{
        using Addr = Register::Address<0xe0081034,0xffffffff>;
    }
    namespace Nonecau_direct14{
        using Addr = Register::Address<0xe0081038,0xffffffff>;
    }
    namespace Nonecau_direct15{
        using Addr = Register::Address<0xe008103c,0xffffffff>;
    }
    namespace Nonecau_ldr_casr{
        using Addr = Register::Address<0xe0081840,0x0ffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> VER; 
    }
    namespace Nonecau_ldr_caa{
        using Addr = Register::Address<0xe0081844,0xffffffff>;
    }
    namespace Nonecau_ldr_ca0{
        using Addr = Register::Address<0xe0081848,0xffffffff>;
    }
    namespace Nonecau_ldr_ca1{
        using Addr = Register::Address<0xe008184c,0xffffffff>;
    }
    namespace Nonecau_ldr_ca2{
        using Addr = Register::Address<0xe0081850,0xffffffff>;
    }
    namespace Nonecau_ldr_ca3{
        using Addr = Register::Address<0xe0081854,0xffffffff>;
    }
    namespace Nonecau_ldr_ca4{
        using Addr = Register::Address<0xe0081858,0xffffffff>;
    }
    namespace Nonecau_ldr_ca5{
        using Addr = Register::Address<0xe008185c,0xffffffff>;
    }
    namespace Nonecau_ldr_ca6{
        using Addr = Register::Address<0xe0081860,0xffffffff>;
    }
    namespace Nonecau_ldr_ca7{
        using Addr = Register::Address<0xe0081864,0xffffffff>;
    }
    namespace Nonecau_ldr_ca8{
        using Addr = Register::Address<0xe0081868,0xffffffff>;
    }
    namespace Nonecau_str_casr{
        using Addr = Register::Address<0xe0081880,0x0ffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> VER; 
    }
    namespace Nonecau_str_caa{
        using Addr = Register::Address<0xe0081884,0xffffffff>;
    }
    namespace Nonecau_str_ca0{
        using Addr = Register::Address<0xe0081888,0xffffffff>;
    }
    namespace Nonecau_str_ca1{
        using Addr = Register::Address<0xe008188c,0xffffffff>;
    }
    namespace Nonecau_str_ca2{
        using Addr = Register::Address<0xe0081890,0xffffffff>;
    }
    namespace Nonecau_str_ca3{
        using Addr = Register::Address<0xe0081894,0xffffffff>;
    }
    namespace Nonecau_str_ca4{
        using Addr = Register::Address<0xe0081898,0xffffffff>;
    }
    namespace Nonecau_str_ca5{
        using Addr = Register::Address<0xe008189c,0xffffffff>;
    }
    namespace Nonecau_str_ca6{
        using Addr = Register::Address<0xe00818a0,0xffffffff>;
    }
    namespace Nonecau_str_ca7{
        using Addr = Register::Address<0xe00818a4,0xffffffff>;
    }
    namespace Nonecau_str_ca8{
        using Addr = Register::Address<0xe00818a8,0xffffffff>;
    }
    namespace Nonecau_adr_casr{
        using Addr = Register::Address<0xe00818c0,0x0ffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> VER; 
    }
    namespace Nonecau_adr_caa{
        using Addr = Register::Address<0xe00818c4,0xffffffff>;
    }
    namespace Nonecau_adr_ca0{
        using Addr = Register::Address<0xe00818c8,0xffffffff>;
    }
    namespace Nonecau_adr_ca1{
        using Addr = Register::Address<0xe00818cc,0xffffffff>;
    }
    namespace Nonecau_adr_ca2{
        using Addr = Register::Address<0xe00818d0,0xffffffff>;
    }
    namespace Nonecau_adr_ca3{
        using Addr = Register::Address<0xe00818d4,0xffffffff>;
    }
    namespace Nonecau_adr_ca4{
        using Addr = Register::Address<0xe00818d8,0xffffffff>;
    }
    namespace Nonecau_adr_ca5{
        using Addr = Register::Address<0xe00818dc,0xffffffff>;
    }
    namespace Nonecau_adr_ca6{
        using Addr = Register::Address<0xe00818e0,0xffffffff>;
    }
    namespace Nonecau_adr_ca7{
        using Addr = Register::Address<0xe00818e4,0xffffffff>;
    }
    namespace Nonecau_adr_ca8{
        using Addr = Register::Address<0xe00818e8,0xffffffff>;
    }
    namespace Nonecau_radr_casr{
        using Addr = Register::Address<0xe0081900,0x0ffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> VER; 
    }
    namespace Nonecau_radr_caa{
        using Addr = Register::Address<0xe0081904,0xffffffff>;
    }
    namespace Nonecau_radr_ca0{
        using Addr = Register::Address<0xe0081908,0xffffffff>;
    }
    namespace Nonecau_radr_ca1{
        using Addr = Register::Address<0xe008190c,0xffffffff>;
    }
    namespace Nonecau_radr_ca2{
        using Addr = Register::Address<0xe0081910,0xffffffff>;
    }
    namespace Nonecau_radr_ca3{
        using Addr = Register::Address<0xe0081914,0xffffffff>;
    }
    namespace Nonecau_radr_ca4{
        using Addr = Register::Address<0xe0081918,0xffffffff>;
    }
    namespace Nonecau_radr_ca5{
        using Addr = Register::Address<0xe008191c,0xffffffff>;
    }
    namespace Nonecau_radr_ca6{
        using Addr = Register::Address<0xe0081920,0xffffffff>;
    }
    namespace Nonecau_radr_ca7{
        using Addr = Register::Address<0xe0081924,0xffffffff>;
    }
    namespace Nonecau_radr_ca8{
        using Addr = Register::Address<0xe0081928,0xffffffff>;
    }
    namespace Nonecau_xor_casr{
        using Addr = Register::Address<0xe0081980,0x0ffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> VER; 
    }
    namespace Nonecau_xor_caa{
        using Addr = Register::Address<0xe0081984,0xffffffff>;
    }
    namespace Nonecau_xor_ca0{
        using Addr = Register::Address<0xe0081988,0xffffffff>;
    }
    namespace Nonecau_xor_ca1{
        using Addr = Register::Address<0xe008198c,0xffffffff>;
    }
    namespace Nonecau_xor_ca2{
        using Addr = Register::Address<0xe0081990,0xffffffff>;
    }
    namespace Nonecau_xor_ca3{
        using Addr = Register::Address<0xe0081994,0xffffffff>;
    }
    namespace Nonecau_xor_ca4{
        using Addr = Register::Address<0xe0081998,0xffffffff>;
    }
    namespace Nonecau_xor_ca5{
        using Addr = Register::Address<0xe008199c,0xffffffff>;
    }
    namespace Nonecau_xor_ca6{
        using Addr = Register::Address<0xe00819a0,0xffffffff>;
    }
    namespace Nonecau_xor_ca7{
        using Addr = Register::Address<0xe00819a4,0xffffffff>;
    }
    namespace Nonecau_xor_ca8{
        using Addr = Register::Address<0xe00819a8,0xffffffff>;
    }
    namespace Nonecau_rotl_casr{
        using Addr = Register::Address<0xe00819c0,0x0ffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> VER; 
    }
    namespace Nonecau_rotl_caa{
        using Addr = Register::Address<0xe00819c4,0xffffffff>;
    }
    namespace Nonecau_rotl_ca0{
        using Addr = Register::Address<0xe00819c8,0xffffffff>;
    }
    namespace Nonecau_rotl_ca1{
        using Addr = Register::Address<0xe00819cc,0xffffffff>;
    }
    namespace Nonecau_rotl_ca2{
        using Addr = Register::Address<0xe00819d0,0xffffffff>;
    }
    namespace Nonecau_rotl_ca3{
        using Addr = Register::Address<0xe00819d4,0xffffffff>;
    }
    namespace Nonecau_rotl_ca4{
        using Addr = Register::Address<0xe00819d8,0xffffffff>;
    }
    namespace Nonecau_rotl_ca5{
        using Addr = Register::Address<0xe00819dc,0xffffffff>;
    }
    namespace Nonecau_rotl_ca6{
        using Addr = Register::Address<0xe00819e0,0xffffffff>;
    }
    namespace Nonecau_rotl_ca7{
        using Addr = Register::Address<0xe00819e4,0xffffffff>;
    }
    namespace Nonecau_rotl_ca8{
        using Addr = Register::Address<0xe00819e8,0xffffffff>;
    }
    namespace Nonecau_aesc_casr{
        using Addr = Register::Address<0xe0081b00,0x0ffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> VER; 
    }
    namespace Nonecau_aesc_caa{
        using Addr = Register::Address<0xe0081b04,0xffffffff>;
    }
    namespace Nonecau_aesc_ca0{
        using Addr = Register::Address<0xe0081b08,0xffffffff>;
    }
    namespace Nonecau_aesc_ca1{
        using Addr = Register::Address<0xe0081b0c,0xffffffff>;
    }
    namespace Nonecau_aesc_ca2{
        using Addr = Register::Address<0xe0081b10,0xffffffff>;
    }
    namespace Nonecau_aesc_ca3{
        using Addr = Register::Address<0xe0081b14,0xffffffff>;
    }
    namespace Nonecau_aesc_ca4{
        using Addr = Register::Address<0xe0081b18,0xffffffff>;
    }
    namespace Nonecau_aesc_ca5{
        using Addr = Register::Address<0xe0081b1c,0xffffffff>;
    }
    namespace Nonecau_aesc_ca6{
        using Addr = Register::Address<0xe0081b20,0xffffffff>;
    }
    namespace Nonecau_aesc_ca7{
        using Addr = Register::Address<0xe0081b24,0xffffffff>;
    }
    namespace Nonecau_aesc_ca8{
        using Addr = Register::Address<0xe0081b28,0xffffffff>;
    }
    namespace Nonecau_aesic_casr{
        using Addr = Register::Address<0xe0081b40,0x0ffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> VER; 
    }
    namespace Nonecau_aesic_caa{
        using Addr = Register::Address<0xe0081b44,0xffffffff>;
    }
    namespace Nonecau_aesic_ca0{
        using Addr = Register::Address<0xe0081b48,0xffffffff>;
    }
    namespace Nonecau_aesic_ca1{
        using Addr = Register::Address<0xe0081b4c,0xffffffff>;
    }
    namespace Nonecau_aesic_ca2{
        using Addr = Register::Address<0xe0081b50,0xffffffff>;
    }
    namespace Nonecau_aesic_ca3{
        using Addr = Register::Address<0xe0081b54,0xffffffff>;
    }
    namespace Nonecau_aesic_ca4{
        using Addr = Register::Address<0xe0081b58,0xffffffff>;
    }
    namespace Nonecau_aesic_ca5{
        using Addr = Register::Address<0xe0081b5c,0xffffffff>;
    }
    namespace Nonecau_aesic_ca6{
        using Addr = Register::Address<0xe0081b60,0xffffffff>;
    }
    namespace Nonecau_aesic_ca7{
        using Addr = Register::Address<0xe0081b64,0xffffffff>;
    }
    namespace Nonecau_aesic_ca8{
        using Addr = Register::Address<0xe0081b68,0xffffffff>;
    }
}
