#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace CRC_crcll{
        using Addr = Register::Address<0x40024000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CRCLL; 
    }
    namespace CRC_crc{
        using Addr = Register::Address<0x40024000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HU; 
    }
    namespace CRC_crcl{
        using Addr = Register::Address<0x40024000,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CRCL; 
    }
    namespace CRC_crclu{
        using Addr = Register::Address<0x40024001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CRCLU; 
    }
    namespace CRC_crchl{
        using Addr = Register::Address<0x40024002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CRCHL; 
    }
    namespace CRC_crch{
        using Addr = Register::Address<0x40024002,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CRCH; 
    }
    namespace CRC_crchu{
        using Addr = Register::Address<0x40024003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CRCHU; 
    }
    namespace CRC_gpoly{
        using Addr = Register::Address<0x40024004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LOW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> HIGH; 
    }
    namespace CRC_gpolyll{
        using Addr = Register::Address<0x40024004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GPOLYLL; 
    }
    namespace CRC_gpolyl{
        using Addr = Register::Address<0x40024004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GPOLYL; 
    }
    namespace CRC_gpolylu{
        using Addr = Register::Address<0x40024005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GPOLYLU; 
    }
    namespace CRC_gpolyh{
        using Addr = Register::Address<0x40024006,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GPOLYH; 
    }
    namespace CRC_gpolyhl{
        using Addr = Register::Address<0x40024006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GPOLYHL; 
    }
    namespace CRC_gpolyhu{
        using Addr = Register::Address<0x40024007,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GPOLYHU; 
    }
    namespace CRC_ctrl{
        using Addr = Register::Address<0x40024008,0x08ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TCRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FXOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> TOTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> TOT; 
    }
    namespace CRC_ctrlhu{
        using Addr = Register::Address<0x4002400b,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TCRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FXOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TOTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOT; 
    }
}
