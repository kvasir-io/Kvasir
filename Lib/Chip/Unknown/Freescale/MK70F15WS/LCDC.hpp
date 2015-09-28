#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace LCDC_lssar{
        using Addr = Register::Address<0x400b6000,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> SSA; 
    }
    namespace LCDC_lsr{
        using Addr = Register::Address<0x400b6004,0xf80ffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> YMAX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,20)> XMAX; 
    }
    namespace LCDC_lvpwr{
        using Addr = Register::Address<0x400b6008,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> VPW; 
    }
    namespace LCDC_lcpr{
        using Addr = Register::Address<0x400b600c,0x2c00fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> CXP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> OP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> CC; 
    }
    namespace LCDC_lcwhb{
        using Addr = Register::Address<0x400b6010,0x60e0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> CH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> BK_EN; 
    }
    namespace LCDC_lccmr{
        using Addr = Register::Address<0x400b6014,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CUR_COL_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,6)> CUR_COL_G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,12)> CUR_COL_R; 
    }
    namespace LCDC_lpcr{
        using Addr = Register::Address<0x400b6018,0x00000040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> PCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SCLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> ACD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ACDSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> REV_VS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SWAP_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> END_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SCLKIDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OEPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CLKPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LPPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FLMPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PIXPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,25)> BPIX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PBSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> COLOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> TFT; 
    }
    namespace LCDC_lhcr{
        using Addr = Register::Address<0x400b601c,0x03ff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> H_WAIT_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> H_WAIT_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26)> H_WIDTH; 
    }
    namespace LCDC_lvcr{
        using Addr = Register::Address<0x400b6020,0x03ff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> V_WAIT_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> V_WAIT_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26)> V_WIDTH; 
    }
    namespace LCDC_lpor{
        using Addr = Register::Address<0x400b6024,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> POS; 
    }
    namespace LCDC_lpccr{
        using Addr = Register::Address<0x400b602c,0xffff7800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CC_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> SCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LDMSK; 
    }
    namespace LCDC_ldcr{
        using Addr = Register::Address<0x400b6030,0x7f80ff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> TM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> HM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> BURST; 
    }
    namespace LCDC_lrmcr{
        using Addr = Register::Address<0x400b6034,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SELF_REF; 
    }
    namespace LCDC_licr{
        using Addr = Register::Address<0x400b6038,0xffffffea>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTSYN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GW_INT_CON; 
    }
    namespace LCDC_lier{
        using Addr = Register::Address<0x400b603c,0xffffff44>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BOF_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOF_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UDR_ERR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GW_BOF_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GW_EOF_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GW_UDR_ERR_EN; 
    }
    namespace LCDC_lisr{
        using Addr = Register::Address<0x400b6040,0xffffff44>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UDR_ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GW_BOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GW_EOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GW_UDR_ERR; 
    }
    namespace LCDC_lgwsar{
        using Addr = Register::Address<0x400b6050,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> GWSA; 
    }
    namespace LCDC_lgwsr{
        using Addr = Register::Address<0x400b6054,0xf80ffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> GWH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,20)> GWW; 
    }
    namespace LCDC_lgwvpwr{
        using Addr = Register::Address<0x400b6058,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> GWVPW; 
    }
    namespace LCDC_lgwpor{
        using Addr = Register::Address<0x400b605c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> GWPO; 
    }
    namespace LCDC_lgwpr{
        using Addr = Register::Address<0x400b6060,0xfc00fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> GWYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> GWXP; 
    }
    namespace LCDC_lgwcr{
        using Addr = Register::Address<0x400b6064,0x001c0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> GWCKB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,6)> GWCKG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,12)> GWCKR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> GW_RVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> GWE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> GWCKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> GWAV; 
    }
    namespace LCDC_lgwdcr{
        using Addr = Register::Address<0x400b6068,0x7f80ff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> GWTM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> GWHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> GWBT; 
    }
    namespace LCDC_lauscr{
        using Addr = Register::Address<0x400b6080,0x7f000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AGWCKB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> AGWCKG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> AGWCKR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUS_Mode; 
    }
    namespace LCDC_lausccr{
        using Addr = Register::Address<0x400b6084,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ACUR_COL_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> ACUR_COL_G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> ACUR_COL_R; 
    }
}
