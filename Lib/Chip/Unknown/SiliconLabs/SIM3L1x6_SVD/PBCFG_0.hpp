#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol0{    ///<Global Port Control 0
        using Addr = Register::Address<0x4002a000,0x60ff0000,0,unsigned>;
        ///External Interrupt 0 Pin Selection. 
        enum class Int0selVal {
            int00=0x00000000,     ///<Select INT0.0
            int01=0x00000001,     ///<Select INT0.1
            int02=0x00000002,     ///<Select INT0.2
            int03=0x00000003,     ///<Select INT0.3
            int04=0x00000004,     ///<Select INT0.4
            int05=0x00000005,     ///<Select INT0.5
            int06=0x00000006,     ///<Select INT0.6
            int07=0x00000007,     ///<Select INT0.7
            int08=0x00000008,     ///<Select INT0.8
            int09=0x00000009,     ///<Select INT0.9
            int010=0x0000000a,     ///<Select INT0.10
            int011=0x0000000b,     ///<Select INT0.11
            int012=0x0000000c,     ///<Select INT0.12
            int013=0x0000000d,     ///<Select INT0.13
            int014=0x0000000e,     ///<Select INT0.14
            int015=0x0000000f,     ///<Select INT0.15
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,Int0selVal> int0sel{}; 
        namespace Int0selValC{
            constexpr Register::FieldValue<decltype(int0sel)::Type,Int0selVal::int00> int00{};
            constexpr Register::FieldValue<decltype(int0sel)::Type,Int0selVal::int01> int01{};
            constexpr Register::FieldValue<decltype(int0sel)::Type,Int0selVal::int02> int02{};
            constexpr Register::FieldValue<decltype(int0sel)::Type,Int0selVal::int03> int03{};
            constexpr Register::FieldValue<decltype(int0sel)::Type,Int0selVal::int04> int04{};
            constexpr Register::FieldValue<decltype(int0sel)::Type,Int0selVal::int05> int05{};
            constexpr Register::FieldValue<decltype(int0sel)::Type,Int0selVal::int06> int06{};
            constexpr Register::FieldValue<decltype(int0sel)::Type,Int0selVal::int07> int07{};
            constexpr Register::FieldValue<decltype(int0sel)::Type,Int0selVal::int08> int08{};
            constexpr Register::FieldValue<decltype(int0sel)::Type,Int0selVal::int09> int09{};
            constexpr Register::FieldValue<decltype(int0sel)::Type,Int0selVal::int010> int010{};
            constexpr Register::FieldValue<decltype(int0sel)::Type,Int0selVal::int011> int011{};
            constexpr Register::FieldValue<decltype(int0sel)::Type,Int0selVal::int012> int012{};
            constexpr Register::FieldValue<decltype(int0sel)::Type,Int0selVal::int013> int013{};
            constexpr Register::FieldValue<decltype(int0sel)::Type,Int0selVal::int014> int014{};
            constexpr Register::FieldValue<decltype(int0sel)::Type,Int0selVal::int015> int015{};
        }
        }
        ///External Interrupt 0 Polarity. 
        enum class Int0polVal {
            low=0x00000000,     ///<A low value or falling edge on the selected pin will cause interrupt.
            high=0x00000001,     ///<A high value or rising edge on the selected pin will cause interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Int0polVal> int0pol{}; 
        namespace Int0polValC{
            constexpr Register::FieldValue<decltype(int0pol)::Type,Int0polVal::low> low{};
            constexpr Register::FieldValue<decltype(int0pol)::Type,Int0polVal::high> high{};
        }
        }
        ///External Interrupt 0 Mode. 
        enum class Int0mdVal {
            level=0x00000000,     ///<Interrupt on logic level at pin, as selected by the INT0POL field.
            edge=0x00000001,     ///<Interrupt on either rising or falling edge, as selected by the INT0POL field.
            dualEdge=0x00000002,     ///<Interrupt on both rising and falling edges (ignores INT0POL).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,Int0mdVal> int0md{}; 
        namespace Int0mdValC{
            constexpr Register::FieldValue<decltype(int0md)::Type,Int0mdVal::level> level{};
            constexpr Register::FieldValue<decltype(int0md)::Type,Int0mdVal::edge> edge{};
            constexpr Register::FieldValue<decltype(int0md)::Type,Int0mdVal::dualEdge> dualEdge{};
        }
        }
        ///External Interrupt 0 Enable. 
        enum class Int0enVal {
            disabled=0x00000000,     ///<Disable external interrupt 0.
            enabled=0x00000001,     ///<Enable external interrupt 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Int0enVal> int0en{}; 
        namespace Int0enValC{
            constexpr Register::FieldValue<decltype(int0en)::Type,Int0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(int0en)::Type,Int0enVal::enabled> enabled{};
        }
        }
        ///External Interrupt 1 Pin Selection. 
        enum class Int1selVal {
            int10=0x00000000,     ///<Select INT1.0
            int11=0x00000001,     ///<Select INT1.1
            int12=0x00000002,     ///<Select INT1.2
            int13=0x00000003,     ///<Select INT1.3
            int14=0x00000004,     ///<Select INT1.4
            int15=0x00000005,     ///<Select INT1.5
            int16=0x00000006,     ///<Select INT1.6
            int17=0x00000007,     ///<Select INT1.7
            int18=0x00000008,     ///<Select INT1.8
            int19=0x00000009,     ///<Select INT1.9
            int110=0x0000000a,     ///<Select INT1.10
            int111=0x0000000b,     ///<Select INT1.11
            int112=0x0000000c,     ///<Select INT1.12
            int113=0x0000000d,     ///<Select INT1.13
            int114=0x0000000e,     ///<Select INT1.14
            int115=0x0000000f,     ///<Select INT1.15
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,Int1selVal> int1sel{}; 
        namespace Int1selValC{
            constexpr Register::FieldValue<decltype(int1sel)::Type,Int1selVal::int10> int10{};
            constexpr Register::FieldValue<decltype(int1sel)::Type,Int1selVal::int11> int11{};
            constexpr Register::FieldValue<decltype(int1sel)::Type,Int1selVal::int12> int12{};
            constexpr Register::FieldValue<decltype(int1sel)::Type,Int1selVal::int13> int13{};
            constexpr Register::FieldValue<decltype(int1sel)::Type,Int1selVal::int14> int14{};
            constexpr Register::FieldValue<decltype(int1sel)::Type,Int1selVal::int15> int15{};
            constexpr Register::FieldValue<decltype(int1sel)::Type,Int1selVal::int16> int16{};
            constexpr Register::FieldValue<decltype(int1sel)::Type,Int1selVal::int17> int17{};
            constexpr Register::FieldValue<decltype(int1sel)::Type,Int1selVal::int18> int18{};
            constexpr Register::FieldValue<decltype(int1sel)::Type,Int1selVal::int19> int19{};
            constexpr Register::FieldValue<decltype(int1sel)::Type,Int1selVal::int110> int110{};
            constexpr Register::FieldValue<decltype(int1sel)::Type,Int1selVal::int111> int111{};
            constexpr Register::FieldValue<decltype(int1sel)::Type,Int1selVal::int112> int112{};
            constexpr Register::FieldValue<decltype(int1sel)::Type,Int1selVal::int113> int113{};
            constexpr Register::FieldValue<decltype(int1sel)::Type,Int1selVal::int114> int114{};
            constexpr Register::FieldValue<decltype(int1sel)::Type,Int1selVal::int115> int115{};
        }
        }
        ///External Interrupt 1 Polarity. 
        enum class Int1polVal {
            low=0x00000000,     ///<A low value or falling edge on the selected pin will cause interrupt.
            high=0x00000001,     ///<A high value or rising edge on the selected pin will cause interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Int1polVal> int1pol{}; 
        namespace Int1polValC{
            constexpr Register::FieldValue<decltype(int1pol)::Type,Int1polVal::low> low{};
            constexpr Register::FieldValue<decltype(int1pol)::Type,Int1polVal::high> high{};
        }
        }
        ///External Interrupt 1 Mode. 
        enum class Int1mdVal {
            level=0x00000000,     ///<Interrupt on logic level at pin, as selected by the INT1POL field.
            edge=0x00000001,     ///<Interrupt on either rising or falling edge, as selected by the INT1POL field.
            dualEdge=0x00000002,     ///<Interrupt on both rising and falling edges (ignores INT1POL).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,Int1mdVal> int1md{}; 
        namespace Int1mdValC{
            constexpr Register::FieldValue<decltype(int1md)::Type,Int1mdVal::level> level{};
            constexpr Register::FieldValue<decltype(int1md)::Type,Int1mdVal::edge> edge{};
            constexpr Register::FieldValue<decltype(int1md)::Type,Int1mdVal::dualEdge> dualEdge{};
        }
        }
        ///External Interrupt 1 Enable. 
        enum class Int1enVal {
            disabled=0x00000000,     ///<Disable external interrupt 1.
            enabled=0x00000001,     ///<Enable external interrupt 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Int1enVal> int1en{}; 
        namespace Int1enValC{
            constexpr Register::FieldValue<decltype(int1en)::Type,Int1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(int1en)::Type,Int1enVal::enabled> enabled{};
        }
        }
        ///Pulse Generator Timer. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> pgtimer{}; 
        ///Pulse Generator Timer Done Flag. 
        enum class PgdonefVal {
            notSet=0x00000000,     ///<Firmware has written to the PBPGPHASE register, but the Pulse Generator timer has not expired.
            set=0x00000001,     ///<The Pulse Generator cycle finished since the last time PBPGPHASE was written.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,PgdonefVal> pgdonef{}; 
        namespace PgdonefValC{
            constexpr Register::FieldValue<decltype(pgdonef)::Type,PgdonefVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(pgdonef)::Type,PgdonefVal::set> set{};
        }
        }
    }
    namespace Nonecontrol1{    ///<Global Port Control 1
        using Addr = Register::Address<0x4002a010,0x7fffecf8,0,unsigned>;
        ///JTAG Enable. 
        enum class JtagenVal {
            disabled=0x00000000,     ///<JTAG functionality is not pinned out.
            enabled=0x00000001,     ///<JTAG functionality is pinned out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,JtagenVal> jtagen{}; 
        namespace JtagenValC{
            constexpr Register::FieldValue<decltype(jtagen)::Type,JtagenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(jtagen)::Type,JtagenVal::enabled> enabled{};
        }
        }
        ///ETM Enable. 
        enum class EtmenVal {
            disabled=0x00000000,     ///<ETM not pinned out.
            enabled=0x00000001,     ///<ETM is enabled and pinned out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EtmenVal> etmen{}; 
        namespace EtmenValC{
            constexpr Register::FieldValue<decltype(etmen)::Type,EtmenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(etmen)::Type,EtmenVal::enabled> enabled{};
        }
        }
        ///SWV Enable. 
        enum class SwvenVal {
            disabled=0x00000000,     ///<SWV is not pinned out.
            enabled=0x00000001,     ///<SWV is enabled and pinned out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwvenVal> swven{}; 
        namespace SwvenValC{
            constexpr Register::FieldValue<decltype(swven)::Type,SwvenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(swven)::Type,SwvenVal::enabled> enabled{};
        }
        }
        ///SPI1 Fixed Port Selection. 
        enum class Spi1selVal {
            disabled=0x00000000,     ///<Disconnect SPI1 from the dedicated pins.
            enabled=0x00000001,     ///<Connect SPI1 to the dedicated pins.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Spi1selVal> spi1sel{}; 
        namespace Spi1selValC{
            constexpr Register::FieldValue<decltype(spi1sel)::Type,Spi1selVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spi1sel)::Type,Spi1selVal::enabled> enabled{};
        }
        }
        ///Port Match Interrupt Enable. 
        enum class PmatchenVal {
            disabled=0x00000000,     ///<Disable the port match logic. The PBnMAT registers are not read/write accessible on the APB bus.
            enabled=0x00000001,     ///<Enable the port match logic to generate a port match interrupt. The PBnMAT registers are read/write accessible on the APB bus.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,PmatchenVal> pmatchen{}; 
        namespace PmatchenValC{
            constexpr Register::FieldValue<decltype(pmatchen)::Type,PmatchenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pmatchen)::Type,PmatchenVal::enabled> enabled{};
        }
        }
        ///Low Power Timer Output Pin Select. 
        enum class LptoselVal {
            lpt0out0=0x00000000,     ///<Route the Low Power Timer output to LPT0OUT0. 
            lpt0out1=0x00000001,     ///<Route the Low Power Timer output to LPT0OUT1. 
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,LptoselVal> lptosel{}; 
        namespace LptoselValC{
            constexpr Register::FieldValue<decltype(lptosel)::Type,LptoselVal::lpt0out0> lpt0out0{};
            constexpr Register::FieldValue<decltype(lptosel)::Type,LptoselVal::lpt0out1> lpt0out1{};
        }
        }
        ///Port Bank Configuration Lock. 
        enum class LockVal {
            unlocked=0x00000000,     ///<Port Bank Configuration and Control registers are unlocked.
            locked=0x00000001,     ///<The following registers are locked from write access: CONTROL1, XBAR0, and all PBSKIP registers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,LockVal> lock{}; 
        namespace LockValC{
            constexpr Register::FieldValue<decltype(lock)::Type,LockVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(lock)::Type,LockVal::locked> locked{};
        }
        }
    }
    namespace Nonexbar0{    ///<Crossbar 0 Control
        using Addr = Register::Address<0x4002a020,0x7f800000,0,unsigned>;
        ///USART0 Enable. 
        enum class Usart0enVal {
            disabled=0x00000000,     ///<Disable USART0 RX and TX on Crossbar 0.
            enabled=0x00000001,     ///<Enable USART0 RX and TX on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Usart0enVal> usart0en{}; 
        namespace Usart0enValC{
            constexpr Register::FieldValue<decltype(usart0en)::Type,Usart0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usart0en)::Type,Usart0enVal::enabled> enabled{};
        }
        }
        ///USART0 Flow Control Enable. 
        enum class Usart0fcenVal {
            disabled=0x00000000,     ///<Disable USART0 flow control on Crossbar 0.
            enabled=0x00000001,     ///<Enable USART0 flow control on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Usart0fcenVal> usart0fcen{}; 
        namespace Usart0fcenValC{
            constexpr Register::FieldValue<decltype(usart0fcen)::Type,Usart0fcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usart0fcen)::Type,Usart0fcenVal::enabled> enabled{};
        }
        }
        ///USART0 Clock Signal Enable. 
        enum class Usart0cenVal {
            disabled=0x00000000,     ///<Disable USART0 clock on Crossbar 0.
            enabled=0x00000001,     ///<Enable USART0 clock on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Usart0cenVal> usart0cen{}; 
        namespace Usart0cenValC{
            constexpr Register::FieldValue<decltype(usart0cen)::Type,Usart0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usart0cen)::Type,Usart0cenVal::enabled> enabled{};
        }
        }
        ///DMA Trigger 0 Enable. 
        enum class Dma0t0enVal {
            disabled=0x00000000,     ///<Disable the DMA trigger 0 on Crossbar 0.
            enabled=0x00000001,     ///<Enable the DMA trigger 0 on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Dma0t0enVal> dma0t0en{}; 
        namespace Dma0t0enValC{
            constexpr Register::FieldValue<decltype(dma0t0en)::Type,Dma0t0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dma0t0en)::Type,Dma0t0enVal::enabled> enabled{};
        }
        }
        ///DMA Trigger 1 Enabled. 
        enum class Dma0t1enVal {
            disabled=0x00000000,     ///<Disable the DMA trigger 1 on Crossbar 0.
            enabled=0x00000001,     ///<Enable the DMA trigger 1 on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Dma0t1enVal> dma0t1en{}; 
        namespace Dma0t1enValC{
            constexpr Register::FieldValue<decltype(dma0t1en)::Type,Dma0t1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dma0t1en)::Type,Dma0t1enVal::enabled> enabled{};
        }
        }
        ///IDAC0 Trigger Enable. 
        enum class Idac0tenVal {
            disabled=0x00000000,     ///<Disable the IDAC0 trigger on Crossbar 0.
            enabled=0x00000001,     ///<Enable the IDAC0 trigger on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Idac0tenVal> idac0ten{}; 
        namespace Idac0tenValC{
            constexpr Register::FieldValue<decltype(idac0ten)::Type,Idac0tenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(idac0ten)::Type,Idac0tenVal::enabled> enabled{};
        }
        }
        ///SPI0 Enable. 
        enum class Spi0enVal {
            disabled=0x00000000,     ///<Disable SPI0 SCK, MISO, and MOSI on Crossbar 0.
            enabled=0x00000001,     ///<Enable SPI0 SCK, MISO, and MOSI on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Spi0enVal> spi0en{}; 
        namespace Spi0enValC{
            constexpr Register::FieldValue<decltype(spi0en)::Type,Spi0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spi0en)::Type,Spi0enVal::enabled> enabled{};
        }
        }
        ///SPI0 NSS Pin Enable. 
        enum class Spi0nssenVal {
            disabled=0x00000000,     ///<Disable SPI0 NSS on Crossbar 0.
            enabled=0x00000001,     ///<Enable SPI0 NSS on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Spi0nssenVal> spi0nssen{}; 
        namespace Spi0nssenValC{
            constexpr Register::FieldValue<decltype(spi0nssen)::Type,Spi0nssenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spi0nssen)::Type,Spi0nssenVal::enabled> enabled{};
        }
        }
        ///EPCA0 Channel Enable. 
        enum class Epca0enVal {
            none=0x00000000,     ///<Disable all EPCA0 channels on Crossbar 0.
            cex00=0x00000001,     ///<Enable EPCA0 CEX0 on Crossbar 0.
            cex01=0x00000002,     ///<Enable EPCA0 CEX0 and CEX1 on Crossbar 0.
            cex02=0x00000003,     ///<Enable EPCA0 CEX0, CEX1, and CEX2 on Crossbar 0.
            cex03=0x00000004,     ///<Enable EPCA0 CEX0, CEX1, CEX2, and CEX3 on Crossbar 0.
            cex04=0x00000005,     ///<Enable EPCA0 CEX0, CEX1, CEX2, CEX3, and CEX4 on Crossbar 0.
            cex05=0x00000006,     ///<Enable EPCA0 CEX0, CEX1, CEX2, CEX3, CEX4, and CEX5 on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,Epca0enVal> epca0en{}; 
        namespace Epca0enValC{
            constexpr Register::FieldValue<decltype(epca0en)::Type,Epca0enVal::none> none{};
            constexpr Register::FieldValue<decltype(epca0en)::Type,Epca0enVal::cex00> cex00{};
            constexpr Register::FieldValue<decltype(epca0en)::Type,Epca0enVal::cex01> cex01{};
            constexpr Register::FieldValue<decltype(epca0en)::Type,Epca0enVal::cex02> cex02{};
            constexpr Register::FieldValue<decltype(epca0en)::Type,Epca0enVal::cex03> cex03{};
            constexpr Register::FieldValue<decltype(epca0en)::Type,Epca0enVal::cex04> cex04{};
            constexpr Register::FieldValue<decltype(epca0en)::Type,Epca0enVal::cex05> cex05{};
        }
        }
        ///EPCA0 ECI Enable. 
        enum class Eeci0enVal {
            disabled=0x00000000,     ///<Disable EPCA0 ECI on Crossbar 0.
            enabled=0x00000001,     ///<Enable EPCA0 ECI on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Eeci0enVal> eeci0en{}; 
        namespace Eeci0enValC{
            constexpr Register::FieldValue<decltype(eeci0en)::Type,Eeci0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(eeci0en)::Type,Eeci0enVal::enabled> enabled{};
        }
        }
        ///I2C0 Enable. 
        enum class I2c0enVal {
            disabled=0x00000000,     ///<Disable I2C0 SDA and SCL on Crossbar 0.
            enabled=0x00000001,     ///<Enable I2C0 SDA and SCL on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,I2c0enVal> i2c0en{}; 
        namespace I2c0enValC{
            constexpr Register::FieldValue<decltype(i2c0en)::Type,I2c0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(i2c0en)::Type,I2c0enVal::enabled> enabled{};
        }
        }
        ///Comparator 0 Synchronous Output (CMP0S) Enable. 
        enum class Cmp0senVal {
            disabled=0x00000000,     ///<Disable Comparator 0 Synchronous Output (CMP0S) on Crossbar 0.
            enabled=0x00000001,     ///<Enable Comparator 0 Synchronous Output (CMP0S) on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Cmp0senVal> cmp0sen{}; 
        namespace Cmp0senValC{
            constexpr Register::FieldValue<decltype(cmp0sen)::Type,Cmp0senVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0sen)::Type,Cmp0senVal::enabled> enabled{};
        }
        }
        ///Comparator 0 Asynchronous Output (CMP0A) Enable. 
        enum class Cmp0aenVal {
            disabled=0x00000000,     ///<Disable Comparator 0 Asynchronous Output (CMP0A) on Crossbar 0.
            enabled=0x00000001,     ///<Enable Comparator 0 Asynchronous Output (CMP0A) on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Cmp0aenVal> cmp0aen{}; 
        namespace Cmp0aenValC{
            constexpr Register::FieldValue<decltype(cmp0aen)::Type,Cmp0aenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0aen)::Type,Cmp0aenVal::enabled> enabled{};
        }
        }
        ///Comparator 1 Synchronous Output (CMP1S) Enable. 
        enum class Cmp1senVal {
            disabled=0x00000000,     ///<Disable Comparator 1 Synchronous Output (CMP1S) on Crossbar 0.
            enabled=0x00000001,     ///<Enable Comparator 1 Synchronous Output (CMP1S) on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Cmp1senVal> cmp1sen{}; 
        namespace Cmp1senValC{
            constexpr Register::FieldValue<decltype(cmp1sen)::Type,Cmp1senVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp1sen)::Type,Cmp1senVal::enabled> enabled{};
        }
        }
        ///Comparator 1 Asynchronous Output (CMP1A) Enable. 
        enum class Cmp1aenVal {
            disabled=0x00000000,     ///<Disable Comparator 1 Asynchronous Output (CMP1A) on Crossbar 0.
            enabled=0x00000001,     ///<Enable Comparator 1 Asynchronous Output (CMP1A) on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Cmp1aenVal> cmp1aen{}; 
        namespace Cmp1aenValC{
            constexpr Register::FieldValue<decltype(cmp1aen)::Type,Cmp1aenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp1aen)::Type,Cmp1aenVal::enabled> enabled{};
        }
        }
        ///TIMER0 T0CT Enable. 
        enum class Tmr0ctenVal {
            disabled=0x00000000,     ///<Disable TIMER0 CT on Crossbar 0.
            enabled=0x00000001,     ///<Enable TIMER0 CT on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Tmr0ctenVal> tmr0cten{}; 
        namespace Tmr0ctenValC{
            constexpr Register::FieldValue<decltype(tmr0cten)::Type,Tmr0ctenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tmr0cten)::Type,Tmr0ctenVal::enabled> enabled{};
        }
        }
        ///TIMER0 T0EX Enable. 
        enum class Tmr0exenVal {
            disabled=0x00000000,     ///<Disable TIMER0 EX on Crossbar 0.
            enabled=0x00000001,     ///<Enable TIMER0 EX on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Tmr0exenVal> tmr0exen{}; 
        namespace Tmr0exenValC{
            constexpr Register::FieldValue<decltype(tmr0exen)::Type,Tmr0exenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tmr0exen)::Type,Tmr0exenVal::enabled> enabled{};
        }
        }
        ///TIMER1 T1CT Enable. 
        enum class Tmr1ctenVal {
            disabled=0x00000000,     ///<Disable TIMER1 CT on Crossbar 0.
            enabled=0x00000001,     ///<Enable TIMER1 CT on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Tmr1ctenVal> tmr1cten{}; 
        namespace Tmr1ctenValC{
            constexpr Register::FieldValue<decltype(tmr1cten)::Type,Tmr1ctenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tmr1cten)::Type,Tmr1ctenVal::enabled> enabled{};
        }
        }
        ///TIMER1 T1EX Enable. 
        enum class Tmr1exenVal {
            disabled=0x00000000,     ///<Disable TIMER1 EX on Crossbar 0.
            enabled=0x00000001,     ///<Enable TIMER1 EX on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tmr1exenVal> tmr1exen{}; 
        namespace Tmr1exenValC{
            constexpr Register::FieldValue<decltype(tmr1exen)::Type,Tmr1exenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tmr1exen)::Type,Tmr1exenVal::enabled> enabled{};
        }
        }
        ///SARADC0 Trigger Enable. 
        enum class Saradc0tenVal {
            disabled=0x00000000,     ///<Disable SARADC0 conversion start trigger on Crossbar 0.
            enabled=0x00000001,     ///<Enable SARADC0 conversion start trigger on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Saradc0tenVal> saradc0ten{}; 
        namespace Saradc0tenValC{
            constexpr Register::FieldValue<decltype(saradc0ten)::Type,Saradc0tenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(saradc0ten)::Type,Saradc0tenVal::enabled> enabled{};
        }
        }
        ///AHB Clock Output Enable. 
        enum class AhbenVal {
            disabled=0x00000000,     ///<Disable the AHB Clock / 16 output on Crossbar 0.
            enabled=0x00000001,     ///<Enable the AHB Clock / 16 output on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,AhbenVal> ahben{}; 
        namespace AhbenValC{
            constexpr Register::FieldValue<decltype(ahben)::Type,AhbenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ahben)::Type,AhbenVal::enabled> enabled{};
        }
        }
        ///Crossbar 0 Enable. 
        enum class Xbar0enVal {
            disabled=0x00000000,     ///<Disable Crossbar 0.
            enabled=0x00000001,     ///<Enable Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Xbar0enVal> xbar0en{}; 
        namespace Xbar0enValC{
            constexpr Register::FieldValue<decltype(xbar0en)::Type,Xbar0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(xbar0en)::Type,Xbar0enVal::enabled> enabled{};
        }
        }
    }
    namespace Nonepbkey{    ///<Global Port Key
        using Addr = Register::Address<0x4002a030,0xffffff00,0,unsigned>;
        ///Port Bank Key. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
}
