#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace MTB_authstatus{
        using Addr = Register::Address<0x41006fb8,0xffffffff>;
    }
    namespace MTB_base{
        using Addr = Register::Address<0x4100600c,0xffffffff>;
    }
    namespace MTB_cid0{
        using Addr = Register::Address<0x41006ff0,0xffffffff>;
    }
    namespace MTB_cid1{
        using Addr = Register::Address<0x41006ff4,0xffffffff>;
    }
    namespace MTB_cid2{
        using Addr = Register::Address<0x41006ff8,0xffffffff>;
    }
    namespace MTB_cid3{
        using Addr = Register::Address<0x41006ffc,0xffffffff>;
    }
    namespace MTB_claimclr{
        using Addr = Register::Address<0x41006fa4,0xffffffff>;
    }
    namespace MTB_claimset{
        using Addr = Register::Address<0x41006fa0,0xffffffff>;
    }
    namespace MTB_devarch{
        using Addr = Register::Address<0x41006fbc,0xffffffff>;
    }
    namespace MTB_devid{
        using Addr = Register::Address<0x41006fc8,0xffffffff>;
    }
    namespace MTB_devtype{
        using Addr = Register::Address<0x41006fcc,0xffffffff>;
    }
    namespace MTB_flow{
        using Addr = Register::Address<0x41006008,0x00000004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AUTOSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTOHALT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,3)> WATERMARK; 
    }
    namespace MTB_itctrl{
        using Addr = Register::Address<0x41006f00,0xffffffff>;
    }
    namespace MTB_lockaccess{
        using Addr = Register::Address<0x41006fb0,0xffffffff>;
    }
    namespace MTB_lockstatus{
        using Addr = Register::Address<0x41006fb4,0xffffffff>;
    }
    namespace MTB_master{
        using Addr = Register::Address<0x41006004,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TSTARTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TSTOPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SFRWPRIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RAMPRIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HALTREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EN; 
    }
    namespace MTB_pid0{
        using Addr = Register::Address<0x41006fe0,0xffffffff>;
    }
    namespace MTB_pid1{
        using Addr = Register::Address<0x41006fe4,0xffffffff>;
    }
    namespace MTB_pid2{
        using Addr = Register::Address<0x41006fe8,0xffffffff>;
    }
    namespace MTB_pid3{
        using Addr = Register::Address<0x41006fec,0xffffffff>;
    }
    namespace MTB_pid4{
        using Addr = Register::Address<0x41006fd0,0xffffffff>;
    }
    namespace MTB_pid5{
        using Addr = Register::Address<0x41006fd4,0xffffffff>;
    }
    namespace MTB_pid6{
        using Addr = Register::Address<0x41006fd8,0xffffffff>;
    }
    namespace MTB_pid7{
        using Addr = Register::Address<0x41006fdc,0xffffffff>;
    }
    namespace MTB_position{
        using Addr = Register::Address<0x41006000,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,3)> POINTER; 
    }
}
