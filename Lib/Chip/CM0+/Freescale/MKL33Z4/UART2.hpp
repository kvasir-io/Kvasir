#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial Communication Interface
    namespace Uart2Bdh{    ///<UART Baud Rate Registers: High
        using Addr = Register::Address<0x4006c000,0xffffffa0,0,unsigned char>;
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
    }
    namespace Uart2Bdl{    ///<UART Baud Rate Registers: Low
        using Addr = Register::Address<0x4006c001,0xffffff00,0,unsigned char>;
        ///UART Baud Rate Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sbr{}; 
    }
    namespace Uart2C1{    ///<UART Control Register 1
        using Addr = Register::Address<0x4006c002,0xffffff40,0,unsigned char>;
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
        using Addr = Register::Address<0x4006c003,0xffffff00,0,unsigned char>;
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
            v1=0x00000001,     ///<RDRF interrupt or DMA transfer requests enabled.
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
    namespace Uart2S1{    ///<UART Status Register 1
        using Addr = Register::Address<0x4006c004,0xffffff00,0,unsigned char>;
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
        using Addr = Register::Address<0x4006c005,0xffffff82,0,unsigned char>;
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
    }
    namespace Uart2C3{    ///<UART Control Register 3
        using Addr = Register::Address<0x4006c006,0xffffff00,0,unsigned char>;
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
        using Addr = Register::Address<0x4006c007,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rt{}; 
    }
    namespace Uart2Ma1{    ///<UART Match Address Registers 1
        using Addr = Register::Address<0x4006c008,0xffffff00,0,unsigned char>;
        ///Match Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Uart2Ma2{    ///<UART Match Address Registers 2
        using Addr = Register::Address<0x4006c009,0xffffff00,0,unsigned char>;
        ///Match Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Uart2C4{    ///<UART Control Register 4
        using Addr = Register::Address<0x4006c00a,0xffffff00,0,unsigned char>;
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
            v1=0x00000001,     ///<All data received with the most significant bit cleared, is discarded. All data received with the most significant bit set, is compared with contents of MA2 register. If no match occurs, the data is discarded. If a match occurs, data is transferred to the data buffer. This field must be cleared when C7816[ISO7816E] is set/enabled.
        };
        namespace maen2ValC{
            constexpr MPL::Value<maen2Val,maen2Val::v0> v0{};
            constexpr MPL::Value<maen2Val,maen2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,maen2Val> maen2{}; 
        ///Match Address Mode Enable 1
        enum class maen1Val {
            v0=0x00000000,     ///<All data received is transferred to the data buffer if MAEN2 is cleared.
            v1=0x00000001,     ///<All data received with the most significant bit cleared, is discarded. All data received with the most significant bit set, is compared with contents of MA1 register. If no match occurs, the data is discarded. If match occurs, data is transferred to the data buffer. This field must be cleared when C7816[ISO7816E] is set/enabled.
        };
        namespace maen1ValC{
            constexpr MPL::Value<maen1Val,maen1Val::v0> v0{};
            constexpr MPL::Value<maen1Val,maen1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,maen1Val> maen1{}; 
    }
    namespace Uart2C5{    ///<UART Control Register 5
        using Addr = Register::Address<0x4006c00b,0xffffff5f,0,unsigned char>;
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
    namespace Uart2C7816{    ///<UART 7816 Control Register
        using Addr = Register::Address<0x4006c018,0xffffffe0,0,unsigned char>;
        ///ISO-7816 Functionality Enabled
        enum class iso7816eVal {
            v0=0x00000000,     ///<ISO-7816 functionality is turned off/not enabled.
            v1=0x00000001,     ///<ISO-7816 functionality is turned on/enabled.
        };
        namespace iso7816eValC{
            constexpr MPL::Value<iso7816eVal,iso7816eVal::v0> v0{};
            constexpr MPL::Value<iso7816eVal,iso7816eVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,iso7816eVal> iso7816e{}; 
        ///Transfer Type
        enum class ttypeVal {
            v0=0x00000000,     ///<T = 0 per the ISO-7816 specification.
            v1=0x00000001,     ///<T = 1 per the ISO-7816 specification.
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
    namespace Uart2Ie7816{    ///<UART 7816 Interrupt Enable Register
        using Addr = Register::Address<0x4006c019,0xffffff00,0,unsigned char>;
        ///Receive Threshold Exceeded Interrupt Enable
        enum class rxteVal {
            v0=0x00000000,     ///<The assertion of IS7816[RXT] does not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of IS7816[RXT] results in the generation of an interrupt.
        };
        namespace rxteValC{
            constexpr MPL::Value<rxteVal,rxteVal::v0> v0{};
            constexpr MPL::Value<rxteVal,rxteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rxteVal> rxte{}; 
        ///Transmit Threshold Exceeded Interrupt Enable
        enum class txteVal {
            v0=0x00000000,     ///<The assertion of IS7816[TXT] does not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of IS7816[TXT] results in the generation of an interrupt.
        };
        namespace txteValC{
            constexpr MPL::Value<txteVal,txteVal::v0> v0{};
            constexpr MPL::Value<txteVal,txteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,txteVal> txte{}; 
        ///Guard Timer Violated Interrupt Enable
        enum class gtveVal {
            v0=0x00000000,     ///<The assertion of IS7816[GTV] does not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of IS7816[GTV] results in the generation of an interrupt.
        };
        namespace gtveValC{
            constexpr MPL::Value<gtveVal,gtveVal::v0> v0{};
            constexpr MPL::Value<gtveVal,gtveVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,gtveVal> gtve{}; 
        ///ATR Duration Timer Interrupt Enable
        enum class adteVal {
            v0=0x00000000,     ///<The assertion of IS7816[ADT] does not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of IS7816[ADT] results in the generation of an interrupt.
        };
        namespace adteValC{
            constexpr MPL::Value<adteVal,adteVal::v0> v0{};
            constexpr MPL::Value<adteVal,adteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,adteVal> adte{}; 
        ///Initial Character Detected Interrupt Enable
        enum class initdeVal {
            v0=0x00000000,     ///<The assertion of IS7816[INITD] does not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of IS7816[INITD] results in the generation of an interrupt.
        };
        namespace initdeValC{
            constexpr MPL::Value<initdeVal,initdeVal::v0> v0{};
            constexpr MPL::Value<initdeVal,initdeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,initdeVal> initde{}; 
        ///Block Wait Timer Interrupt Enable
        enum class bwteVal {
            v0=0x00000000,     ///<The assertion of IS7816[BWT] does not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of IS7816[BWT] results in the generation of an interrupt.
        };
        namespace bwteValC{
            constexpr MPL::Value<bwteVal,bwteVal::v0> v0{};
            constexpr MPL::Value<bwteVal,bwteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bwteVal> bwte{}; 
        ///Character Wait Timer Interrupt Enable
        enum class cwteVal {
            v0=0x00000000,     ///<The assertion of IS7816[CWT] does not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of IS7816[CWT] results in the generation of an interrupt.
        };
        namespace cwteValC{
            constexpr MPL::Value<cwteVal,cwteVal::v0> v0{};
            constexpr MPL::Value<cwteVal,cwteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cwteVal> cwte{}; 
        ///Wait Timer Interrupt Enable
        enum class wteVal {
            v0=0x00000000,     ///<The assertion of IS7816[WT] does not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of IS7816[WT] results in the generation of an interrupt.
        };
        namespace wteValC{
            constexpr MPL::Value<wteVal,wteVal::v0> v0{};
            constexpr MPL::Value<wteVal,wteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,wteVal> wte{}; 
    }
    namespace Uart2Is7816{    ///<UART 7816 Interrupt Status Register
        using Addr = Register::Address<0x4006c01a,0xffffff00,0,unsigned char>;
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
            v0=0x00000000,     ///<The number of retries and corresponding NACKS does not exceed the value in ET7816[TXTHRESHOLD].
            v1=0x00000001,     ///<The number of retries and corresponding NACKS exceeds the value in ET7816[TXTHRESHOLD].
        };
        namespace txtValC{
            constexpr MPL::Value<txtVal,txtVal::v0> v0{};
            constexpr MPL::Value<txtVal,txtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,txtVal> txt{}; 
        ///Guard Timer Violated Interrupt
        enum class gtvVal {
            v0=0x00000000,     ///<A guard time (GT, CGT, or BGT) has not been violated.
            v1=0x00000001,     ///<A guard time (GT, CGT, or BGT) has been violated.
        };
        namespace gtvValC{
            constexpr MPL::Value<gtvVal,gtvVal::v0> v0{};
            constexpr MPL::Value<gtvVal,gtvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,gtvVal> gtv{}; 
        ///ATR Duration Time Interrupt
        enum class adtVal {
            v0=0x00000000,     ///<ATR Duration time (ADT) has not been violated.
            v1=0x00000001,     ///<ATR Duration time (ADT) has been violated.
        };
        namespace adtValC{
            constexpr MPL::Value<adtVal,adtVal::v0> v0{};
            constexpr MPL::Value<adtVal,adtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,adtVal> adt{}; 
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
            v1=0x00000001,     ///<Block wait time (BWT) has been violated.
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
    namespace Uart2Wp7816{    ///<UART 7816 Wait Parameter Register
        using Addr = Register::Address<0x4006c01b,0xffffff00,0,unsigned char>;
        ///Wait Time Multiplier (C7816[TTYPE] = 1)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wtx{}; 
    }
    namespace Uart2Wn7816{    ///<UART 7816 Wait N Register
        using Addr = Register::Address<0x4006c01c,0xffffff00,0,unsigned char>;
        ///Guard Band N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gtn{}; 
    }
    namespace Uart2Wf7816{    ///<UART 7816 Wait FD Register
        using Addr = Register::Address<0x4006c01d,0xffffff00,0,unsigned char>;
        ///FD Multiplier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gtfd{}; 
    }
    namespace Uart2Et7816{    ///<UART 7816 Error Threshold Register
        using Addr = Register::Address<0x4006c01e,0xffffff00,0,unsigned char>;
        ///Receive NACK Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rxthreshold{}; 
        ///Transmit NACK Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> txthreshold{}; 
    }
    namespace Uart2Tl7816{    ///<UART 7816 Transmit Length Register
        using Addr = Register::Address<0x4006c01f,0xffffff00,0,unsigned char>;
        ///Transmit Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tlen{}; 
    }
    namespace Uart2Ap7816aT0{    ///<UART 7816 ATR Duration Timer Register A
        using Addr = Register::Address<0x4006c03a,0xffffff00,0,unsigned char>;
        ///ATR Duration Time Integer High (C7816[TTYPE] = 0)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adtiH{}; 
    }
    namespace Uart2Ap7816bT0{    ///<UART 7816 ATR Duration Timer Register B
        using Addr = Register::Address<0x4006c03b,0xffffff00,0,unsigned char>;
        ///ATR Duration Time Integer Low (C7816[TTYPE] = 0)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adtiL{}; 
    }
    namespace Uart2Wp7816aT0{    ///<UART 7816 Wait Parameter Register A
        using Addr = Register::Address<0x4006c03c,0xffffff00,0,unsigned char>;
        ///Wait Time Integer High (C7816[TTYPE] = 0)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wiH{}; 
    }
    namespace Uart2Wp7816aT1{    ///<UART 7816 Wait Parameter Register A
        using Addr = Register::Address<0x4006c03c,0xffffff00,0,unsigned char>;
        ///Block Wait Time Integer High (C7816[TTYPE] = 1)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bwiH{}; 
    }
    namespace Uart2Wp7816bT0{    ///<UART 7816 Wait Parameter Register B
        using Addr = Register::Address<0x4006c03d,0xffffff00,0,unsigned char>;
        ///Wait Time Integer Low (C7816[TTYPE] = 0)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wiL{}; 
    }
    namespace Uart2Wp7816bT1{    ///<UART 7816 Wait Parameter Register B
        using Addr = Register::Address<0x4006c03d,0xffffff00,0,unsigned char>;
        ///Block Wait Time Integer Low (C7816[TTYPE] = 1)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bwiL{}; 
    }
    namespace Uart2Wgp7816T1{    ///<UART 7816 Wait and Guard Parameter Register
        using Addr = Register::Address<0x4006c03e,0xffffff00,0,unsigned char>;
        ///Block Guard Time Integer (C7816[TTYPE] = 1)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bgi{}; 
        ///Character Wait Time Integer 1 (C7816[TTYPE] = 1)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> cwi1{}; 
    }
    namespace Uart2Wp7816cT1{    ///<UART 7816 Wait Parameter Register C
        using Addr = Register::Address<0x4006c03f,0xffffffe0,0,unsigned char>;
        ///Character Wait Time Integer 2 (C7816[TTYPE] = 1)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cwi2{}; 
    }
}
