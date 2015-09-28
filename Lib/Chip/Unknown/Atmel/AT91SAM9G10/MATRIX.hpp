#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonematrix_mcfg{
        using Addr = Register::Address<0xffffee00,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RCB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCB1; 
    }
    namespace Nonematrix_scfg0{
        using Addr = Register::Address<0xffffee04,0xffe0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
    }
    namespace Nonematrix_scfg1{
        using Addr = Register::Address<0xffffee08,0xffe0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
    }
    namespace Nonematrix_scfg2{
        using Addr = Register::Address<0xffffee0c,0xffe0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
    }
    namespace Nonematrix_scfg3{
        using Addr = Register::Address<0xffffee10,0xffe0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
    }
    namespace Nonematrix_scfg4{
        using Addr = Register::Address<0xffffee14,0xffe0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
    }
    namespace Nonematrix_tcr{
        using Addr = Register::Address<0xffffee24,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ITCM_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DTCM_SIZE; 
    }
    namespace Noneebi_csa{
        using Addr = Register::Address<0xffffee30,0xfffffec5>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EBI_CS1A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EBI_CS3A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EBI_CS4A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EBI_CS5A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EBI_DBPUC; 
    }
    namespace Noneusb_pucr{
        using Addr = Register::Address<0xffffee34,0xbfffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> UDP_PUP_ON; 
    }
}
