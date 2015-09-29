#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx Configuration Registers (CREG) Modification date=8/19/2011 Major revision=0 Minor revision=14 
    namespace Noneirctrm{    ///<IRC trim register
        using Addr = Register::Address<0x40043000,0xfffff000,0,unsigned>;
        ///IRC trim value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> trm{}; 
    }
    namespace Nonecreg0{    ///<Chip configuration register 32 kHz oscillator output and BOD control register.
        using Addr = Register::Address<0x40043004,0xfffc3010,0,unsigned>;
        ///Enable 1 kHz output.
        enum class en1khzVal {
            v1KhzOutputDisable=0x00000000,     ///<1 kHz output disabled.
            v1KhzOutputEnabled=0x00000001,     ///<1 kHz output enabled.
        };
        namespace en1khzValC{
            constexpr MPL::Value<en1khzVal,en1khzVal::v1KhzOutputDisable> v1KhzOutputDisable{};
            constexpr MPL::Value<en1khzVal,en1khzVal::v1KhzOutputEnabled> v1KhzOutputEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,en1khzVal> en1khz{}; 
        ///Enable 32 kHz output
        enum class en32khzVal {
            v32KhzOutputDisabl=0x00000000,     ///<32 kHz output disabled.
            v32KhzOutputEnable=0x00000001,     ///<32 kHz output enabled.
        };
        namespace en32khzValC{
            constexpr MPL::Value<en32khzVal,en32khzVal::v32KhzOutputDisabl> v32KhzOutputDisabl{};
            constexpr MPL::Value<en32khzVal,en32khzVal::v32KhzOutputEnable> v32KhzOutputEnable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,en32khzVal> en32khz{}; 
        ///32 kHz oscillator reset
        enum class reset32khzVal {
            tbd=0x00000000,     ///<TBD
            tbd=0x00000001,     ///<TBD
        };
        namespace reset32khzValC{
            constexpr MPL::Value<reset32khzVal,reset32khzVal::tbd> tbd{};
            constexpr MPL::Value<reset32khzVal,reset32khzVal::tbd> tbd{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,reset32khzVal> reset32khz{}; 
        ///32 kHz power control.
        enum class 32khzpdVal {
            on=0x00000000,     ///<32 kHz oscillator powered.
            off=0x00000001,     ///<32 kHz oscillator powered-down.
        };
        namespace 32khzpdValC{
            constexpr MPL::Value<32khzpdVal,32khzpdVal::on> on{};
            constexpr MPL::Value<32khzpdVal,32khzpdVal::off> off{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,32khzpdVal> 32khzpd{}; 
        ///USB0 PHY power control.
        enum class usb0phyVal {
            on=0x00000000,     ///<USB0 PHY powered.
            off=0x00000001,     ///<USB0 PHY powered down.
        };
        namespace usb0phyValC{
            constexpr MPL::Value<usb0phyVal,usb0phyVal::on> on{};
            constexpr MPL::Value<usb0phyVal,usb0phyVal::off> off{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,usb0phyVal> usb0phy{}; 
        ///RTC_ALARM pin output control
        enum class alarmctrlVal {
            rtcAlarm=0x00000000,     ///<RTC alarm.
            eventRouterEvent=0x00000001,     ///<Event router event.
            reserved=0x00000002,     ///<Reserved.
            inactive=0x00000003,     ///<Inactive.
        };
        namespace alarmctrlValC{
            constexpr MPL::Value<alarmctrlVal,alarmctrlVal::rtcAlarm> rtcAlarm{};
            constexpr MPL::Value<alarmctrlVal,alarmctrlVal::eventRouterEvent> eventRouterEvent{};
            constexpr MPL::Value<alarmctrlVal,alarmctrlVal::reserved> reserved{};
            constexpr MPL::Value<alarmctrlVal,alarmctrlVal::inactive> inactive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,alarmctrlVal> alarmctrl{}; 
        ///BOD trip level to generate an interrupt.
        enum class bodlvl1Val {
            v275V=0x00000000,     ///<2.75 V
            v285V=0x00000001,     ///<2.85 V
            v295V=0x00000002,     ///<2.95 V
            v305V=0x00000003,     ///<3.05 V
        };
        namespace bodlvl1ValC{
            constexpr MPL::Value<bodlvl1Val,bodlvl1Val::v275V> v275V{};
            constexpr MPL::Value<bodlvl1Val,bodlvl1Val::v285V> v285V{};
            constexpr MPL::Value<bodlvl1Val,bodlvl1Val::v295V> v295V{};
            constexpr MPL::Value<bodlvl1Val,bodlvl1Val::v305V> v305V{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,bodlvl1Val> bodlvl1{}; 
        ///BOD trip level to generate a reset.
        enum class bodlvl2Val {
            v170V=0x00000000,     ///<1.70 V
            v180V=0x00000001,     ///<1.80 V
            v190V=0x00000002,     ///<1.90 V
            v200V=0x00000003,     ///<2.00 V
        };
        namespace bodlvl2ValC{
            constexpr MPL::Value<bodlvl2Val,bodlvl2Val::v170V> v170V{};
            constexpr MPL::Value<bodlvl2Val,bodlvl2Val::v180V> v180V{};
            constexpr MPL::Value<bodlvl2Val,bodlvl2Val::v190V> v190V{};
            constexpr MPL::Value<bodlvl2Val,bodlvl2Val::v200V> v200V{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,bodlvl2Val> bodlvl2{}; 
        ///WAKEUP0 pin input/output control
        enum class wakeup0ctrlVal {
            inputToEventRoute=0x00000000,     ///<Input to event router.
            eventRouterEventO=0x00000001,     ///<Event router event output.
            reserved=0x00000002,     ///<Reserved.
            inputToEventRoute=0x00000003,     ///<Input to event router.
        };
        namespace wakeup0ctrlValC{
            constexpr MPL::Value<wakeup0ctrlVal,wakeup0ctrlVal::inputToEventRoute> inputToEventRoute{};
            constexpr MPL::Value<wakeup0ctrlVal,wakeup0ctrlVal::eventRouterEventO> eventRouterEventO{};
            constexpr MPL::Value<wakeup0ctrlVal,wakeup0ctrlVal::reserved> reserved{};
            constexpr MPL::Value<wakeup0ctrlVal,wakeup0ctrlVal::inputToEventRoute> inputToEventRoute{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,wakeup0ctrlVal> wakeup0ctrl{}; 
        ///WAKEUP1 pin input/output control
        enum class wakeup1ctrlVal {
            inputToEventRoute=0x00000000,     ///<Input to event router.
            eventRouterEventO=0x00000001,     ///<Event router event output.
            reserved=0x00000002,     ///<Reserved
            inputToEventRoute=0x00000003,     ///<Input to event router.
        };
        namespace wakeup1ctrlValC{
            constexpr MPL::Value<wakeup1ctrlVal,wakeup1ctrlVal::inputToEventRoute> inputToEventRoute{};
            constexpr MPL::Value<wakeup1ctrlVal,wakeup1ctrlVal::eventRouterEventO> eventRouterEventO{};
            constexpr MPL::Value<wakeup1ctrlVal,wakeup1ctrlVal::reserved> reserved{};
            constexpr MPL::Value<wakeup1ctrlVal,wakeup1ctrlVal::inputToEventRoute> inputToEventRoute{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,wakeup1ctrlVal> wakeup1ctrl{}; 
    }
    namespace Nonepmucon{    ///<Power mode control register.
        using Addr = Register::Address<0x40043008,0xffff7e00,0,unsigned>;
        ///Controls power consumption in Active and Sleep modes (see Section 9.2.1). All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> pwrctrl{}; 
        ///Dynamic power mode control. Setting this bit allows to dynamically change the power consumption in active and sleep modes (see PWRCTRL bits 8:0 in this register). If dynamic voltage control is disabled, the chip must enter deep-sleep, power-down, or deep power-down modes and wake up again for any change of PWRCTRL bits to take effect.
        enum class dynamicpwrctrlVal {
            disableDynamicPowe=0x00000000,     ///<Disable dynamic power mode control.
            enableDynamicPower=0x00000001,     ///<Enable dynamic power mode control.
        };
        namespace dynamicpwrctrlValC{
            constexpr MPL::Value<dynamicpwrctrlVal,dynamicpwrctrlVal::disableDynamicPowe> disableDynamicPowe{};
            constexpr MPL::Value<dynamicpwrctrlVal,dynamicpwrctrlVal::enableDynamicPower> enableDynamicPower{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dynamicpwrctrlVal> dynamicpwrctrl{}; 
    }
    namespace Nonem3memmap{    ///<ARM Cortex-M3 memory mapping
        using Addr = Register::Address<0x40043100,0x00000fff,0,unsigned>;
        ///Shadow address when accessing memory at address 0x0000 0000
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> m3map{}; 
    }
    namespace Nonecreg5{    ///<Chip configuration register 5. Controls JTAG access.
        using Addr = Register::Address<0x40043118,0xffffffbf,0,unsigned>;
        ///tbd
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> m3tapsel{}; 
    }
    namespace Nonedmamux{    ///<DMA muxing control
        using Addr = Register::Address<0x4004311c,0x00000000,0,unsigned>;
        ///Select DMA to peripheral connection for DMA peripheral 0.
        enum class dmamuxch0Val {
            spifi=0x00000000,     ///<SPIFI
            sctMatch2=0x00000001,     ///<SCT match 2
            reserved=0x00000002,     ///<Reserved
            t3Match1=0x00000003,     ///<T3 match 1
        };
        namespace dmamuxch0ValC{
            constexpr MPL::Value<dmamuxch0Val,dmamuxch0Val::spifi> spifi{};
            constexpr MPL::Value<dmamuxch0Val,dmamuxch0Val::sctMatch2> sctMatch2{};
            constexpr MPL::Value<dmamuxch0Val,dmamuxch0Val::reserved> reserved{};
            constexpr MPL::Value<dmamuxch0Val,dmamuxch0Val::t3Match1> t3Match1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dmamuxch0Val> dmamuxch0{}; 
        ///Select DMA to peripheral connection for DMA peripheral 1
        enum class dmamuxch1Val {
            timer0Match0=0x00000000,     ///<Timer 0 match 0
            usart0Transmit=0x00000001,     ///<USART0 transmit
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace dmamuxch1ValC{
            constexpr MPL::Value<dmamuxch1Val,dmamuxch1Val::timer0Match0> timer0Match0{};
            constexpr MPL::Value<dmamuxch1Val,dmamuxch1Val::usart0Transmit> usart0Transmit{};
            constexpr MPL::Value<dmamuxch1Val,dmamuxch1Val::reserved> reserved{};
            constexpr MPL::Value<dmamuxch1Val,dmamuxch1Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,dmamuxch1Val> dmamuxch1{}; 
        ///Select DMA to peripheral connection for DMA peripheral 2.
        enum class dmamuxch2Val {
            timer0Match1=0x00000000,     ///<Timer 0 match 1
            usart0Receive=0x00000001,     ///<USART0 receive
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace dmamuxch2ValC{
            constexpr MPL::Value<dmamuxch2Val,dmamuxch2Val::timer0Match1> timer0Match1{};
            constexpr MPL::Value<dmamuxch2Val,dmamuxch2Val::usart0Receive> usart0Receive{};
            constexpr MPL::Value<dmamuxch2Val,dmamuxch2Val::reserved> reserved{};
            constexpr MPL::Value<dmamuxch2Val,dmamuxch2Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,dmamuxch2Val> dmamuxch2{}; 
        ///Select DMA to peripheral connection for DMA peripheral 3.
        enum class dmamuxch3Val {
            timer1Match0=0x00000000,     ///<Timer 1 match 0
            uart1Transmit=0x00000001,     ///<UART1 transmit
            i2s1Channel0=0x00000002,     ///<I2S1 channel 0
            ssp1Transmit=0x00000003,     ///<SSP1 transmit
        };
        namespace dmamuxch3ValC{
            constexpr MPL::Value<dmamuxch3Val,dmamuxch3Val::timer1Match0> timer1Match0{};
            constexpr MPL::Value<dmamuxch3Val,dmamuxch3Val::uart1Transmit> uart1Transmit{};
            constexpr MPL::Value<dmamuxch3Val,dmamuxch3Val::i2s1Channel0> i2s1Channel0{};
            constexpr MPL::Value<dmamuxch3Val,dmamuxch3Val::ssp1Transmit> ssp1Transmit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,dmamuxch3Val> dmamuxch3{}; 
        ///Select DMA to peripheral connection for DMA peripheral 4.
        enum class dmamuxch4Val {
            timer1Match1=0x00000000,     ///<Timer 1 match 1
            uart1Receive=0x00000001,     ///<UART1 receive
            i2s1Channel1=0x00000002,     ///<I2S1 channel 1
            ssp1Receive=0x00000003,     ///<SSP1 receive
        };
        namespace dmamuxch4ValC{
            constexpr MPL::Value<dmamuxch4Val,dmamuxch4Val::timer1Match1> timer1Match1{};
            constexpr MPL::Value<dmamuxch4Val,dmamuxch4Val::uart1Receive> uart1Receive{};
            constexpr MPL::Value<dmamuxch4Val,dmamuxch4Val::i2s1Channel1> i2s1Channel1{};
            constexpr MPL::Value<dmamuxch4Val,dmamuxch4Val::ssp1Receive> ssp1Receive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,dmamuxch4Val> dmamuxch4{}; 
        ///Select DMA to peripheral connection for DMA peripheral 5.
        enum class dmamuxch5Val {
            timer2Match0=0x00000000,     ///<Timer 2 match 0
            usart2Transmit=0x00000001,     ///<USART2 transmit
            ssp1Transmit=0x00000002,     ///<SSP1 transmit
            reserved=0x00000003,     ///<Reserved
        };
        namespace dmamuxch5ValC{
            constexpr MPL::Value<dmamuxch5Val,dmamuxch5Val::timer2Match0> timer2Match0{};
            constexpr MPL::Value<dmamuxch5Val,dmamuxch5Val::usart2Transmit> usart2Transmit{};
            constexpr MPL::Value<dmamuxch5Val,dmamuxch5Val::ssp1Transmit> ssp1Transmit{};
            constexpr MPL::Value<dmamuxch5Val,dmamuxch5Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,dmamuxch5Val> dmamuxch5{}; 
        ///Selects DMA to peripheral connection for DMA peripheral 6.
        enum class dmamuxch6Val {
            timer2Match1=0x00000000,     ///<Timer 2 match 1
            usart2Receive=0x00000001,     ///<USART2 receive
            ssp1Receive=0x00000002,     ///<SSP1 receive
            reserved=0x00000003,     ///<Reserved
        };
        namespace dmamuxch6ValC{
            constexpr MPL::Value<dmamuxch6Val,dmamuxch6Val::timer2Match1> timer2Match1{};
            constexpr MPL::Value<dmamuxch6Val,dmamuxch6Val::usart2Receive> usart2Receive{};
            constexpr MPL::Value<dmamuxch6Val,dmamuxch6Val::ssp1Receive> ssp1Receive{};
            constexpr MPL::Value<dmamuxch6Val,dmamuxch6Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,dmamuxch6Val> dmamuxch6{}; 
        ///Selects DMA to peripheral connection for DMA peripheral 7.
        enum class dmamuxch7Val {
            timer3MatchL0=0x00000000,     ///<Timer 3 match l 0
            usart3Transmit=0x00000001,     ///<USART3 transmit
            sctMatchOutput0=0x00000002,     ///<SCT match output 0
            reserved=0x00000003,     ///<Reserved
        };
        namespace dmamuxch7ValC{
            constexpr MPL::Value<dmamuxch7Val,dmamuxch7Val::timer3MatchL0> timer3MatchL0{};
            constexpr MPL::Value<dmamuxch7Val,dmamuxch7Val::usart3Transmit> usart3Transmit{};
            constexpr MPL::Value<dmamuxch7Val,dmamuxch7Val::sctMatchOutput0> sctMatchOutput0{};
            constexpr MPL::Value<dmamuxch7Val,dmamuxch7Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dmamuxch7Val> dmamuxch7{}; 
        ///Select DMA to peripheral connection for DMA peripheral 8.
        enum class dmamuxch8Val {
            timer3Match1=0x00000000,     ///<Timer 3 match 1
            usart3Receive=0x00000001,     ///<USART3 receive
            sctMatchOutput1=0x00000002,     ///<SCT match output 1
            reserved=0x00000003,     ///<Reserved
        };
        namespace dmamuxch8ValC{
            constexpr MPL::Value<dmamuxch8Val,dmamuxch8Val::timer3Match1> timer3Match1{};
            constexpr MPL::Value<dmamuxch8Val,dmamuxch8Val::usart3Receive> usart3Receive{};
            constexpr MPL::Value<dmamuxch8Val,dmamuxch8Val::sctMatchOutput1> sctMatchOutput1{};
            constexpr MPL::Value<dmamuxch8Val,dmamuxch8Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,dmamuxch8Val> dmamuxch8{}; 
        ///Select DMA to peripheral connection for DMA peripheral 9.
        enum class dmamuxch9Val {
            ssp0Receive=0x00000000,     ///<SSP0 receive
            i2s0Channel0=0x00000001,     ///<I2S0 channel 0
            sctMatchOutput1=0x00000002,     ///<SCT match output 1
            reserved=0x00000003,     ///<Reserved
        };
        namespace dmamuxch9ValC{
            constexpr MPL::Value<dmamuxch9Val,dmamuxch9Val::ssp0Receive> ssp0Receive{};
            constexpr MPL::Value<dmamuxch9Val,dmamuxch9Val::i2s0Channel0> i2s0Channel0{};
            constexpr MPL::Value<dmamuxch9Val,dmamuxch9Val::sctMatchOutput1> sctMatchOutput1{};
            constexpr MPL::Value<dmamuxch9Val,dmamuxch9Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,dmamuxch9Val> dmamuxch9{}; 
        ///Select DMA to peripheral connection for DMA peripheral 10.
        enum class dmamuxch10Val {
            ssp0Transmit=0x00000000,     ///<SSP0 transmit
            i2s0Channel1=0x00000001,     ///<I2S0 channel 1
            sctMatchOutput0=0x00000002,     ///<SCT match output 0
            reserved=0x00000003,     ///<Reserved
        };
        namespace dmamuxch10ValC{
            constexpr MPL::Value<dmamuxch10Val,dmamuxch10Val::ssp0Transmit> ssp0Transmit{};
            constexpr MPL::Value<dmamuxch10Val,dmamuxch10Val::i2s0Channel1> i2s0Channel1{};
            constexpr MPL::Value<dmamuxch10Val,dmamuxch10Val::sctMatchOutput0> sctMatchOutput0{};
            constexpr MPL::Value<dmamuxch10Val,dmamuxch10Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,dmamuxch10Val> dmamuxch10{}; 
        ///Selects DMA to peripheral connection for DMA peripheral 11.
        enum class dmamuxch11Val {
            ssp1Receive=0x00000000,     ///<SSP1 receive
            reserved=0x00000001,     ///<Reserved
            usart0Transmit=0x00000002,     ///<USART0 transmit
            reserved=0x00000003,     ///<Reserved
        };
        namespace dmamuxch11ValC{
            constexpr MPL::Value<dmamuxch11Val,dmamuxch11Val::ssp1Receive> ssp1Receive{};
            constexpr MPL::Value<dmamuxch11Val,dmamuxch11Val::reserved> reserved{};
            constexpr MPL::Value<dmamuxch11Val,dmamuxch11Val::usart0Transmit> usart0Transmit{};
            constexpr MPL::Value<dmamuxch11Val,dmamuxch11Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,dmamuxch11Val> dmamuxch11{}; 
        ///Select DMA to peripheral connection for DMA peripheral 12.
        enum class dmamuxch12Val {
            ssp1Transmit=0x00000000,     ///<SSP1 transmit
            reserved=0x00000001,     ///<Reserved
            usart0Receive=0x00000002,     ///<USART0 receive
            reserved=0x00000003,     ///<Reserved
        };
        namespace dmamuxch12ValC{
            constexpr MPL::Value<dmamuxch12Val,dmamuxch12Val::ssp1Transmit> ssp1Transmit{};
            constexpr MPL::Value<dmamuxch12Val,dmamuxch12Val::reserved> reserved{};
            constexpr MPL::Value<dmamuxch12Val,dmamuxch12Val::usart0Receive> usart0Receive{};
            constexpr MPL::Value<dmamuxch12Val,dmamuxch12Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,dmamuxch12Val> dmamuxch12{}; 
        ///Select DMA to peripheral connection for DMA peripheral 13.
        enum class dmamuxch13Val {
            adc0=0x00000000,     ///<ADC0
            reserved=0x00000001,     ///<Reserved
            ssp1Receive=0x00000002,     ///<SSP1 receive
            usart3Receive=0x00000003,     ///<USART3 receive
        };
        namespace dmamuxch13ValC{
            constexpr MPL::Value<dmamuxch13Val,dmamuxch13Val::adc0> adc0{};
            constexpr MPL::Value<dmamuxch13Val,dmamuxch13Val::reserved> reserved{};
            constexpr MPL::Value<dmamuxch13Val,dmamuxch13Val::ssp1Receive> ssp1Receive{};
            constexpr MPL::Value<dmamuxch13Val,dmamuxch13Val::usart3Receive> usart3Receive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,dmamuxch13Val> dmamuxch13{}; 
        ///Select DMA to peripheral connection for DMA peripheral 14.
        enum class dmamuxch14Val {
            adc1=0x00000000,     ///<ADC1
            reserved=0x00000001,     ///<Reserved
            ssp1Transmit=0x00000002,     ///<SSP1 transmit
            usart3Transmit=0x00000003,     ///<USART3 transmit
        };
        namespace dmamuxch14ValC{
            constexpr MPL::Value<dmamuxch14Val,dmamuxch14Val::adc1> adc1{};
            constexpr MPL::Value<dmamuxch14Val,dmamuxch14Val::reserved> reserved{};
            constexpr MPL::Value<dmamuxch14Val,dmamuxch14Val::ssp1Transmit> ssp1Transmit{};
            constexpr MPL::Value<dmamuxch14Val,dmamuxch14Val::usart3Transmit> usart3Transmit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dmamuxch14Val> dmamuxch14{}; 
        ///Select DMA to peripheral connection for DMA peripheral 15.
        enum class dmamuxch15Val {
            dac=0x00000000,     ///<DAC
            sctMatchOutput3=0x00000001,     ///<SCT match output 3
            reserved=0x00000002,     ///<Reserved
            timer3Match0=0x00000003,     ///<Timer 3 match 0
        };
        namespace dmamuxch15ValC{
            constexpr MPL::Value<dmamuxch15Val,dmamuxch15Val::dac> dac{};
            constexpr MPL::Value<dmamuxch15Val,dmamuxch15Val::sctMatchOutput3> sctMatchOutput3{};
            constexpr MPL::Value<dmamuxch15Val,dmamuxch15Val::reserved> reserved{};
            constexpr MPL::Value<dmamuxch15Val,dmamuxch15Val::timer3Match0> timer3Match0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,dmamuxch15Val> dmamuxch15{}; 
    }
    namespace Noneetbcfg{    ///<ETB RAM configuration
        using Addr = Register::Address<0x40043128,0xfffffffe,0,unsigned>;
        ///Select SRAM interface
        enum class etbVal {
            etbAccessesSramAt=0x00000000,     ///<ETB accesses SRAM at address 0x2000 C000.
            ahbAccessesSramAt=0x00000001,     ///<AHB accesses SRAM at address 0x2000 C000.
        };
        namespace etbValC{
            constexpr MPL::Value<etbVal,etbVal::etbAccessesSramAt> etbAccessesSramAt{};
            constexpr MPL::Value<etbVal,etbVal::ahbAccessesSramAt> ahbAccessesSramAt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,etbVal> etb{}; 
    }
    namespace Nonecreg6{    ///<Chip configuration register 6
        using Addr = Register::Address<0x4004312c,0xfffe0fe8,0,unsigned>;
        ///Selects the Ethernet mode. Reset the ethernet after changing the PHY interface. All other settings are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ethmode{}; 
        ///TBD
        enum class timctrlVal {
            tbd=0x00000000,     ///<TBD
            tbd=0x00000001,     ///<TBD
        };
        namespace timctrlValC{
            constexpr MPL::Value<timctrlVal,timctrlVal::tbd> tbd{};
            constexpr MPL::Value<timctrlVal,timctrlVal::tbd> tbd{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,timctrlVal> timctrl{}; 
        ///I2S0_TX_SCK input select
        enum class i2s0TxSckInSelVal {
            i2SClockSelected=0x00000000,     ///<I2 S clock selected as defined by the I2S transmit mode register Table 753.
            audioPllForI2sTr=0x00000001,     ///<Audio PLL for I2S transmit clock MCLK input and MCLK output. The I2S must be configured in slave mode.
        };
        namespace i2s0TxSckInSelValC{
            constexpr MPL::Value<i2s0TxSckInSelVal,i2s0TxSckInSelVal::i2SClockSelected> i2SClockSelected{};
            constexpr MPL::Value<i2s0TxSckInSelVal,i2s0TxSckInSelVal::audioPllForI2sTr> audioPllForI2sTr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,i2s0TxSckInSelVal> i2s0TxSckInSel{}; 
        ///I2S0_RX_SCK input select
        enum class i2s0RxSckInSelVal {
            i2SClockSelected=0x00000000,     ///<I2 S clock selected as defined by the I2S receive mode register Table 754.
            audioPllForI2sRe=0x00000001,     ///<Audio PLL for I2S receive clock MCLK input and MCLK output. The I2S must be configured in slave mode.
        };
        namespace i2s0RxSckInSelValC{
            constexpr MPL::Value<i2s0RxSckInSelVal,i2s0RxSckInSelVal::i2SClockSelected> i2SClockSelected{};
            constexpr MPL::Value<i2s0RxSckInSelVal,i2s0RxSckInSelVal::audioPllForI2sRe> audioPllForI2sRe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,i2s0RxSckInSelVal> i2s0RxSckInSel{}; 
        ///I2S1_TX_SCK input select
        enum class i2s1TxSckInSelVal {
            i2SClockSelected=0x00000000,     ///<I2 S clock selected as defined by the I2S transmit mode register Table 753.
            audioPllForI2sTr=0x00000001,     ///<Audio PLL for I2S transmit clock MCLK input and MCLK output. The I2S must be configured in slave mode.
        };
        namespace i2s1TxSckInSelValC{
            constexpr MPL::Value<i2s1TxSckInSelVal,i2s1TxSckInSelVal::i2SClockSelected> i2SClockSelected{};
            constexpr MPL::Value<i2s1TxSckInSelVal,i2s1TxSckInSelVal::audioPllForI2sTr> audioPllForI2sTr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,i2s1TxSckInSelVal> i2s1TxSckInSel{}; 
        ///I2S1_RX_SCK input select
        enum class i2s1RxSckInSelVal {
            i2SClockSelected=0x00000000,     ///<I2 S clock selected as defined by the I2S receive mode register Table 754.
            audioPllForI2sRe=0x00000001,     ///<Audio PLL for I2S receive clock MCLK input and MCLK output. The I2S must be configured in slave mode.
        };
        namespace i2s1RxSckInSelValC{
            constexpr MPL::Value<i2s1RxSckInSelVal,i2s1RxSckInSelVal::i2SClockSelected> i2SClockSelected{};
            constexpr MPL::Value<i2s1RxSckInSelVal,i2s1RxSckInSelVal::audioPllForI2sRe> audioPllForI2sRe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,i2s1RxSckInSelVal> i2s1RxSckInSel{}; 
        ///EMC_CLK divided clock select (see Section 20.1).
        enum class emcClkSelVal {
            emcClkDivNotDivi=0x00000000,     ///<EMC_CLK_DIV not divided.
            emcClkDivDivided=0x00000001,     ///<EMC_CLK_DIV divided by 2.
        };
        namespace emcClkSelValC{
            constexpr MPL::Value<emcClkSelVal,emcClkSelVal::emcClkDivNotDivi> emcClkDivNotDivi{};
            constexpr MPL::Value<emcClkSelVal,emcClkSelVal::emcClkDivDivided> emcClkDivDivided{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,emcClkSelVal> emcClkSel{}; 
    }
    namespace Nonechipid{    ///<Part ID
        using Addr = Register::Address<0x40043200,0x00000000,0,unsigned>;
        ///TBD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
}
