#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal Asynchronous Receiver/Transmitter
    namespace Lpuart0Baud{    ///<LPUART Baud Rate Register
        using Addr = Register::Address<0x40054000,0x00f00000,0,unsigned>;
        ///Baud Rate Modulo Divisor.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> sbr{}; 
        ///Stop Bit Number Select
        enum class SbnsVal {
            v0=0x00000000,     ///<One stop bit.
            v1=0x00000001,     ///<Two stop bits.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,SbnsVal> sbns{}; 
        namespace SbnsValC{
            constexpr Register::FieldValue<decltype(sbns)::Type,SbnsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sbns)::Type,SbnsVal::v1> v1{};
        }
        ///RX Input Active Edge Interrupt Enable
        enum class RxedgieVal {
            v0=0x00000000,     ///<Hardware interrupts from LPUART_STAT[RXEDGIF] disabled (use polling).
            v1=0x00000001,     ///<Hardware interrupt requested when LPUART_STAT[RXEDGIF] flag is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,RxedgieVal> rxedgie{}; 
        namespace RxedgieValC{
            constexpr Register::FieldValue<decltype(rxedgie)::Type,RxedgieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxedgie)::Type,RxedgieVal::v1> v1{};
        }
        ///LIN Break Detect Interrupt Enable
        enum class LbkdieVal {
            v0=0x00000000,     ///<Hardware interrupts from LPUART_STAT[LBKDIF] disabled (use polling).
            v1=0x00000001,     ///<Hardware interrupt requested when LPUART_STAT[LBKDIF] flag is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LbkdieVal> lbkdie{}; 
        namespace LbkdieValC{
            constexpr Register::FieldValue<decltype(lbkdie)::Type,LbkdieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lbkdie)::Type,LbkdieVal::v1> v1{};
        }
        ///Resynchronization Disable
        enum class ResyncdisVal {
            v0=0x00000000,     ///<Resynchronization during received data word is supported
            v1=0x00000001,     ///<Resynchronization during received data word is disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ResyncdisVal> resyncdis{}; 
        namespace ResyncdisValC{
            constexpr Register::FieldValue<decltype(resyncdis)::Type,ResyncdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(resyncdis)::Type,ResyncdisVal::v1> v1{};
        }
        ///Both Edge Sampling
        enum class BothedgeVal {
            v0=0x00000000,     ///<Receiver samples input data using the rising edge of the baud rate clock.
            v1=0x00000001,     ///<Receiver samples input data using the rising and falling edge of the baud rate clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,BothedgeVal> bothedge{}; 
        namespace BothedgeValC{
            constexpr Register::FieldValue<decltype(bothedge)::Type,BothedgeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bothedge)::Type,BothedgeVal::v1> v1{};
        }
        ///Match Configuration
        enum class MatcfgVal {
            v00=0x00000000,     ///<Address Match Wakeup
            v01=0x00000001,     ///<Idle Match Wakeup
            v10=0x00000002,     ///<Match On and Match Off
            v11=0x00000003,     ///<Enables RWU on Data Match and Match On/Off for transmitter CTS input
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,MatcfgVal> matcfg{}; 
        namespace MatcfgValC{
            constexpr Register::FieldValue<decltype(matcfg)::Type,MatcfgVal::v00> v00{};
            constexpr Register::FieldValue<decltype(matcfg)::Type,MatcfgVal::v01> v01{};
            constexpr Register::FieldValue<decltype(matcfg)::Type,MatcfgVal::v10> v10{};
            constexpr Register::FieldValue<decltype(matcfg)::Type,MatcfgVal::v11> v11{};
        }
        ///Over Sampling Ratio
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> osr{}; 
        ///10-bit Mode select
        enum class M10Val {
            v0=0x00000000,     ///<Receiver and transmitter use 8-bit or 9-bit data characters.
            v1=0x00000001,     ///<Receiver and transmitter use 10-bit data characters.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M10Val> m10{}; 
        namespace M10ValC{
            constexpr Register::FieldValue<decltype(m10)::Type,M10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(m10)::Type,M10Val::v1> v1{};
        }
        ///Match Address Mode Enable 2
        enum class Maen2Val {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Enables automatic address matching or data matching mode for MATCH[MA2].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Maen2Val> maen2{}; 
        namespace Maen2ValC{
            constexpr Register::FieldValue<decltype(maen2)::Type,Maen2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(maen2)::Type,Maen2Val::v1> v1{};
        }
        ///Match Address Mode Enable 1
        enum class Maen1Val {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Enables automatic address matching or data matching mode for MATCH[MA1].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Maen1Val> maen1{}; 
        namespace Maen1ValC{
            constexpr Register::FieldValue<decltype(maen1)::Type,Maen1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(maen1)::Type,Maen1Val::v1> v1{};
        }
    }
    namespace Lpuart0Stat{    ///<LPUART Status Register
        using Addr = Register::Address<0x40054004,0x00003fff,0,unsigned>;
        ///Match 2 Flag
        enum class Ma2fVal {
            v0=0x00000000,     ///<Received data is not equal to MA2
            v1=0x00000001,     ///<Received data is equal to MA2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ma2fVal> ma2f{}; 
        namespace Ma2fValC{
            constexpr Register::FieldValue<decltype(ma2f)::Type,Ma2fVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ma2f)::Type,Ma2fVal::v1> v1{};
        }
        ///Match 1 Flag
        enum class Ma1fVal {
            v0=0x00000000,     ///<Received data is not equal to MA1
            v1=0x00000001,     ///<Received data is equal to MA1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ma1fVal> ma1f{}; 
        namespace Ma1fValC{
            constexpr Register::FieldValue<decltype(ma1f)::Type,Ma1fVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ma1f)::Type,Ma1fVal::v1> v1{};
        }
        ///Parity Error Flag
        enum class PfVal {
            v0=0x00000000,     ///<No parity error.
            v1=0x00000001,     ///<Parity error.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,PfVal> pf{}; 
        namespace PfValC{
            constexpr Register::FieldValue<decltype(pf)::Type,PfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pf)::Type,PfVal::v1> v1{};
        }
        ///Framing Error Flag
        enum class FeVal {
            v0=0x00000000,     ///<No framing error detected. This does not guarantee the framing is correct.
            v1=0x00000001,     ///<Framing error.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,FeVal> fe{}; 
        namespace FeValC{
            constexpr Register::FieldValue<decltype(fe)::Type,FeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fe)::Type,FeVal::v1> v1{};
        }
        ///Noise Flag
        enum class NfVal {
            v0=0x00000000,     ///<No noise detected.
            v1=0x00000001,     ///<Noise detected in the received character in LPUART_DATA.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,NfVal> nf{}; 
        namespace NfValC{
            constexpr Register::FieldValue<decltype(nf)::Type,NfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nf)::Type,NfVal::v1> v1{};
        }
        ///Receiver Overrun Flag
        enum class Or_Val {
            v0=0x00000000,     ///<No overrun.
            v1=0x00000001,     ///<Receive overrun (new LPUART data lost).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Or_Val> or_{}; 
        namespace Or_ValC{
            constexpr Register::FieldValue<decltype(or_)::Type,Or_Val::v0> v0{};
            constexpr Register::FieldValue<decltype(or_)::Type,Or_Val::v1> v1{};
        }
        ///Idle Line Flag
        enum class IdleVal {
            v0=0x00000000,     ///<No idle line detected.
            v1=0x00000001,     ///<Idle line was detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,IdleVal> idle{}; 
        namespace IdleValC{
            constexpr Register::FieldValue<decltype(idle)::Type,IdleVal::v0> v0{};
            constexpr Register::FieldValue<decltype(idle)::Type,IdleVal::v1> v1{};
        }
        ///Receive Data Register Full Flag
        enum class RdrfVal {
            v0=0x00000000,     ///<Receive data buffer empty.
            v1=0x00000001,     ///<Receive data buffer full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,RdrfVal> rdrf{}; 
        namespace RdrfValC{
            constexpr Register::FieldValue<decltype(rdrf)::Type,RdrfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rdrf)::Type,RdrfVal::v1> v1{};
        }
        ///Transmission Complete Flag
        enum class TcVal {
            v0=0x00000000,     ///<Transmitter active (sending data, a preamble, or a break).
            v1=0x00000001,     ///<Transmitter idle (transmission activity complete).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,TcVal> tc{}; 
        namespace TcValC{
            constexpr Register::FieldValue<decltype(tc)::Type,TcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tc)::Type,TcVal::v1> v1{};
        }
        ///Transmit Data Register Empty Flag
        enum class TdreVal {
            v0=0x00000000,     ///<Transmit data buffer full.
            v1=0x00000001,     ///<Transmit data buffer empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TdreVal> tdre{}; 
        namespace TdreValC{
            constexpr Register::FieldValue<decltype(tdre)::Type,TdreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdre)::Type,TdreVal::v1> v1{};
        }
        ///Receiver Active Flag
        enum class RafVal {
            v0=0x00000000,     ///<LPUART receiver idle waiting for a start bit.
            v1=0x00000001,     ///<LPUART receiver active (LPUART_RX input not idle).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,RafVal> raf{}; 
        namespace RafValC{
            constexpr Register::FieldValue<decltype(raf)::Type,RafVal::v0> v0{};
            constexpr Register::FieldValue<decltype(raf)::Type,RafVal::v1> v1{};
        }
        ///LIN Break Detection Enable
        enum class LbkdeVal {
            v0=0x00000000,     ///<Break character is detected at length 10 bit times (if M = 0, SBNS = 0) or 11 (if M = 1, SBNS = 0 or M = 0, SBNS = 1) or 12 (if M = 1, SBNS = 1 or M10 = 1, SNBS = 0) or 13 (if M10 = 1, SNBS = 1).
            v1=0x00000001,     ///<Break character is detected at length of 11 bit times (if M = 0, SBNS = 0) or 12 (if M = 1, SBNS = 0 or M = 0, SBNS = 1) or 14 (if M = 1, SBNS = 1 or M10 = 1, SNBS = 0) or 15 (if M10 = 1, SNBS = 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,LbkdeVal> lbkde{}; 
        namespace LbkdeValC{
            constexpr Register::FieldValue<decltype(lbkde)::Type,LbkdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lbkde)::Type,LbkdeVal::v1> v1{};
        }
        ///Break Character Generation Length
        enum class Brk13Val {
            v0=0x00000000,     ///<Break character is transmitted with length of 10 bit times (if M = 0, SBNS = 0) or 11 (if M = 1, SBNS = 0 or M = 0, SBNS = 1) or 12 (if M = 1, SBNS = 1 or M10 = 1, SNBS = 0) or 13 (if M10 = 1, SNBS = 1).
            v1=0x00000001,     ///<Break character is transmitted with length of 13 bit times (if M = 0, SBNS = 0) or 14 (if M = 1, SBNS = 0 or M = 0, SBNS = 1) or 15 (if M = 1, SBNS = 1 or M10 = 1, SNBS = 0) or 16 (if M10 = 1, SNBS = 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Brk13Val> brk13{}; 
        namespace Brk13ValC{
            constexpr Register::FieldValue<decltype(brk13)::Type,Brk13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(brk13)::Type,Brk13Val::v1> v1{};
        }
        ///Receive Wake Up Idle Detect
        enum class RwuidVal {
            v0=0x00000000,     ///<During receive standby state (RWU = 1), the IDLE bit does not get set upon detection of an idle character. During address match wakeup, the IDLE bit does not get set when an address does not match.
            v1=0x00000001,     ///<During receive standby state (RWU = 1), the IDLE bit gets set upon detection of an idle character. During address match wakeup, the IDLE bit does get set when an address does not match.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,RwuidVal> rwuid{}; 
        namespace RwuidValC{
            constexpr Register::FieldValue<decltype(rwuid)::Type,RwuidVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rwuid)::Type,RwuidVal::v1> v1{};
        }
        ///Receive Data Inversion
        enum class RxinvVal {
            v0=0x00000000,     ///<Receive data not inverted.
            v1=0x00000001,     ///<Receive data inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,RxinvVal> rxinv{}; 
        namespace RxinvValC{
            constexpr Register::FieldValue<decltype(rxinv)::Type,RxinvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxinv)::Type,RxinvVal::v1> v1{};
        }
        ///MSB First
        enum class MsbfVal {
            v0=0x00000000,     ///<LSB (bit0) is the first bit that is transmitted following the start bit. Further, the first bit received after the start bit is identified as bit0.
            v1=0x00000001,     ///<MSB (bit9, bit8, bit7 or bit6) is the first bit that is transmitted following the start bit depending on the setting of CTRL[M], CTRL[PE] and BAUD[M10]. Further, the first bit received after the start bit is identified as bit9, bit8, bit7 or bit6 depending on the setting of CTRL[M] and CTRL[PE].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,MsbfVal> msbf{}; 
        namespace MsbfValC{
            constexpr Register::FieldValue<decltype(msbf)::Type,MsbfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(msbf)::Type,MsbfVal::v1> v1{};
        }
        ///LPUART_RX Pin Active Edge Interrupt Flag
        enum class RxedgifVal {
            v0=0x00000000,     ///<No active edge on the receive pin has occurred.
            v1=0x00000001,     ///<An active edge on the receive pin has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,RxedgifVal> rxedgif{}; 
        namespace RxedgifValC{
            constexpr Register::FieldValue<decltype(rxedgif)::Type,RxedgifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxedgif)::Type,RxedgifVal::v1> v1{};
        }
        ///LIN Break Detect Interrupt Flag
        enum class LbkdifVal {
            v0=0x00000000,     ///<No LIN break character has been detected.
            v1=0x00000001,     ///<LIN break character has been detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,LbkdifVal> lbkdif{}; 
        namespace LbkdifValC{
            constexpr Register::FieldValue<decltype(lbkdif)::Type,LbkdifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lbkdif)::Type,LbkdifVal::v1> v1{};
        }
    }
    namespace Lpuart0Ctrl{    ///<LPUART Control Register
        using Addr = Register::Address<0x40054008,0x00003800,0,unsigned>;
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
            v0=0x00000000,     ///<No hardware parity generation or checking.
            v1=0x00000001,     ///<Parity enabled.
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
            v0=0x00000000,     ///<Configures RWU for idle-line wakeup.
            v1=0x00000001,     ///<Configures RWU with address-mark wakeup.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,WakeVal> wake{}; 
        namespace WakeValC{
            constexpr Register::FieldValue<decltype(wake)::Type,WakeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wake)::Type,WakeVal::v1> v1{};
        }
        ///9-Bit or 8-Bit Mode Select
        enum class MVal {
            v0=0x00000000,     ///<Receiver and transmitter use 8-bit data characters.
            v1=0x00000001,     ///<Receiver and transmitter use 9-bit data characters.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,MVal> m{}; 
        namespace MValC{
            constexpr Register::FieldValue<decltype(m)::Type,MVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m)::Type,MVal::v1> v1{};
        }
        ///Receiver Source Select
        enum class RsrcVal {
            v0=0x00000000,     ///<Provided LOOPS is set, RSRC is cleared, selects internal loop back mode and the LPUART does not use the LPUART_RX pin.
            v1=0x00000001,     ///<Single-wire LPUART mode where the LPUART_TX pin is connected to the transmitter output and receiver input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RsrcVal> rsrc{}; 
        namespace RsrcValC{
            constexpr Register::FieldValue<decltype(rsrc)::Type,RsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rsrc)::Type,RsrcVal::v1> v1{};
        }
        ///Doze Enable
        enum class DozeenVal {
            v0=0x00000000,     ///<LPUART is enabled in Doze mode.
            v1=0x00000001,     ///<LPUART is disabled in Doze mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DozeenVal> dozeen{}; 
        namespace DozeenValC{
            constexpr Register::FieldValue<decltype(dozeen)::Type,DozeenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dozeen)::Type,DozeenVal::v1> v1{};
        }
        ///Loop Mode Select
        enum class LoopsVal {
            v0=0x00000000,     ///<Normal operation - LPUART_RX and LPUART_TX use separate pins.
            v1=0x00000001,     ///<Loop mode or single-wire mode where transmitter outputs are internally connected to receiver input (see RSRC bit).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LoopsVal> loops{}; 
        namespace LoopsValC{
            constexpr Register::FieldValue<decltype(loops)::Type,LoopsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(loops)::Type,LoopsVal::v1> v1{};
        }
        ///Idle Configuration
        enum class IdlecfgVal {
            v000=0x00000000,     ///<1 idle character
            v001=0x00000001,     ///<2 idle characters
            v010=0x00000002,     ///<4 idle characters
            v011=0x00000003,     ///<8 idle characters
            v100=0x00000004,     ///<16 idle characters
            v101=0x00000005,     ///<32 idle characters
            v110=0x00000006,     ///<64 idle characters
            v111=0x00000007,     ///<128 idle characters
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,IdlecfgVal> idlecfg{}; 
        namespace IdlecfgValC{
            constexpr Register::FieldValue<decltype(idlecfg)::Type,IdlecfgVal::v000> v000{};
            constexpr Register::FieldValue<decltype(idlecfg)::Type,IdlecfgVal::v001> v001{};
            constexpr Register::FieldValue<decltype(idlecfg)::Type,IdlecfgVal::v010> v010{};
            constexpr Register::FieldValue<decltype(idlecfg)::Type,IdlecfgVal::v011> v011{};
            constexpr Register::FieldValue<decltype(idlecfg)::Type,IdlecfgVal::v100> v100{};
            constexpr Register::FieldValue<decltype(idlecfg)::Type,IdlecfgVal::v101> v101{};
            constexpr Register::FieldValue<decltype(idlecfg)::Type,IdlecfgVal::v110> v110{};
            constexpr Register::FieldValue<decltype(idlecfg)::Type,IdlecfgVal::v111> v111{};
        }
        ///Match 2 Interrupt Enable
        enum class Ma2ieVal {
            v0=0x00000000,     ///<MA2F interrupt disabled
            v1=0x00000001,     ///<MA2F interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ma2ieVal> ma2ie{}; 
        namespace Ma2ieValC{
            constexpr Register::FieldValue<decltype(ma2ie)::Type,Ma2ieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ma2ie)::Type,Ma2ieVal::v1> v1{};
        }
        ///Match 1 Interrupt Enable
        enum class Ma1ieVal {
            v0=0x00000000,     ///<MA1F interrupt disabled
            v1=0x00000001,     ///<MA1F interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ma1ieVal> ma1ie{}; 
        namespace Ma1ieValC{
            constexpr Register::FieldValue<decltype(ma1ie)::Type,Ma1ieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ma1ie)::Type,Ma1ieVal::v1> v1{};
        }
        ///Send Break
        enum class SbkVal {
            v0=0x00000000,     ///<Normal transmitter operation.
            v1=0x00000001,     ///<Queue break character(s) to be sent.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SbkVal> sbk{}; 
        namespace SbkValC{
            constexpr Register::FieldValue<decltype(sbk)::Type,SbkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sbk)::Type,SbkVal::v1> v1{};
        }
        ///Receiver Wakeup Control
        enum class RwuVal {
            v0=0x00000000,     ///<Normal receiver operation.
            v1=0x00000001,     ///<LPUART receiver in standby waiting for wakeup condition.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,RwuVal> rwu{}; 
        namespace RwuValC{
            constexpr Register::FieldValue<decltype(rwu)::Type,RwuVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rwu)::Type,RwuVal::v1> v1{};
        }
        ///Receiver Enable
        enum class ReVal {
            v0=0x00000000,     ///<Receiver disabled.
            v1=0x00000001,     ///<Receiver enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ReVal> re{}; 
        namespace ReValC{
            constexpr Register::FieldValue<decltype(re)::Type,ReVal::v0> v0{};
            constexpr Register::FieldValue<decltype(re)::Type,ReVal::v1> v1{};
        }
        ///Transmitter Enable
        enum class TeVal {
            v0=0x00000000,     ///<Transmitter disabled.
            v1=0x00000001,     ///<Transmitter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,TeVal> te{}; 
        namespace TeValC{
            constexpr Register::FieldValue<decltype(te)::Type,TeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(te)::Type,TeVal::v1> v1{};
        }
        ///Idle Line Interrupt Enable
        enum class IlieVal {
            v0=0x00000000,     ///<Hardware interrupts from IDLE disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when IDLE flag is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,IlieVal> ilie{}; 
        namespace IlieValC{
            constexpr Register::FieldValue<decltype(ilie)::Type,IlieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ilie)::Type,IlieVal::v1> v1{};
        }
        ///Receiver Interrupt Enable
        enum class RieVal {
            v0=0x00000000,     ///<Hardware interrupts from RDRF disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when RDRF flag is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,RieVal> rie{}; 
        namespace RieValC{
            constexpr Register::FieldValue<decltype(rie)::Type,RieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rie)::Type,RieVal::v1> v1{};
        }
        ///Transmission Complete Interrupt Enable for
        enum class TcieVal {
            v0=0x00000000,     ///<Hardware interrupts from TC disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when TC flag is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,TcieVal> tcie{}; 
        namespace TcieValC{
            constexpr Register::FieldValue<decltype(tcie)::Type,TcieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcie)::Type,TcieVal::v1> v1{};
        }
        ///Transmit Interrupt Enable
        enum class TieVal {
            v0=0x00000000,     ///<Hardware interrupts from TDRE disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when TDRE flag is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TieVal> tie{}; 
        namespace TieValC{
            constexpr Register::FieldValue<decltype(tie)::Type,TieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tie)::Type,TieVal::v1> v1{};
        }
        ///Parity Error Interrupt Enable
        enum class PeieVal {
            v0=0x00000000,     ///<PF interrupts disabled; use polling).
            v1=0x00000001,     ///<Hardware interrupt requested when PF is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,PeieVal> peie{}; 
        namespace PeieValC{
            constexpr Register::FieldValue<decltype(peie)::Type,PeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(peie)::Type,PeieVal::v1> v1{};
        }
        ///Framing Error Interrupt Enable
        enum class FeieVal {
            v0=0x00000000,     ///<FE interrupts disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when FE is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,FeieVal> feie{}; 
        namespace FeieValC{
            constexpr Register::FieldValue<decltype(feie)::Type,FeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(feie)::Type,FeieVal::v1> v1{};
        }
        ///Noise Error Interrupt Enable
        enum class NeieVal {
            v0=0x00000000,     ///<NF interrupts disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when NF is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,NeieVal> neie{}; 
        namespace NeieValC{
            constexpr Register::FieldValue<decltype(neie)::Type,NeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(neie)::Type,NeieVal::v1> v1{};
        }
        ///Overrun Interrupt Enable
        enum class OrieVal {
            v0=0x00000000,     ///<OR interrupts disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when OR is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,OrieVal> orie{}; 
        namespace OrieValC{
            constexpr Register::FieldValue<decltype(orie)::Type,OrieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(orie)::Type,OrieVal::v1> v1{};
        }
        ///Transmit Data Inversion
        enum class TxinvVal {
            v0=0x00000000,     ///<Transmit data not inverted.
            v1=0x00000001,     ///<Transmit data inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,TxinvVal> txinv{}; 
        namespace TxinvValC{
            constexpr Register::FieldValue<decltype(txinv)::Type,TxinvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txinv)::Type,TxinvVal::v1> v1{};
        }
        ///LPUART_TX Pin Direction in Single-Wire Mode
        enum class TxdirVal {
            v0=0x00000000,     ///<LPUART_TX pin is an input in single-wire mode.
            v1=0x00000001,     ///<LPUART_TX pin is an output in single-wire mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,TxdirVal> txdir{}; 
        namespace TxdirValC{
            constexpr Register::FieldValue<decltype(txdir)::Type,TxdirVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txdir)::Type,TxdirVal::v1> v1{};
        }
        ///Receive Bit 9 / Transmit Bit 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> r9t8{}; 
        ///Receive Bit 8 / Transmit Bit 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> r8t9{}; 
    }
    namespace Lpuart0Data{    ///<LPUART Data Register
        using Addr = Register::Address<0x4005400c,0xffff0400,0,unsigned>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> r8t8{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> r9t9{}; 
        ///Idle Line
        enum class IdlineVal {
            v0=0x00000000,     ///<Receiver was not idle before receiving this character.
            v1=0x00000001,     ///<Receiver was idle before receiving this character.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,IdlineVal> idline{}; 
        namespace IdlineValC{
            constexpr Register::FieldValue<decltype(idline)::Type,IdlineVal::v0> v0{};
            constexpr Register::FieldValue<decltype(idline)::Type,IdlineVal::v1> v1{};
        }
        ///Receive Buffer Empty
        enum class RxemptVal {
            v0=0x00000000,     ///<Receive buffer contains valid data.
            v1=0x00000001,     ///<Receive buffer is empty, data returned on read is not valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,RxemptVal> rxempt{}; 
        namespace RxemptValC{
            constexpr Register::FieldValue<decltype(rxempt)::Type,RxemptVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxempt)::Type,RxemptVal::v1> v1{};
        }
        ///Frame Error / Transmit Special Character
        enum class FretscVal {
            v0=0x00000000,     ///<The dataword was received without a frame error on read, transmit a normal character on write.
            v1=0x00000001,     ///<The dataword was received with a frame error, transmit an idle or break character on transmit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,FretscVal> fretsc{}; 
        namespace FretscValC{
            constexpr Register::FieldValue<decltype(fretsc)::Type,FretscVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fretsc)::Type,FretscVal::v1> v1{};
        }
        ///no description available
        enum class ParityeVal {
            v0=0x00000000,     ///<The dataword was received without a parity error.
            v1=0x00000001,     ///<The dataword was received with a parity error.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ParityeVal> paritye{}; 
        namespace ParityeValC{
            constexpr Register::FieldValue<decltype(paritye)::Type,ParityeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(paritye)::Type,ParityeVal::v1> v1{};
        }
        ///no description available
        enum class NoisyVal {
            v0=0x00000000,     ///<The dataword was received without noise.
            v1=0x00000001,     ///<The data was received with noise.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,NoisyVal> noisy{}; 
        namespace NoisyValC{
            constexpr Register::FieldValue<decltype(noisy)::Type,NoisyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(noisy)::Type,NoisyVal::v1> v1{};
        }
    }
    namespace Lpuart0Match{    ///<LPUART Match Address Register
        using Addr = Register::Address<0x40054010,0xfc00fc00,0,unsigned>;
        ///Match Address 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> ma1{}; 
        ///Match Address 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> ma2{}; 
    }
}
