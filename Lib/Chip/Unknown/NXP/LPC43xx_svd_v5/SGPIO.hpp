#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneout_mux_cfg0{
        using Addr = Register::Address<0x40101000,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> P_OUT_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> P_OE_CFG; 
    }
    namespace Noneout_mux_cfg1{
        using Addr = Register::Address<0x40101004,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> P_OUT_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> P_OE_CFG; 
    }
    namespace Noneout_mux_cfg2{
        using Addr = Register::Address<0x40101008,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> P_OUT_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> P_OE_CFG; 
    }
    namespace Noneout_mux_cfg3{
        using Addr = Register::Address<0x4010100c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> P_OUT_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> P_OE_CFG; 
    }
    namespace Noneout_mux_cfg4{
        using Addr = Register::Address<0x40101010,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> P_OUT_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> P_OE_CFG; 
    }
    namespace Noneout_mux_cfg5{
        using Addr = Register::Address<0x40101014,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> P_OUT_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> P_OE_CFG; 
    }
    namespace Noneout_mux_cfg6{
        using Addr = Register::Address<0x40101018,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> P_OUT_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> P_OE_CFG; 
    }
    namespace Noneout_mux_cfg7{
        using Addr = Register::Address<0x4010101c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> P_OUT_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> P_OE_CFG; 
    }
    namespace Noneout_mux_cfg8{
        using Addr = Register::Address<0x40101020,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> P_OUT_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> P_OE_CFG; 
    }
    namespace Noneout_mux_cfg9{
        using Addr = Register::Address<0x40101024,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> P_OUT_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> P_OE_CFG; 
    }
    namespace Noneout_mux_cfg10{
        using Addr = Register::Address<0x40101028,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> P_OUT_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> P_OE_CFG; 
    }
    namespace Noneout_mux_cfg11{
        using Addr = Register::Address<0x4010102c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> P_OUT_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> P_OE_CFG; 
    }
    namespace Noneout_mux_cfg12{
        using Addr = Register::Address<0x40101030,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> P_OUT_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> P_OE_CFG; 
    }
    namespace Noneout_mux_cfg13{
        using Addr = Register::Address<0x40101034,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> P_OUT_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> P_OE_CFG; 
    }
    namespace Noneout_mux_cfg14{
        using Addr = Register::Address<0x40101038,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> P_OUT_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> P_OE_CFG; 
    }
    namespace Noneout_mux_cfg15{
        using Addr = Register::Address<0x4010103c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> P_OUT_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> P_OE_CFG; 
    }
    namespace Nonesgpio_mux_cfg0{
        using Addr = Register::Address<0x40101040,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXT_CLK_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CLK_SOURCE_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CLK_SOURCE_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> QUALIFIER_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> QUALIFIER_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> QUALIFIER_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CONCAT_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CONCAT_ORDER; 
    }
    namespace Nonesgpio_mux_cfg1{
        using Addr = Register::Address<0x40101044,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXT_CLK_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CLK_SOURCE_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CLK_SOURCE_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> QUALIFIER_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> QUALIFIER_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> QUALIFIER_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CONCAT_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CONCAT_ORDER; 
    }
    namespace Nonesgpio_mux_cfg2{
        using Addr = Register::Address<0x40101048,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXT_CLK_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CLK_SOURCE_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CLK_SOURCE_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> QUALIFIER_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> QUALIFIER_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> QUALIFIER_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CONCAT_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CONCAT_ORDER; 
    }
    namespace Nonesgpio_mux_cfg3{
        using Addr = Register::Address<0x4010104c,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXT_CLK_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CLK_SOURCE_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CLK_SOURCE_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> QUALIFIER_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> QUALIFIER_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> QUALIFIER_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CONCAT_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CONCAT_ORDER; 
    }
    namespace Nonesgpio_mux_cfg4{
        using Addr = Register::Address<0x40101050,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXT_CLK_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CLK_SOURCE_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CLK_SOURCE_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> QUALIFIER_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> QUALIFIER_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> QUALIFIER_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CONCAT_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CONCAT_ORDER; 
    }
    namespace Nonesgpio_mux_cfg5{
        using Addr = Register::Address<0x40101054,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXT_CLK_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CLK_SOURCE_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CLK_SOURCE_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> QUALIFIER_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> QUALIFIER_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> QUALIFIER_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CONCAT_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CONCAT_ORDER; 
    }
    namespace Nonesgpio_mux_cfg6{
        using Addr = Register::Address<0x40101058,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXT_CLK_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CLK_SOURCE_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CLK_SOURCE_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> QUALIFIER_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> QUALIFIER_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> QUALIFIER_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CONCAT_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CONCAT_ORDER; 
    }
    namespace Nonesgpio_mux_cfg7{
        using Addr = Register::Address<0x4010105c,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXT_CLK_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CLK_SOURCE_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CLK_SOURCE_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> QUALIFIER_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> QUALIFIER_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> QUALIFIER_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CONCAT_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CONCAT_ORDER; 
    }
    namespace Nonesgpio_mux_cfg8{
        using Addr = Register::Address<0x40101060,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXT_CLK_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CLK_SOURCE_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CLK_SOURCE_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> QUALIFIER_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> QUALIFIER_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> QUALIFIER_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CONCAT_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CONCAT_ORDER; 
    }
    namespace Nonesgpio_mux_cfg9{
        using Addr = Register::Address<0x40101064,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXT_CLK_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CLK_SOURCE_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CLK_SOURCE_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> QUALIFIER_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> QUALIFIER_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> QUALIFIER_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CONCAT_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CONCAT_ORDER; 
    }
    namespace Nonesgpio_mux_cfg10{
        using Addr = Register::Address<0x40101068,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXT_CLK_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CLK_SOURCE_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CLK_SOURCE_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> QUALIFIER_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> QUALIFIER_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> QUALIFIER_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CONCAT_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CONCAT_ORDER; 
    }
    namespace Nonesgpio_mux_cfg11{
        using Addr = Register::Address<0x4010106c,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXT_CLK_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CLK_SOURCE_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CLK_SOURCE_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> QUALIFIER_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> QUALIFIER_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> QUALIFIER_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CONCAT_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CONCAT_ORDER; 
    }
    namespace Nonesgpio_mux_cfg12{
        using Addr = Register::Address<0x40101070,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXT_CLK_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CLK_SOURCE_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CLK_SOURCE_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> QUALIFIER_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> QUALIFIER_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> QUALIFIER_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CONCAT_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CONCAT_ORDER; 
    }
    namespace Nonesgpio_mux_cfg13{
        using Addr = Register::Address<0x40101074,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXT_CLK_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CLK_SOURCE_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CLK_SOURCE_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> QUALIFIER_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> QUALIFIER_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> QUALIFIER_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CONCAT_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CONCAT_ORDER; 
    }
    namespace Nonesgpio_mux_cfg14{
        using Addr = Register::Address<0x40101078,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXT_CLK_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CLK_SOURCE_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CLK_SOURCE_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> QUALIFIER_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> QUALIFIER_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> QUALIFIER_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CONCAT_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CONCAT_ORDER; 
    }
    namespace Nonesgpio_mux_cfg15{
        using Addr = Register::Address<0x4010107c,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXT_CLK_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CLK_SOURCE_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CLK_SOURCE_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> QUALIFIER_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> QUALIFIER_PIN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> QUALIFIER_SLICE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CONCAT_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CONCAT_ORDER; 
    }
    namespace Noneslice_mux_cfg0{
        using Addr = Register::Address<0x40101080,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MATCH_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLK_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKGEN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV_OUT_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DATA_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PARALLEL_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INV_QUALIFIER; 
    }
    namespace Noneslice_mux_cfg1{
        using Addr = Register::Address<0x40101084,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MATCH_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLK_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKGEN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV_OUT_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DATA_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PARALLEL_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INV_QUALIFIER; 
    }
    namespace Noneslice_mux_cfg2{
        using Addr = Register::Address<0x40101088,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MATCH_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLK_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKGEN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV_OUT_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DATA_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PARALLEL_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INV_QUALIFIER; 
    }
    namespace Noneslice_mux_cfg3{
        using Addr = Register::Address<0x4010108c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MATCH_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLK_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKGEN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV_OUT_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DATA_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PARALLEL_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INV_QUALIFIER; 
    }
    namespace Noneslice_mux_cfg4{
        using Addr = Register::Address<0x40101090,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MATCH_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLK_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKGEN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV_OUT_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DATA_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PARALLEL_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INV_QUALIFIER; 
    }
    namespace Noneslice_mux_cfg5{
        using Addr = Register::Address<0x40101094,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MATCH_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLK_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKGEN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV_OUT_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DATA_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PARALLEL_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INV_QUALIFIER; 
    }
    namespace Noneslice_mux_cfg6{
        using Addr = Register::Address<0x40101098,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MATCH_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLK_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKGEN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV_OUT_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DATA_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PARALLEL_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INV_QUALIFIER; 
    }
    namespace Noneslice_mux_cfg7{
        using Addr = Register::Address<0x4010109c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MATCH_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLK_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKGEN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV_OUT_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DATA_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PARALLEL_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INV_QUALIFIER; 
    }
    namespace Noneslice_mux_cfg8{
        using Addr = Register::Address<0x401010a0,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MATCH_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLK_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKGEN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV_OUT_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DATA_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PARALLEL_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INV_QUALIFIER; 
    }
    namespace Noneslice_mux_cfg9{
        using Addr = Register::Address<0x401010a4,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MATCH_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLK_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKGEN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV_OUT_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DATA_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PARALLEL_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INV_QUALIFIER; 
    }
    namespace Noneslice_mux_cfg10{
        using Addr = Register::Address<0x401010a8,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MATCH_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLK_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKGEN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV_OUT_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DATA_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PARALLEL_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INV_QUALIFIER; 
    }
    namespace Noneslice_mux_cfg11{
        using Addr = Register::Address<0x401010ac,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MATCH_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLK_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKGEN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV_OUT_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DATA_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PARALLEL_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INV_QUALIFIER; 
    }
    namespace Noneslice_mux_cfg12{
        using Addr = Register::Address<0x401010b0,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MATCH_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLK_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKGEN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV_OUT_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DATA_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PARALLEL_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INV_QUALIFIER; 
    }
    namespace Noneslice_mux_cfg13{
        using Addr = Register::Address<0x401010b4,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MATCH_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLK_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKGEN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV_OUT_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DATA_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PARALLEL_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INV_QUALIFIER; 
    }
    namespace Noneslice_mux_cfg14{
        using Addr = Register::Address<0x401010b8,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MATCH_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLK_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKGEN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV_OUT_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DATA_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PARALLEL_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INV_QUALIFIER; 
    }
    namespace Noneslice_mux_cfg15{
        using Addr = Register::Address<0x401010bc,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MATCH_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLK_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKGEN_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV_OUT_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DATA_CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PARALLEL_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INV_QUALIFIER; 
    }
    namespace Nonereg0{
        using Addr = Register::Address<0x401010c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG; 
    }
    namespace Nonereg1{
        using Addr = Register::Address<0x401010c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG; 
    }
    namespace Nonereg2{
        using Addr = Register::Address<0x401010c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG; 
    }
    namespace Nonereg3{
        using Addr = Register::Address<0x401010cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG; 
    }
    namespace Nonereg4{
        using Addr = Register::Address<0x401010d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG; 
    }
    namespace Nonereg5{
        using Addr = Register::Address<0x401010d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG; 
    }
    namespace Nonereg6{
        using Addr = Register::Address<0x401010d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG; 
    }
    namespace Nonereg7{
        using Addr = Register::Address<0x401010dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG; 
    }
    namespace Nonereg8{
        using Addr = Register::Address<0x401010e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG; 
    }
    namespace Nonereg9{
        using Addr = Register::Address<0x401010e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG; 
    }
    namespace Nonereg10{
        using Addr = Register::Address<0x401010e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG; 
    }
    namespace Nonereg11{
        using Addr = Register::Address<0x401010ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG; 
    }
    namespace Nonereg12{
        using Addr = Register::Address<0x401010f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG; 
    }
    namespace Nonereg13{
        using Addr = Register::Address<0x401010f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG; 
    }
    namespace Nonereg14{
        using Addr = Register::Address<0x401010f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG; 
    }
    namespace Nonereg15{
        using Addr = Register::Address<0x401010fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG; 
    }
    namespace Nonereg_ss0{
        using Addr = Register::Address<0x40101100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG_SS; 
    }
    namespace Nonereg_ss1{
        using Addr = Register::Address<0x40101104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG_SS; 
    }
    namespace Nonereg_ss2{
        using Addr = Register::Address<0x40101108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG_SS; 
    }
    namespace Nonereg_ss3{
        using Addr = Register::Address<0x4010110c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG_SS; 
    }
    namespace Nonereg_ss4{
        using Addr = Register::Address<0x40101110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG_SS; 
    }
    namespace Nonereg_ss5{
        using Addr = Register::Address<0x40101114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG_SS; 
    }
    namespace Nonereg_ss6{
        using Addr = Register::Address<0x40101118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG_SS; 
    }
    namespace Nonereg_ss7{
        using Addr = Register::Address<0x4010111c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG_SS; 
    }
    namespace Nonereg_ss8{
        using Addr = Register::Address<0x40101120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG_SS; 
    }
    namespace Nonereg_ss9{
        using Addr = Register::Address<0x40101124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG_SS; 
    }
    namespace Nonereg_ss10{
        using Addr = Register::Address<0x40101128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG_SS; 
    }
    namespace Nonereg_ss11{
        using Addr = Register::Address<0x4010112c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG_SS; 
    }
    namespace Nonereg_ss12{
        using Addr = Register::Address<0x40101130,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG_SS; 
    }
    namespace Nonereg_ss13{
        using Addr = Register::Address<0x40101134,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG_SS; 
    }
    namespace Nonereg_ss14{
        using Addr = Register::Address<0x40101138,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG_SS; 
    }
    namespace Nonereg_ss15{
        using Addr = Register::Address<0x4010113c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> REG_SS; 
    }
    namespace Nonepreset0{
        using Addr = Register::Address<0x40101140,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> PRESET; 
    }
    namespace Nonepreset1{
        using Addr = Register::Address<0x40101144,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> PRESET; 
    }
    namespace Nonepreset2{
        using Addr = Register::Address<0x40101148,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> PRESET; 
    }
    namespace Nonepreset3{
        using Addr = Register::Address<0x4010114c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> PRESET; 
    }
    namespace Nonepreset4{
        using Addr = Register::Address<0x40101150,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> PRESET; 
    }
    namespace Nonepreset5{
        using Addr = Register::Address<0x40101154,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> PRESET; 
    }
    namespace Nonepreset6{
        using Addr = Register::Address<0x40101158,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> PRESET; 
    }
    namespace Nonepreset7{
        using Addr = Register::Address<0x4010115c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> PRESET; 
    }
    namespace Nonepreset8{
        using Addr = Register::Address<0x40101160,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> PRESET; 
    }
    namespace Nonepreset9{
        using Addr = Register::Address<0x40101164,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> PRESET; 
    }
    namespace Nonepreset10{
        using Addr = Register::Address<0x40101168,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> PRESET; 
    }
    namespace Nonepreset11{
        using Addr = Register::Address<0x4010116c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> PRESET; 
    }
    namespace Nonepreset12{
        using Addr = Register::Address<0x40101170,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> PRESET; 
    }
    namespace Nonepreset13{
        using Addr = Register::Address<0x40101174,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> PRESET; 
    }
    namespace Nonepreset14{
        using Addr = Register::Address<0x40101178,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> PRESET; 
    }
    namespace Nonepreset15{
        using Addr = Register::Address<0x4010117c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> PRESET; 
    }
    namespace Nonecount0{
        using Addr = Register::Address<0x40101180,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
    }
    namespace Nonecount1{
        using Addr = Register::Address<0x40101184,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
    }
    namespace Nonecount2{
        using Addr = Register::Address<0x40101188,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
    }
    namespace Nonecount3{
        using Addr = Register::Address<0x4010118c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
    }
    namespace Nonecount4{
        using Addr = Register::Address<0x40101190,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
    }
    namespace Nonecount5{
        using Addr = Register::Address<0x40101194,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
    }
    namespace Nonecount6{
        using Addr = Register::Address<0x40101198,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
    }
    namespace Nonecount7{
        using Addr = Register::Address<0x4010119c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
    }
    namespace Nonecount8{
        using Addr = Register::Address<0x401011a0,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
    }
    namespace Nonecount9{
        using Addr = Register::Address<0x401011a4,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
    }
    namespace Nonecount10{
        using Addr = Register::Address<0x401011a8,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
    }
    namespace Nonecount11{
        using Addr = Register::Address<0x401011ac,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
    }
    namespace Nonecount12{
        using Addr = Register::Address<0x401011b0,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
    }
    namespace Nonecount13{
        using Addr = Register::Address<0x401011b4,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
    }
    namespace Nonecount14{
        using Addr = Register::Address<0x401011b8,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
    }
    namespace Nonecount15{
        using Addr = Register::Address<0x401011bc,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
    }
    namespace Nonepos0{
        using Addr = Register::Address<0x401011c0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> POS_RESET; 
    }
    namespace Nonepos1{
        using Addr = Register::Address<0x401011c4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> POS_RESET; 
    }
    namespace Nonepos2{
        using Addr = Register::Address<0x401011c8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> POS_RESET; 
    }
    namespace Nonepos3{
        using Addr = Register::Address<0x401011cc,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> POS_RESET; 
    }
    namespace Nonepos4{
        using Addr = Register::Address<0x401011d0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> POS_RESET; 
    }
    namespace Nonepos5{
        using Addr = Register::Address<0x401011d4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> POS_RESET; 
    }
    namespace Nonepos6{
        using Addr = Register::Address<0x401011d8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> POS_RESET; 
    }
    namespace Nonepos7{
        using Addr = Register::Address<0x401011dc,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> POS_RESET; 
    }
    namespace Nonepos8{
        using Addr = Register::Address<0x401011e0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> POS_RESET; 
    }
    namespace Nonepos9{
        using Addr = Register::Address<0x401011e4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> POS_RESET; 
    }
    namespace Nonepos10{
        using Addr = Register::Address<0x401011e8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> POS_RESET; 
    }
    namespace Nonepos11{
        using Addr = Register::Address<0x401011ec,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> POS_RESET; 
    }
    namespace Nonepos12{
        using Addr = Register::Address<0x401011f0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> POS_RESET; 
    }
    namespace Nonepos13{
        using Addr = Register::Address<0x401011f4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> POS_RESET; 
    }
    namespace Nonepos14{
        using Addr = Register::Address<0x401011f8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> POS_RESET; 
    }
    namespace Nonepos15{
        using Addr = Register::Address<0x401011fc,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> POS_RESET; 
    }
    namespace Nonemask_a{
        using Addr = Register::Address<0x40101200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MASK_A0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MASK_A1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MASK_A2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MASK_A3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MASK_A4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MASK_A5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MASK_A6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MASK_A7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MASK_A8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MASK_A9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MASK_A10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MASK_A11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MASK_A12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MASK_A13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MASK_A14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MASK_A15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MASK_A16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MASK_A17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MASK_A18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MASK_A19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MASK_A20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> MASK_A21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MASK_A22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MASK_A23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MASK_A24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> MASK_A25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> MASK_A26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> MASK_A27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> MASK_A28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MASK_A29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> MASK_A30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MASK_A31; 
    }
    namespace Nonemask_h{
        using Addr = Register::Address<0x40101204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MASK_H0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MASK_H1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MASK_H2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MASK_H3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MASK_H4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MASK_H5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MASK_H6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MASK_H7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MASK_H8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MASK_H9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MASK_H10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MASK_H11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MASK_H12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MASK_H13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MASK_H14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MASK_H15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MASK_H16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MASK_H17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MASK_H18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MASK_H19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MASK_H20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> MASK_H21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MASK_H22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MASK_H23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MASK_H24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> MASK_H25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> MASK_H26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> MASK_H27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> MASK_H28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MASK_H29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> MASK_H30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MASK_H31; 
    }
    namespace Nonemask_i{
        using Addr = Register::Address<0x40101208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MASK_I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MASK_I1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MASK_I2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MASK_I3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MASK_I4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MASK_I5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MASK_I6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MASK_I7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MASK_I8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MASK_I9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MASK_I10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MASK_I11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MASK_I12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MASK_I13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MASK_I14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MASK_I15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MASK_I16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MASK_I17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MASK_I18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MASK_I19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MASK_I20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> MASK_I21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MASK_I22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MASK_I23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MASK_I24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> MASK_I25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> MASK_I26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> MASK_I27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> MASK_I28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MASK_I29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> MASK_I30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MASK_I31; 
    }
    namespace Nonemask_p{
        using Addr = Register::Address<0x4010120c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MASK_P0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MASK_P1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MASK_P2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MASK_P3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MASK_P4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MASK_P5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MASK_P6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MASK_P7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MASK_P8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MASK_P9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MASK_P10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MASK_P11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MASK_P12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MASK_P13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MASK_P14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MASK_P15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MASK_P16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MASK_P17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MASK_P18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MASK_P19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MASK_P20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> MASK_P21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MASK_P22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MASK_P23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MASK_P24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> MASK_P25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> MASK_P26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> MASK_P27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> MASK_P28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MASK_P29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> MASK_P30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MASK_P31; 
    }
    namespace Nonegpio_inreg{
        using Addr = Register::Address<0x40101210,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GPIO_IN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GPIO_IN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GPIO_IN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GPIO_IN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GPIO_IN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GPIO_IN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GPIO_IN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GPIO_IN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> GPIO_IN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> GPIO_IN9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GPIO_IN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> GPIO_IN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> GPIO_IN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> GPIO_IN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> GPIO_IN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> GPIO_IN15; 
    }
    namespace Nonegpio_outreg{
        using Addr = Register::Address<0x40101214,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GPIO_OUT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GPIO_OUT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GPIO_OUT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GPIO_OUT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GPIO_OUT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GPIO_OUT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GPIO_OUT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GPIO_OUT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> GPIO_OUT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> GPIO_OUT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GPIO_OUT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> GPIO_OUT11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> GPIO_OUT12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> GPIO_OUT13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> GPIO_OUT14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> GPIO_OUT15; 
    }
    namespace Nonegpio_oenreg{
        using Addr = Register::Address<0x40101218,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GPIO_OE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GPIO_OE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GPIO_OE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GPIO_OE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GPIO_OE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GPIO_OE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GPIO_OE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GPIO_OE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> GPIO_OE8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> GPIO_OE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GPIO_OE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> GPIO_OE11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> GPIO_OE12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> GPIO_OE13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> GPIO_OE14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> GPIO_OE15; 
    }
    namespace Nonectrl_enabled{
        using Addr = Register::Address<0x4010121c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTRL_ENABLED0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTRL_ENABLED1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CTRL_ENABLED2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CTRL_ENABLED3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTRL_ENABLED4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CTRL_ENABLED5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CTRL_ENABLED6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTRL_ENABLED7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CTRL_ENABLED8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CTRL_ENABLED9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CTRL_ENABLED10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CTRL_ENABLED11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CTRL_ENABLED12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CTRL_ENABLED13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CTRL_ENABLED14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTRL_ENABLED15; 
    }
    namespace Nonectrl_disabled{
        using Addr = Register::Address<0x40101220,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTRL_DISABLEDn0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTRL_DISABLEDn1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CTRL_DISABLEDn2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CTRL_DISABLEDn3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTRL_DISABLEDn4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CTRL_DISABLEDn5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CTRL_DISABLEDn6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTRL_DISABLEDn7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CTRL_DISABLEDn8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CTRL_DISABLEDn9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CTRL_DISABLEDn10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CTRL_DISABLEDn11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CTRL_DISABLEDn12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CTRL_DISABLEDn13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CTRL_DISABLEDn14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTRL_DISABLEDn15; 
    }
    namespace Noneclr_en_0{
        using Addr = Register::Address<0x40101f00,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLR_SCI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLR_SCI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLR_SCI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLR_SCI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLR_SCI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLR_SCI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLR_SCI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLR_SCI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLR_SCI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLR_SCI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLR_SCI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLR_SCI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLR_SCI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLR_SCI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLR_SCI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLR_SCI15; 
    }
    namespace Noneset_en_0{
        using Addr = Register::Address<0x40101f04,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SET_SCI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SET_SCI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SET_SCI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SET_SCI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SET_SCI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SET_SCI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SET_SCI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SET_SCI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SET_SCI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SET_SCI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SET_SCI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SET_SCI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SET_SCI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SET_SCI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SET_SCI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SET_SCI15; 
    }
    namespace Noneenable_0{
        using Addr = Register::Address<0x40101f08,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE_SCI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE_SCI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENABLE_SCI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENABLE_SCI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENABLE_SCI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENABLE_SCI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENABLE_SCI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENABLE_SCI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ENABLE_SCI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ENABLE_SCI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ENABLE_SCI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ENABLE_SCI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENABLE_SCI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ENABLE_SCI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ENABLE_SCI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ENABLE_SCI15; 
    }
    namespace Nonestatus_0{
        using Addr = Register::Address<0x40101f0c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATUS_SCI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATUS_SCI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATUS_SCI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATUS_SCI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATUS_SCI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATUS_SCI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATUS_SCI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATUS_SCI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATUS_SCI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATUS_SCI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATUS_SCI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATUS_SCI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATUS_SCI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATUS_SCI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATUS_SCI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATUS_SCI15; 
    }
    namespace Nonectr_status_0{
        using Addr = Register::Address<0x40101f10,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTR_STATUS_SCI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTR_STATUS_SCI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CTR_STATUS_SCI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CTR_STATUS_SCI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTR_STATUS_SCI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CTR_STATUS_SCI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CTR_STATUS_SCI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTR_STATUS_SCI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CTR_STATUS_SCI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CTR_STATUS_SCI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CTR_STATUS_SCI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CTR_STATUS_SCI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CTR_STATUS_SCI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CTR_STATUS_SCI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CTR_STATUS_SCI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTR_STATUS_SCI15; 
    }
    namespace Noneset_status_0{
        using Addr = Register::Address<0x40101f14,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTR_STATUS_SCI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTR_STATUS_SCI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CTR_STATUS_SCI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CTR_STATUS_SCI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTR_STATUS_SCI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CTR_STATUS_SCI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CTR_STATUS_SCI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTR_STATUS_SCI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CTR_STATUS_SCI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CTR_STATUS_SCI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CTR_STATUS_SCI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CTR_STATUS_SCI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CTR_STATUS_SCI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CTR_STATUS_SCI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CTR_STATUS_SCI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTR_STATUS_SCI15; 
    }
    namespace Noneclr_en_1{
        using Addr = Register::Address<0x40101f20,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLR_EN_CCI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLR_EN_CCI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLR_EN_CCI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLR_EN_CCI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLR_EN_CCI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLR_EN_CCI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLR_EN_CCI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLR_EN_CCI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLR_EN_CCI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLR_EN_CCI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLR_EN_CCI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLR_EN_CCI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLR_EN_CCI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLR_EN_CCI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLR_EN_CCI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLR_EN_CCI15; 
    }
    namespace Noneset_en_1{
        using Addr = Register::Address<0x40101f24,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SET_EN_CCI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SET_EN_CCI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SET_EN_CCI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SET_EN_CCI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SET_EN_CCI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SET_EN_CCI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SET_EN_CCI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SET_EN_CCI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SET_EN_CCI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SET_EN_CCI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SET_EN_CCI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SET_EN_CCI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SET_EN_CCI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SET_EN_CCI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SET_EN_CCI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SET_EN_CCI15; 
    }
    namespace Noneenable_1{
        using Addr = Register::Address<0x40101f28,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE_CCI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE_CCI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENABLE_CCI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENABLE_CCI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENABLE_CCI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENABLE_CCI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENABLE_CCI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENABLE_CCI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ENABLE_CCI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ENABLE_CCI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ENABLE_CCI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ENABLE_CCI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENABLE_CCI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ENABLE_CCI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ENABLE_CCI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ENABLE_CCI15; 
    }
    namespace Nonestatus_1{
        using Addr = Register::Address<0x40101f2c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATUS_CCI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATUS_CCI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATUS_CCI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATUS_CCI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATUS_CCI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATUS_CCI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATUS_CCI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATUS_CCI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATUS_CCI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATUS_CCI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATUS_CCI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATUS_CCI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATUS_CCI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATUS_CCI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATUS_CCI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATUS_CCI15; 
    }
    namespace Nonectr_status_1{
        using Addr = Register::Address<0x40101f30,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTR_STATUS_CCI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTR_STATUS_CCI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CTR_STATUS_CCI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CTR_STATUS_CCI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTR_STATUS_CCI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CTR_STATUS_CCI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CTR_STATUS_CCI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTR_STATUS_CCI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CTR_STATUS_CCI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CTR_STATUS_CCI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CTR_STATUS_CCI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CTR_STATUS_CCI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CTR_STATUS_CCI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CTR_STATUS_CCI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CTR_STATUS_CCI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTR_STATUS_CCI15; 
    }
    namespace Noneset_status_1{
        using Addr = Register::Address<0x40101f34,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTR_STATUS_CCI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTR_STATUS_CCI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CTR_STATUS_CCI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CTR_STATUS_CCI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTR_STATUS_CCI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CTR_STATUS_CCI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CTR_STATUS_CCI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTR_STATUS_CCI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CTR_STATUS_CCI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CTR_STATUS_CCI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CTR_STATUS_CCI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CTR_STATUS_CCI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CTR_STATUS_CCI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CTR_STATUS_CCI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CTR_STATUS_CCI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTR_STATUS_CCI15; 
    }
    namespace Noneclr_en_2{
        using Addr = Register::Address<0x40101f40,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLR_EN2_PMI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLR_EN2_PMI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLR_EN2_PMI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLR_EN2_PMI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLR_EN2_PMI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLR_EN2_PMI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLR_EN2_PMI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLR_EN2_PMI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLR_EN2_PMI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLR_EN2_PMI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLR_EN2_PMI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLR_EN2_PMI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLR_EN2_PMI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLR_EN2_PMI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLR_EN2_PMI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLR_EN2_PMI15; 
    }
    namespace Noneset_en_2{
        using Addr = Register::Address<0x40101f44,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SET_EN_PMI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SET_EN_PMI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SET_EN_PMI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SET_EN_PMI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SET_EN_PMI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SET_EN_PMI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SET_EN_PMI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SET_EN_PMI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SET_EN_PMI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SET_EN_PMI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SET_EN_PMI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SET_EN_PMI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SET_EN_PMI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SET_EN_PMI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SET_EN_PMI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SET_EN_PMI15; 
    }
    namespace Noneenable_2{
        using Addr = Register::Address<0x40101f48,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE_PMI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE_PMI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENABLE_PMI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENABLE_PMI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENABLE_PMI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENABLE_PMI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENABLE_PMI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENABLE_PMI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ENABLE_PMI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ENABLE_PMI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ENABLE_PMI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ENABLE_PMI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENABLE_PMI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ENABLE_PMI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ENABLE_PMI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ENABLE_PMI15; 
    }
    namespace Nonestatus_2{
        using Addr = Register::Address<0x40101f4c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATUS_PMI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATUS_PMI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATUS_PMI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATUS_PMI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATUS_PMI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATUS_PMI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATUS_PMI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATUS_PMI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATUS_PMI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATUS_PMI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATUS_PMI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATUS_PMI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATUS_PMI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATUS_PMI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATUS_PMI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATUS_PMI15; 
    }
    namespace Nonectr_status_2{
        using Addr = Register::Address<0x40101f50,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTR_STATUS_PMI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTR_STATUS_PMI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CTR_STATUS_PMI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CTR_STATUS_PMI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTR_STATUS_PMI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CTR_STATUS_PMI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CTR_STATUS_PMI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTR_STATUS_PMI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CTR_STATUS_PMI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CTR_STATUS_PMI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CTR_STATUS_PMI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CTR_STATUS_PMI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CTR_STATUS_PMI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CTR_STATUS_PMI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CTR_STATUS_PMI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTR_STATUS_PMI15; 
    }
    namespace Noneset_status_2{
        using Addr = Register::Address<0x40101f54,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTR_STATUS_PMI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTR_STATUS_PMI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CTR_STATUS_PMI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CTR_STATUS_PMI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTR_STATUS_PMI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CTR_STATUS_PMI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CTR_STATUS_PMI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTR_STATUS_PMI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CTR_STATUS_PMI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CTR_STATUS_PMI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CTR_STATUS_PMI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CTR_STATUS_PMI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CTR_STATUS_PMI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CTR_STATUS_PMI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CTR_STATUS_PMI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTR_STATUS_PMI15; 
    }
    namespace Noneclr_en_3{
        using Addr = Register::Address<0x40101f60,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLR_EN_INPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLR_EN_INPI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLR_EN_INPI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLR_EN_INPI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLR_EN_INPI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLR_EN_INPI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLR_EN_INPI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLR_EN_INPI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLR_EN_INPI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLR_EN_INPI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLR_EN_INPI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLR_EN_INPI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLR_EN_INPI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLR_EN_INPI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLR_EN_INPI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLR_EN_INPI15; 
    }
    namespace Noneset_en_3{
        using Addr = Register::Address<0x40101f64,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SET_EN_INPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SET_EN_INPI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SET_EN_INPI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SET_EN_INPI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SET_EN_INPI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SET_EN_INPI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SET_EN_INPI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SET_EN_INPI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SET_EN_INPI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SET_EN_INPI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SET_EN_INPI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SET_EN_INPI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SET_EN_INPI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SET_EN_INPI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SET_EN_INPI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SET_EN_INPI15; 
    }
    namespace Noneenable_3{
        using Addr = Register::Address<0x40101f68,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE3_INPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE3_INPI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENABLE3_INPI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENABLE3_INPI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENABLE3_INPI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENABLE3_INPI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENABLE3_INPI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENABLE3_INPI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ENABLE3_INPI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ENABLE3_INPI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ENABLE3_INPI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ENABLE3_INPI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENABLE3_INPI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ENABLE3_INPI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ENABLE3_INPI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ENABLE3_INPI15; 
    }
    namespace Nonestatus_3{
        using Addr = Register::Address<0x40101f6c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATUS_INPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATUS_INPI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATUS_INPI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATUS_INPI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STATUS_INPI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STATUS_INPI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STATUS_INPI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STATUS_INPI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STATUS_INPI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STATUS_INPI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STATUS_INPI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STATUS_INPI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STATUS_INPI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STATUS_INPI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STATUS_INPI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STATUS_INPI15; 
    }
    namespace Nonectr_status_3{
        using Addr = Register::Address<0x40101f70,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTR_STATUS_INPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTR_STATUS_INPI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CTR_STATUS_INPI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CTR_STATUS_INPI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTR_STATUS_INPI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CTR_STATUS_INPI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CTR_STATUS_INPI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTR_STATUS_INPI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CTR_STATUS_INPI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CTR_STATUS_INPI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CTR_STATUS_INPI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CTR_STATUS_INPI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CTR_STATUS_INPI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CTR_STATUS_INPI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CTR_STATUS_INPI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTR_STATUS_INPI15; 
    }
    namespace Noneset_status_3{
        using Addr = Register::Address<0x40101f74,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTR_STATUS_INPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTR_STATUS_INPI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CTR_STATUS_INPI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CTR_STATUS_INPI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTR_STATUS_INPI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CTR_STATUS_INPI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CTR_STATUS_INPI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTR_STATUS_INPI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CTR_STATUS_INPI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CTR_STATUS_INPI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CTR_STATUS_INPI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CTR_STATUS_INPI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CTR_STATUS_INPI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CTR_STATUS_INPI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CTR_STATUS_INPI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTR_STATUS_INPI15; 
    }
}
