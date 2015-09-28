#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonectrl{
        using Addr = Register::Address<0x4001c000,0xbffffb00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LPWRMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CAL_MODE; 
    }
    namespace Noneseqa_ctrl{
        using Addr = Register::Address<0x4001c008,0x03f38000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> CHANNELS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> TRIGGER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SYNCBYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> BURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SINGLESTEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> LOWPRIO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SEQA_ENA; 
    }
    namespace Noneseqb_ctrl{
        using Addr = Register::Address<0x4001c00c,0x23f38000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> CHANNELS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> TRIGGER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SYNCBYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> BURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SINGLESTEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SEQB_ENA; 
    }
    namespace Noneseqa_gdat{
        using Addr = Register::Address<0x4001c010,0x03f0000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> THCMPRANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> THCMPCROSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26)> CHN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DATAVALID; 
    }
    namespace Noneseqb_gdat{
        using Addr = Register::Address<0x4001c014,0x03f0000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> THCMPRANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> THCMPCROSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26)> CHN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DATAVALID; 
    }
    namespace Nonedat0{
        using Addr = Register::Address<0x4001c020,0x03f0000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> THCMPRANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> THCMPCROSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26)> CHANNEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DATAVALID; 
    }
    namespace Nonedat1{
        using Addr = Register::Address<0x4001c024,0x03f0000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> THCMPRANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> THCMPCROSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26)> CHANNEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DATAVALID; 
    }
    namespace Nonedat2{
        using Addr = Register::Address<0x4001c028,0x03f0000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> THCMPRANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> THCMPCROSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26)> CHANNEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DATAVALID; 
    }
    namespace Nonedat3{
        using Addr = Register::Address<0x4001c02c,0x03f0000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> THCMPRANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> THCMPCROSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26)> CHANNEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DATAVALID; 
    }
    namespace Nonedat4{
        using Addr = Register::Address<0x4001c030,0x03f0000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> THCMPRANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> THCMPCROSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26)> CHANNEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DATAVALID; 
    }
    namespace Nonedat5{
        using Addr = Register::Address<0x4001c034,0x03f0000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> THCMPRANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> THCMPCROSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26)> CHANNEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DATAVALID; 
    }
    namespace Nonedat6{
        using Addr = Register::Address<0x4001c038,0x03f0000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> THCMPRANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> THCMPCROSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26)> CHANNEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DATAVALID; 
    }
    namespace Nonedat7{
        using Addr = Register::Address<0x4001c03c,0x03f0000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> THCMPRANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> THCMPCROSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26)> CHANNEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DATAVALID; 
    }
    namespace Nonedat8{
        using Addr = Register::Address<0x4001c040,0x03f0000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> THCMPRANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> THCMPCROSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26)> CHANNEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DATAVALID; 
    }
    namespace Nonedat9{
        using Addr = Register::Address<0x4001c044,0x03f0000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> THCMPRANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> THCMPCROSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26)> CHANNEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DATAVALID; 
    }
    namespace Nonedat10{
        using Addr = Register::Address<0x4001c048,0x03f0000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> THCMPRANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> THCMPCROSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26)> CHANNEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DATAVALID; 
    }
    namespace Nonedat11{
        using Addr = Register::Address<0x4001c04c,0x03f0000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> THCMPRANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> THCMPCROSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,26)> CHANNEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DATAVALID; 
    }
    namespace Nonethr0_low{
        using Addr = Register::Address<0x4001c050,0xffff000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> THRLOW; 
    }
    namespace Nonethr1_low{
        using Addr = Register::Address<0x4001c054,0xffff000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> THRLOW; 
    }
    namespace Nonethr0_high{
        using Addr = Register::Address<0x4001c058,0xffff000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> THRHIGH; 
    }
    namespace Nonethr1_high{
        using Addr = Register::Address<0x4001c05c,0xffff000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> THRHIGH; 
    }
    namespace Nonechan_thrsel{
        using Addr = Register::Address<0x4001c060,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0_THRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1_THRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2_THRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3_THRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4_THRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5_THRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6_THRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7_THRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH8_THRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CH9_THRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH10_THRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH11_THRSEL; 
    }
    namespace Noneinten{
        using Addr = Register::Address<0x4001c064,0xf8000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SEQA_INTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SEQB_INTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OVR_INTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> ADCMPINTEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> ADCMPINTEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> ADCMPINTEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> ADCMPINTEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> ADCMPINTEN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> ADCMPINTEN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> ADCMPINTEN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> ADCMPINTEN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,19)> ADCMPINTEN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> ADCMPINTEN9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,23)> ADCMPINTEN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,25)> ADCMPINTEN11; 
    }
    namespace Noneflags{
        using Addr = Register::Address<0x4001c068,0x0c000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> THCMP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> THCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> THCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> THCMP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> THCMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> THCMP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> THCMP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> THCMP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> THCMP8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> THCMP9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> THCMP10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> THCMP11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OVERRUN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> OVERRUN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> OVERRUN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OVERRUN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OVERRUN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OVERRUN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OVERRUN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OVERRUN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OVERRUN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> OVERRUN9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> OVERRUN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> OVERRUN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SEQA_OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SEQB_OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SEQA_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SEQB_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> THCMP_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> OVR_INT; 
    }
    namespace Nonetrm{
        using Addr = Register::Address<0x4001c06c,0xffffffdf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> VRANGE; 
    }
}
