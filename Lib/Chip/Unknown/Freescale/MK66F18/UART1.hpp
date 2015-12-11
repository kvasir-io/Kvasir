#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial Communication Interface
    namespace Uart1Bdh{    ///<UART Baud Rate Registers: High
        using Addr = Register::Address<0x4006b000,0xffffff00,0,unsigned char>;
        ///UART Baud Rate Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sbr{}; 
        ///Stop Bit Number Select
        enum class SbnsVal {
            v0=0x00000000,     ///<Data frame consists of a single stop bit.
            v1=0x00000001,     ///<Data frame consists of two stop bits.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SbnsVal> sbns{}; 
        namespace SbnsValC{
            constexpr Register::FieldValue<decltype(sbns)::Type,SbnsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sbns)::Type,SbnsVal::v1> v1{};
        }
        ///RxD Input Active Edge Interrupt Enable
        enum class RxedgieVal {
            v0=0x00000000,     ///<Hardware interrupts from RXEDGIF disabled using polling.
            v1=0x00000001,     ///<RXEDGIF interrupt request enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RxedgieVal> rxedgie{}; 
        namespace RxedgieValC{
            constexpr Register::FieldValue<decltype(rxedgie)::Type,RxedgieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxedgie)::Type,RxedgieVal::v1> v1{};
        }
        ///LIN Break Detect Interrupt Enable
        enum class LbkdieVal {
            v0=0x00000000,     ///<LBKDIF interrupt requests disabled.
            v1=0x00000001,     ///<LBKDIF interrupt requests enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LbkdieVal> lbkdie{}; 
        namespace LbkdieValC{
            constexpr Register::FieldValue<decltype(lbkdie)::Type,LbkdieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lbkdie)::Type,LbkdieVal::v1> v1{};
        }
    }
    namespace Uart1Bdl{    ///<UART Baud Rate Registers: Low
        using Addr = Register::Address<0x4006b001,0xffffff00,0,unsigned char>;
        ///UART Baud Rate Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sbr{}; 
    }
    namespace Uart1C1{    ///<UART Control Register 1
        using Addr = Register::Address<0x4006b002,0xffffff00,0,unsigned char>;
        ///Parity Type
        enum class PtVal {
            v0=0x00000000,     ///<Even parity.
            v1=0x00000001,     ///<Odd parity.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PtVal> pt{}; 
        namespace PtValC{
            constexpr Register::FieldValue<decltype(pt)::Type,PtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pt)::Type,PtVal::v1> v1{};
        }
        ///Parity Enable
        enum class PeVal {
            v0=0x00000000,     ///<Parity function disabled.
            v1=0x00000001,     ///<Parity function enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Idle Line Type Select
        enum class IltVal {
            v0=0x00000000,     ///<Idle character bit count starts after start bit.
            v1=0x00000001,     ///<Idle character bit count starts after stop bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,IltVal> ilt{}; 
        namespace IltValC{
            constexpr Register::FieldValue<decltype(ilt)::Type,IltVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ilt)::Type,IltVal::v1> v1{};
        }
        ///Receiver Wakeup Method Select
        enum class WakeVal {
            v0=0x00000000,     ///<Idle line wakeup.
            v1=0x00000001,     ///<Address mark wakeup.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,WakeVal> wake{}; 
        namespace WakeValC{
            constexpr Register::FieldValue<decltype(wake)::Type,WakeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wake)::Type,WakeVal::v1> v1{};
        }
        ///9-bit or 8-bit Mode Select
        enum class MVal {
            v0=0x00000000,     ///<Normal-start + 8 data bits (MSB/LSB first as determined by MSBF) + stop.
            v1=0x00000001,     ///<Use-start + 9 data bits (MSB/LSB first as determined by MSBF) + stop.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,MVal> m{}; 
        namespace MValC{
            constexpr Register::FieldValue<decltype(m)::Type,MVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m)::Type,MVal::v1> v1{};
        }
        ///Receiver Source Select
        enum class RsrcVal {
            v0=0x00000000,     ///<Selects internal loop back mode. The receiver input is internally connected to transmitter output.
            v1=0x00000001,     ///<Single wire UART mode where the receiver input is connected to the transmit pin input signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RsrcVal> rsrc{}; 
        namespace RsrcValC{
            constexpr Register::FieldValue<decltype(rsrc)::Type,RsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rsrc)::Type,RsrcVal::v1> v1{};
        }
        ///UART Stops in Wait Mode
        enum class UartswaiVal {
            v0=0x00000000,     ///<UART clock continues to run in Wait mode.
            v1=0x00000001,     ///<UART clock freezes while CPU is in Wait mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,UartswaiVal> uartswai{}; 
        namespace UartswaiValC{
            constexpr Register::FieldValue<decltype(uartswai)::Type,UartswaiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uartswai)::Type,UartswaiVal::v1> v1{};
        }
        ///Loop Mode Select
        enum class LoopsVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Loop mode where transmitter output is internally connected to receiver input. The receiver input is determined by RSRC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LoopsVal> loops{}; 
        namespace LoopsValC{
            constexpr Register::FieldValue<decltype(loops)::Type,LoopsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(loops)::Type,LoopsVal::v1> v1{};
        }
    }
    namespace Uart1C2{    ///<UART Control Register 2
        using Addr = Register::Address<0x4006b003,0xffffff00,0,unsigned char>;
        ///Send Break
        enum class SbkVal {
            v0=0x00000000,     ///<Normal transmitter operation.
            v1=0x00000001,     ///<Queue break characters to be sent.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SbkVal> sbk{}; 
        namespace SbkValC{
            constexpr Register::FieldValue<decltype(sbk)::Type,SbkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sbk)::Type,SbkVal::v1> v1{};
        }
        ///Receiver Wakeup Control
        enum class RwuVal {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<RWU enables the wakeup function and inhibits further receiver interrupt requests. Normally, hardware wakes the receiver by automatically clearing RWU.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RwuVal> rwu{}; 
        namespace RwuValC{
            constexpr Register::FieldValue<decltype(rwu)::Type,RwuVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rwu)::Type,RwuVal::v1> v1{};
        }
        ///Receiver Enable
        enum class ReVal {
            v0=0x00000000,     ///<Receiver off.
            v1=0x00000001,     ///<Receiver on.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ReVal> re{}; 
        namespace ReValC{
            constexpr Register::FieldValue<decltype(re)::Type,ReVal::v0> v0{};
            constexpr Register::FieldValue<decltype(re)::Type,ReVal::v1> v1{};
        }
        ///Transmitter Enable
        enum class TeVal {
            v0=0x00000000,     ///<Transmitter off.
            v1=0x00000001,     ///<Transmitter on.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TeVal> te{}; 
        namespace TeValC{
            constexpr Register::FieldValue<decltype(te)::Type,TeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(te)::Type,TeVal::v1> v1{};
        }
        ///Idle Line Interrupt Enable
        enum class IlieVal {
            v0=0x00000000,     ///<IDLE interrupt requests disabled.
            v1=0x00000001,     ///<IDLE interrupt requests enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IlieVal> ilie{}; 
        namespace IlieValC{
            constexpr Register::FieldValue<decltype(ilie)::Type,IlieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ilie)::Type,IlieVal::v1> v1{};
        }
        ///Receiver Full Interrupt or DMA Transfer Enable
        enum class RieVal {
            v0=0x00000000,     ///<RDRF interrupt and DMA transfer requests disabled.
            v1=0x00000001,     ///<RDRF interrupt or DMA transfer requests enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RieVal> rie{}; 
        namespace RieValC{
            constexpr Register::FieldValue<decltype(rie)::Type,RieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rie)::Type,RieVal::v1> v1{};
        }
        ///Transmission Complete Interrupt Enable
        enum class TcieVal {
            v0=0x00000000,     ///<TC interrupt requests disabled.
            v1=0x00000001,     ///<TC interrupt requests enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TcieVal> tcie{}; 
        namespace TcieValC{
            constexpr Register::FieldValue<decltype(tcie)::Type,TcieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcie)::Type,TcieVal::v1> v1{};
        }
        ///Transmitter Interrupt or DMA Transfer Enable.
        enum class TieVal {
            v0=0x00000000,     ///<TDRE interrupt and DMA transfer requests disabled.
            v1=0x00000001,     ///<TDRE interrupt or DMA transfer requests enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TieVal> tie{}; 
        namespace TieValC{
            constexpr Register::FieldValue<decltype(tie)::Type,TieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tie)::Type,TieVal::v1> v1{};
        }
    }
    namespace Uart1S1{    ///<UART Status Register 1
        using Addr = Register::Address<0x4006b004,0xffffff00,0,unsigned char>;
        ///Parity Error Flag
        enum class PfVal {
            v0=0x00000000,     ///<No parity error detected since the last time this flag was cleared. If the receive buffer has a depth greater than 1, then there may be data in the receive buffer what was received with a parity error.
            v1=0x00000001,     ///<At least one dataword was received with a parity error since the last time this flag was cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PfVal> pf{}; 
        namespace PfValC{
            constexpr Register::FieldValue<decltype(pf)::Type,PfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pf)::Type,PfVal::v1> v1{};
        }
        ///Framing Error Flag
        enum class FeVal {
            v0=0x00000000,     ///<No framing error detected.
            v1=0x00000001,     ///<Framing error.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FeVal> fe{}; 
        namespace FeValC{
            constexpr Register::FieldValue<decltype(fe)::Type,FeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fe)::Type,FeVal::v1> v1{};
        }
        ///Noise Flag
        enum class NfVal {
            v0=0x00000000,     ///<No noise detected since the last time this flag was cleared. If the receive buffer has a depth greater than 1 then there may be data in the receiver buffer that was received with noise.
            v1=0x00000001,     ///<At least one dataword was received with noise detected since the last time the flag was cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NfVal> nf{}; 
        namespace NfValC{
            constexpr Register::FieldValue<decltype(nf)::Type,NfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nf)::Type,NfVal::v1> v1{};
        }
        ///Receiver Overrun Flag
        enum class Or_Val {
            v0=0x00000000,     ///<No overrun has occurred since the last time the flag was cleared.
            v1=0x00000001,     ///<Overrun has occurred or the overrun flag has not been cleared since the last overrun occured.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Or_Val> or_{}; 
        namespace Or_ValC{
            constexpr Register::FieldValue<decltype(or_)::Type,Or_Val::v0> v0{};
            constexpr Register::FieldValue<decltype(or_)::Type,Or_Val::v1> v1{};
        }
        ///Idle Line Flag
        enum class IdleVal {
            v0=0x00000000,     ///<Receiver input is either active now or has never become active since the IDLE flag was last cleared.
            v1=0x00000001,     ///<Receiver input has become idle or the flag has not been cleared since it last asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IdleVal> idle{}; 
        namespace IdleValC{
            constexpr Register::FieldValue<decltype(idle)::Type,IdleVal::v0> v0{};
            constexpr Register::FieldValue<decltype(idle)::Type,IdleVal::v1> v1{};
        }
        ///Receive Data Register Full Flag
        enum class RdrfVal {
            v0=0x00000000,     ///<The number of datawords in the receive buffer is less than the number indicated by RXWATER.
            v1=0x00000001,     ///<The number of datawords in the receive buffer is equal to or greater than the number indicated by RXWATER at some point in time since this flag was last cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RdrfVal> rdrf{}; 
        namespace RdrfValC{
            constexpr Register::FieldValue<decltype(rdrf)::Type,RdrfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rdrf)::Type,RdrfVal::v1> v1{};
        }
        ///Transmit Complete Flag
        enum class TcVal {
            v0=0x00000000,     ///<Transmitter active (sending data, a preamble, or a break).
            v1=0x00000001,     ///<Transmitter idle (transmission activity complete).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TcVal> tc{}; 
        namespace TcValC{
            constexpr Register::FieldValue<decltype(tc)::Type,TcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tc)::Type,TcVal::v1> v1{};
        }
        ///Transmit Data Register Empty Flag
        enum class TdreVal {
            v0=0x00000000,     ///<The amount of data in the transmit buffer is greater than the value indicated by TWFIFO[TXWATER].
            v1=0x00000001,     ///<The amount of data in the transmit buffer is less than or equal to the value indicated by TWFIFO[TXWATER] at some point in time since the flag has been cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TdreVal> tdre{}; 
        namespace TdreValC{
            constexpr Register::FieldValue<decltype(tdre)::Type,TdreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdre)::Type,TdreVal::v1> v1{};
        }
    }
    namespace Uart1S2{    ///<UART Status Register 2
        using Addr = Register::Address<0x4006b005,0xffffff00,0,unsigned char>;
        ///Receiver Active Flag
        enum class RafVal {
            v0=0x00000000,     ///<UART receiver idle/inactive waiting for a start bit.
            v1=0x00000001,     ///<UART receiver active, RxD input not idle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RafVal> raf{}; 
        namespace RafValC{
            constexpr Register::FieldValue<decltype(raf)::Type,RafVal::v0> v0{};
            constexpr Register::FieldValue<decltype(raf)::Type,RafVal::v1> v1{};
        }
        ///LIN Break Detection Enable
        enum class LbkdeVal {
            v0=0x00000000,     ///<Break character detection is disabled.
            v1=0x00000001,     ///<Break character is detected at length of 11 bit times if C1[M] = 0 or 12 bits time if C1[M] = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,LbkdeVal> lbkde{}; 
        namespace LbkdeValC{
            constexpr Register::FieldValue<decltype(lbkde)::Type,LbkdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lbkde)::Type,LbkdeVal::v1> v1{};
        }
        ///Break Transmit Character Length
        enum class Brk13Val {
            v0=0x00000000,     ///<Break character is 10, 11, or 12 bits long.
            v1=0x00000001,     ///<Break character is 13 or 14 bits long.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Brk13Val> brk13{}; 
        namespace Brk13ValC{
            constexpr Register::FieldValue<decltype(brk13)::Type,Brk13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(brk13)::Type,Brk13Val::v1> v1{};
        }
        ///Receive Wakeup Idle Detect
        enum class RwuidVal {
            v0=0x00000000,     ///<S1[IDLE] is not set upon detection of an idle character.
            v1=0x00000001,     ///<S1[IDLE] is set upon detection of an idle character.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RwuidVal> rwuid{}; 
        namespace RwuidValC{
            constexpr Register::FieldValue<decltype(rwuid)::Type,RwuidVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rwuid)::Type,RwuidVal::v1> v1{};
        }
        ///Receive Data Inversion
        enum class RxinvVal {
            v0=0x00000000,     ///<Receive data is not inverted.
            v1=0x00000001,     ///<Receive data is inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RxinvVal> rxinv{}; 
        namespace RxinvValC{
            constexpr Register::FieldValue<decltype(rxinv)::Type,RxinvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxinv)::Type,RxinvVal::v1> v1{};
        }
        ///Most Significant Bit First
        enum class MsbfVal {
            v0=0x00000000,     ///<LSB (bit0) is the first bit that is transmitted following the start bit. Further, the first bit received after the start bit is identified as bit0.
            v1=0x00000001,     ///<MSB (bit8, bit7 or bit6) is the first bit that is transmitted following the start bit, depending on the setting of C1[M] and C1[PE]. Further, the first bit received after the start bit is identified as bit8, bit7, or bit6, depending on the setting of C1[M] and C1[PE].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MsbfVal> msbf{}; 
        namespace MsbfValC{
            constexpr Register::FieldValue<decltype(msbf)::Type,MsbfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(msbf)::Type,MsbfVal::v1> v1{};
        }
        ///RxD Pin Active Edge Interrupt Flag
        enum class RxedgifVal {
            v0=0x00000000,     ///<No active edge on the receive pin has occurred.
            v1=0x00000001,     ///<An active edge on the receive pin has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RxedgifVal> rxedgif{}; 
        namespace RxedgifValC{
            constexpr Register::FieldValue<decltype(rxedgif)::Type,RxedgifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxedgif)::Type,RxedgifVal::v1> v1{};
        }
        ///LIN Break Detect Interrupt Flag
        enum class LbkdifVal {
            v0=0x00000000,     ///<No LIN break character detected.
            v1=0x00000001,     ///<LIN break character detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LbkdifVal> lbkdif{}; 
        namespace LbkdifValC{
            constexpr Register::FieldValue<decltype(lbkdif)::Type,LbkdifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lbkdif)::Type,LbkdifVal::v1> v1{};
        }
    }
    namespace Uart1C3{    ///<UART Control Register 3
        using Addr = Register::Address<0x4006b006,0xffffff00,0,unsigned char>;
        ///Parity Error Interrupt Enable
        enum class PeieVal {
            v0=0x00000000,     ///<PF interrupt requests are disabled.
            v1=0x00000001,     ///<PF interrupt requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeieVal> peie{}; 
        namespace PeieValC{
            constexpr Register::FieldValue<decltype(peie)::Type,PeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(peie)::Type,PeieVal::v1> v1{};
        }
        ///Framing Error Interrupt Enable
        enum class FeieVal {
            v0=0x00000000,     ///<FE interrupt requests are disabled.
            v1=0x00000001,     ///<FE interrupt requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FeieVal> feie{}; 
        namespace FeieValC{
            constexpr Register::FieldValue<decltype(feie)::Type,FeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(feie)::Type,FeieVal::v1> v1{};
        }
        ///Noise Error Interrupt Enable
        enum class NeieVal {
            v0=0x00000000,     ///<NF interrupt requests are disabled.
            v1=0x00000001,     ///<NF interrupt requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NeieVal> neie{}; 
        namespace NeieValC{
            constexpr Register::FieldValue<decltype(neie)::Type,NeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(neie)::Type,NeieVal::v1> v1{};
        }
        ///Overrun Error Interrupt Enable
        enum class OrieVal {
            v0=0x00000000,     ///<OR interrupts are disabled.
            v1=0x00000001,     ///<OR interrupt requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,OrieVal> orie{}; 
        namespace OrieValC{
            constexpr Register::FieldValue<decltype(orie)::Type,OrieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(orie)::Type,OrieVal::v1> v1{};
        }
        ///Transmit Data Inversion.
        enum class TxinvVal {
            v0=0x00000000,     ///<Transmit data is not inverted.
            v1=0x00000001,     ///<Transmit data is inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TxinvVal> txinv{}; 
        namespace TxinvValC{
            constexpr Register::FieldValue<decltype(txinv)::Type,TxinvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txinv)::Type,TxinvVal::v1> v1{};
        }
        ///Transmitter Pin Data Direction in Single-Wire mode
        enum class TxdirVal {
            v0=0x00000000,     ///<TXD pin is an input in single wire mode.
            v1=0x00000001,     ///<TXD pin is an output in single wire mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TxdirVal> txdir{}; 
        namespace TxdirValC{
            constexpr Register::FieldValue<decltype(txdir)::Type,TxdirVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txdir)::Type,TxdirVal::v1> v1{};
        }
        ///Transmit Bit 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> t8{}; 
        ///Received Bit 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> r8{}; 
    }
    namespace Uart1D{    ///<UART Data Register
        using Addr = Register::Address<0x4006b007,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rt{}; 
    }
    namespace Uart1Ma1{    ///<UART Match Address Registers 1
        using Addr = Register::Address<0x4006b008,0xffffff00,0,unsigned char>;
        ///Match Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Uart1Ma2{    ///<UART Match Address Registers 2
        using Addr = Register::Address<0x4006b009,0xffffff00,0,unsigned char>;
        ///Match Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Uart1C4{    ///<UART Control Register 4
        using Addr = Register::Address<0x4006b00a,0xffffff00,0,unsigned char>;
        ///Baud Rate Fine Adjust
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> brfa{}; 
        ///10-bit Mode select
        enum class M10Val {
            v0=0x00000000,     ///<The parity bit is the ninth bit in the serial transmission.
            v1=0x00000001,     ///<The parity bit is the tenth bit in the serial transmission.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,M10Val> m10{}; 
        namespace M10ValC{
            constexpr Register::FieldValue<decltype(m10)::Type,M10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(m10)::Type,M10Val::v1> v1{};
        }
        ///Match Address Mode Enable 2
        enum class Maen2Val {
            v0=0x00000000,     ///<All data received is transferred to the data buffer if MAEN1 is cleared.
            v1=0x00000001,     ///<All data received with the most significant bit cleared, is discarded. All data received with the most significant bit set, is compared with contents of MA2 register. If no match occurs, the data is discarded. If a match occurs, data is transferred to the data buffer. This field must be cleared when C7816[ISO7816E] is set/enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Maen2Val> maen2{}; 
        namespace Maen2ValC{
            constexpr Register::FieldValue<decltype(maen2)::Type,Maen2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(maen2)::Type,Maen2Val::v1> v1{};
        }
        ///Match Address Mode Enable 1
        enum class Maen1Val {
            v0=0x00000000,     ///<All data received is transferred to the data buffer if MAEN2 is cleared.
            v1=0x00000001,     ///<All data received with the most significant bit cleared, is discarded. All data received with the most significant bit set, is compared with contents of MA1 register. If no match occurs, the data is discarded. If match occurs, data is transferred to the data buffer. This field must be cleared when C7816[ISO7816E] is set/enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Maen1Val> maen1{}; 
        namespace Maen1ValC{
            constexpr Register::FieldValue<decltype(maen1)::Type,Maen1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(maen1)::Type,Maen1Val::v1> v1{};
        }
    }
    namespace Uart1C5{    ///<UART Control Register 5
        using Addr = Register::Address<0x4006b00b,0xffffff5f,0,unsigned char>;
        ///Receiver Full DMA Select
        enum class RdmasVal {
            v0=0x00000000,     ///<If C2[RIE] and S1[RDRF] are set, the RDFR interrupt request signal is asserted to request an interrupt service.
            v1=0x00000001,     ///<If C2[RIE] and S1[RDRF] are set, the RDRF DMA request signal is asserted to request a DMA transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RdmasVal> rdmas{}; 
        namespace RdmasValC{
            constexpr Register::FieldValue<decltype(rdmas)::Type,RdmasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rdmas)::Type,RdmasVal::v1> v1{};
        }
        ///Transmitter DMA Select
        enum class TdmasVal {
            v0=0x00000000,     ///<If C2[TIE] is set and the S1[TDRE] flag is set, the TDRE interrupt request signal is asserted to request interrupt service.
            v1=0x00000001,     ///<If C2[TIE] is set and the S1[TDRE] flag is set, the TDRE DMA request signal is asserted to request a DMA transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TdmasVal> tdmas{}; 
        namespace TdmasValC{
            constexpr Register::FieldValue<decltype(tdmas)::Type,TdmasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdmas)::Type,TdmasVal::v1> v1{};
        }
    }
    namespace Uart1Ed{    ///<UART Extended Data Register
        using Addr = Register::Address<0x4006b00c,0xffffff3f,0,unsigned char>;
        ///no description available
        enum class ParityeVal {
            v0=0x00000000,     ///<The dataword was received without a parity error.
            v1=0x00000001,     ///<The dataword was received with a parity error.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ParityeVal> paritye{}; 
        namespace ParityeValC{
            constexpr Register::FieldValue<decltype(paritye)::Type,ParityeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(paritye)::Type,ParityeVal::v1> v1{};
        }
        ///no description available
        enum class NoisyVal {
            v0=0x00000000,     ///<The dataword was received without noise.
            v1=0x00000001,     ///<The data was received with noise.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,NoisyVal> noisy{}; 
        namespace NoisyValC{
            constexpr Register::FieldValue<decltype(noisy)::Type,NoisyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(noisy)::Type,NoisyVal::v1> v1{};
        }
    }
    namespace Uart1Modem{    ///<UART Modem Register
        using Addr = Register::Address<0x4006b00d,0xfffffff0,0,unsigned char>;
        ///Transmitter clear-to-send enable
        enum class TxctseVal {
            v0=0x00000000,     ///<CTS has no effect on the transmitter.
            v1=0x00000001,     ///<Enables clear-to-send operation. The transmitter checks the state of CTS each time it is ready to send a character. If CTS is asserted, the character is sent. If CTS is deasserted, the signal TXD remains in the mark state and transmission is delayed until CTS is asserted. Changes in CTS as a character is being sent do not affect its transmission.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TxctseVal> txctse{}; 
        namespace TxctseValC{
            constexpr Register::FieldValue<decltype(txctse)::Type,TxctseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txctse)::Type,TxctseVal::v1> v1{};
        }
        ///Transmitter request-to-send enable
        enum class TxrtseVal {
            v0=0x00000000,     ///<The transmitter has no effect on RTS.
            v1=0x00000001,     ///<When a character is placed into an empty transmitter data buffer , RTS asserts one bit time before the start bit is transmitted. RTS deasserts one bit time after all characters in the transmitter data buffer and shift register are completely sent, including the last stop bit. (FIFO) (FIFO)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TxrtseVal> txrtse{}; 
        namespace TxrtseValC{
            constexpr Register::FieldValue<decltype(txrtse)::Type,TxrtseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txrtse)::Type,TxrtseVal::v1> v1{};
        }
        ///Transmitter request-to-send polarity
        enum class TxrtspolVal {
            v0=0x00000000,     ///<Transmitter RTS is active low.
            v1=0x00000001,     ///<Transmitter RTS is active high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TxrtspolVal> txrtspol{}; 
        namespace TxrtspolValC{
            constexpr Register::FieldValue<decltype(txrtspol)::Type,TxrtspolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txrtspol)::Type,TxrtspolVal::v1> v1{};
        }
        ///Receiver request-to-send enable
        enum class RxrtseVal {
            v0=0x00000000,     ///<The receiver has no effect on RTS.
            v1=0x00000001,     ///<RTS is deasserted if the number of characters in the receiver data register (FIFO) is equal to or greater than RWFIFO[RXWATER]. RTS is asserted when the number of characters in the receiver data register (FIFO) is less than RWFIFO[RXWATER].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RxrtseVal> rxrtse{}; 
        namespace RxrtseValC{
            constexpr Register::FieldValue<decltype(rxrtse)::Type,RxrtseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxrtse)::Type,RxrtseVal::v1> v1{};
        }
    }
    namespace Uart1Ir{    ///<UART Infrared Register
        using Addr = Register::Address<0x4006b00e,0xfffffff8,0,unsigned char>;
        ///Transmitter narrow pulse
        enum class TnpVal {
            v00=0x00000000,     ///<3/16.
            v01=0x00000001,     ///<1/16.
            v10=0x00000002,     ///<1/32.
            v11=0x00000003,     ///<1/4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,TnpVal> tnp{}; 
        namespace TnpValC{
            constexpr Register::FieldValue<decltype(tnp)::Type,TnpVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tnp)::Type,TnpVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tnp)::Type,TnpVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tnp)::Type,TnpVal::v11> v11{};
        }
        ///Infrared enable
        enum class IrenVal {
            v0=0x00000000,     ///<IR disabled.
            v1=0x00000001,     ///<IR enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,IrenVal> iren{}; 
        namespace IrenValC{
            constexpr Register::FieldValue<decltype(iren)::Type,IrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iren)::Type,IrenVal::v1> v1{};
        }
    }
    namespace Uart1Pfifo{    ///<UART FIFO Parameters
        using Addr = Register::Address<0x4006b010,0xffffff00,0,unsigned char>;
        ///Receive FIFO. Buffer Depth
        enum class RxfifosizeVal {
            v000=0x00000000,     ///<Receive FIFO/Buffer depth = 1 dataword.
            v001=0x00000001,     ///<Receive FIFO/Buffer depth = 4 datawords.
            v010=0x00000002,     ///<Receive FIFO/Buffer depth = 8 datawords.
            v011=0x00000003,     ///<Receive FIFO/Buffer depth = 16 datawords.
            v100=0x00000004,     ///<Receive FIFO/Buffer depth = 32 datawords.
            v101=0x00000005,     ///<Receive FIFO/Buffer depth = 64 datawords.
            v110=0x00000006,     ///<Receive FIFO/Buffer depth = 128 datawords.
            v111=0x00000007,     ///<Reserved.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,RxfifosizeVal> rxfifosize{}; 
        namespace RxfifosizeValC{
            constexpr Register::FieldValue<decltype(rxfifosize)::Type,RxfifosizeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(rxfifosize)::Type,RxfifosizeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(rxfifosize)::Type,RxfifosizeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(rxfifosize)::Type,RxfifosizeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(rxfifosize)::Type,RxfifosizeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(rxfifosize)::Type,RxfifosizeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(rxfifosize)::Type,RxfifosizeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(rxfifosize)::Type,RxfifosizeVal::v111> v111{};
        }
        ///Receive FIFO Enable
        enum class RxfeVal {
            v0=0x00000000,     ///<Receive FIFO is not enabled. Buffer is depth 1. (Legacy support)
            v1=0x00000001,     ///<Receive FIFO is enabled. Buffer is depth indicted by RXFIFOSIZE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RxfeVal> rxfe{}; 
        namespace RxfeValC{
            constexpr Register::FieldValue<decltype(rxfe)::Type,RxfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxfe)::Type,RxfeVal::v1> v1{};
        }
        ///Transmit FIFO. Buffer Depth
        enum class TxfifosizeVal {
            v000=0x00000000,     ///<Transmit FIFO/Buffer depth = 1 dataword.
            v001=0x00000001,     ///<Transmit FIFO/Buffer depth = 4 datawords.
            v010=0x00000002,     ///<Transmit FIFO/Buffer depth = 8 datawords.
            v011=0x00000003,     ///<Transmit FIFO/Buffer depth = 16 datawords.
            v100=0x00000004,     ///<Transmit FIFO/Buffer depth = 32 datawords.
            v101=0x00000005,     ///<Transmit FIFO/Buffer depth = 64 datawords.
            v110=0x00000006,     ///<Transmit FIFO/Buffer depth = 128 datawords.
            v111=0x00000007,     ///<Reserved.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,TxfifosizeVal> txfifosize{}; 
        namespace TxfifosizeValC{
            constexpr Register::FieldValue<decltype(txfifosize)::Type,TxfifosizeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(txfifosize)::Type,TxfifosizeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(txfifosize)::Type,TxfifosizeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(txfifosize)::Type,TxfifosizeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(txfifosize)::Type,TxfifosizeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(txfifosize)::Type,TxfifosizeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(txfifosize)::Type,TxfifosizeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(txfifosize)::Type,TxfifosizeVal::v111> v111{};
        }
        ///Transmit FIFO Enable
        enum class TxfeVal {
            v0=0x00000000,     ///<Transmit FIFO is not enabled. Buffer is depth 1. (Legacy support).
            v1=0x00000001,     ///<Transmit FIFO is enabled. Buffer is depth indicated by TXFIFOSIZE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TxfeVal> txfe{}; 
        namespace TxfeValC{
            constexpr Register::FieldValue<decltype(txfe)::Type,TxfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txfe)::Type,TxfeVal::v1> v1{};
        }
    }
    namespace Uart1Cfifo{    ///<UART FIFO Control Register
        using Addr = Register::Address<0x4006b011,0xffffff38,0,unsigned char>;
        ///Receive FIFO Underflow Interrupt Enable
        enum class RxufeVal {
            v0=0x00000000,     ///<RXUF flag does not generate an interrupt to the host.
            v1=0x00000001,     ///<RXUF flag generates an interrupt to the host.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RxufeVal> rxufe{}; 
        namespace RxufeValC{
            constexpr Register::FieldValue<decltype(rxufe)::Type,RxufeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxufe)::Type,RxufeVal::v1> v1{};
        }
        ///Transmit FIFO Overflow Interrupt Enable
        enum class TxofeVal {
            v0=0x00000000,     ///<TXOF flag does not generate an interrupt to the host.
            v1=0x00000001,     ///<TXOF flag generates an interrupt to the host.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TxofeVal> txofe{}; 
        namespace TxofeValC{
            constexpr Register::FieldValue<decltype(txofe)::Type,TxofeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txofe)::Type,TxofeVal::v1> v1{};
        }
        ///Receive FIFO Overflow Interrupt Enable
        enum class RxofeVal {
            v0=0x00000000,     ///<RXOF flag does not generate an interrupt to the host.
            v1=0x00000001,     ///<RXOF flag generates an interrupt to the host.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RxofeVal> rxofe{}; 
        namespace RxofeValC{
            constexpr Register::FieldValue<decltype(rxofe)::Type,RxofeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxofe)::Type,RxofeVal::v1> v1{};
        }
        ///Receive FIFO/Buffer Flush
        enum class RxflushVal {
            v0=0x00000000,     ///<No flush operation occurs.
            v1=0x00000001,     ///<All data in the receive FIFO/buffer is cleared out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RxflushVal> rxflush{}; 
        namespace RxflushValC{
            constexpr Register::FieldValue<decltype(rxflush)::Type,RxflushVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxflush)::Type,RxflushVal::v1> v1{};
        }
        ///Transmit FIFO/Buffer Flush
        enum class TxflushVal {
            v0=0x00000000,     ///<No flush operation occurs.
            v1=0x00000001,     ///<All data in the transmit FIFO/Buffer is cleared out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TxflushVal> txflush{}; 
        namespace TxflushValC{
            constexpr Register::FieldValue<decltype(txflush)::Type,TxflushVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txflush)::Type,TxflushVal::v1> v1{};
        }
    }
    namespace Uart1Sfifo{    ///<UART FIFO Status Register
        using Addr = Register::Address<0x4006b012,0xffffff38,0,unsigned char>;
        ///Receiver Buffer Underflow Flag
        enum class RxufVal {
            v0=0x00000000,     ///<No receive buffer underflow has occurred since the last time the flag was cleared.
            v1=0x00000001,     ///<At least one receive buffer underflow has occurred since the last time the flag was cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RxufVal> rxuf{}; 
        namespace RxufValC{
            constexpr Register::FieldValue<decltype(rxuf)::Type,RxufVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxuf)::Type,RxufVal::v1> v1{};
        }
        ///Transmitter Buffer Overflow Flag
        enum class TxofVal {
            v0=0x00000000,     ///<No transmit buffer overflow has occurred since the last time the flag was cleared.
            v1=0x00000001,     ///<At least one transmit buffer overflow has occurred since the last time the flag was cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TxofVal> txof{}; 
        namespace TxofValC{
            constexpr Register::FieldValue<decltype(txof)::Type,TxofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txof)::Type,TxofVal::v1> v1{};
        }
        ///Receiver Buffer Overflow Flag
        enum class RxofVal {
            v0=0x00000000,     ///<No receive buffer overflow has occurred since the last time the flag was cleared.
            v1=0x00000001,     ///<At least one receive buffer overflow has occurred since the last time the flag was cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RxofVal> rxof{}; 
        namespace RxofValC{
            constexpr Register::FieldValue<decltype(rxof)::Type,RxofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxof)::Type,RxofVal::v1> v1{};
        }
        ///Receive Buffer/FIFO Empty
        enum class RxemptVal {
            v0=0x00000000,     ///<Receive buffer is not empty.
            v1=0x00000001,     ///<Receive buffer is empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RxemptVal> rxempt{}; 
        namespace RxemptValC{
            constexpr Register::FieldValue<decltype(rxempt)::Type,RxemptVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxempt)::Type,RxemptVal::v1> v1{};
        }
        ///Transmit Buffer/FIFO Empty
        enum class TxemptVal {
            v0=0x00000000,     ///<Transmit buffer is not empty.
            v1=0x00000001,     ///<Transmit buffer is empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TxemptVal> txempt{}; 
        namespace TxemptValC{
            constexpr Register::FieldValue<decltype(txempt)::Type,TxemptVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txempt)::Type,TxemptVal::v1> v1{};
        }
    }
    namespace Uart1Twfifo{    ///<UART FIFO Transmit Watermark
        using Addr = Register::Address<0x4006b013,0xffffff00,0,unsigned char>;
        ///Transmit Watermark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txwater{}; 
    }
    namespace Uart1Tcfifo{    ///<UART FIFO Transmit Count
        using Addr = Register::Address<0x4006b014,0xffffff00,0,unsigned char>;
        ///Transmit Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace Uart1Rwfifo{    ///<UART FIFO Receive Watermark
        using Addr = Register::Address<0x4006b015,0xffffff00,0,unsigned char>;
        ///Receive Watermark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxwater{}; 
    }
    namespace Uart1Rcfifo{    ///<UART FIFO Receive Count
        using Addr = Register::Address<0x4006b016,0xffffff00,0,unsigned char>;
        ///Receive Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxcount{}; 
    }
}
