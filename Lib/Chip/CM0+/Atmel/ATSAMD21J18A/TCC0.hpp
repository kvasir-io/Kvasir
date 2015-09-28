#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace TCC_cc0{
        using Addr = Register::Address<0x42002044,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CC; 
    }
    namespace TCC_cc1{
        using Addr = Register::Address<0x42002048,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CC; 
    }
    namespace TCC_cc2{
        using Addr = Register::Address<0x4200204c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CC; 
    }
    namespace TCC_cc3{
        using Addr = Register::Address<0x42002050,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CC; 
    }
    namespace TCC_ccb0{
        using Addr = Register::Address<0x42002070,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CCB; 
    }
    namespace TCC_ccb1{
        using Addr = Register::Address<0x42002074,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CCB; 
    }
    namespace TCC_ccb2{
        using Addr = Register::Address<0x42002078,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CCB; 
    }
    namespace TCC_ccb3{
        using Addr = Register::Address<0x4200207c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CCB; 
    }
    namespace TCC_count{
        using Addr = Register::Address<0x42002034,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> COUNT; 
    }
    namespace TCC_ctrla{
        using Addr = Register::Address<0x42002000,0xf0ff009c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> RESOLUTION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PRESCALER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RUNSTDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PRESCSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ALOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CPTEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CPTEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CPTEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CPTEN3; 
    }
    namespace TCC_ctrlbclr{
        using Addr = Register::Address<0x42002004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ONESHOT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> IDXCMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> CMD; 
    }
    namespace TCC_ctrlbset{
        using Addr = Register::Address<0x42002005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ONESHOT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> IDXCMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> CMD; 
    }
    namespace TCC_dbgctrl{
        using Addr = Register::Address<0x4200201e,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBGRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FDDBD; 
    }
    namespace TCC_drvctrl{
        using Addr = Register::Address<0x42002018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NRE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NRE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NRE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NRE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NRE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NRE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NRE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NRE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NRV0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> NRV1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> NRV2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> NRV3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NRV4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NRV5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NRV6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NRV7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> INVEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> INVEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> INVEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> INVEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> INVEN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> INVEN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> INVEN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> INVEN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> FILTERVAL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> FILTERVAL1; 
    }
    namespace TCC_evctrl{
        using Addr = Register::Address<0x42002020,0xf0f00800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EVACT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> EVACT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CNTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OVFEO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TRGEO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CNTEO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TCINV0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TCINV1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TCEI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TCEI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MCEI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MCEI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MCEI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MCEI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MCEO0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> MCEO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> MCEO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> MCEO3; 
    }
    namespace TCC_fctrla{
        using Addr = Register::Address<0x4200200c,0xf0008004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> KEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> QUAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> BLANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RESTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> HALT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> CHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> CAPTURE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> BLANKVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> FILTERVAL; 
    }
    namespace TCC_fctrlb{
        using Addr = Register::Address<0x42002010,0xf0008004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> KEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> QUAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> BLANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RESTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> HALT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> CHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> CAPTURE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> BLANKVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> FILTERVAL; 
    }
    namespace TCC_intenclr{
        using Addr = Register::Address<0x42002024,0xfff007f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FAULTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FAULTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FAULT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FAULT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MC3; 
    }
    namespace TCC_intenset{
        using Addr = Register::Address<0x42002028,0xfff007f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FAULTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FAULTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FAULT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FAULT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MC3; 
    }
    namespace TCC_intflag{
        using Addr = Register::Address<0x4200202c,0xfff007f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FAULTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FAULTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FAULT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FAULT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MC3; 
    }
    namespace TCC_patt{
        using Addr = Register::Address<0x42002038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PGE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PGE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PGE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PGE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PGE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PGE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PGE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PGE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PGV0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PGV1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PGV2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PGV3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PGV4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PGV5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PGV6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PGV7; 
    }
    namespace TCC_pattb{
        using Addr = Register::Address<0x42002064,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PGEB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PGEB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PGEB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PGEB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PGEB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PGEB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PGEB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PGEB7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PGVB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PGVB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PGVB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PGVB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PGVB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PGVB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PGVB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PGVB7; 
    }
    namespace TCC_per{
        using Addr = Register::Address<0x42002040,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> PER; 
    }
    namespace TCC_perb{
        using Addr = Register::Address<0x4200206c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> PERB; 
    }
    namespace TCC_status{
        using Addr = Register::Address<0x42002030,0xf0f00014>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IDX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PATTBV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WAVEBV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PERBV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FAULTAIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FAULTBIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FAULT0IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FAULT1IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FAULTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FAULTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FAULT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FAULT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CCBV0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CCBV1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CCBV2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CCBV3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CMP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CMP3; 
    }
    namespace TCC_syncbusy{
        using Addr = Register::Address<0x42002008,0xff80f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CTRLB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PATT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WAVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PATTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WAVEB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PERB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CCB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CCB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CCB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CCB3; 
    }
    namespace TCC_wave{
        using Addr = Register::Address<0x4200203c,0xf0f0f048>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> WAVEGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> RAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CIPEREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CICCEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CICCEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CICCEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CICCEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> POL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> POL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> POL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> POL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SWAP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SWAP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SWAP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SWAP3; 
    }
    namespace TCC_waveb{
        using Addr = Register::Address<0x42002068,0xf0f0f048>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> WAVEGENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> RAMPB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CIPERENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CICCENB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CICCENB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CICCENB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CICCENB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> POLB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> POLB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> POLB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> POLB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SWAPB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SWAPB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SWAPB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SWAPB3; 
    }
    namespace TCC_wexctrl{
        using Addr = Register::Address<0x42002014,0x0000f0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> OTMX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DTIEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DTIEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTIEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DTIEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DTLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DTHS; 
    }
}
