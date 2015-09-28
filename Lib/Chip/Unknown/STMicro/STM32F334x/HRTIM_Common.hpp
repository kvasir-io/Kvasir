#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr1{
        using Addr = Register::Address<0x40017780,0xf000ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,25)> AD4USRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,22)> AD3USRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,19)> AD2USRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> AD1USRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TEUDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TDUDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TCUDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TBUDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TAUDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MUDIS; 
    }
    namespace Nonecr2{
        using Addr = Register::Address<0x40017784,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TERST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TDRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TARST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TESWU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TDSWU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TCSWU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TBSWU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TASWU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSWU; 
    }
    namespace Noneisr{
        using Addr = Register::Address<0x40017788,0xfffcffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> BMPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DLLRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYSFLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FLT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FLT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLT1; 
    }
    namespace Noneicr{
        using Addr = Register::Address<0x4001778c,0xfffcffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> BMPERC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DLLRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYSFLTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLT5C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FLT4C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLT3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FLT2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLT1C; 
    }
    namespace Noneier{
        using Addr = Register::Address<0x40017790,0xfffcffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> BMPERIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DLLRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYSFLTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLT5IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FLT4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLT3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FLT2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLT1IE; 
    }
    namespace Noneoenr{
        using Addr = Register::Address<0x40017794,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TE2OEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TE1OEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TD2OEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TD1OEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TC2OEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TC1OEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TB2OEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TB1OEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TA2OEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TA1OEN; 
    }
    namespace Nonedisr{
        using Addr = Register::Address<0x40017798,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TE2ODIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TE1ODIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TD2ODIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TD1ODIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TC2ODIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TC1ODIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TB2ODIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TB1ODIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TA2ODIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TA1ODIS; 
    }
    namespace Noneodsr{
        using Addr = Register::Address<0x4001779c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TE2ODS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TE1ODS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TD2ODS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TD1ODS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TC2ODS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TC1ODS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TB2ODS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TB1ODS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TA2ODS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TA1ODS; 
    }
    namespace Nonebmcr{
        using Addr = Register::Address<0x400177a0,0x7fc0f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> BMSTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TEBM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDBM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TCBM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TBBM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TABM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MTBM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BMPREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> BMPRSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> BMCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BMOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BME; 
    }
    namespace Nonebmtrg{
        using Addr = Register::Address<0x400177a4,0x78000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> OCHPEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TECMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TECMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TEREP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TERST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TDCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TDCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDREP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TDRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TCCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TCCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TCREP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TBCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TBCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TBREP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TACMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TACMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TAREP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TARST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MSTCMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSTCMP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSTCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MSTCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MSTREP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MSTRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SW; 
    }
    namespace Nonebmcmpr6{
        using Addr = Register::Address<0x400177a8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BMCMP; 
    }
    namespace Nonebmper{
        using Addr = Register::Address<0x400177ac,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BMPER; 
    }
    namespace Noneeecr1{
        using Addr = Register::Address<0x400177b0,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EE5FAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,27)> EE5SNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EE5POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> EE5SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EE4FAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> EE4SNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EE4POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EE4SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EE3FAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> EE3SNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EE3POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> EE3SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EE2FAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> EE2SNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EE2POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> EE2SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EE1FAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> EE1SNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EE1POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> EE1SRC; 
    }
    namespace Noneeecr2{
        using Addr = Register::Address<0x400177b4,0xe0820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,27)> EE10SNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EE10POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> EE10SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> EE9SNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EE9POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EE9SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> EE8SNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EE8POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> EE8SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> EE7SNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EE7POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> EE7SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> EE6SNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EE6POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> EE6SRC; 
    }
    namespace Noneeecr3{
        using Addr = Register::Address<0x400177b8,0xe0820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,27)> EE10SNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EE10POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> EE10SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> EE9SNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EE9POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EE9SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> EE8SNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EE8POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> EE8SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> EE7SNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EE7POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> EE7SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> EE6SNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EE6POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> EE6SRC; 
    }
    namespace Noneadc1r{
        using Addr = Register::Address<0x400177bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AD1TEPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> AD1TEC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> AD1TEC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> AD1TEC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> AD1TDPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> AD1TDC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> AD1TDC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> AD1TDC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> AD1TCPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> AD1TCC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> AD1TCC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> AD1TCC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> AD1TBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> AD1TBPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> AD1TBC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> AD1TBC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AD1TBC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AD1TARST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> AD1TAPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> AD1TAC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AD1TAC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AD1TAC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AD1EEV5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AD1EEV4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AD1EEV3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AD1EEV2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AD1EEV1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AD1MPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AD1MC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AD1MC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AD1MC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AD1MC1; 
    }
    namespace Noneadc2r{
        using Addr = Register::Address<0x400177c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AD2TERST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> AD2TEC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> AD2TEC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> AD2TEC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> AD2TDRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> AD2TDPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> AD2TDC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> AD2TDC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> AD2TDC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> AD2TCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> AD2TCPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> AD2TCC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> AD2TCC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> AD2TCC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> AD2TBPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> AD2TBC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AD2TBC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AD2TBC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> AD2TAPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> AD2TAC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AD2TAC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AD2TAC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AD2EEV10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AD2EEV9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AD2EEV8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AD2EEV7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AD2EEV6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AD2MPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AD2MC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AD2MC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AD2MC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AD2MC1; 
    }
    namespace Noneadc3r{
        using Addr = Register::Address<0x400177c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AD1TEPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> AD1TEC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> AD1TEC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> AD1TEC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> AD1TDPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> AD1TDC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> AD1TDC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> AD1TDC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> AD1TCPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> AD1TCC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> AD1TCC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> AD1TCC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> AD1TBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> AD1TBPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> AD1TBC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> AD1TBC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AD1TBC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AD1TARST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> AD1TAPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> AD1TAC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AD1TAC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AD1TAC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AD1EEV5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AD1EEV4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AD1EEV3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AD1EEV2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AD1EEV1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AD1MPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AD1MC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AD1MC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AD1MC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AD1MC1; 
    }
    namespace Noneadc4r{
        using Addr = Register::Address<0x400177c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AD2TERST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> AD2TEC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> AD2TEC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> AD2TEC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> AD2TDRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> AD2TDPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> AD2TDC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> AD2TDC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> AD2TDC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> AD2TCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> AD2TCPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> AD2TCC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> AD2TCC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> AD2TCC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> AD2TBPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> AD2TBC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AD2TBC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AD2TBC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> AD2TAPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> AD2TAC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AD2TAC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AD2TAC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AD2EEV10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AD2EEV9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AD2EEV8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AD2EEV7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AD2EEV6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AD2MPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AD2MC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AD2MC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AD2MC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AD2MC1; 
    }
    namespace Nonedllcr{
        using Addr = Register::Address<0x400177cc,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> CALRTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CALEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAL; 
    }
    namespace Nonefltinr1{
        using Addr = Register::Address<0x400177d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FLT4LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,27)> FLT4F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FLT4SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FLT4P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FLT4E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FLT3LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,19)> FLT3F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FLT3SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FLT3P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FLT3E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FLT2LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> FLT2F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FLT2SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FLT2P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FLT2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FLT1LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,3)> FLT1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLT1SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FLT1P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLT1E; 
    }
    namespace Nonefltinr2{
        using Addr = Register::Address<0x400177d4,0xfcffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> FLTSD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FLT5LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,3)> FLT5F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLT5SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FLT5P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLT5E; 
    }
    namespace Nonebdmupdr{
        using Addr = Register::Address<0x400177d8,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MCMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MCMP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MREP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MDIER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MICR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MCR; 
    }
    namespace Nonebdtxupr{
        using Addr = Register::Address<0x400177dc,0xffe00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TIMxFLTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TIMxOUTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TIMxCHPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TIMxRSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIMxEEFR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TIMxEEFR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TIMxRST2R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIMxSET2R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TIMxRST1R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TIMxSET1R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TIMx_DTxR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TIMxCMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIMxCMP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TIMxCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIMxCMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TIMxREP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIMxPER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIMxCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIMxDIER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIMxICR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIMxCR; 
    }
    namespace Nonebdmadr{
        using Addr = Register::Address<0x400177e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BDMADR; 
    }
}
