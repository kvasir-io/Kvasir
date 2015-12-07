#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol0{    ///<Global Port Control 0
        using Addr = Register::Address<0x4002a000,0x60ff4040,0,unsigned>;
        ///External Interrupt 0 Pin Selection. 
        enum class Int0selVal {
            int00=0x00000000,     ///<Select INT0.0 (PB2.0)
            int01=0x00000001,     ///<Select INT0.1 (PB2.1)
            int02=0x00000002,     ///<Select INT0.2 (PB2.2)
            int03=0x00000003,     ///<Select INT0.3 (PB2.3)
            int04=0x00000004,     ///<Select INT0.4 (PB2.4)
            int05=0x00000005,     ///<Select INT0.5 (PB2.5)
            int06=0x00000006,     ///<Select INT0.6 (PB2.6)
            int07=0x00000007,     ///<Select INT0.7 (PB2.7)
            int08=0x00000008,     ///<Select INT0.8 (PB3.3)
            int09=0x00000009,     ///<Select INT0.9 (PB3.4)
            int010=0x0000000a,     ///<Select INT0.10 (PB3.5)
            int011=0x0000000b,     ///<Select INT0.11 (PB3.6)
            int012=0x0000000c,     ///<Select INT0.12 (PB3.7)
            int013=0x0000000d,     ///<Select INT0.13 (PB3.8)
            int014=0x0000000e,     ///<Select INT0.14 (PB3.9)
            int015=0x0000000f,     ///<Select INT0.15 (PB3.10)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,Int0selVal> int0sel{}; 
        namespace Int0selValC{
            constexpr Register::FieldValue<decltype(int0sel),Int0selVal::int00> int00{};
            constexpr Register::FieldValue<decltype(int0sel),Int0selVal::int01> int01{};
            constexpr Register::FieldValue<decltype(int0sel),Int0selVal::int02> int02{};
            constexpr Register::FieldValue<decltype(int0sel),Int0selVal::int03> int03{};
            constexpr Register::FieldValue<decltype(int0sel),Int0selVal::int04> int04{};
            constexpr Register::FieldValue<decltype(int0sel),Int0selVal::int05> int05{};
            constexpr Register::FieldValue<decltype(int0sel),Int0selVal::int06> int06{};
            constexpr Register::FieldValue<decltype(int0sel),Int0selVal::int07> int07{};
            constexpr Register::FieldValue<decltype(int0sel),Int0selVal::int08> int08{};
            constexpr Register::FieldValue<decltype(int0sel),Int0selVal::int09> int09{};
            constexpr Register::FieldValue<decltype(int0sel),Int0selVal::int010> int010{};
            constexpr Register::FieldValue<decltype(int0sel),Int0selVal::int011> int011{};
            constexpr Register::FieldValue<decltype(int0sel),Int0selVal::int012> int012{};
            constexpr Register::FieldValue<decltype(int0sel),Int0selVal::int013> int013{};
            constexpr Register::FieldValue<decltype(int0sel),Int0selVal::int014> int014{};
            constexpr Register::FieldValue<decltype(int0sel),Int0selVal::int015> int015{};
        }
        ///External Interrupt 0 Polarity. 
        enum class Int0polVal {
            low=0x00000000,     ///<A low value or falling edge on the selected pin will cause interrupt.
            high=0x00000001,     ///<A high value or rising edge on the selected pin will cause interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Int0polVal> int0pol{}; 
        namespace Int0polValC{
            constexpr Register::FieldValue<decltype(int0pol),Int0polVal::low> low{};
            constexpr Register::FieldValue<decltype(int0pol),Int0polVal::high> high{};
        }
        ///External Interrupt 0 Mode. 
        enum class Int0mdVal {
            level=0x00000000,     ///<Interrupt based on level sensitivity.
            edge=0x00000001,     ///<Interrupt based on edge sensitivity.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Int0mdVal> int0md{}; 
        namespace Int0mdValC{
            constexpr Register::FieldValue<decltype(int0md),Int0mdVal::level> level{};
            constexpr Register::FieldValue<decltype(int0md),Int0mdVal::edge> edge{};
        }
        ///External Interrupt 0 Enable. 
        enum class Int0enVal {
            disabled=0x00000000,     ///<Disable external interrupt 0.
            enabled=0x00000001,     ///<Enable external interrupt 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Int0enVal> int0en{}; 
        namespace Int0enValC{
            constexpr Register::FieldValue<decltype(int0en),Int0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(int0en),Int0enVal::enabled> enabled{};
        }
        ///External Interrupt 1 Pin Selection. 
        enum class Int1selVal {
            int10=0x00000000,     ///<Select INT1.0 (PB2.0)
            int11=0x00000001,     ///<Select INT1.1 (PB2.1)
            int12=0x00000002,     ///<Select INT1.2 (PB2.2)
            int13=0x00000003,     ///<Select INT1.3 (PB2.3)
            int14=0x00000004,     ///<Select INT1.4 (PB2.4)
            int15=0x00000005,     ///<Select INT1.5 (PB2.5)
            int16=0x00000006,     ///<Select INT1.6 (PB2.6)
            int17=0x00000007,     ///<Select INT1.7 (PB2.7)
            int18=0x00000008,     ///<Select INT1.8 (PB3.3)
            int19=0x00000009,     ///<Select INT1.9 (PB3.4)
            int110=0x0000000a,     ///<Select INT1.10 (PB3.5)
            int111=0x0000000b,     ///<Select INT1.11 (PB3.6)
            int112=0x0000000c,     ///<Select INT1.12 (PB3.7)
            int113=0x0000000d,     ///<Select INT1.13 (PB3.8)
            int114=0x0000000e,     ///<Select INT1.14 (PB3.9)
            int115=0x0000000f,     ///<Select INT1.15 (PB3.10)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,Int1selVal> int1sel{}; 
        namespace Int1selValC{
            constexpr Register::FieldValue<decltype(int1sel),Int1selVal::int10> int10{};
            constexpr Register::FieldValue<decltype(int1sel),Int1selVal::int11> int11{};
            constexpr Register::FieldValue<decltype(int1sel),Int1selVal::int12> int12{};
            constexpr Register::FieldValue<decltype(int1sel),Int1selVal::int13> int13{};
            constexpr Register::FieldValue<decltype(int1sel),Int1selVal::int14> int14{};
            constexpr Register::FieldValue<decltype(int1sel),Int1selVal::int15> int15{};
            constexpr Register::FieldValue<decltype(int1sel),Int1selVal::int16> int16{};
            constexpr Register::FieldValue<decltype(int1sel),Int1selVal::int17> int17{};
            constexpr Register::FieldValue<decltype(int1sel),Int1selVal::int18> int18{};
            constexpr Register::FieldValue<decltype(int1sel),Int1selVal::int19> int19{};
            constexpr Register::FieldValue<decltype(int1sel),Int1selVal::int110> int110{};
            constexpr Register::FieldValue<decltype(int1sel),Int1selVal::int111> int111{};
            constexpr Register::FieldValue<decltype(int1sel),Int1selVal::int112> int112{};
            constexpr Register::FieldValue<decltype(int1sel),Int1selVal::int113> int113{};
            constexpr Register::FieldValue<decltype(int1sel),Int1selVal::int114> int114{};
            constexpr Register::FieldValue<decltype(int1sel),Int1selVal::int115> int115{};
        }
        ///External Interrupt 1 Polarity. 
        enum class Int1polVal {
            low=0x00000000,     ///<A low value or falling edge on the selected pin will cause interrupt.
            high=0x00000001,     ///<A high value or rising edge on the selected pin will cause interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Int1polVal> int1pol{}; 
        namespace Int1polValC{
            constexpr Register::FieldValue<decltype(int1pol),Int1polVal::low> low{};
            constexpr Register::FieldValue<decltype(int1pol),Int1polVal::high> high{};
        }
        ///External Interrupt 1 Mode. 
        enum class Int1mdVal {
            level=0x00000000,     ///<Interrupt based on level sensitivity.
            edge=0x00000001,     ///<Interrupt based on edge sensitivity.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Int1mdVal> int1md{}; 
        namespace Int1mdValC{
            constexpr Register::FieldValue<decltype(int1md),Int1mdVal::level> level{};
            constexpr Register::FieldValue<decltype(int1md),Int1mdVal::edge> edge{};
        }
        ///External Interrupt 1 Enable. 
        enum class Int1enVal {
            disabled=0x00000000,     ///<Disable external interrupt 1.
            enabled=0x00000001,     ///<Enable external interrupt 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Int1enVal> int1en{}; 
        namespace Int1enValC{
            constexpr Register::FieldValue<decltype(int1en),Int1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(int1en),Int1enVal::enabled> enabled{};
        }
        ///Pulse Generator Timer. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> pgtimer{}; 
        namespace PgtimerValC{
        }
        ///Pulse Generator Timer Done Flag. 
        enum class PgdonefVal {
            notSet=0x00000000,     ///<Firmware has written to the PBPGPHASE register, but the Pulse Generator timer has not expired.
            set=0x00000001,     ///<The Pulse Generator cycle finished since the last time PBPGPHASE was written.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,PgdonefVal> pgdonef{}; 
        namespace PgdonefValC{
            constexpr Register::FieldValue<decltype(pgdonef),PgdonefVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(pgdonef),PgdonefVal::set> set{};
        }
    }
    namespace Nonecontrol1{    ///<Global Port Control 1
        using Addr = Register::Address<0x4002a010,0x7f7c007c,0,unsigned>;
        ///JTAG Enable. 
        enum class JtagenVal {
            disabled=0x00000000,     ///<JTAG functionality is not pinned out.
            enabled=0x00000001,     ///<JTAG functionality is pinned out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,JtagenVal> jtagen{}; 
        namespace JtagenValC{
            constexpr Register::FieldValue<decltype(jtagen),JtagenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(jtagen),JtagenVal::enabled> enabled{};
        }
        ///ETM Enable. 
        enum class EtmenVal {
            disabled=0x00000000,     ///<ETM not pinned out.
            enabled=0x00000001,     ///<ETM is enabled and pinned out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EtmenVal> etmen{}; 
        namespace EtmenValC{
            constexpr Register::FieldValue<decltype(etmen),EtmenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(etmen),EtmenVal::enabled> enabled{};
        }
        ///EMIF <overline>BE0</overline> Pin Enable. 
        enum class Emifbe0benVal {
            disabled=0x00000000,     ///<Disable the EMIF /BE0 pin.
            enabled=0x00000001,     ///<Enable the /BE0 pin if EMIFEN is also set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Emifbe0benVal> emifbe0ben{}; 
        namespace Emifbe0benValC{
            constexpr Register::FieldValue<decltype(emifbe0ben),Emifbe0benVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(emifbe0ben),Emifbe0benVal::enabled> enabled{};
        }
        ///EMIF CS1 Pin Enable. 
        enum class Emifcs1enVal {
            disabled=0x00000000,     ///<Disable the EMIF CS1 pin.
            enabled=0x00000001,     ///<Enable the CS1 pin if EMIFEN is also set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Emifcs1enVal> emifcs1en{}; 
        namespace Emifcs1enValC{
            constexpr Register::FieldValue<decltype(emifcs1en),Emifcs1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(emifcs1en),Emifcs1enVal::enabled> enabled{};
        }
        ///EMIF Enable. 
        enum class EmifenVal {
            disabled=0x00000000,     ///<Disable the EMIF pins.
            enabled=0x00000001,     ///<EMIF is enabled and pinned out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,EmifenVal> emifen{}; 
        namespace EmifenValC{
            constexpr Register::FieldValue<decltype(emifen),EmifenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(emifen),EmifenVal::enabled> enabled{};
        }
        ///EMIF Width. 
        enum class EmifwidthVal {
            awidth8=0x00000000,     ///<EMIF Address[7:0]
            awidth9=0x00000001,     ///<EMIF Address[8:0], PB2.8 = A[8]
            awidth10=0x00000002,     ///<EMIF Address[9:0], PB2.7 = A[9]
            awidth11=0x00000003,     ///<EMIF Address[10:0], PB2.6 = A[10]
            awidth12=0x00000004,     ///<EMIF Address[11:0], PB2.5 = A[11]
            awidth13=0x00000005,     ///<EMIF Address[12:0], PB2.4 = A[12]
            awidth14=0x00000006,     ///<EMIF Address[13:0], PB2.3 = A[13]
            awidth15=0x00000007,     ///<EMIF Address[14:0], PB2.2 = A[14]
            awidth16=0x00000008,     ///<EMIF Address[15:0], PB2.1 = A[15]
            awidth17=0x00000009,     ///<EMIF Address[16:0], PB2.0 = A[16]
            awidth18=0x0000000a,     ///<EMIF Address[17:0], PB1.15 = A[17]
            awidth19=0x0000000b,     ///<EMIF Address[18:0], PB1.14 = A[18]
            awidth20=0x0000000c,     ///<EMIF Address[19:0], PB1.13 = A[19]
            awidth21=0x0000000d,     ///<EMIF Address[20:0], PB1.12 = A[20]
            awidth22=0x0000000e,     ///<EMIF Address[21:0], PB1.11 = A[21]
            awidth23=0x0000000f,     ///<EMIF Address[22:0], PB1.10 = A[22]
            awidth24=0x00000010,     ///<EMIF Address[23:0], PB1.10 = A[23]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,EmifwidthVal> emifwidth{}; 
        namespace EmifwidthValC{
            constexpr Register::FieldValue<decltype(emifwidth),EmifwidthVal::awidth8> awidth8{};
            constexpr Register::FieldValue<decltype(emifwidth),EmifwidthVal::awidth9> awidth9{};
            constexpr Register::FieldValue<decltype(emifwidth),EmifwidthVal::awidth10> awidth10{};
            constexpr Register::FieldValue<decltype(emifwidth),EmifwidthVal::awidth11> awidth11{};
            constexpr Register::FieldValue<decltype(emifwidth),EmifwidthVal::awidth12> awidth12{};
            constexpr Register::FieldValue<decltype(emifwidth),EmifwidthVal::awidth13> awidth13{};
            constexpr Register::FieldValue<decltype(emifwidth),EmifwidthVal::awidth14> awidth14{};
            constexpr Register::FieldValue<decltype(emifwidth),EmifwidthVal::awidth15> awidth15{};
            constexpr Register::FieldValue<decltype(emifwidth),EmifwidthVal::awidth16> awidth16{};
            constexpr Register::FieldValue<decltype(emifwidth),EmifwidthVal::awidth17> awidth17{};
            constexpr Register::FieldValue<decltype(emifwidth),EmifwidthVal::awidth18> awidth18{};
            constexpr Register::FieldValue<decltype(emifwidth),EmifwidthVal::awidth19> awidth19{};
            constexpr Register::FieldValue<decltype(emifwidth),EmifwidthVal::awidth20> awidth20{};
            constexpr Register::FieldValue<decltype(emifwidth),EmifwidthVal::awidth21> awidth21{};
            constexpr Register::FieldValue<decltype(emifwidth),EmifwidthVal::awidth22> awidth22{};
            constexpr Register::FieldValue<decltype(emifwidth),EmifwidthVal::awidth23> awidth23{};
            constexpr Register::FieldValue<decltype(emifwidth),EmifwidthVal::awidth24> awidth24{};
        }
        ///Match Mode. 
        enum class MatmdVal {
            pinmatch=0x00000000,     ///<Port Match registers used to provide interrupt / wake sources.
            capsenseTx=0x00000001,     ///<Port Match registers used to monitor output pin activity for Capacitive Sensing measurements.
            capsenseRx=0x00000002,     ///<Port Match registers used to monitor input pin activity for Capacitive Sensing measurements.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,MatmdVal> matmd{}; 
        namespace MatmdValC{
            constexpr Register::FieldValue<decltype(matmd),MatmdVal::pinmatch> pinmatch{};
            constexpr Register::FieldValue<decltype(matmd),MatmdVal::capsenseTx> capsenseTx{};
            constexpr Register::FieldValue<decltype(matmd),MatmdVal::capsenseRx> capsenseRx{};
        }
        ///External Regulator Reset Mode. 
        enum class EvregrmdVal {
            resetOnAny=0x00000000,     ///<The pins used by the external regulator will default to digital inputs with weak pull-up enabled on any reset.
            resetOnPor=0x00000001,     ///<The pins used by the external regulator will default to digital inputs with weak pull-up enabled only on Power-On Reset. Their configured mode will be preserved through all other resets.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,EvregrmdVal> evregrmd{}; 
        namespace EvregrmdValC{
            constexpr Register::FieldValue<decltype(evregrmd),EvregrmdVal::resetOnAny> resetOnAny{};
            constexpr Register::FieldValue<decltype(evregrmd),EvregrmdVal::resetOnPor> resetOnPor{};
        }
        ///Port Bank Configuration Lock. 
        enum class LockVal {
            unlocked=0x00000000,     ///<Port Bank Configuration and Control registers are unlocked.
            locked=0x00000001,     ///<The following registers are locked from write access: CONTROL1, XBAR0L, XBAR0H, XBAR1, and all PBSKIP registers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,LockVal> lock{}; 
        namespace LockValC{
            constexpr Register::FieldValue<decltype(lock),LockVal::unlocked> unlocked{};
            constexpr Register::FieldValue<decltype(lock),LockVal::locked> locked{};
        }
    }
    namespace Nonexbar0l{    ///<Crossbar 0 Control (Low)
        using Addr = Register::Address<0x4002a020,0x80003800,0,unsigned>;
        ///USART0 Enable. 
        enum class Usart0enVal {
            disabled=0x00000000,     ///<Disable USART0 RX and TX on Crossbar 0.
            enabled=0x00000001,     ///<Enable USART0 RX and TX on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Usart0enVal> usart0en{}; 
        namespace Usart0enValC{
            constexpr Register::FieldValue<decltype(usart0en),Usart0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usart0en),Usart0enVal::enabled> enabled{};
        }
        ///USART0 Flow Control Enable. 
        enum class Usart0fcenVal {
            disabled=0x00000000,     ///<Disable USART0 flow control on Crossbar 0.
            enabled=0x00000001,     ///<Enable USART0 flow control on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Usart0fcenVal> usart0fcen{}; 
        namespace Usart0fcenValC{
            constexpr Register::FieldValue<decltype(usart0fcen),Usart0fcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usart0fcen),Usart0fcenVal::enabled> enabled{};
        }
        ///USART0 Clock Signal Enable. 
        enum class Usart0cenVal {
            disabled=0x00000000,     ///<Disable USART0 clock on Crossbar 0.
            enabled=0x00000001,     ///<Enable USART0 clock on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Usart0cenVal> usart0cen{}; 
        namespace Usart0cenValC{
            constexpr Register::FieldValue<decltype(usart0cen),Usart0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usart0cen),Usart0cenVal::enabled> enabled{};
        }
        ///SPI0 Enable. 
        enum class Spi0enVal {
            disabled=0x00000000,     ///<Disable SPI0 SCK, MISO, and MOSI on Crossbar 0.
            enabled=0x00000001,     ///<Enable SPI0 SCK, MISO, and MOSI on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Spi0enVal> spi0en{}; 
        namespace Spi0enValC{
            constexpr Register::FieldValue<decltype(spi0en),Spi0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spi0en),Spi0enVal::enabled> enabled{};
        }
        ///SPI0 NSS Pin Enable. 
        enum class Spi0nssenVal {
            disabled=0x00000000,     ///<Disable SPI0 NSS on Crossbar 0.
            enabled=0x00000001,     ///<Enable SPI0 NSS on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Spi0nssenVal> spi0nssen{}; 
        namespace Spi0nssenValC{
            constexpr Register::FieldValue<decltype(spi0nssen),Spi0nssenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spi0nssen),Spi0nssenVal::enabled> enabled{};
        }
        ///USART1 Enable. 
        enum class Usart1enVal {
            disabled=0x00000000,     ///<Disable USART1 RX and TX on Crossbar 0.
            enabled=0x00000001,     ///<Enable USART1 RX and TX on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Usart1enVal> usart1en{}; 
        namespace Usart1enValC{
            constexpr Register::FieldValue<decltype(usart1en),Usart1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usart1en),Usart1enVal::enabled> enabled{};
        }
        ///USART1 Flow Control Enable. 
        enum class Usart1fcenVal {
            disabled=0x00000000,     ///<Disable USART1 flow control on Crossbar 0.
            enabled=0x00000001,     ///<Enable USART1 flow control on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Usart1fcenVal> usart1fcen{}; 
        namespace Usart1fcenValC{
            constexpr Register::FieldValue<decltype(usart1fcen),Usart1fcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usart1fcen),Usart1fcenVal::enabled> enabled{};
        }
        ///USART1 Clock Signal Enable. 
        enum class Usart1cenVal {
            disabled=0x00000000,     ///<Disable USART1 clock on Crossbar 0.
            enabled=0x00000001,     ///<Enable USART1 clock on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Usart1cenVal> usart1cen{}; 
        namespace Usart1cenValC{
            constexpr Register::FieldValue<decltype(usart1cen),Usart1cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usart1cen),Usart1cenVal::enabled> enabled{};
        }
        ///EPCA0 Channel Enable. 
        enum class Epca0enVal {
            none=0x00000000,     ///<Disable all EPCA0 channels on Crossbar 0.
            stdCex0=0x00000001,     ///<Enable EPCA0 STD_CEX0 on Crossbar 0.
            stdCex01=0x00000002,     ///<Enable EPCA0 STD_CEX0 and STD_CEX1 on Crossbar 0.
            stdCex02=0x00000003,     ///<Enable EPCA0 STD_CEX0, STD_CEX1, and STD_CEX2 on Crossbar 0.
            stdCex03=0x00000004,     ///<Enable EPCA0 STD_CEX0, STD_CEX1, STD_CEX2, and STD_CEX3 on Crossbar 0.
            stdCex04=0x00000005,     ///<Enable EPCA0 STD_CEX0, STD_CEX1, STD_CEX2, STD_CEX3, and STD_CEX4 on Crossbar 0.
            stdCex05=0x00000006,     ///<Enable EPCA0 STD_CEX0, STD_CEX1, STD_CEX2, STD_CEX3, STD_CEX4, and STD_CEX5 on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,Epca0enVal> epca0en{}; 
        namespace Epca0enValC{
            constexpr Register::FieldValue<decltype(epca0en),Epca0enVal::none> none{};
            constexpr Register::FieldValue<decltype(epca0en),Epca0enVal::stdCex0> stdCex0{};
            constexpr Register::FieldValue<decltype(epca0en),Epca0enVal::stdCex01> stdCex01{};
            constexpr Register::FieldValue<decltype(epca0en),Epca0enVal::stdCex02> stdCex02{};
            constexpr Register::FieldValue<decltype(epca0en),Epca0enVal::stdCex03> stdCex03{};
            constexpr Register::FieldValue<decltype(epca0en),Epca0enVal::stdCex04> stdCex04{};
            constexpr Register::FieldValue<decltype(epca0en),Epca0enVal::stdCex05> stdCex05{};
        }
        ///PCA0 Channel Enable. 
        enum class Pca0enVal {
            none=0x00000000,     ///<Disable all PCA0 channels on Crossbar 0.
            cex0=0x00000001,     ///<Enable PCA0 CEX0 on Crossbar 0.
            cex01=0x00000003,     ///<Enable PCA0 CEX0 and CEX1 on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Pca0enVal> pca0en{}; 
        namespace Pca0enValC{
            constexpr Register::FieldValue<decltype(pca0en),Pca0enVal::none> none{};
            constexpr Register::FieldValue<decltype(pca0en),Pca0enVal::cex0> cex0{};
            constexpr Register::FieldValue<decltype(pca0en),Pca0enVal::cex01> cex01{};
        }
        ///PCA1 Channel Enable. 
        enum class Pca1enVal {
            none=0x00000000,     ///<Disable all PCA1 channels on Crossbar 0.
            cex0=0x00000001,     ///<Enable PCA1 CEX0 on Crossbar 0.
            cex01=0x00000003,     ///<Enable PCA1 CEX0 and CEX1 on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Pca1enVal> pca1en{}; 
        namespace Pca1enValC{
            constexpr Register::FieldValue<decltype(pca1en),Pca1enVal::none> none{};
            constexpr Register::FieldValue<decltype(pca1en),Pca1enVal::cex0> cex0{};
            constexpr Register::FieldValue<decltype(pca1en),Pca1enVal::cex01> cex01{};
        }
        ///EPCA0 ECI Enable. 
        enum class Eeci0enVal {
            disabled=0x00000000,     ///<Disable EPCA0 ECI on Crossbar 0.
            enabled=0x00000001,     ///<Enable EPCA0 ECI on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Eeci0enVal> eeci0en{}; 
        namespace Eeci0enValC{
            constexpr Register::FieldValue<decltype(eeci0en),Eeci0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(eeci0en),Eeci0enVal::enabled> enabled{};
        }
        ///PCA0 ECI Enable. 
        enum class Eci0enVal {
            disabled=0x00000000,     ///<Disable PCA0 ECI on Crossbar 0.
            enabled=0x00000001,     ///<Enable PCA0 ECI on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Eci0enVal> eci0en{}; 
        namespace Eci0enValC{
            constexpr Register::FieldValue<decltype(eci0en),Eci0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(eci0en),Eci0enVal::enabled> enabled{};
        }
        ///PCA1 ECI Enable. 
        enum class Eci1enVal {
            disabled=0x00000000,     ///<Disable PCA1 ECI on Crossbar 0.
            enabled=0x00000001,     ///<Enable PCA1 ECI on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Eci1enVal> eci1en{}; 
        namespace Eci1enValC{
            constexpr Register::FieldValue<decltype(eci1en),Eci1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(eci1en),Eci1enVal::enabled> enabled{};
        }
        ///I2S0 TX Enable. 
        enum class I2s0txenVal {
            disabled=0x00000000,     ///<Disable I2S0 TX on Crossbar 0.
            enabled=0x00000001,     ///<Enable I2S0 TX on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,I2s0txenVal> i2s0txen{}; 
        namespace I2s0txenValC{
            constexpr Register::FieldValue<decltype(i2s0txen),I2s0txenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(i2s0txen),I2s0txenVal::enabled> enabled{};
        }
        ///I2C0 Enable. 
        enum class I2c0enVal {
            disabled=0x00000000,     ///<Disable I2C0 SDA and SCL on Crossbar 0.
            enabled=0x00000001,     ///<Enable I2C0 SDA and SCL on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,I2c0enVal> i2c0en{}; 
        namespace I2c0enValC{
            constexpr Register::FieldValue<decltype(i2c0en),I2c0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(i2c0en),I2c0enVal::enabled> enabled{};
        }
        ///Comparator 0 Synchronous Output (CMP0S) Enable. 
        enum class Cmp0senVal {
            disabled=0x00000000,     ///<Disable Comparator 0 Synchronous Output (CMP0S) on Crossbar 0.
            enabled=0x00000001,     ///<Enable Comparator 0 Synchronous Output (CMP0S) on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Cmp0senVal> cmp0sen{}; 
        namespace Cmp0senValC{
            constexpr Register::FieldValue<decltype(cmp0sen),Cmp0senVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0sen),Cmp0senVal::enabled> enabled{};
        }
        ///Comparator 0 Asynchronous Output (CMP0A) Enable. 
        enum class Cmp0aenVal {
            disabled=0x00000000,     ///<Disable Comparator 0 Asynchronous Output (CMP0A) on Crossbar 0.
            enabled=0x00000001,     ///<Enable Comparator 0 Asynchronous Output (CMP0A) on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Cmp0aenVal> cmp0aen{}; 
        namespace Cmp0aenValC{
            constexpr Register::FieldValue<decltype(cmp0aen),Cmp0aenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0aen),Cmp0aenVal::enabled> enabled{};
        }
        ///Comparator 1 Synchronous Output (CMP1S) Enable. 
        enum class Cmp1senVal {
            disabled=0x00000000,     ///<Disable Comparator 1 Synchronous Output (CMP1S) on Crossbar 0.
            enabled=0x00000001,     ///<Enable Comparator 1 Synchronous Output (CMP1S) on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Cmp1senVal> cmp1sen{}; 
        namespace Cmp1senValC{
            constexpr Register::FieldValue<decltype(cmp1sen),Cmp1senVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp1sen),Cmp1senVal::enabled> enabled{};
        }
        ///Comparator 1 Asynchronous Output (CMP1A) Enable. 
        enum class Cmp1aenVal {
            disabled=0x00000000,     ///<Disable Comparator 1 Asynchronous Output (CMP1A) on Crossbar 0.
            enabled=0x00000001,     ///<Enable Comparator 1 Asynchronous Output (CMP1A) on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Cmp1aenVal> cmp1aen{}; 
        namespace Cmp1aenValC{
            constexpr Register::FieldValue<decltype(cmp1aen),Cmp1aenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp1aen),Cmp1aenVal::enabled> enabled{};
        }
        ///TIMER0 T0CT Enable. 
        enum class Tmr0ctenVal {
            disabled=0x00000000,     ///<Disable TIMER0 CT on Crossbar 0.
            enabled=0x00000001,     ///<Enable TIMER0 CT on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Tmr0ctenVal> tmr0cten{}; 
        namespace Tmr0ctenValC{
            constexpr Register::FieldValue<decltype(tmr0cten),Tmr0ctenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tmr0cten),Tmr0ctenVal::enabled> enabled{};
        }
        ///TIMER0 T0EX Enable. 
        enum class Tmr0exenVal {
            disabled=0x00000000,     ///<Disable TIMER0 EX on Crossbar 0.
            enabled=0x00000001,     ///<Enable TIMER0 EX on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Tmr0exenVal> tmr0exen{}; 
        namespace Tmr0exenValC{
            constexpr Register::FieldValue<decltype(tmr0exen),Tmr0exenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tmr0exen),Tmr0exenVal::enabled> enabled{};
        }
        ///TIMER1 T1CT Enable. 
        enum class Tmr1ctenVal {
            disabled=0x00000000,     ///<Disable TIMER1 CT on Crossbar 0.
            enabled=0x00000001,     ///<Enable TIMER1 CT on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Tmr1ctenVal> tmr1cten{}; 
        namespace Tmr1ctenValC{
            constexpr Register::FieldValue<decltype(tmr1cten),Tmr1ctenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tmr1cten),Tmr1ctenVal::enabled> enabled{};
        }
        ///TIMER1 T1EX Enable. 
        enum class Tmr1exenVal {
            disabled=0x00000000,     ///<Disable TIMER1 EX on Crossbar 0.
            enabled=0x00000001,     ///<Enable TIMER1 EX on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Tmr1exenVal> tmr1exen{}; 
        namespace Tmr1exenValC{
            constexpr Register::FieldValue<decltype(tmr1exen),Tmr1exenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tmr1exen),Tmr1exenVal::enabled> enabled{};
        }
    }
    namespace Nonexbar0h{    ///<Crossbar 0 Control (High)
        using Addr = Register::Address<0x4002a030,0x7fffff00,0,unsigned>;
        ///UART0 Enable. 
        enum class Uart0enVal {
            disabled=0x00000000,     ///<Disable UART0 RX and TX on Crossbar 0.
            enabled=0x00000001,     ///<Enable UART0 RX and TX on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Uart0enVal> uart0en{}; 
        namespace Uart0enValC{
            constexpr Register::FieldValue<decltype(uart0en),Uart0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(uart0en),Uart0enVal::enabled> enabled{};
        }
        ///UART0 Flow Control Enable. 
        enum class Uart0fcenVal {
            disabled=0x00000000,     ///<Disable UART0 flow control on Crossbar 0.
            enabled=0x00000001,     ///<Enable UART0 flow control on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Uart0fcenVal> uart0fcen{}; 
        namespace Uart0fcenValC{
            constexpr Register::FieldValue<decltype(uart0fcen),Uart0fcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(uart0fcen),Uart0fcenVal::enabled> enabled{};
        }
        ///UART1 Enable. 
        enum class Uart1enVal {
            disabled=0x00000000,     ///<Disable UART1 RX and TX on Crossbar 0.
            enabled=0x00000001,     ///<Enable UART1 RX and TX on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Uart1enVal> uart1en{}; 
        namespace Uart1enValC{
            constexpr Register::FieldValue<decltype(uart1en),Uart1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(uart1en),Uart1enVal::enabled> enabled{};
        }
        ///SPI1 Enable. 
        enum class Spi1enVal {
            disabled=0x00000000,     ///<Disable SPI1 SCK, MISO, and MOSI on Crossbar 0.
            enabled=0x00000001,     ///<Enable SPI1 SCK, MISO, and MOSI on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Spi1enVal> spi1en{}; 
        namespace Spi1enValC{
            constexpr Register::FieldValue<decltype(spi1en),Spi1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spi1en),Spi1enVal::enabled> enabled{};
        }
        ///SPI1 NSS Pin Enable. 
        enum class Spi1nssenVal {
            disabled=0x00000000,     ///<Disable SPI1 NSS on Crossbar 0.
            enabled=0x00000001,     ///<Enable SPI1 NSS on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Spi1nssenVal> spi1nssen{}; 
        namespace Spi1nssenValC{
            constexpr Register::FieldValue<decltype(spi1nssen),Spi1nssenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spi1nssen),Spi1nssenVal::enabled> enabled{};
        }
        ///SPI2 Enable. 
        enum class Spi2enVal {
            disabled=0x00000000,     ///<Disable SPI2 SCK, MISO, and MOSI on Crossbar 0.
            enabled=0x00000001,     ///<Enable SPI2 SCK, MISO, and MOSI on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Spi2enVal> spi2en{}; 
        namespace Spi2enValC{
            constexpr Register::FieldValue<decltype(spi2en),Spi2enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spi2en),Spi2enVal::enabled> enabled{};
        }
        ///SPI2 NSS Pin Enable. 
        enum class Spi2nssenVal {
            disabled=0x00000000,     ///<Disable SPI2 NSS on Crossbar 0.
            enabled=0x00000001,     ///<Enable SPI2 NSS on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Spi2nssenVal> spi2nssen{}; 
        namespace Spi2nssenValC{
            constexpr Register::FieldValue<decltype(spi2nssen),Spi2nssenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spi2nssen),Spi2nssenVal::enabled> enabled{};
        }
        ///AHB Clock Output Enable. 
        enum class AhbenVal {
            disabled=0x00000000,     ///<Disable the AHB Clock / 16 output on Crossbar 0.
            enabled=0x00000001,     ///<Enable the AHB Clock / 16 output on Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AhbenVal> ahben{}; 
        namespace AhbenValC{
            constexpr Register::FieldValue<decltype(ahben),AhbenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ahben),AhbenVal::enabled> enabled{};
        }
        ///Crossbar 0 Enable. 
        enum class Xbar0enVal {
            disabled=0x00000000,     ///<Disable Crossbar 0.
            enabled=0x00000001,     ///<Enable Crossbar 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Xbar0enVal> xbar0en{}; 
        namespace Xbar0enValC{
            constexpr Register::FieldValue<decltype(xbar0en),Xbar0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(xbar0en),Xbar0enVal::enabled> enabled{};
        }
    }
    namespace Nonexbar1{    ///<Crossbar 1 Control
        using Addr = Register::Address<0x4002a040,0x7fc40000,0,unsigned>;
        ///SSG0 Enable. 
        enum class Ssg0enVal {
            none=0x00000000,     ///<Disable all SSG0 channels on Crossbar 1.
            ex0=0x00000001,     ///<Enable SSG0 EX0 on Crossbar 1.
            ex01=0x00000002,     ///<Enable SSG0 EX0 and EX1 on Crossbar 1.
            ex03=0x00000003,     ///<Enable SSG0 EX0, EX1, EX2, and EX3 on Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Ssg0enVal> ssg0en{}; 
        namespace Ssg0enValC{
            constexpr Register::FieldValue<decltype(ssg0en),Ssg0enVal::none> none{};
            constexpr Register::FieldValue<decltype(ssg0en),Ssg0enVal::ex0> ex0{};
            constexpr Register::FieldValue<decltype(ssg0en),Ssg0enVal::ex01> ex01{};
            constexpr Register::FieldValue<decltype(ssg0en),Ssg0enVal::ex03> ex03{};
        }
        ///Comparator 0 Synchronous Output (CMP0S) Enable. 
        enum class Cmp0senVal {
            disabled=0x00000000,     ///<Disable Comparator 0 Synchronous Output (CMP0S) on Crossbar 1.
            enabled=0x00000001,     ///<Enable Comparator 0 Synchronous Output (CMP0S) on Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Cmp0senVal> cmp0sen{}; 
        namespace Cmp0senValC{
            constexpr Register::FieldValue<decltype(cmp0sen),Cmp0senVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0sen),Cmp0senVal::enabled> enabled{};
        }
        ///Comparator 1 Synchronous Output (CMP1S) Enable. 
        enum class Cmp1senVal {
            disabled=0x00000000,     ///<Disable Comparator 1 Synchronous Output (CMP1S) on Crossbar 1.
            enabled=0x00000001,     ///<Enable Comparator 1 Synchronous Output (CMP1S) on Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Cmp1senVal> cmp1sen{}; 
        namespace Cmp1senValC{
            constexpr Register::FieldValue<decltype(cmp1sen),Cmp1senVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp1sen),Cmp1senVal::enabled> enabled{};
        }
        ///SPI1 Enable. 
        enum class Spi1enVal {
            disabled=0x00000000,     ///<Disable SPI1 SCK, MISO, and MOSI on Crossbar 1.
            enabled=0x00000001,     ///<Enable SPI1 SCK, MISO, and MOSI on Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Spi1enVal> spi1en{}; 
        namespace Spi1enValC{
            constexpr Register::FieldValue<decltype(spi1en),Spi1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spi1en),Spi1enVal::enabled> enabled{};
        }
        ///SPI1 NSS Pin Enable. 
        enum class Spi1nssenVal {
            disabled=0x00000000,     ///<Disable SPI1 NSS on Crossbar 1.
            enabled=0x00000001,     ///<Enable SPI1 NSS on Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Spi1nssenVal> spi1nssen{}; 
        namespace Spi1nssenValC{
            constexpr Register::FieldValue<decltype(spi1nssen),Spi1nssenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spi1nssen),Spi1nssenVal::enabled> enabled{};
        }
        ///RTC0 Output Enable. 
        enum class Rtc0enVal {
            disabled=0x00000000,     ///<Disable RTC0 Output on Crossbar 1.
            enabled=0x00000001,     ///<Enable RTC0 Output on Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Rtc0enVal> rtc0en{}; 
        namespace Rtc0enValC{
            constexpr Register::FieldValue<decltype(rtc0en),Rtc0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtc0en),Rtc0enVal::enabled> enabled{};
        }
        ///SPI2 Enable. 
        enum class Spi2enVal {
            disabled=0x00000000,     ///<Disable SPI2 SCK, MISO, and MOSI on Crossbar 1.
            enabled=0x00000001,     ///<Enable SPI2 SCK, MISO, and MOSI on Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Spi2enVal> spi2en{}; 
        namespace Spi2enValC{
            constexpr Register::FieldValue<decltype(spi2en),Spi2enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spi2en),Spi2enVal::enabled> enabled{};
        }
        ///SPI2 NSS Pin Enable. 
        enum class Spi2nssenVal {
            disabled=0x00000000,     ///<Disable SPI2 NSS on Crossbar 1.
            enabled=0x00000001,     ///<Enable SPI2 NSS on Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Spi2nssenVal> spi2nssen{}; 
        namespace Spi2nssenValC{
            constexpr Register::FieldValue<decltype(spi2nssen),Spi2nssenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spi2nssen),Spi2nssenVal::enabled> enabled{};
        }
        ///USART1 Enable. 
        enum class Usart1enVal {
            disabled=0x00000000,     ///<Disable USART1 RX and TX on Crossbar 1.
            enabled=0x00000001,     ///<Enable USART1 RX and TX on Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Usart1enVal> usart1en{}; 
        namespace Usart1enValC{
            constexpr Register::FieldValue<decltype(usart1en),Usart1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usart1en),Usart1enVal::enabled> enabled{};
        }
        ///USART1 Flow Control Enable. 
        enum class Usart1fcenVal {
            disabled=0x00000000,     ///<Disable USART1 flow control on Crossbar 1.
            enabled=0x00000001,     ///<Enable USART1 flow control on Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Usart1fcenVal> usart1fcen{}; 
        namespace Usart1fcenValC{
            constexpr Register::FieldValue<decltype(usart1fcen),Usart1fcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usart1fcen),Usart1fcenVal::enabled> enabled{};
        }
        ///USART1 Clock Signal Enable. 
        enum class Usart1cenVal {
            disabled=0x00000000,     ///<Disable USART1 clock on Crossbar 1.
            enabled=0x00000001,     ///<Enable USART1 clock on Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Usart1cenVal> usart1cen{}; 
        namespace Usart1cenValC{
            constexpr Register::FieldValue<decltype(usart1cen),Usart1cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usart1cen),Usart1cenVal::enabled> enabled{};
        }
        ///UART0 Enable. 
        enum class Uart0enVal {
            disabled=0x00000000,     ///<Disable UART0 RX and TX on Crossbar 1.
            enabled=0x00000001,     ///<Enable UART0 RX and TX on Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Uart0enVal> uart0en{}; 
        namespace Uart0enValC{
            constexpr Register::FieldValue<decltype(uart0en),Uart0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(uart0en),Uart0enVal::enabled> enabled{};
        }
        ///UART0 Flow Control Enable. 
        enum class Uart0fcenVal {
            disabled=0x00000000,     ///<Disable UART0 flow control on Crossbar 1.
            enabled=0x00000001,     ///<Enable UART0 flow control on Crossbar1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Uart0fcenVal> uart0fcen{}; 
        namespace Uart0fcenValC{
            constexpr Register::FieldValue<decltype(uart0fcen),Uart0fcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(uart0fcen),Uart0fcenVal::enabled> enabled{};
        }
        ///I2S0 TX Enable. 
        enum class I2s0txenVal {
            disabled=0x00000000,     ///<Disable I2S0 TX on Crossbar 1.
            enabled=0x00000001,     ///<Enable I2S0 TX on Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,I2s0txenVal> i2s0txen{}; 
        namespace I2s0txenValC{
            constexpr Register::FieldValue<decltype(i2s0txen),I2s0txenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(i2s0txen),I2s0txenVal::enabled> enabled{};
        }
        ///I2C0 Enable. 
        enum class I2c0enVal {
            disabled=0x00000000,     ///<Disable I2C0 SDA and SCL on Crossbar 1.
            enabled=0x00000001,     ///<Enable I2C0 SDA and SCL on Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,I2c0enVal> i2c0en{}; 
        namespace I2c0enValC{
            constexpr Register::FieldValue<decltype(i2c0en),I2c0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(i2c0en),I2c0enVal::enabled> enabled{};
        }
        ///UART1 Enable. 
        enum class Uart1enVal {
            disabled=0x00000000,     ///<Disable UART1 RX and TX on Crossbar 1.
            enabled=0x00000001,     ///<Enable UART1 RX and TX on Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Uart1enVal> uart1en{}; 
        namespace Uart1enValC{
            constexpr Register::FieldValue<decltype(uart1en),Uart1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(uart1en),Uart1enVal::enabled> enabled{};
        }
        ///I2S0 RX Enable. 
        enum class I2s0rxenVal {
            disabled=0x00000000,     ///<Disable I2S0 RX on Crossbar 1.
            enabled=0x00000001,     ///<Enable I2S0 RX on Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,I2s0rxenVal> i2s0rxen{}; 
        namespace I2s0rxenValC{
            constexpr Register::FieldValue<decltype(i2s0rxen),I2s0rxenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(i2s0rxen),I2s0rxenVal::enabled> enabled{};
        }
        ///LPTIMER0 Output Enable. 
        enum class Lpt0oenVal {
            disabled=0x00000000,     ///<Disable LPTIMER0 Output on Crossbar 1.
            enabled=0x00000001,     ///<Enable LPTIMER0 Output on Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Lpt0oenVal> lpt0oen{}; 
        namespace Lpt0oenValC{
            constexpr Register::FieldValue<decltype(lpt0oen),Lpt0oenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lpt0oen),Lpt0oenVal::enabled> enabled{};
        }
        ///I2C1 Enable. 
        enum class I2c1enVal {
            disabled=0x00000000,     ///<Disable I2C1 SDA and SCL on Crossbar 1.
            enabled=0x00000001,     ///<Enable I2C1 SDA and SCL on Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,I2c1enVal> i2c1en{}; 
        namespace I2c1enValC{
            constexpr Register::FieldValue<decltype(i2c1en),I2c1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(i2c1en),I2c1enVal::enabled> enabled{};
        }
        ///High Drive Kill Pin Enable. 
        enum class KillhdenVal {
            disabled=0x00000000,     ///<Disable the PB High Drive Kill Pin on Crossbar 1.
            enabled=0x00000001,     ///<Enable the PB High Drive Kill Pin on Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,KillhdenVal> killhden{}; 
        namespace KillhdenValC{
            constexpr Register::FieldValue<decltype(killhden),KillhdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(killhden),KillhdenVal::enabled> enabled{};
        }
        ///Crossbar 1 Enable. 
        enum class Xbar1enVal {
            disabled=0x00000000,     ///<Disable Crossbar 1.
            enabled=0x00000001,     ///<Enable Crossbar 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Xbar1enVal> xbar1en{}; 
        namespace Xbar1enValC{
            constexpr Register::FieldValue<decltype(xbar1en),Xbar1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(xbar1en),Xbar1enVal::enabled> enabled{};
        }
    }
    namespace Nonepbkey{    ///<Global Port Key
        using Addr = Register::Address<0x4002a050,0xffffff00,0,unsigned>;
        ///Port Bank 2, 3, and 4 Key. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
}
