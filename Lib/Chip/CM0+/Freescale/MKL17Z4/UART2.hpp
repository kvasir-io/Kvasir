#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial Communication Interface
    namespace Uart2Bdh{    ///<UART Baud Rate Registers: High
        using Addr = Register::Address<0x4006c000,0xffffffa0,0,unsigned char>;
        ///UART Baud Rate Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sbr{}; 
        namespace SbrValC{
        }
        ///RxD Input Active Edge Interrupt Enable
        enum class RxedgieVal {
            v0=0x00000000,     ///<Hardware interrupts from RXEDGIF disabled using polling.
            v1=0x00000001,     ///<RXEDGIF interrupt request enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RxedgieVal> rxedgie{}; 
        namespace RxedgieValC{
            constexpr Register::FieldValue<decltype(rxedgie),RxedgieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxedgie),RxedgieVal::v1> v1{};
        }
    }
    namespace Uart2Bdl{    ///<UART Baud Rate Registers: Low
        using Addr = Register::Address<0x4006c001,0xffffff00,0,unsigned char>;
        ///UART Baud Rate Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sbr{}; 
        namespace SbrValC{
        }
    }
    namespace Uart2C1{    ///<UART Control Register 1
        using Addr = Register::Address<0x4006c002,0xffffff40,0,unsigned char>;
        ///Parity Type
        enum class PtVal {
            v0=0x00000000,     ///<Even parity.
            v1=0x00000001,     ///<Odd parity.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PtVal> pt{}; 
        namespace PtValC{
            constexpr Register::FieldValue<decltype(pt),PtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pt),PtVal::v1> v1{};
        }
        ///Parity Enable
        enum class PeVal {
            v0=0x00000000,     ///<Parity function disabled.
            v1=0x00000001,     ///<Parity function enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Idle Line Type Select
        enum class IltVal {
            v0=0x00000000,     ///<Idle character bit count starts after start bit.
            v1=0x00000001,     ///<Idle character bit count starts after stop bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,IltVal> ilt{}; 
        namespace IltValC{
            constexpr Register::FieldValue<decltype(ilt),IltVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ilt),IltVal::v1> v1{};
        }
        ///Receiver Wakeup Method Select
        enum class WakeVal {
            v0=0x00000000,     ///<Idle line wakeup.
            v1=0x00000001,     ///<Address mark wakeup.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,WakeVal> wake{}; 
        namespace WakeValC{
            constexpr Register::FieldValue<decltype(wake),WakeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wake),WakeVal::v1> v1{};
        }
        ///9-bit or 8-bit Mode Select
        enum class MVal {
            v0=0x00000000,     ///<Normal-start + 8 data bits (MSB/LSB first as determined by MSBF) + stop.
            v1=0x00000001,     ///<Use-start + 9 data bits (MSB/LSB first as determined by MSBF) + stop.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,MVal> m{}; 
        namespace MValC{
            constexpr Register::FieldValue<decltype(m),MVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m),MVal::v1> v1{};
        }
        ///Receiver Source Select
        enum class RsrcVal {
            v0=0x00000000,     ///<Selects internal loop back mode. The receiver input is internally connected to transmitter output.
            v1=0x00000001,     ///<Single wire UART mode where the receiver input is connected to the transmit pin input signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RsrcVal> rsrc{}; 
        namespace RsrcValC{
            constexpr Register::FieldValue<decltype(rsrc),RsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rsrc),RsrcVal::v1> v1{};
        }
        ///Loop Mode Select
        enum class LoopsVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Loop mode where transmitter output is internally connected to receiver input. The receiver input is determined by RSRC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LoopsVal> loops{}; 
        namespace LoopsValC{
            constexpr Register::FieldValue<decltype(loops),LoopsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(loops),LoopsVal::v1> v1{};
        }
    }
    namespace Uart2C2{    ///<UART Control Register 2
        using Addr = Register::Address<0x4006c003,0xffffff00,0,unsigned char>;
        ///Send Break
        enum class SbkVal {
            v0=0x00000000,     ///<Normal transmitter operation.
            v1=0x00000001,     ///<Queue break characters to be sent.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SbkVal> sbk{}; 
        namespace SbkValC{
            constexpr Register::FieldValue<decltype(sbk),SbkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sbk),SbkVal::v1> v1{};
        }
        ///Receiver Wakeup Control
        enum class RwuVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<RWU enables the wakeup function and inhibits further receiver interrupt requests. Normally, hardware wakes the receiver by automatically clearing RWU.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RwuVal> rwu{}; 
        namespace RwuValC{
            constexpr Register::FieldValue<decltype(rwu),RwuVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rwu),RwuVal::v1> v1{};
        }
        ///Receiver Enable
        enum class ReVal {
            v0=0x00000000,     ///<Receiver off.
            v1=0x00000001,     ///<Receiver on.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ReVal> re{}; 
        namespace ReValC{
            constexpr Register::FieldValue<decltype(re),ReVal::v0> v0{};
            constexpr Register::FieldValue<decltype(re),ReVal::v1> v1{};
        }
        ///Transmitter Enable
        enum class TeVal {
            v0=0x00000000,     ///<Transmitter off.
            v1=0x00000001,     ///<Transmitter on.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TeVal> te{}; 
        namespace TeValC{
            constexpr Register::FieldValue<decltype(te),TeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(te),TeVal::v1> v1{};
        }
        ///Idle Line Interrupt Enable
        enum class IlieVal {
            v0=0x00000000,     ///<IDLE interrupt requests disabled.
            v1=0x00000001,     ///<IDLE interrupt requests enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IlieVal> ilie{}; 
        namespace IlieValC{
            constexpr Register::FieldValue<decltype(ilie),IlieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ilie),IlieVal::v1> v1{};
        }
        ///Receiver Full Interrupt or DMA Transfer Enable
        enum class RieVal {
            v0=0x00000000,     ///<RDRF interrupt and DMA transfer requests disabled.
            v1=0x00000001,     ///<RDRF interrupt or DMA transfer requests enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RieVal> rie{}; 
        namespace RieValC{
            constexpr Register::FieldValue<decltype(rie),RieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rie),RieVal::v1> v1{};
        }
        ///Transmission Complete Interrupt Enable
        enum class TcieVal {
            v0=0x00000000,     ///<TC interrupt requests disabled.
            v1=0x00000001,     ///<TC interrupt requests enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TcieVal> tcie{}; 
        namespace TcieValC{
            constexpr Register::FieldValue<decltype(tcie),TcieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcie),TcieVal::v1> v1{};
        }
        ///Transmitter Interrupt or DMA Transfer Enable.
        enum class TieVal {
            v0=0x00000000,     ///<TDRE interrupt and DMA transfer requests disabled.
            v1=0x00000001,     ///<TDRE interrupt or DMA transfer requests enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TieVal> tie{}; 
        namespace TieValC{
            constexpr Register::FieldValue<decltype(tie),TieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tie),TieVal::v1> v1{};
        }
    }
    namespace Uart2S1{    ///<UART Status Register 1
        using Addr = Register::Address<0x4006c004,0xffffff00,0,unsigned char>;
        ///Parity Error Flag
        enum class PfVal {
            v0=0x00000000,     ///<No parity error detected since the last time this flag was cleared. If the receive buffer has a depth greater than 1, then there may be data in the receive buffer what was received with a parity error.
            v1=0x00000001,     ///<At least one dataword was received with a parity error since the last time this flag was cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PfVal> pf{}; 
        namespace PfValC{
            constexpr Register::FieldValue<decltype(pf),PfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pf),PfVal::v1> v1{};
        }
        ///Framing Error Flag
        enum class FeVal {
            v0=0x00000000,     ///<No framing error detected.
            v1=0x00000001,     ///<Framing error.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FeVal> fe{}; 
        namespace FeValC{
            constexpr Register::FieldValue<decltype(fe),FeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fe),FeVal::v1> v1{};
        }
        ///Noise Flag
        enum class NfVal {
            v0=0x00000000,     ///<No noise detected since the last time this flag was cleared. If the receive buffer has a depth greater than 1 then there may be data in the receiver buffer that was received with noise.
            v1=0x00000001,     ///<At least one dataword was received with noise detected since the last time the flag was cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NfVal> nf{}; 
        namespace NfValC{
            constexpr Register::FieldValue<decltype(nf),NfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nf),NfVal::v1> v1{};
        }
        ///Receiver Overrun Flag
        enum class Or_Val {
            v0=0x00000000,     ///<No overrun has occurred since the last time the flag was cleared.
            v1=0x00000001,     ///<Overrun has occurred or the overrun flag has not been cleared since the last overrun occured.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Or_Val> or_{}; 
        namespace Or_ValC{
            constexpr Register::FieldValue<decltype(or_),Or_Val::v0> v0{};
            constexpr Register::FieldValue<decltype(or_),Or_Val::v1> v1{};
        }
        ///Idle Line Flag
        enum class IdleVal {
            v0=0x00000000,     ///<Receiver input is either active now or has never become active since the IDLE flag was last cleared.
            v1=0x00000001,     ///<Receiver input has become idle or the flag has not been cleared since it last asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IdleVal> idle{}; 
        namespace IdleValC{
            constexpr Register::FieldValue<decltype(idle),IdleVal::v0> v0{};
            constexpr Register::FieldValue<decltype(idle),IdleVal::v1> v1{};
        }
        ///Receive Data Register Full Flag
        enum class RdrfVal {
            v0=0x00000000,     ///<The number of datawords in the receive buffer is less than the number indicated by RXWATER.
            v1=0x00000001,     ///<The number of datawords in the receive buffer is equal to or greater than the number indicated by RXWATER at some point in time since this flag was last cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RdrfVal> rdrf{}; 
        namespace RdrfValC{
            constexpr Register::FieldValue<decltype(rdrf),RdrfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rdrf),RdrfVal::v1> v1{};
        }
        ///Transmit Complete Flag
        enum class TcVal {
            v0=0x00000000,     ///<Transmitter active (sending data, a preamble, or a break).
            v1=0x00000001,     ///<Transmitter idle (transmission activity complete).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TcVal> tc{}; 
        namespace TcValC{
            constexpr Register::FieldValue<decltype(tc),TcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tc),TcVal::v1> v1{};
        }
        ///Transmit Data Register Empty Flag
        enum class TdreVal {
            v0=0x00000000,     ///<The amount of data in the transmit buffer is greater than the value indicated by TWFIFO[TXWATER].
            v1=0x00000001,     ///<The amount of data in the transmit buffer is less than or equal to the value indicated by TWFIFO[TXWATER] at some point in time since the flag has been cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TdreVal> tdre{}; 
        namespace TdreValC{
            constexpr Register::FieldValue<decltype(tdre),TdreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdre),TdreVal::v1> v1{};
        }
    }
    namespace Uart2S2{    ///<UART Status Register 2
        using Addr = Register::Address<0x4006c005,0xffffff82,0,unsigned char>;
        ///Receiver Active Flag
        enum class RafVal {
            v0=0x00000000,     ///<UART receiver idle/inactive waiting for a start bit.
            v1=0x00000001,     ///<UART receiver active, RxD input not idle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RafVal> raf{}; 
        namespace RafValC{
            constexpr Register::FieldValue<decltype(raf),RafVal::v0> v0{};
            constexpr Register::FieldValue<decltype(raf),RafVal::v1> v1{};
        }
        ///Break Transmit Character Length
        enum class Brk13Val {
            v0=0x00000000,     ///<Break character is 10, 11, or 12 bits long.
            v1=0x00000001,     ///<Break character is 13 or 14 bits long.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Brk13Val> brk13{}; 
        namespace Brk13ValC{
            constexpr Register::FieldValue<decltype(brk13),Brk13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(brk13),Brk13Val::v1> v1{};
        }
        ///Receive Wakeup Idle Detect
        enum class RwuidVal {
            v0=0x00000000,     ///<S1[IDLE] is not set upon detection of an idle character.
            v1=0x00000001,     ///<S1[IDLE] is set upon detection of an idle character.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RwuidVal> rwuid{}; 
        namespace RwuidValC{
            constexpr Register::FieldValue<decltype(rwuid),RwuidVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rwuid),RwuidVal::v1> v1{};
        }
        ///Receive Data Inversion
        enum class RxinvVal {
            v0=0x00000000,     ///<Receive data is not inverted.
            v1=0x00000001,     ///<Receive data is inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RxinvVal> rxinv{}; 
        namespace RxinvValC{
            constexpr Register::FieldValue<decltype(rxinv),RxinvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxinv),RxinvVal::v1> v1{};
        }
        ///Most Significant Bit First
        enum class MsbfVal {
            v0=0x00000000,     ///<LSB (bit0) is the first bit that is transmitted following the start bit. Further, the first bit received after the start bit is identified as bit0.
            v1=0x00000001,     ///<MSB (bit8, bit7 or bit6) is the first bit that is transmitted following the start bit, depending on the setting of C1[M] and C1[PE]. Further, the first bit received after the start bit is identified as bit8, bit7, or bit6, depending on the setting of C1[M] and C1[PE].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MsbfVal> msbf{}; 
        namespace MsbfValC{
            constexpr Register::FieldValue<decltype(msbf),MsbfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(msbf),MsbfVal::v1> v1{};
        }
        ///RxD Pin Active Edge Interrupt Flag
        enum class RxedgifVal {
            v0=0x00000000,     ///<No active edge on the receive pin has occurred.
            v1=0x00000001,     ///<An active edge on the receive pin has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RxedgifVal> rxedgif{}; 
        namespace RxedgifValC{
            constexpr Register::FieldValue<decltype(rxedgif),RxedgifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxedgif),RxedgifVal::v1> v1{};
        }
    }
    namespace Uart2C3{    ///<UART Control Register 3
        using Addr = Register::Address<0x4006c006,0xffffff00,0,unsigned char>;
        ///Parity Error Interrupt Enable
        enum class PeieVal {
            v0=0x00000000,     ///<PF interrupt requests are disabled.
            v1=0x00000001,     ///<PF interrupt requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeieVal> peie{}; 
        namespace PeieValC{
            constexpr Register::FieldValue<decltype(peie),PeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(peie),PeieVal::v1> v1{};
        }
        ///Framing Error Interrupt Enable
        enum class FeieVal {
            v0=0x00000000,     ///<FE interrupt requests are disabled.
            v1=0x00000001,     ///<FE interrupt requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FeieVal> feie{}; 
        namespace FeieValC{
            constexpr Register::FieldValue<decltype(feie),FeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(feie),FeieVal::v1> v1{};
        }
        ///Noise Error Interrupt Enable
        enum class NeieVal {
            v0=0x00000000,     ///<NF interrupt requests are disabled.
            v1=0x00000001,     ///<NF interrupt requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NeieVal> neie{}; 
        namespace NeieValC{
            constexpr Register::FieldValue<decltype(neie),NeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(neie),NeieVal::v1> v1{};
        }
        ///Overrun Error Interrupt Enable
        enum class OrieVal {
            v0=0x00000000,     ///<OR interrupts are disabled.
            v1=0x00000001,     ///<OR interrupt requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,OrieVal> orie{}; 
        namespace OrieValC{
            constexpr Register::FieldValue<decltype(orie),OrieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(orie),OrieVal::v1> v1{};
        }
        ///Transmit Data Inversion.
        enum class TxinvVal {
            v0=0x00000000,     ///<Transmit data is not inverted.
            v1=0x00000001,     ///<Transmit data is inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TxinvVal> txinv{}; 
        namespace TxinvValC{
            constexpr Register::FieldValue<decltype(txinv),TxinvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txinv),TxinvVal::v1> v1{};
        }
        ///Transmitter Pin Data Direction in Single-Wire mode
        enum class TxdirVal {
            v0=0x00000000,     ///<TXD pin is an input in single wire mode.
            v1=0x00000001,     ///<TXD pin is an output in single wire mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TxdirVal> txdir{}; 
        namespace TxdirValC{
            constexpr Register::FieldValue<decltype(txdir),TxdirVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txdir),TxdirVal::v1> v1{};
        }
        ///Transmit Bit 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> t8{}; 
        namespace T8ValC{
        }
        ///Received Bit 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> r8{}; 
        namespace R8ValC{
        }
    }
    namespace Uart2D{    ///<UART Data Register
        using Addr = Register::Address<0x4006c007,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rt{}; 
        namespace RtValC{
        }
    }
    namespace Uart2Ma1{    ///<UART Match Address Registers 1
        using Addr = Register::Address<0x4006c008,0xffffff00,0,unsigned char>;
        ///Match Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ma{}; 
        namespace MaValC{
        }
    }
    namespace Uart2Ma2{    ///<UART Match Address Registers 2
        using Addr = Register::Address<0x4006c009,0xffffff00,0,unsigned char>;
        ///Match Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ma{}; 
        namespace MaValC{
        }
    }
    namespace Uart2C4{    ///<UART Control Register 4
        using Addr = Register::Address<0x4006c00a,0xffffff00,0,unsigned char>;
        ///Baud Rate Fine Adjust
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> brfa{}; 
        namespace BrfaValC{
        }
        ///10-bit Mode select
        enum class M10Val {
            v0=0x00000000,     ///<The parity bit is the ninth bit in the serial transmission.
            v1=0x00000001,     ///<The parity bit is the tenth bit in the serial transmission.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,M10Val> m10{}; 
        namespace M10ValC{
            constexpr Register::FieldValue<decltype(m10),M10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(m10),M10Val::v1> v1{};
        }
        ///Match Address Mode Enable 2
        enum class Maen2Val {
            v0=0x00000000,     ///<All data received is transferred to the data buffer if MAEN1 is cleared.
            v1=0x00000001,     ///<All data received with the most significant bit cleared, is discarded. All data received with the most significant bit set, is compared with contents of MA2 register. If no match occurs, the data is discarded. If a match occurs, data is transferred to the data buffer. This field must be cleared when C7816[ISO7816E] is set/enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Maen2Val> maen2{}; 
        namespace Maen2ValC{
            constexpr Register::FieldValue<decltype(maen2),Maen2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(maen2),Maen2Val::v1> v1{};
        }
        ///Match Address Mode Enable 1
        enum class Maen1Val {
            v0=0x00000000,     ///<All data received is transferred to the data buffer if MAEN2 is cleared.
            v1=0x00000001,     ///<All data received with the most significant bit cleared, is discarded. All data received with the most significant bit set, is compared with contents of MA1 register. If no match occurs, the data is discarded. If match occurs, data is transferred to the data buffer. This field must be cleared when C7816[ISO7816E] is set/enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Maen1Val> maen1{}; 
        namespace Maen1ValC{
            constexpr Register::FieldValue<decltype(maen1),Maen1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(maen1),Maen1Val::v1> v1{};
        }
    }
    namespace Uart2C5{    ///<UART Control Register 5
        using Addr = Register::Address<0x4006c00b,0xffffff5f,0,unsigned char>;
        ///Receiver Full DMA Select
        enum class RdmasVal {
            v0=0x00000000,     ///<If C2[RIE] and S1[RDRF] are set, the RDFR interrupt request signal is asserted to request an interrupt service.
            v1=0x00000001,     ///<If C2[RIE] and S1[RDRF] are set, the RDRF DMA request signal is asserted to request a DMA transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RdmasVal> rdmas{}; 
        namespace RdmasValC{
            constexpr Register::FieldValue<decltype(rdmas),RdmasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rdmas),RdmasVal::v1> v1{};
        }
        ///Transmitter DMA Select
        enum class TdmasVal {
            v0=0x00000000,     ///<If C2[TIE] is set and the S1[TDRE] flag is set, the TDRE interrupt request signal is asserted to request interrupt service.
            v1=0x00000001,     ///<If C2[TIE] is set and the S1[TDRE] flag is set, the TDRE DMA request signal is asserted to request a DMA transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TdmasVal> tdmas{}; 
        namespace TdmasValC{
            constexpr Register::FieldValue<decltype(tdmas),TdmasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdmas),TdmasVal::v1> v1{};
        }
    }
    namespace Uart2C7816{    ///<UART 7816 Control Register
        using Addr = Register::Address<0x4006c018,0xffffffe0,0,unsigned char>;
        ///ISO-7816 Functionality Enabled
        enum class Iso7816eVal {
            v0=0x00000000,     ///<ISO-7816 functionality is turned off/not enabled.
            v1=0x00000001,     ///<ISO-7816 functionality is turned on/enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Iso7816eVal> iso7816e{}; 
        namespace Iso7816eValC{
            constexpr Register::FieldValue<decltype(iso7816e),Iso7816eVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iso7816e),Iso7816eVal::v1> v1{};
        }
        ///Transfer Type
        enum class TtypeVal {
            v0=0x00000000,     ///<T = 0 per the ISO-7816 specification.
            v1=0x00000001,     ///<T = 1 per the ISO-7816 specification.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TtypeVal> ttype{}; 
        namespace TtypeValC{
            constexpr Register::FieldValue<decltype(ttype),TtypeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ttype),TtypeVal::v1> v1{};
        }
        ///Detect Initial Character
        enum class InitVal {
            v0=0x00000000,     ///<Normal operating mode. Receiver does not seek to identify initial character.
            v1=0x00000001,     ///<Receiver searches for initial character.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,InitVal> init{}; 
        namespace InitValC{
            constexpr Register::FieldValue<decltype(init),InitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(init),InitVal::v1> v1{};
        }
        ///Generate NACK on Error
        enum class AnackVal {
            v0=0x00000000,     ///<No NACK is automatically generated.
            v1=0x00000001,     ///<A NACK is automatically generated if a parity error is detected or if an invalid initial character is detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AnackVal> anack{}; 
        namespace AnackValC{
            constexpr Register::FieldValue<decltype(anack),AnackVal::v0> v0{};
            constexpr Register::FieldValue<decltype(anack),AnackVal::v1> v1{};
        }
        ///Generate NACK on Overflow
        enum class OnackVal {
            v0=0x00000000,     ///<The received data does not generate a NACK when the receipt of the data results in an overflow event.
            v1=0x00000001,     ///<If the receiver buffer overflows, a NACK is automatically sent on a received character.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,OnackVal> onack{}; 
        namespace OnackValC{
            constexpr Register::FieldValue<decltype(onack),OnackVal::v0> v0{};
            constexpr Register::FieldValue<decltype(onack),OnackVal::v1> v1{};
        }
    }
    namespace Uart2Ie7816{    ///<UART 7816 Interrupt Enable Register
        using Addr = Register::Address<0x4006c019,0xffffff00,0,unsigned char>;
        ///Receive Threshold Exceeded Interrupt Enable
        enum class RxteVal {
            v0=0x00000000,     ///<The assertion of IS7816[RXT] does not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of IS7816[RXT] results in the generation of an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RxteVal> rxte{}; 
        namespace RxteValC{
            constexpr Register::FieldValue<decltype(rxte),RxteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxte),RxteVal::v1> v1{};
        }
        ///Transmit Threshold Exceeded Interrupt Enable
        enum class TxteVal {
            v0=0x00000000,     ///<The assertion of IS7816[TXT] does not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of IS7816[TXT] results in the generation of an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TxteVal> txte{}; 
        namespace TxteValC{
            constexpr Register::FieldValue<decltype(txte),TxteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txte),TxteVal::v1> v1{};
        }
        ///Guard Timer Violated Interrupt Enable
        enum class GtveVal {
            v0=0x00000000,     ///<The assertion of IS7816[GTV] does not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of IS7816[GTV] results in the generation of an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,GtveVal> gtve{}; 
        namespace GtveValC{
            constexpr Register::FieldValue<decltype(gtve),GtveVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gtve),GtveVal::v1> v1{};
        }
        ///ATR Duration Timer Interrupt Enable
        enum class AdteVal {
            v0=0x00000000,     ///<The assertion of IS7816[ADT] does not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of IS7816[ADT] results in the generation of an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AdteVal> adte{}; 
        namespace AdteValC{
            constexpr Register::FieldValue<decltype(adte),AdteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adte),AdteVal::v1> v1{};
        }
        ///Initial Character Detected Interrupt Enable
        enum class InitdeVal {
            v0=0x00000000,     ///<The assertion of IS7816[INITD] does not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of IS7816[INITD] results in the generation of an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,InitdeVal> initde{}; 
        namespace InitdeValC{
            constexpr Register::FieldValue<decltype(initde),InitdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(initde),InitdeVal::v1> v1{};
        }
        ///Block Wait Timer Interrupt Enable
        enum class BwteVal {
            v0=0x00000000,     ///<The assertion of IS7816[BWT] does not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of IS7816[BWT] results in the generation of an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BwteVal> bwte{}; 
        namespace BwteValC{
            constexpr Register::FieldValue<decltype(bwte),BwteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bwte),BwteVal::v1> v1{};
        }
        ///Character Wait Timer Interrupt Enable
        enum class CwteVal {
            v0=0x00000000,     ///<The assertion of IS7816[CWT] does not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of IS7816[CWT] results in the generation of an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CwteVal> cwte{}; 
        namespace CwteValC{
            constexpr Register::FieldValue<decltype(cwte),CwteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cwte),CwteVal::v1> v1{};
        }
        ///Wait Timer Interrupt Enable
        enum class WteVal {
            v0=0x00000000,     ///<The assertion of IS7816[WT] does not result in the generation of an interrupt.
            v1=0x00000001,     ///<The assertion of IS7816[WT] results in the generation of an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,WteVal> wte{}; 
        namespace WteValC{
            constexpr Register::FieldValue<decltype(wte),WteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wte),WteVal::v1> v1{};
        }
    }
    namespace Uart2Is7816{    ///<UART 7816 Interrupt Status Register
        using Addr = Register::Address<0x4006c01a,0xffffff00,0,unsigned char>;
        ///Receive Threshold Exceeded Interrupt
        enum class RxtVal {
            v0=0x00000000,     ///<The number of consecutive NACKS generated as a result of parity errors and buffer overruns is less than or equal to the value in ET7816[RXTHRESHOLD].
            v1=0x00000001,     ///<The number of consecutive NACKS generated as a result of parity errors and buffer overruns is greater than the value in ET7816[RXTHRESHOLD].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RxtVal> rxt{}; 
        namespace RxtValC{
            constexpr Register::FieldValue<decltype(rxt),RxtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxt),RxtVal::v1> v1{};
        }
        ///Transmit Threshold Exceeded Interrupt
        enum class TxtVal {
            v0=0x00000000,     ///<The number of retries and corresponding NACKS does not exceed the value in ET7816[TXTHRESHOLD].
            v1=0x00000001,     ///<The number of retries and corresponding NACKS exceeds the value in ET7816[TXTHRESHOLD].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TxtVal> txt{}; 
        namespace TxtValC{
            constexpr Register::FieldValue<decltype(txt),TxtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txt),TxtVal::v1> v1{};
        }
        ///Guard Timer Violated Interrupt
        enum class GtvVal {
            v0=0x00000000,     ///<A guard time (GT, CGT, or BGT) has not been violated.
            v1=0x00000001,     ///<A guard time (GT, CGT, or BGT) has been violated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,GtvVal> gtv{}; 
        namespace GtvValC{
            constexpr Register::FieldValue<decltype(gtv),GtvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gtv),GtvVal::v1> v1{};
        }
        ///ATR Duration Time Interrupt
        enum class AdtVal {
            v0=0x00000000,     ///<ATR Duration time (ADT) has not been violated.
            v1=0x00000001,     ///<ATR Duration time (ADT) has been violated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AdtVal> adt{}; 
        namespace AdtValC{
            constexpr Register::FieldValue<decltype(adt),AdtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adt),AdtVal::v1> v1{};
        }
        ///Initial Character Detected Interrupt
        enum class InitdVal {
            v0=0x00000000,     ///<A valid initial character has not been received.
            v1=0x00000001,     ///<A valid initial character has been received.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,InitdVal> initd{}; 
        namespace InitdValC{
            constexpr Register::FieldValue<decltype(initd),InitdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(initd),InitdVal::v1> v1{};
        }
        ///Block Wait Timer Interrupt
        enum class BwtVal {
            v0=0x00000000,     ///<Block wait time (BWT) has not been violated.
            v1=0x00000001,     ///<Block wait time (BWT) has been violated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BwtVal> bwt{}; 
        namespace BwtValC{
            constexpr Register::FieldValue<decltype(bwt),BwtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bwt),BwtVal::v1> v1{};
        }
        ///Character Wait Timer Interrupt
        enum class CwtVal {
            v0=0x00000000,     ///<Character wait time (CWT) has not been violated.
            v1=0x00000001,     ///<Character wait time (CWT) has been violated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CwtVal> cwt{}; 
        namespace CwtValC{
            constexpr Register::FieldValue<decltype(cwt),CwtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cwt),CwtVal::v1> v1{};
        }
        ///Wait Timer Interrupt
        enum class WtVal {
            v0=0x00000000,     ///<Wait time (WT) has not been violated.
            v1=0x00000001,     ///<Wait time (WT) has been violated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,WtVal> wt{}; 
        namespace WtValC{
            constexpr Register::FieldValue<decltype(wt),WtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wt),WtVal::v1> v1{};
        }
    }
    namespace Uart2Wp7816{    ///<UART 7816 Wait Parameter Register
        using Addr = Register::Address<0x4006c01b,0xffffff00,0,unsigned char>;
        ///Wait Time Multiplier (C7816[TTYPE] = 1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wtx{}; 
        namespace WtxValC{
        }
    }
    namespace Uart2Wn7816{    ///<UART 7816 Wait N Register
        using Addr = Register::Address<0x4006c01c,0xffffff00,0,unsigned char>;
        ///Guard Band N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gtn{}; 
        namespace GtnValC{
        }
    }
    namespace Uart2Wf7816{    ///<UART 7816 Wait FD Register
        using Addr = Register::Address<0x4006c01d,0xffffff00,0,unsigned char>;
        ///FD Multiplier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gtfd{}; 
        namespace GtfdValC{
        }
    }
    namespace Uart2Et7816{    ///<UART 7816 Error Threshold Register
        using Addr = Register::Address<0x4006c01e,0xffffff00,0,unsigned char>;
        ///Receive NACK Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rxthreshold{}; 
        namespace RxthresholdValC{
        }
        ///Transmit NACK Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> txthreshold{}; 
        namespace TxthresholdValC{
        }
    }
    namespace Uart2Tl7816{    ///<UART 7816 Transmit Length Register
        using Addr = Register::Address<0x4006c01f,0xffffff00,0,unsigned char>;
        ///Transmit Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tlen{}; 
        namespace TlenValC{
        }
    }
    namespace Uart2Ap7816aT0{    ///<UART 7816 ATR Duration Timer Register A
        using Addr = Register::Address<0x4006c03a,0xffffff00,0,unsigned char>;
        ///ATR Duration Time Integer High (C7816[TTYPE] = 0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adtiH{}; 
        namespace AdtihValC{
        }
    }
    namespace Uart2Ap7816bT0{    ///<UART 7816 ATR Duration Timer Register B
        using Addr = Register::Address<0x4006c03b,0xffffff00,0,unsigned char>;
        ///ATR Duration Time Integer Low (C7816[TTYPE] = 0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adtiL{}; 
        namespace AdtilValC{
        }
    }
    namespace Uart2Wp7816aT0{    ///<UART 7816 Wait Parameter Register A
        using Addr = Register::Address<0x4006c03c,0xffffff00,0,unsigned char>;
        ///Wait Time Integer High (C7816[TTYPE] = 0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wiH{}; 
        namespace WihValC{
        }
    }
    namespace Uart2Wp7816aT1{    ///<UART 7816 Wait Parameter Register A
        using Addr = Register::Address<0x4006c03c,0xffffff00,0,unsigned char>;
        ///Block Wait Time Integer High (C7816[TTYPE] = 1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bwiH{}; 
        namespace BwihValC{
        }
    }
    namespace Uart2Wp7816bT0{    ///<UART 7816 Wait Parameter Register B
        using Addr = Register::Address<0x4006c03d,0xffffff00,0,unsigned char>;
        ///Wait Time Integer Low (C7816[TTYPE] = 0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wiL{}; 
        namespace WilValC{
        }
    }
    namespace Uart2Wp7816bT1{    ///<UART 7816 Wait Parameter Register B
        using Addr = Register::Address<0x4006c03d,0xffffff00,0,unsigned char>;
        ///Block Wait Time Integer Low (C7816[TTYPE] = 1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bwiL{}; 
        namespace BwilValC{
        }
    }
    namespace Uart2Wgp7816T1{    ///<UART 7816 Wait and Guard Parameter Register
        using Addr = Register::Address<0x4006c03e,0xffffff00,0,unsigned char>;
        ///Block Guard Time Integer (C7816[TTYPE] = 1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bgi{}; 
        namespace BgiValC{
        }
        ///Character Wait Time Integer 1 (C7816[TTYPE] = 1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> cwi1{}; 
        namespace Cwi1ValC{
        }
    }
    namespace Uart2Wp7816cT1{    ///<UART 7816 Wait Parameter Register C
        using Addr = Register::Address<0x4006c03f,0xffffffe0,0,unsigned char>;
        ///Character Wait Time Integer 2 (C7816[TTYPE] = 1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cwi2{}; 
        namespace Cwi2ValC{
        }
    }
}
