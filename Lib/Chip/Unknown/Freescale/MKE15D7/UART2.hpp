#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial Communication Interface
    namespace Uart2Bdh{    ///<UART Baud Rate Registers: High
        using Addr = Register::Address<0x4004b000,0xffffff20,0,unsigned char>;
        ///UART Baud Rate Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sbr{}; 
        ///RxD Input Active Edge Interrupt Enable
        enum class rxedgieVal {
            v0=0x00000000,     ///<Hardware interrupts from RXEDGIF disabled using polling.
            v1=0x00000001,     ///<RXEDGIF interrupt request enabled.
        };
        namespace rxedgieValC{
            constexpr MPL::Value<rxedgieVal,rxedgieVal::v0> v0{};
            constexpr MPL::Value<rxedgieVal,rxedgieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rxedgieVal> rxedgie{}; 
        ///LIN Break Detect Interrupt or DMA Request Enable
        enum class lbkdieVal {
            v0=0x00000000,     ///<LBKDIF interrupt and DMA transfer requests disabled.
            v1=0x00000001,     ///<LBKDIF interrupt or DMA transfer requests enabled.
        };
        namespace lbkdieValC{
            constexpr MPL::Value<lbkdieVal,lbkdieVal::v0> v0{};
            constexpr MPL::Value<lbkdieVal,lbkdieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lbkdieVal> lbkdie{}; 
    }
    namespace Uart2Bdl{    ///<UART Baud Rate Registers: Low
        using Addr = Register::Address<0x4004b001,0xffffff00,0,unsigned char>;
        ///UART Baud Rate Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sbr{}; 
    }
    namespace Uart2C1{    ///<UART Control Register 1
        using Addr = Register::Address<0x4004b002,0xffffff00,0,unsigned char>;
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
            v0=0x00000000,     ///<Idle line wakeup.
            v1=0x00000001,     ///<Address mark wakeup.
        };
        namespace wakeValC{
            constexpr MPL::Value<wakeVal,wakeVal::v0> v0{};
            constexpr MPL::Value<wakeVal,wakeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,wakeVal> wake{}; 
        ///9-bit or 8-bit Mode Select
        enum class mVal {
            v0=0x00000000,     ///<Normal-start + 8 data bits (MSB/LSB first as determined by MSBF) + stop.
            v1=0x00000001,     ///<Use-start + 9 data bits (MSB/LSB first as determined by MSBF) + stop.
        };
        namespace mValC{
            constexpr MPL::Value<mVal,mVal::v0> v0{};
            constexpr MPL::Value<mVal,mVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mVal> m{}; 
        ///Receiver Source Select
        enum class rsrcVal {
            v0=0x00000000,     ///<Selects internal loop back mode. The receiver input is internally connected to transmitter output.
            v1=0x00000001,     ///<Single wire UART mode where the receiver input is connected to the transmit pin input signal.
        };
        namespace rsrcValC{
            constexpr MPL::Value<rsrcVal,rsrcVal::v0> v0{};
            constexpr MPL::Value<rsrcVal,rsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rsrcVal> rsrc{}; 
        ///UART Stops in Wait Mode
        enum class uartswaiVal {
            v0=0x00000000,     ///<UART clock continues to run in Wait mode.
            v1=0x00000001,     ///<UART clock freezes while CPU is in Wait mode.
        };
        namespace uartswaiValC{
            constexpr MPL::Value<uartswaiVal,uartswaiVal::v0> v0{};
            constexpr MPL::Value<uartswaiVal,uartswaiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,uartswaiVal> uartswai{}; 
        ///Loop Mode Select
        enum class loopsVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Loop mode where transmitter output is internally connected to receiver input. The receiver input is determined by RSRC.
        };
        namespace loopsValC{
            constexpr MPL::Value<loopsVal,loopsVal::v0> v0{};
            constexpr MPL::Value<loopsVal,loopsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,loopsVal> loops{}; 
    }
    namespace Uart2C2{    ///<UART Control Register 2
        using Addr = Register::Address<0x4004b003,0xffffff00,0,unsigned char>;
        ///Send Break
        enum class sbkVal {
            v0=0x00000000,     ///<Normal transmitter operation.
            v1=0x00000001,     ///<Queue break characters to be sent.
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
        ///Idle Line Interrupt DMA Transfer Enable
        enum class ilieVal {
            v0=0x00000000,     ///<IDLE interrupt requests disabled. and DMA transfer
            v1=0x00000001,     ///<IDLE interrupt requests enabled. or DMA transfer
        };
        namespace ilieValC{
            constexpr MPL::Value<ilieVal,ilieVal::v0> v0{};
            constexpr MPL::Value<ilieVal,ilieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ilieVal> ilie{}; 
        ///Receiver Full Interrupt or DMA Transfer Enable
        enum class rieVal {
            v0=0x00000000,     ///<RDRF interrupt and DMA transfer requests disabled.
            v1=0x00000001,     ///<RDRF interrupt or DMA transfer requests enabled.
        };
        namespace rieValC{
            constexpr MPL::Value<rieVal,rieVal::v0> v0{};
            constexpr MPL::Value<rieVal,rieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rieVal> rie{}; 
        ///Transmission Complete Interrupt or DMA Transfer Enable
        enum class tcieVal {
            v0=0x00000000,     ///<TC interrupt and DMA transfer requests disabled.
            v1=0x00000001,     ///<TC interrupt or DMA transfer requests enabled.
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
    namespace Uart2S1{    ///<UART Status Register 1
        using Addr = Register::Address<0x4004b004,0xffffff00,0,unsigned char>;
        ///Parity Error Flag
        enum class pfVal {
            v0=0x00000000,     ///<No parity error detected since the last time this flag was cleared. If the receive buffer has a depth greater than 1, then there may be data in the receive buffer what was received with a parity error.
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
    namespace Uart2S2{    ///<UART Status Register 2
        using Addr = Register::Address<0x4004b005,0xffffff00,0,unsigned char>;
        ///Receiver Active Flag
        enum class rafVal {
            v0=0x00000000,     ///<UART receiver idle/inactive waiting for a start bit.
            v1=0x00000001,     ///<UART receiver active, RxD input not idle.
        };
        namespace rafValC{
            constexpr MPL::Value<rafVal,rafVal::v0> v0{};
            constexpr MPL::Value<rafVal,rafVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rafVal> raf{}; 
        ///LIN Break Detection Enable
        enum class lbkdeVal {
            v0=0x00000000,     ///<Break character is detected at one of the following lengths: 10 bit times if C1[M] = 0 11 bit times if C1[M] = 1 and C4[M10] = 0 12 bit times if C1[M] = 1, C4[M10] = 1, and S1[PE] = 1
            v1=0x00000001,     ///<Break character is detected at length of 11 bit times if C1[M] = 0 or 12 bits time if C1[M] = 1.
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
            v0=0x00000000,     ///<S1[IDLE] is not set upon detection of an idle character.
            v1=0x00000001,     ///<S1[IDLE] is set upon detection of an idle character.
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
            v1=0x00000001,     ///<MSB (bit8, bit7 or bit6) is the first bit that is transmitted following the start bit, depending on the setting of C1[M] and C1[PE]. Further, the first bit received after the start bit is identified as bit8, bit7, or bit6, depending on the setting of C1[M] and C1[PE].
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
            v0=0x00000000,     ///<No LIN break character detected.
            v1=0x00000001,     ///<LIN break character detected.
        };
        namespace lbkdifValC{
            constexpr MPL::Value<lbkdifVal,lbkdifVal::v0> v0{};
            constexpr MPL::Value<lbkdifVal,lbkdifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lbkdifVal> lbkdif{}; 
    }
    namespace Uart2C3{    ///<UART Control Register 3
        using Addr = Register::Address<0x4004b006,0xffffff00,0,unsigned char>;
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
            v0=0x00000000,     ///<TXD pin is an input in single wire mode.
            v1=0x00000001,     ///<TXD pin is an output in single wire mode.
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
    namespace Uart2D{    ///<UART Data Register
        using Addr = Register::Address<0x4004b007,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rt{}; 
    }
    namespace Uart2Ma1{    ///<UART Match Address Registers 1
        using Addr = Register::Address<0x4004b008,0xffffff00,0,unsigned char>;
        ///Match Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Uart2Ma2{    ///<UART Match Address Registers 2
        using Addr = Register::Address<0x4004b009,0xffffff00,0,unsigned char>;
        ///Match Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Uart2C4{    ///<UART Control Register 4
        using Addr = Register::Address<0x4004b00a,0xffffff00,0,unsigned char>;
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
            v1=0x00000001,     ///<All data received with the most significant bit cleared, is discarded. All data received with the most significant bit set, is compared with contents of MA2 register. If no match occurs, the data is discarded. If a match occurs, data is transferred to the data buffer.
        };
        namespace maen2ValC{
            constexpr MPL::Value<maen2Val,maen2Val::v0> v0{};
            constexpr MPL::Value<maen2Val,maen2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,maen2Val> maen2{}; 
        ///Match Address Mode Enable 1
        enum class maen1Val {
            v0=0x00000000,     ///<All data received is transferred to the data buffer if MAEN2 is cleared.
            v1=0x00000001,     ///<All data received with the most significant bit cleared, is discarded. All data received with the most significant bit set, is compared with contents of MA1 register. If no match occurs, the data is discarded. If match occurs, data is transferred to the data buffer.
        };
        namespace maen1ValC{
            constexpr MPL::Value<maen1Val,maen1Val::v0> v0{};
            constexpr MPL::Value<maen1Val,maen1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,maen1Val> maen1{}; 
    }
    namespace Uart2C5{    ///<UART Control Register 5
        using Addr = Register::Address<0x4004b00b,0xffffff07,0,unsigned char>;
        ///LIN Break Detect DMA Select Bit
        enum class lbkddmasVal {
            v0=0x00000000,     ///<If BDH[LBKDIE] and S2[LBKDIF] are set, the LBKDIF interrupt signal is asserted to request an interrupt service.
            v1=0x00000001,     ///<If BDH[LBKDIE] and S2[LBKDIF] are set, the LBKDIF DMA request signal is asserted to request a DMA transfer.
        };
        namespace lbkddmasValC{
            constexpr MPL::Value<lbkddmasVal,lbkddmasVal::v0> v0{};
            constexpr MPL::Value<lbkddmasVal,lbkddmasVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,lbkddmasVal> lbkddmas{}; 
        ///Idle Line DMA Select
        enum class ildmasVal {
            v0=0x00000000,     ///<If C2[ILIE] and S1[IDLE] are set, the IDLE interrupt request signal is asserted to request an interrupt service.
            v1=0x00000001,     ///<If C2[ILIE] and S1[IDLE] are set, the IDLE DMA request signal is asserted to request a DMA transfer.
        };
        namespace ildmasValC{
            constexpr MPL::Value<ildmasVal,ildmasVal::v0> v0{};
            constexpr MPL::Value<ildmasVal,ildmasVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ildmasVal> ildmas{}; 
        ///Receiver Full DMA Select
        enum class rdmasVal {
            v0=0x00000000,     ///<If C2[RIE] and S1[RDRF] are set, the RDFR interrupt request signal is asserted to request an interrupt service.
            v1=0x00000001,     ///<If C2[RIE] and S1[RDRF] are set, the RDRF DMA request signal is asserted to request a DMA transfer.
        };
        namespace rdmasValC{
            constexpr MPL::Value<rdmasVal,rdmasVal::v0> v0{};
            constexpr MPL::Value<rdmasVal,rdmasVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rdmasVal> rdmas{}; 
        ///Transmission Complete DMA Select
        enum class tcdmasVal {
            v0=0x00000000,     ///<If C2[TCIE] is set and the S1[TC] flag is set, the TC interrupt request signal is asserted to request an interrupt service.
            v1=0x00000001,     ///<If C2[TCIE] is set and the S1[TC] flag is set, the TC DMA request signal is asserted to request a DMA transfer.
        };
        namespace tcdmasValC{
            constexpr MPL::Value<tcdmasVal,tcdmasVal::v0> v0{};
            constexpr MPL::Value<tcdmasVal,tcdmasVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,tcdmasVal> tcdmas{}; 
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
    namespace Uart2Modem{    ///<UART Modem Register
        using Addr = Register::Address<0x4004b00d,0xfffffff0,0,unsigned char>;
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
            v1=0x00000001,     ///<When a character is placed into an empty transmitter data buffer , RTS asserts one bit time before the start bit is transmitted. RTS deasserts one bit time after all characters in the transmitter data buffer and shift register are completely sent, including the last stop bit. (FIFO) (FIFO)
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
    namespace Uart2Ir{    ///<UART Infrared Register
        using Addr = Register::Address<0x4004b00e,0xfffffff8,0,unsigned char>;
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
}
