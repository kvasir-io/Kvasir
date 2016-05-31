#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx Clock Control Unit (CCU) Modification date=1/21/2011 Major revision=0 Minor revision=7 
    namespace Ccu1Pm{    ///<CCU1 power mode register
        using Addr = Register::Address<0x40051000,0x00000000,0x00000000,unsigned>;
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1BaseStat{    ///<CCU1 base clocks status register
        using Addr = Register::Address<0x40051004,0x00000000,0x00000000,unsigned>;
        ///Base clock indicator for BASE_APB3_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> baseApb3ClkInd{}; 
        ///Base clock indicator for BASE_APB1_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> baseApb1ClkInd{}; 
        ///Base clock indicator for BASE_SPIFI_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> baseSpifiClkInd{}; 
        ///Base clock indicator for BASE_M3_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> baseM3ClkInd{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Base clock indicator for BASE_USB0_CLK 0 = All branch clocks switched off. 1 = At least one branch clock running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> baseUsb0ClkInd{}; 
        ///Base clock indicator for BASE_USB1_CLK 0 = All branch clocks switched off. 1 = at least one branch clock running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> baseUsb1ClkInd{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb3BusCfg{    ///<CLK_APB3_BUS clock configuration register
        using Addr = Register::Address<0x40051100,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb3I2c1Cfg{    ///<CLK_APB3_I2C1 clock configuration register
        using Addr = Register::Address<0x40051108,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb3DacCfg{    ///<CLK_APB3_DAC clock configuration register
        using Addr = Register::Address<0x40051110,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb3Adc0Cfg{    ///<CLK_APB3_ADC0 clock configuration register
        using Addr = Register::Address<0x40051118,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb3Adc1Cfg{    ///<CLK_APB3_ADC1 clock configuration register
        using Addr = Register::Address<0x40051120,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb3Can0Cfg{    ///<CLK_APB3_CAN0 clock configuration register
        using Addr = Register::Address<0x40051128,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb1BusCfg{    ///<CLK_APB1_BUS clock configuration register
        using Addr = Register::Address<0x40051200,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb1MotoconpwmCfg{    ///<CLK_APB1_MOTOCONPWM clock configuration register
        using Addr = Register::Address<0x40051208,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkAbp1I2c0Cfg{    ///<CLK_ABP1_I2C0 clock configuration register
        using Addr = Register::Address<0x40051210,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb1I2sCfg{    ///<CLK_APB1_I2S clock configuration register
        using Addr = Register::Address<0x40051218,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb1Can1Cfg{    ///<CLK_APB1_CAN1 clock configuration register
        using Addr = Register::Address<0x40051220,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkSpifiCfg{    ///<CLK_SPIFI clock configuration register
        using Addr = Register::Address<0x40051300,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3BusCfg{    ///<CLK_M3_BUS clock configuration register
        using Addr = Register::Address<0x40051400,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3SpifiCfg{    ///<CLK_M3_SPIFI clock configuration register
        using Addr = Register::Address<0x40051408,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3GpioCfg{    ///<CLK_M3_GPIO clock configuration register
        using Addr = Register::Address<0x40051410,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3LcdCfg{    ///<CLK_M3_LCD clock configuration register
        using Addr = Register::Address<0x40051418,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3EthernetCfg{    ///<CLK_M3_ETHERNET clock configuration register
        using Addr = Register::Address<0x40051420,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Usb0Cfg{    ///<CLK_M3_USB0 clock configuration register
        using Addr = Register::Address<0x40051428,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3EmcCfg{    ///<CLK_M3_EMC clock configuration register
        using Addr = Register::Address<0x40051430,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3SdioCfg{    ///<CLK_M3_SDIO clock configuration register
        using Addr = Register::Address<0x40051438,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3DmaCfg{    ///<CLK_M3_DMA clock configuration register
        using Addr = Register::Address<0x40051440,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3M3coreCfg{    ///<CLK_M3_M3CORE clock configuration register
        using Addr = Register::Address<0x40051448,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3SctCfg{    ///<CLK_M3_SCT clock configuration register
        using Addr = Register::Address<0x40051468,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Usb1Cfg{    ///<CLK_M3_USB1 clock configuration register
        using Addr = Register::Address<0x40051470,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3EmcdivCfg{    ///<CLK_M3_EMCDIV clock configuration register
        using Addr = Register::Address<0x40051478,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3WwdtCfg{    ///<CLK_M3_WWDT clock configuration register
        using Addr = Register::Address<0x40051500,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Usart0Cfg{    ///<CLK_M3_USART0 clock configuration register
        using Addr = Register::Address<0x40051508,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Uart1Cfg{    ///<CLK_M3_UART1 clock configuration register
        using Addr = Register::Address<0x40051510,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Ssp0Cfg{    ///<CLK_M3_SSP0 clock configuration register
        using Addr = Register::Address<0x40051518,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Timer0Cfg{    ///<CLK_M3_TIMER0 clock configuration register
        using Addr = Register::Address<0x40051520,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Timer1Cfg{    ///<CLK_M3_TIMER1clock configuration register
        using Addr = Register::Address<0x40051528,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3ScuCfg{    ///<CLK_M3_SCU clock configuration register
        using Addr = Register::Address<0x40051530,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3CregCfg{    ///<CLK_M3_CREGclock configuration register
        using Addr = Register::Address<0x40051538,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3RitimerCfg{    ///<CLK_M3_RITIMER clock configuration register
        using Addr = Register::Address<0x40051600,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Usart2Cfg{    ///<CLK_M3_USART2 clock configuration register
        using Addr = Register::Address<0x40051608,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Usart3Cfg{    ///<CLK_M3_USART3 clock configuration register
        using Addr = Register::Address<0x40051610,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Timer2Cfg{    ///<CLK_M3_TIMER2 clock configuration register
        using Addr = Register::Address<0x40051618,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Timer3Cfg{    ///<CLK_M3_TIMER3 clock configuration register
        using Addr = Register::Address<0x40051620,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Ssp1Cfg{    ///<CLK_M3_SSP1 clock configuration register
        using Addr = Register::Address<0x40051628,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3QeiCfg{    ///<CLK_M3_QEIclock configuration register
        using Addr = Register::Address<0x40051630,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkUsb0Cfg{    ///<CLK_M3_USB0 clock configuration register
        using Addr = Register::Address<0x40051800,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkUsb1Cfg{    ///<CLK_USB1 clock configuration register
        using Addr = Register::Address<0x40051900,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkVadcCfg{    ///<CLK_VADC clock configuration register
        using Addr = Register::Address<0x40051b00,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb3BusStat{    ///<CLK_APB3_BUS clock status register
        using Addr = Register::Address<0x40051104,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb3I2c1Stat{    ///<CLK_APB3_I2C1 clock status register
        using Addr = Register::Address<0x4005110c,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb3DacStat{    ///<CLK_APB3_DAC clock status register
        using Addr = Register::Address<0x40051114,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb3Adc0Stat{    ///<CLK_APB3_ADC0 clock status register
        using Addr = Register::Address<0x4005111c,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb3Adc1Stat{    ///<CLK_APB3_ADC1 clock status register
        using Addr = Register::Address<0x40051124,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb3Can0Stat{    ///<CLK_APB3_CAN0 clock status register
        using Addr = Register::Address<0x4005112c,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb1BusStat{    ///<CLK_APB1_BUS clock status register
        using Addr = Register::Address<0x40051204,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb1MotoconpwmStat{    ///<CLK_APB1_MOTOCONPWM clock status register
        using Addr = Register::Address<0x4005120c,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb1I2c0Stat{    ///<CLK_APB1_I2C0 clock status register
        using Addr = Register::Address<0x40051214,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb1I2sStat{    ///<CLK_APB1_I2S clock status register
        using Addr = Register::Address<0x4005121c,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkApb1Can1Stat{    ///<CLK_APB1_CAN1 clock status register
        using Addr = Register::Address<0x40051224,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkSpifiStat{    ///<CLK_APB1_SPIFI clock status register
        using Addr = Register::Address<0x40051304,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3BusStat{    ///<CLK_M3_BUSclock status register
        using Addr = Register::Address<0x40051404,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3SpifiStat{    ///<CLK_M3_SPIFI clock status register
        using Addr = Register::Address<0x4005140c,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3GpioStat{    ///<CLK_M3_GPIO clock status register
        using Addr = Register::Address<0x40051414,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3LcdStat{    ///<CLK_M3_LCD clock status register
        using Addr = Register::Address<0x4005141c,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3EthernetStat{    ///<CLK_M3_ETHERNET clock status register
        using Addr = Register::Address<0x40051424,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Usb0Stat{    ///<CLK_M3_USB0  clock status register
        using Addr = Register::Address<0x4005142c,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3EmcStat{    ///<CLK_M3_EMC clock status register
        using Addr = Register::Address<0x40051434,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3SdioStat{    ///<CLK_M3_SDIO clock status register
        using Addr = Register::Address<0x4005143c,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3DmaStat{    ///<CLK_M3_DMA clock status register
        using Addr = Register::Address<0x40051444,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3M3coreStat{    ///<CLK_M3_M3CORE clock status register
        using Addr = Register::Address<0x4005144c,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3SctStat{    ///<CLK_M3_SCT clock status register
        using Addr = Register::Address<0x4005146c,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Usb1Stat{    ///<CLK_M3_USB1 clock status register
        using Addr = Register::Address<0x40051474,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3EmcdivStat{    ///<CLK_M3_EMCDIV clock status register
        using Addr = Register::Address<0x4005147c,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3WwdtStat{    ///<CLK_M3_WWDT clock status register
        using Addr = Register::Address<0x40051504,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Usart0Stat{    ///<CLK_M3_USART0 clock status register
        using Addr = Register::Address<0x4005150c,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Uart1Stat{    ///<CLK_M3_UART1 clock status register
        using Addr = Register::Address<0x40051514,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Ssp0Stat{    ///<CLK_M3_SSP0 clock status register
        using Addr = Register::Address<0x4005151c,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Timer0Stat{    ///<CLK_M3_TIMER0 clock status register
        using Addr = Register::Address<0x40051524,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Timer1Stat{    ///<CLK_M3_TIMER1 clock status register
        using Addr = Register::Address<0x4005152c,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3ScuStat{    ///<CLK_SCU_XXX clock status register
        using Addr = Register::Address<0x40051534,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3CregStat{    ///<CLK_M3_CREG clock status register
        using Addr = Register::Address<0x4005153c,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3RitimerStat{    ///<CLK_M3_RITIMER clock status register
        using Addr = Register::Address<0x40051604,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Usart2Stat{    ///<CLK_M3_USART2 clock status register
        using Addr = Register::Address<0x4005160c,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Usart3Stat{    ///<CLK_M3_USART3 clock status register
        using Addr = Register::Address<0x40051614,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Timer2Stat{    ///<CLK_M3_TIMER2 clock status register
        using Addr = Register::Address<0x4005161c,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Timer3Stat{    ///<CLK_M3_TIMER3 clock status register
        using Addr = Register::Address<0x40051624,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3Ssp1Stat{    ///<CLK_M3_SSP1 clock status register
        using Addr = Register::Address<0x4005162c,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkM3QeiStat{    ///<CLK_M3_QEI clock status register
        using Addr = Register::Address<0x40051634,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkUsb0Stat{    ///<CLK_USB0 clock status register
        using Addr = Register::Address<0x40051804,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkUsb1Stat{    ///<CLK_USB1 clock status register
        using Addr = Register::Address<0x40051904,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ccu1ClkVadcStat{    ///<CLK_VADC clock status register
        using Addr = Register::Address<0x40051b04,0x00000000,0x00000000,unsigned>;
        ///Run enable status 0 = clock is disabled. 1 = clock is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
        ///Auto (AHB disable mechanism) enable status 0 = Auto is disabled. 1 = Auto is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> auto_{}; 
        ///Wake-up mechanism enable status 0 = Wake-up is disabled. 1 = Wake-up is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
