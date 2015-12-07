#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal Asynchronous Receiver/Transmitter
    namespace Uart0Bdh{    ///<UART Baud Rate Register High
        using Addr = Register::Address<0x4006a000,0xffffff00,0,unsigned char>;
        ///Baud Rate Modulo Divisor.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sbr{}; 
        namespace SbrValC{
        }
        ///Stop Bit Number Select
        enum class SbnsVal {
            v0=0x00000000,     ///<One stop bit.
            v1=0x00000001,     ///<Two stop bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SbnsVal> sbns{}; 
        namespace SbnsValC{
            constexpr Register::FieldValue<decltype(sbns),SbnsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sbns),SbnsVal::v1> v1{};
        }
        ///RX Input Active Edge Interrupt Enable (for RXEDGIF)
        enum class RxedgieVal {
            v0=0x00000000,     ///<Hardware interrupts from UART _S2[RXEDGIF] disabled (use polling).
            v1=0x00000001,     ///<Hardware interrupt requested when UART _S2[RXEDGIF] flag is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RxedgieVal> rxedgie{}; 
        namespace RxedgieValC{
            constexpr Register::FieldValue<decltype(rxedgie),RxedgieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxedgie),RxedgieVal::v1> v1{};
        }
        ///LIN Break Detect Interrupt Enable (for LBKDIF)
        enum class LbkdieVal {
            v0=0x00000000,     ///<Hardware interrupts from UART _S2[LBKDIF] disabled (use polling).
            v1=0x00000001,     ///<Hardware interrupt requested when UART _S2[LBKDIF] flag is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LbkdieVal> lbkdie{}; 
        namespace LbkdieValC{
            constexpr Register::FieldValue<decltype(lbkdie),LbkdieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lbkdie),LbkdieVal::v1> v1{};
        }
    }
    namespace Uart0Bdl{    ///<UART Baud Rate Register Low
        using Addr = Register::Address<0x4006a001,0xffffff00,0,unsigned char>;
        ///Baud Rate Modulo Divisor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sbr{}; 
        namespace SbrValC{
        }
    }
    namespace Uart0C1{    ///<UART Control Register 1
        using Addr = Register::Address<0x4006a002,0xffffff00,0,unsigned char>;
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
            v0=0x00000000,     ///<No hardware parity generation or checking.
            v1=0x00000001,     ///<Parity enabled.
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
            v0=0x00000000,     ///<Idle-line wakeup.
            v1=0x00000001,     ///<Address-mark wakeup.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,WakeVal> wake{}; 
        namespace WakeValC{
            constexpr Register::FieldValue<decltype(wake),WakeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wake),WakeVal::v1> v1{};
        }
        ///9-Bit or 8-Bit Mode Select
        enum class MVal {
            v0=0x00000000,     ///<Receiver and transmitter use 8-bit data characters.
            v1=0x00000001,     ///<Receiver and transmitter use 9-bit data characters.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,MVal> m{}; 
        namespace MValC{
            constexpr Register::FieldValue<decltype(m),MVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m),MVal::v1> v1{};
        }
        ///Receiver Source Select
        enum class RsrcVal {
            v0=0x00000000,     ///<Provided LOOPS is set, RSRC is cleared, selects internal loop back mode and the UART does not use the UART _RX pins.
            v1=0x00000001,     ///<Single-wire UART mode where the UART _TX pin is connected to the transmitter output and receiver input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RsrcVal> rsrc{}; 
        namespace RsrcValC{
            constexpr Register::FieldValue<decltype(rsrc),RsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rsrc),RsrcVal::v1> v1{};
        }
        ///Doze Enable
        enum class DozeenVal {
            v0=0x00000000,     ///<UART is enabled in Wait mode.
            v1=0x00000001,     ///<UART is disabled in Wait mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DozeenVal> dozeen{}; 
        namespace DozeenValC{
            constexpr Register::FieldValue<decltype(dozeen),DozeenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dozeen),DozeenVal::v1> v1{};
        }
        ///Loop Mode Select
        enum class LoopsVal {
            v0=0x00000000,     ///<Normal operation - UART _RX and UART _TX use separate pins.
            v1=0x00000001,     ///<Loop mode or single-wire mode where transmitter outputs are internally connected to receiver input. (See RSRC bit.) UART _RX pin is not used by UART .
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LoopsVal> loops{}; 
        namespace LoopsValC{
            constexpr Register::FieldValue<decltype(loops),LoopsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(loops),LoopsVal::v1> v1{};
        }
    }
    namespace Uart0C2{    ///<UART Control Register 2
        using Addr = Register::Address<0x4006a003,0xffffff00,0,unsigned char>;
        ///Send Break
        enum class SbkVal {
            v0=0x00000000,     ///<Normal transmitter operation.
            v1=0x00000001,     ///<Queue break character(s) to be sent.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SbkVal> sbk{}; 
        namespace SbkValC{
            constexpr Register::FieldValue<decltype(sbk),SbkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sbk),SbkVal::v1> v1{};
        }
        ///Receiver Wakeup Control
        enum class RwuVal {
            v0=0x00000000,     ///<Normal UART receiver operation.
            v1=0x00000001,     ///<UART receiver in standby waiting for wakeup condition.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RwuVal> rwu{}; 
        namespace RwuValC{
            constexpr Register::FieldValue<decltype(rwu),RwuVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rwu),RwuVal::v1> v1{};
        }
        ///Receiver Enable
        enum class ReVal {
            v0=0x00000000,     ///<Receiver disabled.
            v1=0x00000001,     ///<Receiver enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ReVal> re{}; 
        namespace ReValC{
            constexpr Register::FieldValue<decltype(re),ReVal::v0> v0{};
            constexpr Register::FieldValue<decltype(re),ReVal::v1> v1{};
        }
        ///Transmitter Enable
        enum class TeVal {
            v0=0x00000000,     ///<Transmitter disabled.
            v1=0x00000001,     ///<Transmitter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TeVal> te{}; 
        namespace TeValC{
            constexpr Register::FieldValue<decltype(te),TeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(te),TeVal::v1> v1{};
        }
        ///Idle Line Interrupt Enable for IDLE
        enum class IlieVal {
            v0=0x00000000,     ///<Hardware interrupts from IDLE disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when IDLE flag is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IlieVal> ilie{}; 
        namespace IlieValC{
            constexpr Register::FieldValue<decltype(ilie),IlieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ilie),IlieVal::v1> v1{};
        }
        ///Receiver Interrupt Enable for RDRF
        enum class RieVal {
            v0=0x00000000,     ///<Hardware interrupts from RDRF disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when RDRF flag is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RieVal> rie{}; 
        namespace RieValC{
            constexpr Register::FieldValue<decltype(rie),RieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rie),RieVal::v1> v1{};
        }
        ///Transmission Complete Interrupt Enable for TC
        enum class TcieVal {
            v0=0x00000000,     ///<Hardware interrupts from TC disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when TC flag is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TcieVal> tcie{}; 
        namespace TcieValC{
            constexpr Register::FieldValue<decltype(tcie),TcieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcie),TcieVal::v1> v1{};
        }
        ///Transmit Interrupt Enable for TDRE
        enum class TieVal {
            v0=0x00000000,     ///<Hardware interrupts from TDRE disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when TDRE flag is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TieVal> tie{}; 
        namespace TieValC{
            constexpr Register::FieldValue<decltype(tie),TieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tie),TieVal::v1> v1{};
        }
    }
    namespace Uart0S1{    ///<UART Status Register 1
        using Addr = Register::Address<0x4006a004,0xffffff00,0,unsigned char>;
        ///Parity Error Flag
        enum class PfVal {
            v0=0x00000000,     ///<No parity error.
            v1=0x00000001,     ///<Parity error.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PfVal> pf{}; 
        namespace PfValC{
            constexpr Register::FieldValue<decltype(pf),PfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pf),PfVal::v1> v1{};
        }
        ///Framing Error Flag
        enum class FeVal {
            v0=0x00000000,     ///<No framing error detected. This does not guarantee the framing is correct.
            v1=0x00000001,     ///<Framing error.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FeVal> fe{}; 
        namespace FeValC{
            constexpr Register::FieldValue<decltype(fe),FeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fe),FeVal::v1> v1{};
        }
        ///Noise Flag
        enum class NfVal {
            v0=0x00000000,     ///<No noise detected.
            v1=0x00000001,     ///<Noise detected in the received character in UART _D.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NfVal> nf{}; 
        namespace NfValC{
            constexpr Register::FieldValue<decltype(nf),NfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nf),NfVal::v1> v1{};
        }
        ///Receiver Overrun Flag
        enum class Or_Val {
            v0=0x00000000,     ///<No overrun.
            v1=0x00000001,     ///<Receive overrun (new UART data lost).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Or_Val> or_{}; 
        namespace Or_ValC{
            constexpr Register::FieldValue<decltype(or_),Or_Val::v0> v0{};
            constexpr Register::FieldValue<decltype(or_),Or_Val::v1> v1{};
        }
        ///Idle Line Flag
        enum class IdleVal {
            v0=0x00000000,     ///<No idle line detected.
            v1=0x00000001,     ///<Idle line was detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IdleVal> idle{}; 
        namespace IdleValC{
            constexpr Register::FieldValue<decltype(idle),IdleVal::v0> v0{};
            constexpr Register::FieldValue<decltype(idle),IdleVal::v1> v1{};
        }
        ///Receive Data Register Full Flag
        enum class RdrfVal {
            v0=0x00000000,     ///<Receive data buffer empty.
            v1=0x00000001,     ///<Receive data buffer full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RdrfVal> rdrf{}; 
        namespace RdrfValC{
            constexpr Register::FieldValue<decltype(rdrf),RdrfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rdrf),RdrfVal::v1> v1{};
        }
        ///Transmission Complete Flag
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
            v0=0x00000000,     ///<Transmit data buffer full.
            v1=0x00000001,     ///<Transmit data buffer empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TdreVal> tdre{}; 
        namespace TdreValC{
            constexpr Register::FieldValue<decltype(tdre),TdreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdre),TdreVal::v1> v1{};
        }
    }
    namespace Uart0S2{    ///<UART Status Register 2
        using Addr = Register::Address<0x4006a005,0xffffff00,0,unsigned char>;
        ///Receiver Active Flag
        enum class RafVal {
            v0=0x00000000,     ///<UART receiver idle waiting for a start bit.
            v1=0x00000001,     ///<UART receiver active ( UART _RXD input not idle).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RafVal> raf{}; 
        namespace RafValC{
            constexpr Register::FieldValue<decltype(raf),RafVal::v0> v0{};
            constexpr Register::FieldValue<decltype(raf),RafVal::v1> v1{};
        }
        ///LIN Break Detection Enable
        enum class LbkdeVal {
            v0=0x00000000,     ///<Break character is detected at length 10 bit times (if M = 0, SBNS = 0) or 11 (if M = 1, SBNS = 0 or M = 0, SBNS = 1) or 12 (if M = 1, SBNS = 1 or M10 = 1, SNBS = 0) or 13 (if M10 = 1, SNBS = 1).
            v1=0x00000001,     ///<Break character is detected at length of 11 bit times (if M = 0, SBNS = 0) or 12 (if M = 1, SBNS = 0 or M = 0, SBNS = 1) or 14 (if M = 1, SBNS = 1 or M10 = 1, SNBS = 0) or 15 (if M10 = 1, SNBS = 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,LbkdeVal> lbkde{}; 
        namespace LbkdeValC{
            constexpr Register::FieldValue<decltype(lbkde),LbkdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lbkde),LbkdeVal::v1> v1{};
        }
        ///Break Character Generation Length
        enum class Brk13Val {
            v0=0x00000000,     ///<Break character is transmitted with length of 10 bit times (if M = 0, SBNS = 0) or 11 (if M = 1, SBNS = 0 or M = 0, SBNS = 1) or 12 (if M = 1, SBNS = 1 or M10 = 1, SNBS = 0) or 13 (if M10 = 1, SNBS = 1).
            v1=0x00000001,     ///<Break character is transmitted with length of 13 bit times (if M = 0, SBNS = 0) or 14 (if M = 1, SBNS = 0 or M = 0, SBNS = 1) or 15 (if M = 1, SBNS = 1 or M10 = 1, SNBS = 0) or 16 (if M10 = 1, SNBS = 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Brk13Val> brk13{}; 
        namespace Brk13ValC{
            constexpr Register::FieldValue<decltype(brk13),Brk13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(brk13),Brk13Val::v1> v1{};
        }
        ///Receive Wake Up Idle Detect
        enum class RwuidVal {
            v0=0x00000000,     ///<During receive standby state (RWU = 1), the IDLE bit does not get set upon detection of an idle character.
            v1=0x00000001,     ///<During receive standby state (RWU = 1), the IDLE bit gets set upon detection of an idle character.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RwuidVal> rwuid{}; 
        namespace RwuidValC{
            constexpr Register::FieldValue<decltype(rwuid),RwuidVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rwuid),RwuidVal::v1> v1{};
        }
        ///Receive Data Inversion
        enum class RxinvVal {
            v0=0x00000000,     ///<Receive data not inverted.
            v1=0x00000001,     ///<Receive data inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RxinvVal> rxinv{}; 
        namespace RxinvValC{
            constexpr Register::FieldValue<decltype(rxinv),RxinvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxinv),RxinvVal::v1> v1{};
        }
        ///MSB First
        enum class MsbfVal {
            v0=0x00000000,     ///<LSB (bit0) is the first bit that is transmitted following the start bit. Further, the first bit received after the start bit is identified as bit0.
            v1=0x00000001,     ///<MSB (bit9, bit8, bit7 or bit6) is the first bit that is transmitted following the start bit depending on the setting of C1[M], C1[PE] and C4[M10]. Further, the first bit received after the start bit is identified as bit9, bit8, bit7 or bit6 depending on the setting of C1[M] and C1[PE].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MsbfVal> msbf{}; 
        namespace MsbfValC{
            constexpr Register::FieldValue<decltype(msbf),MsbfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(msbf),MsbfVal::v1> v1{};
        }
        ///UART _RX Pin Active Edge Interrupt Flag
        enum class RxedgifVal {
            v0=0x00000000,     ///<No active edge on the receive pin has occurred.
            v1=0x00000001,     ///<An active edge on the receive pin has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RxedgifVal> rxedgif{}; 
        namespace RxedgifValC{
            constexpr Register::FieldValue<decltype(rxedgif),RxedgifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxedgif),RxedgifVal::v1> v1{};
        }
        ///LIN Break Detect Interrupt Flag
        enum class LbkdifVal {
            v0=0x00000000,     ///<No LIN break character has been detected.
            v1=0x00000001,     ///<LIN break character has been detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LbkdifVal> lbkdif{}; 
        namespace LbkdifValC{
            constexpr Register::FieldValue<decltype(lbkdif),LbkdifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lbkdif),LbkdifVal::v1> v1{};
        }
    }
    namespace Uart0C3{    ///<UART Control Register 3
        using Addr = Register::Address<0x4006a006,0xffffff00,0,unsigned char>;
        ///Parity Error Interrupt Enable
        enum class PeieVal {
            v0=0x00000000,     ///<PF interrupts disabled; use polling).
            v1=0x00000001,     ///<Hardware interrupt requested when PF is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeieVal> peie{}; 
        namespace PeieValC{
            constexpr Register::FieldValue<decltype(peie),PeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(peie),PeieVal::v1> v1{};
        }
        ///Framing Error Interrupt Enable
        enum class FeieVal {
            v0=0x00000000,     ///<FE interrupts disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when FE is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FeieVal> feie{}; 
        namespace FeieValC{
            constexpr Register::FieldValue<decltype(feie),FeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(feie),FeieVal::v1> v1{};
        }
        ///Noise Error Interrupt Enable
        enum class NeieVal {
            v0=0x00000000,     ///<NF interrupts disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when NF is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NeieVal> neie{}; 
        namespace NeieValC{
            constexpr Register::FieldValue<decltype(neie),NeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(neie),NeieVal::v1> v1{};
        }
        ///Overrun Interrupt Enable
        enum class OrieVal {
            v0=0x00000000,     ///<OR interrupts disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when OR is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,OrieVal> orie{}; 
        namespace OrieValC{
            constexpr Register::FieldValue<decltype(orie),OrieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(orie),OrieVal::v1> v1{};
        }
        ///Transmit Data Inversion
        enum class TxinvVal {
            v0=0x00000000,     ///<Transmit data not inverted.
            v1=0x00000001,     ///<Transmit data inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TxinvVal> txinv{}; 
        namespace TxinvValC{
            constexpr Register::FieldValue<decltype(txinv),TxinvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txinv),TxinvVal::v1> v1{};
        }
        ///UART _TX Pin Direction in Single-Wire Mode
        enum class TxdirVal {
            v0=0x00000000,     ///<UART _TXD pin is an input in single-wire mode.
            v1=0x00000001,     ///<UART _TXD pin is an output in single-wire mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TxdirVal> txdir{}; 
        namespace TxdirValC{
            constexpr Register::FieldValue<decltype(txdir),TxdirVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txdir),TxdirVal::v1> v1{};
        }
        ///Receive Bit 9 / Transmit Bit 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> r9t8{}; 
        namespace R9t8ValC{
        }
        ///Receive Bit 8 / Transmit Bit 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> r8t9{}; 
        namespace R8t9ValC{
        }
    }
    namespace Uart0D{    ///<UART Data Register
        using Addr = Register::Address<0x4006a007,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> r0t0{}; 
        namespace R0t0ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> r1t1{}; 
        namespace R1t1ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> r2t2{}; 
        namespace R2t2ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> r3t3{}; 
        namespace R3t3ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> r4t4{}; 
        namespace R4t4ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> r5t5{}; 
        namespace R5t5ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> r6t6{}; 
        namespace R6t6ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> r7t7{}; 
        namespace R7t7ValC{
        }
    }
    namespace Uart0Ma1{    ///<UART Match Address Registers 1
        using Addr = Register::Address<0x4006a008,0xffffff00,0,unsigned char>;
        ///Match Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ma{}; 
        namespace MaValC{
        }
    }
    namespace Uart0Ma2{    ///<UART Match Address Registers 2
        using Addr = Register::Address<0x4006a009,0xffffff00,0,unsigned char>;
        ///Match Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ma{}; 
        namespace MaValC{
        }
    }
    namespace Uart0C4{    ///<UART Control Register 4
        using Addr = Register::Address<0x4006a00a,0xffffff00,0,unsigned char>;
        ///Over Sampling Ratio
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> osr{}; 
        namespace OsrValC{
        }
        ///10-bit Mode select
        enum class M10Val {
            v0=0x00000000,     ///<Receiver and transmitter use 8-bit or 9-bit data characters.
            v1=0x00000001,     ///<Receiver and transmitter use 10-bit data characters.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,M10Val> m10{}; 
        namespace M10ValC{
            constexpr Register::FieldValue<decltype(m10),M10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(m10),M10Val::v1> v1{};
        }
        ///Match Address Mode Enable 2
        enum class Maen2Val {
            v0=0x00000000,     ///<All data received is transferred to the data buffer if MAEN1 is cleared.
            v1=0x00000001,     ///<All data received with the most significant bit cleared, is discarded. All data received with the most significant bit set, is compared with contents of MA2 register. If no match occurs, the data is discarded. If match occurs, data is transferred to the data buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Maen2Val> maen2{}; 
        namespace Maen2ValC{
            constexpr Register::FieldValue<decltype(maen2),Maen2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(maen2),Maen2Val::v1> v1{};
        }
        ///Match Address Mode Enable 1
        enum class Maen1Val {
            v0=0x00000000,     ///<All data received is transferred to the data buffer if MAEN2 is cleared.
            v1=0x00000001,     ///<All data received with the most significant bit cleared, is discarded. All data received with the most significant bit set, is compared with contents of MA1 register. If no match occurs, the data is discarded. If match occurs, data is transferred to the data buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Maen1Val> maen1{}; 
        namespace Maen1ValC{
            constexpr Register::FieldValue<decltype(maen1),Maen1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(maen1),Maen1Val::v1> v1{};
        }
    }
    namespace Uart0C5{    ///<UART Control Register 5
        using Addr = Register::Address<0x4006a00b,0xffffff5c,0,unsigned char>;
        ///Resynchronization Disable
        enum class ResyncdisVal {
            v0=0x00000000,     ///<Resynchronization during received data word is supported
            v1=0x00000001,     ///<Resynchronization during received data word is disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ResyncdisVal> resyncdis{}; 
        namespace ResyncdisValC{
            constexpr Register::FieldValue<decltype(resyncdis),ResyncdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(resyncdis),ResyncdisVal::v1> v1{};
        }
        ///Both Edge Sampling
        enum class BothedgeVal {
            v0=0x00000000,     ///<Receiver samples input data using the rising edge of the baud rate clock.
            v1=0x00000001,     ///<Receiver samples input data using the rising and falling edge of the baud rate clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BothedgeVal> bothedge{}; 
        namespace BothedgeValC{
            constexpr Register::FieldValue<decltype(bothedge),BothedgeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bothedge),BothedgeVal::v1> v1{};
        }
        ///Receiver Full DMA Enable
        enum class RdmaeVal {
            v0=0x00000000,     ///<DMA request disabled.
            v1=0x00000001,     ///<DMA request enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RdmaeVal> rdmae{}; 
        namespace RdmaeValC{
            constexpr Register::FieldValue<decltype(rdmae),RdmaeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rdmae),RdmaeVal::v1> v1{};
        }
        ///Transmitter DMA Enable
        enum class TdmaeVal {
            v0=0x00000000,     ///<DMA request disabled.
            v1=0x00000001,     ///<DMA request enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TdmaeVal> tdmae{}; 
        namespace TdmaeValC{
            constexpr Register::FieldValue<decltype(tdmae),TdmaeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdmae),TdmaeVal::v1> v1{};
        }
    }
}
