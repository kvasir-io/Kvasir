#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SUPC_cr{
        using Addr = Register::Address<0x400e1210,0x00fffff3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VROFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> XTALSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> KEY; 
    }
    namespace SUPC_smmr{
        using Addr = Register::Address<0x400e1214,0xffffc8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SMTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SMSMPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SMRSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SMIEN; 
    }
    namespace SUPC_mr{
        using Addr = Register::Address<0x400e1218,0x00ef8fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BODRSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> BODDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> VDDIORDYONREG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OSCBYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> KEY; 
    }
    namespace SUPC_wumr{
        using Addr = Register::Address<0x400e121c,0xffff88f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FWUPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RTTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RTCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> FWUPDBC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> WKUPDBC; 
    }
    namespace SUPC_wuir{
        using Addr = Register::Address<0x400e1220,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WKUPEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WKUPEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WKUPEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WKUPEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WKUPEN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WKUPEN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WKUPEN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WKUPEN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WKUPEN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WKUPEN9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> WKUPEN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WKUPEN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WKUPEN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WKUPEN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> WKUPEN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WKUPEN15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> WKUPT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WKUPT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> WKUPT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> WKUPT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> WKUPT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WKUPT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> WKUPT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> WKUPT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> WKUPT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WKUPT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> WKUPT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> WKUPT11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> WKUPT12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WKUPT13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> WKUPT14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> WKUPT15; 
    }
    namespace SUPC_sr{
        using Addr = Register::Address<0x400e1224,0x0000ef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FWUPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WKUPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SMWS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BODRSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SMRSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SMOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OSCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FWUPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> WKUPIS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WKUPIS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> WKUPIS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> WKUPIS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> WKUPIS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WKUPIS5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> WKUPIS6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> WKUPIS7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> WKUPIS8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WKUPIS9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> WKUPIS10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> WKUPIS11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> WKUPIS12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WKUPIS13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> WKUPIS14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> WKUPIS15; 
    }
}
