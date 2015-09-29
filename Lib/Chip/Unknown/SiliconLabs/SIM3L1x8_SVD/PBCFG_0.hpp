#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol0{    ///<Global Port Control 0
        using Addr = Register::Address<0x4002a000,0x60ff0000,0,unsigned>;
        ///External Interrupt 0 Pin Selection. 
        enum class int0selVal {
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
        namespace int0selValC{
            constexpr MPL::Value<int0selVal,int0selVal::int00> int00{};
            constexpr MPL::Value<int0selVal,int0selVal::int01> int01{};
            constexpr MPL::Value<int0selVal,int0selVal::int02> int02{};
            constexpr MPL::Value<int0selVal,int0selVal::int03> int03{};
            constexpr MPL::Value<int0selVal,int0selVal::int04> int04{};
            constexpr MPL::Value<int0selVal,int0selVal::int05> int05{};
            constexpr MPL::Value<int0selVal,int0selVal::int06> int06{};
            constexpr MPL::Value<int0selVal,int0selVal::int07> int07{};
            constexpr MPL::Value<int0selVal,int0selVal::int08> int08{};
            constexpr MPL::Value<int0selVal,int0selVal::int09> int09{};
            constexpr MPL::Value<int0selVal,int0selVal::int010> int010{};
            constexpr MPL::Value<int0selVal,int0selVal::int011> int011{};
            constexpr MPL::Value<int0selVal,int0selVal::int012> int012{};
            constexpr MPL::Value<int0selVal,int0selVal::int013> int013{};
            constexpr MPL::Value<int0selVal,int0selVal::int014> int014{};
            constexpr MPL::Value<int0selVal,int0selVal::int015> int015{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,int0selVal> int0sel{}; 
        ///External Interrupt 0 Polarity. 
        enum class int0polVal {
            low=0x00000000,     ///<A low value or falling edge on the selected pin will cause interrupt.
            high=0x00000001,     ///<A high value or rising edge on the selected pin will cause interrupt.
        };
        namespace int0polValC{
            constexpr MPL::Value<int0polVal,int0polVal::low> low{};
            constexpr MPL::Value<int0polVal,int0polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,int0polVal> int0pol{}; 
        ///External Interrupt 0 Mode. 
        enum class int0mdVal {
            level=0x00000000,     ///<Interrupt on logic level at pin, as selected by the INT0POL field.
            edge=0x00000001,     ///<Interrupt on either rising or falling edge, as selected by the INT0POL field.
            dualEdge=0x00000002,     ///<Interrupt on both rising and falling edges (ignores INT0POL).
        };
        namespace int0mdValC{
            constexpr MPL::Value<int0mdVal,int0mdVal::level> level{};
            constexpr MPL::Value<int0mdVal,int0mdVal::edge> edge{};
            constexpr MPL::Value<int0mdVal,int0mdVal::dualEdge> dualEdge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,int0mdVal> int0md{}; 
        ///External Interrupt 0 Enable. 
        enum class int0enVal {
            disabled=0x00000000,     ///<Disable external interrupt 0.
            enabled=0x00000001,     ///<Enable external interrupt 0.
        };
        namespace int0enValC{
            constexpr MPL::Value<int0enVal,int0enVal::disabled> disabled{};
            constexpr MPL::Value<int0enVal,int0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,int0enVal> int0en{}; 
        ///External Interrupt 1 Pin Selection. 
        enum class int1selVal {
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
        namespace int1selValC{
            constexpr MPL::Value<int1selVal,int1selVal::int10> int10{};
            constexpr MPL::Value<int1selVal,int1selVal::int11> int11{};
            constexpr MPL::Value<int1selVal,int1selVal::int12> int12{};
            constexpr MPL::Value<int1selVal,int1selVal::int13> int13{};
            constexpr MPL::Value<int1selVal,int1selVal::int14> int14{};
            constexpr MPL::Value<int1selVal,int1selVal::int15> int15{};
            constexpr MPL::Value<int1selVal,int1selVal::int16> int16{};
            constexpr MPL::Value<int1selVal,int1selVal::int17> int17{};
            constexpr MPL::Value<int1selVal,int1selVal::int18> int18{};
            constexpr MPL::Value<int1selVal,int1selVal::int19> int19{};
            constexpr MPL::Value<int1selVal,int1selVal::int110> int110{};
            constexpr MPL::Value<int1selVal,int1selVal::int111> int111{};
            constexpr MPL::Value<int1selVal,int1selVal::int112> int112{};
            constexpr MPL::Value<int1selVal,int1selVal::int113> int113{};
            constexpr MPL::Value<int1selVal,int1selVal::int114> int114{};
            constexpr MPL::Value<int1selVal,int1selVal::int115> int115{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,int1selVal> int1sel{}; 
        ///External Interrupt 1 Polarity. 
        enum class int1polVal {
            low=0x00000000,     ///<A low value or falling edge on the selected pin will cause interrupt.
            high=0x00000001,     ///<A high value or rising edge on the selected pin will cause interrupt.
        };
        namespace int1polValC{
            constexpr MPL::Value<int1polVal,int1polVal::low> low{};
            constexpr MPL::Value<int1polVal,int1polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,int1polVal> int1pol{}; 
        ///External Interrupt 1 Mode. 
        enum class int1mdVal {
            level=0x00000000,     ///<Interrupt on logic level at pin, as selected by the INT1POL field.
            edge=0x00000001,     ///<Interrupt on either rising or falling edge, as selected by the INT1POL field.
            dualEdge=0x00000002,     ///<Interrupt on both rising and falling edges (ignores INT1POL).
        };
        namespace int1mdValC{
            constexpr MPL::Value<int1mdVal,int1mdVal::level> level{};
            constexpr MPL::Value<int1mdVal,int1mdVal::edge> edge{};
            constexpr MPL::Value<int1mdVal,int1mdVal::dualEdge> dualEdge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,int1mdVal> int1md{}; 
        ///External Interrupt 1 Enable. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> int1en{}; 
        ///Pulse Generator Timer. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> pgtimer{}; 
        ///Pulse Generator Timer Done Flag. 
        enum class pgdonefVal {
            notSet=0x00000000,     ///<Firmware has written to the PBPGPHASE register, but the Pulse Generator timer has not expired.
            set=0x00000001,     ///<The Pulse Generator cycle finished since the last time PBPGPHASE was written.
        };
        namespace pgdonefValC{
            constexpr MPL::Value<pgdonefVal,pgdonefVal::notSet> notSet{};
            constexpr MPL::Value<pgdonefVal,pgdonefVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,pgdonefVal> pgdonef{}; 
    }
    namespace Nonecontrol1{    ///<Global Port Control 1
        using Addr = Register::Address<0x4002a010,0x7fffecf8,0,unsigned>;
        ///JTAG Enable. 
        enum class jtagenVal {
            disabled=0x00000000,     ///<JTAG functionality is not pinned out.
            enabled=0x00000001,     ///<JTAG functionality is pinned out.
        };
        namespace jtagenValC{
            constexpr MPL::Value<jtagenVal,jtagenVal::disabled> disabled{};
            constexpr MPL::Value<jtagenVal,jtagenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,jtagenVal> jtagen{}; 
        ///ETM Enable. 
        enum class etmenVal {
            disabled=0x00000000,     ///<ETM not pinned out.
            enabled=0x00000001,     ///<ETM is enabled and pinned out.
        };
        namespace etmenValC{
            constexpr MPL::Value<etmenVal,etmenVal::disabled> disabled{};
            constexpr MPL::Value<etmenVal,etmenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,etmenVal> etmen{}; 
        ///SWV Enable. 
        enum class swvenVal {
            disabled=0x00000000,     ///<SWV is not pinned out.
            enabled=0x00000001,     ///<SWV is enabled and pinned out.
        };
        namespace swvenValC{
            constexpr MPL::Value<swvenVal,swvenVal::disabled> disabled{};
            constexpr MPL::Value<swvenVal,swvenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swvenVal> swven{}; 
        ///SPI1 Fixed Port Selection. 
        enum class spi1selVal {
            disabled=0x00000000,     ///<Disconnect SPI1 from the dedicated pins.
            enabled=0x00000001,     ///<Connect SPI1 to the dedicated pins.
        };
        namespace spi1selValC{
            constexpr MPL::Value<spi1selVal,spi1selVal::disabled> disabled{};
            constexpr MPL::Value<spi1selVal,spi1selVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,spi1selVal> spi1sel{}; 
        ///Port Match Interrupt Enable. 
        enum class pmatchenVal {
            disabled=0x00000000,     ///<Disable the port match logic. The PBnMAT registers are not read/write accessible on the APB bus.
            enabled=0x00000001,     ///<Enable the port match logic to generate a port match interrupt. The PBnMAT registers are read/write accessible on the APB bus.
        };
        namespace pmatchenValC{
            constexpr MPL::Value<pmatchenVal,pmatchenVal::disabled> disabled{};
            constexpr MPL::Value<pmatchenVal,pmatchenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pmatchenVal> pmatchen{}; 
        ///Low Power Timer Output Pin Select. 
        enum class lptoselVal {
            lpt0out0=0x00000000,     ///<Route the Low Power Timer output to LPT0OUT0. 
            lpt0out1=0x00000001,     ///<Route the Low Power Timer output to LPT0OUT1. 
        };
        namespace lptoselValC{
            constexpr MPL::Value<lptoselVal,lptoselVal::lpt0out0> lpt0out0{};
            constexpr MPL::Value<lptoselVal,lptoselVal::lpt0out1> lpt0out1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,lptoselVal> lptosel{}; 
        ///Port Bank Configuration Lock. 
        enum class lockVal {
            unlocked=0x00000000,     ///<Port Bank Configuration and Control registers are unlocked.
            locked=0x00000001,     ///<The following registers are locked from write access: CONTROL1, XBAR0, and all PBSKIP registers.
        };
        namespace lockValC{
            constexpr MPL::Value<lockVal,lockVal::unlocked> unlocked{};
            constexpr MPL::Value<lockVal,lockVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,lockVal> lock{}; 
    }
    namespace Nonexbar0{    ///<Crossbar 0 Control
        using Addr = Register::Address<0x4002a020,0x7f800000,0,unsigned>;
        ///USART0 Enable. 
        enum class usart0enVal {
            disabled=0x00000000,     ///<Disable USART0 RX and TX on Crossbar 0.
            enabled=0x00000001,     ///<Enable USART0 RX and TX on Crossbar 0.
        };
        namespace usart0enValC{
            constexpr MPL::Value<usart0enVal,usart0enVal::disabled> disabled{};
            constexpr MPL::Value<usart0enVal,usart0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,usart0enVal> usart0en{}; 
        ///USART0 Flow Control Enable. 
        enum class usart0fcenVal {
            disabled=0x00000000,     ///<Disable USART0 flow control on Crossbar 0.
            enabled=0x00000001,     ///<Enable USART0 flow control on Crossbar 0.
        };
        namespace usart0fcenValC{
            constexpr MPL::Value<usart0fcenVal,usart0fcenVal::disabled> disabled{};
            constexpr MPL::Value<usart0fcenVal,usart0fcenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,usart0fcenVal> usart0fcen{}; 
        ///USART0 Clock Signal Enable. 
        enum class usart0cenVal {
            disabled=0x00000000,     ///<Disable USART0 clock on Crossbar 0.
            enabled=0x00000001,     ///<Enable USART0 clock on Crossbar 0.
        };
        namespace usart0cenValC{
            constexpr MPL::Value<usart0cenVal,usart0cenVal::disabled> disabled{};
            constexpr MPL::Value<usart0cenVal,usart0cenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,usart0cenVal> usart0cen{}; 
        ///DMA Trigger 0 Enable. 
        enum class dma0t0enVal {
            disabled=0x00000000,     ///<Disable the DMA trigger 0 on Crossbar 0.
            enabled=0x00000001,     ///<Enable the DMA trigger 0 on Crossbar 0.
        };
        namespace dma0t0enValC{
            constexpr MPL::Value<dma0t0enVal,dma0t0enVal::disabled> disabled{};
            constexpr MPL::Value<dma0t0enVal,dma0t0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dma0t0enVal> dma0t0en{}; 
        ///DMA Trigger 1 Enabled. 
        enum class dma0t1enVal {
            disabled=0x00000000,     ///<Disable the DMA trigger 1 on Crossbar 0.
            enabled=0x00000001,     ///<Enable the DMA trigger 1 on Crossbar 0.
        };
        namespace dma0t1enValC{
            constexpr MPL::Value<dma0t1enVal,dma0t1enVal::disabled> disabled{};
            constexpr MPL::Value<dma0t1enVal,dma0t1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,dma0t1enVal> dma0t1en{}; 
        ///IDAC0 Trigger Enable. 
        enum class idac0tenVal {
            disabled=0x00000000,     ///<Disable the IDAC0 trigger on Crossbar 0.
            enabled=0x00000001,     ///<Enable the IDAC0 trigger on Crossbar 0.
        };
        namespace idac0tenValC{
            constexpr MPL::Value<idac0tenVal,idac0tenVal::disabled> disabled{};
            constexpr MPL::Value<idac0tenVal,idac0tenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,idac0tenVal> idac0ten{}; 
        ///SPI0 Enable. 
        enum class spi0enVal {
            disabled=0x00000000,     ///<Disable SPI0 SCK, MISO, and MOSI on Crossbar 0.
            enabled=0x00000001,     ///<Enable SPI0 SCK, MISO, and MOSI on Crossbar 0.
        };
        namespace spi0enValC{
            constexpr MPL::Value<spi0enVal,spi0enVal::disabled> disabled{};
            constexpr MPL::Value<spi0enVal,spi0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,spi0enVal> spi0en{}; 
        ///SPI0 NSS Pin Enable. 
        enum class spi0nssenVal {
            disabled=0x00000000,     ///<Disable SPI0 NSS on Crossbar 0.
            enabled=0x00000001,     ///<Enable SPI0 NSS on Crossbar 0.
        };
        namespace spi0nssenValC{
            constexpr MPL::Value<spi0nssenVal,spi0nssenVal::disabled> disabled{};
            constexpr MPL::Value<spi0nssenVal,spi0nssenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,spi0nssenVal> spi0nssen{}; 
        ///EPCA0 Channel Enable. 
        enum class epca0enVal {
            none=0x00000000,     ///<Disable all EPCA0 channels on Crossbar 0.
            cex00=0x00000001,     ///<Enable EPCA0 CEX0 on Crossbar 0.
            cex01=0x00000002,     ///<Enable EPCA0 CEX0 and CEX1 on Crossbar 0.
            cex02=0x00000003,     ///<Enable EPCA0 CEX0, CEX1, and CEX2 on Crossbar 0.
            cex03=0x00000004,     ///<Enable EPCA0 CEX0, CEX1, CEX2, and CEX3 on Crossbar 0.
            cex04=0x00000005,     ///<Enable EPCA0 CEX0, CEX1, CEX2, CEX3, and CEX4 on Crossbar 0.
            cex05=0x00000006,     ///<Enable EPCA0 CEX0, CEX1, CEX2, CEX3, CEX4, and CEX5 on Crossbar 0.
        };
        namespace epca0enValC{
            constexpr MPL::Value<epca0enVal,epca0enVal::none> none{};
            constexpr MPL::Value<epca0enVal,epca0enVal::cex00> cex00{};
            constexpr MPL::Value<epca0enVal,epca0enVal::cex01> cex01{};
            constexpr MPL::Value<epca0enVal,epca0enVal::cex02> cex02{};
            constexpr MPL::Value<epca0enVal,epca0enVal::cex03> cex03{};
            constexpr MPL::Value<epca0enVal,epca0enVal::cex04> cex04{};
            constexpr MPL::Value<epca0enVal,epca0enVal::cex05> cex05{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,epca0enVal> epca0en{}; 
        ///EPCA0 ECI Enable. 
        enum class eeci0enVal {
            disabled=0x00000000,     ///<Disable EPCA0 ECI on Crossbar 0.
            enabled=0x00000001,     ///<Enable EPCA0 ECI on Crossbar 0.
        };
        namespace eeci0enValC{
            constexpr MPL::Value<eeci0enVal,eeci0enVal::disabled> disabled{};
            constexpr MPL::Value<eeci0enVal,eeci0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,eeci0enVal> eeci0en{}; 
        ///I2C0 Enable. 
        enum class i2c0enVal {
            disabled=0x00000000,     ///<Disable I2C0 SDA and SCL on Crossbar 0.
            enabled=0x00000001,     ///<Enable I2C0 SDA and SCL on Crossbar 0.
        };
        namespace i2c0enValC{
            constexpr MPL::Value<i2c0enVal,i2c0enVal::disabled> disabled{};
            constexpr MPL::Value<i2c0enVal,i2c0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,i2c0enVal> i2c0en{}; 
        ///Comparator 0 Synchronous Output (CMP0S) Enable. 
        enum class cmp0senVal {
            disabled=0x00000000,     ///<Disable Comparator 0 Synchronous Output (CMP0S) on Crossbar 0.
            enabled=0x00000001,     ///<Enable Comparator 0 Synchronous Output (CMP0S) on Crossbar 0.
        };
        namespace cmp0senValC{
            constexpr MPL::Value<cmp0senVal,cmp0senVal::disabled> disabled{};
            constexpr MPL::Value<cmp0senVal,cmp0senVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,cmp0senVal> cmp0sen{}; 
        ///Comparator 0 Asynchronous Output (CMP0A) Enable. 
        enum class cmp0aenVal {
            disabled=0x00000000,     ///<Disable Comparator 0 Asynchronous Output (CMP0A) on Crossbar 0.
            enabled=0x00000001,     ///<Enable Comparator 0 Asynchronous Output (CMP0A) on Crossbar 0.
        };
        namespace cmp0aenValC{
            constexpr MPL::Value<cmp0aenVal,cmp0aenVal::disabled> disabled{};
            constexpr MPL::Value<cmp0aenVal,cmp0aenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,cmp0aenVal> cmp0aen{}; 
        ///Comparator 1 Synchronous Output (CMP1S) Enable. 
        enum class cmp1senVal {
            disabled=0x00000000,     ///<Disable Comparator 1 Synchronous Output (CMP1S) on Crossbar 0.
            enabled=0x00000001,     ///<Enable Comparator 1 Synchronous Output (CMP1S) on Crossbar 0.
        };
        namespace cmp1senValC{
            constexpr MPL::Value<cmp1senVal,cmp1senVal::disabled> disabled{};
            constexpr MPL::Value<cmp1senVal,cmp1senVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,cmp1senVal> cmp1sen{}; 
        ///Comparator 1 Asynchronous Output (CMP1A) Enable. 
        enum class cmp1aenVal {
            disabled=0x00000000,     ///<Disable Comparator 1 Asynchronous Output (CMP1A) on Crossbar 0.
            enabled=0x00000001,     ///<Enable Comparator 1 Asynchronous Output (CMP1A) on Crossbar 0.
        };
        namespace cmp1aenValC{
            constexpr MPL::Value<cmp1aenVal,cmp1aenVal::disabled> disabled{};
            constexpr MPL::Value<cmp1aenVal,cmp1aenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,cmp1aenVal> cmp1aen{}; 
        ///TIMER0 T0CT Enable. 
        enum class tmr0ctenVal {
            disabled=0x00000000,     ///<Disable TIMER0 CT on Crossbar 0.
            enabled=0x00000001,     ///<Enable TIMER0 CT on Crossbar 0.
        };
        namespace tmr0ctenValC{
            constexpr MPL::Value<tmr0ctenVal,tmr0ctenVal::disabled> disabled{};
            constexpr MPL::Value<tmr0ctenVal,tmr0ctenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,tmr0ctenVal> tmr0cten{}; 
        ///TIMER0 T0EX Enable. 
        enum class tmr0exenVal {
            disabled=0x00000000,     ///<Disable TIMER0 EX on Crossbar 0.
            enabled=0x00000001,     ///<Enable TIMER0 EX on Crossbar 0.
        };
        namespace tmr0exenValC{
            constexpr MPL::Value<tmr0exenVal,tmr0exenVal::disabled> disabled{};
            constexpr MPL::Value<tmr0exenVal,tmr0exenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,tmr0exenVal> tmr0exen{}; 
        ///TIMER1 T1CT Enable. 
        enum class tmr1ctenVal {
            disabled=0x00000000,     ///<Disable TIMER1 CT on Crossbar 0.
            enabled=0x00000001,     ///<Enable TIMER1 CT on Crossbar 0.
        };
        namespace tmr1ctenValC{
            constexpr MPL::Value<tmr1ctenVal,tmr1ctenVal::disabled> disabled{};
            constexpr MPL::Value<tmr1ctenVal,tmr1ctenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,tmr1ctenVal> tmr1cten{}; 
        ///TIMER1 T1EX Enable. 
        enum class tmr1exenVal {
            disabled=0x00000000,     ///<Disable TIMER1 EX on Crossbar 0.
            enabled=0x00000001,     ///<Enable TIMER1 EX on Crossbar 0.
        };
        namespace tmr1exenValC{
            constexpr MPL::Value<tmr1exenVal,tmr1exenVal::disabled> disabled{};
            constexpr MPL::Value<tmr1exenVal,tmr1exenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tmr1exenVal> tmr1exen{}; 
        ///SARADC0 Trigger Enable. 
        enum class saradc0tenVal {
            disabled=0x00000000,     ///<Disable SARADC0 conversion start trigger on Crossbar 0.
            enabled=0x00000001,     ///<Enable SARADC0 conversion start trigger on Crossbar 0.
        };
        namespace saradc0tenValC{
            constexpr MPL::Value<saradc0tenVal,saradc0tenVal::disabled> disabled{};
            constexpr MPL::Value<saradc0tenVal,saradc0tenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,saradc0tenVal> saradc0ten{}; 
        ///AHB Clock Output Enable. 
        enum class ahbenVal {
            disabled=0x00000000,     ///<Disable the AHB Clock / 16 output on Crossbar 0.
            enabled=0x00000001,     ///<Enable the AHB Clock / 16 output on Crossbar 0.
        };
        namespace ahbenValC{
            constexpr MPL::Value<ahbenVal,ahbenVal::disabled> disabled{};
            constexpr MPL::Value<ahbenVal,ahbenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ahbenVal> ahben{}; 
        ///Crossbar 0 Enable. 
        enum class xbar0enVal {
            disabled=0x00000000,     ///<Disable Crossbar 0.
            enabled=0x00000001,     ///<Enable Crossbar 0.
        };
        namespace xbar0enValC{
            constexpr MPL::Value<xbar0enVal,xbar0enVal::disabled> disabled{};
            constexpr MPL::Value<xbar0enVal,xbar0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,xbar0enVal> xbar0en{}; 
    }
    namespace Nonepbkey{    ///<Global Port Key
        using Addr = Register::Address<0x4002a030,0xffffff00,0,unsigned>;
        ///Port Bank Key. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
}
