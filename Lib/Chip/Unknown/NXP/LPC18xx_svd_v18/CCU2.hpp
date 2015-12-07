#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx Clock Control Unit (CCU) Modification date=1/21/2011 Major revision=0 Minor revision=7 
    namespace Nonepm{    ///<Power mode register
        using Addr = Register::Address<0x40052000,0xfffffffe,0,unsigned>;
        ///Initiate power-down mode
        enum class PdVal {
            normalOperation=0x00000000,     ///<Normal operation.
            clocksWithWakeUp=0x00000001,     ///<Clocks with wake-up mode enabled (W = 1) are disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::normalOperation> normalOperation{};
            constexpr Register::FieldValue<decltype(pd),PdVal::clocksWithWakeUp> clocksWithWakeUp{};
        }
    }
    namespace NonebaseStat{    ///<CCU base clocks status register
        using Addr = Register::Address<0x40052004,0xffffff81,0,unsigned>;
        ///Base clock indicator for BASE_UART3_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> baseUart3Clk{}; 
        namespace Baseuart3clkValC{
        }
        ///Base clock indicator for BASE_UART2_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> baseUart2Clk{}; 
        namespace Baseuart2clkValC{
        }
        ///Base clock indicator for BASE_UART1_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> baseUart1Clk{}; 
        namespace Baseuart1clkValC{
        }
        ///Base clock indicator for BASE_UART0_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> baseUart0Clk{}; 
        namespace Baseuart0clkValC{
        }
        ///Base clock indicator for BASE_SSP1_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> baseSsp1Clk{}; 
        namespace Basessp1clkValC{
        }
        ///Base clock indicator for BASE_SSP0_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> baseSsp0Clk{}; 
        namespace Basessp0clkValC{
        }
    }
    namespace NoneclkApllCfg{    ///<CLK_APLL clock configuration register
        using Addr = Register::Address<0x40052100,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run),RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run),RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup),WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup),WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkApb2Usart3Cfg{    ///<CLK_APB2_USART3 clock configuration register
        using Addr = Register::Address<0x40052200,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run),RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run),RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup),WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup),WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkApb2Usart2Cfg{    ///<CLK_APB2_USART2 clock configuration register
        using Addr = Register::Address<0x40052300,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run),RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run),RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup),WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup),WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkApb0Uart1Cfg{    ///<CLK_APB2_UART1 clock configuration register
        using Addr = Register::Address<0x40052400,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run),RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run),RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup),WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup),WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkApb0Usart0Cfg{    ///<CLK_APB2_USART0 clock configuration register
        using Addr = Register::Address<0x40052500,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run),RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run),RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup),WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup),WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkApb0Ssp0Cfg{    ///<CLK_APB0_SSP0 clock configuration register
        using Addr = Register::Address<0x40052700,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run),RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run),RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup),WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup),WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkApb2Ssp1Cfg{    ///<CLK_APB2_SSP1 clock configuration register
        using Addr = Register::Address<0x40052600,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run),RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run),RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup),WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup),WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkSdioCfg{    ///<CLK_SDIO clock configuration register
        using Addr = Register::Address<0x40052800,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run),RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run),RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_),Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup),WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup),WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkApllStat{    ///<CLK_APLL clock status register
        using Addr = Register::Address<0x40052104,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        namespace RunValC{
        }
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        namespace Auto_ValC{
        }
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
    }
    namespace NoneclkApb2Usart3Stat{    ///<CLK_APB2_USART3 clock status register
        using Addr = Register::Address<0x40052204,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        namespace RunValC{
        }
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        namespace Auto_ValC{
        }
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
    }
    namespace NoneclkApb2Usart2Stat{    ///<CLK_APB2_USART clock status register
        using Addr = Register::Address<0x40052304,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        namespace RunValC{
        }
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        namespace Auto_ValC{
        }
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
    }
    namespace NoneclkApb0Uart1Stat{    ///<CLK_APB0_UART1 clock status register
        using Addr = Register::Address<0x40052404,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        namespace RunValC{
        }
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        namespace Auto_ValC{
        }
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
    }
    namespace NoneclkApb0Usart0Stat{    ///<CLK_APB0_USART0 clock status register
        using Addr = Register::Address<0x40052504,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        namespace RunValC{
        }
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        namespace Auto_ValC{
        }
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
    }
    namespace NoneclkApb2Ssp1Stat{    ///<CLK_APB2_SSP1 clock status register
        using Addr = Register::Address<0x40052604,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        namespace RunValC{
        }
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        namespace Auto_ValC{
        }
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
    }
    namespace NoneclkApb0Ssp0Stat{    ///<CLK_APB0_SSP0 clock status register
        using Addr = Register::Address<0x40052704,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        namespace RunValC{
        }
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        namespace Auto_ValC{
        }
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
    }
    namespace NoneclkSdioStat{    ///<CLK_SDIO clock status register
        using Addr = Register::Address<0x40052804,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        namespace RunValC{
        }
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        namespace Auto_ValC{
        }
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
    }
}
