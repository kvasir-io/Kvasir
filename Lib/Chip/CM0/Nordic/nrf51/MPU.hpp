#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Memory Protection Unit.
    namespace Noneperr0{    ///<Configuration of peripherals in mpu regions.
        using Addr = Register::Address<0x40000528,0x3ff00020,0,unsigned>;
        ///POWER_CLOCK region configuration.
        enum class PowerclockVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PowerclockVal> powerClock{}; 
        namespace PowerclockValC{
            constexpr Register::FieldValue<decltype(powerClock)::Type,PowerclockVal::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(powerClock)::Type,PowerclockVal::inregion1> inregion1{};
        }
        }
        ///RADIO region configuration.
        enum class RadioVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RadioVal> radio{}; 
        namespace RadioValC{
            constexpr Register::FieldValue<decltype(radio)::Type,RadioVal::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(radio)::Type,RadioVal::inregion1> inregion1{};
        }
        }
        ///UART0 region configuration.
        enum class Uart0Val {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Uart0Val> uart0{}; 
        namespace Uart0ValC{
            constexpr Register::FieldValue<decltype(uart0)::Type,Uart0Val::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(uart0)::Type,Uart0Val::inregion1> inregion1{};
        }
        }
        ///SPI0 and TWI0 region configuration.
        enum class Spi0twi0Val {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Spi0twi0Val> spi0Twi0{}; 
        namespace Spi0twi0ValC{
            constexpr Register::FieldValue<decltype(spi0Twi0)::Type,Spi0twi0Val::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(spi0Twi0)::Type,Spi0twi0Val::inregion1> inregion1{};
        }
        }
        ///SPI1 and TWI1 region configuration.
        enum class Spi1twi1Val {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Spi1twi1Val> spi1Twi1{}; 
        namespace Spi1twi1ValC{
            constexpr Register::FieldValue<decltype(spi1Twi1)::Type,Spi1twi1Val::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(spi1Twi1)::Type,Spi1twi1Val::inregion1> inregion1{};
        }
        }
        ///GPIOTE region configuration.
        enum class GpioteVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,GpioteVal> gpiote{}; 
        namespace GpioteValC{
            constexpr Register::FieldValue<decltype(gpiote)::Type,GpioteVal::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(gpiote)::Type,GpioteVal::inregion1> inregion1{};
        }
        }
        ///ADC region configuration.
        enum class AdcVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdcVal> adc{}; 
        namespace AdcValC{
            constexpr Register::FieldValue<decltype(adc)::Type,AdcVal::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(adc)::Type,AdcVal::inregion1> inregion1{};
        }
        }
        ///TIMER0 region configuration.
        enum class Timer0Val {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Timer0Val> timer0{}; 
        namespace Timer0ValC{
            constexpr Register::FieldValue<decltype(timer0)::Type,Timer0Val::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(timer0)::Type,Timer0Val::inregion1> inregion1{};
        }
        }
        ///TIMER1 region configuration.
        enum class Timer1Val {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Timer1Val> timer1{}; 
        namespace Timer1ValC{
            constexpr Register::FieldValue<decltype(timer1)::Type,Timer1Val::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(timer1)::Type,Timer1Val::inregion1> inregion1{};
        }
        }
        ///TIMER2 region configuration.
        enum class Timer2Val {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Timer2Val> timer2{}; 
        namespace Timer2ValC{
            constexpr Register::FieldValue<decltype(timer2)::Type,Timer2Val::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(timer2)::Type,Timer2Val::inregion1> inregion1{};
        }
        }
        ///RTC0 region configuration.
        enum class Rtc0Val {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Rtc0Val> rtc0{}; 
        namespace Rtc0ValC{
            constexpr Register::FieldValue<decltype(rtc0)::Type,Rtc0Val::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(rtc0)::Type,Rtc0Val::inregion1> inregion1{};
        }
        }
        ///TEMP region configuration.
        enum class TempVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,TempVal> temp{}; 
        namespace TempValC{
            constexpr Register::FieldValue<decltype(temp)::Type,TempVal::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(temp)::Type,TempVal::inregion1> inregion1{};
        }
        }
        ///RNG region configuration.
        enum class RngVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,RngVal> rng{}; 
        namespace RngValC{
            constexpr Register::FieldValue<decltype(rng)::Type,RngVal::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(rng)::Type,RngVal::inregion1> inregion1{};
        }
        }
        ///ECB region configuration.
        enum class EcbVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,EcbVal> ecb{}; 
        namespace EcbValC{
            constexpr Register::FieldValue<decltype(ecb)::Type,EcbVal::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(ecb)::Type,EcbVal::inregion1> inregion1{};
        }
        }
        ///CCM and AAR region configuration.
        enum class CcmaarVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,CcmaarVal> ccmAar{}; 
        namespace CcmaarValC{
            constexpr Register::FieldValue<decltype(ccmAar)::Type,CcmaarVal::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(ccmAar)::Type,CcmaarVal::inregion1> inregion1{};
        }
        }
        ///WDT region configuration.
        enum class WdtVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,WdtVal> wdt{}; 
        namespace WdtValC{
            constexpr Register::FieldValue<decltype(wdt)::Type,WdtVal::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(wdt)::Type,WdtVal::inregion1> inregion1{};
        }
        }
        ///RTC1 region configuration.
        enum class Rtc1Val {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Rtc1Val> rtc1{}; 
        namespace Rtc1ValC{
            constexpr Register::FieldValue<decltype(rtc1)::Type,Rtc1Val::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(rtc1)::Type,Rtc1Val::inregion1> inregion1{};
        }
        }
        ///QDEC region configuration.
        enum class QdecVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,QdecVal> qdec{}; 
        namespace QdecValC{
            constexpr Register::FieldValue<decltype(qdec)::Type,QdecVal::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(qdec)::Type,QdecVal::inregion1> inregion1{};
        }
        }
        ///LPCOMP region configuration.
        enum class LpcompVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,LpcompVal> lpcomp{}; 
        namespace LpcompValC{
            constexpr Register::FieldValue<decltype(lpcomp)::Type,LpcompVal::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(lpcomp)::Type,LpcompVal::inregion1> inregion1{};
        }
        }
        ///NVMC region configuration.
        enum class NvmcVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,NvmcVal> nvmc{}; 
        namespace NvmcValC{
            constexpr Register::FieldValue<decltype(nvmc)::Type,NvmcVal::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(nvmc)::Type,NvmcVal::inregion1> inregion1{};
        }
        }
        ///PPI region configuration.
        enum class PpiVal {
            inregion0=0x00000001,     ///<Peripheral configured in region 0.
            inregion1=0x00000000,     ///<Peripheral configured in region 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,PpiVal> ppi{}; 
        namespace PpiValC{
            constexpr Register::FieldValue<decltype(ppi)::Type,PpiVal::inregion0> inregion0{};
            constexpr Register::FieldValue<decltype(ppi)::Type,PpiVal::inregion1> inregion1{};
        }
        }
    }
    namespace Nonerlenr0{    ///<Length of RAM region 0.
        using Addr = Register::Address<0x4000052c,0xffffffff,0,unsigned>;
    }
    namespace Noneprotenset0{    ///<Erase and write protection bit enable set register.
        using Addr = Register::Address<0x40000600,0x00000000,0,unsigned>;
        ///Protection enable for region 0.
        enum class Protreg0Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Protreg0Val> protreg0{}; 
        namespace Protreg0ValC{
            constexpr Register::FieldValue<decltype(protreg0)::Type,Protreg0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg0)::Type,Protreg0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg0)::Type,Protreg0Val::set> set{};
        }
        }
        ///Protection enable for region 1.
        enum class Protreg1Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Protreg1Val> protreg1{}; 
        namespace Protreg1ValC{
            constexpr Register::FieldValue<decltype(protreg1)::Type,Protreg1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg1)::Type,Protreg1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg1)::Type,Protreg1Val::set> set{};
        }
        }
        ///Protection enable for region 2.
        enum class Protreg2Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Protreg2Val> protreg2{}; 
        namespace Protreg2ValC{
            constexpr Register::FieldValue<decltype(protreg2)::Type,Protreg2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg2)::Type,Protreg2Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg2)::Type,Protreg2Val::set> set{};
        }
        }
        ///Protection enable for region 3.
        enum class Protreg3Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Protreg3Val> protreg3{}; 
        namespace Protreg3ValC{
            constexpr Register::FieldValue<decltype(protreg3)::Type,Protreg3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg3)::Type,Protreg3Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg3)::Type,Protreg3Val::set> set{};
        }
        }
        ///Protection enable for region 4.
        enum class Protreg4Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Protreg4Val> protreg4{}; 
        namespace Protreg4ValC{
            constexpr Register::FieldValue<decltype(protreg4)::Type,Protreg4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg4)::Type,Protreg4Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg4)::Type,Protreg4Val::set> set{};
        }
        }
        ///Protection enable for region 5.
        enum class Protreg5Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Protreg5Val> protreg5{}; 
        namespace Protreg5ValC{
            constexpr Register::FieldValue<decltype(protreg5)::Type,Protreg5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg5)::Type,Protreg5Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg5)::Type,Protreg5Val::set> set{};
        }
        }
        ///Protection enable for region 6.
        enum class Protreg6Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Protreg6Val> protreg6{}; 
        namespace Protreg6ValC{
            constexpr Register::FieldValue<decltype(protreg6)::Type,Protreg6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg6)::Type,Protreg6Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg6)::Type,Protreg6Val::set> set{};
        }
        }
        ///Protection enable for region 7.
        enum class Protreg7Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Protreg7Val> protreg7{}; 
        namespace Protreg7ValC{
            constexpr Register::FieldValue<decltype(protreg7)::Type,Protreg7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg7)::Type,Protreg7Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg7)::Type,Protreg7Val::set> set{};
        }
        }
        ///Protection enable for region 8.
        enum class Protreg8Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Protreg8Val> protreg8{}; 
        namespace Protreg8ValC{
            constexpr Register::FieldValue<decltype(protreg8)::Type,Protreg8Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg8)::Type,Protreg8Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg8)::Type,Protreg8Val::set> set{};
        }
        }
        ///Protection enable for region 9.
        enum class Protreg9Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Protreg9Val> protreg9{}; 
        namespace Protreg9ValC{
            constexpr Register::FieldValue<decltype(protreg9)::Type,Protreg9Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg9)::Type,Protreg9Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg9)::Type,Protreg9Val::set> set{};
        }
        }
        ///Protection enable for region 10.
        enum class Protreg10Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Protreg10Val> protreg10{}; 
        namespace Protreg10ValC{
            constexpr Register::FieldValue<decltype(protreg10)::Type,Protreg10Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg10)::Type,Protreg10Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg10)::Type,Protreg10Val::set> set{};
        }
        }
        ///Protection enable for region 11.
        enum class Protreg11Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Protreg11Val> protreg11{}; 
        namespace Protreg11ValC{
            constexpr Register::FieldValue<decltype(protreg11)::Type,Protreg11Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg11)::Type,Protreg11Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg11)::Type,Protreg11Val::set> set{};
        }
        }
        ///Protection enable for region 12.
        enum class Protreg12Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Protreg12Val> protreg12{}; 
        namespace Protreg12ValC{
            constexpr Register::FieldValue<decltype(protreg12)::Type,Protreg12Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg12)::Type,Protreg12Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg12)::Type,Protreg12Val::set> set{};
        }
        }
        ///Protection enable for region 13.
        enum class Protreg13Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Protreg13Val> protreg13{}; 
        namespace Protreg13ValC{
            constexpr Register::FieldValue<decltype(protreg13)::Type,Protreg13Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg13)::Type,Protreg13Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg13)::Type,Protreg13Val::set> set{};
        }
        }
        ///Protection enable for region 14.
        enum class Protreg14Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Protreg14Val> protreg14{}; 
        namespace Protreg14ValC{
            constexpr Register::FieldValue<decltype(protreg14)::Type,Protreg14Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg14)::Type,Protreg14Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg14)::Type,Protreg14Val::set> set{};
        }
        }
        ///Protection enable for region 15.
        enum class Protreg15Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Protreg15Val> protreg15{}; 
        namespace Protreg15ValC{
            constexpr Register::FieldValue<decltype(protreg15)::Type,Protreg15Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg15)::Type,Protreg15Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg15)::Type,Protreg15Val::set> set{};
        }
        }
        ///Protection enable for region 16.
        enum class Protreg16Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Protreg16Val> protreg16{}; 
        namespace Protreg16ValC{
            constexpr Register::FieldValue<decltype(protreg16)::Type,Protreg16Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg16)::Type,Protreg16Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg16)::Type,Protreg16Val::set> set{};
        }
        }
        ///Protection enable for region 17.
        enum class Protreg17Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Protreg17Val> protreg17{}; 
        namespace Protreg17ValC{
            constexpr Register::FieldValue<decltype(protreg17)::Type,Protreg17Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg17)::Type,Protreg17Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg17)::Type,Protreg17Val::set> set{};
        }
        }
        ///Protection enable for region 18.
        enum class Protreg18Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Protreg18Val> protreg18{}; 
        namespace Protreg18ValC{
            constexpr Register::FieldValue<decltype(protreg18)::Type,Protreg18Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg18)::Type,Protreg18Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg18)::Type,Protreg18Val::set> set{};
        }
        }
        ///Protection enable for region 19.
        enum class Protreg19Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Protreg19Val> protreg19{}; 
        namespace Protreg19ValC{
            constexpr Register::FieldValue<decltype(protreg19)::Type,Protreg19Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg19)::Type,Protreg19Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg19)::Type,Protreg19Val::set> set{};
        }
        }
        ///Protection enable for region 20.
        enum class Protreg20Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Protreg20Val> protreg20{}; 
        namespace Protreg20ValC{
            constexpr Register::FieldValue<decltype(protreg20)::Type,Protreg20Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg20)::Type,Protreg20Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg20)::Type,Protreg20Val::set> set{};
        }
        }
        ///Protection enable for region 21.
        enum class Protreg21Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Protreg21Val> protreg21{}; 
        namespace Protreg21ValC{
            constexpr Register::FieldValue<decltype(protreg21)::Type,Protreg21Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg21)::Type,Protreg21Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg21)::Type,Protreg21Val::set> set{};
        }
        }
        ///Protection enable for region 22.
        enum class Protreg22Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Protreg22Val> protreg22{}; 
        namespace Protreg22ValC{
            constexpr Register::FieldValue<decltype(protreg22)::Type,Protreg22Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg22)::Type,Protreg22Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg22)::Type,Protreg22Val::set> set{};
        }
        }
        ///Protection enable for region 23.
        enum class Protreg23Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Protreg23Val> protreg23{}; 
        namespace Protreg23ValC{
            constexpr Register::FieldValue<decltype(protreg23)::Type,Protreg23Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg23)::Type,Protreg23Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg23)::Type,Protreg23Val::set> set{};
        }
        }
        ///Protection enable for region 24.
        enum class Protreg24Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Protreg24Val> protreg24{}; 
        namespace Protreg24ValC{
            constexpr Register::FieldValue<decltype(protreg24)::Type,Protreg24Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg24)::Type,Protreg24Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg24)::Type,Protreg24Val::set> set{};
        }
        }
        ///Protection enable for region 25.
        enum class Protreg25Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Protreg25Val> protreg25{}; 
        namespace Protreg25ValC{
            constexpr Register::FieldValue<decltype(protreg25)::Type,Protreg25Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg25)::Type,Protreg25Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg25)::Type,Protreg25Val::set> set{};
        }
        }
        ///Protection enable for region 26.
        enum class Protreg26Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Protreg26Val> protreg26{}; 
        namespace Protreg26ValC{
            constexpr Register::FieldValue<decltype(protreg26)::Type,Protreg26Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg26)::Type,Protreg26Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg26)::Type,Protreg26Val::set> set{};
        }
        }
        ///Protection enable for region 27.
        enum class Protreg27Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Protreg27Val> protreg27{}; 
        namespace Protreg27ValC{
            constexpr Register::FieldValue<decltype(protreg27)::Type,Protreg27Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg27)::Type,Protreg27Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg27)::Type,Protreg27Val::set> set{};
        }
        }
        ///Protection enable for region 28.
        enum class Protreg28Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Protreg28Val> protreg28{}; 
        namespace Protreg28ValC{
            constexpr Register::FieldValue<decltype(protreg28)::Type,Protreg28Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg28)::Type,Protreg28Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg28)::Type,Protreg28Val::set> set{};
        }
        }
        ///Protection enable for region 29.
        enum class Protreg29Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Protreg29Val> protreg29{}; 
        namespace Protreg29ValC{
            constexpr Register::FieldValue<decltype(protreg29)::Type,Protreg29Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg29)::Type,Protreg29Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg29)::Type,Protreg29Val::set> set{};
        }
        }
        ///Protection enable for region 30.
        enum class Protreg30Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Protreg30Val> protreg30{}; 
        namespace Protreg30ValC{
            constexpr Register::FieldValue<decltype(protreg30)::Type,Protreg30Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg30)::Type,Protreg30Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg30)::Type,Protreg30Val::set> set{};
        }
        }
        ///Protection enable for region 31.
        enum class Protreg31Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Protreg31Val> protreg31{}; 
        namespace Protreg31ValC{
            constexpr Register::FieldValue<decltype(protreg31)::Type,Protreg31Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg31)::Type,Protreg31Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg31)::Type,Protreg31Val::set> set{};
        }
        }
    }
    namespace Noneprotenset1{    ///<Erase and write protection bit enable set register.
        using Addr = Register::Address<0x40000604,0x00000000,0,unsigned>;
        ///Protection enable for region 32.
        enum class Protreg32Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Protreg32Val> protreg32{}; 
        namespace Protreg32ValC{
            constexpr Register::FieldValue<decltype(protreg32)::Type,Protreg32Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg32)::Type,Protreg32Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg32)::Type,Protreg32Val::set> set{};
        }
        }
        ///Protection enable for region 33.
        enum class Protreg33Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Protreg33Val> protreg33{}; 
        namespace Protreg33ValC{
            constexpr Register::FieldValue<decltype(protreg33)::Type,Protreg33Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg33)::Type,Protreg33Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg33)::Type,Protreg33Val::set> set{};
        }
        }
        ///Protection enable for region 34.
        enum class Protreg34Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Protreg34Val> protreg34{}; 
        namespace Protreg34ValC{
            constexpr Register::FieldValue<decltype(protreg34)::Type,Protreg34Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg34)::Type,Protreg34Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg34)::Type,Protreg34Val::set> set{};
        }
        }
        ///Protection enable for region 35.
        enum class Protreg35Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Protreg35Val> protreg35{}; 
        namespace Protreg35ValC{
            constexpr Register::FieldValue<decltype(protreg35)::Type,Protreg35Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg35)::Type,Protreg35Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg35)::Type,Protreg35Val::set> set{};
        }
        }
        ///Protection enable for region 36.
        enum class Protreg36Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Protreg36Val> protreg36{}; 
        namespace Protreg36ValC{
            constexpr Register::FieldValue<decltype(protreg36)::Type,Protreg36Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg36)::Type,Protreg36Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg36)::Type,Protreg36Val::set> set{};
        }
        }
        ///Protection enable for region 37.
        enum class Protreg37Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Protreg37Val> protreg37{}; 
        namespace Protreg37ValC{
            constexpr Register::FieldValue<decltype(protreg37)::Type,Protreg37Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg37)::Type,Protreg37Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg37)::Type,Protreg37Val::set> set{};
        }
        }
        ///Protection enable for region 38.
        enum class Protreg38Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Protreg38Val> protreg38{}; 
        namespace Protreg38ValC{
            constexpr Register::FieldValue<decltype(protreg38)::Type,Protreg38Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg38)::Type,Protreg38Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg38)::Type,Protreg38Val::set> set{};
        }
        }
        ///Protection enable for region 39.
        enum class Protreg39Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Protreg39Val> protreg39{}; 
        namespace Protreg39ValC{
            constexpr Register::FieldValue<decltype(protreg39)::Type,Protreg39Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg39)::Type,Protreg39Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg39)::Type,Protreg39Val::set> set{};
        }
        }
        ///Protection enable for region 40.
        enum class Protreg40Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Protreg40Val> protreg40{}; 
        namespace Protreg40ValC{
            constexpr Register::FieldValue<decltype(protreg40)::Type,Protreg40Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg40)::Type,Protreg40Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg40)::Type,Protreg40Val::set> set{};
        }
        }
        ///Protection enable for region 41.
        enum class Protreg41Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Protreg41Val> protreg41{}; 
        namespace Protreg41ValC{
            constexpr Register::FieldValue<decltype(protreg41)::Type,Protreg41Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg41)::Type,Protreg41Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg41)::Type,Protreg41Val::set> set{};
        }
        }
        ///Protection enable for region 42.
        enum class Protreg42Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Protreg42Val> protreg42{}; 
        namespace Protreg42ValC{
            constexpr Register::FieldValue<decltype(protreg42)::Type,Protreg42Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg42)::Type,Protreg42Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg42)::Type,Protreg42Val::set> set{};
        }
        }
        ///Protection enable for region 43.
        enum class Protreg43Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Protreg43Val> protreg43{}; 
        namespace Protreg43ValC{
            constexpr Register::FieldValue<decltype(protreg43)::Type,Protreg43Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg43)::Type,Protreg43Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg43)::Type,Protreg43Val::set> set{};
        }
        }
        ///Protection enable for region 44.
        enum class Protreg44Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Protreg44Val> protreg44{}; 
        namespace Protreg44ValC{
            constexpr Register::FieldValue<decltype(protreg44)::Type,Protreg44Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg44)::Type,Protreg44Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg44)::Type,Protreg44Val::set> set{};
        }
        }
        ///Protection enable for region 45.
        enum class Protreg45Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Protreg45Val> protreg45{}; 
        namespace Protreg45ValC{
            constexpr Register::FieldValue<decltype(protreg45)::Type,Protreg45Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg45)::Type,Protreg45Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg45)::Type,Protreg45Val::set> set{};
        }
        }
        ///Protection enable for region 46.
        enum class Protreg46Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Protreg46Val> protreg46{}; 
        namespace Protreg46ValC{
            constexpr Register::FieldValue<decltype(protreg46)::Type,Protreg46Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg46)::Type,Protreg46Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg46)::Type,Protreg46Val::set> set{};
        }
        }
        ///Protection enable for region 47.
        enum class Protreg47Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Protreg47Val> protreg47{}; 
        namespace Protreg47ValC{
            constexpr Register::FieldValue<decltype(protreg47)::Type,Protreg47Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg47)::Type,Protreg47Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg47)::Type,Protreg47Val::set> set{};
        }
        }
        ///Protection enable for region 48.
        enum class Protreg48Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Protreg48Val> protreg48{}; 
        namespace Protreg48ValC{
            constexpr Register::FieldValue<decltype(protreg48)::Type,Protreg48Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg48)::Type,Protreg48Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg48)::Type,Protreg48Val::set> set{};
        }
        }
        ///Protection enable for region 49.
        enum class Protreg49Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Protreg49Val> protreg49{}; 
        namespace Protreg49ValC{
            constexpr Register::FieldValue<decltype(protreg49)::Type,Protreg49Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg49)::Type,Protreg49Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg49)::Type,Protreg49Val::set> set{};
        }
        }
        ///Protection enable for region 50.
        enum class Protreg50Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Protreg50Val> protreg50{}; 
        namespace Protreg50ValC{
            constexpr Register::FieldValue<decltype(protreg50)::Type,Protreg50Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg50)::Type,Protreg50Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg50)::Type,Protreg50Val::set> set{};
        }
        }
        ///Protection enable for region 51.
        enum class Protreg51Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Protreg51Val> protreg51{}; 
        namespace Protreg51ValC{
            constexpr Register::FieldValue<decltype(protreg51)::Type,Protreg51Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg51)::Type,Protreg51Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg51)::Type,Protreg51Val::set> set{};
        }
        }
        ///Protection enable for region 52.
        enum class Protreg52Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Protreg52Val> protreg52{}; 
        namespace Protreg52ValC{
            constexpr Register::FieldValue<decltype(protreg52)::Type,Protreg52Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg52)::Type,Protreg52Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg52)::Type,Protreg52Val::set> set{};
        }
        }
        ///Protection enable for region 53.
        enum class Protreg53Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Protreg53Val> protreg53{}; 
        namespace Protreg53ValC{
            constexpr Register::FieldValue<decltype(protreg53)::Type,Protreg53Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg53)::Type,Protreg53Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg53)::Type,Protreg53Val::set> set{};
        }
        }
        ///Protection enable for region 54.
        enum class Protreg54Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Protreg54Val> protreg54{}; 
        namespace Protreg54ValC{
            constexpr Register::FieldValue<decltype(protreg54)::Type,Protreg54Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg54)::Type,Protreg54Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg54)::Type,Protreg54Val::set> set{};
        }
        }
        ///Protection enable for region 55.
        enum class Protreg55Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Protreg55Val> protreg55{}; 
        namespace Protreg55ValC{
            constexpr Register::FieldValue<decltype(protreg55)::Type,Protreg55Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg55)::Type,Protreg55Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg55)::Type,Protreg55Val::set> set{};
        }
        }
        ///Protection enable for region 56.
        enum class Protreg56Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Protreg56Val> protreg56{}; 
        namespace Protreg56ValC{
            constexpr Register::FieldValue<decltype(protreg56)::Type,Protreg56Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg56)::Type,Protreg56Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg56)::Type,Protreg56Val::set> set{};
        }
        }
        ///Protection enable for region 57.
        enum class Protreg57Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Protreg57Val> protreg57{}; 
        namespace Protreg57ValC{
            constexpr Register::FieldValue<decltype(protreg57)::Type,Protreg57Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg57)::Type,Protreg57Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg57)::Type,Protreg57Val::set> set{};
        }
        }
        ///Protection enable for region 58.
        enum class Protreg58Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Protreg58Val> protreg58{}; 
        namespace Protreg58ValC{
            constexpr Register::FieldValue<decltype(protreg58)::Type,Protreg58Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg58)::Type,Protreg58Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg58)::Type,Protreg58Val::set> set{};
        }
        }
        ///Protection enable for region 59.
        enum class Protreg59Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Protreg59Val> protreg59{}; 
        namespace Protreg59ValC{
            constexpr Register::FieldValue<decltype(protreg59)::Type,Protreg59Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg59)::Type,Protreg59Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg59)::Type,Protreg59Val::set> set{};
        }
        }
        ///Protection enable for region 60.
        enum class Protreg60Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Protreg60Val> protreg60{}; 
        namespace Protreg60ValC{
            constexpr Register::FieldValue<decltype(protreg60)::Type,Protreg60Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg60)::Type,Protreg60Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg60)::Type,Protreg60Val::set> set{};
        }
        }
        ///Protection enable for region 61.
        enum class Protreg61Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Protreg61Val> protreg61{}; 
        namespace Protreg61ValC{
            constexpr Register::FieldValue<decltype(protreg61)::Type,Protreg61Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg61)::Type,Protreg61Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg61)::Type,Protreg61Val::set> set{};
        }
        }
        ///Protection enable for region 62.
        enum class Protreg62Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Protreg62Val> protreg62{}; 
        namespace Protreg62ValC{
            constexpr Register::FieldValue<decltype(protreg62)::Type,Protreg62Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg62)::Type,Protreg62Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg62)::Type,Protreg62Val::set> set{};
        }
        }
        ///Protection enable for region 63.
        enum class Protreg63Val {
            disabled=0x00000000,     ///<Protection disabled.
            enabled=0x00000001,     ///<Protection enabled.
            set=0x00000001,     ///<Enable protection on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Protreg63Val> protreg63{}; 
        namespace Protreg63ValC{
            constexpr Register::FieldValue<decltype(protreg63)::Type,Protreg63Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protreg63)::Type,Protreg63Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(protreg63)::Type,Protreg63Val::set> set{};
        }
        }
    }
    namespace Nonedisableindebug{    ///<Disable erase and write protection mechanism in debug mode.
        using Addr = Register::Address<0x40000608,0xfffffffe,0,unsigned>;
        ///Disable protection mechanism in debug mode.
        enum class DisableindebugVal {
            enabled=0x00000000,     ///<Protection enabled.
            disabled=0x00000001,     ///<Protection disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DisableindebugVal> disableindebug{}; 
        namespace DisableindebugValC{
            constexpr Register::FieldValue<decltype(disableindebug)::Type,DisableindebugVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(disableindebug)::Type,DisableindebugVal::disabled> disabled{};
        }
        }
    }
    namespace Noneprotblocksize{    ///<Erase and write protection block size.
        using Addr = Register::Address<0x4000060c,0xfffffffc,0,unsigned>;
        ///Erase and write protection block size.
        enum class ProtblocksizeVal {
            v4k=0x00000000,     ///<Erase and write protection block size is 4k.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ProtblocksizeVal> protblocksize{}; 
        namespace ProtblocksizeValC{
            constexpr Register::FieldValue<decltype(protblocksize)::Type,ProtblocksizeVal::v4k> v4k{};
        }
        }
    }
}
