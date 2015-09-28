#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedmabaddr1{
        using Addr = Register::Address<0x00600000,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BADDR_U; 
    }
    namespace Nonedmabaddr2{
        using Addr = Register::Address<0x00600004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BADDR_L; 
    }
    namespace Nonedmafrmpt1{
        using Addr = Register::Address<0x00600008,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0)> FRMPT_U; 
    }
    namespace Nonedmafrmpt2{
        using Addr = Register::Address<0x0060000c,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0)> FRMPT_L; 
    }
    namespace Nonedmafrmadd1{
        using Addr = Register::Address<0x00600010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FRMADD_U; 
    }
    namespace Nonedmafrmadd2{
        using Addr = Register::Address<0x00600014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FRMADD_L; 
    }
    namespace Nonedmafrmcfg{
        using Addr = Register::Address<0x00600018,0x80800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0)> FRMSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> BRSTLN; 
    }
    namespace Nonedmacon{
        using Addr = Register::Address<0x0060001c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMARST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMABUSY; 
    }
    namespace Nonelcdcon1{
        using Addr = Register::Address<0x00600800,0x00000ffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,12)> CLKVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,21)> LINECNT; 
    }
    namespace Nonelcdcon2{
        using Addr = Register::Address<0x00600804,0x3fff6000>;
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
        using Addr = Register::Address<0x00600808,0x70c00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> VFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> VBP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> VPW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> VHDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STUCKTO1; 
    }
    namespace Nonelcdtim2{
        using Addr = Register::Address<0x0060080c,0x001fc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> HBP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> HPW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,21)> HFP; 
    }
    namespace Nonelcdfrmcfg{
        using Addr = Register::Address<0x00600810,0x001ff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> LINEVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,21)> HOZVAL; 
    }
    namespace Nonelcdfifo{
        using Addr = Register::Address<0x00600814,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> FIFOTH; 
    }
    namespace Nonelcdmval{
        using Addr = Register::Address<0x00600818,0x7fffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MMODE; 
    }
    namespace Nonedp1_2{
        using Addr = Register::Address<0x0060081c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DP1_2; 
    }
    namespace Nonedp4_7{
        using Addr = Register::Address<0x00600820,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DP4_7; 
    }
    namespace Nonedp3_5{
        using Addr = Register::Address<0x00600824,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,0)> DP3_5; 
    }
    namespace Nonedp2_3{
        using Addr = Register::Address<0x00600828,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DP2_3; 
    }
    namespace Nonedp5_7{
        using Addr = Register::Address<0x0060082c,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DP5_7; 
    }
    namespace Nonedp3_4{
        using Addr = Register::Address<0x00600830,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DP3_4; 
    }
    namespace Nonedp4_5{
        using Addr = Register::Address<0x00600834,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,0)> DP4_5; 
    }
    namespace Nonedp6_7{
        using Addr = Register::Address<0x00600838,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DP6_7; 
    }
    namespace Nonepwrcon{
        using Addr = Register::Address<0x0060083c,0x7fffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LCD_PWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> GUARD_TIME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LCD_BUSY; 
    }
    namespace Nonecontrast_ctr{
        using Addr = Register::Address<0x00600840,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENA; 
    }
    namespace Nonecontrast_val{
        using Addr = Register::Address<0x00600844,0xffffffff>;
    }
    namespace Nonelcd_ier{
        using Addr = Register::Address<0x00600848,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LNIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSTLNIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UFLWIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OWRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MERIE; 
    }
    namespace Nonelcd_idr{
        using Addr = Register::Address<0x0060084c,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LNID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSTLNID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOFID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UFLWID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OWRID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MERID; 
    }
    namespace Nonelcd_imr{
        using Addr = Register::Address<0x00600850,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LNIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSTLNIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOFIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UFLWIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OWRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MERIM; 
    }
    namespace Nonelcd_isr{
        using Addr = Register::Address<0x00600854,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LNIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSTLNIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UFLWIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OWRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MERIS; 
    }
    namespace Nonelcd_icr{
        using Addr = Register::Address<0x00600858,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LNIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSTLNIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UFLWIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OWRIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MERIC; 
    }
    namespace Nonelcd_wpcr{
        using Addr = Register::Address<0x006008e4,0xffffffff>;
    }
    namespace Nonelcd_wpsr{
        using Addr = Register::Address<0x006008e8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
    namespace Nonelutentry0{
        using Addr = Register::Address<0x00600c00,0xffffffff>;
    }
    namespace Nonelutentry1{
        using Addr = Register::Address<0x00600c04,0xffffffff>;
    }
    namespace Nonelutentry2{
        using Addr = Register::Address<0x00600c08,0xffffffff>;
    }
    namespace Nonelutentry3{
        using Addr = Register::Address<0x00600c0c,0xffffffff>;
    }
    namespace Nonelutentry4{
        using Addr = Register::Address<0x00600c10,0xffffffff>;
    }
    namespace Nonelutentry5{
        using Addr = Register::Address<0x00600c14,0xffffffff>;
    }
    namespace Nonelutentry6{
        using Addr = Register::Address<0x00600c18,0xffffffff>;
    }
    namespace Nonelutentry7{
        using Addr = Register::Address<0x00600c1c,0xffffffff>;
    }
    namespace Nonelutentry8{
        using Addr = Register::Address<0x00600c20,0xffffffff>;
    }
    namespace Nonelutentry9{
        using Addr = Register::Address<0x00600c24,0xffffffff>;
    }
    namespace Nonelutentry10{
        using Addr = Register::Address<0x00600c28,0xffffffff>;
    }
    namespace Nonelutentry11{
        using Addr = Register::Address<0x00600c2c,0xffffffff>;
    }
    namespace Nonelutentry12{
        using Addr = Register::Address<0x00600c30,0xffffffff>;
    }
    namespace Nonelutentry13{
        using Addr = Register::Address<0x00600c34,0xffffffff>;
    }
    namespace Nonelutentry14{
        using Addr = Register::Address<0x00600c38,0xffffffff>;
    }
    namespace Nonelutentry15{
        using Addr = Register::Address<0x00600c3c,0xffffffff>;
    }
    namespace Nonelutentry16{
        using Addr = Register::Address<0x00600c40,0xffffffff>;
    }
    namespace Nonelutentry17{
        using Addr = Register::Address<0x00600c44,0xffffffff>;
    }
    namespace Nonelutentry18{
        using Addr = Register::Address<0x00600c48,0xffffffff>;
    }
    namespace Nonelutentry19{
        using Addr = Register::Address<0x00600c4c,0xffffffff>;
    }
    namespace Nonelutentry20{
        using Addr = Register::Address<0x00600c50,0xffffffff>;
    }
    namespace Nonelutentry21{
        using Addr = Register::Address<0x00600c54,0xffffffff>;
    }
    namespace Nonelutentry22{
        using Addr = Register::Address<0x00600c58,0xffffffff>;
    }
    namespace Nonelutentry23{
        using Addr = Register::Address<0x00600c5c,0xffffffff>;
    }
    namespace Nonelutentry24{
        using Addr = Register::Address<0x00600c60,0xffffffff>;
    }
    namespace Nonelutentry25{
        using Addr = Register::Address<0x00600c64,0xffffffff>;
    }
    namespace Nonelutentry26{
        using Addr = Register::Address<0x00600c68,0xffffffff>;
    }
    namespace Nonelutentry27{
        using Addr = Register::Address<0x00600c6c,0xffffffff>;
    }
    namespace Nonelutentry28{
        using Addr = Register::Address<0x00600c70,0xffffffff>;
    }
    namespace Nonelutentry29{
        using Addr = Register::Address<0x00600c74,0xffffffff>;
    }
    namespace Nonelutentry30{
        using Addr = Register::Address<0x00600c78,0xffffffff>;
    }
    namespace Nonelutentry31{
        using Addr = Register::Address<0x00600c7c,0xffffffff>;
    }
    namespace Nonelutentry32{
        using Addr = Register::Address<0x00600c80,0xffffffff>;
    }
    namespace Nonelutentry33{
        using Addr = Register::Address<0x00600c84,0xffffffff>;
    }
    namespace Nonelutentry34{
        using Addr = Register::Address<0x00600c88,0xffffffff>;
    }
    namespace Nonelutentry35{
        using Addr = Register::Address<0x00600c8c,0xffffffff>;
    }
    namespace Nonelutentry36{
        using Addr = Register::Address<0x00600c90,0xffffffff>;
    }
    namespace Nonelutentry37{
        using Addr = Register::Address<0x00600c94,0xffffffff>;
    }
    namespace Nonelutentry38{
        using Addr = Register::Address<0x00600c98,0xffffffff>;
    }
    namespace Nonelutentry39{
        using Addr = Register::Address<0x00600c9c,0xffffffff>;
    }
    namespace Nonelutentry40{
        using Addr = Register::Address<0x00600ca0,0xffffffff>;
    }
    namespace Nonelutentry41{
        using Addr = Register::Address<0x00600ca4,0xffffffff>;
    }
    namespace Nonelutentry42{
        using Addr = Register::Address<0x00600ca8,0xffffffff>;
    }
    namespace Nonelutentry43{
        using Addr = Register::Address<0x00600cac,0xffffffff>;
    }
    namespace Nonelutentry44{
        using Addr = Register::Address<0x00600cb0,0xffffffff>;
    }
    namespace Nonelutentry45{
        using Addr = Register::Address<0x00600cb4,0xffffffff>;
    }
    namespace Nonelutentry46{
        using Addr = Register::Address<0x00600cb8,0xffffffff>;
    }
    namespace Nonelutentry47{
        using Addr = Register::Address<0x00600cbc,0xffffffff>;
    }
    namespace Nonelutentry48{
        using Addr = Register::Address<0x00600cc0,0xffffffff>;
    }
    namespace Nonelutentry49{
        using Addr = Register::Address<0x00600cc4,0xffffffff>;
    }
    namespace Nonelutentry50{
        using Addr = Register::Address<0x00600cc8,0xffffffff>;
    }
    namespace Nonelutentry51{
        using Addr = Register::Address<0x00600ccc,0xffffffff>;
    }
    namespace Nonelutentry52{
        using Addr = Register::Address<0x00600cd0,0xffffffff>;
    }
    namespace Nonelutentry53{
        using Addr = Register::Address<0x00600cd4,0xffffffff>;
    }
    namespace Nonelutentry54{
        using Addr = Register::Address<0x00600cd8,0xffffffff>;
    }
    namespace Nonelutentry55{
        using Addr = Register::Address<0x00600cdc,0xffffffff>;
    }
    namespace Nonelutentry56{
        using Addr = Register::Address<0x00600ce0,0xffffffff>;
    }
    namespace Nonelutentry57{
        using Addr = Register::Address<0x00600ce4,0xffffffff>;
    }
    namespace Nonelutentry58{
        using Addr = Register::Address<0x00600ce8,0xffffffff>;
    }
    namespace Nonelutentry59{
        using Addr = Register::Address<0x00600cec,0xffffffff>;
    }
    namespace Nonelutentry60{
        using Addr = Register::Address<0x00600cf0,0xffffffff>;
    }
    namespace Nonelutentry61{
        using Addr = Register::Address<0x00600cf4,0xffffffff>;
    }
    namespace Nonelutentry62{
        using Addr = Register::Address<0x00600cf8,0xffffffff>;
    }
    namespace Nonelutentry63{
        using Addr = Register::Address<0x00600cfc,0xffffffff>;
    }
    namespace Nonelutentry64{
        using Addr = Register::Address<0x00600d00,0xffffffff>;
    }
    namespace Nonelutentry65{
        using Addr = Register::Address<0x00600d04,0xffffffff>;
    }
    namespace Nonelutentry66{
        using Addr = Register::Address<0x00600d08,0xffffffff>;
    }
    namespace Nonelutentry67{
        using Addr = Register::Address<0x00600d0c,0xffffffff>;
    }
    namespace Nonelutentry68{
        using Addr = Register::Address<0x00600d10,0xffffffff>;
    }
    namespace Nonelutentry69{
        using Addr = Register::Address<0x00600d14,0xffffffff>;
    }
    namespace Nonelutentry70{
        using Addr = Register::Address<0x00600d18,0xffffffff>;
    }
    namespace Nonelutentry71{
        using Addr = Register::Address<0x00600d1c,0xffffffff>;
    }
    namespace Nonelutentry72{
        using Addr = Register::Address<0x00600d20,0xffffffff>;
    }
    namespace Nonelutentry73{
        using Addr = Register::Address<0x00600d24,0xffffffff>;
    }
    namespace Nonelutentry74{
        using Addr = Register::Address<0x00600d28,0xffffffff>;
    }
    namespace Nonelutentry75{
        using Addr = Register::Address<0x00600d2c,0xffffffff>;
    }
    namespace Nonelutentry76{
        using Addr = Register::Address<0x00600d30,0xffffffff>;
    }
    namespace Nonelutentry77{
        using Addr = Register::Address<0x00600d34,0xffffffff>;
    }
    namespace Nonelutentry78{
        using Addr = Register::Address<0x00600d38,0xffffffff>;
    }
    namespace Nonelutentry79{
        using Addr = Register::Address<0x00600d3c,0xffffffff>;
    }
    namespace Nonelutentry80{
        using Addr = Register::Address<0x00600d40,0xffffffff>;
    }
    namespace Nonelutentry81{
        using Addr = Register::Address<0x00600d44,0xffffffff>;
    }
    namespace Nonelutentry82{
        using Addr = Register::Address<0x00600d48,0xffffffff>;
    }
    namespace Nonelutentry83{
        using Addr = Register::Address<0x00600d4c,0xffffffff>;
    }
    namespace Nonelutentry84{
        using Addr = Register::Address<0x00600d50,0xffffffff>;
    }
    namespace Nonelutentry85{
        using Addr = Register::Address<0x00600d54,0xffffffff>;
    }
    namespace Nonelutentry86{
        using Addr = Register::Address<0x00600d58,0xffffffff>;
    }
    namespace Nonelutentry87{
        using Addr = Register::Address<0x00600d5c,0xffffffff>;
    }
    namespace Nonelutentry88{
        using Addr = Register::Address<0x00600d60,0xffffffff>;
    }
    namespace Nonelutentry89{
        using Addr = Register::Address<0x00600d64,0xffffffff>;
    }
    namespace Nonelutentry90{
        using Addr = Register::Address<0x00600d68,0xffffffff>;
    }
    namespace Nonelutentry91{
        using Addr = Register::Address<0x00600d6c,0xffffffff>;
    }
    namespace Nonelutentry92{
        using Addr = Register::Address<0x00600d70,0xffffffff>;
    }
    namespace Nonelutentry93{
        using Addr = Register::Address<0x00600d74,0xffffffff>;
    }
    namespace Nonelutentry94{
        using Addr = Register::Address<0x00600d78,0xffffffff>;
    }
    namespace Nonelutentry95{
        using Addr = Register::Address<0x00600d7c,0xffffffff>;
    }
    namespace Nonelutentry96{
        using Addr = Register::Address<0x00600d80,0xffffffff>;
    }
    namespace Nonelutentry97{
        using Addr = Register::Address<0x00600d84,0xffffffff>;
    }
    namespace Nonelutentry98{
        using Addr = Register::Address<0x00600d88,0xffffffff>;
    }
    namespace Nonelutentry99{
        using Addr = Register::Address<0x00600d8c,0xffffffff>;
    }
    namespace Nonelutentry100{
        using Addr = Register::Address<0x00600d90,0xffffffff>;
    }
    namespace Nonelutentry101{
        using Addr = Register::Address<0x00600d94,0xffffffff>;
    }
    namespace Nonelutentry102{
        using Addr = Register::Address<0x00600d98,0xffffffff>;
    }
    namespace Nonelutentry103{
        using Addr = Register::Address<0x00600d9c,0xffffffff>;
    }
    namespace Nonelutentry104{
        using Addr = Register::Address<0x00600da0,0xffffffff>;
    }
    namespace Nonelutentry105{
        using Addr = Register::Address<0x00600da4,0xffffffff>;
    }
    namespace Nonelutentry106{
        using Addr = Register::Address<0x00600da8,0xffffffff>;
    }
    namespace Nonelutentry107{
        using Addr = Register::Address<0x00600dac,0xffffffff>;
    }
    namespace Nonelutentry108{
        using Addr = Register::Address<0x00600db0,0xffffffff>;
    }
    namespace Nonelutentry109{
        using Addr = Register::Address<0x00600db4,0xffffffff>;
    }
    namespace Nonelutentry110{
        using Addr = Register::Address<0x00600db8,0xffffffff>;
    }
    namespace Nonelutentry111{
        using Addr = Register::Address<0x00600dbc,0xffffffff>;
    }
    namespace Nonelutentry112{
        using Addr = Register::Address<0x00600dc0,0xffffffff>;
    }
    namespace Nonelutentry113{
        using Addr = Register::Address<0x00600dc4,0xffffffff>;
    }
    namespace Nonelutentry114{
        using Addr = Register::Address<0x00600dc8,0xffffffff>;
    }
    namespace Nonelutentry115{
        using Addr = Register::Address<0x00600dcc,0xffffffff>;
    }
    namespace Nonelutentry116{
        using Addr = Register::Address<0x00600dd0,0xffffffff>;
    }
    namespace Nonelutentry117{
        using Addr = Register::Address<0x00600dd4,0xffffffff>;
    }
    namespace Nonelutentry118{
        using Addr = Register::Address<0x00600dd8,0xffffffff>;
    }
    namespace Nonelutentry119{
        using Addr = Register::Address<0x00600ddc,0xffffffff>;
    }
    namespace Nonelutentry120{
        using Addr = Register::Address<0x00600de0,0xffffffff>;
    }
    namespace Nonelutentry121{
        using Addr = Register::Address<0x00600de4,0xffffffff>;
    }
    namespace Nonelutentry122{
        using Addr = Register::Address<0x00600de8,0xffffffff>;
    }
    namespace Nonelutentry123{
        using Addr = Register::Address<0x00600dec,0xffffffff>;
    }
    namespace Nonelutentry124{
        using Addr = Register::Address<0x00600df0,0xffffffff>;
    }
    namespace Nonelutentry125{
        using Addr = Register::Address<0x00600df4,0xffffffff>;
    }
    namespace Nonelutentry126{
        using Addr = Register::Address<0x00600df8,0xffffffff>;
    }
    namespace Nonelutentry127{
        using Addr = Register::Address<0x00600dfc,0xffffffff>;
    }
    namespace Nonelutentry128{
        using Addr = Register::Address<0x00600e00,0xffffffff>;
    }
    namespace Nonelutentry129{
        using Addr = Register::Address<0x00600e04,0xffffffff>;
    }
    namespace Nonelutentry130{
        using Addr = Register::Address<0x00600e08,0xffffffff>;
    }
    namespace Nonelutentry131{
        using Addr = Register::Address<0x00600e0c,0xffffffff>;
    }
    namespace Nonelutentry132{
        using Addr = Register::Address<0x00600e10,0xffffffff>;
    }
    namespace Nonelutentry133{
        using Addr = Register::Address<0x00600e14,0xffffffff>;
    }
    namespace Nonelutentry134{
        using Addr = Register::Address<0x00600e18,0xffffffff>;
    }
    namespace Nonelutentry135{
        using Addr = Register::Address<0x00600e1c,0xffffffff>;
    }
    namespace Nonelutentry136{
        using Addr = Register::Address<0x00600e20,0xffffffff>;
    }
    namespace Nonelutentry137{
        using Addr = Register::Address<0x00600e24,0xffffffff>;
    }
    namespace Nonelutentry138{
        using Addr = Register::Address<0x00600e28,0xffffffff>;
    }
    namespace Nonelutentry139{
        using Addr = Register::Address<0x00600e2c,0xffffffff>;
    }
    namespace Nonelutentry140{
        using Addr = Register::Address<0x00600e30,0xffffffff>;
    }
    namespace Nonelutentry141{
        using Addr = Register::Address<0x00600e34,0xffffffff>;
    }
    namespace Nonelutentry142{
        using Addr = Register::Address<0x00600e38,0xffffffff>;
    }
    namespace Nonelutentry143{
        using Addr = Register::Address<0x00600e3c,0xffffffff>;
    }
    namespace Nonelutentry144{
        using Addr = Register::Address<0x00600e40,0xffffffff>;
    }
    namespace Nonelutentry145{
        using Addr = Register::Address<0x00600e44,0xffffffff>;
    }
    namespace Nonelutentry146{
        using Addr = Register::Address<0x00600e48,0xffffffff>;
    }
    namespace Nonelutentry147{
        using Addr = Register::Address<0x00600e4c,0xffffffff>;
    }
    namespace Nonelutentry148{
        using Addr = Register::Address<0x00600e50,0xffffffff>;
    }
    namespace Nonelutentry149{
        using Addr = Register::Address<0x00600e54,0xffffffff>;
    }
    namespace Nonelutentry150{
        using Addr = Register::Address<0x00600e58,0xffffffff>;
    }
    namespace Nonelutentry151{
        using Addr = Register::Address<0x00600e5c,0xffffffff>;
    }
    namespace Nonelutentry152{
        using Addr = Register::Address<0x00600e60,0xffffffff>;
    }
    namespace Nonelutentry153{
        using Addr = Register::Address<0x00600e64,0xffffffff>;
    }
    namespace Nonelutentry154{
        using Addr = Register::Address<0x00600e68,0xffffffff>;
    }
    namespace Nonelutentry155{
        using Addr = Register::Address<0x00600e6c,0xffffffff>;
    }
    namespace Nonelutentry156{
        using Addr = Register::Address<0x00600e70,0xffffffff>;
    }
    namespace Nonelutentry157{
        using Addr = Register::Address<0x00600e74,0xffffffff>;
    }
    namespace Nonelutentry158{
        using Addr = Register::Address<0x00600e78,0xffffffff>;
    }
    namespace Nonelutentry159{
        using Addr = Register::Address<0x00600e7c,0xffffffff>;
    }
    namespace Nonelutentry160{
        using Addr = Register::Address<0x00600e80,0xffffffff>;
    }
    namespace Nonelutentry161{
        using Addr = Register::Address<0x00600e84,0xffffffff>;
    }
    namespace Nonelutentry162{
        using Addr = Register::Address<0x00600e88,0xffffffff>;
    }
    namespace Nonelutentry163{
        using Addr = Register::Address<0x00600e8c,0xffffffff>;
    }
    namespace Nonelutentry164{
        using Addr = Register::Address<0x00600e90,0xffffffff>;
    }
    namespace Nonelutentry165{
        using Addr = Register::Address<0x00600e94,0xffffffff>;
    }
    namespace Nonelutentry166{
        using Addr = Register::Address<0x00600e98,0xffffffff>;
    }
    namespace Nonelutentry167{
        using Addr = Register::Address<0x00600e9c,0xffffffff>;
    }
    namespace Nonelutentry168{
        using Addr = Register::Address<0x00600ea0,0xffffffff>;
    }
    namespace Nonelutentry169{
        using Addr = Register::Address<0x00600ea4,0xffffffff>;
    }
    namespace Nonelutentry170{
        using Addr = Register::Address<0x00600ea8,0xffffffff>;
    }
    namespace Nonelutentry171{
        using Addr = Register::Address<0x00600eac,0xffffffff>;
    }
    namespace Nonelutentry172{
        using Addr = Register::Address<0x00600eb0,0xffffffff>;
    }
    namespace Nonelutentry173{
        using Addr = Register::Address<0x00600eb4,0xffffffff>;
    }
    namespace Nonelutentry174{
        using Addr = Register::Address<0x00600eb8,0xffffffff>;
    }
    namespace Nonelutentry175{
        using Addr = Register::Address<0x00600ebc,0xffffffff>;
    }
    namespace Nonelutentry176{
        using Addr = Register::Address<0x00600ec0,0xffffffff>;
    }
    namespace Nonelutentry177{
        using Addr = Register::Address<0x00600ec4,0xffffffff>;
    }
    namespace Nonelutentry178{
        using Addr = Register::Address<0x00600ec8,0xffffffff>;
    }
    namespace Nonelutentry179{
        using Addr = Register::Address<0x00600ecc,0xffffffff>;
    }
    namespace Nonelutentry180{
        using Addr = Register::Address<0x00600ed0,0xffffffff>;
    }
    namespace Nonelutentry181{
        using Addr = Register::Address<0x00600ed4,0xffffffff>;
    }
    namespace Nonelutentry182{
        using Addr = Register::Address<0x00600ed8,0xffffffff>;
    }
    namespace Nonelutentry183{
        using Addr = Register::Address<0x00600edc,0xffffffff>;
    }
    namespace Nonelutentry184{
        using Addr = Register::Address<0x00600ee0,0xffffffff>;
    }
    namespace Nonelutentry185{
        using Addr = Register::Address<0x00600ee4,0xffffffff>;
    }
    namespace Nonelutentry186{
        using Addr = Register::Address<0x00600ee8,0xffffffff>;
    }
    namespace Nonelutentry187{
        using Addr = Register::Address<0x00600eec,0xffffffff>;
    }
    namespace Nonelutentry188{
        using Addr = Register::Address<0x00600ef0,0xffffffff>;
    }
    namespace Nonelutentry189{
        using Addr = Register::Address<0x00600ef4,0xffffffff>;
    }
    namespace Nonelutentry190{
        using Addr = Register::Address<0x00600ef8,0xffffffff>;
    }
    namespace Nonelutentry191{
        using Addr = Register::Address<0x00600efc,0xffffffff>;
    }
    namespace Nonelutentry192{
        using Addr = Register::Address<0x00600f00,0xffffffff>;
    }
    namespace Nonelutentry193{
        using Addr = Register::Address<0x00600f04,0xffffffff>;
    }
    namespace Nonelutentry194{
        using Addr = Register::Address<0x00600f08,0xffffffff>;
    }
    namespace Nonelutentry195{
        using Addr = Register::Address<0x00600f0c,0xffffffff>;
    }
    namespace Nonelutentry196{
        using Addr = Register::Address<0x00600f10,0xffffffff>;
    }
    namespace Nonelutentry197{
        using Addr = Register::Address<0x00600f14,0xffffffff>;
    }
    namespace Nonelutentry198{
        using Addr = Register::Address<0x00600f18,0xffffffff>;
    }
    namespace Nonelutentry199{
        using Addr = Register::Address<0x00600f1c,0xffffffff>;
    }
    namespace Nonelutentry200{
        using Addr = Register::Address<0x00600f20,0xffffffff>;
    }
    namespace Nonelutentry201{
        using Addr = Register::Address<0x00600f24,0xffffffff>;
    }
    namespace Nonelutentry202{
        using Addr = Register::Address<0x00600f28,0xffffffff>;
    }
    namespace Nonelutentry203{
        using Addr = Register::Address<0x00600f2c,0xffffffff>;
    }
    namespace Nonelutentry204{
        using Addr = Register::Address<0x00600f30,0xffffffff>;
    }
    namespace Nonelutentry205{
        using Addr = Register::Address<0x00600f34,0xffffffff>;
    }
    namespace Nonelutentry206{
        using Addr = Register::Address<0x00600f38,0xffffffff>;
    }
    namespace Nonelutentry207{
        using Addr = Register::Address<0x00600f3c,0xffffffff>;
    }
    namespace Nonelutentry208{
        using Addr = Register::Address<0x00600f40,0xffffffff>;
    }
    namespace Nonelutentry209{
        using Addr = Register::Address<0x00600f44,0xffffffff>;
    }
    namespace Nonelutentry210{
        using Addr = Register::Address<0x00600f48,0xffffffff>;
    }
    namespace Nonelutentry211{
        using Addr = Register::Address<0x00600f4c,0xffffffff>;
    }
    namespace Nonelutentry212{
        using Addr = Register::Address<0x00600f50,0xffffffff>;
    }
    namespace Nonelutentry213{
        using Addr = Register::Address<0x00600f54,0xffffffff>;
    }
    namespace Nonelutentry214{
        using Addr = Register::Address<0x00600f58,0xffffffff>;
    }
    namespace Nonelutentry215{
        using Addr = Register::Address<0x00600f5c,0xffffffff>;
    }
    namespace Nonelutentry216{
        using Addr = Register::Address<0x00600f60,0xffffffff>;
    }
    namespace Nonelutentry217{
        using Addr = Register::Address<0x00600f64,0xffffffff>;
    }
    namespace Nonelutentry218{
        using Addr = Register::Address<0x00600f68,0xffffffff>;
    }
    namespace Nonelutentry219{
        using Addr = Register::Address<0x00600f6c,0xffffffff>;
    }
    namespace Nonelutentry220{
        using Addr = Register::Address<0x00600f70,0xffffffff>;
    }
    namespace Nonelutentry221{
        using Addr = Register::Address<0x00600f74,0xffffffff>;
    }
    namespace Nonelutentry222{
        using Addr = Register::Address<0x00600f78,0xffffffff>;
    }
    namespace Nonelutentry223{
        using Addr = Register::Address<0x00600f7c,0xffffffff>;
    }
    namespace Nonelutentry224{
        using Addr = Register::Address<0x00600f80,0xffffffff>;
    }
    namespace Nonelutentry225{
        using Addr = Register::Address<0x00600f84,0xffffffff>;
    }
    namespace Nonelutentry226{
        using Addr = Register::Address<0x00600f88,0xffffffff>;
    }
    namespace Nonelutentry227{
        using Addr = Register::Address<0x00600f8c,0xffffffff>;
    }
    namespace Nonelutentry228{
        using Addr = Register::Address<0x00600f90,0xffffffff>;
    }
    namespace Nonelutentry229{
        using Addr = Register::Address<0x00600f94,0xffffffff>;
    }
    namespace Nonelutentry230{
        using Addr = Register::Address<0x00600f98,0xffffffff>;
    }
    namespace Nonelutentry231{
        using Addr = Register::Address<0x00600f9c,0xffffffff>;
    }
    namespace Nonelutentry232{
        using Addr = Register::Address<0x00600fa0,0xffffffff>;
    }
    namespace Nonelutentry233{
        using Addr = Register::Address<0x00600fa4,0xffffffff>;
    }
    namespace Nonelutentry234{
        using Addr = Register::Address<0x00600fa8,0xffffffff>;
    }
    namespace Nonelutentry235{
        using Addr = Register::Address<0x00600fac,0xffffffff>;
    }
    namespace Nonelutentry236{
        using Addr = Register::Address<0x00600fb0,0xffffffff>;
    }
    namespace Nonelutentry237{
        using Addr = Register::Address<0x00600fb4,0xffffffff>;
    }
    namespace Nonelutentry238{
        using Addr = Register::Address<0x00600fb8,0xffffffff>;
    }
    namespace Nonelutentry239{
        using Addr = Register::Address<0x00600fbc,0xffffffff>;
    }
    namespace Nonelutentry240{
        using Addr = Register::Address<0x00600fc0,0xffffffff>;
    }
    namespace Nonelutentry241{
        using Addr = Register::Address<0x00600fc4,0xffffffff>;
    }
    namespace Nonelutentry242{
        using Addr = Register::Address<0x00600fc8,0xffffffff>;
    }
    namespace Nonelutentry243{
        using Addr = Register::Address<0x00600fcc,0xffffffff>;
    }
    namespace Nonelutentry244{
        using Addr = Register::Address<0x00600fd0,0xffffffff>;
    }
    namespace Nonelutentry245{
        using Addr = Register::Address<0x00600fd4,0xffffffff>;
    }
    namespace Nonelutentry246{
        using Addr = Register::Address<0x00600fd8,0xffffffff>;
    }
    namespace Nonelutentry247{
        using Addr = Register::Address<0x00600fdc,0xffffffff>;
    }
    namespace Nonelutentry248{
        using Addr = Register::Address<0x00600fe0,0xffffffff>;
    }
    namespace Nonelutentry249{
        using Addr = Register::Address<0x00600fe4,0xffffffff>;
    }
    namespace Nonelutentry250{
        using Addr = Register::Address<0x00600fe8,0xffffffff>;
    }
    namespace Nonelutentry251{
        using Addr = Register::Address<0x00600fec,0xffffffff>;
    }
    namespace Nonelutentry252{
        using Addr = Register::Address<0x00600ff0,0xffffffff>;
    }
    namespace Nonelutentry253{
        using Addr = Register::Address<0x00600ff4,0xffffffff>;
    }
    namespace Nonelutentry254{
        using Addr = Register::Address<0x00600ff8,0xffffffff>;
    }
    namespace Nonelutentry255{
        using Addr = Register::Address<0x00600ffc,0xffffffff>;
    }
}
