#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Product name title=UM10375 Chapter title=LPC13xx GeneralPurpose I/O (GPIO) Modification date=4/20/2011 Major revision=2 Minor revision=1 
    namespace Gpio1Data{    ///<Port n data register for pins PIOn_0 to PIOn_11
        using Addr = Register::Address<0x50013ffc,0x00000000,0x00000000,unsigned>;
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> data0{}; 
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> data1{}; 
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> data2{}; 
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> data3{}; 
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> data4{}; 
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> data5{}; 
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> data6{}; 
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> data7{}; 
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> data8{}; 
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> data9{}; 
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> data10{}; 
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> data11{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gpio1Dir{    ///<Data direction register for port n
        using Addr = Register::Address<0x50018000,0x00000000,0x00000000,unsigned>;
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> io0{}; 
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> io1{}; 
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> io2{}; 
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> io3{}; 
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> io4{}; 
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> io5{}; 
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> io6{}; 
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> io7{}; 
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> io8{}; 
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> io9{}; 
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> io10{}; 
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> io11{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gpio1Is{    ///<Interrupt sense register for port n
        using Addr = Register::Address<0x50018004,0x00000000,0x00000000,unsigned>;
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> isense0{}; 
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> isense1{}; 
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> isense2{}; 
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> isense3{}; 
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> isense4{}; 
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> isense5{}; 
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> isense6{}; 
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> isense7{}; 
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> isense8{}; 
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> isense9{}; 
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> isense10{}; 
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> isense11{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gpio1Ibe{    ///<Interrupt both edges register for port n
        using Addr = Register::Address<0x50018008,0x00000000,0x00000000,unsigned>;
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register GPIOIEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ibe0{}; 
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register GPIOIEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ibe1{}; 
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register GPIOIEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ibe2{}; 
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register GPIOIEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ibe3{}; 
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register GPIOIEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ibe4{}; 
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register GPIOIEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ibe5{}; 
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register GPIOIEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ibe6{}; 
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register GPIOIEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ibe7{}; 
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register GPIOIEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ibe8{}; 
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register GPIOIEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ibe9{}; 
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register GPIOIEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ibe10{}; 
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register GPIOIEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ibe11{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gpio1Iev{    ///<Interrupt event register for port n
        using Addr = Register::Address<0x5001800c,0x00000000,0x00000000,unsigned>;
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register GPIOIS (see Table 151), falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register GPIOIS (see Table 151), rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iev0{}; 
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register GPIOIS (see Table 151), falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register GPIOIS (see Table 151), rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iev1{}; 
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register GPIOIS (see Table 151), falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register GPIOIS (see Table 151), rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iev2{}; 
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register GPIOIS (see Table 151), falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register GPIOIS (see Table 151), rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iev3{}; 
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register GPIOIS (see Table 151), falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register GPIOIS (see Table 151), rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iev4{}; 
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register GPIOIS (see Table 151), falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register GPIOIS (see Table 151), rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> iev5{}; 
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register GPIOIS (see Table 151), falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register GPIOIS (see Table 151), rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iev6{}; 
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register GPIOIS (see Table 151), falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register GPIOIS (see Table 151), rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iev7{}; 
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register GPIOIS (see Table 151), falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register GPIOIS (see Table 151), rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> iev8{}; 
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register GPIOIS (see Table 151), falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register GPIOIS (see Table 151), rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> iev9{}; 
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register GPIOIS (see Table 151), falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register GPIOIS (see Table 151), rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iev10{}; 
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register GPIOIS (see Table 151), falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register GPIOIS (see Table 151), rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> iev11{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gpio1Ie{    ///<Interrupt mask register for port n
        using Addr = Register::Address<0x50018010,0x00000000,0x00000000,unsigned>;
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mask0{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mask1{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mask2{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mask3{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mask4{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mask5{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mask6{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mask7{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mask8{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mask9{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mask10{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mask11{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gpio1Ris{    ///<Raw interrupt status register for port n
        using Addr = Register::Address<0x50018014,0x00000000,0x00000000,unsigned>;
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rawst0{}; 
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rawst1{}; 
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rawst2{}; 
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rawst3{}; 
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rawst4{}; 
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rawst5{}; 
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rawst6{}; 
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rawst7{}; 
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rawst8{}; 
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rawst9{}; 
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rawst10{}; 
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rawst11{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gpio1Mis{    ///<Masked interrupt status register for port n
        using Addr = Register::Address<0x50018018,0x00000000,0x00000000,unsigned>;
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mask0{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mask1{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mask2{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mask3{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mask4{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mask5{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mask6{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mask7{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mask8{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mask9{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mask10{}; 
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mask11{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gpio1Ic{    ///<Interrupt clear register for port n
        using Addr = Register::Address<0x5001801c,0x00000000,0x00000000,unsigned>;
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clr0{}; 
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clr1{}; 
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clr2{}; 
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clr3{}; 
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clr4{}; 
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clr5{}; 
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clr6{}; 
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clr7{}; 
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clr8{}; 
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clr9{}; 
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clr10{}; 
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clr11{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
