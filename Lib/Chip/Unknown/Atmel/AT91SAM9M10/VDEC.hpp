#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace VDEC_idr{
        using Addr = Register::Address<0x00900000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BUILD_VER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4)> MINOR_VER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> MAJOR_VER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> PROD_ID; 
    }
    namespace VDEC_dir{
        using Addr = Register::Address<0x00900004,0xfff80eee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ISET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> BE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ASOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ISE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> JPEGSD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TO; 
    }
    namespace VDEC_ddcr{
        using Addr = Register::Address<0x00900008,0xff580000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> MAX_BURST_LEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DO_LE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> INTCE_LE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DDCGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,11)> LAT_COMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DOPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> AHB_BURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DI_LE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> HTI; 
    }
    namespace VDEC_ctlr0{
        using Addr = Register::Address<0x0090000c,0x070206ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> REFFIRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> QUANT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FILTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OUTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> REFFIELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FORWMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PICFIELD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PICTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PICBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PICSTRUCT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PICMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RLCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> DEC_MODE; 
    }
    namespace VDEC_ctlr1{
        using Addr = Register::Address<0x00900010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> REF_FRAMES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TOPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AVSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,7)> HEIGHT_OFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,11)> PIC_HEIGHT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,19)> WIDTH_OFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,23)> PIC_WIDTH; 
    }
    namespace VDEC_ctlr2{
        using Addr = Register::Address<0x00900014,0x03003ffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FIELDPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,14)> QP_FILT_CR_OFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,19)> QP_FILT_CB_OFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26)> STREAM_START_BIT; 
    }
    namespace VDEC_ctlr3{
        using Addr = Register::Address<0x00900018,0x01000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> STREAM_LEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,25)> INIT_QP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ST_COD_EN; 
    }
    namespace VDEC_ctlr4{
        using Addr = Register::Address<0x0090001c,0x03e00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> FRAME_NUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> FRAME_NUM_LEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> W_BIPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> W_PRED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DIRMV_PRED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CABAC; 
    }
    namespace VDEC_ctlr5{
        using Addr = Register::Address<0x00900020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> IDR_PIC_ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IDREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,17)> REF_PIC_LEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EIGHT58; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> RD_PIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FILT_CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CONS_INTRA; 
    }
    namespace VDEC_ctlr6{
        using Addr = Register::Address<0x00900024,0x00003f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POC_LEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,14)> REF_IDX0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,19)> REF_IDX1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PPS_ID; 
    }
    namespace VDEC_dmvba{
        using Addr = Register::Address<0x00900028,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> MV_CONTROL_BASE; 
    }
    namespace VDEC_ctlr7{
        using Addr = Register::Address<0x0090002c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_rlcvlcba{
        using Addr = Register::Address<0x00900030,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_pictba{
        using Addr = Register::Address<0x00900034,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_pidxba0{
        using Addr = Register::Address<0x00900038,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_pidxba1{
        using Addr = Register::Address<0x0090003c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_pidxba2{
        using Addr = Register::Address<0x00900040,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_pidxba3{
        using Addr = Register::Address<0x00900044,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_pidxba4{
        using Addr = Register::Address<0x00900048,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_pidxba5{
        using Addr = Register::Address<0x0090004c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_pidxba6{
        using Addr = Register::Address<0x00900050,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_pidxba7{
        using Addr = Register::Address<0x00900054,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_pidxba8{
        using Addr = Register::Address<0x00900058,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_pidxba9{
        using Addr = Register::Address<0x0090005c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_pidxba10{
        using Addr = Register::Address<0x00900060,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_pidxba11{
        using Addr = Register::Address<0x00900064,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_pidxba12{
        using Addr = Register::Address<0x00900068,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_pidxba13{
        using Addr = Register::Address<0x0090006c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_pidxba14{
        using Addr = Register::Address<0x00900070,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_pidxba15{
        using Addr = Register::Address<0x00900074,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_pnr0{
        using Addr = Register::Address<0x00900078,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> REFER0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> REFER1; 
    }
    namespace VDEC_pnr1{
        using Addr = Register::Address<0x0090007c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> REFER2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> REFER3; 
    }
    namespace VDEC_pnr2{
        using Addr = Register::Address<0x00900080,0xffffffff>;
    }
    namespace VDEC_pnr3{
        using Addr = Register::Address<0x00900084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> REFER4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> REFER5; 
    }
    namespace VDEC_pnr4{
        using Addr = Register::Address<0x00900088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> REFER8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> REFER9; 
    }
    namespace VDEC_pnr5{
        using Addr = Register::Address<0x0090008c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> REFER10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> REFER11; 
    }
    namespace VDEC_pnr6{
        using Addr = Register::Address<0x00900090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> REFER12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> REFER13; 
    }
    namespace VDEC_pnr7{
        using Addr = Register::Address<0x00900094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> REFER14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> REFER15; 
    }
    namespace VDEC_pltfr{
        using Addr = Register::Address<0x00900098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> LTF; 
    }
    namespace VDEC_pvfr{
        using Addr = Register::Address<0x0090009c,0xffffffff>;
    }
    namespace VDEC_sdtba{
        using Addr = Register::Address<0x009000a0,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_dmmvba{
        using Addr = Register::Address<0x009000a4,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> BA; 
    }
    namespace VDEC_irplr0{
        using Addr = Register::Address<0x009000a8,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> IREFL_FW0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> IREFL_BW0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> IREFL_FW1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> IREFL_BW1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,20)> IREFL_FW2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,25)> IREFL_BW2; 
    }
    namespace VDEC_irplr1{
        using Addr = Register::Address<0x009000ac,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> IREFL_FW3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> IREFL_BW3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> IREFL_FW4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> IREFL_BW4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,20)> IREFL_FW5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,25)> IREFL_BW5; 
    }
    namespace VDEC_irplr2{
        using Addr = Register::Address<0x009000b0,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> IREFL_FW6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> IREFL_BW6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> IREFL_FW7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> IREFL_BW7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,20)> IREFL_FW8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,25)> IREFL_BW8; 
    }
    namespace VDEC_irplr3{
        using Addr = Register::Address<0x009000b4,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> IREFL_FW9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> IREFL_BW9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> IREFL_FW10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> IREFL_BW10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,20)> IREFL_FW11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,25)> IREFL_BW11; 
    }
    namespace VDEC_irplr4{
        using Addr = Register::Address<0x009000b8,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> IREFL_FW12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> IREFL_BW12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> IREFL_FW13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> IREFL_BW13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,20)> IREFL_FW14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,25)> IREFL_BW14; 
    }
    namespace VDEC_irplr5{
        using Addr = Register::Address<0x009000bc,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> IREFL_FW15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> IREFL_BW15; 
    }
    namespace VDEC_ecr{
        using Addr = Register::Address<0x009000c0,0x00007fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,15)> STARTMB_Y; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,23)> STARTMB_X; 
    }
}
