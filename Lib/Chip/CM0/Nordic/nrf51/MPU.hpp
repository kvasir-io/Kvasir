#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Memory Protection Unit.
    namespace Noneperr0{    ///<Configuration of peripherals in mpu regions.
        using Addr = Register::Address<0x40000528,0x3ff00020,0,unsigned>;
        ///POWER_CLOCK region configuration.
        enum class powerClockVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace powerClockValC{
            constexpr MPL::Value<powerClockVal,powerClockVal::inregion0> inregion0{};
            constexpr MPL::Value<powerClockVal,powerClockVal::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,powerClockVal> powerClock{}; 
        ///RADIO region configuration.
        enum class radioVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace radioValC{
            constexpr MPL::Value<radioVal,radioVal::inregion0> inregion0{};
            constexpr MPL::Value<radioVal,radioVal::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,radioVal> radio{}; 
        ///UART0 region configuration.
        enum class uart0Val {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace uart0ValC{
            constexpr MPL::Value<uart0Val,uart0Val::inregion0> inregion0{};
            constexpr MPL::Value<uart0Val,uart0Val::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,uart0Val> uart0{}; 
        ///SPI0 and TWI0 region configuration.
        enum class spi0Twi0Val {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace spi0Twi0ValC{
            constexpr MPL::Value<spi0Twi0Val,spi0Twi0Val::inregion0> inregion0{};
            constexpr MPL::Value<spi0Twi0Val,spi0Twi0Val::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,spi0Twi0Val> spi0Twi0{}; 
        ///SPI1 and TWI1 region configuration.
        enum class spi1Twi1Val {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace spi1Twi1ValC{
            constexpr MPL::Value<spi1Twi1Val,spi1Twi1Val::inregion0> inregion0{};
            constexpr MPL::Value<spi1Twi1Val,spi1Twi1Val::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,spi1Twi1Val> spi1Twi1{}; 
        ///GPIOTE region configuration.
        enum class gpioteVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace gpioteValC{
            constexpr MPL::Value<gpioteVal,gpioteVal::inregion0> inregion0{};
            constexpr MPL::Value<gpioteVal,gpioteVal::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,gpioteVal> gpiote{}; 
        ///ADC region configuration.
        enum class adcVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace adcValC{
            constexpr MPL::Value<adcVal,adcVal::inregion0> inregion0{};
            constexpr MPL::Value<adcVal,adcVal::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,adcVal> adc{}; 
        ///TIMER0 region configuration.
        enum class timer0Val {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace timer0ValC{
            constexpr MPL::Value<timer0Val,timer0Val::inregion0> inregion0{};
            constexpr MPL::Value<timer0Val,timer0Val::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,timer0Val> timer0{}; 
        ///TIMER1 region configuration.
        enum class timer1Val {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace timer1ValC{
            constexpr MPL::Value<timer1Val,timer1Val::inregion0> inregion0{};
            constexpr MPL::Value<timer1Val,timer1Val::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,timer1Val> timer1{}; 
        ///TIMER2 region configuration.
        enum class timer2Val {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace timer2ValC{
            constexpr MPL::Value<timer2Val,timer2Val::inregion0> inregion0{};
            constexpr MPL::Value<timer2Val,timer2Val::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,timer2Val> timer2{}; 
        ///RTC0 region configuration.
        enum class rtc0Val {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace rtc0ValC{
            constexpr MPL::Value<rtc0Val,rtc0Val::inregion0> inregion0{};
            constexpr MPL::Value<rtc0Val,rtc0Val::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,rtc0Val> rtc0{}; 
        ///TEMP region configuration.
        enum class tempVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace tempValC{
            constexpr MPL::Value<tempVal,tempVal::inregion0> inregion0{};
            constexpr MPL::Value<tempVal,tempVal::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tempVal> temp{}; 
        ///RNG region configuration.
        enum class rngVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace rngValC{
            constexpr MPL::Value<rngVal,rngVal::inregion0> inregion0{};
            constexpr MPL::Value<rngVal,rngVal::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,rngVal> rng{}; 
        ///ECB region configuration.
        enum class ecbVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace ecbValC{
            constexpr MPL::Value<ecbVal,ecbVal::inregion0> inregion0{};
            constexpr MPL::Value<ecbVal,ecbVal::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ecbVal> ecb{}; 
        ///CCM and AAR region configuration.
        enum class ccmAarVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace ccmAarValC{
            constexpr MPL::Value<ccmAarVal,ccmAarVal::inregion0> inregion0{};
            constexpr MPL::Value<ccmAarVal,ccmAarVal::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ccmAarVal> ccmAar{}; 
        ///WDT region configuration.
        enum class wdtVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace wdtValC{
            constexpr MPL::Value<wdtVal,wdtVal::inregion0> inregion0{};
            constexpr MPL::Value<wdtVal,wdtVal::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,wdtVal> wdt{}; 
        ///RTC1 region configuration.
        enum class rtc1Val {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace rtc1ValC{
            constexpr MPL::Value<rtc1Val,rtc1Val::inregion0> inregion0{};
            constexpr MPL::Value<rtc1Val,rtc1Val::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,rtc1Val> rtc1{}; 
        ///QDEC region configuration.
        enum class qdecVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace qdecValC{
            constexpr MPL::Value<qdecVal,qdecVal::inregion0> inregion0{};
            constexpr MPL::Value<qdecVal,qdecVal::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,qdecVal> qdec{}; 
        ///LPCOMP region configuration.
        enum class lpcompVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace lpcompValC{
            constexpr MPL::Value<lpcompVal,lpcompVal::inregion0> inregion0{};
            constexpr MPL::Value<lpcompVal,lpcompVal::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,lpcompVal> lpcomp{}; 
        ///NVMC region configuration.
        enum class nvmcVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace nvmcValC{
            constexpr MPL::Value<nvmcVal,nvmcVal::inregion0> inregion0{};
            constexpr MPL::Value<nvmcVal,nvmcVal::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,nvmcVal> nvmc{}; 
        ///PPI region configuration.
        enum class ppiVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        namespace ppiValC{
            constexpr MPL::Value<ppiVal,ppiVal::inregion0> inregion0{};
            constexpr MPL::Value<ppiVal,ppiVal::inregion1> inregion1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ppiVal> ppi{}; 
    }
    namespace Nonerlenr0{    ///<Length of RAM region 0.
        using Addr = Register::Address<0x4000052c,0xffffffff,0,unsigned>;
    }
    namespace Noneprotenset0{    ///<Erase and write protection bit enable set register.
        using Addr = Register::Address<0x40000600,0x00000000,0,unsigned>;
        ///Protection enable for region 0.
        enum class protreg0Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg0ValC{
            constexpr MPL::Value<protreg0Val,protreg0Val::disabled> disabled{};
            constexpr MPL::Value<protreg0Val,protreg0Val::enabled> enabled{};
            constexpr MPL::Value<protreg0Val,protreg0Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,protreg0Val> protreg0{}; 
        ///Protection enable for region 1.
        enum class protreg1Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg1ValC{
            constexpr MPL::Value<protreg1Val,protreg1Val::disabled> disabled{};
            constexpr MPL::Value<protreg1Val,protreg1Val::enabled> enabled{};
            constexpr MPL::Value<protreg1Val,protreg1Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,protreg1Val> protreg1{}; 
        ///Protection enable for region 2.
        enum class protreg2Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg2ValC{
            constexpr MPL::Value<protreg2Val,protreg2Val::disabled> disabled{};
            constexpr MPL::Value<protreg2Val,protreg2Val::enabled> enabled{};
            constexpr MPL::Value<protreg2Val,protreg2Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,protreg2Val> protreg2{}; 
        ///Protection enable for region 3.
        enum class protreg3Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg3ValC{
            constexpr MPL::Value<protreg3Val,protreg3Val::disabled> disabled{};
            constexpr MPL::Value<protreg3Val,protreg3Val::enabled> enabled{};
            constexpr MPL::Value<protreg3Val,protreg3Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,protreg3Val> protreg3{}; 
        ///Protection enable for region 4.
        enum class protreg4Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg4ValC{
            constexpr MPL::Value<protreg4Val,protreg4Val::disabled> disabled{};
            constexpr MPL::Value<protreg4Val,protreg4Val::enabled> enabled{};
            constexpr MPL::Value<protreg4Val,protreg4Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,protreg4Val> protreg4{}; 
        ///Protection enable for region 5.
        enum class protreg5Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg5ValC{
            constexpr MPL::Value<protreg5Val,protreg5Val::disabled> disabled{};
            constexpr MPL::Value<protreg5Val,protreg5Val::enabled> enabled{};
            constexpr MPL::Value<protreg5Val,protreg5Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,protreg5Val> protreg5{}; 
        ///Protection enable for region 6.
        enum class protreg6Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg6ValC{
            constexpr MPL::Value<protreg6Val,protreg6Val::disabled> disabled{};
            constexpr MPL::Value<protreg6Val,protreg6Val::enabled> enabled{};
            constexpr MPL::Value<protreg6Val,protreg6Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,protreg6Val> protreg6{}; 
        ///Protection enable for region 7.
        enum class protreg7Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg7ValC{
            constexpr MPL::Value<protreg7Val,protreg7Val::disabled> disabled{};
            constexpr MPL::Value<protreg7Val,protreg7Val::enabled> enabled{};
            constexpr MPL::Value<protreg7Val,protreg7Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,protreg7Val> protreg7{}; 
        ///Protection enable for region 8.
        enum class protreg8Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg8ValC{
            constexpr MPL::Value<protreg8Val,protreg8Val::disabled> disabled{};
            constexpr MPL::Value<protreg8Val,protreg8Val::enabled> enabled{};
            constexpr MPL::Value<protreg8Val,protreg8Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,protreg8Val> protreg8{}; 
        ///Protection enable for region 9.
        enum class protreg9Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg9ValC{
            constexpr MPL::Value<protreg9Val,protreg9Val::disabled> disabled{};
            constexpr MPL::Value<protreg9Val,protreg9Val::enabled> enabled{};
            constexpr MPL::Value<protreg9Val,protreg9Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,protreg9Val> protreg9{}; 
        ///Protection enable for region 10.
        enum class protreg10Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg10ValC{
            constexpr MPL::Value<protreg10Val,protreg10Val::disabled> disabled{};
            constexpr MPL::Value<protreg10Val,protreg10Val::enabled> enabled{};
            constexpr MPL::Value<protreg10Val,protreg10Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,protreg10Val> protreg10{}; 
        ///Protection enable for region 11.
        enum class protreg11Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg11ValC{
            constexpr MPL::Value<protreg11Val,protreg11Val::disabled> disabled{};
            constexpr MPL::Value<protreg11Val,protreg11Val::enabled> enabled{};
            constexpr MPL::Value<protreg11Val,protreg11Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,protreg11Val> protreg11{}; 
        ///Protection enable for region 12.
        enum class protreg12Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg12ValC{
            constexpr MPL::Value<protreg12Val,protreg12Val::disabled> disabled{};
            constexpr MPL::Value<protreg12Val,protreg12Val::enabled> enabled{};
            constexpr MPL::Value<protreg12Val,protreg12Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,protreg12Val> protreg12{}; 
        ///Protection enable for region 13.
        enum class protreg13Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg13ValC{
            constexpr MPL::Value<protreg13Val,protreg13Val::disabled> disabled{};
            constexpr MPL::Value<protreg13Val,protreg13Val::enabled> enabled{};
            constexpr MPL::Value<protreg13Val,protreg13Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,protreg13Val> protreg13{}; 
        ///Protection enable for region 14.
        enum class protreg14Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg14ValC{
            constexpr MPL::Value<protreg14Val,protreg14Val::disabled> disabled{};
            constexpr MPL::Value<protreg14Val,protreg14Val::enabled> enabled{};
            constexpr MPL::Value<protreg14Val,protreg14Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,protreg14Val> protreg14{}; 
        ///Protection enable for region 15.
        enum class protreg15Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg15ValC{
            constexpr MPL::Value<protreg15Val,protreg15Val::disabled> disabled{};
            constexpr MPL::Value<protreg15Val,protreg15Val::enabled> enabled{};
            constexpr MPL::Value<protreg15Val,protreg15Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,protreg15Val> protreg15{}; 
        ///Protection enable for region 16.
        enum class protreg16Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg16ValC{
            constexpr MPL::Value<protreg16Val,protreg16Val::disabled> disabled{};
            constexpr MPL::Value<protreg16Val,protreg16Val::enabled> enabled{};
            constexpr MPL::Value<protreg16Val,protreg16Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,protreg16Val> protreg16{}; 
        ///Protection enable for region 17.
        enum class protreg17Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg17ValC{
            constexpr MPL::Value<protreg17Val,protreg17Val::disabled> disabled{};
            constexpr MPL::Value<protreg17Val,protreg17Val::enabled> enabled{};
            constexpr MPL::Value<protreg17Val,protreg17Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,protreg17Val> protreg17{}; 
        ///Protection enable for region 18.
        enum class protreg18Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg18ValC{
            constexpr MPL::Value<protreg18Val,protreg18Val::disabled> disabled{};
            constexpr MPL::Value<protreg18Val,protreg18Val::enabled> enabled{};
            constexpr MPL::Value<protreg18Val,protreg18Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,protreg18Val> protreg18{}; 
        ///Protection enable for region 19.
        enum class protreg19Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg19ValC{
            constexpr MPL::Value<protreg19Val,protreg19Val::disabled> disabled{};
            constexpr MPL::Value<protreg19Val,protreg19Val::enabled> enabled{};
            constexpr MPL::Value<protreg19Val,protreg19Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,protreg19Val> protreg19{}; 
        ///Protection enable for region 20.
        enum class protreg20Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg20ValC{
            constexpr MPL::Value<protreg20Val,protreg20Val::disabled> disabled{};
            constexpr MPL::Value<protreg20Val,protreg20Val::enabled> enabled{};
            constexpr MPL::Value<protreg20Val,protreg20Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,protreg20Val> protreg20{}; 
        ///Protection enable for region 21.
        enum class protreg21Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg21ValC{
            constexpr MPL::Value<protreg21Val,protreg21Val::disabled> disabled{};
            constexpr MPL::Value<protreg21Val,protreg21Val::enabled> enabled{};
            constexpr MPL::Value<protreg21Val,protreg21Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,protreg21Val> protreg21{}; 
        ///Protection enable for region 22.
        enum class protreg22Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg22ValC{
            constexpr MPL::Value<protreg22Val,protreg22Val::disabled> disabled{};
            constexpr MPL::Value<protreg22Val,protreg22Val::enabled> enabled{};
            constexpr MPL::Value<protreg22Val,protreg22Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,protreg22Val> protreg22{}; 
        ///Protection enable for region 23.
        enum class protreg23Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg23ValC{
            constexpr MPL::Value<protreg23Val,protreg23Val::disabled> disabled{};
            constexpr MPL::Value<protreg23Val,protreg23Val::enabled> enabled{};
            constexpr MPL::Value<protreg23Val,protreg23Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,protreg23Val> protreg23{}; 
        ///Protection enable for region 24.
        enum class protreg24Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg24ValC{
            constexpr MPL::Value<protreg24Val,protreg24Val::disabled> disabled{};
            constexpr MPL::Value<protreg24Val,protreg24Val::enabled> enabled{};
            constexpr MPL::Value<protreg24Val,protreg24Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,protreg24Val> protreg24{}; 
        ///Protection enable for region 25.
        enum class protreg25Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg25ValC{
            constexpr MPL::Value<protreg25Val,protreg25Val::disabled> disabled{};
            constexpr MPL::Value<protreg25Val,protreg25Val::enabled> enabled{};
            constexpr MPL::Value<protreg25Val,protreg25Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,protreg25Val> protreg25{}; 
        ///Protection enable for region 26.
        enum class protreg26Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg26ValC{
            constexpr MPL::Value<protreg26Val,protreg26Val::disabled> disabled{};
            constexpr MPL::Value<protreg26Val,protreg26Val::enabled> enabled{};
            constexpr MPL::Value<protreg26Val,protreg26Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,protreg26Val> protreg26{}; 
        ///Protection enable for region 27.
        enum class protreg27Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg27ValC{
            constexpr MPL::Value<protreg27Val,protreg27Val::disabled> disabled{};
            constexpr MPL::Value<protreg27Val,protreg27Val::enabled> enabled{};
            constexpr MPL::Value<protreg27Val,protreg27Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,protreg27Val> protreg27{}; 
        ///Protection enable for region 28.
        enum class protreg28Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg28ValC{
            constexpr MPL::Value<protreg28Val,protreg28Val::disabled> disabled{};
            constexpr MPL::Value<protreg28Val,protreg28Val::enabled> enabled{};
            constexpr MPL::Value<protreg28Val,protreg28Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,protreg28Val> protreg28{}; 
        ///Protection enable for region 29.
        enum class protreg29Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg29ValC{
            constexpr MPL::Value<protreg29Val,protreg29Val::disabled> disabled{};
            constexpr MPL::Value<protreg29Val,protreg29Val::enabled> enabled{};
            constexpr MPL::Value<protreg29Val,protreg29Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,protreg29Val> protreg29{}; 
        ///Protection enable for region 30.
        enum class protreg30Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg30ValC{
            constexpr MPL::Value<protreg30Val,protreg30Val::disabled> disabled{};
            constexpr MPL::Value<protreg30Val,protreg30Val::enabled> enabled{};
            constexpr MPL::Value<protreg30Val,protreg30Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,protreg30Val> protreg30{}; 
        ///Protection enable for region 31.
        enum class protreg31Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg31ValC{
            constexpr MPL::Value<protreg31Val,protreg31Val::disabled> disabled{};
            constexpr MPL::Value<protreg31Val,protreg31Val::enabled> enabled{};
            constexpr MPL::Value<protreg31Val,protreg31Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,protreg31Val> protreg31{}; 
    }
    namespace Noneprotenset1{    ///<Erase and write protection bit enable set register.
        using Addr = Register::Address<0x40000604,0x00000000,0,unsigned>;
        ///Protection enable for region 32.
        enum class protreg32Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg32ValC{
            constexpr MPL::Value<protreg32Val,protreg32Val::disabled> disabled{};
            constexpr MPL::Value<protreg32Val,protreg32Val::enabled> enabled{};
            constexpr MPL::Value<protreg32Val,protreg32Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,protreg32Val> protreg32{}; 
        ///Protection enable for region 33.
        enum class protreg33Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg33ValC{
            constexpr MPL::Value<protreg33Val,protreg33Val::disabled> disabled{};
            constexpr MPL::Value<protreg33Val,protreg33Val::enabled> enabled{};
            constexpr MPL::Value<protreg33Val,protreg33Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,protreg33Val> protreg33{}; 
        ///Protection enable for region 34.
        enum class protreg34Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg34ValC{
            constexpr MPL::Value<protreg34Val,protreg34Val::disabled> disabled{};
            constexpr MPL::Value<protreg34Val,protreg34Val::enabled> enabled{};
            constexpr MPL::Value<protreg34Val,protreg34Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,protreg34Val> protreg34{}; 
        ///Protection enable for region 35.
        enum class protreg35Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg35ValC{
            constexpr MPL::Value<protreg35Val,protreg35Val::disabled> disabled{};
            constexpr MPL::Value<protreg35Val,protreg35Val::enabled> enabled{};
            constexpr MPL::Value<protreg35Val,protreg35Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,protreg35Val> protreg35{}; 
        ///Protection enable for region 36.
        enum class protreg36Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg36ValC{
            constexpr MPL::Value<protreg36Val,protreg36Val::disabled> disabled{};
            constexpr MPL::Value<protreg36Val,protreg36Val::enabled> enabled{};
            constexpr MPL::Value<protreg36Val,protreg36Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,protreg36Val> protreg36{}; 
        ///Protection enable for region 37.
        enum class protreg37Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg37ValC{
            constexpr MPL::Value<protreg37Val,protreg37Val::disabled> disabled{};
            constexpr MPL::Value<protreg37Val,protreg37Val::enabled> enabled{};
            constexpr MPL::Value<protreg37Val,protreg37Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,protreg37Val> protreg37{}; 
        ///Protection enable for region 38.
        enum class protreg38Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg38ValC{
            constexpr MPL::Value<protreg38Val,protreg38Val::disabled> disabled{};
            constexpr MPL::Value<protreg38Val,protreg38Val::enabled> enabled{};
            constexpr MPL::Value<protreg38Val,protreg38Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,protreg38Val> protreg38{}; 
        ///Protection enable for region 39.
        enum class protreg39Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg39ValC{
            constexpr MPL::Value<protreg39Val,protreg39Val::disabled> disabled{};
            constexpr MPL::Value<protreg39Val,protreg39Val::enabled> enabled{};
            constexpr MPL::Value<protreg39Val,protreg39Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,protreg39Val> protreg39{}; 
        ///Protection enable for region 40.
        enum class protreg40Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg40ValC{
            constexpr MPL::Value<protreg40Val,protreg40Val::disabled> disabled{};
            constexpr MPL::Value<protreg40Val,protreg40Val::enabled> enabled{};
            constexpr MPL::Value<protreg40Val,protreg40Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,protreg40Val> protreg40{}; 
        ///Protection enable for region 41.
        enum class protreg41Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg41ValC{
            constexpr MPL::Value<protreg41Val,protreg41Val::disabled> disabled{};
            constexpr MPL::Value<protreg41Val,protreg41Val::enabled> enabled{};
            constexpr MPL::Value<protreg41Val,protreg41Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,protreg41Val> protreg41{}; 
        ///Protection enable for region 42.
        enum class protreg42Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg42ValC{
            constexpr MPL::Value<protreg42Val,protreg42Val::disabled> disabled{};
            constexpr MPL::Value<protreg42Val,protreg42Val::enabled> enabled{};
            constexpr MPL::Value<protreg42Val,protreg42Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,protreg42Val> protreg42{}; 
        ///Protection enable for region 43.
        enum class protreg43Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg43ValC{
            constexpr MPL::Value<protreg43Val,protreg43Val::disabled> disabled{};
            constexpr MPL::Value<protreg43Val,protreg43Val::enabled> enabled{};
            constexpr MPL::Value<protreg43Val,protreg43Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,protreg43Val> protreg43{}; 
        ///Protection enable for region 44.
        enum class protreg44Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg44ValC{
            constexpr MPL::Value<protreg44Val,protreg44Val::disabled> disabled{};
            constexpr MPL::Value<protreg44Val,protreg44Val::enabled> enabled{};
            constexpr MPL::Value<protreg44Val,protreg44Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,protreg44Val> protreg44{}; 
        ///Protection enable for region 45.
        enum class protreg45Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg45ValC{
            constexpr MPL::Value<protreg45Val,protreg45Val::disabled> disabled{};
            constexpr MPL::Value<protreg45Val,protreg45Val::enabled> enabled{};
            constexpr MPL::Value<protreg45Val,protreg45Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,protreg45Val> protreg45{}; 
        ///Protection enable for region 46.
        enum class protreg46Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg46ValC{
            constexpr MPL::Value<protreg46Val,protreg46Val::disabled> disabled{};
            constexpr MPL::Value<protreg46Val,protreg46Val::enabled> enabled{};
            constexpr MPL::Value<protreg46Val,protreg46Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,protreg46Val> protreg46{}; 
        ///Protection enable for region 47.
        enum class protreg47Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg47ValC{
            constexpr MPL::Value<protreg47Val,protreg47Val::disabled> disabled{};
            constexpr MPL::Value<protreg47Val,protreg47Val::enabled> enabled{};
            constexpr MPL::Value<protreg47Val,protreg47Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,protreg47Val> protreg47{}; 
        ///Protection enable for region 48.
        enum class protreg48Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg48ValC{
            constexpr MPL::Value<protreg48Val,protreg48Val::disabled> disabled{};
            constexpr MPL::Value<protreg48Val,protreg48Val::enabled> enabled{};
            constexpr MPL::Value<protreg48Val,protreg48Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,protreg48Val> protreg48{}; 
        ///Protection enable for region 49.
        enum class protreg49Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg49ValC{
            constexpr MPL::Value<protreg49Val,protreg49Val::disabled> disabled{};
            constexpr MPL::Value<protreg49Val,protreg49Val::enabled> enabled{};
            constexpr MPL::Value<protreg49Val,protreg49Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,protreg49Val> protreg49{}; 
        ///Protection enable for region 50.
        enum class protreg50Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg50ValC{
            constexpr MPL::Value<protreg50Val,protreg50Val::disabled> disabled{};
            constexpr MPL::Value<protreg50Val,protreg50Val::enabled> enabled{};
            constexpr MPL::Value<protreg50Val,protreg50Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,protreg50Val> protreg50{}; 
        ///Protection enable for region 51.
        enum class protreg51Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg51ValC{
            constexpr MPL::Value<protreg51Val,protreg51Val::disabled> disabled{};
            constexpr MPL::Value<protreg51Val,protreg51Val::enabled> enabled{};
            constexpr MPL::Value<protreg51Val,protreg51Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,protreg51Val> protreg51{}; 
        ///Protection enable for region 52.
        enum class protreg52Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg52ValC{
            constexpr MPL::Value<protreg52Val,protreg52Val::disabled> disabled{};
            constexpr MPL::Value<protreg52Val,protreg52Val::enabled> enabled{};
            constexpr MPL::Value<protreg52Val,protreg52Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,protreg52Val> protreg52{}; 
        ///Protection enable for region 53.
        enum class protreg53Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg53ValC{
            constexpr MPL::Value<protreg53Val,protreg53Val::disabled> disabled{};
            constexpr MPL::Value<protreg53Val,protreg53Val::enabled> enabled{};
            constexpr MPL::Value<protreg53Val,protreg53Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,protreg53Val> protreg53{}; 
        ///Protection enable for region 54.
        enum class protreg54Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg54ValC{
            constexpr MPL::Value<protreg54Val,protreg54Val::disabled> disabled{};
            constexpr MPL::Value<protreg54Val,protreg54Val::enabled> enabled{};
            constexpr MPL::Value<protreg54Val,protreg54Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,protreg54Val> protreg54{}; 
        ///Protection enable for region 55.
        enum class protreg55Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg55ValC{
            constexpr MPL::Value<protreg55Val,protreg55Val::disabled> disabled{};
            constexpr MPL::Value<protreg55Val,protreg55Val::enabled> enabled{};
            constexpr MPL::Value<protreg55Val,protreg55Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,protreg55Val> protreg55{}; 
        ///Protection enable for region 56.
        enum class protreg56Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg56ValC{
            constexpr MPL::Value<protreg56Val,protreg56Val::disabled> disabled{};
            constexpr MPL::Value<protreg56Val,protreg56Val::enabled> enabled{};
            constexpr MPL::Value<protreg56Val,protreg56Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,protreg56Val> protreg56{}; 
        ///Protection enable for region 57.
        enum class protreg57Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg57ValC{
            constexpr MPL::Value<protreg57Val,protreg57Val::disabled> disabled{};
            constexpr MPL::Value<protreg57Val,protreg57Val::enabled> enabled{};
            constexpr MPL::Value<protreg57Val,protreg57Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,protreg57Val> protreg57{}; 
        ///Protection enable for region 58.
        enum class protreg58Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg58ValC{
            constexpr MPL::Value<protreg58Val,protreg58Val::disabled> disabled{};
            constexpr MPL::Value<protreg58Val,protreg58Val::enabled> enabled{};
            constexpr MPL::Value<protreg58Val,protreg58Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,protreg58Val> protreg58{}; 
        ///Protection enable for region 59.
        enum class protreg59Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg59ValC{
            constexpr MPL::Value<protreg59Val,protreg59Val::disabled> disabled{};
            constexpr MPL::Value<protreg59Val,protreg59Val::enabled> enabled{};
            constexpr MPL::Value<protreg59Val,protreg59Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,protreg59Val> protreg59{}; 
        ///Protection enable for region 60.
        enum class protreg60Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg60ValC{
            constexpr MPL::Value<protreg60Val,protreg60Val::disabled> disabled{};
            constexpr MPL::Value<protreg60Val,protreg60Val::enabled> enabled{};
            constexpr MPL::Value<protreg60Val,protreg60Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,protreg60Val> protreg60{}; 
        ///Protection enable for region 61.
        enum class protreg61Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg61ValC{
            constexpr MPL::Value<protreg61Val,protreg61Val::disabled> disabled{};
            constexpr MPL::Value<protreg61Val,protreg61Val::enabled> enabled{};
            constexpr MPL::Value<protreg61Val,protreg61Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,protreg61Val> protreg61{}; 
        ///Protection enable for region 62.
        enum class protreg62Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg62ValC{
            constexpr MPL::Value<protreg62Val,protreg62Val::disabled> disabled{};
            constexpr MPL::Value<protreg62Val,protreg62Val::enabled> enabled{};
            constexpr MPL::Value<protreg62Val,protreg62Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,protreg62Val> protreg62{}; 
        ///Protection enable for region 63.
        enum class protreg63Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        namespace protreg63ValC{
            constexpr MPL::Value<protreg63Val,protreg63Val::disabled> disabled{};
            constexpr MPL::Value<protreg63Val,protreg63Val::enabled> enabled{};
            constexpr MPL::Value<protreg63Val,protreg63Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,protreg63Val> protreg63{}; 
    }
    namespace Nonedisableindebug{    ///<Disable erase and write protection mechanism in debug mode.
        using Addr = Register::Address<0x40000608,0xfffffffe,0,unsigned>;
        ///Disable protection mechanism in debug mode.
        enum class disableindebugVal {
            enabled=0x00000000,     ///<Protection enabled.
            disabled=0x00000001,     ///<Protection disabled.
        };
        namespace disableindebugValC{
            constexpr MPL::Value<disableindebugVal,disableindebugVal::enabled> enabled{};
            constexpr MPL::Value<disableindebugVal,disableindebugVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,disableindebugVal> disableindebug{}; 
    }
    namespace Noneprotblocksize{    ///<Erase and write protection block size.
        using Addr = Register::Address<0x4000060c,0xfffffffc,0,unsigned>;
        ///Erase and write protection block size.
        enum class protblocksizeVal {
            v4k=0x00000000,     ///<Erase and write protection block size is 4k.
        };
        namespace protblocksizeValC{
            constexpr MPL::Value<protblocksizeVal,protblocksizeVal::v4k> v4k{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,protblocksizeVal> protblocksize{}; 
    }
}
