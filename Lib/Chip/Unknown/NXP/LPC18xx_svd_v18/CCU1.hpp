#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx Clock Control Unit (CCU) Modification date=1/21/2011 Major revision=0 Minor revision=7 
    namespace Nonepm{    ///<CCU1 power mode register
        using Addr = Register::Address<0x40051000,0xfffffffe,0,unsigned>;
        ///Initiate power-down mode
        enum class PdVal {
            normalOperation=0x00000000,     ///<Normal operation.
            clocksWithWakeUp=0x00000001,     ///<Clocks with wake-up mode enabled (W = 1) are disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::normalOperation> normalOperation{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::clocksWithWakeUp> clocksWithWakeUp{};
        }
    }
    namespace NonebaseStat{    ///<CCU1 base clocks status register
        using Addr = Register::Address<0x40051004,0xfffffe70,0,unsigned>;
        ///Base clock indicator for BASE_APB3_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> baseApb3ClkInd{}; 
        ///Base clock indicator for BASE_APB1_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> baseApb1ClkInd{}; 
        ///Base clock indicator for BASE_SPIFI_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> baseSpifiClkInd{}; 
        ///Base clock indicator for BASE_M3_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> baseM3ClkInd{}; 
        ///Base clock indicator for BASE_USB0_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> baseUsb0ClkInd{}; 
        ///Base clock indicator for BASE_USB1_CLK 0 = All branch clocks switched off. 1 = at least one branch clock running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> baseUsb1ClkInd{}; 
    }
    namespace NoneclkApb3BusCfg{    ///<CLK_APB3_BUS clock configuration register
        using Addr = Register::Address<0x40051100,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkApb3I2c1Cfg{    ///<CLK_APB3_I2C1 clock configuration register
        using Addr = Register::Address<0x40051108,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkApb3DacCfg{    ///<CLK_APB3_DAC clock configuration register
        using Addr = Register::Address<0x40051110,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkApb3Adc0Cfg{    ///<CLK_APB3_ADC0 clock configuration register
        using Addr = Register::Address<0x40051118,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkApb3Adc1Cfg{    ///<CLK_APB3_ADC1 clock configuration register
        using Addr = Register::Address<0x40051120,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkApb3Can0Cfg{    ///<CLK_APB3_CAN0 clock configuration register
        using Addr = Register::Address<0x40051128,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkApb1BusCfg{    ///<CLK_APB1_BUS clock configuration register
        using Addr = Register::Address<0x40051200,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkApb1MotoconpwmCfg{    ///<CLK_APB1_MOTOCONPWM clock configuration register
        using Addr = Register::Address<0x40051208,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkAbp1I2c0Cfg{    ///<CLK_ABP1_I2C0 clock configuration register
        using Addr = Register::Address<0x40051210,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkApb1I2sCfg{    ///<CLK_APB1_I2S clock configuration register
        using Addr = Register::Address<0x40051218,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkApb1Can1Cfg{    ///<CLK_APB1_CAN1 clock configuration register
        using Addr = Register::Address<0x40051220,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkSpifiCfg{    ///<CLK_SPIFI clock configuration register
        using Addr = Register::Address<0x40051300,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3BusCfg{    ///<CLK_M3_BUS clock configuration register
        using Addr = Register::Address<0x40051400,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3SpifiCfg{    ///<CLK_M3_SPIFI clock configuration register
        using Addr = Register::Address<0x40051408,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3GpioCfg{    ///<CLK_M3_GPIO clock configuration register
        using Addr = Register::Address<0x40051410,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3LcdCfg{    ///<CLK_M3_LCD clock configuration register
        using Addr = Register::Address<0x40051418,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3EthernetCfg{    ///<CLK_M3_ETHERNET clock configuration register
        using Addr = Register::Address<0x40051420,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3Usb0Cfg{    ///<CLK_M3_USB0 clock configuration register
        using Addr = Register::Address<0x40051428,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3EmcCfg{    ///<CLK_M3_EMC clock configuration register
        using Addr = Register::Address<0x40051430,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3SdioCfg{    ///<CLK_M3_SDIO clock configuration register
        using Addr = Register::Address<0x40051438,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3DmaCfg{    ///<CLK_M3_DMA clock configuration register
        using Addr = Register::Address<0x40051440,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3M3coreCfg{    ///<CLK_M3_M3CORE clock configuration register
        using Addr = Register::Address<0x40051448,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3SctCfg{    ///<CLK_M3_SCT clock configuration register
        using Addr = Register::Address<0x40051468,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3Usb1Cfg{    ///<CLK_M3_USB1 clock configuration register
        using Addr = Register::Address<0x40051470,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3EmcdivCfg{    ///<CLK_M3_EMCDIV clock configuration register
        using Addr = Register::Address<0x40051478,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3WwdtCfg{    ///<CLK_M3_WWDT clock configuration register
        using Addr = Register::Address<0x40051500,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3Usart0Cfg{    ///<CLK_M3_USART0 clock configuration register
        using Addr = Register::Address<0x40051508,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3Uart1Cfg{    ///<CLK_M3_UART1 clock configuration register
        using Addr = Register::Address<0x40051510,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3Ssp0Cfg{    ///<CLK_M3_SSP0 clock configuration register
        using Addr = Register::Address<0x40051518,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3Timer0Cfg{    ///<CLK_M3_TIMER0 clock configuration register
        using Addr = Register::Address<0x40051520,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3Timer1Cfg{    ///<CLK_M3_TIMER1clock configuration register
        using Addr = Register::Address<0x40051528,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3ScuCfg{    ///<CLK_M3_SCU clock configuration register
        using Addr = Register::Address<0x40051530,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3CregCfg{    ///<CLK_M3_CREGclock configuration register
        using Addr = Register::Address<0x40051538,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3RitimerCfg{    ///<CLK_M3_RITIMER clock configuration register
        using Addr = Register::Address<0x40051600,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3Usart2Cfg{    ///<CLK_M3_USART2 clock configuration register
        using Addr = Register::Address<0x40051608,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3Usart3Cfg{    ///<CLK_M3_USART3 clock configuration register
        using Addr = Register::Address<0x40051610,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3Timer2Cfg{    ///<CLK_M3_TIMER2 clock configuration register
        using Addr = Register::Address<0x40051618,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3Timer3Cfg{    ///<CLK_M3_TIMER3 clock configuration register
        using Addr = Register::Address<0x40051620,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3Ssp1Cfg{    ///<CLK_M3_SSP1 clock configuration register
        using Addr = Register::Address<0x40051628,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkM3QeiCfg{    ///<CLK_M3_QEIclock configuration register
        using Addr = Register::Address<0x40051630,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkUsb0Cfg{    ///<CLK_M3_USB0 clock configuration register
        using Addr = Register::Address<0x40051800,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkUsb1Cfg{    ///<CLK_USB1 clock configuration register
        using Addr = Register::Address<0x40051900,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkVadcCfg{    ///<CLK_VADC clock configuration register
        using Addr = Register::Address<0x40051b00,0xfffffff8,0,unsigned>;
        ///Run enable
        enum class RunVal {
            clockIsDisabled=0x00000000,     ///<Clock is disabled.
            clockIsEnabled=0x00000001,     ///<Clock is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsDisabled> clockIsDisabled{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::clockIsEnabled> clockIsEnabled{};
        }
        ///Auto (AHB disable mechanism) enable
        enum class Auto_Val {
            autoIsDisabled=0x00000000,     ///<Auto is disabled.
            autoIsEnabled=0x00000001,     ///<Auto is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsDisabled> autoIsDisabled{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::autoIsEnabled> autoIsEnabled{};
        }
        ///Wake-up mechanism enable
        enum class WakeupVal {
            wakeUpIsDisabled=0x00000000,     ///<Wake-up is disabled.
            wakeUpIsEnabled=0x00000001,     ///<Wake-up is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsDisabled> wakeUpIsDisabled{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::wakeUpIsEnabled> wakeUpIsEnabled{};
        }
    }
    namespace NoneclkApb3BusStat{    ///<CLK_APB3_BUS clock status register
        using Addr = Register::Address<0x40051104,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkApb3I2c1Stat{    ///<CLK_APB3_I2C1 clock status register
        using Addr = Register::Address<0x4005110c,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkApb3DacStat{    ///<CLK_APB3_DAC clock status register
        using Addr = Register::Address<0x40051114,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkApb3Adc0Stat{    ///<CLK_APB3_ADC0 clock status register
        using Addr = Register::Address<0x4005111c,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkApb3Adc1Stat{    ///<CLK_APB3_ADC1 clock status register
        using Addr = Register::Address<0x40051124,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkApb3Can0Stat{    ///<CLK_APB3_CAN0 clock status register
        using Addr = Register::Address<0x4005112c,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkApb1BusStat{    ///<CLK_APB1_BUS clock status register
        using Addr = Register::Address<0x40051204,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkApb1MotoconpwmStat{    ///<CLK_APB1_MOTOCONPWM clock status register
        using Addr = Register::Address<0x4005120c,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkApb1I2c0Stat{    ///<CLK_APB1_I2C0 clock status register
        using Addr = Register::Address<0x40051214,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkApb1I2sStat{    ///<CLK_APB1_I2S clock status register
        using Addr = Register::Address<0x4005121c,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkApb1Can1Stat{    ///<CLK_APB1_CAN1 clock status register
        using Addr = Register::Address<0x40051224,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkSpifiStat{    ///<CLK_APB1_SPIFI clock status register
        using Addr = Register::Address<0x40051304,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3BusStat{    ///<CLK_M3_BUSclock status register
        using Addr = Register::Address<0x40051404,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3SpifiStat{    ///<CLK_M3_SPIFI clock status register
        using Addr = Register::Address<0x4005140c,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3GpioStat{    ///<CLK_M3_GPIO clock status register
        using Addr = Register::Address<0x40051414,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3LcdStat{    ///<CLK_M3_LCD clock status register
        using Addr = Register::Address<0x4005141c,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3EthernetStat{    ///<CLK_M3_ETHERNET clock status register
        using Addr = Register::Address<0x40051424,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3Usb0Stat{    ///<CLK_M3_USB0  clock status register
        using Addr = Register::Address<0x4005142c,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3EmcStat{    ///<CLK_M3_EMC clock status register
        using Addr = Register::Address<0x40051434,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3SdioStat{    ///<CLK_M3_SDIO clock status register
        using Addr = Register::Address<0x4005143c,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3DmaStat{    ///<CLK_M3_DMA clock status register
        using Addr = Register::Address<0x40051444,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3M3coreStat{    ///<CLK_M3_M3CORE clock status register
        using Addr = Register::Address<0x4005144c,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3SctStat{    ///<CLK_M3_SCT clock status register
        using Addr = Register::Address<0x4005146c,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3Usb1Stat{    ///<CLK_M3_USB1 clock status register
        using Addr = Register::Address<0x40051474,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3EmcdivStat{    ///<CLK_M3_EMCDIV clock status register
        using Addr = Register::Address<0x4005147c,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3WwdtStat{    ///<CLK_M3_WWDT clock status register
        using Addr = Register::Address<0x40051504,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3Usart0Stat{    ///<CLK_M3_USART0 clock status register
        using Addr = Register::Address<0x4005150c,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3Uart1Stat{    ///<CLK_M3_UART1 clock status register
        using Addr = Register::Address<0x40051514,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3Ssp0Stat{    ///<CLK_M3_SSP0 clock status register
        using Addr = Register::Address<0x4005151c,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3Timer0Stat{    ///<CLK_M3_TIMER0 clock status register
        using Addr = Register::Address<0x40051524,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3Timer1Stat{    ///<CLK_M3_TIMER1 clock status register
        using Addr = Register::Address<0x4005152c,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3ScuStat{    ///<CLK_SCU_XXX clock status register
        using Addr = Register::Address<0x40051534,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3CregStat{    ///<CLK_M3_CREG clock status register
        using Addr = Register::Address<0x4005153c,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3RitimerStat{    ///<CLK_M3_RITIMER clock status register
        using Addr = Register::Address<0x40051604,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3Usart2Stat{    ///<CLK_M3_USART2 clock status register
        using Addr = Register::Address<0x4005160c,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3Usart3Stat{    ///<CLK_M3_USART3 clock status register
        using Addr = Register::Address<0x40051614,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3Timer2Stat{    ///<CLK_M3_TIMER2 clock status register
        using Addr = Register::Address<0x4005161c,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3Timer3Stat{    ///<CLK_M3_TIMER3 clock status register
        using Addr = Register::Address<0x40051624,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3Ssp1Stat{    ///<CLK_M3_SSP1 clock status register
        using Addr = Register::Address<0x4005162c,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkM3QeiStat{    ///<CLK_M3_QEI clock status register
        using Addr = Register::Address<0x40051634,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkUsb0Stat{    ///<CLK_USB0 clock status register
        using Addr = Register::Address<0x40051804,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkUsb1Stat{    ///<CLK_USB1 clock status register
        using Addr = Register::Address<0x40051904,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace NoneclkVadcStat{    ///<CLK_VADC clock status register
        using Addr = Register::Address<0x40051b04,0xfffffff8,0,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
}
