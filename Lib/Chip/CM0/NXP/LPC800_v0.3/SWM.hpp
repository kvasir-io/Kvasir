#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepinassign0{
        using Addr = Register::Address<0x4000c000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> U0_TXD_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> U0_RXD_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> U0_RTS_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> U0_CTS_I; 
    }
    namespace Nonepinassign1{
        using Addr = Register::Address<0x4000c004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> U0_SCLK_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> U1_TXD_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> U1_RXD_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> U1_RTS_O; 
    }
    namespace Nonepinassign2{
        using Addr = Register::Address<0x4000c008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> U1_CTS_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> U1_SCLK_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> U2_TXD_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> U2_RXD_I; 
    }
    namespace Nonepinassign3{
        using Addr = Register::Address<0x4000c00c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> U2_RTS_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> U2_CTS_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> U2_SCLK_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> SPI0_SCK_IO; 
    }
    namespace Nonepinassign4{
        using Addr = Register::Address<0x4000c010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SPI0_MOSI_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SPI0_MISO_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SPI0_SSEL_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> SPI1_SCK_IO; 
    }
    namespace Nonepinassign5{
        using Addr = Register::Address<0x4000c014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SPI1_MOSI_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SPI1_MISO_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SPI1_SSEL_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> CTIN_0_I; 
    }
    namespace Nonepinassign6{
        using Addr = Register::Address<0x4000c018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CTIN_1_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CTIN_2_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CTIN_3_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> CTOUT_0_O; 
    }
    namespace Nonepinassign7{
        using Addr = Register::Address<0x4000c01c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CTOUT_1_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CTOUT_2_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CTOUT_3_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> I2C_SDA_IO; 
    }
    namespace Nonepinassign8{
        using Addr = Register::Address<0x4000c020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> I2C_SCL_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> ACMP_O_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CLKOUT_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> GPIO_INT_BMAT_O; 
    }
    namespace Nonepinenable0{
        using Addr = Register::Address<0x4000c1c0,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACMP_I1_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ACMP_I2_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWCLK_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SWDIO_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> XTALIN_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> XTALOUT_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RESET_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLKIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VDDCMP; 
    }
}
