#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace MTBDWT_ctrl{
        using Addr = Register::Address<0xf0001000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DWTCFGCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> NUMCMP; 
    }
    namespace MTBDWT_comp0{
        using Addr = Register::Address<0xf0001020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> COMP; 
    }
    namespace MTBDWT_comp1{
        using Addr = Register::Address<0xf0001030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> COMP; 
    }
    namespace MTBDWT_mask0{
        using Addr = Register::Address<0xf0001024,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> MASK; 
    }
    namespace MTBDWT_mask1{
        using Addr = Register::Address<0xf0001034,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> MASK; 
    }
    namespace MTBDWT_fct0{
        using Addr = Register::Address<0xf0001028,0xfeff02f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FUNCTION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DATAVMATCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> DATAVSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> DATAVADDR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MATCHED; 
    }
    namespace MTBDWT_fct1{
        using Addr = Register::Address<0xf0001038,0xfefffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FUNCTION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MATCHED; 
    }
    namespace MTBDWT_tbctrl{
        using Addr = Register::Address<0xf0001200,0x0ffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACOMP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ACOMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> NUMCOMP; 
    }
    namespace MTBDWT_devicecfg{
        using Addr = Register::Address<0xf0001fc8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DEVICECFG; 
    }
    namespace MTBDWT_devicetypid{
        using Addr = Register::Address<0xf0001fcc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DEVICETYPID; 
    }
    namespace MTBDWT_periphid4{
        using Addr = Register::Address<0xf0001fd0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace MTBDWT_periphid5{
        using Addr = Register::Address<0xf0001fd4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace MTBDWT_periphid6{
        using Addr = Register::Address<0xf0001fd8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace MTBDWT_periphid7{
        using Addr = Register::Address<0xf0001fdc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace MTBDWT_periphid0{
        using Addr = Register::Address<0xf0001fe0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace MTBDWT_periphid1{
        using Addr = Register::Address<0xf0001fe4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace MTBDWT_periphid2{
        using Addr = Register::Address<0xf0001fe8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace MTBDWT_periphid3{
        using Addr = Register::Address<0xf0001fec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERIPHID; 
    }
    namespace MTBDWT_compid0{
        using Addr = Register::Address<0xf0001ff0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> COMPID; 
    }
    namespace MTBDWT_compid1{
        using Addr = Register::Address<0xf0001ff4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> COMPID; 
    }
    namespace MTBDWT_compid2{
        using Addr = Register::Address<0xf0001ff8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> COMPID; 
    }
    namespace MTBDWT_compid3{
        using Addr = Register::Address<0xf0001ffc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> COMPID; 
    }
}
