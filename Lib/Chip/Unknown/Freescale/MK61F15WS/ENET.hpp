#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ENET_eir{
        using Addr = Register::Address<0x400c0004,0x80007fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TS_TIMER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TS_AVAIL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WAKEUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> UN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MII; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RXB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> RXF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TXB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TXF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> GRA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> BABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BABR; 
    }
    namespace ENET_eimr{
        using Addr = Register::Address<0x400c0008,0x80007fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TS_TIMER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TS_AVAIL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WAKEUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> UN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MII; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RXB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> RXF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TXB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TXF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> GRA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> BABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BABR; 
    }
    namespace ENET_rdar{
        using Addr = Register::Address<0x400c0010,0xfeffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RDAR; 
    }
    namespace ENET_tdar{
        using Addr = Register::Address<0x400c0014,0xfeffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TDAR; 
    }
    namespace ENET_ecr{
        using Addr = Register::Address<0x400c0024,0xfffffe20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ETHEREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MAGICEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EN1588; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DBGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STOPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DBSWP; 
    }
    namespace ENET_mmfr{
        using Addr = Register::Address<0x400c0040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,18)> RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,23)> PA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> OP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> ST; 
    }
    namespace ENET_mscr{
        using Addr = Register::Address<0x400c0044,0xfffff801>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,1)> MII_SPEED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIS_PRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> HOLDTIME; 
    }
    namespace ENET_mibc{
        using Addr = Register::Address<0x400c0064,0x1fffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MIB_CLEAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> MIB_IDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MIB_DIS; 
    }
    namespace ENET_rcr{
        using Addr = Register::Address<0x400c0084,0x00000cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LOOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MII_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PROM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BC_REJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RMII_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RMII_10T; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PADEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PAUFWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CRCFWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> MAX_FL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> NLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> GRS; 
    }
    namespace ENET_tcr{
        using Addr = Register::Address<0x400c00c4,0xfffffc02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TFC_PAUSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RFC_PAUSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> ADDSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ADDINS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CRCFWD; 
    }
    namespace ENET_palr{
        using Addr = Register::Address<0x400c00e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PADDR1; 
    }
    namespace ENET_paur{
        using Addr = Register::Address<0x400c00e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> PADDR2; 
    }
    namespace ENET_opd{
        using Addr = Register::Address<0x400c00ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PAUSE_DUR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> OPCODE; 
    }
    namespace ENET_iaur{
        using Addr = Register::Address<0x400c0118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IADDR1; 
    }
    namespace ENET_ialr{
        using Addr = Register::Address<0x400c011c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IADDR2; 
    }
    namespace ENET_gaur{
        using Addr = Register::Address<0x400c0120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GADDR1; 
    }
    namespace ENET_galr{
        using Addr = Register::Address<0x400c0124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GADDR2; 
    }
    namespace ENET_tfwr{
        using Addr = Register::Address<0x400c0144,0xfffffec0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> TFWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STRFWD; 
    }
    namespace ENET_rdsr{
        using Addr = Register::Address<0x400c0180,0x00000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,3)> R_DES_START; 
    }
    namespace ENET_tdsr{
        using Addr = Register::Address<0x400c0184,0x00000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,3)> X_DES_START; 
    }
    namespace ENET_mrbr{
        using Addr = Register::Address<0x400c0188,0xffffc00f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,4)> R_BUF_SIZE; 
    }
    namespace ENET_rsfl{
        using Addr = Register::Address<0x400c0190,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RX_SECTION_FULL; 
    }
    namespace ENET_rsem{
        using Addr = Register::Address<0x400c0194,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RX_SECTION_EMPTY; 
    }
    namespace ENET_raem{
        using Addr = Register::Address<0x400c0198,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RX_ALMOST_EMPTY; 
    }
    namespace ENET_rafl{
        using Addr = Register::Address<0x400c019c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RX_ALMOST_FULL; 
    }
    namespace ENET_tsem{
        using Addr = Register::Address<0x400c01a0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TX_SECTION_EMPTY; 
    }
    namespace ENET_taem{
        using Addr = Register::Address<0x400c01a4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TX_ALMOST_EMPTY; 
    }
    namespace ENET_tafl{
        using Addr = Register::Address<0x400c01a8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TX_ALMOST_FULL; 
    }
    namespace ENET_tipg{
        using Addr = Register::Address<0x400c01ac,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> IPG; 
    }
    namespace ENET_ftrl{
        using Addr = Register::Address<0x400c01b0,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> TRUNC_FL; 
    }
    namespace ENET_tacc{
        using Addr = Register::Address<0x400c01c0,0xffffffe6>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SHIFT16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IPCHK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PROCHK; 
    }
    namespace ENET_racc{
        using Addr = Register::Address<0x400c01c4,0xffffff38>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PADREM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PRODIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LINEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHIFT16; 
    }
    namespace ENET_rmon_t_drop{
        using Addr = Register::Address<0x400c0200,0xffffffff>;
    }
    namespace ENET_rmon_t_packets{
        using Addr = Register::Address<0x400c0204,0xffffffff>;
    }
    namespace ENET_rmon_t_bc_pkt{
        using Addr = Register::Address<0x400c0208,0xffffffff>;
    }
    namespace ENET_rmon_t_mc_pkt{
        using Addr = Register::Address<0x400c020c,0xffffffff>;
    }
    namespace ENET_rmon_t_crc_align{
        using Addr = Register::Address<0x400c0210,0xffffffff>;
    }
    namespace ENET_rmon_t_undersize{
        using Addr = Register::Address<0x400c0214,0xffffffff>;
    }
    namespace ENET_rmon_t_oversize{
        using Addr = Register::Address<0x400c0218,0xffffffff>;
    }
    namespace ENET_rmon_t_frag{
        using Addr = Register::Address<0x400c021c,0xffffffff>;
    }
    namespace ENET_rmon_t_jab{
        using Addr = Register::Address<0x400c0220,0xffffffff>;
    }
    namespace ENET_rmon_t_col{
        using Addr = Register::Address<0x400c0224,0xffffffff>;
    }
    namespace ENET_rmon_t_p64{
        using Addr = Register::Address<0x400c0228,0xffffffff>;
    }
    namespace ENET_rmon_t_p65to127{
        using Addr = Register::Address<0x400c022c,0xffffffff>;
    }
    namespace ENET_rmon_t_p128to255{
        using Addr = Register::Address<0x400c0230,0xffffffff>;
    }
    namespace ENET_rmon_t_p256to511{
        using Addr = Register::Address<0x400c0234,0xffffffff>;
    }
    namespace ENET_rmon_t_p512to1023{
        using Addr = Register::Address<0x400c0238,0xffffffff>;
    }
    namespace ENET_rmon_t_p1024to2047{
        using Addr = Register::Address<0x400c023c,0xffffffff>;
    }
    namespace ENET_rmon_t_p_gte2048{
        using Addr = Register::Address<0x400c0240,0xffffffff>;
    }
    namespace ENET_rmon_t_octets{
        using Addr = Register::Address<0x400c0244,0xffffffff>;
    }
    namespace ENET_ieee_t_drop{
        using Addr = Register::Address<0x400c0248,0xffffffff>;
    }
    namespace ENET_ieee_t_frame_ok{
        using Addr = Register::Address<0x400c024c,0xffffffff>;
    }
    namespace ENET_ieee_t_1col{
        using Addr = Register::Address<0x400c0250,0xffffffff>;
    }
    namespace ENET_ieee_t_mcol{
        using Addr = Register::Address<0x400c0254,0xffffffff>;
    }
    namespace ENET_ieee_t_def{
        using Addr = Register::Address<0x400c0258,0xffffffff>;
    }
    namespace ENET_ieee_t_lcol{
        using Addr = Register::Address<0x400c025c,0xffffffff>;
    }
    namespace ENET_ieee_t_excol{
        using Addr = Register::Address<0x400c0260,0xffffffff>;
    }
    namespace ENET_ieee_t_macerr{
        using Addr = Register::Address<0x400c0264,0xffffffff>;
    }
    namespace ENET_ieee_t_cserr{
        using Addr = Register::Address<0x400c0268,0xffffffff>;
    }
    namespace ENET_ieee_t_sqe{
        using Addr = Register::Address<0x400c026c,0xffffffff>;
    }
    namespace ENET_ieee_t_fdxfc{
        using Addr = Register::Address<0x400c0270,0xffffffff>;
    }
    namespace ENET_ieee_t_octets_ok{
        using Addr = Register::Address<0x400c0274,0xffffffff>;
    }
    namespace ENET_rmon_r_packets{
        using Addr = Register::Address<0x400c0284,0xffffffff>;
    }
    namespace ENET_rmon_r_bc_pkt{
        using Addr = Register::Address<0x400c0288,0xffffffff>;
    }
    namespace ENET_rmon_r_mc_pkt{
        using Addr = Register::Address<0x400c028c,0xffffffff>;
    }
    namespace ENET_rmon_r_crc_align{
        using Addr = Register::Address<0x400c0290,0xffffffff>;
    }
    namespace ENET_rmon_r_undersize{
        using Addr = Register::Address<0x400c0294,0xffffffff>;
    }
    namespace ENET_rmon_r_oversize{
        using Addr = Register::Address<0x400c0298,0xffffffff>;
    }
    namespace ENET_rmon_r_frag{
        using Addr = Register::Address<0x400c029c,0xffffffff>;
    }
    namespace ENET_rmon_r_jab{
        using Addr = Register::Address<0x400c02a0,0xffffffff>;
    }
    namespace ENET_rmon_r_resvd_0{
        using Addr = Register::Address<0x400c02a4,0xffffffff>;
    }
    namespace ENET_rmon_r_p64{
        using Addr = Register::Address<0x400c02a8,0xffffffff>;
    }
    namespace ENET_rmon_r_p65to127{
        using Addr = Register::Address<0x400c02ac,0xffffffff>;
    }
    namespace ENET_rmon_r_p128to255{
        using Addr = Register::Address<0x400c02b0,0xffffffff>;
    }
    namespace ENET_rmon_r_p256to511{
        using Addr = Register::Address<0x400c02b4,0xffffffff>;
    }
    namespace ENET_rmon_r_p512to1023{
        using Addr = Register::Address<0x400c02b8,0xffffffff>;
    }
    namespace ENET_rmon_r_p1024to2047{
        using Addr = Register::Address<0x400c02bc,0xffffffff>;
    }
    namespace ENET_rmon_r_p_gte2048{
        using Addr = Register::Address<0x400c02c0,0xffffffff>;
    }
    namespace ENET_rmon_r_octets{
        using Addr = Register::Address<0x400c02c4,0xffffffff>;
    }
    namespace ENET_ieee_r_drop{
        using Addr = Register::Address<0x400c02c8,0xffffffff>;
    }
    namespace ENET_ieee_r_frame_ok{
        using Addr = Register::Address<0x400c02cc,0xffffffff>;
    }
    namespace ENET_ieee_r_crc{
        using Addr = Register::Address<0x400c02d0,0xffffffff>;
    }
    namespace ENET_ieee_r_align{
        using Addr = Register::Address<0x400c02d4,0xffffffff>;
    }
    namespace ENET_ieee_r_macerr{
        using Addr = Register::Address<0x400c02d8,0xffffffff>;
    }
    namespace ENET_ieee_r_fdxfc{
        using Addr = Register::Address<0x400c02dc,0xffffffff>;
    }
    namespace ENET_ieee_r_octets_ok{
        using Addr = Register::Address<0x400c02e0,0xffffffff>;
    }
    namespace ENET_atcr{
        using Addr = Register::Address<0x400c0400,0xffffd562>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OFFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OFFRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PEREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PINPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RESTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAPTURE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SLAVE; 
    }
    namespace ENET_atvr{
        using Addr = Register::Address<0x400c0404,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ATIME; 
    }
    namespace ENET_atoff{
        using Addr = Register::Address<0x400c0408,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OFFSET; 
    }
    namespace ENET_atper{
        using Addr = Register::Address<0x400c040c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIOD; 
    }
    namespace ENET_atcor{
        using Addr = Register::Address<0x400c0410,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0)> COR; 
    }
    namespace ENET_atinc{
        using Addr = Register::Address<0x400c0414,0xffff8080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> INC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> INC_CORR; 
    }
    namespace ENET_atstmp{
        using Addr = Register::Address<0x400c0418,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TIMESTAMP; 
    }
    namespace ENET_tgsr{
        using Addr = Register::Address<0x400c0604,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TF3; 
    }
    namespace ENET_tcsr0{
        using Addr = Register::Address<0x400c0608,0xffffff02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> TMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TF; 
    }
    namespace ENET_tcsr1{
        using Addr = Register::Address<0x400c0610,0xffffff02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> TMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TF; 
    }
    namespace ENET_tcsr2{
        using Addr = Register::Address<0x400c0618,0xffffff02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> TMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TF; 
    }
    namespace ENET_tcsr3{
        using Addr = Register::Address<0x400c0620,0xffffff02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> TMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TF; 
    }
    namespace ENET_tccr0{
        using Addr = Register::Address<0x400c060c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TCC; 
    }
    namespace ENET_tccr1{
        using Addr = Register::Address<0x400c0614,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TCC; 
    }
    namespace ENET_tccr2{
        using Addr = Register::Address<0x400c061c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TCC; 
    }
    namespace ENET_tccr3{
        using Addr = Register::Address<0x400c0624,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TCC; 
    }
}
