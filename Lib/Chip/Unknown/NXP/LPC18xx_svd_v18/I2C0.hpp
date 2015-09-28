#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneconset{
        using Addr = Register::Address<0x400a1000,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> I2EN; 
    }
    namespace Nonestat{
        using Addr = Register::Address<0x400a1004,0xffffff07>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> Status; 
    }
    namespace Nonedat{
        using Addr = Register::Address<0x400a1008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Data; 
    }
    namespace Noneadr0{
        using Addr = Register::Address<0x400a100c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> Address; 
    }
    namespace Nonesclh{
        using Addr = Register::Address<0x400a1010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SCLH; 
    }
    namespace Nonescll{
        using Addr = Register::Address<0x400a1014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SCLL; 
    }
    namespace Noneconclr{
        using Addr = Register::Address<0x400a1018,0xffffff93>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> I2ENC; 
    }
    namespace Nonemmctrl{
        using Addr = Register::Address<0x400a101c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MM_ENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENA_SCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MATCH_ALL; 
    }
    namespace Noneadr1{
        using Addr = Register::Address<0x400a1020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> Address; 
    }
    namespace Noneadr2{
        using Addr = Register::Address<0x400a1024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> Address; 
    }
    namespace Noneadr3{
        using Addr = Register::Address<0x400a1028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> Address; 
    }
    namespace Nonedata_buffer{
        using Addr = Register::Address<0x400a102c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Data; 
    }
    namespace Nonemask0{
        using Addr = Register::Address<0x400a1030,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> MASK; 
    }
    namespace Nonemask1{
        using Addr = Register::Address<0x400a1034,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> MASK; 
    }
    namespace Nonemask2{
        using Addr = Register::Address<0x400a1038,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> MASK; 
    }
    namespace Nonemask3{
        using Addr = Register::Address<0x400a103c,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> MASK; 
    }
}
