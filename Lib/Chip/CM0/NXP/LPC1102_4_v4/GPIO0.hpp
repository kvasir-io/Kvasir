#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose I/O (GPIO) 
    namespace Nonedata{    ///<Port n data address masking register locations for pins PIOn_0 to PIOn_11 (see  Section 9.4.1).
        using Addr = Register::Address<0x50003ff8,0xfffff000,0,unsigned>;
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> data0{}; 
        namespace Data0ValC{
        }
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> data1{}; 
        namespace Data1ValC{
        }
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> data2{}; 
        namespace Data2ValC{
        }
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> data3{}; 
        namespace Data3ValC{
        }
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> data4{}; 
        namespace Data4ValC{
        }
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> data5{}; 
        namespace Data5ValC{
        }
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> data6{}; 
        namespace Data6ValC{
        }
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> data7{}; 
        namespace Data7ValC{
        }
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> data8{}; 
        namespace Data8ValC{
        }
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> data9{}; 
        namespace Data9ValC{
        }
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> data10{}; 
        namespace Data10ValC{
        }
        ///Logic levels for pins PIOn_0 to PIOn_11. HIGH = 1, LOW = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> data11{}; 
        namespace Data11ValC{
        }
    }
    namespace Nonedir{    ///<Data direction register for port n
        using Addr = Register::Address<0x50008000,0xfffff000,0,unsigned>;
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> io0{}; 
        namespace Io0ValC{
        }
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> io1{}; 
        namespace Io1ValC{
        }
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> io2{}; 
        namespace Io2ValC{
        }
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> io3{}; 
        namespace Io3ValC{
        }
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> io4{}; 
        namespace Io4ValC{
        }
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> io5{}; 
        namespace Io5ValC{
        }
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> io6{}; 
        namespace Io6ValC{
        }
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> io7{}; 
        namespace Io7ValC{
        }
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> io8{}; 
        namespace Io8ValC{
        }
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> io9{}; 
        namespace Io9ValC{
        }
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> io10{}; 
        namespace Io10ValC{
        }
        ///Selects pin x as input or output (x = 0 to 11). 0 = Pin PIOn_x is configured as input. 1 = Pin PIOn_x is configured as output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> io11{}; 
        namespace Io11ValC{
        }
    }
    namespace Noneis{    ///<Interrupt sense register for port n
        using Addr = Register::Address<0x50008004,0xfffff000,0,unsigned>;
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> isense0{}; 
        namespace Isense0ValC{
        }
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> isense1{}; 
        namespace Isense1ValC{
        }
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> isense2{}; 
        namespace Isense2ValC{
        }
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> isense3{}; 
        namespace Isense3ValC{
        }
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> isense4{}; 
        namespace Isense4ValC{
        }
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> isense5{}; 
        namespace Isense5ValC{
        }
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> isense6{}; 
        namespace Isense6ValC{
        }
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> isense7{}; 
        namespace Isense7ValC{
        }
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> isense8{}; 
        namespace Isense8ValC{
        }
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> isense9{}; 
        namespace Isense9ValC{
        }
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> isense10{}; 
        namespace Isense10ValC{
        }
        ///Selects interrupt on pin x as level or edge sensitive (x = 0 to 11). 0 = Interrupt on pin PIOn_x is configured as edge sensitive. 1 = Interrupt on pin PIOn_x is configured as level sensitive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> isense11{}; 
        namespace Isense11ValC{
        }
    }
    namespace Noneibe{    ///<Interrupt both edges register for port n
        using Addr = Register::Address<0x50008008,0xfffff000,0,unsigned>;
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register IEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ibe0{}; 
        namespace Ibe0ValC{
        }
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register IEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ibe1{}; 
        namespace Ibe1ValC{
        }
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register IEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ibe2{}; 
        namespace Ibe2ValC{
        }
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register IEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ibe3{}; 
        namespace Ibe3ValC{
        }
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register IEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ibe4{}; 
        namespace Ibe4ValC{
        }
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register IEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ibe5{}; 
        namespace Ibe5ValC{
        }
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register IEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ibe6{}; 
        namespace Ibe6ValC{
        }
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register IEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ibe7{}; 
        namespace Ibe7ValC{
        }
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register IEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ibe8{}; 
        namespace Ibe8ValC{
        }
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register IEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ibe9{}; 
        namespace Ibe9ValC{
        }
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register IEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ibe10{}; 
        namespace Ibe10ValC{
        }
        ///Selects interrupt on pin x to be triggered on both edges (x = 0 to 11). 0 = Interrupt on pin PIOn_x is controlled through register IEV. 1 = Both edges on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ibe11{}; 
        namespace Ibe11ValC{
        }
    }
    namespace Noneiev{    ///<Interrupt event register for port n
        using Addr = Register::Address<0x5000800c,0xfffff000,0,unsigned>;
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register IS , falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register IS , rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iev0{}; 
        namespace Iev0ValC{
        }
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register IS , falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register IS , rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iev1{}; 
        namespace Iev1ValC{
        }
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register IS , falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register IS , rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iev2{}; 
        namespace Iev2ValC{
        }
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register IS , falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register IS , rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iev3{}; 
        namespace Iev3ValC{
        }
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register GIS , falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register IS , rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iev4{}; 
        namespace Iev4ValC{
        }
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register IS , falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register IS , rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> iev5{}; 
        namespace Iev5ValC{
        }
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register IS , falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register IS , rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iev6{}; 
        namespace Iev6ValC{
        }
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register IS , falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register IS , rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iev7{}; 
        namespace Iev7ValC{
        }
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register IS , falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register IS , rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> iev8{}; 
        namespace Iev8ValC{
        }
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register IS , falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register IS , rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> iev9{}; 
        namespace Iev9ValC{
        }
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register IS , falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register IS , rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iev10{}; 
        namespace Iev10ValC{
        }
        ///Selects interrupt on pin x to be triggered rising or falling edges (x = 0 to 11). 0 = Depending on setting in register IS , falling edges or LOW level on pin PIOn_x trigger an interrupt. 1 = Depending on setting in register IS MR0 to 3, rising edges or HIGH level on pin PIOn_x trigger an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> iev11{}; 
        namespace Iev11ValC{
        }
    }
    namespace Noneie{    ///<Interrupt mask register for port n
        using Addr = Register::Address<0x50008010,0xfffff000,0,unsigned>;
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mask0{}; 
        namespace Mask0ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mask1{}; 
        namespace Mask1ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mask2{}; 
        namespace Mask2ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mask3{}; 
        namespace Mask3ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mask4{}; 
        namespace Mask4ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mask5{}; 
        namespace Mask5ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mask6{}; 
        namespace Mask6ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mask7{}; 
        namespace Mask7ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mask8{}; 
        namespace Mask8ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mask9{}; 
        namespace Mask9ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mask10{}; 
        namespace Mask10ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = Interrupt on pin PIOn_x is masked. 1 = Interrupt on pin PIOn_x is not masked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mask11{}; 
        namespace Mask11ValC{
        }
    }
    namespace Noneris{    ///<Raw interrupt status register for port n
        using Addr = Register::Address<0x50008014,0xfffff000,0,unsigned>;
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rawst0{}; 
        namespace Rawst0ValC{
        }
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rawst1{}; 
        namespace Rawst1ValC{
        }
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rawst2{}; 
        namespace Rawst2ValC{
        }
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rawst3{}; 
        namespace Rawst3ValC{
        }
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rawst4{}; 
        namespace Rawst4ValC{
        }
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rawst5{}; 
        namespace Rawst5ValC{
        }
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rawst6{}; 
        namespace Rawst6ValC{
        }
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rawst7{}; 
        namespace Rawst7ValC{
        }
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rawst8{}; 
        namespace Rawst8ValC{
        }
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rawst9{}; 
        namespace Rawst9ValC{
        }
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rawst10{}; 
        namespace Rawst10ValC{
        }
        ///Raw interrupt status (x = 0 to 11). 0 = No interrupt on pin PIOn_x. 1 = Interrupt requirements met on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rawst11{}; 
        namespace Rawst11ValC{
        }
    }
    namespace Nonemis{    ///<Masked interrupt status register for port n
        using Addr = Register::Address<0x50008018,0xfffff000,0,unsigned>;
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mask0{}; 
        namespace Mask0ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mask1{}; 
        namespace Mask1ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mask2{}; 
        namespace Mask2ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mask3{}; 
        namespace Mask3ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mask4{}; 
        namespace Mask4ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mask5{}; 
        namespace Mask5ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mask6{}; 
        namespace Mask6ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mask7{}; 
        namespace Mask7ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mask8{}; 
        namespace Mask8ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mask9{}; 
        namespace Mask9ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mask10{}; 
        namespace Mask10ValC{
        }
        ///Selects interrupt on pin x to be masked (x = 0 to 11). 0 = No interrupt or interrupt masked on pin PIOn_x. 1 = Interrupt on PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mask11{}; 
        namespace Mask11ValC{
        }
    }
    namespace Noneic{    ///<Interrupt clear register for port n
        using Addr = Register::Address<0x5000801c,0xfffff000,0,unsigned>;
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clr0{}; 
        namespace Clr0ValC{
        }
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clr1{}; 
        namespace Clr1ValC{
        }
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clr2{}; 
        namespace Clr2ValC{
        }
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clr3{}; 
        namespace Clr3ValC{
        }
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clr4{}; 
        namespace Clr4ValC{
        }
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clr5{}; 
        namespace Clr5ValC{
        }
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clr6{}; 
        namespace Clr6ValC{
        }
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clr7{}; 
        namespace Clr7ValC{
        }
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clr8{}; 
        namespace Clr8ValC{
        }
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clr9{}; 
        namespace Clr9ValC{
        }
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clr10{}; 
        namespace Clr10ValC{
        }
        ///Selects interrupt on pin x to be cleared (x = 0 to 11). Clears the interrupt edge detection logic. This register is write-only. The synchronizer between the GPIO and the NVIC blocks causes a delay of 2 clocks. It is recommended to add two NOPs after the clear of the interrupt edge detection logic before the exit of the interrupt service routine. 0 = No effect. 1 = Clears edge detection logic for pin PIOn_x.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clr11{}; 
        namespace Clr11ValC{
        }
    }
}
