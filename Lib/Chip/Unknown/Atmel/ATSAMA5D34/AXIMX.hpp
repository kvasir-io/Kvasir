#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace AXIMX_remap{
        using Addr = Register::Address<0x00800000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REMAP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REMAP1; 
    }
    namespace AXIMX_periph_id4{
        using Addr = Register::Address<0x00801fd0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ID; 
    }
    namespace AXIMX_periph_id5{
        using Addr = Register::Address<0x00801fd4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ID; 
    }
    namespace AXIMX_periph_id6{
        using Addr = Register::Address<0x00801fd8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ID; 
    }
    namespace AXIMX_periph_id7{
        using Addr = Register::Address<0x00801fdc,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ID; 
    }
    namespace AXIMX_periph_id0{
        using Addr = Register::Address<0x00801fe0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ID; 
    }
    namespace AXIMX_periph_id1{
        using Addr = Register::Address<0x00801fe4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ID; 
    }
    namespace AXIMX_periph_id2{
        using Addr = Register::Address<0x00801fe8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ID; 
    }
    namespace AXIMX_periph_id3{
        using Addr = Register::Address<0x00801fec,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ID; 
    }
    namespace AXIMX_comp_id0{
        using Addr = Register::Address<0x00801ff0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ID; 
    }
    namespace AXIMX_comp_id1{
        using Addr = Register::Address<0x00801ff4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ID; 
    }
    namespace AXIMX_comp_id2{
        using Addr = Register::Address<0x00801ff8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ID; 
    }
    namespace AXIMX_comp_id3{
        using Addr = Register::Address<0x00801ffc,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ID; 
    }
    namespace AXIMX_amib3_fn_mod_bm_iss{
        using Addr = Register::Address<0x00805008,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RD_ISS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WR_ISS; 
    }
    namespace AXIMX_amib3_fn_mod2{
        using Addr = Register::Address<0x00805024,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BP_MRG; 
    }
    namespace AXIMX_asib0_read_qos{
        using Addr = Register::Address<0x00842100,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RD_QOS; 
    }
    namespace AXIMX_asib0_write_qos{
        using Addr = Register::Address<0x00842104,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WR_QOS; 
    }
    namespace AXIMX_asib1_fn_mod_ahb{
        using Addr = Register::Address<0x00843028,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RD_INCR_OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WR_INCR_OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LOCK_OVR; 
    }
    namespace AXIMX_asib1_read_qos{
        using Addr = Register::Address<0x00843100,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RD_QOS; 
    }
    namespace AXIMX_asib1_write_qos{
        using Addr = Register::Address<0x00843104,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WR_QOS; 
    }
    namespace AXIMX_asib1_fn_mod{
        using Addr = Register::Address<0x00843108,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RD_ISS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WR_ISS; 
    }
}
