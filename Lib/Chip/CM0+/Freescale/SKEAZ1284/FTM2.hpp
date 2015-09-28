#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FTM2_sc{
        using Addr = Register::Address<0x4003a000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CPWMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TOF; 
    }
    namespace FTM2_cnt{
        using Addr = Register::Address<0x4003a004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> COUNT; 
    }
    namespace FTM2_mod{
        using Addr = Register::Address<0x4003a008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MOD; 
    }
    namespace FTM2_c0sc{
        using Addr = Register::Address<0x4003a00c,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ELSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ELSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHF; 
    }
    namespace FTM2_c1sc{
        using Addr = Register::Address<0x4003a014,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ELSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ELSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHF; 
    }
    namespace FTM2_c2sc{
        using Addr = Register::Address<0x4003a01c,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ELSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ELSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHF; 
    }
    namespace FTM2_c3sc{
        using Addr = Register::Address<0x4003a024,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ELSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ELSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHF; 
    }
    namespace FTM2_c4sc{
        using Addr = Register::Address<0x4003a02c,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ELSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ELSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHF; 
    }
    namespace FTM2_c5sc{
        using Addr = Register::Address<0x4003a034,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ELSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ELSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHF; 
    }
    namespace FTM2_c0v{
        using Addr = Register::Address<0x4003a010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL; 
    }
    namespace FTM2_c1v{
        using Addr = Register::Address<0x4003a018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL; 
    }
    namespace FTM2_c2v{
        using Addr = Register::Address<0x4003a020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL; 
    }
    namespace FTM2_c3v{
        using Addr = Register::Address<0x4003a028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL; 
    }
    namespace FTM2_c4v{
        using Addr = Register::Address<0x4003a030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL; 
    }
    namespace FTM2_c5v{
        using Addr = Register::Address<0x4003a038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL; 
    }
    namespace FTM2_cntin{
        using Addr = Register::Address<0x4003a04c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INIT; 
    }
    namespace FTM2_status{
        using Addr = Register::Address<0x4003a050,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7F; 
    }
    namespace FTM2_mode{
        using Addr = Register::Address<0x4003a054,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FTMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWMSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPTEST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> FAULTM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FAULTIE; 
    }
    namespace FTM2_sync{
        using Addr = Register::Address<0x4003a058,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CNTMIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CNTMAX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> REINIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SYNCHOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWSYNC; 
    }
    namespace FTM2_outinit{
        using Addr = Register::Address<0x4003a05c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0OI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1OI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2OI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3OI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4OI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5OI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6OI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7OI; 
    }
    namespace FTM2_outmask{
        using Addr = Register::Address<0x4003a060,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7OM; 
    }
    namespace FTM2_combine{
        using Addr = Register::Address<0x4003a064,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COMBINE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> COMP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DECAPEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DECAP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYNCEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FAULTEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> COMBINE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> COMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DECAPEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DECAP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DTEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SYNCEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FAULTEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMBINE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> COMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DECAPEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DECAP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DTEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SYNCEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FAULTEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> COMBINE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> COMP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DECAPEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DECAP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DTEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SYNCEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FAULTEN3; 
    }
    namespace FTM2_deadtime{
        using Addr = Register::Address<0x4003a068,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> DTVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> DTPS; 
    }
    namespace FTM2_exttrig{
        using Addr = Register::Address<0x4003a06c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH2TRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH3TRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH4TRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH5TRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH0TRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH1TRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INITTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TRIGF; 
    }
    namespace FTM2_pol{
        using Addr = Register::Address<0x4003a070,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> POL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> POL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> POL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> POL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> POL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> POL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POL7; 
    }
    namespace FTM2_fms{
        using Addr = Register::Address<0x4003a074,0xffffff10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FAULTF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FAULTF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FAULTF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FAULTF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FAULTIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FAULTF; 
    }
    namespace FTM2_filter{
        using Addr = Register::Address<0x4003a078,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CH0FVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CH1FVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CH2FVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CH3FVAL; 
    }
    namespace FTM2_fltctrl{
        using Addr = Register::Address<0x4003a07c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FAULT0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FAULT1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FAULT2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FAULT3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FFLTR0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FFLTR1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FFLTR2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FFLTR3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> FFVAL; 
    }
    namespace FTM2_conf{
        using Addr = Register::Address<0x4003a084,0xfffff920>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> NUMTOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BDMMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> GTBEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GTBEOUT; 
    }
    namespace FTM2_fltpol{
        using Addr = Register::Address<0x4003a088,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLT0POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FLT1POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLT2POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FLT3POL; 
    }
    namespace FTM2_synconf{
        using Addr = Register::Address<0x4003a08c,0xffe0e04a>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HWTRIGMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CNTINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INVC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SWOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SYNCMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SWRSTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SWWRBUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SWOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SWINVC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SWSOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> HWRSTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> HWWRBUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> HWOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> HWINVC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> HWSOC; 
    }
    namespace FTM2_invctrl{
        using Addr = Register::Address<0x4003a090,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INV0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INV1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INV2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV3EN; 
    }
    namespace FTM2_swoctrl{
        using Addr = Register::Address<0x4003a094,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0OC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1OC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2OC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3OC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4OC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5OC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6OC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7OC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH0OCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CH1OCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH2OCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH3OCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CH4OCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CH5OCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CH6OCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CH7OCV; 
    }
    namespace FTM2_pwmload{
        using Addr = Register::Address<0x4003a098,0xfffffd00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LDOK; 
    }
}
