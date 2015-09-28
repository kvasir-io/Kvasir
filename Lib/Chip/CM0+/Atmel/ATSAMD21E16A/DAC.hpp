#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DAC_ctrla{
        using Addr = Register::Address<0x42004800,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RUNSTDBY; 
    }
    namespace DAC_ctrlb{
        using Addr = Register::Address<0x42004801,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LEFTADJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BDWP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> REFSEL; 
    }
    namespace DAC_data{
        using Addr = Register::Address<0x42004808,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
    }
    namespace DAC_databuf{
        using Addr = Register::Address<0x4200480c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATABUF; 
    }
    namespace DAC_evctrl{
        using Addr = Register::Address<0x42004802,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STARTEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EMPTYEO; 
    }
    namespace DAC_intenclr{
        using Addr = Register::Address<0x42004804,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UNDERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SYNCRDY; 
    }
    namespace DAC_intenset{
        using Addr = Register::Address<0x42004805,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UNDERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SYNCRDY; 
    }
    namespace DAC_intflag{
        using Addr = Register::Address<0x42004806,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UNDERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SYNCRDY; 
    }
    namespace DAC_status{
        using Addr = Register::Address<0x42004807,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SYNCBUSY; 
    }
}
