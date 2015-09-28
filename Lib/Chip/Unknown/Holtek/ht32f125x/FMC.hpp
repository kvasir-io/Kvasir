#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonefmc_tadr{
        using Addr = Register::Address<0x40080000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TADB; 
    }
    namespace Nonefmc_wrdr{
        using Addr = Register::Address<0x40080004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> WRDB; 
    }
    namespace Nonefmc_ocmr{
        using Addr = Register::Address<0x4008000c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CMD; 
    }
    namespace Nonefmc_opcr{
        using Addr = Register::Address<0x40080010,0xffffffe1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,1)> OPM; 
    }
    namespace Nonefmc_oier{
        using Addr = Register::Address<0x40080014,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ORFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ITADIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OBEIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IOCMIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OREIEN; 
    }
    namespace Nonefmc_oisr{
        using Addr = Register::Address<0x40080018,0xfffcffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ORFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ITADF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OBEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IOCMF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RORFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PPEF; 
    }
    namespace Nonefmc_ppsr0{
        using Addr = Register::Address<0x40080020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PPSB; 
    }
    namespace Nonefmc_ppsr1{
        using Addr = Register::Address<0x40080024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PPSB; 
    }
    namespace Nonefmc_ppsr2{
        using Addr = Register::Address<0x40080028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PPSB; 
    }
    namespace Nonefmc_ppsr3{
        using Addr = Register::Address<0x4008002c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PPSB; 
    }
    namespace Nonefmc_cpsr{
        using Addr = Register::Address<0x40080030,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CPSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OBPSB; 
    }
    namespace Nonefmc_vmcr{
        using Addr = Register::Address<0x40080100,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> VMCB; 
    }
    namespace Nonefmc_cfcr{
        using Addr = Register::Address<0x40080200,0xffffffa8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> WAIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IPSE; 
    }
    namespace Nonefmc_sbvt0{
        using Addr = Register::Address<0x40080300,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SBVT; 
    }
    namespace Nonefmc_sbvt1{
        using Addr = Register::Address<0x40080304,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SBVT; 
    }
    namespace Nonefmc_sbvt2{
        using Addr = Register::Address<0x40080308,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SBVT; 
    }
    namespace Nonefmc_sbvt3{
        using Addr = Register::Address<0x4008030c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SBVT; 
    }
}
