#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Switch matrix (SWM)
    namespace Nonepinassign0{    ///<Pin assign register 0. Assign movable functions U0_TXD, U0_RXD, U0_RTS, U0_CTS
        using Addr = Register::Address<0x4000c000,0x00000000,0,unsigned>;
        ///U0_TXD function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> u0TxdO{}; 
        ///U0_RXD function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> u0RxdI{}; 
        ///U0_RTS function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> u0RtsO{}; 
        ///U0_CTS function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> u0CtsI{}; 
    }
    namespace Nonepinassign1{    ///<Pin assign register 1. Assign movable functions U0_SCLC, U1_TXD, U1_RXD
        using Addr = Register::Address<0x4000c004,0x00000000,0,unsigned>;
        ///U0_SCLK function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> u0SclkIo{}; 
        ///U1_TXD function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> u1TxdO{}; 
        ///U1_RXD function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> u1RxdI{}; 
        ///U1_RTS function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> u1RtsO{}; 
    }
    namespace Nonepinassign2{    ///<Pin assign register 2. Assign movable functions U2_TXD, U2_RXD
        using Addr = Register::Address<0x4000c008,0x00000000,0,unsigned>;
        ///U1_CTS function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> u1CtsI{}; 
        ///U1_SCLK function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> u1SclkIo{}; 
        ///U2_TXD function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> u2TxdO{}; 
        ///U2_RXD function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> u2RxdI{}; 
    }
    namespace Nonepinassign3{    ///<Pin assignregister 3. Assign movable function SPI0_SCK
        using Addr = Register::Address<0x4000c00c,0x00000000,0,unsigned>;
        ///U2_RTS function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> u2RtsO{}; 
        ///U2_CTS function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> u2CtsI{}; 
        ///U2_SCLK function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> u2SclkIo{}; 
        ///SPI0_SCK function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> spi0SckIo{}; 
    }
    namespace Nonepinassign4{    ///<Pin assign register 4. Assign movable functions SPI0_MOSI, SPI0_MISO, SPI0_SSEL, SPI1_SCK
        using Addr = Register::Address<0x4000c010,0x00000000,0,unsigned>;
        ///SPI0_MOSI function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> spi0MosiIo{}; 
        ///SPI0_MISIO function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> spi0MisoIo{}; 
        ///SPI0_SSEL function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> spi0SselIo{}; 
        ///SPI1_SCK function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> spi1SckIo{}; 
    }
    namespace Nonepinassign5{    ///<Pin assign register 5. Assign movable functions SPI1_MOSI, SPI1_MISO, SPI1_SSEL, CTIN_0
        using Addr = Register::Address<0x4000c014,0x00000000,0,unsigned>;
        ///SPI1_MOSI function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> spi1MosiIo{}; 
        ///SPI1_MISIO function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> spi1MisoIo{}; 
        ///SPI1_SSEL function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> spi1SselIo{}; 
        ///CTIN_0 function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ctin0I{}; 
    }
    namespace Nonepinassign6{    ///<Pin assign register 6. Assign movable functions CTIN_1, CTIN_2, CTIN_3, CTOUT_0
        using Addr = Register::Address<0x4000c018,0x00000000,0,unsigned>;
        ///CTIN_1 function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ctin1I{}; 
        ///CTIN_2function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ctin2I{}; 
        ///CTIN_3 function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ctin3I{}; 
        ///CTOUT_0 function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ctout0O{}; 
    }
    namespace Nonepinassign7{    ///<Pin assign egister 7. Assign movable functions CTOUT_1, CTOUT_2, CTOUT_3, I2C_SDA
        using Addr = Register::Address<0x4000c01c,0x00000000,0,unsigned>;
        ///CTOUT_1 function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ctout1O{}; 
        ///CTOUT_2 function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ctout2O{}; 
        ///CTOUT_3 function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ctout3O{}; 
        ///I2C_SDA function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> i2cSdaIo{}; 
    }
    namespace Nonepinassign8{    ///<Pin assign register 8. Assign movable functions I2C_SCL, ACMP_O, CLKOUT, GPIO_INT_BMAT
        using Addr = Register::Address<0x4000c020,0x00000000,0,unsigned>;
        ///I2C_SCL function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> i2cSclIo{}; 
        ///ACMP_O_O function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> acmpOO{}; 
        ///CLKOUT function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clkoutO{}; 
        ///GPIO_INT_BMAT function assignment. The value is the pin number to be assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_17 (= 0x11).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> gpioIntBmatO{}; 
    }
    namespace Nonepinenable0{    ///<Pin enable register 0. Enables fixed-pin functions ACMP_I0, ACMP_I1, SWCLK, SWDIO, XTALIN, XTALOUT, RESET, CLKIN, VDDCMP
        using Addr = Register::Address<0x4000c1c0,0xfffffe00,0,unsigned>;
        ///Enables fixed-pin function. Writing a 1 deselects the function and any movable function can be assigned to this pin. By default the fixed--pin function is deselected and GPIO is assigned to this pin.
        enum class acmpI1EnVal {
            enableAcmpI1This=0x00000000,     ///<Enable ACMP_I1. This function is enabled on pin PIO0_0.
            disableAcmpI1Gpi=0x00000001,     ///<Disable ACMP_I1. GPIO function PIO0_0 (default) or any other movable function can be assigned to pin PIO0_0.
        };
        namespace acmpI1EnValC{
            constexpr MPL::Value<acmpI1EnVal,acmpI1EnVal::enableAcmpI1This> enableAcmpI1This{};
            constexpr MPL::Value<acmpI1EnVal,acmpI1EnVal::disableAcmpI1Gpi> disableAcmpI1Gpi{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,acmpI1EnVal> acmpI1En{}; 
        ///Enables fixed-pin function. Writing a 1 deselects the function and any movable function can be assigned to this pin. By default the fixed-pin function is deselected and GPIO is assigned to this pin. Functions CLKIN and ACMP_I2 are connected to the same pin PIO0_1. To use ACMP_I2, disable the CLKIN function in bit 7 of this register and enable ACMP_I2.
        enum class acmpI2EnVal {
            enableAcmpI2This=0x00000000,     ///<Enable ACMP_I2. This function is enabled on pin PIO0_1.
            disableAcmpI2Gpi=0x00000001,     ///<Disable ACMP_I2. GPIO function PIO0_1 (default) or any other movable function can be assigned to pin PIO0_1.
        };
        namespace acmpI2EnValC{
            constexpr MPL::Value<acmpI2EnVal,acmpI2EnVal::enableAcmpI2This> enableAcmpI2This{};
            constexpr MPL::Value<acmpI2EnVal,acmpI2EnVal::disableAcmpI2Gpi> disableAcmpI2Gpi{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,acmpI2EnVal> acmpI2En{}; 
        ///Enables fixed-pin function. Writing a 1 deselects the function and any movable function can be assigned to this pin. This function is selected by default.
        enum class swclkEnVal {
            enableSwclkThisF=0x00000000,     ///<Enable SWCLK. This function is enabled on pin PIO0_3.
            disableSwclkGpio=0x00000001,     ///<Disable SWCLK. GPIO function PIO0_3 is selected on this pin. Any other movable function can be assigned to pin PIO0_3.
        };
        namespace swclkEnValC{
            constexpr MPL::Value<swclkEnVal,swclkEnVal::enableSwclkThisF> enableSwclkThisF{};
            constexpr MPL::Value<swclkEnVal,swclkEnVal::disableSwclkGpio> disableSwclkGpio{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swclkEnVal> swclkEn{}; 
        ///Enables fixed-pin function. Writing a 1 deselects the function and any movable function can be assigned to this pin. This function is selected by default.
        enum class swdioEnVal {
            enableSwdioThisF=0x00000000,     ///<Enable SWDIO. This function is enabled on pin PIO0_2.
            disableSwdioGpio=0x00000001,     ///<Disable SWDIO. GPIO function PIO0_2 is selected on this pin. Any other movable function can be assigned to pin PIO0_2.
        };
        namespace swdioEnValC{
            constexpr MPL::Value<swdioEnVal,swdioEnVal::enableSwdioThisF> enableSwdioThisF{};
            constexpr MPL::Value<swdioEnVal,swdioEnVal::disableSwdioGpio> disableSwdioGpio{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,swdioEnVal> swdioEn{}; 
        ///Enables fixed-pin function. Writing a 1 deselects the function and any movable function can be assigned to this pin. By default the fixed--pin function is deselected and GPIO is assigned to this pin.
        enum class xtalinEnVal {
            enableXtalinThis=0x00000000,     ///<Enable XTALIN. This function is enabled on pin PIO0_8.
            disableXtalinGpio=0x00000001,     ///<Disable XTALIN. GPIO function PIO0_8 (default) or any other movable function can be assigned to pin PIO0_8.
        };
        namespace xtalinEnValC{
            constexpr MPL::Value<xtalinEnVal,xtalinEnVal::enableXtalinThis> enableXtalinThis{};
            constexpr MPL::Value<xtalinEnVal,xtalinEnVal::disableXtalinGpio> disableXtalinGpio{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,xtalinEnVal> xtalinEn{}; 
        ///Enables fixed-pin function. Writing a 1 deselects the function and any movable function can be assigned to this pin. By default the fixed--pin function is deselected and GPIO is assigned to this pin.
        enum class xtaloutEnVal {
            enableXtaloutThis=0x00000000,     ///<Enable XTALOUT. This function is enabled on pin PIO0_9.
            disableXtaloutGpi=0x00000001,     ///<Disable XTALOUT. GPIO function PIO0_9 (default) or any other movable function can be assigned to pin PIO0_9.
        };
        namespace xtaloutEnValC{
            constexpr MPL::Value<xtaloutEnVal,xtaloutEnVal::enableXtaloutThis> enableXtaloutThis{};
            constexpr MPL::Value<xtaloutEnVal,xtaloutEnVal::disableXtaloutGpi> disableXtaloutGpi{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,xtaloutEnVal> xtaloutEn{}; 
        ///Enables fixed-pin function. Writing a 1 deselects the function and any movable function can be assigned to this pin. This function is selected by default.
        enum class resetEnVal {
            enableResetThisF=0x00000000,     ///<Enable RESET. This function is enabled on pin PIO0_5.
            disableResetGpio=0x00000001,     ///<Disable RESET. GPIO function PIO0_5 is selected on this pin. Any other movable function can be assigned to pin PIO0_5.
        };
        namespace resetEnValC{
            constexpr MPL::Value<resetEnVal,resetEnVal::enableResetThisF> enableResetThisF{};
            constexpr MPL::Value<resetEnVal,resetEnVal::disableResetGpio> disableResetGpio{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,resetEnVal> resetEn{}; 
        ///Enables fixed-pin function. Writing a 1 deselects the function and any movable function can be assigned to this pin. By default the fixed-pin function is deselected and GPIO is assigned to this pin. Functions CLKIN and ACMP_I2 are connected to the same pin PIO0_1. To use CLKIN, disable ACMP_I2 in bit 1 of this register and enable CLKIN.
        enum class clkinVal {
            enableClkinThisF=0x00000000,     ///<Enable CLKIN. This function is enabled on pin PIO0_1.
            disableClkinGpio=0x00000001,     ///<Disable CLKIN. GPIO function PIO0_1 (default) or any other movable function can be assigned to pin CLKIN.
        };
        namespace clkinValC{
            constexpr MPL::Value<clkinVal,clkinVal::enableClkinThisF> enableClkinThisF{};
            constexpr MPL::Value<clkinVal,clkinVal::disableClkinGpio> disableClkinGpio{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,clkinVal> clkin{}; 
        ///Enables fixed-pin function. Writing a 1 deselects the function and any movable function can be assigned to this pin. By default the fixed--pin function is deselected and GPIO is assigned to this pin.
        enum class vddcmpVal {
            enableVddcmpThis=0x00000000,     ///<Enable VDDCMP. This function is enabled on pin PIO0_6.
            disableVddcmpGpio=0x00000001,     ///<Disable VDDCMP. GPIO function PIO0_6 (default) or any other movable function can be assigned to pin PIO0_6.
        };
        namespace vddcmpValC{
            constexpr MPL::Value<vddcmpVal,vddcmpVal::enableVddcmpThis> enableVddcmpThis{};
            constexpr MPL::Value<vddcmpVal,vddcmpVal::disableVddcmpGpio> disableVddcmpGpio{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,vddcmpVal> vddcmp{}; 
    }
}
