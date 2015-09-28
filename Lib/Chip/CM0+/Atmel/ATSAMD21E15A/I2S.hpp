#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace I2S_clkctrl0{
        using Addr = Register::Address<0x42005004,0x0002e600>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SLOTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> NBSLOTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> FSWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BITDELAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FSINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SCKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MCKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MCKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,19)> MCKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> MCKOUTDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FSOUTINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SCKOUTINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MCKOUTINV; 
    }
    namespace I2S_clkctrl1{
        using Addr = Register::Address<0x42005008,0x0002e600>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SLOTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> NBSLOTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> FSWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BITDELAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FSINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SCKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MCKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MCKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,19)> MCKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> MCKOUTDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FSOUTINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SCKOUTINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MCKOUTINV; 
    }
    namespace I2S_ctrla{
        using Addr = Register::Address<0x42005000,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CKEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CKEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SEREN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SEREN1; 
    }
    namespace I2S_data0{
        using Addr = Register::Address<0x42005030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace I2S_data1{
        using Addr = Register::Address<0x42005034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace I2S_intenclr{
        using Addr = Register::Address<0x4200500c,0xffffcccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXOR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXOR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXRDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXRDY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TXUR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TXUR1; 
    }
    namespace I2S_intenset{
        using Addr = Register::Address<0x42005010,0xffffcccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXOR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXOR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXRDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXRDY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TXUR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TXUR1; 
    }
    namespace I2S_intflag{
        using Addr = Register::Address<0x42005014,0xffffcccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXRDY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXOR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXOR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXRDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXRDY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TXUR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TXUR1; 
    }
    namespace I2S_serctrl0{
        using Addr = Register::Address<0x42005020,0xf8000840>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SERMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> TXDEFAULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXSAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SLOTADJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DATASIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WORDADJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> EXTEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BITREV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SLOTDIS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SLOTDIS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SLOTDIS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SLOTDIS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SLOTDIS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SLOTDIS5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SLOTDIS6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SLOTDIS7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MONO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> RXLOOP; 
    }
    namespace I2S_serctrl1{
        using Addr = Register::Address<0x42005024,0xf8000840>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SERMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> TXDEFAULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXSAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SLOTADJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DATASIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WORDADJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> EXTEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BITREV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SLOTDIS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SLOTDIS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SLOTDIS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SLOTDIS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SLOTDIS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SLOTDIS5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SLOTDIS6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SLOTDIS7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MONO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> RXLOOP; 
    }
    namespace I2S_syncbusy{
        using Addr = Register::Address<0x42005018,0xfffffcc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CKEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CKEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SEREN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SEREN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DATA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DATA1; 
    }
}
