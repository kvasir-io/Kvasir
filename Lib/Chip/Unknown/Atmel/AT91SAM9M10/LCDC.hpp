#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedmabaddr1{
        using Addr = Register::Address<0x00500000,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BADDR_U; 
    }
    namespace Nonedmabaddr2{
        using Addr = Register::Address<0x00500004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BADDR_L; 
    }
    namespace Nonedmafrmpt1{
        using Addr = Register::Address<0x00500008,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0)> FRMPT_U; 
    }
    namespace Nonedmafrmpt2{
        using Addr = Register::Address<0x0050000c,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0)> FRMPT_L; 
    }
    namespace Nonedmafrmadd1{
        using Addr = Register::Address<0x00500010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FRMADD_U; 
    }
    namespace Nonedmafrmadd2{
        using Addr = Register::Address<0x00500014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FRMADD_L; 
    }
    namespace Nonedmafrmcfg{
        using Addr = Register::Address<0x00500018,0x80800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0)> FRMSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> BRSTLN; 
    }
    namespace Nonedmacon{
        using Addr = Register::Address<0x0050001c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMARST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMABUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DMAUPDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DMA2DEN; 
    }
    namespace Nonedma2dcfg{
        using Addr = Register::Address<0x00500020,0xe0ff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADDRINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> PIXELOFF; 
    }
    namespace Nonelcdcon1{
        using Addr = Register::Address<0x00500800,0x00000ffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,12)> CLKVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,21)> LINECNT; 
    }
    namespace Nonelcdcon2{
        using Addr = Register::Address<0x00500804,0x3fff6000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DISTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SCANMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> IFWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> PIXELSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INVVD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> INVFRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> INVLINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> INVCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> INVDVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLKMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> MEMOR; 
    }
    namespace Nonelcdtim1{
        using Addr = Register::Address<0x00500808,0x70c00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> VFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> VBP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> VPW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> VHDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STUCKTO1; 
    }
    namespace Nonelcdtim2{
        using Addr = Register::Address<0x0050080c,0x001fc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> HBP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> HPW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,21)> HFP; 
    }
    namespace Nonelcdfrmcfg{
        using Addr = Register::Address<0x00500810,0x001ff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> LINEVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,21)> LINESIZE; 
    }
    namespace Nonelcdfifo{
        using Addr = Register::Address<0x00500814,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> FIFOTH; 
    }
    namespace Nonedp1_2{
        using Addr = Register::Address<0x0050081c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DP1_2; 
    }
    namespace Nonedp4_7{
        using Addr = Register::Address<0x00500820,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DP4_7; 
    }
    namespace Nonedp3_5{
        using Addr = Register::Address<0x00500824,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,0)> DP3_5; 
    }
    namespace Nonedp2_3{
        using Addr = Register::Address<0x00500828,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DP2_3; 
    }
    namespace Nonedp5_7{
        using Addr = Register::Address<0x0050082c,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DP5_7; 
    }
    namespace Nonedp3_4{
        using Addr = Register::Address<0x00500830,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DP3_4; 
    }
    namespace Nonedp4_5{
        using Addr = Register::Address<0x00500834,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,0)> DP4_5; 
    }
    namespace Nonedp6_7{
        using Addr = Register::Address<0x00500838,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DP6_7; 
    }
    namespace Nonepwrcon{
        using Addr = Register::Address<0x0050083c,0x7fffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LCD_PWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> GUARD_TIME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LCD_BUSY; 
    }
    namespace Nonecontrast_ctr{
        using Addr = Register::Address<0x00500840,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENA; 
    }
    namespace Nonecontrast_val{
        using Addr = Register::Address<0x00500844,0xffffffff>;
    }
    namespace Nonelcd_ier{
        using Addr = Register::Address<0x00500848,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LNIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSTLNIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UFLWIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OWRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MERIE; 
    }
    namespace Nonelcd_idr{
        using Addr = Register::Address<0x0050084c,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LNID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSTLNID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOFID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UFLWID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OWRID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MERID; 
    }
    namespace Nonelcd_imr{
        using Addr = Register::Address<0x00500850,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LNIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSTLNIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOFIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UFLWIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OWRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MERIM; 
    }
    namespace Nonelcd_isr{
        using Addr = Register::Address<0x00500854,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LNIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSTLNIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UFLWIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OWRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MERIS; 
    }
    namespace Nonelcd_icr{
        using Addr = Register::Address<0x00500858,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LNIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSTLNIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UFLWIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OWRIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MERIC; 
    }
    namespace Nonelcd_itr{
        using Addr = Register::Address<0x00500860,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LNIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSTLNIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOFIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UFLWIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OWRIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MERIT; 
    }
    namespace Nonelcd_irr{
        using Addr = Register::Address<0x00500864,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LNIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSTLNIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOFIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UFLWIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OWRIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MERIR; 
    }
    namespace Nonelcd_wpcr{
        using Addr = Register::Address<0x005008e4,0xffffffff>;
    }
    namespace Nonelcd_wpsr{
        using Addr = Register::Address<0x005008e8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
    namespace Nonelutentry0{
        using Addr = Register::Address<0x00500c00,0xffffffff>;
    }
    namespace Nonelutentry1{
        using Addr = Register::Address<0x00500c04,0xffffffff>;
    }
    namespace Nonelutentry2{
        using Addr = Register::Address<0x00500c08,0xffffffff>;
    }
    namespace Nonelutentry3{
        using Addr = Register::Address<0x00500c0c,0xffffffff>;
    }
    namespace Nonelutentry4{
        using Addr = Register::Address<0x00500c10,0xffffffff>;
    }
    namespace Nonelutentry5{
        using Addr = Register::Address<0x00500c14,0xffffffff>;
    }
    namespace Nonelutentry6{
        using Addr = Register::Address<0x00500c18,0xffffffff>;
    }
    namespace Nonelutentry7{
        using Addr = Register::Address<0x00500c1c,0xffffffff>;
    }
    namespace Nonelutentry8{
        using Addr = Register::Address<0x00500c20,0xffffffff>;
    }
    namespace Nonelutentry9{
        using Addr = Register::Address<0x00500c24,0xffffffff>;
    }
    namespace Nonelutentry10{
        using Addr = Register::Address<0x00500c28,0xffffffff>;
    }
    namespace Nonelutentry11{
        using Addr = Register::Address<0x00500c2c,0xffffffff>;
    }
    namespace Nonelutentry12{
        using Addr = Register::Address<0x00500c30,0xffffffff>;
    }
    namespace Nonelutentry13{
        using Addr = Register::Address<0x00500c34,0xffffffff>;
    }
    namespace Nonelutentry14{
        using Addr = Register::Address<0x00500c38,0xffffffff>;
    }
    namespace Nonelutentry15{
        using Addr = Register::Address<0x00500c3c,0xffffffff>;
    }
    namespace Nonelutentry16{
        using Addr = Register::Address<0x00500c40,0xffffffff>;
    }
    namespace Nonelutentry17{
        using Addr = Register::Address<0x00500c44,0xffffffff>;
    }
    namespace Nonelutentry18{
        using Addr = Register::Address<0x00500c48,0xffffffff>;
    }
    namespace Nonelutentry19{
        using Addr = Register::Address<0x00500c4c,0xffffffff>;
    }
    namespace Nonelutentry20{
        using Addr = Register::Address<0x00500c50,0xffffffff>;
    }
    namespace Nonelutentry21{
        using Addr = Register::Address<0x00500c54,0xffffffff>;
    }
    namespace Nonelutentry22{
        using Addr = Register::Address<0x00500c58,0xffffffff>;
    }
    namespace Nonelutentry23{
        using Addr = Register::Address<0x00500c5c,0xffffffff>;
    }
    namespace Nonelutentry24{
        using Addr = Register::Address<0x00500c60,0xffffffff>;
    }
    namespace Nonelutentry25{
        using Addr = Register::Address<0x00500c64,0xffffffff>;
    }
    namespace Nonelutentry26{
        using Addr = Register::Address<0x00500c68,0xffffffff>;
    }
    namespace Nonelutentry27{
        using Addr = Register::Address<0x00500c6c,0xffffffff>;
    }
    namespace Nonelutentry28{
        using Addr = Register::Address<0x00500c70,0xffffffff>;
    }
    namespace Nonelutentry29{
        using Addr = Register::Address<0x00500c74,0xffffffff>;
    }
    namespace Nonelutentry30{
        using Addr = Register::Address<0x00500c78,0xffffffff>;
    }
    namespace Nonelutentry31{
        using Addr = Register::Address<0x00500c7c,0xffffffff>;
    }
    namespace Nonelutentry32{
        using Addr = Register::Address<0x00500c80,0xffffffff>;
    }
    namespace Nonelutentry33{
        using Addr = Register::Address<0x00500c84,0xffffffff>;
    }
    namespace Nonelutentry34{
        using Addr = Register::Address<0x00500c88,0xffffffff>;
    }
    namespace Nonelutentry35{
        using Addr = Register::Address<0x00500c8c,0xffffffff>;
    }
    namespace Nonelutentry36{
        using Addr = Register::Address<0x00500c90,0xffffffff>;
    }
    namespace Nonelutentry37{
        using Addr = Register::Address<0x00500c94,0xffffffff>;
    }
    namespace Nonelutentry38{
        using Addr = Register::Address<0x00500c98,0xffffffff>;
    }
    namespace Nonelutentry39{
        using Addr = Register::Address<0x00500c9c,0xffffffff>;
    }
    namespace Nonelutentry40{
        using Addr = Register::Address<0x00500ca0,0xffffffff>;
    }
    namespace Nonelutentry41{
        using Addr = Register::Address<0x00500ca4,0xffffffff>;
    }
    namespace Nonelutentry42{
        using Addr = Register::Address<0x00500ca8,0xffffffff>;
    }
    namespace Nonelutentry43{
        using Addr = Register::Address<0x00500cac,0xffffffff>;
    }
    namespace Nonelutentry44{
        using Addr = Register::Address<0x00500cb0,0xffffffff>;
    }
    namespace Nonelutentry45{
        using Addr = Register::Address<0x00500cb4,0xffffffff>;
    }
    namespace Nonelutentry46{
        using Addr = Register::Address<0x00500cb8,0xffffffff>;
    }
    namespace Nonelutentry47{
        using Addr = Register::Address<0x00500cbc,0xffffffff>;
    }
    namespace Nonelutentry48{
        using Addr = Register::Address<0x00500cc0,0xffffffff>;
    }
    namespace Nonelutentry49{
        using Addr = Register::Address<0x00500cc4,0xffffffff>;
    }
    namespace Nonelutentry50{
        using Addr = Register::Address<0x00500cc8,0xffffffff>;
    }
    namespace Nonelutentry51{
        using Addr = Register::Address<0x00500ccc,0xffffffff>;
    }
    namespace Nonelutentry52{
        using Addr = Register::Address<0x00500cd0,0xffffffff>;
    }
    namespace Nonelutentry53{
        using Addr = Register::Address<0x00500cd4,0xffffffff>;
    }
    namespace Nonelutentry54{
        using Addr = Register::Address<0x00500cd8,0xffffffff>;
    }
    namespace Nonelutentry55{
        using Addr = Register::Address<0x00500cdc,0xffffffff>;
    }
    namespace Nonelutentry56{
        using Addr = Register::Address<0x00500ce0,0xffffffff>;
    }
    namespace Nonelutentry57{
        using Addr = Register::Address<0x00500ce4,0xffffffff>;
    }
    namespace Nonelutentry58{
        using Addr = Register::Address<0x00500ce8,0xffffffff>;
    }
    namespace Nonelutentry59{
        using Addr = Register::Address<0x00500cec,0xffffffff>;
    }
    namespace Nonelutentry60{
        using Addr = Register::Address<0x00500cf0,0xffffffff>;
    }
    namespace Nonelutentry61{
        using Addr = Register::Address<0x00500cf4,0xffffffff>;
    }
    namespace Nonelutentry62{
        using Addr = Register::Address<0x00500cf8,0xffffffff>;
    }
    namespace Nonelutentry63{
        using Addr = Register::Address<0x00500cfc,0xffffffff>;
    }
    namespace Nonelutentry64{
        using Addr = Register::Address<0x00500d00,0xffffffff>;
    }
    namespace Nonelutentry65{
        using Addr = Register::Address<0x00500d04,0xffffffff>;
    }
    namespace Nonelutentry66{
        using Addr = Register::Address<0x00500d08,0xffffffff>;
    }
    namespace Nonelutentry67{
        using Addr = Register::Address<0x00500d0c,0xffffffff>;
    }
    namespace Nonelutentry68{
        using Addr = Register::Address<0x00500d10,0xffffffff>;
    }
    namespace Nonelutentry69{
        using Addr = Register::Address<0x00500d14,0xffffffff>;
    }
    namespace Nonelutentry70{
        using Addr = Register::Address<0x00500d18,0xffffffff>;
    }
    namespace Nonelutentry71{
        using Addr = Register::Address<0x00500d1c,0xffffffff>;
    }
    namespace Nonelutentry72{
        using Addr = Register::Address<0x00500d20,0xffffffff>;
    }
    namespace Nonelutentry73{
        using Addr = Register::Address<0x00500d24,0xffffffff>;
    }
    namespace Nonelutentry74{
        using Addr = Register::Address<0x00500d28,0xffffffff>;
    }
    namespace Nonelutentry75{
        using Addr = Register::Address<0x00500d2c,0xffffffff>;
    }
    namespace Nonelutentry76{
        using Addr = Register::Address<0x00500d30,0xffffffff>;
    }
    namespace Nonelutentry77{
        using Addr = Register::Address<0x00500d34,0xffffffff>;
    }
    namespace Nonelutentry78{
        using Addr = Register::Address<0x00500d38,0xffffffff>;
    }
    namespace Nonelutentry79{
        using Addr = Register::Address<0x00500d3c,0xffffffff>;
    }
    namespace Nonelutentry80{
        using Addr = Register::Address<0x00500d40,0xffffffff>;
    }
    namespace Nonelutentry81{
        using Addr = Register::Address<0x00500d44,0xffffffff>;
    }
    namespace Nonelutentry82{
        using Addr = Register::Address<0x00500d48,0xffffffff>;
    }
    namespace Nonelutentry83{
        using Addr = Register::Address<0x00500d4c,0xffffffff>;
    }
    namespace Nonelutentry84{
        using Addr = Register::Address<0x00500d50,0xffffffff>;
    }
    namespace Nonelutentry85{
        using Addr = Register::Address<0x00500d54,0xffffffff>;
    }
    namespace Nonelutentry86{
        using Addr = Register::Address<0x00500d58,0xffffffff>;
    }
    namespace Nonelutentry87{
        using Addr = Register::Address<0x00500d5c,0xffffffff>;
    }
    namespace Nonelutentry88{
        using Addr = Register::Address<0x00500d60,0xffffffff>;
    }
    namespace Nonelutentry89{
        using Addr = Register::Address<0x00500d64,0xffffffff>;
    }
    namespace Nonelutentry90{
        using Addr = Register::Address<0x00500d68,0xffffffff>;
    }
    namespace Nonelutentry91{
        using Addr = Register::Address<0x00500d6c,0xffffffff>;
    }
    namespace Nonelutentry92{
        using Addr = Register::Address<0x00500d70,0xffffffff>;
    }
    namespace Nonelutentry93{
        using Addr = Register::Address<0x00500d74,0xffffffff>;
    }
    namespace Nonelutentry94{
        using Addr = Register::Address<0x00500d78,0xffffffff>;
    }
    namespace Nonelutentry95{
        using Addr = Register::Address<0x00500d7c,0xffffffff>;
    }
    namespace Nonelutentry96{
        using Addr = Register::Address<0x00500d80,0xffffffff>;
    }
    namespace Nonelutentry97{
        using Addr = Register::Address<0x00500d84,0xffffffff>;
    }
    namespace Nonelutentry98{
        using Addr = Register::Address<0x00500d88,0xffffffff>;
    }
    namespace Nonelutentry99{
        using Addr = Register::Address<0x00500d8c,0xffffffff>;
    }
    namespace Nonelutentry100{
        using Addr = Register::Address<0x00500d90,0xffffffff>;
    }
    namespace Nonelutentry101{
        using Addr = Register::Address<0x00500d94,0xffffffff>;
    }
    namespace Nonelutentry102{
        using Addr = Register::Address<0x00500d98,0xffffffff>;
    }
    namespace Nonelutentry103{
        using Addr = Register::Address<0x00500d9c,0xffffffff>;
    }
    namespace Nonelutentry104{
        using Addr = Register::Address<0x00500da0,0xffffffff>;
    }
    namespace Nonelutentry105{
        using Addr = Register::Address<0x00500da4,0xffffffff>;
    }
    namespace Nonelutentry106{
        using Addr = Register::Address<0x00500da8,0xffffffff>;
    }
    namespace Nonelutentry107{
        using Addr = Register::Address<0x00500dac,0xffffffff>;
    }
    namespace Nonelutentry108{
        using Addr = Register::Address<0x00500db0,0xffffffff>;
    }
    namespace Nonelutentry109{
        using Addr = Register::Address<0x00500db4,0xffffffff>;
    }
    namespace Nonelutentry110{
        using Addr = Register::Address<0x00500db8,0xffffffff>;
    }
    namespace Nonelutentry111{
        using Addr = Register::Address<0x00500dbc,0xffffffff>;
    }
    namespace Nonelutentry112{
        using Addr = Register::Address<0x00500dc0,0xffffffff>;
    }
    namespace Nonelutentry113{
        using Addr = Register::Address<0x00500dc4,0xffffffff>;
    }
    namespace Nonelutentry114{
        using Addr = Register::Address<0x00500dc8,0xffffffff>;
    }
    namespace Nonelutentry115{
        using Addr = Register::Address<0x00500dcc,0xffffffff>;
    }
    namespace Nonelutentry116{
        using Addr = Register::Address<0x00500dd0,0xffffffff>;
    }
    namespace Nonelutentry117{
        using Addr = Register::Address<0x00500dd4,0xffffffff>;
    }
    namespace Nonelutentry118{
        using Addr = Register::Address<0x00500dd8,0xffffffff>;
    }
    namespace Nonelutentry119{
        using Addr = Register::Address<0x00500ddc,0xffffffff>;
    }
    namespace Nonelutentry120{
        using Addr = Register::Address<0x00500de0,0xffffffff>;
    }
    namespace Nonelutentry121{
        using Addr = Register::Address<0x00500de4,0xffffffff>;
    }
    namespace Nonelutentry122{
        using Addr = Register::Address<0x00500de8,0xffffffff>;
    }
    namespace Nonelutentry123{
        using Addr = Register::Address<0x00500dec,0xffffffff>;
    }
    namespace Nonelutentry124{
        using Addr = Register::Address<0x00500df0,0xffffffff>;
    }
    namespace Nonelutentry125{
        using Addr = Register::Address<0x00500df4,0xffffffff>;
    }
    namespace Nonelutentry126{
        using Addr = Register::Address<0x00500df8,0xffffffff>;
    }
    namespace Nonelutentry127{
        using Addr = Register::Address<0x00500dfc,0xffffffff>;
    }
    namespace Nonelutentry128{
        using Addr = Register::Address<0x00500e00,0xffffffff>;
    }
    namespace Nonelutentry129{
        using Addr = Register::Address<0x00500e04,0xffffffff>;
    }
    namespace Nonelutentry130{
        using Addr = Register::Address<0x00500e08,0xffffffff>;
    }
    namespace Nonelutentry131{
        using Addr = Register::Address<0x00500e0c,0xffffffff>;
    }
    namespace Nonelutentry132{
        using Addr = Register::Address<0x00500e10,0xffffffff>;
    }
    namespace Nonelutentry133{
        using Addr = Register::Address<0x00500e14,0xffffffff>;
    }
    namespace Nonelutentry134{
        using Addr = Register::Address<0x00500e18,0xffffffff>;
    }
    namespace Nonelutentry135{
        using Addr = Register::Address<0x00500e1c,0xffffffff>;
    }
    namespace Nonelutentry136{
        using Addr = Register::Address<0x00500e20,0xffffffff>;
    }
    namespace Nonelutentry137{
        using Addr = Register::Address<0x00500e24,0xffffffff>;
    }
    namespace Nonelutentry138{
        using Addr = Register::Address<0x00500e28,0xffffffff>;
    }
    namespace Nonelutentry139{
        using Addr = Register::Address<0x00500e2c,0xffffffff>;
    }
    namespace Nonelutentry140{
        using Addr = Register::Address<0x00500e30,0xffffffff>;
    }
    namespace Nonelutentry141{
        using Addr = Register::Address<0x00500e34,0xffffffff>;
    }
    namespace Nonelutentry142{
        using Addr = Register::Address<0x00500e38,0xffffffff>;
    }
    namespace Nonelutentry143{
        using Addr = Register::Address<0x00500e3c,0xffffffff>;
    }
    namespace Nonelutentry144{
        using Addr = Register::Address<0x00500e40,0xffffffff>;
    }
    namespace Nonelutentry145{
        using Addr = Register::Address<0x00500e44,0xffffffff>;
    }
    namespace Nonelutentry146{
        using Addr = Register::Address<0x00500e48,0xffffffff>;
    }
    namespace Nonelutentry147{
        using Addr = Register::Address<0x00500e4c,0xffffffff>;
    }
    namespace Nonelutentry148{
        using Addr = Register::Address<0x00500e50,0xffffffff>;
    }
    namespace Nonelutentry149{
        using Addr = Register::Address<0x00500e54,0xffffffff>;
    }
    namespace Nonelutentry150{
        using Addr = Register::Address<0x00500e58,0xffffffff>;
    }
    namespace Nonelutentry151{
        using Addr = Register::Address<0x00500e5c,0xffffffff>;
    }
    namespace Nonelutentry152{
        using Addr = Register::Address<0x00500e60,0xffffffff>;
    }
    namespace Nonelutentry153{
        using Addr = Register::Address<0x00500e64,0xffffffff>;
    }
    namespace Nonelutentry154{
        using Addr = Register::Address<0x00500e68,0xffffffff>;
    }
    namespace Nonelutentry155{
        using Addr = Register::Address<0x00500e6c,0xffffffff>;
    }
    namespace Nonelutentry156{
        using Addr = Register::Address<0x00500e70,0xffffffff>;
    }
    namespace Nonelutentry157{
        using Addr = Register::Address<0x00500e74,0xffffffff>;
    }
    namespace Nonelutentry158{
        using Addr = Register::Address<0x00500e78,0xffffffff>;
    }
    namespace Nonelutentry159{
        using Addr = Register::Address<0x00500e7c,0xffffffff>;
    }
    namespace Nonelutentry160{
        using Addr = Register::Address<0x00500e80,0xffffffff>;
    }
    namespace Nonelutentry161{
        using Addr = Register::Address<0x00500e84,0xffffffff>;
    }
    namespace Nonelutentry162{
        using Addr = Register::Address<0x00500e88,0xffffffff>;
    }
    namespace Nonelutentry163{
        using Addr = Register::Address<0x00500e8c,0xffffffff>;
    }
    namespace Nonelutentry164{
        using Addr = Register::Address<0x00500e90,0xffffffff>;
    }
    namespace Nonelutentry165{
        using Addr = Register::Address<0x00500e94,0xffffffff>;
    }
    namespace Nonelutentry166{
        using Addr = Register::Address<0x00500e98,0xffffffff>;
    }
    namespace Nonelutentry167{
        using Addr = Register::Address<0x00500e9c,0xffffffff>;
    }
    namespace Nonelutentry168{
        using Addr = Register::Address<0x00500ea0,0xffffffff>;
    }
    namespace Nonelutentry169{
        using Addr = Register::Address<0x00500ea4,0xffffffff>;
    }
    namespace Nonelutentry170{
        using Addr = Register::Address<0x00500ea8,0xffffffff>;
    }
    namespace Nonelutentry171{
        using Addr = Register::Address<0x00500eac,0xffffffff>;
    }
    namespace Nonelutentry172{
        using Addr = Register::Address<0x00500eb0,0xffffffff>;
    }
    namespace Nonelutentry173{
        using Addr = Register::Address<0x00500eb4,0xffffffff>;
    }
    namespace Nonelutentry174{
        using Addr = Register::Address<0x00500eb8,0xffffffff>;
    }
    namespace Nonelutentry175{
        using Addr = Register::Address<0x00500ebc,0xffffffff>;
    }
    namespace Nonelutentry176{
        using Addr = Register::Address<0x00500ec0,0xffffffff>;
    }
    namespace Nonelutentry177{
        using Addr = Register::Address<0x00500ec4,0xffffffff>;
    }
    namespace Nonelutentry178{
        using Addr = Register::Address<0x00500ec8,0xffffffff>;
    }
    namespace Nonelutentry179{
        using Addr = Register::Address<0x00500ecc,0xffffffff>;
    }
    namespace Nonelutentry180{
        using Addr = Register::Address<0x00500ed0,0xffffffff>;
    }
    namespace Nonelutentry181{
        using Addr = Register::Address<0x00500ed4,0xffffffff>;
    }
    namespace Nonelutentry182{
        using Addr = Register::Address<0x00500ed8,0xffffffff>;
    }
    namespace Nonelutentry183{
        using Addr = Register::Address<0x00500edc,0xffffffff>;
    }
    namespace Nonelutentry184{
        using Addr = Register::Address<0x00500ee0,0xffffffff>;
    }
    namespace Nonelutentry185{
        using Addr = Register::Address<0x00500ee4,0xffffffff>;
    }
    namespace Nonelutentry186{
        using Addr = Register::Address<0x00500ee8,0xffffffff>;
    }
    namespace Nonelutentry187{
        using Addr = Register::Address<0x00500eec,0xffffffff>;
    }
    namespace Nonelutentry188{
        using Addr = Register::Address<0x00500ef0,0xffffffff>;
    }
    namespace Nonelutentry189{
        using Addr = Register::Address<0x00500ef4,0xffffffff>;
    }
    namespace Nonelutentry190{
        using Addr = Register::Address<0x00500ef8,0xffffffff>;
    }
    namespace Nonelutentry191{
        using Addr = Register::Address<0x00500efc,0xffffffff>;
    }
    namespace Nonelutentry192{
        using Addr = Register::Address<0x00500f00,0xffffffff>;
    }
    namespace Nonelutentry193{
        using Addr = Register::Address<0x00500f04,0xffffffff>;
    }
    namespace Nonelutentry194{
        using Addr = Register::Address<0x00500f08,0xffffffff>;
    }
    namespace Nonelutentry195{
        using Addr = Register::Address<0x00500f0c,0xffffffff>;
    }
    namespace Nonelutentry196{
        using Addr = Register::Address<0x00500f10,0xffffffff>;
    }
    namespace Nonelutentry197{
        using Addr = Register::Address<0x00500f14,0xffffffff>;
    }
    namespace Nonelutentry198{
        using Addr = Register::Address<0x00500f18,0xffffffff>;
    }
    namespace Nonelutentry199{
        using Addr = Register::Address<0x00500f1c,0xffffffff>;
    }
    namespace Nonelutentry200{
        using Addr = Register::Address<0x00500f20,0xffffffff>;
    }
    namespace Nonelutentry201{
        using Addr = Register::Address<0x00500f24,0xffffffff>;
    }
    namespace Nonelutentry202{
        using Addr = Register::Address<0x00500f28,0xffffffff>;
    }
    namespace Nonelutentry203{
        using Addr = Register::Address<0x00500f2c,0xffffffff>;
    }
    namespace Nonelutentry204{
        using Addr = Register::Address<0x00500f30,0xffffffff>;
    }
    namespace Nonelutentry205{
        using Addr = Register::Address<0x00500f34,0xffffffff>;
    }
    namespace Nonelutentry206{
        using Addr = Register::Address<0x00500f38,0xffffffff>;
    }
    namespace Nonelutentry207{
        using Addr = Register::Address<0x00500f3c,0xffffffff>;
    }
    namespace Nonelutentry208{
        using Addr = Register::Address<0x00500f40,0xffffffff>;
    }
    namespace Nonelutentry209{
        using Addr = Register::Address<0x00500f44,0xffffffff>;
    }
    namespace Nonelutentry210{
        using Addr = Register::Address<0x00500f48,0xffffffff>;
    }
    namespace Nonelutentry211{
        using Addr = Register::Address<0x00500f4c,0xffffffff>;
    }
    namespace Nonelutentry212{
        using Addr = Register::Address<0x00500f50,0xffffffff>;
    }
    namespace Nonelutentry213{
        using Addr = Register::Address<0x00500f54,0xffffffff>;
    }
    namespace Nonelutentry214{
        using Addr = Register::Address<0x00500f58,0xffffffff>;
    }
    namespace Nonelutentry215{
        using Addr = Register::Address<0x00500f5c,0xffffffff>;
    }
    namespace Nonelutentry216{
        using Addr = Register::Address<0x00500f60,0xffffffff>;
    }
    namespace Nonelutentry217{
        using Addr = Register::Address<0x00500f64,0xffffffff>;
    }
    namespace Nonelutentry218{
        using Addr = Register::Address<0x00500f68,0xffffffff>;
    }
    namespace Nonelutentry219{
        using Addr = Register::Address<0x00500f6c,0xffffffff>;
    }
    namespace Nonelutentry220{
        using Addr = Register::Address<0x00500f70,0xffffffff>;
    }
    namespace Nonelutentry221{
        using Addr = Register::Address<0x00500f74,0xffffffff>;
    }
    namespace Nonelutentry222{
        using Addr = Register::Address<0x00500f78,0xffffffff>;
    }
    namespace Nonelutentry223{
        using Addr = Register::Address<0x00500f7c,0xffffffff>;
    }
    namespace Nonelutentry224{
        using Addr = Register::Address<0x00500f80,0xffffffff>;
    }
    namespace Nonelutentry225{
        using Addr = Register::Address<0x00500f84,0xffffffff>;
    }
    namespace Nonelutentry226{
        using Addr = Register::Address<0x00500f88,0xffffffff>;
    }
    namespace Nonelutentry227{
        using Addr = Register::Address<0x00500f8c,0xffffffff>;
    }
    namespace Nonelutentry228{
        using Addr = Register::Address<0x00500f90,0xffffffff>;
    }
    namespace Nonelutentry229{
        using Addr = Register::Address<0x00500f94,0xffffffff>;
    }
    namespace Nonelutentry230{
        using Addr = Register::Address<0x00500f98,0xffffffff>;
    }
    namespace Nonelutentry231{
        using Addr = Register::Address<0x00500f9c,0xffffffff>;
    }
    namespace Nonelutentry232{
        using Addr = Register::Address<0x00500fa0,0xffffffff>;
    }
    namespace Nonelutentry233{
        using Addr = Register::Address<0x00500fa4,0xffffffff>;
    }
    namespace Nonelutentry234{
        using Addr = Register::Address<0x00500fa8,0xffffffff>;
    }
    namespace Nonelutentry235{
        using Addr = Register::Address<0x00500fac,0xffffffff>;
    }
    namespace Nonelutentry236{
        using Addr = Register::Address<0x00500fb0,0xffffffff>;
    }
    namespace Nonelutentry237{
        using Addr = Register::Address<0x00500fb4,0xffffffff>;
    }
    namespace Nonelutentry238{
        using Addr = Register::Address<0x00500fb8,0xffffffff>;
    }
    namespace Nonelutentry239{
        using Addr = Register::Address<0x00500fbc,0xffffffff>;
    }
    namespace Nonelutentry240{
        using Addr = Register::Address<0x00500fc0,0xffffffff>;
    }
    namespace Nonelutentry241{
        using Addr = Register::Address<0x00500fc4,0xffffffff>;
    }
    namespace Nonelutentry242{
        using Addr = Register::Address<0x00500fc8,0xffffffff>;
    }
    namespace Nonelutentry243{
        using Addr = Register::Address<0x00500fcc,0xffffffff>;
    }
    namespace Nonelutentry244{
        using Addr = Register::Address<0x00500fd0,0xffffffff>;
    }
    namespace Nonelutentry245{
        using Addr = Register::Address<0x00500fd4,0xffffffff>;
    }
    namespace Nonelutentry246{
        using Addr = Register::Address<0x00500fd8,0xffffffff>;
    }
    namespace Nonelutentry247{
        using Addr = Register::Address<0x00500fdc,0xffffffff>;
    }
    namespace Nonelutentry248{
        using Addr = Register::Address<0x00500fe0,0xffffffff>;
    }
    namespace Nonelutentry249{
        using Addr = Register::Address<0x00500fe4,0xffffffff>;
    }
    namespace Nonelutentry250{
        using Addr = Register::Address<0x00500fe8,0xffffffff>;
    }
    namespace Nonelutentry251{
        using Addr = Register::Address<0x00500fec,0xffffffff>;
    }
    namespace Nonelutentry252{
        using Addr = Register::Address<0x00500ff0,0xffffffff>;
    }
    namespace Nonelutentry253{
        using Addr = Register::Address<0x00500ff4,0xffffffff>;
    }
    namespace Nonelutentry254{
        using Addr = Register::Address<0x00500ff8,0xffffffff>;
    }
    namespace Nonelutentry255{
        using Addr = Register::Address<0x00500ffc,0xffffffff>;
    }
}
