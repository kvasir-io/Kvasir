#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepm{
        using Addr = Register::Address<0x40052000,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
    }
    namespace Nonebase_stat{
        using Addr = Register::Address<0x40052004,0xffffff81>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BASE_UART3_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BASE_UART2_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BASE_UART1_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BASE_UART0_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BASE_SSP1_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BASE_SSP0_CLK; 
    }
    namespace Noneclk_apll_cfg{
        using Addr = Register::Address<0x40052100,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb2_usart3_cfg{
        using Addr = Register::Address<0x40052200,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb2_usart2_cfg{
        using Addr = Register::Address<0x40052300,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb0_uart1_cfg{
        using Addr = Register::Address<0x40052400,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb0_usart0_cfg{
        using Addr = Register::Address<0x40052500,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb0_ssp0_cfg{
        using Addr = Register::Address<0x40052700,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb2_ssp1_cfg{
        using Addr = Register::Address<0x40052600,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_sdio_cfg{
        using Addr = Register::Address<0x40052800,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apll_stat{
        using Addr = Register::Address<0x40052104,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb2_usart3_stat{
        using Addr = Register::Address<0x40052204,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb2_usart2_stat{
        using Addr = Register::Address<0x40052304,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb0_uart1_stat{
        using Addr = Register::Address<0x40052404,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb0_usart0_stat{
        using Addr = Register::Address<0x40052504,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb2_ssp1_stat{
        using Addr = Register::Address<0x40052604,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb0_ssp0_stat{
        using Addr = Register::Address<0x40052704,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_sdio_stat{
        using Addr = Register::Address<0x40052804,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
}
