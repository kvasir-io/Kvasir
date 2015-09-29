#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial Communication Interface
    namespace Uart0Bdh{    ///<UART Baud Rate Registers:High
        using Addr = Register::Address<0x4006a000,0xffffff20,0,unsigned char>;
        ///UART Baud Rate Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sbr{}; 
        ///RxD Input Active Edge Interrupt Enable
        enum class rxedgieVal {
            v0=0x00000000,     ///<Hardware interrupts from RXEDGIF disabled (use polling).
            v1=0x00000001,     ///<RXEDGIF interrupt request enabled.
        };
        namespace rxedgieValC{
            constexpr MPL::Value<rxedgieVal,rxedgieVal::v0> v0{};
            constexpr MPL::Value<rxedgieVal,rxedgieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rxedgieVal> rxedgie{}; 
        ///LIN Break Detect Interrupt Enable
        enum class lbkdieVal {
            v0=0x00000000,     ///<LBKDIF interrupt requests disabled.
            v1=0x00000001,     ///<LBKDIF interrupt requests enabled.
        };
        namespace lbkdieValC{
            constexpr MPL::Value<lbkdieVal,lbkdieVal::v0> v0{};
            constexpr MPL::Value<lbkdieVal,lbkdieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lbkdieVal> lbkdie{}; 
    }
    namespace Uart0Bdl{    ///<UART Baud Rate Registers: Low
        using Addr = Register::Address<0x4006a001,0xffffff00,0,unsigned char>;
        ///UART Baud Rate Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sbr{}; 
    }
    namespace Uart0C1{    ///<UART Control Register 1
        using Addr = Register::Address<0x4006a002,0xffffff00,0,unsigned char>;
        ///Parity Type
        enum class ptVal {
            v0=0x00000000,     ///<Even parity.
            v1=0x00000001,     ///<Odd parity.
        };
        namespace ptValC{
            constexpr MPL::Value<ptVal,ptVal::v0> v0{};
            constexpr MPL::Value<ptVal,ptVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ptVal> pt{}; 
        ///Parity Enable
        enum class peVal {
            v0=0x00000000,     ///<Parity function disabled.
            v1=0x00000001,     ///<Parity function enabled.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Idle Line Type Select
        enum class iltVal {
            v0=0x00000000,     ///<Idle character bit count starts after start bit.
            v1=0x00000001,     ///<Idle character bit count starts after stop bit.
        };
        namespace iltValC{
            constexpr MPL::Value<iltVal,iltVal::v0> v0{};
            constexpr MPL::Value<iltVal,iltVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,iltVal> ilt{}; 
        ///Receiver Wakeup Method Select
        enum class wakeVal {
            v0=0x00000000,     ///<Idle-line wakeup.
            v1=0x00000001,     ///<Address-mark wakeup.
        };
        namespace wakeValC{
            constexpr MPL::Value<wakeVal,wakeVal::v0> v0{};
            constexpr MPL::Value<wakeVal,wakeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,wakeVal> wake{}; 
        ///9-bit or 8-bit Mode Select
        enum class mVal {
            v0=0x00000000,     ///<Normal - start + 8 data bits (MSB/LSB first as determined by MSBF) + stop.
            v1=0x00000001,     ///<Use - start + 9 data bits (MSB/LSB first as determined by MSBF) + stop.
        };
        namespace mValC{
            constexpr MPL::Value<mVal,mVal::v0> v0{};
            constexpr MPL::Value<mVal,mVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mVal> m{}; 
        ///Receiver Source Select
        enum class rsrcVal {
            v0=0x00000000,     ///<Selects internal loop back mode and receiver input is internally connected to transmitter output.
            v1=0x00000001,     ///<Single-wire UART mode where the receiver input is connected to the transmit pin input signal.
        };
        namespace rsrcValC{
            constexpr MPL::Value<rsrcVal,rsrcVal::v0> v0{};
            constexpr MPL::Value<rsrcVal,rsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rsrcVal> rsrc{}; 
        ///UART Stops in Wait Mode
        enum class uartswaiVal {
            v0=0x00000000,     ///<UART clock continues to run in wait mode.
            v1=0x00000001,     ///<UART clock freezes while CPU is in wait mode.
        };
        namespace uartswaiValC{
            constexpr MPL::Value<uartswaiVal,uartswaiVal::v0> v0{};
            constexpr MPL::Value<uartswaiVal,uartswaiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,uartswaiVal> uartswai{}; 
        ///Loop Mode Select
        enum class loopsVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Loop mode where transmitter output is internally connected to receiver input. The receiver input is determined by the RSRC bit.
        };
        namespace loopsValC{
            constexpr MPL::Value<loopsVal,loopsVal::v0> v0{};
            constexpr MPL::Value<loopsVal,loopsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,loopsVal> loops{}; 
    }
    namespace Uart0C2{    ///<UART Control Register 2
        using Addr = Register::Address<0x4006a003,0xffffff00,0,unsigned char>;
        ///Send Break
        enum class sbkVal {
            v0=0x00000000,     ///<Normal transmitter operation.
            v1=0x00000001,     ///<Queue break character(s) to be sent.
        };
        namespace sbkValC{
            constexpr MPL::Value<sbkVal,sbkVal::v0> v0{};
            constexpr MPL::Value<sbkVal,sbkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,sbkVal> sbk{}; 
        ///Receiver Wakeup Control
        enum class rwuVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<RWU enables the wakeup function and inhibits further receiver interrupt requests. Normally, hardware wakes the receiver by automatically clearing RWU.
        };
        namespace rwuValC{
            constexpr MPL::Value<rwuVal,rwuVal::v0> v0{};
            constexpr MPL::Value<rwuVal,rwuVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rwuVal> rwu{}; 
        ///Receiver Enable
        enum class reVal {
            v0=0x00000000,     ///<Receiver off.
            v1=0x00000001,     ///<Receiver on.
        };
        namespace reValC{
            constexpr MPL::Value<reVal,reVal::v0> v0{};
            constexpr MPL::Value<reVal,reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,reVal> re{}; 
        ///Transmitter Enable
        enum class teVal {
            v0=0x00000000,     ///<Transmitter off.
            v1=0x00000001,     ///<Transmitter on.
        };
        namespace teValC{
            constexpr MPL::Value<teVal,teVal::v0> v0{};
            constexpr MPL::Value<teVal,teVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,teVal> te{}; 
        ///Idle Line Interrupt Enable
        enum class ilieVal {
            v0=0x00000000,     ///<IDLE interrupt requests disabled.
            v1=0x00000001,     ///<IDLE interrupt requests enabled.
        };
        namespace ilieValC{
            constexpr MPL::Value<ilieVal,ilieVal::v0> v0{};
            constexpr MPL::Value<ilieVal,ilieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ilieVal> ilie{}; 
        ///Receiver Full Interrupt or DMA Transfer Enable
        enum class rieVal {
            v0=0x00000000,     ///<RDRF interrupt and DMA transfer requests disabled.
            v1=0x00000001,     ///<RDRF interrupt or DMA transfer requests enabled
        };
        namespace rieValC{
            constexpr MPL::Value<rieVal,rieVal::v0> v0{};
            constexpr MPL::Value<rieVal,rieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rieVal> rie{}; 
        ///Transmission Complete Interrupt Enable
        enum class tcieVal {
            v0=0x00000000,     ///<TC interrupt requests disabled.
            v1=0x00000001,     ///<TC interrupt requests enabled.
        };
        namespace tcieValC{
            constexpr MPL::Value<tcieVal,tcieVal::v0> v0{};
            constexpr MPL::Value<tcieVal,tcieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,tcieVal> tcie{}; 
        ///Transmitter Interrupt or DMA Transfer Enable.
        enum class tieVal {
            v0=0x00000000,     ///<TDRE interrupt and DMA transfer requests disabled.
            v1=0x00000001,     ///<TDRE interrupt or DMA transfer requests enabled.
        };
        namespace tieValC{
            constexpr MPL::Value<tieVal,tieVal::v0> v0{};
            constexpr MPL::Value<tieVal,tieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tieVal> tie{}; 
    }
    namespace Uart0S1{    ///<UART Status Register 1
        using Addr = Register::Address<0x4006a004,0xffffff00,0,unsigned char>;
        ///Parity Error Flag
        enum class pfVal {
            v0=0x00000000,     ///<No parity error has been detected since the last time this flag was cleared. If the receive buffer has a depth greater than 1 then there may be data in the receive buffer what was received with a parity error.
            v1=0x00000001,     ///<At least one dataword was received with a parity error since the last time this flag was cleared.
        };
        namespace pfValC{
            constexpr MPL::Value<pfVal,pfVal::v0> v0{};
            constexpr MPL::Value<pfVal,pfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pfVal> pf{}; 
        ///Framing Error Flag
        enum class feVal {
            v0=0x00000000,     ///<No framing error detected.
            v1=0x00000001,     ///<Framing error.
        };
        namespace feValC{
            constexpr MPL::Value<feVal,feVal::v0> v0{};
            constexpr MPL::Value<feVal,feVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,feVal> fe{}; 
        ///Noise Flag
        enum class nfVal {
            v0=0x00000000,     ///<No noise detected since the last time this flag was cleared. If the receive buffer has a depth greater than 1 then there may be data in the receiver buffer that was received with noise.
            v1=0x00000001,     ///<At least one dataword was received with noise detected since the last time the flag was cleared.
        };
        namespace nfValC{
            constexpr MPL::Value<nfVal,nfVal::v0> v0{};
            constexpr MPL::Value<nfVal,nfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,nfVal> nf{}; 
        ///Receiver Overrun Flag
        enum class or_Val {
            v0=0x00000000,     ///<No overrun has occurred since the last time the flag was cleared.
            v1=0x00000001,     ///<Overrun has occurred or the overrun flag has not been cleared since the last overrun occured.
        };
        namespace or_ValC{
            constexpr MPL::Value<or_Val,or_Val::v0> v0{};
            constexpr MPL::Value<or_Val,or_Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,or_Val> or_{}; 
        ///Idle Line Flag
        enum class idleVal {
            v0=0x00000000,     ///<Receiver input is either active now or has never become active since the IDLE flag was last cleared.
            v1=0x00000001,     ///<Receiver input has become idle or the flag has not been cleared since it last asserted.
        };
        namespace idleValC{
            constexpr MPL::Value<idleVal,idleVal::v0> v0{};
            constexpr MPL::Value<idleVal,idleVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,idleVal> idle{}; 
        ///Receive Data Register Full Flag
        enum class rdrfVal {
            v0=0x00000000,     ///<The number of datawords in the receive buffer is less than the number indicated by RXWATER.
            v1=0x00000001,     ///<The number of datawords in the receive buffer is equal to or greater than the number indicated by RXWATER at some point in time since this flag was last cleared.
        };
        namespace rdrfValC{
            constexpr MPL::Value<rdrfVal,rdrfVal::v0> v0{};
            constexpr MPL::Value<rdrfVal,rdrfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rdrfVal> rdrf{}; 
        ///Transmit Complete Flag
        enum class tcVal {
            v0=0x00000000,     ///<Transmitter active (sending data, a preamble, or a break).
            v1=0x00000001,     ///<Transmitter idle (transmission activity complete).
        };
        namespace tcValC{
            constexpr MPL::Value<tcVal,tcVal::v0> v0{};
            constexpr MPL::Value<tcVal,tcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,tcVal> tc{}; 
        ///Transmit Data Register Empty Flag
        enum class tdreVal {
            v0=0x00000000,     ///<The amount of data in the transmit buffer is greater than the value indicated by TWFIFO[TXWATER].
            v1=0x00000001,     ///<The amount of data in the transmit buffer is less than or equal to the value indicated by TWFIFO[TXWATER] at some point in time since the flag has been cleared.
        };
        namespace tdreValC{
            constexpr MPL::Value<tdreVal,tdreVal::v0> v0{};
            constexpr MPL::Value<tdreVal,tdreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tdreVal> tdre{}; 
    }
    namespace Uart0S2{    ///<UART Status Register 2
        using Addr = Register::Address<0x4006a005,0xffffff00,0,unsigned char>;
        ///Receiver Active Flag
        enum class rafVal {
            v0=0x00000000,     ///<UART receiver idle/inactive waiting for a start bit.
            v1=0x00000001,     ///<UART receiver active (RxD input not idle).
        };
        namespace rafValC{
            constexpr MPL::Value<rafVal,rafVal::v0> v0{};
            constexpr MPL::Value<rafVal,rafVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rafVal> raf{}; 
        ///LIN Break Detection Enable
        enum class lbkdeVal {
            v0=0x00000000,     ///<Break character is detected at length of 10 bit times (C1[M] = 0), 11 (C1[M] = 1 and C4[M10] = 0), or 12 (C1[M] = 1, C4[M10] = 1, and S1[PE] = 1).
            v1=0x00000001,     ///<Break character is detected at length of 11 bits times (if C1[M] = 0 or 12 bits time (if C1[M] = 1).
        };
        namespace lbkdeValC{
            constexpr MPL::Value<lbkdeVal,lbkdeVal::v0> v0{};
            constexpr MPL::Value<lbkdeVal,lbkdeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,lbkdeVal> lbkde{}; 
        ///Break Transmit Character Length
        enum class brk13Val {
            v0=0x00000000,     ///<Break character is 10, 11, or 12 bits long.
            v1=0x00000001,     ///<Break character is 13 or 14 bits long.
        };
        namespace brk13ValC{
            constexpr MPL::Value<brk13Val,brk13Val::v0> v0{};
            constexpr MPL::Value<brk13Val,brk13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,brk13Val> brk13{}; 
        ///Receive Wakeup Idle Detect
        enum class rwuidVal {
            v0=0x00000000,     ///<The S1[IDLE] bit is not set upon detection of an idle character.
            v1=0x00000001,     ///<The S1[IDLE] bit is set upon detection of an idle character.
        };
        namespace rwuidValC{
            constexpr MPL::Value<rwuidVal,rwuidVal::v0> v0{};
            constexpr MPL::Value<rwuidVal,rwuidVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rwuidVal> rwuid{}; 
        ///Receive Data Inversion
        enum class rxinvVal {
            v0=0x00000000,     ///<Receive data is not inverted.
            v1=0x00000001,     ///<Receive data is inverted.
        };
        namespace rxinvValC{
            constexpr MPL::Value<rxinvVal,rxinvVal::v0> v0{};
            constexpr MPL::Value<rxinvVal,rxinvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rxinvVal> rxinv{}; 
        ///Most Significant Bit First
        enum class msbfVal {
            v0=0x00000000,     ///<LSB (bit0) is the first bit that is transmitted following the start bit. Further, the first bit received after the start bit is identified as bit0.
            v1=0x00000001,     ///<MSB (bit8, bit7 or bit6) is the first bit that is transmitted following the start bit depending on the setting of C1[M] and C1[PE]. Further, the first bit received after the start bit is identified as bit8, bit7 or bit6 depending on the setting of C1[M] and C1[PE].
        };
        namespace msbfValC{
            constexpr MPL::Value<msbfVal,msbfVal::v0> v0{};
            constexpr MPL::Value<msbfVal,msbfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,msbfVal> msbf{}; 
        ///RxD Pin Active Edge Interrupt Flag
        enum class rxedgifVal {
            v0=0x00000000,     ///<No active edge on the receive pin has occurred.
            v1=0x00000001,     ///<An active edge on the receive pin has occurred.
        };
        namespace rxedgifValC{
            constexpr MPL::Value<rxedgifVal,rxedgifVal::v0> v0{};
            constexpr MPL::Value<rxedgifVal,rxedgifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rxedgifVal> rxedgif{}; 
        ///LIN Break Detect Interrupt Flag
        enum class lbkdifVal {
            v0=0x00000000,     ///<No LIN break character has been detected.
            v1=0x00000001,     ///<LIN break character has been detected.
        };
        namespace lbkdifValC{
            constexpr MPL::Value<lbkdifVal,lbkdifVal::v0> v0{};
            constexpr MPL::Value<lbkdifVal,lbkdifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lbkdifVal> lbkdif{}; 
    }
    namespace Uart0C3{    ///<UART Control Register 3
        using Addr = Register::Address<0x4006a006,0xffffff00,0,unsigned char>;
        ///Parity Error Interrupt Enable
        enum class peieVal {
            v0=0x00000000,     ///<PF interrupt requests are disabled.
            v1=0x00000001,     ///<PF interrupt requests are enabled.
        };
        namespace peieValC{
            constexpr MPL::Value<peieVal,peieVal::v0> v0{};
            constexpr MPL::Value<peieVal,peieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,peieVal> peie{}; 
        ///Framing Error Interrupt Enable
        enum class feieVal {
            v0=0x00000000,     ///<FE interrupt requests are disabled.
            v1=0x00000001,     ///<FE interrupt requests are enabled.
        };
        namespace feieValC{
            constexpr MPL::Value<feieVal,feieVal::v0> v0{};
            constexpr MPL::Value<feieVal,feieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,feieVal> feie{}; 
        ///Noise Error Interrupt Enable
        enum class neieVal {
            v0=0x00000000,     ///<NF interrupt requests are disabled.
            v1=0x00000001,     ///<NF interrupt requests are enabled.
        };
        namespace neieValC{
            constexpr MPL::Value<neieVal,neieVal::v0> v0{};
            constexpr MPL::Value<neieVal,neieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,neieVal> neie{}; 
        ///Overrun Error Interrupt Enable
        enum class orieVal {
            v0=0x00000000,     ///<OR interrupts are disabled.
            v1=0x00000001,     ///<OR interrupt requests are enabled.
        };
        namespace orieValC{
            constexpr MPL::Value<orieVal,orieVal::v0> v0{};
            constexpr MPL::Value<orieVal,orieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,orieVal> orie{}; 
        ///Transmit Data Inversion.
        enum class txinvVal {
            v0=0x00000000,     ///<Transmit data is not inverted.
            v1=0x00000001,     ///<Transmit data is inverted.
        };
        namespace txinvValC{
            constexpr MPL::Value<txinvVal,txinvVal::v0> v0{};
            constexpr MPL::Value<txinvVal,txinvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,txinvVal> txinv{}; 
        ///Transmitter Pin Data Direction in Single-Wire mode
        enum class txdirVal {
            v0=0x00000000,     ///<TXD pin is an input in single-wire mode.
            v1=0x00000001,     ///<TXD pin is an output in single-wire mode.
        };
        namespace txdirValC{
            constexpr MPL::Value<txdirVal,txdirVal::v0> v0{};
            constexpr MPL::Value<txdirVal,txdirVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,txdirVal> txdir{}; 
        ///Transmit Bit 8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> t8{}; 
        ///Received Bit 8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> r8{}; 
    }
    namespace Uart0D{    ///<UART Data Register
        using Addr = Register::Address<0x4006a007,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rt{}; 
    }
    namespace Uart0Ma1{    ///<UART Match Address Registers 1
        using Addr = Register::Address<0x4006a008,0xffffff00,0,unsigned char>;
        ///Match Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Uart0Ma2{    ///<UART Match Address Registers 2
        using Addr = Register::Address<0x4006a009,0xffffff00,0,unsigned char>;
        ///Match Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Uart0C4{    ///<UART Control Register 4
        using Addr = Register::Address<0x4006a00a,0xffffff00,0,unsigned char>;
        ///Baud Rate Fine Adjust
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> brfa{}; 
        ///10-bit Mode select
        enum class m10Val {
            v0=0x00000000,     ///<The parity bit is the ninth bit in the serial transmission.
            v1=0x00000001,     ///<The parity bit is the tenth bit in the serial transmission.
        };
        namespace m10ValC{
            constexpr MPL::Value<m10Val,m10Val::v0> v0{};
            constexpr MPL::Value<m10Val,m10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,m10Val> m10{}; 
        ///Match Address Mode Enable 2
        enum class maen2Val {
            v0=0x00000000,     ///<All data received is transferred to the data buffer if MAEN1 is cleared.
            v1=0x00000001,     ///<All data received with the most significant bit cleared, is discarded. All data received with the most significant bit set, is compared with contents of MA2 register. If no match occurs, the data is discarded. If match occurs, data is transferred to the data buffer.This bit must be cleared when C7816[ISO7816E] is set/enabled.
        };
        namespace maen2ValC{
            constexpr MPL::Value<maen2Val,maen2Val::v0> v0{};
            constexpr MPL::Value<maen2Val,maen2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,maen2Val> maen2{}; 
        ///Match Address Mode Enable 1
        enum class maen1Val {
            v0=0x00000000,     ///<All data received is transferred to the data buffer if MAEN2 is cleared.
            v1=0x00000001,     ///<All data received with the most significant bit cleared, is discarded. All data received with the most significant bit set, is compared with contents of MA1 register. If no match occurs, the data is discarded. If match occurs, data is transferred to the data buffer.This bit must be cleared when C7816[ISO7816E] is set/enabled.
        };
        namespace maen1ValC{
            constexpr MPL::Value<maen1Val,maen1Val::v0> v0{};
            constexpr MPL::Value<maen1Val,maen1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,maen1Val> maen1{}; 
    }
    namespace Uart0C5{    ///<UART Control Register 5
        using Addr = Register::Address<0x4006a00b,0xffffff5f,0,unsigned char>;
        ///Receiver Full DMA Select
        enum class rdmasVal {
            v0=0x00000000,     ///<If C2[RIE] is set and the S1[RDRF] flag is set, the RDFR interrupt request signal is asserted to request interrupt service.
            v1=0x00000001,     ///<If C2[RIE] is set and the S1[RDRF] flag is set, the RDRF DMA request signal is asserted to request a DMA transfer.
        };
        namespace rdmasValC{
            constexpr MPL::Value<rdmasVal,rdmasVal::v0> v0{};
            constexpr MPL::Value<rdmasVal,rdmasVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rdmasVal> rdmas{}; 
        ///Transmitter DMA Select
        enum class tdmasVal {
            v0=0x00000000,     ///<If C2[TIE] is set and the S1[TDRE] flag is set, the TDRE interrupt request signal is asserted to request interrupt service.
            v1=0x00000001,     ///<If C2[TIE] is set and the S1[TDRE] flag is set, the TDRE DMA request signal is asserted to request a DMA transfer.
        };
        namespace tdmasValC{
            constexpr MPL::Value<tdmasVal,tdmasVal::v0> v0{};
            constexpr MPL::Value<tdmasVal,tdmasVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tdmasVal> tdmas{}; 
    }
    namespace Uart0Ed{    ///<UART Extended Data Register
        using Addr = Register::Address<0x4006a00c,0xffffff3f,0,unsigned char>;
        ///no description available
        enum class parityeVal {
            v0=0x00000000,     ///<The dataword was received without a parity error.
            v1=0x00000001,     ///<The dataword was received with a parity error.
        };
        namespace parityeValC{
            constexpr MPL::Value<parityeVal,parityeVal::v0> v0{};
            constexpr MPL::Value<parityeVal,parityeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,parityeVal> paritye{}; 
        ///no description available
        enum class noisyVal {
            v0=0x00000000,     ///<The dataword was received without noise.
            v1=0x00000001,     ///<The data was received with noise.
        };
        namespace noisyValC{
            constexpr MPL::Value<noisyVal,noisyVal::v0> v0{};
            constexpr MPL::Value<noisyVal,noisyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,noisyVal> noisy{}; 
    }
    namespace Uart0Modem{    ///<UART Modem Register
        using Addr = Register::Address<0x4006a00d,0xfffffff0,0,unsigned char>;
        ///Transmitter clear-to-send enable
        enum class txctseVal {
            v0=0x00000000,     ///<CTS has no effect on the transmitter.
            v1=0x00000001,     ///<Enables clear-to-send operation. The transmitter checks the state of CTS each time it is ready to send a character. If CTS is asserted, the character is sent. If CTS is deasserted, the signal TXD remains in the mark state and transmission is delayed until CTS is asserted. Changes in CTS as a character is being sent do not affect its transmission.
        };
        namespace txctseValC{
            constexpr MPL::Value<txctseVal,txctseVal::v0> v0{};
            constexpr MPL::Value<txctseVal,txctseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,txctseVal> txctse{}; 
        ///Transmitter request-to-send enable
        enum class txrtseVal {
            v0=0x00000000,     ///<The transmitter has no effect on RTS.
            v1=0x00000001,     ///<When a character is placed into an empty transmitter data buffer(FIFO), RTS asserts one bit time before the start bit is transmitted. RTS deasserts one bit time after all characters in the transmitter data buffer(FIFO) and shift register are completely sent, including the last stop bit.
        };
        namespace txrtseValC{
            constexpr MPL::Value<txrtseVal,txrtseVal::v0> v0{};
            constexpr MPL::Value<txrtseVal,txrtseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,txrtseVal> txrtse{}; 
        ///Transmitter request-to-send polarity
        enum class txrtspolVal {
            v0=0x00000000,     ///<Transmitter RTS is active low.
            v1=0x00000001,     ///<Transmitter RTS is active high.
        };
        namespace txrtspolValC{
            constexpr MPL::Value<txrtspolVal,txrtspolVal::v0> v0{};
            constexpr MPL::Value<txrtspolVal,txrtspolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,txrtspolVal> txrtspol{}; 
        ///Receiver request-to-send enable
        enum class rxrtseVal {
            v0=0x00000000,     ///<The receiver has no effect on RTS.
            v1=0x00000001,     ///<RTS is deasserted if the number of characters in the receiver data register (FIFO) is equal to or greater than RWFIFO[RXWATER]. RTS is asserted when the number of characters in the receiver data register (FIFO) is less than RWFIFO[RXWATER].
        };
        namespace rxrtseValC{
            constexpr MPL::Value<rxrtseVal,rxrtseVal::v0> v0{};
            constexpr MPL::Value<rxrtseVal,rxrtseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rxrtseVal> rxrtse{}; 
    }
    namespace Uart0Ir{    ///<UART Infrared Register
        using Addr = Register::Address<0x4006a00e,0xfffffff8,0,unsigned char>;
        ///Transmitter narrow pulse
        enum class tnpVal {
            v00=0x00000000,     ///<3/16.
            v01=0x00000001,     ///<1/16.
            v10=0x00000002,     ///<1/32.
            v11=0x00000003,     ///<1/4.
        };
        namespace tnpValC{
            constexpr MPL::Value<tnpVal,tnpVal::v00> v00{};
            constexpr MPL::Value<tnpVal,tnpVal::v01> v01{};
            constexpr MPL::Value<tnpVal,tnpVal::v10> v10{};
            constexpr MPL::Value<tnpVal,tnpVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,tnpVal> tnp{}; 
        ///Infrared enable
        enum class irenVal {
            v0=0x00000000,     ///<IR disabled.
            v1=0x00000001,     ///<IR enabled.
        };
        namespace irenValC{
            constexpr MPL::Value<irenVal,irenVal::v0> v0{};
            constexpr MPL::Value<irenVal,irenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,irenVal> iren{}; 
    }
    namespace Uart0Pfifo{    ///<UART FIFO Parameters
        using Addr = Register::Address<0x4006a010,0xffffff00,0,unsigned char>;
        ///Receive FIFO. Buffer Depth
        enum class rxfifosizeVal {
            v000=0x00000000,     ///<Receive FIFO/Buffer Depth = 1 Dataword.
            v001=0x00000001,     ///<Receive FIFO/Buffer Depth = 4 Datawords.
            v010=0x00000002,     ///<Receive FIFO/Buffer Depth = 8 Datawords.
            v011=0x00000003,     ///<Receive FIFO/Buffer Depth = 16 Datawords.
            v100=0x00000004,     ///<Receive FIFO/Buffer Depth = 32 Datawords.
            v101=0x00000005,     ///<Receive FIFO/Buffer Depth = 64 Datawords.
            v110=0x00000006,     ///<Receive FIFO/Buffer Depth = 128 Datawords.
        };
        namespace rxfifosizeValC{
            constexpr MPL::Value<rxfifosizeVal,rxfifosizeVal::v000> v000{};
            constexpr MPL::Value<rxfifosizeVal,rxfifosizeVal::v001> v001{};
            constexpr MPL::Value<rxfifosizeVal,rxfifosizeVal::v010> v010{};
            constexpr MPL::Value<rxfifosizeVal,rxfifosizeVal::v011> v011{};
            constexpr MPL::Value<rxfifosizeVal,rxfifosizeVal::v100> v100{};
            constexpr MPL::Value<rxfifosizeVal,rxfifosizeVal::v101> v101{};
            constexpr MPL::Value<rxfifosizeVal,rxfifosizeVal::v110> v110{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,rxfifosizeVal> rxfifosize{}; 
        ///Receive FIFO Enable
        enum class rxfeVal {
            v0=0x00000000,     ///<Receive FIFO is not enabled. Buffer is depth 1. (Legacy support)
            v1=0x00000001,     ///<Receive FIFO is enabled. Buffer is depth indicted by RXFIFOSIZE.
        };
        namespace rxfeValC{
            constexpr MPL::Value<rxfeVal,rxfeVal::v0> v0{};
            constexpr MPL::Value<rxfeVal,rxfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rxfeVal> rxfe{}; 
        ///Transmit FIFO. Buffer Depth
        enum class txfifosizeVal {
            v000=0x00000000,     ///<Transmit FIFO/Buffer Depth = 1 Dataword.
            v001=0x00000001,     ///<Transmit FIFO/Buffer Depth = 4 Datawords.
            v010=0x00000002,     ///<Transmit FIFO/Buffer Depth = 8 Datawords.
            v011=0x00000003,     ///<Transmit FIFO/Buffer Depth = 16 Datawords.
            v100=0x00000004,     ///<Transmit FIFO/Buffer Depth = 32 Datawords.
            v101=0x00000005,     ///<Transmit FIFO/Buffer Depth = 64 Datawords.
            v110=0x00000006,     ///<Transmit FIFO/Buffer Depth = 128 Datawords.
        };
        namespace txfifosizeValC{
            constexpr MPL::Value<txfifosizeVal,txfifosizeVal::v000> v000{};
            constexpr MPL::Value<txfifosizeVal,txfifosizeVal::v001> v001{};
            constexpr MPL::Value<txfifosizeVal,txfifosizeVal::v010> v010{};
            constexpr MPL::Value<txfifosizeVal,txfifosizeVal::v011> v011{};
            constexpr MPL::Value<txfifosizeVal,txfifosizeVal::v100> v100{};
            constexpr MPL::Value<txfifosizeVal,txfifosizeVal::v101> v101{};
            constexpr MPL::Value<txfifosizeVal,txfifosizeVal::v110> v110{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,txfifosizeVal> txfifosize{}; 
        ///Transmit FIFO Enable
        enum class txfeVal {
            v0=0x00000000,     ///<Transmit FIFO is not enabled. Buffer is depth 1. (Legacy support).
            v1=0x00000001,     ///<Transmit FIFO is enabled. Buffer is depth indicted by TXFIFOSIZE.
        };
        namespace txfeValC{
            constexpr MPL::Value<txfeVal,txfeVal::v0> v0{};
            constexpr MPL::Value<txfeVal,txfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,txfeVal> txfe{}; 
    }
    namespace Uart0Cfifo{    ///<UART FIFO Control Register
        using Addr = Register::Address<0x4006a011,0xffffff3c,0,unsigned char>;
        ///Receive FIFO Underflow Interrupt Enable
        enum class rxufeVal {
            v0=0x00000000,     ///<RXUF flag does not generate an interrupt to the host.
            v1=0x00000001,     ///<RXUF flag generates an interrupt to the host.
        };
        namespace rxufeValC{
            constexpr MPL::Value<rxufeVal,rxufeVal::v0> v0{};
            constexpr MPL::Value<rxufeVal,rxufeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rxufeVal> rxufe{}; 
        ///Transmit FIFO Overflow Interrupt Enable
        enum class txofeVal {
            v0=0x00000000,     ///<TXOF flag does not generate an interrupt to the host.
            v1=0x00000001,     ///<TXOF flag generates an interrupt to the host.
        };
        namespace txofeValC{
            constexpr MPL::Value<txofeVal,txofeVal::v0> v0{};
            constexpr MPL::Value<txofeVal,txofeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,txofeVal> txofe{}; 
        ///Receive FIFO/Buffer Flush
        enum class rxflushVal {
            v0=0x00000000,     ///<No flush operation occurs.
            v1=0x00000001,     ///<All data in the receive FIFO/buffer is cleared out.
        };
        namespace rxflushValC{
            constexpr MPL::Value<rxflushVal,rxflushVal::v0> v0{};
            constexpr MPL::Value<rxflushVal,rxflushVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rxflushVal> rxflush{}; 
        ///Transmit FIFO/Buffer Flush
        enum class txflushVal {
            v0=0x00000000,     ///<No flush operation occurs.
            v1=0x00000001,     ///<All data in the transmit FIFO/Buffer is cleared out.
        };
        namespace txflushValC{
            constexpr MPL::Value<txflushVal,txflushVal::v0> v0{};
            constexpr MPL::Value<txflushVal,txflushVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,txflushVal> txflush{}; 
    }
    namespace Uart0Sfifo{    ///<UART FIFO Status Register
        using Addr = Register::Address<0x4006a012,0xffffff3c,0,unsigned char>;
        ///Receiver Buffer Underflow Flag
        enum class rxufVal {
            v0=0x00000000,     ///<No receive buffer underflow has occurred since the last time the flag was cleared.
            v1=0x00000001,     ///<At least one receive buffer underflow has occurred since the last time the flag was cleared.
        };
        namespace rxufValC{
            constexpr MPL::Value<rxufVal,rxufVal::v0> v0{};
            constexpr MPL::Value<rxufVal,rxufVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rxufVal> rxuf{}; 
        ///Transmitter Buffer Overflow Flag
        enum class txofVal {
            v0=0x00000000,     ///<No transmit buffer overflow has occurred since the last time the flag was cleared.
            v1=0x00000001,     ///<At least one transmit buffer overflow has occurred since the last time the flag was cleared.
        };
        namespace txofValC{
            constexpr MPL::Value<txofVal,txofVal::v0> v0{};
            constexpr MPL::Value<txofVal,txofVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,txofVal> txof{}; 
        ///Receive Buffer/FIFO Empty
        enum class rxemptVal {
            v0=0x00000000,     ///<Receive buffer is not empty.
            v1=0x00000001,     ///<Receive buffer is empty.
        };
        namespace rxemptValC{
            constexpr MPL::Value<rxemptVal,rxemptVal::v0> v0{};
            constexpr MPL::Value<rxemptVal,rxemptVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rxemptVal> rxempt{}; 
        ///Transmit Buffer/FIFO Empty
        enum class txemptVal {
            v0=0x00000000,     ///<Transmit buffer is not empty.
            v1=0x00000001,     ///<Transmit buffer is empty.
        };
        namespace txemptValC{
            constexpr MPL::Value<txemptVal,txemptVal::v0> v0{};
            constexpr MPL::Value<txemptVal,txemptVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,txemptVal> txempt{}; 
    }
    namespace Uart0Twfifo{    ///<UART FIFO Transmit Watermark
        using Addr = Register::Address<0x4006a013,0xffffff00,0,unsigned char>;
        ///Transmit Watermark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txwater{}; 
    }
    namespace Uart0Tcfifo{    ///<UART FIFO Transmit Count
        using Addr = Register::Address<0x4006a014,0xffffff00,0,unsigned char>;
        ///Transmit Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace Uart0Rwfifo{    ///<UART FIFO Receive Watermark
        using Addr = Register::Address<0x4006a015,0xffffff00,0,unsigned char>;
        ///Receive Watermark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxwater{}; 
    }
    namespace Uart0Rcfifo{    ///<UART FIFO Receive Count
        using Addr = Register::Address<0x4006a016,0xffffff00,0,unsigned char>;
        ///Receive Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxcount{}; 
    }
    namespace Uart0C7816{    ///<UART 7816 Control Register
        using Addr = Register::Address<0x4006a018,0xffffffe0,0,unsigned char>;
        ///ISO-7816 Functionality Enabled
        enum class iso7816eVal {
            v0=0x00000000,     ///<ISO-7816 functionality is turned off / not enabled.
            v1=0x00000001,     ///<ISO-7816 functionality is turned on / enabled.
        };
        namespace iso7816eValC{
            constexpr MPL::Value<iso7816eVal,iso7816eVal::v0> v0{};
            constexpr MPL::Value<iso7816eVal,iso7816eVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,iso7816eVal> iso7816e{}; 
        ///Transfer Type
        enum class ttypeVal {
            v0=0x00000000,     ///<T = 0 Per the ISO-7816 specification.
            v1=0x00000001,     ///<T = 1 Per the ISO-7816 specification.
        };
        namespace ttypeValC{
            constexpr MPL::Value<ttypeVal,ttypeVal::v0> v0{};
            constexpr MPL::Value<ttypeVal,ttypeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ttypeVal> ttype{}; 
        ///Detect Initial Character
        enum class initVal {
            v0=0x00000000,     ///<Normal operating mode. Receiver does not seek to identify initial character.
            v1=0x00000001,     ///<Receiver searches for initial character.
        };
        namespace initValC{
            constexpr MPL::Value<initVal,initVal::v0> v0{};
            constexpr MPL::Value<initVal,initVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,initVal> init{}; 
        ///Generate NACK on Error
        enum class anackVal {
            v0=0x00000000,     ///<No NACK is automatically generated.
            v1=0x00000001,     ///<A NACK is automatically generated if a parity error is detected or if an invalid initial character is detected.
        };
        namespace anackValC{
            constexpr MPL::Value<anackVal,anackVal::v0> v0{};
            constexpr MPL::Value<anackVal,anackVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,anackVal> anack{}; 
        ///Generate NACK on Overflow
        enum class onackVal {
            v0=0x00000000,     ///<The received data does not generate a NACK when the receipt of the data results in an overflow event.
            v1=0x00000001,     ///<If the receiver buffer overflows, a NACK is automatically sent on a received character.
        };
        namespace onackValC{
            constexpr MPL::Value<onackVal,onackVal::v0> v0{};
            constexpr MPL::Value<onackVal,onackVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,onackVal> onack{}; 
    }
    namespace Uart0Ie7816{    ///<UART 7816 Interrupt Enable Register
        using Addr = Register::Address<0x4006a019,0xffffff08,0,unsigned char>;
        ///Receive Threshold Exceeded Interrupt Enable
        enum class rxteVal {
            v0=0x00000000,     ///<The assertion of the IS7816[RXT] bit will not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of the IS7816[RXT] bit will result in the generation of an interrupt.
        };
        namespace rxteValC{
            constexpr MPL::Value<rxteVal,rxteVal::v0> v0{};
            constexpr MPL::Value<rxteVal,rxteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rxteVal> rxte{}; 
        ///Transmit Threshold Exceeded Interrupt Enable
        enum class txteVal {
            v0=0x00000000,     ///<The assertion of the IS7816[TXT] bit will not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of the IS7816[TXT] bit will result in the generation of an interrupt.
        };
        namespace txteValC{
            constexpr MPL::Value<txteVal,txteVal::v0> v0{};
            constexpr MPL::Value<txteVal,txteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,txteVal> txte{}; 
        ///Guard Timer Violated Interrupt Enable
        enum class gtveVal {
            v0=0x00000000,     ///<The assertion of the IS7816[GTV] bit will not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of the IS7816[GTV] bit will result in the generation of an interrupt.
        };
        namespace gtveValC{
            constexpr MPL::Value<gtveVal,gtveVal::v0> v0{};
            constexpr MPL::Value<gtveVal,gtveVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,gtveVal> gtve{}; 
        ///Initial Character Detected Interrupt Enable
        enum class initdeVal {
            v0=0x00000000,     ///<The assertion of the IS7816[INITD] bit will not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of the IS7816[INITD] bit will result in the generation of an interrupt.
        };
        namespace initdeValC{
            constexpr MPL::Value<initdeVal,initdeVal::v0> v0{};
            constexpr MPL::Value<initdeVal,initdeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,initdeVal> initde{}; 
        ///Block Wait Timer Interrupt Enable
        enum class bwteVal {
            v0=0x00000000,     ///<The assertion of the IS7816[BWT] bit will not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of the IS7816[BWT] bit will result in the generation of an interrupt.
        };
        namespace bwteValC{
            constexpr MPL::Value<bwteVal,bwteVal::v0> v0{};
            constexpr MPL::Value<bwteVal,bwteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bwteVal> bwte{}; 
        ///Character Wait Timer Interrupt Enable
        enum class cwteVal {
            v0=0x00000000,     ///<The assertion of the IS7816[CWT] bit will not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of the IS7816[CWT] bit will result in the generation of an interrupt.
        };
        namespace cwteValC{
            constexpr MPL::Value<cwteVal,cwteVal::v0> v0{};
            constexpr MPL::Value<cwteVal,cwteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cwteVal> cwte{}; 
        ///Wait Timer Interrupt Enable
        enum class wteVal {
            v0=0x00000000,     ///<The assertion of the IS7816[WT] bit will not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of the IS7816[WT] bit will result in the generation of an interrupt.
        };
        namespace wteValC{
            constexpr MPL::Value<wteVal,wteVal::v0> v0{};
            constexpr MPL::Value<wteVal,wteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,wteVal> wte{}; 
    }
    namespace Uart0Is7816{    ///<UART 7816 Interrupt Status Register
        using Addr = Register::Address<0x4006a01a,0xffffff08,0,unsigned char>;
        ///Receive Threshold Exceeded Interrupt
        enum class rxtVal {
            v0=0x00000000,     ///<The number of consecutive NACKS generated as a result of parity errors and buffer overruns is less than or equal to the value in ET7816[RXTHRESHOLD].
            v1=0x00000001,     ///<The number of consecutive NACKS generated as a result of parity errors and buffer overruns is greater than the value in ET7816[RXTHRESHOLD].
        };
        namespace rxtValC{
            constexpr MPL::Value<rxtVal,rxtVal::v0> v0{};
            constexpr MPL::Value<rxtVal,rxtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rxtVal> rxt{}; 
        ///Transmit Threshold Exceeded Interrupt
        enum class txtVal {
            v0=0x00000000,     ///<The number of retries and corresponding NACKS does not exceed the value in the ET7816[TXTHRESHOLD] field.
            v1=0x00000001,     ///<The number of retries and corresponding NACKS exceeds the value in the ET7816[TXTHRESHOLD] field.
        };
        namespace txtValC{
            constexpr MPL::Value<txtVal,txtVal::v0> v0{};
            constexpr MPL::Value<txtVal,txtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,txtVal> txt{}; 
        ///Guard Timer Violated Interrupt
        enum class gtvVal {
            v0=0x00000000,     ///<A guard time (GT, CGT or BGT) has not been violated.
            v1=0x00000001,     ///<A guard time (GT, CGT or BGT) has been violated.
        };
        namespace gtvValC{
            constexpr MPL::Value<gtvVal,gtvVal::v0> v0{};
            constexpr MPL::Value<gtvVal,gtvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,gtvVal> gtv{}; 
        ///Initial Character Detected Interrupt
        enum class initdVal {
            v0=0x00000000,     ///<A valid initial character has not been received.
            v1=0x00000001,     ///<A valid initial character has been received.
        };
        namespace initdValC{
            constexpr MPL::Value<initdVal,initdVal::v0> v0{};
            constexpr MPL::Value<initdVal,initdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,initdVal> initd{}; 
        ///Block Wait Timer Interrupt
        enum class bwtVal {
            v0=0x00000000,     ///<Block wait time (BWT) has not been violated.
            v1=0x00000001,     ///<Block wait tTime (BWT) has been violated.
        };
        namespace bwtValC{
            constexpr MPL::Value<bwtVal,bwtVal::v0> v0{};
            constexpr MPL::Value<bwtVal,bwtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bwtVal> bwt{}; 
        ///Character Wait Timer Interrupt
        enum class cwtVal {
            v0=0x00000000,     ///<Character wait time (CWT) has not been violated.
            v1=0x00000001,     ///<Character wait time (CWT) has been violated.
        };
        namespace cwtValC{
            constexpr MPL::Value<cwtVal,cwtVal::v0> v0{};
            constexpr MPL::Value<cwtVal,cwtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cwtVal> cwt{}; 
        ///Wait Timer Interrupt
        enum class wtVal {
            v0=0x00000000,     ///<Wait time (WT) has not been violated.
            v1=0x00000001,     ///<Wait time (WT) has been violated.
        };
        namespace wtValC{
            constexpr MPL::Value<wtVal,wtVal::v0> v0{};
            constexpr MPL::Value<wtVal,wtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,wtVal> wt{}; 
    }
    namespace Uart0Wp7816t0{    ///<UART 7816 Wait Parameter Register
        using Addr = Register::Address<0x4006a01b,0xffffff00,0,unsigned char>;
        ///Wait Timer Interrupt (C7816[TTYPE] = 0)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wi{}; 
    }
    namespace Uart0Wp7816t1{    ///<UART 7816 Wait Parameter Register
        using Addr = Register::Address<0x4006a01b,0xffffff00,0,unsigned char>;
        ///Block Wait Time Integer(C7816[TTYPE] = 1)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bwi{}; 
        ///Character Wait Time Integer (C7816[TTYPE] = 1)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> cwi{}; 
    }
    namespace Uart0Wn7816{    ///<UART 7816 Wait N Register
        using Addr = Register::Address<0x4006a01c,0xffffff00,0,unsigned char>;
        ///Guard Band N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gtn{}; 
    }
    namespace Uart0Wf7816{    ///<UART 7816 Wait FD Register
        using Addr = Register::Address<0x4006a01d,0xffffff00,0,unsigned char>;
        ///FD Multiplier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gtfd{}; 
    }
    namespace Uart0Et7816{    ///<UART 7816 Error Threshold Register
        using Addr = Register::Address<0x4006a01e,0xffffff00,0,unsigned char>;
        ///Receive NACK Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rxthreshold{}; 
        ///Transmit NACK Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> txthreshold{}; 
    }
    namespace Uart0Tl7816{    ///<UART 7816 Transmit Length Register
        using Addr = Register::Address<0x4006a01f,0xffffff00,0,unsigned char>;
        ///Transmit Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tlen{}; 
    }
    namespace Uart0C6{    ///<UART CEA709.1-B Control Register 6
        using Addr = Register::Address<0x4006a021,0xffffff0f,0,unsigned char>;
        ///Collision Signal Polarity
        enum class cpVal {
            v0=0x00000000,     ///<Collision signal is active low.
            v1=0x00000001,     ///<Collision signal is active high.
        };
        namespace cpValC{
            constexpr MPL::Value<cpVal,cpVal::v0> v0{};
            constexpr MPL::Value<cpVal,cpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,cpVal> cp{}; 
        ///Collision Enable
        enum class ceVal {
            v0=0x00000000,     ///<Collision detect feature is disabled.
            v1=0x00000001,     ///<Collision detect feature is enabled.
        };
        namespace ceValC{
            constexpr MPL::Value<ceVal,ceVal::v0> v0{};
            constexpr MPL::Value<ceVal,ceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ceVal> ce{}; 
        ///CEA709.1-B Transmit Enable
        enum class tx709Val {
            v0=0x00000000,     ///<CEA709.1-B transmitter is disabled.
            v1=0x00000001,     ///<CEA709.1-B transmitter is enabled.
        };
        namespace tx709ValC{
            constexpr MPL::Value<tx709Val,tx709Val::v0> v0{};
            constexpr MPL::Value<tx709Val,tx709Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,tx709Val> tx709{}; 
        ///EN709
        enum class en709Val {
            v0=0x00000000,     ///<CEA709.1-B is disabled.
            v1=0x00000001,     ///<CEA709.1-B is enabled
        };
        namespace en709ValC{
            constexpr MPL::Value<en709Val,en709Val::v0> v0{};
            constexpr MPL::Value<en709Val,en709Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,en709Val> en709{}; 
    }
    namespace Uart0Pcth{    ///<UART CEA709.1-B Packet Cycle Time Counter High
        using Addr = Register::Address<0x4006a022,0xffffff00,0,unsigned char>;
        ///Packet Cycle Time Counter High
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pcth{}; 
    }
    namespace Uart0Pctl{    ///<UART CEA709.1-B Packet Cycle Time Counter Low
        using Addr = Register::Address<0x4006a023,0xffffff00,0,unsigned char>;
        ///Packet Cycle Time Counter Low
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pctl{}; 
    }
    namespace Uart0B1t{    ///<UART CEA709.1-B Beta1 Timer
        using Addr = Register::Address<0x4006a024,0xffffff00,0,unsigned char>;
        ///Beta1 Timer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> b1t{}; 
    }
    namespace Uart0Sdth{    ///<UART CEA709.1-B Secondary Delay Timer High
        using Addr = Register::Address<0x4006a025,0xffffff00,0,unsigned char>;
        ///Secondary Delay Timer High
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sdth{}; 
    }
    namespace Uart0Sdtl{    ///<UART CEA709.1-B Secondary Delay Timer Low
        using Addr = Register::Address<0x4006a026,0xffffff00,0,unsigned char>;
        ///Secondary Delay Timer Low
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sdtl{}; 
    }
    namespace Uart0Pre{    ///<UART CEA709.1-B Preamble
        using Addr = Register::Address<0x4006a027,0xffffff00,0,unsigned char>;
        ///CEA709.1-B Preamble Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> preamble{}; 
    }
    namespace Uart0Tpl{    ///<UART CEA709.1-B Transmit Packet Length
        using Addr = Register::Address<0x4006a028,0xffffff00,0,unsigned char>;
        ///Transmit Packet Length Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tpl{}; 
    }
    namespace Uart0Ie{    ///<UART CEA709.1-B Interrupt Enable Register
        using Addr = Register::Address<0x4006a029,0xffffff80,0,unsigned char>;
        ///Transmission Fail Interrupt Enable
        enum class txfieVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace txfieValC{
            constexpr MPL::Value<txfieVal,txfieVal::v0> v0{};
            constexpr MPL::Value<txfieVal,txfieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,txfieVal> txfie{}; 
        ///Preamble Start Interrupt Enable
        enum class psieVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace psieValC{
            constexpr MPL::Value<psieVal,psieVal::v0> v0{};
            constexpr MPL::Value<psieVal,psieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,psieVal> psie{}; 
        ///Packet Cycle Timer Interrupt Enable
        enum class pcteieVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace pcteieValC{
            constexpr MPL::Value<pcteieVal,pcteieVal::v0> v0{};
            constexpr MPL::Value<pcteieVal,pcteieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pcteieVal> pcteie{}; 
        ///Packet Transmitted Interrupt Enable
        enum class ptxieVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace ptxieValC{
            constexpr MPL::Value<ptxieVal,ptxieVal::v0> v0{};
            constexpr MPL::Value<ptxieVal,ptxieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ptxieVal> ptxie{}; 
        ///Packet Received Interrupt Enable
        enum class prxieVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace prxieValC{
            constexpr MPL::Value<prxieVal,prxieVal::v0> v0{};
            constexpr MPL::Value<prxieVal,prxieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,prxieVal> prxie{}; 
        ///Initial Sync Detection Interrupt Enable
        enum class isdieVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace isdieValC{
            constexpr MPL::Value<isdieVal,isdieVal::v0> v0{};
            constexpr MPL::Value<isdieVal,isdieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,isdieVal> isdie{}; 
        ///Wbase Expired Interrupt Enable
        enum class wbeieVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace wbeieValC{
            constexpr MPL::Value<wbeieVal,wbeieVal::v0> v0{};
            constexpr MPL::Value<wbeieVal,wbeieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,wbeieVal> wbeie{}; 
    }
    namespace Uart0Wb{    ///<UART CEA709.1-B WBASE
        using Addr = Register::Address<0x4006a02a,0xffffff00,0,unsigned char>;
        ///CEA709.1-B WBASE register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wbase{}; 
    }
    namespace Uart0S3{    ///<UART CEA709.1-B Status Register
        using Addr = Register::Address<0x4006a02b,0xffffff00,0,unsigned char>;
        ///Transmission Fail Flag
        enum class txffVal {
            v0=0x00000000,     ///<Transmission continues normally.
            v1=0x00000001,     ///<Transmission is failed.
        };
        namespace txffValC{
            constexpr MPL::Value<txffVal,txffVal::v0> v0{};
            constexpr MPL::Value<txffVal,txffVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,txffVal> txff{}; 
        ///Preamble Start Flag
        enum class psfVal {
            v0=0x00000000,     ///<Preamble start is not detected.
            v1=0x00000001,     ///<Preamble start is detected.
        };
        namespace psfValC{
            constexpr MPL::Value<psfVal,psfVal::v0> v0{};
            constexpr MPL::Value<psfVal,psfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,psfVal> psf{}; 
        ///Packet Cycle Timer Expired Flag
        enum class pctefVal {
            v0=0x00000000,     ///<Packet Cycle Time is not expired.
            v1=0x00000001,     ///<Packet cycle time is expired.
        };
        namespace pctefValC{
            constexpr MPL::Value<pctefVal,pctefVal::v0> v0{};
            constexpr MPL::Value<pctefVal,pctefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pctefVal> pctef{}; 
        ///Packet Transmitted Flag
        enum class ptxfVal {
            v0=0x00000000,     ///<Packet transmission is not complete.
            v1=0x00000001,     ///<Packet transmission is complete.
        };
        namespace ptxfValC{
            constexpr MPL::Value<ptxfVal,ptxfVal::v0> v0{};
            constexpr MPL::Value<ptxfVal,ptxfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ptxfVal> ptxf{}; 
        ///Packet Received Flag
        enum class prxfVal {
            v0=0x00000000,     ///<Packet is not received.
            v1=0x00000001,     ///<Packet is received.
        };
        namespace prxfValC{
            constexpr MPL::Value<prxfVal,prxfVal::v0> v0{};
            constexpr MPL::Value<prxfVal,prxfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,prxfVal> prxf{}; 
        ///Initial Sync Detect
        enum class isdVal {
            v0=0x00000000,     ///<Initial sync is not detected.
            v1=0x00000001,     ///<Initial sync is detected.
        };
        namespace isdValC{
            constexpr MPL::Value<isdVal,isdVal::v0> v0{};
            constexpr MPL::Value<isdVal,isdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,isdVal> isd{}; 
        ///Wbase Expired Flag
        enum class wbefVal {
            v0=0x00000000,     ///<Wbase time period is not expired.
            v1=0x00000001,     ///<Wbase time period has been expired after beta1 time slots.
        };
        namespace wbefValC{
            constexpr MPL::Value<wbefVal,wbefVal::v0> v0{};
            constexpr MPL::Value<wbefVal,wbefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,wbefVal> wbef{}; 
        ///Preamble Error Flag
        enum class pefVal {
            v0=0x00000000,     ///<Preamble is correct.
            v1=0x00000001,     ///<Preamble is in error.
        };
        namespace pefValC{
            constexpr MPL::Value<pefVal,pefVal::v0> v0{};
            constexpr MPL::Value<pefVal,pefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pefVal> pef{}; 
    }
    namespace Uart0S4{    ///<UART CEA709.1-B Status Register
        using Addr = Register::Address<0x4006a02c,0xffffffe0,0,unsigned char>;
        ///Framing Error
        enum class feVal {
            v0=0x00000000,     ///<Received packet is byte bound.
            v1=0x00000001,     ///<Received packet is not byte bound.
        };
        namespace feValC{
            constexpr MPL::Value<feVal,feVal::v0> v0{};
            constexpr MPL::Value<feVal,feVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,feVal> fe{}; 
        ///Improper Line Code Violation
        enum class ilcvVal {
            v0=0x00000000,     ///<Line code violation received is proper.
            v1=0x00000001,     ///<Line code violation received is improper i.e less than 3-bit periods.
        };
        namespace ilcvValC{
            constexpr MPL::Value<ilcvVal,ilcvVal::v0> v0{};
            constexpr MPL::Value<ilcvVal,ilcvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ilcvVal> ilcv{}; 
        ///CDET
        enum class cdetVal {
            v00=0x00000000,     ///<No collision.
            v01=0x00000001,     ///<Collision occurred during preamble.
            v10=0x00000002,     ///<Collision occurred during data.
            v11=0x00000003,     ///<Collision occurred during line code violation.
        };
        namespace cdetValC{
            constexpr MPL::Value<cdetVal,cdetVal::v00> v00{};
            constexpr MPL::Value<cdetVal,cdetVal::v01> v01{};
            constexpr MPL::Value<cdetVal,cdetVal::v10> v10{};
            constexpr MPL::Value<cdetVal,cdetVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,cdetVal> cdet{}; 
        ///Initial Synchronization Fail Flag
        enum class initfVal {
            v0=0x00000000,     ///<Initial synchronization is not failed.
            v1=0x00000001,     ///<Initial synchronization is failed.
        };
        namespace initfValC{
            constexpr MPL::Value<initfVal,initfVal::v0> v0{};
            constexpr MPL::Value<initfVal,initfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,initfVal> initf{}; 
    }
    namespace Uart0Rpl{    ///<UART CEA709.1-B Received Packet Length
        using Addr = Register::Address<0x4006a02d,0xffffff00,0,unsigned char>;
        ///Received packet length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rpl{}; 
    }
    namespace Uart0Rprel{    ///<UART CEA709.1-B Received Preamble Length
        using Addr = Register::Address<0x4006a02e,0xffffff00,0,unsigned char>;
        ///Received preamble length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rprel{}; 
    }
    namespace Uart0Cpw{    ///<UART CEA709.1-B Collision Pulse Width
        using Addr = Register::Address<0x4006a02f,0xffffff00,0,unsigned char>;
        ///CEA709.1-B CPW register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cpw{}; 
    }
    namespace Uart0Ridt{    ///<UART CEA709.1-B Receive Indeterminate Time
        using Addr = Register::Address<0x4006a030,0xffffff00,0,unsigned char>;
        ///CEA709.1-B Receive IDT Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ridt{}; 
    }
    namespace Uart0Tidt{    ///<UART CEA709.1-B Transmit Indeterminate Time
        using Addr = Register::Address<0x4006a031,0xffffff00,0,unsigned char>;
        ///CEA709.1-B Transmit IDT Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tidt{}; 
    }
}
