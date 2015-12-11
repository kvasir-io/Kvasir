#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Asynchronous system configuration
    namespace Noneaysncpresetctrl{    ///<Async peripheral reset control
        using Addr = Register::Address<0x40080000,0xffff1901,0,unsigned>;
        ///USART0 reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usart0{}; 
        ///USART1 reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usart1{}; 
        ///USART2 reset control.0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usart2{}; 
        ///USART3 reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usart3{}; 
        ///I2C0 reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> i2c0{}; 
        ///I2C1 reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> i2c1{}; 
        ///I2C2 reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> i2c2{}; 
        ///SPI0 reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> spi0{}; 
        ///SPI1 reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> spi1{}; 
        ///Timer 0 reset control. 0 = Clear reset to this function. 1
								= Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> timer0{}; 
        ///Timer 1 reset control. 0 = Clear reset to this function. 1
								= Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> timer1{}; 
        ///FRG reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> frg0{}; 
    }
    namespace Noneaysncpresetctrlset{    ///<Set bits in AYSNCPRESETCTRL
        using Addr = Register::Address<0x40080004,0x00000000,0,unsigned>;
        ///Writing ones to this register sets the corresponding bit or
								bits in the AYSNCPRESETCTRL register, if they are implemented. Bits
								that do not correspond to defined bits in AYSNCPRESETCTRL are
								reserved and only zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> arstSet{}; 
    }
    namespace Noneaysncpresetctrlclr{    ///<Clear bits in AYSNCPRESETCTRL
        using Addr = Register::Address<0x40080008,0x00000000,0,unsigned>;
        ///Writing ones to this register clears the corresponding bit
								or bits in the AYSNCPRESETCTRL register, if they are implemented.
								Bits that do not correspond to defined bits in AYSNCPRESETCTRL are
								reserved and only zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> arstClr{}; 
    }
    namespace Noneasyncapbclkctrl{    ///<Async peripheral clock control
        using Addr = Register::Address<0x40080010,0xffff1901,0,unsigned>;
        ///Controls the clock for USART0. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usart0{}; 
        ///Controls the clock for USART1. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usart1{}; 
        ///Controls the clock for USART2. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usart2{}; 
        ///Controls the clock for USART3. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usart3{}; 
        ///Controls the clock for I2C0. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> i2c0{}; 
        ///Controls the clock for I2C1. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> i2c1{}; 
        ///Controls the clock for I2C2. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> i2c2{}; 
        ///Controls the clock for SPI0. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> spi0{}; 
        ///Controls the clock for SPI1. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> spi1{}; 
        ///Controls the clock for TIMER0. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> timer0{}; 
        ///Controls the clock for TIMER1. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> timer1{}; 
        ///Controls the clock for the Fractional Rate Generator used
								with the USARTs. 0 = Disable; 1 = Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> frg0{}; 
    }
    namespace Noneasyncapbclkctrlset{    ///<Set bits in ASYNCAPBCLKCTRL
        using Addr = Register::Address<0x40080014,0x00000000,0,unsigned>;
        ///Writing ones to this register sets the corresponding bit or
								bits in the ASYNCAPBCLKCTRL register, if they are implemented. Bits
								that do not correspond to defined bits in AYSNCPRESETCTRL are
								reserved and only zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aclkSet{}; 
    }
    namespace Noneasyncapbclkctrlclr{    ///<Clear bits in ASYNCAPBCLKCTRL
        using Addr = Register::Address<0x40080018,0x00000000,0,unsigned>;
        ///Writing ones to this register clears the corresponding bit
								or bits in the ASYNCAPBCLKCTRL register, if they are implemented.
								Bits that do not correspond to defined bits in ASYNCAPBCLKCTRL are
								reserved and only zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aclkClr{}; 
    }
    namespace Noneasyncapbclksela{    ///<Async APB clock source select A
        using Addr = Register::Address<0x40080020,0xfffffffc,0,unsigned>;
        ///Clock source for asynchronous clock source selector
								A
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC Oscillator
            watchdogOscillator=0x00000001,     ///<Watchdog oscillator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::watchdogOscillator> watchdogOscillator{};
        }
    }
    namespace Noneasyncapbclkselb{    ///<Async APB clock source select B
        using Addr = Register::Address<0x40080024,0xfffffffc,0,unsigned>;
        ///Clock source for asynchronous clock source selector
								B.
        enum class SelVal {
            mainClock=0x00000000,     ///<Main clock
            clkin=0x00000001,     ///<CLKIN
            systemPllOutput=0x00000002,     ///<System PLL output.
            asyncapbclksela=0x00000003,     ///<ASYNCAPBCLKSELA. Clock selected by the
										ASYNCAPBCLKSELA register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::mainClock> mainClock{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::clkin> clkin{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::systemPllOutput> systemPllOutput{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::asyncapbclksela> asyncapbclksela{};
        }
    }
    namespace Noneasyncclkdiv{    ///<Async APB clock divider
        using Addr = Register::Address<0x40080028,0xffffff00,0,unsigned>;
        ///Asynchronous APB clock divider value. 0: Clock disabled. 1:
								Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonefrgctrl{    ///<USART fractional rate generator control
        using Addr = Register::Address<0x40080030,0xffff0000,0,unsigned>;
        ///Denominator of the fractional divider. DIV is equal to the
								programmed value +1. Always set to 0xFF to use with the fractional
								baud rate generator.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Numerator of the fractional divider. MULT is equal to the
								programmed value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> mult{}; 
    }
    namespace Nonebodctrl{    ///<Brown-Out Detect control
        using Addr = Register::Address<0x40080044,0xffffffe0,0,unsigned>;
        ///BOD reset level
        enum class BodrstlevVal {
            level01=0x00000000,     ///<Level 0: 1.5 V
            level11=0x00000001,     ///<Level 1: 1.85 V
            level22=0x00000002,     ///<Level 2: 2.0 V
            level32=0x00000003,     ///<Level 3: 2.3 V
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,BodrstlevVal> bodrstlev{}; 
        namespace BodrstlevValC{
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level01> level01{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level11> level11{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level22> level22{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level32> level32{};
        }
        ///BOD interrupt level
        enum class BodintvalVal {
            level02=0x00000000,     ///<Level 0: 2.05 V
            level12=0x00000001,     ///<Level 1: 2.45 V
            level22=0x00000002,     ///<Level 2: 2.75 V
            level33=0x00000003,     ///<Level 3: 3.05 V
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,BodintvalVal> bodintval{}; 
        namespace BodintvalValC{
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level02> level02{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level12> level12{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level22> level22{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level33> level33{};
        }
        ///BOD reset enable
        enum class BodrstenaVal {
            disableResetFuncti=0x00000000,     ///<Disable reset function.
            enableResetFunctio=0x00000001,     ///<Enable reset function.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BodrstenaVal> bodrstena{}; 
        namespace BodrstenaValC{
            constexpr Register::FieldValue<decltype(bodrstena)::Type,BodrstenaVal::disableResetFuncti> disableResetFuncti{};
            constexpr Register::FieldValue<decltype(bodrstena)::Type,BodrstenaVal::enableResetFunctio> enableResetFunctio{};
        }
    }
}
