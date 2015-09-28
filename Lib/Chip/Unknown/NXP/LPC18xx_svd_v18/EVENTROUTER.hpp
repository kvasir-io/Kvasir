#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonehilo{
        using Addr = Register::Address<0x40044000,0xfff60800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKEUP0_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAKEUP1_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP2_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAKEUP3_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ATIMER_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RTC_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BOD_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WWDT_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ETH_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> USB0_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> USB1_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAN_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIM2_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TIM6_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> QEI_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIM14_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RESET_L; 
    }
    namespace Noneedge{
        using Addr = Register::Address<0x40044004,0xfff60800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKEUP0_E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAKEUP1_E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP2_E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAKEUP3_E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ATIMER_E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RTC_E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BOD_E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WWDT_E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ETH_E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> USB0_E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> USB1_E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAN_E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIM2_E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TIM6_E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> QEI_E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIM14_E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RESET_E; 
    }
    namespace Noneclr_en{
        using Addr = Register::Address<0x40044fd8,0xfff60800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKEUP0_CLREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAKEUP1_CLREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP2_CLREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAKEUP3_CLREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ATIMER_CLREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RTC_CLREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BOD_CLREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WWDT_CLREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ETH_CLREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> USB0_CLREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> USB1_CLREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAN_CLREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIM2_CLREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TIM6_CLREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> QEI_CLREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIM14_CLREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RESET_CLREN; 
    }
    namespace Noneset_en{
        using Addr = Register::Address<0x40044fdc,0xfff60800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKEUP0_SETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAKEUP1_SETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP2_SETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAKEUP3_SETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ATIMER_SETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RTC_SETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BOD_SETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WWDT_SETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ETH_SETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> USB0_SETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> USB1_SETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAN_SETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIM2_SETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TIM6_SETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> QEI_SETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIM14_SETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RESET_SETEN; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x40044fe0,0xfff60800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKEUP0_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAKEUP1_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP2_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAKEUP3_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ATIMER_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RTC_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BOD_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WWDT_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ETH_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> USB0_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> USB1_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAN_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIM2_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TIM6_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> QEI_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIM14_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RESET_ST; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x40044fe4,0xfff60800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKEUP0_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAKEUP1_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP2_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAKEUP3_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ATIMER_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RTC_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BOD_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WWDT_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ETH_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> USB0_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> USB1_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAN_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIM2_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TIM6_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> QEI_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIM14_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RESET_EN; 
    }
    namespace Noneclr_stat{
        using Addr = Register::Address<0x40044fe8,0xfff60800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKEUP0_CLRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAKEUP1_CLRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP2_CLRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAKEUP3_CLRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ATIMER_CLRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RTC_CLRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BOD_CLRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WWDT_CLRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ETH_CLRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> USB0_CLRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> USB1_CLRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAN_CLRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIM2_CLRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TIM6_CLRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> QEI_CLRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIM14_CLRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RESET_CLRST; 
    }
    namespace Noneset_stat{
        using Addr = Register::Address<0x40044fec,0xfff60800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKEUP0_SETST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAKEUP1_SETST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP2_SETST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAKEUP3_SETST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ATIMER_SETST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RTC_SETST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BOD_SETST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WWDT_SETST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ETH_SETST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> USB0_SETST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> USB1_SETST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAN_SETST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIM2_SETST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TIM6_SETST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> QEI_SETST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIM14_SETST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RESET_SETST; 
    }
}
