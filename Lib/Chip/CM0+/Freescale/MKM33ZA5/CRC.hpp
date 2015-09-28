#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace CRC_datall{
        using Addr = Register::Address<0x40034000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATALL; 
    }
    namespace CRC_data{
        using Addr = Register::Address<0x40034000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HU; 
    }
    namespace CRC_datal{
        using Addr = Register::Address<0x40034000,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATAL; 
    }
    namespace CRC_datalu{
        using Addr = Register::Address<0x40034001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATALU; 
    }
    namespace CRC_datahl{
        using Addr = Register::Address<0x40034002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATAHL; 
    }
    namespace CRC_datah{
        using Addr = Register::Address<0x40034002,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATAH; 
    }
    namespace CRC_datahu{
        using Addr = Register::Address<0x40034003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATAHU; 
    }
    namespace CRC_gpoly{
        using Addr = Register::Address<0x40034004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LOW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> HIGH; 
    }
    namespace CRC_gpolyll{
        using Addr = Register::Address<0x40034004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GPOLYLL; 
    }
    namespace CRC_gpolyl{
        using Addr = Register::Address<0x40034004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GPOLYL; 
    }
    namespace CRC_gpolylu{
        using Addr = Register::Address<0x40034005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GPOLYLU; 
    }
    namespace CRC_gpolyh{
        using Addr = Register::Address<0x40034006,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GPOLYH; 
    }
    namespace CRC_gpolyhl{
        using Addr = Register::Address<0x40034006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GPOLYHL; 
    }
    namespace CRC_gpolyhu{
        using Addr = Register::Address<0x40034007,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GPOLYHU; 
    }
    namespace CRC_ctrl{
        using Addr = Register::Address<0x40034008,0x08ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TCRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FXOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> TOTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> TOT; 
    }
    namespace CRC_ctrlhu{
        using Addr = Register::Address<0x4003400b,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TCRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FXOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TOTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOT; 
    }
}
