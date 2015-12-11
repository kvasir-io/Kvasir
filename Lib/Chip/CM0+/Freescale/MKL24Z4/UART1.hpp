#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal Asynchronous Receiver/Transmitter (UART)
    namespace Uart1Bdh{    ///<UART Baud Rate Register: High
        using Addr = Register::Address<0x4006b000,0xffffff00,0,unsigned char>;
        ///Baud Rate Modulo Divisor.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sbr{}; 
        ///Stop Bit Number Select
        enum class SbnsVal {
            v0=0x00000000,     ///<One stop bit.
            v1=0x00000001,     ///<Two stop bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SbnsVal> sbns{}; 
        namespace SbnsValC{
            constexpr Register::FieldValue<decltype(sbns)::Type,SbnsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sbns)::Type,SbnsVal::v1> v1{};
        }
        }
        ///RxD Input Active Edge Interrupt Enable (for RXEDGIF)
        enum class RxedgieVal {
            v0=0x00000000,     ///<Hardware interrupts from UART_S2[RXEDGIF] disabled (use polling).
            v1=0x00000001,     ///<Hardware interrupt requested when UART_S2[RXEDGIF] flag is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RxedgieVal> rxedgie{}; 
        namespace RxedgieValC{
            constexpr Register::FieldValue<decltype(rxedgie)::Type,RxedgieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxedgie)::Type,RxedgieVal::v1> v1{};
        }
        }
        ///LIN Break Detect Interrupt Enable (for LBKDIF)
        enum class LbkdieVal {
            v0=0x00000000,     ///<Hardware interrupts from UART_S2[LBKDIF] disabled (use polling).
            v1=0x00000001,     ///<Hardware interrupt requested when UART_S2[LBKDIF] flag is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LbkdieVal> lbkdie{}; 
        namespace LbkdieValC{
            constexpr Register::FieldValue<decltype(lbkdie)::Type,LbkdieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lbkdie)::Type,LbkdieVal::v1> v1{};
        }
        }
    }
    namespace Uart1Bdl{    ///<UART Baud Rate Register: Low
        using Addr = Register::Address<0x4006b001,0xffffff00,0,unsigned char>;
        ///Baud Rate Modulo Divisor
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
        }
        ///Parity Enable
        enum class PeVal {
            v0=0x00000000,     ///<No hardware parity generation or checking.
            v1=0x00000001,     ///<Parity enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
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
        }
        ///Receiver Wakeup Method Select
        enum class WakeVal {
            v0=0x00000000,     ///<Idle-line wakeup.
            v1=0x00000001,     ///<Address-mark wakeup.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,WakeVal> wake{}; 
        namespace WakeValC{
            constexpr Register::FieldValue<decltype(wake)::Type,WakeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wake)::Type,WakeVal::v1> v1{};
        }
        }
        ///9-Bit or 8-Bit Mode Select
        enum class MVal {
            v0=0x00000000,     ///<Normal - start + 8 data bits (lsb first) + stop.
            v1=0x00000001,     ///<Receiver and transmitter use 9-bit data characters start + 8 data bits (lsb first) + 9th data bit + stop.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,MVal> m{}; 
        namespace MValC{
            constexpr Register::FieldValue<decltype(m)::Type,MVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m)::Type,MVal::v1> v1{};
        }
        }
        ///Receiver Source Select
        enum class RsrcVal {
            v0=0x00000000,     ///<Provided LOOPS is set, RSRC is cleared, selects internal loop back mode and the UART does not use the RxD pins.
            v1=0x00000001,     ///<Single-wire UART mode where the TxD pin is connected to the transmitter output and receiver input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RsrcVal> rsrc{}; 
        namespace RsrcValC{
            constexpr Register::FieldValue<decltype(rsrc)::Type,RsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rsrc)::Type,RsrcVal::v1> v1{};
        }
        }
        ///UART Stops in Wait Mode
        enum class UartswaiVal {
            v0=0x00000000,     ///<UART clocks continue to run in wait mode so the UART can be the source of an interrupt that wakes up the CPU.
            v1=0x00000001,     ///<UART clocks freeze while CPU is in wait mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,UartswaiVal> uartswai{}; 
        namespace UartswaiValC{
            constexpr Register::FieldValue<decltype(uartswai)::Type,UartswaiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uartswai)::Type,UartswaiVal::v1> v1{};
        }
        }
        ///Loop Mode Select
        enum class LoopsVal {
            v0=0x00000000,     ///<Normal operation - RxD and TxD use separate pins.
            v1=0x00000001,     ///<Loop mode or single-wire mode where transmitter outputs are internally connected to receiver input. (See RSRC bit.) RxD pin is not used by UART.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LoopsVal> loops{}; 
        namespace LoopsValC{
            constexpr Register::FieldValue<decltype(loops)::Type,LoopsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(loops)::Type,LoopsVal::v1> v1{};
        }
        }
    }
    namespace Uart1C2{    ///<UART Control Register 2
        using Addr = Register::Address<0x4006b003,0xffffff00,0,unsigned char>;
        ///Send Break
        enum class SbkVal {
            v0=0x00000000,     ///<Normal transmitter operation.
            v1=0x00000001,     ///<Queue break character(s) to be sent.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SbkVal> sbk{}; 
        namespace SbkValC{
            constexpr Register::FieldValue<decltype(sbk)::Type,SbkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sbk)::Type,SbkVal::v1> v1{};
        }
        }
        ///Receiver Wakeup Control
        enum class RwuVal {
            v0=0x00000000,     ///<Normal UART receiver operation.
            v1=0x00000001,     ///<UART receiver in standby waiting for wakeup condition.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RwuVal> rwu{}; 
        namespace RwuValC{
            constexpr Register::FieldValue<decltype(rwu)::Type,RwuVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rwu)::Type,RwuVal::v1> v1{};
        }
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
        }
        ///Idle Line Interrupt Enable for IDLE
        enum class IlieVal {
            v0=0x00000000,     ///<Hardware interrupts from IDLE disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when IDLE flag is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IlieVal> ilie{}; 
        namespace IlieValC{
            constexpr Register::FieldValue<decltype(ilie)::Type,IlieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ilie)::Type,IlieVal::v1> v1{};
        }
        }
        ///Receiver Interrupt Enable for RDRF
        enum class RieVal {
            v0=0x00000000,     ///<Hardware interrupts from RDRF disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when RDRF flag is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RieVal> rie{}; 
        namespace RieValC{
            constexpr Register::FieldValue<decltype(rie)::Type,RieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rie)::Type,RieVal::v1> v1{};
        }
        }
        ///Transmission Complete Interrupt Enable for TC
        enum class TcieVal {
            v0=0x00000000,     ///<Hardware interrupts from TC disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when TC flag is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TcieVal> tcie{}; 
        namespace TcieValC{
            constexpr Register::FieldValue<decltype(tcie)::Type,TcieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcie)::Type,TcieVal::v1> v1{};
        }
        }
        ///Transmit Interrupt Enable for TDRE
        enum class TieVal {
            v0=0x00000000,     ///<Hardware interrupts from TDRE disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when TDRE flag is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TieVal> tie{}; 
        namespace TieValC{
            constexpr Register::FieldValue<decltype(tie)::Type,TieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tie)::Type,TieVal::v1> v1{};
        }
        }
    }
    namespace Uart1S1{    ///<UART Status Register 1
        using Addr = Register::Address<0x4006b004,0xffffff00,0,unsigned char>;
        ///Parity Error Flag
        enum class PfVal {
            v0=0x00000000,     ///<No parity error.
            v1=0x00000001,     ///<Parity error.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PfVal> pf{}; 
        namespace PfValC{
            constexpr Register::FieldValue<decltype(pf)::Type,PfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pf)::Type,PfVal::v1> v1{};
        }
        }
        ///Framing Error Flag
        enum class FeVal {
            v0=0x00000000,     ///<No framing error detected. This does not guarantee the framing is correct.
            v1=0x00000001,     ///<Framing error.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FeVal> fe{}; 
        namespace FeValC{
            constexpr Register::FieldValue<decltype(fe)::Type,FeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fe)::Type,FeVal::v1> v1{};
        }
        }
        ///Noise Flag
        enum class NfVal {
            v0=0x00000000,     ///<No noise detected.
            v1=0x00000001,     ///<Noise detected in the received character in UART_D.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NfVal> nf{}; 
        namespace NfValC{
            constexpr Register::FieldValue<decltype(nf)::Type,NfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nf)::Type,NfVal::v1> v1{};
        }
        }
        ///Receiver Overrun Flag
        enum class Or_Val {
            v0=0x00000000,     ///<No overrun.
            v1=0x00000001,     ///<Receive overrun (new UART data lost).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Or_Val> or_{}; 
        namespace Or_ValC{
            constexpr Register::FieldValue<decltype(or_)::Type,Or_Val::v0> v0{};
            constexpr Register::FieldValue<decltype(or_)::Type,Or_Val::v1> v1{};
        }
        }
        ///Idle Line Flag
        enum class IdleVal {
            v0=0x00000000,     ///<No idle line detected.
            v1=0x00000001,     ///<Idle line was detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IdleVal> idle{}; 
        namespace IdleValC{
            constexpr Register::FieldValue<decltype(idle)::Type,IdleVal::v0> v0{};
            constexpr Register::FieldValue<decltype(idle)::Type,IdleVal::v1> v1{};
        }
        }
        ///Receive Data Register Full Flag
        enum class RdrfVal {
            v0=0x00000000,     ///<Receive data register empty.
            v1=0x00000001,     ///<Receive data register full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RdrfVal> rdrf{}; 
        namespace RdrfValC{
            constexpr Register::FieldValue<decltype(rdrf)::Type,RdrfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rdrf)::Type,RdrfVal::v1> v1{};
        }
        }
        ///Transmission Complete Flag
        enum class TcVal {
            v0=0x00000000,     ///<Transmitter active (sending data, a preamble, or a break).
            v1=0x00000001,     ///<Transmitter idle (transmission activity complete).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TcVal> tc{}; 
        namespace TcValC{
            constexpr Register::FieldValue<decltype(tc)::Type,TcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tc)::Type,TcVal::v1> v1{};
        }
        }
        ///Transmit Data Register Empty Flag
        enum class TdreVal {
            v0=0x00000000,     ///<Transmit data register (buffer) full.
            v1=0x00000001,     ///<Transmit data register (buffer) empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TdreVal> tdre{}; 
        namespace TdreValC{
            constexpr Register::FieldValue<decltype(tdre)::Type,TdreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdre)::Type,TdreVal::v1> v1{};
        }
        }
    }
    namespace Uart1S2{    ///<UART Status Register 2
        using Addr = Register::Address<0x4006b005,0xffffff20,0,unsigned char>;
        ///Receiver Active Flag
        enum class RafVal {
            v0=0x00000000,     ///<UART receiver idle waiting for a start bit.
            v1=0x00000001,     ///<UART receiver active (RxD input not idle).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RafVal> raf{}; 
        namespace RafValC{
            constexpr Register::FieldValue<decltype(raf)::Type,RafVal::v0> v0{};
            constexpr Register::FieldValue<decltype(raf)::Type,RafVal::v1> v1{};
        }
        }
        ///LIN Break Detection Enable
        enum class LbkdeVal {
            v0=0x00000000,     ///<Break character is detected at length 10 bit times (if M = 0, SBNS = 0) or 11 (if M = 1, SBNS = 0 or M = 0, SBNS = 1) or 12 (if M = 1, SBNS = 1).
            v1=0x00000001,     ///<Break character is detected at length of 11 bit times (if M = 0, SBNS = 0) or 12 (if M = 1, SBNS = 0 or M = 0, SBNS = 1) or 13 (if M = 1, SBNS = 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,LbkdeVal> lbkde{}; 
        namespace LbkdeValC{
            constexpr Register::FieldValue<decltype(lbkde)::Type,LbkdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lbkde)::Type,LbkdeVal::v1> v1{};
        }
        }
        ///Break Character Generation Length
        enum class Brk13Val {
            v0=0x00000000,     ///<Break character is transmitted with length of 10 bit times (if M = 0, SBNS = 0) or 11 (if M = 1, SBNS = 0 or M = 0, SBNS = 1) or 12 (if M = 1, SBNS = 1).
            v1=0x00000001,     ///<Break character is transmitted with length of 13 bit times (if M = 0, SBNS = 0) or 14 (if M = 1, SBNS = 0 or M = 0, SBNS = 1) or 15 (if M = 1, SBNS = 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Brk13Val> brk13{}; 
        namespace Brk13ValC{
            constexpr Register::FieldValue<decltype(brk13)::Type,Brk13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(brk13)::Type,Brk13Val::v1> v1{};
        }
        }
        ///Receive Wake Up Idle Detect
        enum class RwuidVal {
            v0=0x00000000,     ///<During receive standby state (RWU = 1), the IDLE bit does not get set upon detection of an idle character.
            v1=0x00000001,     ///<During receive standby state (RWU = 1), the IDLE bit gets set upon detection of an idle character.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RwuidVal> rwuid{}; 
        namespace RwuidValC{
            constexpr Register::FieldValue<decltype(rwuid)::Type,RwuidVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rwuid)::Type,RwuidVal::v1> v1{};
        }
        }
        ///Receive Data Inversion
        enum class RxinvVal {
            v0=0x00000000,     ///<Receive data not inverted.
            v1=0x00000001,     ///<Receive data inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RxinvVal> rxinv{}; 
        namespace RxinvValC{
            constexpr Register::FieldValue<decltype(rxinv)::Type,RxinvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxinv)::Type,RxinvVal::v1> v1{};
        }
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
        }
        ///LIN Break Detect Interrupt Flag
        enum class LbkdifVal {
            v0=0x00000000,     ///<No LIN break character has been detected.
            v1=0x00000001,     ///<LIN break character has been detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LbkdifVal> lbkdif{}; 
        namespace LbkdifValC{
            constexpr Register::FieldValue<decltype(lbkdif)::Type,LbkdifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lbkdif)::Type,LbkdifVal::v1> v1{};
        }
        }
    }
    namespace Uart1C3{    ///<UART Control Register 3
        using Addr = Register::Address<0x4006b006,0xffffff00,0,unsigned char>;
        ///Parity Error Interrupt Enable
        enum class PeieVal {
            v0=0x00000000,     ///<PF interrupts disabled; use polling).
            v1=0x00000001,     ///<Hardware interrupt requested when PF is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeieVal> peie{}; 
        namespace PeieValC{
            constexpr Register::FieldValue<decltype(peie)::Type,PeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(peie)::Type,PeieVal::v1> v1{};
        }
        }
        ///Framing Error Interrupt Enable
        enum class FeieVal {
            v0=0x00000000,     ///<FE interrupts disabled; use polling).
            v1=0x00000001,     ///<Hardware interrupt requested when FE is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FeieVal> feie{}; 
        namespace FeieValC{
            constexpr Register::FieldValue<decltype(feie)::Type,FeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(feie)::Type,FeieVal::v1> v1{};
        }
        }
        ///Noise Error Interrupt Enable
        enum class NeieVal {
            v0=0x00000000,     ///<NF interrupts disabled; use polling).
            v1=0x00000001,     ///<Hardware interrupt requested when NF is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NeieVal> neie{}; 
        namespace NeieValC{
            constexpr Register::FieldValue<decltype(neie)::Type,NeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(neie)::Type,NeieVal::v1> v1{};
        }
        }
        ///Overrun Interrupt Enable
        enum class OrieVal {
            v0=0x00000000,     ///<OR interrupts disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when OR is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,OrieVal> orie{}; 
        namespace OrieValC{
            constexpr Register::FieldValue<decltype(orie)::Type,OrieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(orie)::Type,OrieVal::v1> v1{};
        }
        }
        ///Transmit Data Inversion
        enum class TxinvVal {
            v0=0x00000000,     ///<Transmit data not inverted.
            v1=0x00000001,     ///<Transmit data inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TxinvVal> txinv{}; 
        namespace TxinvValC{
            constexpr Register::FieldValue<decltype(txinv)::Type,TxinvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txinv)::Type,TxinvVal::v1> v1{};
        }
        }
        ///TxD Pin Direction in Single-Wire Mode
        enum class TxdirVal {
            v0=0x00000000,     ///<TxD pin is an input in single-wire mode.
            v1=0x00000001,     ///<TxD pin is an output in single-wire mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TxdirVal> txdir{}; 
        namespace TxdirValC{
            constexpr Register::FieldValue<decltype(txdir)::Type,TxdirVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txdir)::Type,TxdirVal::v1> v1{};
        }
        }
        ///Ninth Data Bit for Transmitter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> t8{}; 
        ///Ninth Data Bit for Receiver
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> r8{}; 
    }
    namespace Uart1D{    ///<UART Data Register
        using Addr = Register::Address<0x4006b007,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> r0t0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> r1t1{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> r2t2{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> r3t3{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> r4t4{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> r5t5{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> r6t6{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> r7t7{}; 
    }
    namespace Uart1C4{    ///<UART Control Register 4
        using Addr = Register::Address<0x4006b008,0xffffff5f,0,unsigned char>;
        ///Receiver Full DMA Select
        enum class RdmasVal {
            v0=0x00000000,     ///<If RIE is set and the RDRF flag is set, the RDRF interrupt request signal is asserted to request interrupt service.
            v1=0x00000001,     ///<If RIE is set and the RDRF flag is set, the RDRF DMA request signal is asserted to request a DMA transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RdmasVal> rdmas{}; 
        namespace RdmasValC{
            constexpr Register::FieldValue<decltype(rdmas)::Type,RdmasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rdmas)::Type,RdmasVal::v1> v1{};
        }
        }
        ///Transmitter DMA Select
        enum class TdmasVal {
            v0=0x00000000,     ///<If TIE is set and the TDRE flag is set, the TDRE interrupt request signal is asserted to request interrupt service.
            v1=0x00000001,     ///<If TIE is set and the TDRE flag is set, the TDRE DMA request signal is asserted to request a DMA transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TdmasVal> tdmas{}; 
        namespace TdmasValC{
            constexpr Register::FieldValue<decltype(tdmas)::Type,TdmasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdmas)::Type,TdmasVal::v1> v1{};
        }
        }
    }
}
