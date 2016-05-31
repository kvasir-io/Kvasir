#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Clock
    namespace ClkClkSleepcr{    ///<Sleep timer control register
        using Addr = Register::Address<0x40000008,0xfffffffc,0x00000000,unsigned>;
        ///Enables 32kHz external              XTAL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lseen{}; 
        ///Enables 10kHz internal RC during              deep
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lsi10ken{}; 
    }
    namespace ClkClkLsi10kcr{    ///<LSI Clock (10KHz) control          register
        using Addr = Register::Address<0x4000000c,0xfffffff0,0x00000000,unsigned>;
        ///Tune value for clkrc
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tune{}; 
    }
    namespace ClkClkLsi1kcr{    ///<LSI Clock (1KHz) control          register
        using Addr = Register::Address<0x40000010,0xfc000000,0x00000000,unsigned>;
        ///Divider value fractional              portion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> clkfrac{}; 
        ///Divider value integer              portion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,11),Register::ReadWriteAccess,unsigned> calint{}; 
    }
    namespace ClkClkHsecr1{    ///<HSE Clock (24MHz) control register          1
        using Addr = Register::Address<0x40004004,0xfffffff0,0x00000000,unsigned>;
        ///Bias trim setting for 24MHz              oscillator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> biastrim{}; 
    }
    namespace ClkClkHsicr{    ///<HSI Clock (12MHz) trim          register
        using Addr = Register::Address<0x40004008,0xffffffe0,0x00000000,unsigned>;
        ///Frequency trim setting for HF RC              oscillator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> tune{}; 
    }
    namespace ClkClkPeriodcr{    ///<Clock period control register
        using Addr = Register::Address<0x40004010,0xfffffffc,0x00000000,unsigned>;
        ///Sets clock to be measured by              CLK_PERIOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode{}; 
    }
    namespace ClkClkPeriodsr{    ///<Clock period status register
        using Addr = Register::Address<0x40004014,0xffff0000,0x00000000,unsigned>;
        ///Clock period measurement
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> period{}; 
    }
    namespace ClkClkDithercr{    ///<Clock dither control register
        using Addr = Register::Address<0x40004018,0xfffffffe,0x00000000,unsigned>;
        ///Dither disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dis{}; 
    }
    namespace ClkClkHsecr2{    ///<HSE Clock (24MHz) control register          2
        using Addr = Register::Address<0x4000401c,0xfffffffc,0x00000000,unsigned>;
        ///OSCHF/XTAL is selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sw1{}; 
        ///MHz crystal oscillator is main              clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace ClkClkCpucr{    ///<Clock source select register
        using Addr = Register::Address<0x40004020,0xfffffffe,0x00000000,unsigned>;
        ///12MHz/24MHz is selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sw2{}; 
    }
}
