#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecmp_addr_start{
        using Addr = Register::Address<0xf0001000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADCMP_STA; 
    }
    namespace Nonecmp_data_start{
        using Addr = Register::Address<0xf0001004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DTCMP_STA; 
    }
    namespace Nonecmp_mask_start{
        using Addr = Register::Address<0xf0001008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MSK_STA; 
    }
    namespace Nonecmp_addr_stop{
        using Addr = Register::Address<0xf0001010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADCMP_STO; 
    }
    namespace Nonecmp_data_stop{
        using Addr = Register::Address<0xf0001014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DTCMP_STO; 
    }
    namespace Nonecmp_mask_stop{
        using Addr = Register::Address<0xf0001018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MSK_STO; 
    }
    namespace Nonefct{
        using Addr = Register::Address<0xf0001020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> DSTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DSTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> STPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> STAEN; 
    }
    namespace Nonepid4{
        using Addr = Register::Address<0xf0001fd0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERID; 
    }
    namespace Nonepid5{
        using Addr = Register::Address<0xf0001fd4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERID; 
    }
    namespace Nonepid6{
        using Addr = Register::Address<0xf0001fd8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERID; 
    }
    namespace Nonepid7{
        using Addr = Register::Address<0xf0001fdc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERID; 
    }
    namespace Nonepid0{
        using Addr = Register::Address<0xf0001fe0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERID; 
    }
    namespace Nonepid1{
        using Addr = Register::Address<0xf0001fe4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERID; 
    }
    namespace Nonepid2{
        using Addr = Register::Address<0xf0001fe8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERID; 
    }
    namespace Nonepid3{
        using Addr = Register::Address<0xf0001fec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PERID; 
    }
    namespace Nonecid0{
        using Addr = Register::Address<0xf0001ff0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CPNTID; 
    }
    namespace Nonecid1{
        using Addr = Register::Address<0xf0001ff4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CPNTID; 
    }
    namespace Nonecid2{
        using Addr = Register::Address<0xf0001ff8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CPNTID; 
    }
    namespace Nonecid3{
        using Addr = Register::Address<0xf0001ffc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CPNTID; 
    }
}
