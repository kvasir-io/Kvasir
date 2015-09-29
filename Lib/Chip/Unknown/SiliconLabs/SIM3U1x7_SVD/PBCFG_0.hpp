#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol0{    ///<Global Port Control 0
        using Addr = Register::Address<0x4002a000,0x60ff4040,0,unsigned>;
        ///External Interrupt 0 Pin Selection. 
        enum class int0selVal {
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
            level=0x00000000,     ///<Interrupt based on level sensitivity.
            edge=0x00000001,     ///<Interrupt based on edge sensitivity.
        };
        namespace int0mdValC{
            constexpr MPL::Value<int0mdVal,int0mdVal::level> level{};
            constexpr MPL::Value<int0mdVal,int0mdVal::edge> edge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,int0mdVal> int0md{}; 
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
            level=0x00000000,     ///<Interrupt based on level sensitivity.
            edge=0x00000001,     ///<Interrupt based on edge sensitivity.
        };
        namespace int1mdValC{
            constexpr MPL::Value<int1mdVal,int1mdVal::level> level{};
            constexpr MPL::Value<int1mdVal,int1mdVal::edge> edge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,int1mdVal> int1md{}; 
        ///External Interrupt 1 Enable. 
        enum class int1enVal {
            disabled=0x00000000,     ///<Disable external interrupt 1.
            enabled=0x00000001,     ///<Enable external interrupt 1.
        };
        namespace int1enValC{
            constexpr MPL::Value<int1enVal,int1enVal::disabled> disabled{};
            constexpr MPL::Value<int1enVal,int1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,int1enVal> int1en{}; 
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
        using Addr = Register::Address<0x4002a010,0x7f7c007c,0,unsigned>;
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
        ///EMIF <overline>BE0</overline> Pin Enable. 
        enum class emifbe0benVal {
            disabled=0x00000000,     ///<Disable the EMIF /BE0 pin.
            enabled=0x00000001,     ///<Enable the /BE0 pin if EMIFEN is also set to 1.
        };
        namespace emifbe0benValC{
            constexpr MPL::Value<emifbe0benVal,emifbe0benVal::disabled> disabled{};
            constexpr MPL::Value<emifbe0benVal,emifbe0benVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,emifbe0benVal> emifbe0ben{}; 
        ///EMIF CS1 Pin Enable. 
        enum class emifcs1enVal {
            disabled=0x00000000,     ///<Disable the EMIF CS1 pin.
            enabled=0x00000001,     ///<Enable the CS1 pin if EMIFEN is also set to 1.
        };
        namespace emifcs1enValC{
            constexpr MPL::Value<emifcs1enVal,emifcs1enVal::disabled> disabled{};
            constexpr MPL::Value<emifcs1enVal,emifcs1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,emifcs1enVal> emifcs1en{}; 
        ///EMIF Enable. 
        enum class emifenVal {
            disabled=0x00000000,     ///<Disable the EMIF pins.
            enabled=0x00000001,     ///<EMIF is enabled and pinned out.
        };
        namespace emifenValC{
            constexpr MPL::Value<emifenVal,emifenVal::disabled> disabled{};
            constexpr MPL::Value<emifenVal,emifenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,emifenVal> emifen{}; 
        ///EMIF Width. 
        enum class emifwidthVal {
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
        namespace emifwidthValC{
            constexpr MPL::Value<emifwidthVal,emifwidthVal::awidth8> awidth8{};
            constexpr MPL::Value<emifwidthVal,emifwidthVal::awidth9> awidth9{};
            constexpr MPL::Value<emifwidthVal,emifwidthVal::awidth10> awidth10{};
            constexpr MPL::Value<emifwidthVal,emifwidthVal::awidth11> awidth11{};
            constexpr MPL::Value<emifwidthVal,emifwidthVal::awidth12> awidth12{};
            constexpr MPL::Value<emifwidthVal,emifwidthVal::awidth13> awidth13{};
            constexpr MPL::Value<emifwidthVal,emifwidthVal::awidth14> awidth14{};
            constexpr MPL::Value<emifwidthVal,emifwidthVal::awidth15> awidth15{};
            constexpr MPL::Value<emifwidthVal,emifwidthVal::awidth16> awidth16{};
            constexpr MPL::Value<emifwidthVal,emifwidthVal::awidth17> awidth17{};
            constexpr MPL::Value<emifwidthVal,emifwidthVal::awidth18> awidth18{};
            constexpr MPL::Value<emifwidthVal,emifwidthVal::awidth19> awidth19{};
            constexpr MPL::Value<emifwidthVal,emifwidthVal::awidth20> awidth20{};
            constexpr MPL::Value<emifwidthVal,emifwidthVal::awidth21> awidth21{};
            constexpr MPL::Value<emifwidthVal,emifwidthVal::awidth22> awidth22{};
            constexpr MPL::Value<emifwidthVal,emifwidthVal::awidth23> awidth23{};
            constexpr MPL::Value<emifwidthVal,emifwidthVal::awidth24> awidth24{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,emifwidthVal> emifwidth{}; 
        ///Match Mode. 
        enum class matmdVal {
            pinmatch=0x00000000,     ///<Port Match registers used to provide interrupt / wake sources.
            capsenseTx=0x00000001,     ///<Port Match registers used to monitor output pin activity for Capacitive Sensing measurements.
            capsenseRx=0x00000002,     ///<Port Match registers used to monitor input pin activity for Capacitive Sensing measurements.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace matmdValC{
            constexpr MPL::Value<matmdVal,matmdVal::pinmatch> pinmatch{};
            constexpr MPL::Value<matmdVal,matmdVal::capsenseTx> capsenseTx{};
            constexpr MPL::Value<matmdVal,matmdVal::capsenseRx> capsenseRx{};
            constexpr MPL::Value<matmdVal,matmdVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,matmdVal> matmd{}; 
        ///External Regulator Reset Mode. 
        enum class evregrmdVal {
            resetOnAny=0x00000000,     ///<The pins used by the external regulator will default to digital inputs with weak pull-up enabled on any reset.
            resetOnPor=0x00000001,     ///<The pins used by the external regulator will default to digital inputs with weak pull-up enabled only on Power-On Reset. Their configured mode will be preserved through all other resets.
        };
        namespace evregrmdValC{
            constexpr MPL::Value<evregrmdVal,evregrmdVal::resetOnAny> resetOnAny{};
            constexpr MPL::Value<evregrmdVal,evregrmdVal::resetOnPor> resetOnPor{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,evregrmdVal> evregrmd{}; 
        ///Port Bank Configuration Lock. 
        enum class lockVal {
            unlocked=0x00000000,     ///<Port Bank Configuration and Control registers are unlocked.
            locked=0x00000001,     ///<The following registers are locked from write access: CONTROL1, XBAR0L, XBAR0H, XBAR1, and all PBSKIP registers.
        };
        namespace lockValC{
            constexpr MPL::Value<lockVal,lockVal::unlocked> unlocked{};
            constexpr MPL::Value<lockVal,lockVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,lockVal> lock{}; 
    }
    namespace Nonexbar0l{    ///<Crossbar 0 Control (Low)
        using Addr = Register::Address<0x4002a020,0x80003800,0,unsigned>;
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
        ///SPI0 Enable. 
        enum class spi0enVal {
            disabled=0x00000000,     ///<Disable SPI0 SCK, MISO, and MOSI on Crossbar 0.
            enabled=0x00000001,     ///<Enable SPI0 SCK, MISO, and MOSI on Crossbar 0.
        };
        namespace spi0enValC{
            constexpr MPL::Value<spi0enVal,spi0enVal::disabled> disabled{};
            constexpr MPL::Value<spi0enVal,spi0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,spi0enVal> spi0en{}; 
        ///SPI0 NSS Pin Enable. 
        enum class spi0nssenVal {
            disabled=0x00000000,     ///<Disable SPI0 NSS on Crossbar 0.
            enabled=0x00000001,     ///<Enable SPI0 NSS on Crossbar 0.
        };
        namespace spi0nssenValC{
            constexpr MPL::Value<spi0nssenVal,spi0nssenVal::disabled> disabled{};
            constexpr MPL::Value<spi0nssenVal,spi0nssenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,spi0nssenVal> spi0nssen{}; 
        ///USART1 Enable. 
        enum class usart1enVal {
            disabled=0x00000000,     ///<Disable USART1 RX and TX on Crossbar 0.
            enabled=0x00000001,     ///<Enable USART1 RX and TX on Crossbar 0.
        };
        namespace usart1enValC{
            constexpr MPL::Value<usart1enVal,usart1enVal::disabled> disabled{};
            constexpr MPL::Value<usart1enVal,usart1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,usart1enVal> usart1en{}; 
        ///USART1 Flow Control Enable. 
        enum class usart1fcenVal {
            disabled=0x00000000,     ///<Disable USART1 flow control on Crossbar 0.
            enabled=0x00000001,     ///<Enable USART1 flow control on Crossbar 0.
        };
        namespace usart1fcenValC{
            constexpr MPL::Value<usart1fcenVal,usart1fcenVal::disabled> disabled{};
            constexpr MPL::Value<usart1fcenVal,usart1fcenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,usart1fcenVal> usart1fcen{}; 
        ///USART1 Clock Signal Enable. 
        enum class usart1cenVal {
            disabled=0x00000000,     ///<Disable USART1 clock on Crossbar 0.
            enabled=0x00000001,     ///<Enable USART1 clock on Crossbar 0.
        };
        namespace usart1cenValC{
            constexpr MPL::Value<usart1cenVal,usart1cenVal::disabled> disabled{};
            constexpr MPL::Value<usart1cenVal,usart1cenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,usart1cenVal> usart1cen{}; 
        ///EPCA0 Channel Enable. 
        enum class epca0enVal {
            none=0x00000000,     ///<Disable all EPCA0 channels on Crossbar 0.
            stdCex0=0x00000001,     ///<Enable EPCA0 STD_CEX0 on Crossbar 0.
            stdCex01=0x00000002,     ///<Enable EPCA0 STD_CEX0 and STD_CEX1 on Crossbar 0.
            stdCex02=0x00000003,     ///<Enable EPCA0 STD_CEX0, STD_CEX1, and STD_CEX2 on Crossbar 0.
            stdCex03=0x00000004,     ///<Enable EPCA0 STD_CEX0, STD_CEX1, STD_CEX2, and STD_CEX3 on Crossbar 0.
            stdCex04=0x00000005,     ///<Enable EPCA0 STD_CEX0, STD_CEX1, STD_CEX2, STD_CEX3, and STD_CEX4 on Crossbar 0.
            stdCex05=0x00000006,     ///<Enable EPCA0 STD_CEX0, STD_CEX1, STD_CEX2, STD_CEX3, STD_CEX4, and STD_CEX5 on Crossbar 0.
        };
        namespace epca0enValC{
            constexpr MPL::Value<epca0enVal,epca0enVal::none> none{};
            constexpr MPL::Value<epca0enVal,epca0enVal::stdCex0> stdCex0{};
            constexpr MPL::Value<epca0enVal,epca0enVal::stdCex01> stdCex01{};
            constexpr MPL::Value<epca0enVal,epca0enVal::stdCex02> stdCex02{};
            constexpr MPL::Value<epca0enVal,epca0enVal::stdCex03> stdCex03{};
            constexpr MPL::Value<epca0enVal,epca0enVal::stdCex04> stdCex04{};
            constexpr MPL::Value<epca0enVal,epca0enVal::stdCex05> stdCex05{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,epca0enVal> epca0en{}; 
        ///PCA0 Channel Enable. 
        enum class pca0enVal {
            none=0x00000000,     ///<Disable all PCA0 channels on Crossbar 0.
            cex0=0x00000001,     ///<Enable PCA0 CEX0 on Crossbar 0.
            cex01=0x00000003,     ///<Enable PCA0 CEX0 and CEX1 on Crossbar 0.
        };
        namespace pca0enValC{
            constexpr MPL::Value<pca0enVal,pca0enVal::none> none{};
            constexpr MPL::Value<pca0enVal,pca0enVal::cex0> cex0{};
            constexpr MPL::Value<pca0enVal,pca0enVal::cex01> cex01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,pca0enVal> pca0en{}; 
        ///PCA1 Channel Enable. 
        enum class pca1enVal {
            none=0x00000000,     ///<Disable all PCA1 channels on Crossbar 0.
            cex0=0x00000001,     ///<Enable PCA1 CEX0 on Crossbar 0.
            cex01=0x00000003,     ///<Enable PCA1 CEX0 and CEX1 on Crossbar 0.
        };
        namespace pca1enValC{
            constexpr MPL::Value<pca1enVal,pca1enVal::none> none{};
            constexpr MPL::Value<pca1enVal,pca1enVal::cex0> cex0{};
            constexpr MPL::Value<pca1enVal,pca1enVal::cex01> cex01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,pca1enVal> pca1en{}; 
        ///EPCA0 ECI Enable. 
        enum class eeci0enVal {
            disabled=0x00000000,     ///<Disable EPCA0 ECI on Crossbar 0.
            enabled=0x00000001,     ///<Enable EPCA0 ECI on Crossbar 0.
        };
        namespace eeci0enValC{
            constexpr MPL::Value<eeci0enVal,eeci0enVal::disabled> disabled{};
            constexpr MPL::Value<eeci0enVal,eeci0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,eeci0enVal> eeci0en{}; 
        ///PCA0 ECI Enable. 
        enum class eci0enVal {
            disabled=0x00000000,     ///<Disable PCA0 ECI on Crossbar 0.
            enabled=0x00000001,     ///<Enable PCA0 ECI on Crossbar 0.
        };
        namespace eci0enValC{
            constexpr MPL::Value<eci0enVal,eci0enVal::disabled> disabled{};
            constexpr MPL::Value<eci0enVal,eci0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,eci0enVal> eci0en{}; 
        ///PCA1 ECI Enable. 
        enum class eci1enVal {
            disabled=0x00000000,     ///<Disable PCA1 ECI on Crossbar 0.
            enabled=0x00000001,     ///<Enable PCA1 ECI on Crossbar 0.
        };
        namespace eci1enValC{
            constexpr MPL::Value<eci1enVal,eci1enVal::disabled> disabled{};
            constexpr MPL::Value<eci1enVal,eci1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,eci1enVal> eci1en{}; 
        ///I2S0 TX Enable. 
        enum class i2s0txenVal {
            disabled=0x00000000,     ///<Disable I2S0 TX on Crossbar 0.
            enabled=0x00000001,     ///<Enable I2S0 TX on Crossbar 0.
        };
        namespace i2s0txenValC{
            constexpr MPL::Value<i2s0txenVal,i2s0txenVal::disabled> disabled{};
            constexpr MPL::Value<i2s0txenVal,i2s0txenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,i2s0txenVal> i2s0txen{}; 
        ///I2C0 Enable. 
        enum class i2c0enVal {
            disabled=0x00000000,     ///<Disable I2C0 SDA and SCL on Crossbar 0.
            enabled=0x00000001,     ///<Enable I2C0 SDA and SCL on Crossbar 0.
        };
        namespace i2c0enValC{
            constexpr MPL::Value<i2c0enVal,i2c0enVal::disabled> disabled{};
            constexpr MPL::Value<i2c0enVal,i2c0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,i2c0enVal> i2c0en{}; 
        ///Comparator 0 Synchronous Output (CMP0S) Enable. 
        enum class cmp0senVal {
            disabled=0x00000000,     ///<Disable Comparator 0 Synchronous Output (CMP0S) on Crossbar 0.
            enabled=0x00000001,     ///<Enable Comparator 0 Synchronous Output (CMP0S) on Crossbar 0.
        };
        namespace cmp0senValC{
            constexpr MPL::Value<cmp0senVal,cmp0senVal::disabled> disabled{};
            constexpr MPL::Value<cmp0senVal,cmp0senVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,cmp0senVal> cmp0sen{}; 
        ///Comparator 0 Asynchronous Output (CMP0A) Enable. 
        enum class cmp0aenVal {
            disabled=0x00000000,     ///<Disable Comparator 0 Asynchronous Output (CMP0A) on Crossbar 0.
            enabled=0x00000001,     ///<Enable Comparator 0 Asynchronous Output (CMP0A) on Crossbar 0.
        };
        namespace cmp0aenValC{
            constexpr MPL::Value<cmp0aenVal,cmp0aenVal::disabled> disabled{};
            constexpr MPL::Value<cmp0aenVal,cmp0aenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,cmp0aenVal> cmp0aen{}; 
        ///Comparator 1 Synchronous Output (CMP1S) Enable. 
        enum class cmp1senVal {
            disabled=0x00000000,     ///<Disable Comparator 1 Synchronous Output (CMP1S) on Crossbar 0.
            enabled=0x00000001,     ///<Enable Comparator 1 Synchronous Output (CMP1S) on Crossbar 0.
        };
        namespace cmp1senValC{
            constexpr MPL::Value<cmp1senVal,cmp1senVal::disabled> disabled{};
            constexpr MPL::Value<cmp1senVal,cmp1senVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,cmp1senVal> cmp1sen{}; 
        ///Comparator 1 Asynchronous Output (CMP1A) Enable. 
        enum class cmp1aenVal {
            disabled=0x00000000,     ///<Disable Comparator 1 Asynchronous Output (CMP1A) on Crossbar 0.
            enabled=0x00000001,     ///<Enable Comparator 1 Asynchronous Output (CMP1A) on Crossbar 0.
        };
        namespace cmp1aenValC{
            constexpr MPL::Value<cmp1aenVal,cmp1aenVal::disabled> disabled{};
            constexpr MPL::Value<cmp1aenVal,cmp1aenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,cmp1aenVal> cmp1aen{}; 
        ///TIMER0 T0CT Enable. 
        enum class tmr0ctenVal {
            disabled=0x00000000,     ///<Disable TIMER0 CT on Crossbar 0.
            enabled=0x00000001,     ///<Enable TIMER0 CT on Crossbar 0.
        };
        namespace tmr0ctenValC{
            constexpr MPL::Value<tmr0ctenVal,tmr0ctenVal::disabled> disabled{};
            constexpr MPL::Value<tmr0ctenVal,tmr0ctenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,tmr0ctenVal> tmr0cten{}; 
        ///TIMER0 T0EX Enable. 
        enum class tmr0exenVal {
            disabled=0x00000000,     ///<Disable TIMER0 EX on Crossbar 0.
            enabled=0x00000001,     ///<Enable TIMER0 EX on Crossbar 0.
        };
        namespace tmr0exenValC{
            constexpr MPL::Value<tmr0exenVal,tmr0exenVal::disabled> disabled{};
            constexpr MPL::Value<tmr0exenVal,tmr0exenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tmr0exenVal> tmr0exen{}; 
        ///TIMER1 T1CT Enable. 
        enum class tmr1ctenVal {
            disabled=0x00000000,     ///<Disable TIMER1 CT on Crossbar 0.
            enabled=0x00000001,     ///<Enable TIMER1 CT on Crossbar 0.
        };
        namespace tmr1ctenValC{
            constexpr MPL::Value<tmr1ctenVal,tmr1ctenVal::disabled> disabled{};
            constexpr MPL::Value<tmr1ctenVal,tmr1ctenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,tmr1ctenVal> tmr1cten{}; 
        ///TIMER1 T1EX Enable. 
        enum class tmr1exenVal {
            disabled=0x00000000,     ///<Disable TIMER1 EX on Crossbar 0.
            enabled=0x00000001,     ///<Enable TIMER1 EX on Crossbar 0.
        };
        namespace tmr1exenValC{
            constexpr MPL::Value<tmr1exenVal,tmr1exenVal::disabled> disabled{};
            constexpr MPL::Value<tmr1exenVal,tmr1exenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,tmr1exenVal> tmr1exen{}; 
    }
    namespace Nonexbar0h{    ///<Crossbar 0 Control (High)
        using Addr = Register::Address<0x4002a030,0x7fffff00,0,unsigned>;
        ///UART0 Enable. 
        enum class uart0enVal {
            disabled=0x00000000,     ///<Disable UART0 RX and TX on Crossbar 0.
            enabled=0x00000001,     ///<Enable UART0 RX and TX on Crossbar 0.
        };
        namespace uart0enValC{
            constexpr MPL::Value<uart0enVal,uart0enVal::disabled> disabled{};
            constexpr MPL::Value<uart0enVal,uart0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,uart0enVal> uart0en{}; 
        ///UART0 Flow Control Enable. 
        enum class uart0fcenVal {
            disabled=0x00000000,     ///<Disable UART0 flow control on Crossbar 0.
            enabled=0x00000001,     ///<Enable UART0 flow control on Crossbar 0.
        };
        namespace uart0fcenValC{
            constexpr MPL::Value<uart0fcenVal,uart0fcenVal::disabled> disabled{};
            constexpr MPL::Value<uart0fcenVal,uart0fcenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,uart0fcenVal> uart0fcen{}; 
        ///UART1 Enable. 
        enum class uart1enVal {
            disabled=0x00000000,     ///<Disable UART1 RX and TX on Crossbar 0.
            enabled=0x00000001,     ///<Enable UART1 RX and TX on Crossbar 0.
        };
        namespace uart1enValC{
            constexpr MPL::Value<uart1enVal,uart1enVal::disabled> disabled{};
            constexpr MPL::Value<uart1enVal,uart1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,uart1enVal> uart1en{}; 
        ///SPI1 Enable. 
        enum class spi1enVal {
            disabled=0x00000000,     ///<Disable SPI1 SCK, MISO, and MOSI on Crossbar 0.
            enabled=0x00000001,     ///<Enable SPI1 SCK, MISO, and MOSI on Crossbar 0.
        };
        namespace spi1enValC{
            constexpr MPL::Value<spi1enVal,spi1enVal::disabled> disabled{};
            constexpr MPL::Value<spi1enVal,spi1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,spi1enVal> spi1en{}; 
        ///SPI1 NSS Pin Enable. 
        enum class spi1nssenVal {
            disabled=0x00000000,     ///<Disable SPI1 NSS on Crossbar 0.
            enabled=0x00000001,     ///<Enable SPI1 NSS on Crossbar 0.
        };
        namespace spi1nssenValC{
            constexpr MPL::Value<spi1nssenVal,spi1nssenVal::disabled> disabled{};
            constexpr MPL::Value<spi1nssenVal,spi1nssenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,spi1nssenVal> spi1nssen{}; 
        ///SPI2 Enable. 
        enum class spi2enVal {
            disabled=0x00000000,     ///<Disable SPI2 SCK, MISO, and MOSI on Crossbar 0.
            enabled=0x00000001,     ///<Enable SPI2 SCK, MISO, and MOSI on Crossbar 0.
        };
        namespace spi2enValC{
            constexpr MPL::Value<spi2enVal,spi2enVal::disabled> disabled{};
            constexpr MPL::Value<spi2enVal,spi2enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,spi2enVal> spi2en{}; 
        ///SPI2 NSS Pin Enable. 
        enum class spi2nssenVal {
            disabled=0x00000000,     ///<Disable SPI2 NSS on Crossbar 0.
            enabled=0x00000001,     ///<Enable SPI2 NSS on Crossbar 0.
        };
        namespace spi2nssenValC{
            constexpr MPL::Value<spi2nssenVal,spi2nssenVal::disabled> disabled{};
            constexpr MPL::Value<spi2nssenVal,spi2nssenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,spi2nssenVal> spi2nssen{}; 
        ///AHB Clock Output Enable. 
        enum class ahbenVal {
            disabled=0x00000000,     ///<Disable the AHB Clock / 16 output on Crossbar 0.
            enabled=0x00000001,     ///<Enable the AHB Clock / 16 output on Crossbar 0.
        };
        namespace ahbenValC{
            constexpr MPL::Value<ahbenVal,ahbenVal::disabled> disabled{};
            constexpr MPL::Value<ahbenVal,ahbenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ahbenVal> ahben{}; 
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
    namespace Nonexbar1{    ///<Crossbar 1 Control
        using Addr = Register::Address<0x4002a040,0x7fc40000,0,unsigned>;
        ///SSG0 Enable. 
        enum class ssg0enVal {
            none=0x00000000,     ///<Disable all SSG0 channels on Crossbar 1.
            ex0=0x00000001,     ///<Enable SSG0 EX0 on Crossbar 1.
            ex01=0x00000002,     ///<Enable SSG0 EX0 and EX1 on Crossbar 1.
            ex03=0x00000003,     ///<Enable SSG0 EX0, EX1, EX2, and EX3 on Crossbar 1.
        };
        namespace ssg0enValC{
            constexpr MPL::Value<ssg0enVal,ssg0enVal::none> none{};
            constexpr MPL::Value<ssg0enVal,ssg0enVal::ex0> ex0{};
            constexpr MPL::Value<ssg0enVal,ssg0enVal::ex01> ex01{};
            constexpr MPL::Value<ssg0enVal,ssg0enVal::ex03> ex03{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ssg0enVal> ssg0en{}; 
        ///Comparator 0 Synchronous Output (CMP0S) Enable. 
        enum class cmp0senVal {
            disabled=0x00000000,     ///<Disable Comparator 0 Synchronous Output (CMP0S) on Crossbar 1.
            enabled=0x00000001,     ///<Enable Comparator 0 Synchronous Output (CMP0S) on Crossbar 1.
        };
        namespace cmp0senValC{
            constexpr MPL::Value<cmp0senVal,cmp0senVal::disabled> disabled{};
            constexpr MPL::Value<cmp0senVal,cmp0senVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cmp0senVal> cmp0sen{}; 
        ///Comparator 1 Synchronous Output (CMP1S) Enable. 
        enum class cmp1senVal {
            disabled=0x00000000,     ///<Disable Comparator 1 Synchronous Output (CMP1S) on Crossbar 1.
            enabled=0x00000001,     ///<Enable Comparator 1 Synchronous Output (CMP1S) on Crossbar 1.
        };
        namespace cmp1senValC{
            constexpr MPL::Value<cmp1senVal,cmp1senVal::disabled> disabled{};
            constexpr MPL::Value<cmp1senVal,cmp1senVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cmp1senVal> cmp1sen{}; 
        ///SPI1 Enable. 
        enum class spi1enVal {
            disabled=0x00000000,     ///<Disable SPI1 SCK, MISO, and MOSI on Crossbar 1.
            enabled=0x00000001,     ///<Enable SPI1 SCK, MISO, and MOSI on Crossbar 1.
        };
        namespace spi1enValC{
            constexpr MPL::Value<spi1enVal,spi1enVal::disabled> disabled{};
            constexpr MPL::Value<spi1enVal,spi1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,spi1enVal> spi1en{}; 
        ///SPI1 NSS Pin Enable. 
        enum class spi1nssenVal {
            disabled=0x00000000,     ///<Disable SPI1 NSS on Crossbar 1.
            enabled=0x00000001,     ///<Enable SPI1 NSS on Crossbar 1.
        };
        namespace spi1nssenValC{
            constexpr MPL::Value<spi1nssenVal,spi1nssenVal::disabled> disabled{};
            constexpr MPL::Value<spi1nssenVal,spi1nssenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,spi1nssenVal> spi1nssen{}; 
        ///RTC0 Output Enable. 
        enum class rtc0enVal {
            disabled=0x00000000,     ///<Disable RTC0 Output on Crossbar 1.
            enabled=0x00000001,     ///<Enable RTC0 Output on Crossbar 1.
        };
        namespace rtc0enValC{
            constexpr MPL::Value<rtc0enVal,rtc0enVal::disabled> disabled{};
            constexpr MPL::Value<rtc0enVal,rtc0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rtc0enVal> rtc0en{}; 
        ///SPI2 Enable. 
        enum class spi2enVal {
            disabled=0x00000000,     ///<Disable SPI2 SCK, MISO, and MOSI on Crossbar 1.
            enabled=0x00000001,     ///<Enable SPI2 SCK, MISO, and MOSI on Crossbar 1.
        };
        namespace spi2enValC{
            constexpr MPL::Value<spi2enVal,spi2enVal::disabled> disabled{};
            constexpr MPL::Value<spi2enVal,spi2enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,spi2enVal> spi2en{}; 
        ///SPI2 NSS Pin Enable. 
        enum class spi2nssenVal {
            disabled=0x00000000,     ///<Disable SPI2 NSS on Crossbar 1.
            enabled=0x00000001,     ///<Enable SPI2 NSS on Crossbar 1.
        };
        namespace spi2nssenValC{
            constexpr MPL::Value<spi2nssenVal,spi2nssenVal::disabled> disabled{};
            constexpr MPL::Value<spi2nssenVal,spi2nssenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,spi2nssenVal> spi2nssen{}; 
        ///USART1 Enable. 
        enum class usart1enVal {
            disabled=0x00000000,     ///<Disable USART1 RX and TX on Crossbar 1.
            enabled=0x00000001,     ///<Enable USART1 RX and TX on Crossbar 1.
        };
        namespace usart1enValC{
            constexpr MPL::Value<usart1enVal,usart1enVal::disabled> disabled{};
            constexpr MPL::Value<usart1enVal,usart1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,usart1enVal> usart1en{}; 
        ///USART1 Flow Control Enable. 
        enum class usart1fcenVal {
            disabled=0x00000000,     ///<Disable USART1 flow control on Crossbar 1.
            enabled=0x00000001,     ///<Enable USART1 flow control on Crossbar 1.
        };
        namespace usart1fcenValC{
            constexpr MPL::Value<usart1fcenVal,usart1fcenVal::disabled> disabled{};
            constexpr MPL::Value<usart1fcenVal,usart1fcenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,usart1fcenVal> usart1fcen{}; 
        ///USART1 Clock Signal Enable. 
        enum class usart1cenVal {
            disabled=0x00000000,     ///<Disable USART1 clock on Crossbar 1.
            enabled=0x00000001,     ///<Enable USART1 clock on Crossbar 1.
        };
        namespace usart1cenValC{
            constexpr MPL::Value<usart1cenVal,usart1cenVal::disabled> disabled{};
            constexpr MPL::Value<usart1cenVal,usart1cenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,usart1cenVal> usart1cen{}; 
        ///UART0 Enable. 
        enum class uart0enVal {
            disabled=0x00000000,     ///<Disable UART0 RX and TX on Crossbar 1.
            enabled=0x00000001,     ///<Enable UART0 RX and TX on Crossbar 1.
        };
        namespace uart0enValC{
            constexpr MPL::Value<uart0enVal,uart0enVal::disabled> disabled{};
            constexpr MPL::Value<uart0enVal,uart0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,uart0enVal> uart0en{}; 
        ///UART0 Flow Control Enable. 
        enum class uart0fcenVal {
            disabled=0x00000000,     ///<Disable UART0 flow control on Crossbar 1.
            enabled=0x00000001,     ///<Enable UART0 flow control on Crossbar1.
        };
        namespace uart0fcenValC{
            constexpr MPL::Value<uart0fcenVal,uart0fcenVal::disabled> disabled{};
            constexpr MPL::Value<uart0fcenVal,uart0fcenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,uart0fcenVal> uart0fcen{}; 
        ///I2S0 TX Enable. 
        enum class i2s0txenVal {
            disabled=0x00000000,     ///<Disable I2S0 TX on Crossbar 1.
            enabled=0x00000001,     ///<Enable I2S0 TX on Crossbar 1.
        };
        namespace i2s0txenValC{
            constexpr MPL::Value<i2s0txenVal,i2s0txenVal::disabled> disabled{};
            constexpr MPL::Value<i2s0txenVal,i2s0txenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,i2s0txenVal> i2s0txen{}; 
        ///I2C0 Enable. 
        enum class i2c0enVal {
            disabled=0x00000000,     ///<Disable I2C0 SDA and SCL on Crossbar 1.
            enabled=0x00000001,     ///<Enable I2C0 SDA and SCL on Crossbar 1.
        };
        namespace i2c0enValC{
            constexpr MPL::Value<i2c0enVal,i2c0enVal::disabled> disabled{};
            constexpr MPL::Value<i2c0enVal,i2c0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,i2c0enVal> i2c0en{}; 
        ///UART1 Enable. 
        enum class uart1enVal {
            disabled=0x00000000,     ///<Disable UART1 RX and TX on Crossbar 1.
            enabled=0x00000001,     ///<Enable UART1 RX and TX on Crossbar 1.
        };
        namespace uart1enValC{
            constexpr MPL::Value<uart1enVal,uart1enVal::disabled> disabled{};
            constexpr MPL::Value<uart1enVal,uart1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,uart1enVal> uart1en{}; 
        ///I2S0 RX Enable. 
        enum class i2s0rxenVal {
            disabled=0x00000000,     ///<Disable I2S0 RX on Crossbar 1.
            enabled=0x00000001,     ///<Enable I2S0 RX on Crossbar 1.
        };
        namespace i2s0rxenValC{
            constexpr MPL::Value<i2s0rxenVal,i2s0rxenVal::disabled> disabled{};
            constexpr MPL::Value<i2s0rxenVal,i2s0rxenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,i2s0rxenVal> i2s0rxen{}; 
        ///LPTIMER0 Output Enable. 
        enum class lpt0oenVal {
            disabled=0x00000000,     ///<Disable LPTIMER0 Output on Crossbar 1.
            enabled=0x00000001,     ///<Enable LPTIMER0 Output on Crossbar 1.
        };
        namespace lpt0oenValC{
            constexpr MPL::Value<lpt0oenVal,lpt0oenVal::disabled> disabled{};
            constexpr MPL::Value<lpt0oenVal,lpt0oenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,lpt0oenVal> lpt0oen{}; 
        ///I2C1 Enable. 
        enum class i2c1enVal {
            disabled=0x00000000,     ///<Disable I2C1 SDA and SCL on Crossbar 1.
            enabled=0x00000001,     ///<Enable I2C1 SDA and SCL on Crossbar 1.
        };
        namespace i2c1enValC{
            constexpr MPL::Value<i2c1enVal,i2c1enVal::disabled> disabled{};
            constexpr MPL::Value<i2c1enVal,i2c1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,i2c1enVal> i2c1en{}; 
        ///High Drive Kill Pin Enable. 
        enum class killhdenVal {
            disabled=0x00000000,     ///<Disable the PB High Drive Kill Pin on Crossbar 1.
            enabled=0x00000001,     ///<Enable the PB High Drive Kill Pin on Crossbar 1.
        };
        namespace killhdenValC{
            constexpr MPL::Value<killhdenVal,killhdenVal::disabled> disabled{};
            constexpr MPL::Value<killhdenVal,killhdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,killhdenVal> killhden{}; 
        ///Crossbar 1 Enable. 
        enum class xbar1enVal {
            disabled=0x00000000,     ///<Disable Crossbar 1.
            enabled=0x00000001,     ///<Enable Crossbar 1.
        };
        namespace xbar1enValC{
            constexpr MPL::Value<xbar1enVal,xbar1enVal::disabled> disabled{};
            constexpr MPL::Value<xbar1enVal,xbar1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,xbar1enVal> xbar1en{}; 
    }
    namespace Nonepbkey{    ///<Global Port Key
        using Addr = Register::Address<0x4002a050,0xffffff00,0,unsigned>;
        ///Port Bank 2, 3, and 4 Key. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
}
