#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace IEVENT_drl{
        using Addr = Register::Address<0x40019000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IN_A0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IN_B0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IN_C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IN_D0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> Output_FSM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> Ev_Out0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IN_A1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IN_B1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IN_C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IN_D1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> Output_FSM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> Ev_Out1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IN_A2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IN_B2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IN_C2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> IN_D2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> Output_FSM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> Ev_Out2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> IN_A3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> IN_B3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> IN_C3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> IN_D3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> Output_FSM3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> Ev_Out3; 
    }
    namespace IEVENT_crl{
        using Addr = Register::Address<0x40019080,0x70707070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> Type0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DDB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RO0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> Type1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OSE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DDB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> Type2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OSE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DDB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> Type3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> OSE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DDB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RO3; 
    }
    namespace IEVENT_imxcr0{
        using Addr = Register::Address<0x40019100,0xf0f0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> D_Select; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> C_Select; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> B_Select; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> A_Select; 
    }
    namespace IEVENT_imxcr1{
        using Addr = Register::Address<0x40019108,0xf0f0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> D_Select; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> C_Select; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> B_Select; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> A_Select; 
    }
    namespace IEVENT_imxcr2{
        using Addr = Register::Address<0x40019110,0xf0f0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> D_Select; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> C_Select; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> B_Select; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> A_Select; 
    }
    namespace IEVENT_imxcr3{
        using Addr = Register::Address<0x40019118,0xf0f0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> D_Select; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> C_Select; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> B_Select; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> A_Select; 
    }
    namespace IEVENT_bfecr0{
        using Addr = Register::Address<0x40019104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PT3_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PT3_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PT3_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PT3_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PT2_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PT2_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PT2_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PT2_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PT1_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> PT1_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> PT1_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PT1_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> PT0_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> PT0_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PT0_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PT0_AC; 
    }
    namespace IEVENT_bfecr1{
        using Addr = Register::Address<0x4001910c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PT3_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PT3_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PT3_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PT3_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PT2_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PT2_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PT2_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PT2_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PT1_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> PT1_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> PT1_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PT1_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> PT0_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> PT0_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PT0_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PT0_AC; 
    }
    namespace IEVENT_bfecr2{
        using Addr = Register::Address<0x40019114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PT3_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PT3_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PT3_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PT3_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PT2_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PT2_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PT2_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PT2_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PT1_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> PT1_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> PT1_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PT1_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> PT0_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> PT0_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PT0_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PT0_AC; 
    }
    namespace IEVENT_bfecr3{
        using Addr = Register::Address<0x4001911c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PT3_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PT3_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PT3_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PT3_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PT2_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PT2_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PT2_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PT2_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PT1_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> PT1_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> PT1_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PT1_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> PT0_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> PT0_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PT0_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PT0_AC; 
    }
}
