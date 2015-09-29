#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx Clock Control Unit (CCU) Modification date=1/21/2011 Major revision=0 Minor revision=7 
    namespace Nonepm{    ///<Power mode register
        using Addr = Register::Address<0x40052000,0xfffffffe,0,unsigned>;
        ///Initiate power-down mode
        enum class pdVal {
            normalOperation=0x00000000,     ///<Normal operation.
            clocksWithWakeUp=0x00000001,     ///<Clocks with wake-up mode enabled (W = 1) are disabled.
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::normalOperation> normalOperation{};
            constexpr MPL::Value<pdVal,pdVal::clocksWithWakeUp> clocksWithWakeUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
    }
    namespace NonebaseStat{    ///<CCU base clocks status register
        using Addr = Register::Address<0x40052004,0xffffff81,0,unsigned>;
        ///Base clock indicator for BASE_UART3_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> baseUart3Clk{}; 
        ///Base clock indicator for BASE_UART2_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> baseUart2Clk{}; 
        ///Base clock indicator for BASE_UART1_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> baseUart1Clk{}; 
        ///Base clock indicator for BASE_UART0_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> baseUart0Clk{}; 
        ///Base clock indicator for BASE_SSP1_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> baseSsp1Clk{}; 
        ///Base clock indicator for BASE_SSP0_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> baseSsp0Clk{}; 
    }
    namespace NoneclkApllCfg{    ///<CLK_APLL clock configuration register
        using Addr = Register::Address<0x40052100,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class runVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::clockIsDisabled> clockIsDisabled{};
            constexpr MPL::Value<runVal,runVal::clockIsEnabled> clockIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,runVal> run{}; 
        ///Auto (AHB disable mechanism) enable
        enum class auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        namespace auto_ValC{
            constexpr MPL::Value<auto_Val,auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr MPL::Value<auto_Val,auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,auto_Val> auto_{}; 
        ///Wake-up mechanism enable
        enum class wakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        namespace wakeupValC{
            constexpr MPL::Value<wakeupVal,wakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr MPL::Value<wakeupVal,wakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wakeupVal> wakeup{}; 
    }
    namespace NoneclkApb2Usart3Cfg{    ///<CLK_APB2_USART3 clock configuration register
        using Addr = Register::Address<0x40052200,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class runVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::clockIsDisabled> clockIsDisabled{};
            constexpr MPL::Value<runVal,runVal::clockIsEnabled> clockIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,runVal> run{}; 
        ///Auto (AHB disable mechanism) enable
        enum class auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        namespace auto_ValC{
            constexpr MPL::Value<auto_Val,auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr MPL::Value<auto_Val,auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,auto_Val> auto_{}; 
        ///Wake-up mechanism enable
        enum class wakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        namespace wakeupValC{
            constexpr MPL::Value<wakeupVal,wakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr MPL::Value<wakeupVal,wakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wakeupVal> wakeup{}; 
    }
    namespace NoneclkApb2Usart2Cfg{    ///<CLK_APB2_USART2 clock configuration register
        using Addr = Register::Address<0x40052300,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class runVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::clockIsDisabled> clockIsDisabled{};
            constexpr MPL::Value<runVal,runVal::clockIsEnabled> clockIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,runVal> run{}; 
        ///Auto (AHB disable mechanism) enable
        enum class auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        namespace auto_ValC{
            constexpr MPL::Value<auto_Val,auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr MPL::Value<auto_Val,auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,auto_Val> auto_{}; 
        ///Wake-up mechanism enable
        enum class wakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        namespace wakeupValC{
            constexpr MPL::Value<wakeupVal,wakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr MPL::Value<wakeupVal,wakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wakeupVal> wakeup{}; 
    }
    namespace NoneclkApb0Uart1Cfg{    ///<CLK_APB2_UART1 clock configuration register
        using Addr = Register::Address<0x40052400,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class runVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::clockIsDisabled> clockIsDisabled{};
            constexpr MPL::Value<runVal,runVal::clockIsEnabled> clockIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,runVal> run{}; 
        ///Auto (AHB disable mechanism) enable
        enum class auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        namespace auto_ValC{
            constexpr MPL::Value<auto_Val,auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr MPL::Value<auto_Val,auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,auto_Val> auto_{}; 
        ///Wake-up mechanism enable
        enum class wakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        namespace wakeupValC{
            constexpr MPL::Value<wakeupVal,wakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr MPL::Value<wakeupVal,wakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wakeupVal> wakeup{}; 
    }
    namespace NoneclkApb0Usart0Cfg{    ///<CLK_APB2_USART0 clock configuration register
        using Addr = Register::Address<0x40052500,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class runVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::clockIsDisabled> clockIsDisabled{};
            constexpr MPL::Value<runVal,runVal::clockIsEnabled> clockIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,runVal> run{}; 
        ///Auto (AHB disable mechanism) enable
        enum class auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        namespace auto_ValC{
            constexpr MPL::Value<auto_Val,auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr MPL::Value<auto_Val,auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,auto_Val> auto_{}; 
        ///Wake-up mechanism enable
        enum class wakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        namespace wakeupValC{
            constexpr MPL::Value<wakeupVal,wakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr MPL::Value<wakeupVal,wakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wakeupVal> wakeup{}; 
    }
    namespace NoneclkApb0Ssp0Cfg{    ///<CLK_APB0_SSP0 clock configuration register
        using Addr = Register::Address<0x40052700,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class runVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::clockIsDisabled> clockIsDisabled{};
            constexpr MPL::Value<runVal,runVal::clockIsEnabled> clockIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,runVal> run{}; 
        ///Auto (AHB disable mechanism) enable
        enum class auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        namespace auto_ValC{
            constexpr MPL::Value<auto_Val,auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr MPL::Value<auto_Val,auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,auto_Val> auto_{}; 
        ///Wake-up mechanism enable
        enum class wakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        namespace wakeupValC{
            constexpr MPL::Value<wakeupVal,wakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr MPL::Value<wakeupVal,wakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wakeupVal> wakeup{}; 
    }
    namespace NoneclkApb2Ssp1Cfg{    ///<CLK_APB2_SSP1 clock configuration register
        using Addr = Register::Address<0x40052600,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class runVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::clockIsDisabled> clockIsDisabled{};
            constexpr MPL::Value<runVal,runVal::clockIsEnabled> clockIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,runVal> run{}; 
        ///Auto (AHB disable mechanism) enable
        enum class auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        namespace auto_ValC{
            constexpr MPL::Value<auto_Val,auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr MPL::Value<auto_Val,auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,auto_Val> auto_{}; 
        ///Wake-up mechanism enable
        enum class wakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        namespace wakeupValC{
            constexpr MPL::Value<wakeupVal,wakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr MPL::Value<wakeupVal,wakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wakeupVal> wakeup{}; 
    }
    namespace NoneclkSdioCfg{    ///<CLK_SDIO clock configuration register
        using Addr = Register::Address<0x40052800,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class runVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::clockIsDisabled> clockIsDisabled{};
            constexpr MPL::Value<runVal,runVal::clockIsEnabled> clockIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,runVal> run{}; 
        ///Auto (AHB disable mechanism) enable
        enum class auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        namespace auto_ValC{
            constexpr MPL::Value<auto_Val,auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr MPL::Value<auto_Val,auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,auto_Val> auto_{}; 
        ///Wake-up mechanism enable
        enum class wakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        namespace wakeupValC{
            constexpr MPL::Value<wakeupVal,wakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr MPL::Value<wakeupVal,wakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wakeupVal> wakeup{}; 
    }
    namespace NoneclkApllStat{    ///<CLK_APLL clock status register
        using Addr = Register::Address<0x40052104,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkApb2Usart3Stat{    ///<CLK_APB2_USART3 clock status register
        using Addr = Register::Address<0x40052204,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkApb2Usart2Stat{    ///<CLK_APB2_USART clock status register
        using Addr = Register::Address<0x40052304,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkApb0Uart1Stat{    ///<CLK_APB0_UART1 clock status register
        using Addr = Register::Address<0x40052404,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkApb0Usart0Stat{    ///<CLK_APB0_USART0 clock status register
        using Addr = Register::Address<0x40052504,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkApb2Ssp1Stat{    ///<CLK_APB2_SSP1 clock status register
        using Addr = Register::Address<0x40052604,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkApb0Ssp0Stat{    ///<CLK_APB0_SSP0 clock status register
        using Addr = Register::Address<0x40052704,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkSdioStat{    ///<CLK_SDIO clock status register
        using Addr = Register::Address<0x40052804,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
}
