#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemcr{
        using Addr = Register::Address<0x40006400,0xfffe7f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TTCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ABOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AWUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RFLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INRQ; 
    }
    namespace Nonemsr{
        using Addr = Register::Address<0x40006404,0xfffff0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SLAKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WKUI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SLAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INAK; 
    }
    namespace Nonetsr{
        using Addr = Register::Address<0x40006408,0x00707070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LOW2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> LOW1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> LOW0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TME2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TME1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TME0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ABRQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ALST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TXOK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RQCP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ABRQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ALST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXOK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RQCP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ABRQ0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ALST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RQCP0; 
    }
    namespace Nonerf0r{
        using Addr = Register::Address<0x4000640c,0xffffffc4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RFOM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FOVR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FULL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FMP0; 
    }
    namespace Nonerf1r{
        using Addr = Register::Address<0x40006410,0xffffffc4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RFOM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FOVR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FULL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FMP1; 
    }
    namespace Noneier{
        using Addr = Register::Address<0x40006414,0xfffc7080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SLKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> WKUIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> LECIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BOFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPVIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EWGIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FOVIE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FFIE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FMPIE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FOVIE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FFIE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FMPIE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TMEIE; 
    }
    namespace Noneesr{
        using Addr = Register::Address<0x40006418,0x0000ff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> REC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> TEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> LEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EWGF; 
    }
    namespace Nonebtr{
        using Addr = Register::Address<0x4000641c,0x3c80fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SILM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> LBKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SJW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> TS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> BRP; 
    }
    namespace Noneti0r{
        using Addr = Register::Address<0x40006580,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,21)> STID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,3)> EXID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRQ; 
    }
    namespace Nonetdt0r{
        using Addr = Register::Address<0x40006584,0x0000fef0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TIME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TGT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DLC; 
    }
    namespace Nonetdl0r{
        using Addr = Register::Address<0x40006588,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace Nonetdh0r{
        using Addr = Register::Address<0x4000658c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA4; 
    }
    namespace Noneti1r{
        using Addr = Register::Address<0x40006590,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,21)> STID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,3)> EXID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRQ; 
    }
    namespace Nonetdt1r{
        using Addr = Register::Address<0x40006594,0x0000fef0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TIME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TGT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DLC; 
    }
    namespace Nonetdl1r{
        using Addr = Register::Address<0x40006598,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace Nonetdh1r{
        using Addr = Register::Address<0x4000659c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA4; 
    }
    namespace Noneti2r{
        using Addr = Register::Address<0x400065a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,21)> STID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,3)> EXID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRQ; 
    }
    namespace Nonetdt2r{
        using Addr = Register::Address<0x400065a4,0x0000fef0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TIME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TGT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DLC; 
    }
    namespace Nonetdl2r{
        using Addr = Register::Address<0x400065a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace Nonetdh2r{
        using Addr = Register::Address<0x400065ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA4; 
    }
    namespace Noneri0r{
        using Addr = Register::Address<0x400065b0,0x00000001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,21)> STID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,3)> EXID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTR; 
    }
    namespace Nonerdt0r{
        using Addr = Register::Address<0x400065b4,0x000000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TIME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> FMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DLC; 
    }
    namespace Nonerdl0r{
        using Addr = Register::Address<0x400065b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace Nonerdh0r{
        using Addr = Register::Address<0x400065bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA4; 
    }
    namespace Noneri1r{
        using Addr = Register::Address<0x400065c0,0x00000001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,21)> STID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,3)> EXID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTR; 
    }
    namespace Nonerdt1r{
        using Addr = Register::Address<0x400065c4,0x000000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TIME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> FMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DLC; 
    }
    namespace Nonerdl1r{
        using Addr = Register::Address<0x400065c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace Nonerdh1r{
        using Addr = Register::Address<0x400065cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA4; 
    }
    namespace Nonefmr{
        using Addr = Register::Address<0x40006600,0xffffc0fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> CAN2SB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FINIT; 
    }
    namespace Nonefm1r{
        using Addr = Register::Address<0x40006604,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FBM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FBM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FBM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FBM3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FBM4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FBM5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FBM6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FBM7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FBM8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FBM9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FBM10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FBM11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FBM12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FBM13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FBM14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FBM15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FBM16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FBM17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FBM18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FBM19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FBM20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> FBM21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FBM22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FBM23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FBM24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FBM25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FBM26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FBM27; 
    }
    namespace Nonefs1r{
        using Addr = Register::Address<0x4000660c,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FSC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FSC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FSC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FSC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FSC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FSC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FSC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FSC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FSC8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FSC9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FSC10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FSC11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FSC12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FSC13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FSC14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FSC15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FSC16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FSC17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FSC18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FSC19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FSC20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> FSC21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FSC22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FSC23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FSC24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FSC25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FSC26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FSC27; 
    }
    namespace Noneffa1r{
        using Addr = Register::Address<0x40006614,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FFA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FFA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FFA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FFA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FFA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FFA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FFA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FFA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FFA8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FFA9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FFA10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FFA11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FFA12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FFA13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FFA14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FFA15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FFA16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FFA17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FFA18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FFA19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FFA20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> FFA21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FFA22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FFA23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FFA24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FFA25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FFA26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FFA27; 
    }
    namespace Nonefa1r{
        using Addr = Register::Address<0x4000661c,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FACT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FACT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FACT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FACT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FACT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FACT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FACT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FACT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FACT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FACT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FACT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FACT11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FACT12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FACT13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FACT14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FACT15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FACT16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FACT17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FACT18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FACT19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FACT20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> FACT21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FACT22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FACT23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FACT24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FACT25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FACT26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FACT27; 
    }
    namespace Nonef0r1{
        using Addr = Register::Address<0x40006640,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FB7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FB8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FB9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FB10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FB11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FB12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FB13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FB14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FB15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FB16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FB17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FB18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FB19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FB20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> FB21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FB22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FB23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FB24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FB25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FB26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FB27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> FB28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FB29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FB30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FB31; 
    }
    namespace Nonef0r2{
        using Addr = Register::Address<0x40006644,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FB7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FB8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FB9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FB10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FB11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FB12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FB13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FB14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FB15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FB16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FB17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FB18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FB19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FB20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> FB21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FB22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FB23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FB24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FB25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FB26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FB27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> FB28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FB29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FB30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FB31; 
    }
    namespace Nonef1r1{
        using Addr = Register::Address<0x40006648,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FB7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FB8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FB9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FB10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FB11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FB12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FB13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FB14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FB15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FB16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FB17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FB18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FB19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FB20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> FB21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FB22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FB23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FB24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FB25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FB26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FB27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> FB28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FB29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FB30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FB31; 
    }
    namespace Nonef1r2{
        using Addr = Register::Address<0x4000664c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FB7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FB8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FB9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FB10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FB11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FB12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FB13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FB14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FB15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FB16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FB17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FB18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FB19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FB20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> FB21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FB22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FB23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FB24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FB25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FB26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FB27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> FB28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FB29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FB30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FB31; 
    }
    namespace Nonef27r1{
        using Addr = Register::Address<0x40006718,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FB7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FB8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FB9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FB10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FB11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FB12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FB13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FB14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FB15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FB16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FB17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FB18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FB19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FB20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> FB21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FB22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FB23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FB24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FB25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FB26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FB27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> FB28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FB29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FB30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FB31; 
    }
    namespace Nonef27r2{
        using Addr = Register::Address<0x4000671c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FB7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FB8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FB9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FB10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FB11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FB12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FB13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FB14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FB15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FB16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FB17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FB18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FB19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FB20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> FB21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FB22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FB23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FB24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FB25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FB26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FB27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> FB28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FB29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FB30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FB31; 
    }
}
