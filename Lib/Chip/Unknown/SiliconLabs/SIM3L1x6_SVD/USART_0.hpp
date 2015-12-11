#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Noneconfig{    ///<Module Configuration
        using Addr = Register::Address<0x40000000,0x08800880,0,unsigned>;
        ///Receiver Start Enable. 
        enum class RstrtenVal {
            disabled=0x00000000,     ///<Do not expect a start bit during receptions.
            enabled=0x00000001,     ///<Expect a start bit during receptions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RstrtenVal> rstrten{}; 
        namespace RstrtenValC{
            constexpr Register::FieldValue<decltype(rstrten)::Type,RstrtenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rstrten)::Type,RstrtenVal::enabled> enabled{};
        }
        }
        ///Receiver Parity Enable. 
        enum class RparenVal {
            disabled=0x00000000,     ///<Do not expect a parity bit during receptions.
            enabled=0x00000001,     ///<Expect a parity bit during receptions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RparenVal> rparen{}; 
        namespace RparenValC{
            constexpr Register::FieldValue<decltype(rparen)::Type,RparenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rparen)::Type,RparenVal::enabled> enabled{};
        }
        }
        ///Receiver Stop Enable. 
        enum class RstpenVal {
            disabled=0x00000000,     ///<Do not expect stop bits during receptions.
            enabled=0x00000001,     ///<Expect stop bits during receptions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RstpenVal> rstpen{}; 
        namespace RstpenValC{
            constexpr Register::FieldValue<decltype(rstpen)::Type,RstpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rstpen)::Type,RstpenVal::enabled> enabled{};
        }
        }
        ///Receiver Stop Mode. 
        enum class RstpmdVal {
            v0p5Stop=0x00000000,     ///<0.5 stop bit.
            v1Stop=0x00000001,     ///<1 stop bit.
            v1p5Stop=0x00000002,     ///<1.5 stop bits.
            v2Stop=0x00000003,     ///<2 stop bits.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,RstpmdVal> rstpmd{}; 
        namespace RstpmdValC{
            constexpr Register::FieldValue<decltype(rstpmd)::Type,RstpmdVal::v0p5Stop> v0p5Stop{};
            constexpr Register::FieldValue<decltype(rstpmd)::Type,RstpmdVal::v1Stop> v1Stop{};
            constexpr Register::FieldValue<decltype(rstpmd)::Type,RstpmdVal::v1p5Stop> v1p5Stop{};
            constexpr Register::FieldValue<decltype(rstpmd)::Type,RstpmdVal::v2Stop> v2Stop{};
        }
        }
        ///Receiver Parity Mode. 
        enum class RparmdVal {
            odd=0x00000000,     ///<Odd Parity.
            even=0x00000001,     ///<Even Parity.
            mark=0x00000002,     ///<Set (Parity = 1).
            space=0x00000003,     ///<Clear (Parity = 0).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,RparmdVal> rparmd{}; 
        namespace RparmdValC{
            constexpr Register::FieldValue<decltype(rparmd)::Type,RparmdVal::odd> odd{};
            constexpr Register::FieldValue<decltype(rparmd)::Type,RparmdVal::even> even{};
            constexpr Register::FieldValue<decltype(rparmd)::Type,RparmdVal::mark> mark{};
            constexpr Register::FieldValue<decltype(rparmd)::Type,RparmdVal::space> space{};
        }
        }
        ///Receiver Data Length. 
        enum class RdatlnVal {
            v5Bits=0x00000000,     ///<5 bits.
            v6Bits=0x00000001,     ///<6 bits.
            v7Bits=0x00000002,     ///<7 bits.
            v8Bits=0x00000003,     ///<8 bits.
            v9BitsStored=0x00000004,     ///<9 bits. The 9th bit is stored in the FIFO (normal mode).
            v9BitsMatch=0x00000005,     ///<9 bits. The 9th bit is not stored in the FIFO (fixed mode). This mode is used when the 9th bit is only used for match operations (see MATMD).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,RdatlnVal> rdatln{}; 
        namespace RdatlnValC{
            constexpr Register::FieldValue<decltype(rdatln)::Type,RdatlnVal::v5Bits> v5Bits{};
            constexpr Register::FieldValue<decltype(rdatln)::Type,RdatlnVal::v6Bits> v6Bits{};
            constexpr Register::FieldValue<decltype(rdatln)::Type,RdatlnVal::v7Bits> v7Bits{};
            constexpr Register::FieldValue<decltype(rdatln)::Type,RdatlnVal::v8Bits> v8Bits{};
            constexpr Register::FieldValue<decltype(rdatln)::Type,RdatlnVal::v9BitsStored> v9BitsStored{};
            constexpr Register::FieldValue<decltype(rdatln)::Type,RdatlnVal::v9BitsMatch> v9BitsMatch{};
        }
        }
        ///Receiver Smartcard Parity Response Enable. 
        enum class RscenVal {
            disabled=0x00000000,     ///<The receiver does not send a Smartcard parity error response.
            enabled=0x00000001,     ///<The receiver sends a Smartcard parity response.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,RscenVal> rscen{}; 
        namespace RscenValC{
            constexpr Register::FieldValue<decltype(rscen)::Type,RscenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rscen)::Type,RscenVal::enabled> enabled{};
        }
        }
        ///Receiver IrDA Enable. 
        enum class RirdaenVal {
            disabled=0x00000000,     ///<The receiver does not operate in IrDA mode.
            enabled=0x00000001,     ///<The receiver operates in IrDA mode. 
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,RirdaenVal> rirdaen{}; 
        namespace RirdaenValC{
            constexpr Register::FieldValue<decltype(rirdaen)::Type,RirdaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rirdaen)::Type,RirdaenVal::enabled> enabled{};
        }
        }
        ///Receiver Invert Enable. 
        enum class RinvenVal {
            disabled=0x00000000,     ///<Do not invert the RX pin signals (the RX idle state is high).
            enabled=0x00000001,     ///<Invert the RX pin signals (the RX idle state is low).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,RinvenVal> rinven{}; 
        namespace RinvenValC{
            constexpr Register::FieldValue<decltype(rinven)::Type,RinvenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rinven)::Type,RinvenVal::enabled> enabled{};
        }
        }
        ///Receiver Synchronous Mode Enable. 
        enum class RsyncenVal {
            disabled=0x00000000,     ///<The receiver operates in asynchronous mode.
            enabled=0x00000001,     ///<The receiver operates in synchronous mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,RsyncenVal> rsyncen{}; 
        namespace RsyncenValC{
            constexpr Register::FieldValue<decltype(rsyncen)::Type,RsyncenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rsyncen)::Type,RsyncenVal::enabled> enabled{};
        }
        }
        ///Transmitter Start Enable. 
        enum class TstrtenVal {
            disabled=0x00000000,     ///<Do not generate a start bit during transmissions.
            enabled=0x00000001,     ///<Generate a start bit during transmissions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TstrtenVal> tstrten{}; 
        namespace TstrtenValC{
            constexpr Register::FieldValue<decltype(tstrten)::Type,TstrtenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tstrten)::Type,TstrtenVal::enabled> enabled{};
        }
        }
        ///Transmitter Parity Enable. 
        enum class TparenVal {
            disabled=0x00000000,     ///<Do not send a parity bit during transmissions.
            enabled=0x00000001,     ///<Send a parity bit during transmissions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,TparenVal> tparen{}; 
        namespace TparenValC{
            constexpr Register::FieldValue<decltype(tparen)::Type,TparenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tparen)::Type,TparenVal::enabled> enabled{};
        }
        }
        ///Transmitter Stop Enable. 
        enum class TstpenVal {
            disabled=0x00000000,     ///<Do not send stop bits during transmissions.
            enabled=0x00000001,     ///<Send stop bits during transmissions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,TstpenVal> tstpen{}; 
        namespace TstpenValC{
            constexpr Register::FieldValue<decltype(tstpen)::Type,TstpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tstpen)::Type,TstpenVal::enabled> enabled{};
        }
        }
        ///Transmitter Stop Mode. 
        enum class TstpmdVal {
            v0p5Stop=0x00000000,     ///<0.5 stop bit.
            v1Stop=0x00000001,     ///<1 stop bit.
            v1p5Stop=0x00000002,     ///<1.5 stop bits.
            v2Stop=0x00000003,     ///<2 stop bits.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,TstpmdVal> tstpmd{}; 
        namespace TstpmdValC{
            constexpr Register::FieldValue<decltype(tstpmd)::Type,TstpmdVal::v0p5Stop> v0p5Stop{};
            constexpr Register::FieldValue<decltype(tstpmd)::Type,TstpmdVal::v1Stop> v1Stop{};
            constexpr Register::FieldValue<decltype(tstpmd)::Type,TstpmdVal::v1p5Stop> v1p5Stop{};
            constexpr Register::FieldValue<decltype(tstpmd)::Type,TstpmdVal::v2Stop> v2Stop{};
        }
        }
        ///Transmitter Parity Mode. 
        enum class TparmdVal {
            odd=0x00000000,     ///<Odd Parity.
            even=0x00000001,     ///<Even Parity.
            mark=0x00000002,     ///<Set (Parity = 1).
            space=0x00000003,     ///<Clear (Parity = 0).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,TparmdVal> tparmd{}; 
        namespace TparmdValC{
            constexpr Register::FieldValue<decltype(tparmd)::Type,TparmdVal::odd> odd{};
            constexpr Register::FieldValue<decltype(tparmd)::Type,TparmdVal::even> even{};
            constexpr Register::FieldValue<decltype(tparmd)::Type,TparmdVal::mark> mark{};
            constexpr Register::FieldValue<decltype(tparmd)::Type,TparmdVal::space> space{};
        }
        }
        ///Transmitter Data Length. 
        enum class TdatlnVal {
            v5Bits=0x00000000,     ///<5 bits.
            v6Bits=0x00000001,     ///<6 bits.
            v7Bits=0x00000002,     ///<7 bits.
            v8Bits=0x00000003,     ///<8 bits.
            v9BitsFifo=0x00000004,     ///<9 bits. The 9th bit is taken from the FIFO data (normal mode).
            v9BitsTbit=0x00000005,     ///<9 bits. The 9th bit is set by the value of TBIT (fixed mode).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,TdatlnVal> tdatln{}; 
        namespace TdatlnValC{
            constexpr Register::FieldValue<decltype(tdatln)::Type,TdatlnVal::v5Bits> v5Bits{};
            constexpr Register::FieldValue<decltype(tdatln)::Type,TdatlnVal::v6Bits> v6Bits{};
            constexpr Register::FieldValue<decltype(tdatln)::Type,TdatlnVal::v7Bits> v7Bits{};
            constexpr Register::FieldValue<decltype(tdatln)::Type,TdatlnVal::v8Bits> v8Bits{};
            constexpr Register::FieldValue<decltype(tdatln)::Type,TdatlnVal::v9BitsFifo> v9BitsFifo{};
            constexpr Register::FieldValue<decltype(tdatln)::Type,TdatlnVal::v9BitsTbit> v9BitsTbit{};
        }
        }
        ///Transmitter Smartcard Parity Response Enable. 
        enum class TscenVal {
            disabled=0x00000000,     ///<The transmitter does not check for a Smartcard parity error response.
            enabled=0x00000001,     ///<The transmitter checks for a Smartcard parity error response.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,TscenVal> tscen{}; 
        namespace TscenValC{
            constexpr Register::FieldValue<decltype(tscen)::Type,TscenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tscen)::Type,TscenVal::enabled> enabled{};
        }
        }
        ///Transmitter IrDA Enable. 
        enum class TirdaenVal {
            disabled=0x00000000,     ///<Disable IrDA transmit mode.
            enabled=0x00000001,     ///<Enable IrDA transmit mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,TirdaenVal> tirdaen{}; 
        namespace TirdaenValC{
            constexpr Register::FieldValue<decltype(tirdaen)::Type,TirdaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tirdaen)::Type,TirdaenVal::enabled> enabled{};
        }
        }
        ///Transmitter Invert Enable. 
        enum class TinvenVal {
            disabled=0x00000000,     ///<Do not invert the TX pin signals (the TX idle state is high).
            enabled=0x00000001,     ///<Invert the TX pin signals (the TX idle state is low).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,TinvenVal> tinven{}; 
        namespace TinvenValC{
            constexpr Register::FieldValue<decltype(tinven)::Type,TinvenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tinven)::Type,TinvenVal::enabled> enabled{};
        }
        }
        ///Transmitter Synchronous Mode Enable. 
        enum class TsyncenVal {
            disabled=0x00000000,     ///<The transmitter operates in asynchronous mode.
            enabled=0x00000001,     ///<The transmitter operates in synchronous mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,TsyncenVal> tsyncen{}; 
        namespace TsyncenValC{
            constexpr Register::FieldValue<decltype(tsyncen)::Type,TsyncenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tsyncen)::Type,TsyncenVal::enabled> enabled{};
        }
        }
    }
    namespace Nonemode{    ///<Module Mode Select
        using Addr = Register::Address<0x40000010,0x0712ffff,0,unsigned>;
        ///USART Debug Mode. 
        enum class DbgmdVal {
            run=0x00000000,     ///<The USART module will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will cause the USART module to halt. Any active transmissions and receptions will complete first.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,DbgmdVal> dbgmd{}; 
        namespace DbgmdValC{
            constexpr Register::FieldValue<decltype(dbgmd)::Type,DbgmdVal::run> run{};
            constexpr Register::FieldValue<decltype(dbgmd)::Type,DbgmdVal::halt> halt{};
        }
        }
        ///Loop Back Mode. 
        enum class LbmdVal {
            disabled=0x00000000,     ///<Loop back is disabled and the TX and RX signals are connected to the corresponding external pins.
            rxonly=0x00000001,     ///<Receive loop back. The receiver input path is disconnected from the RX pin and internally connected to the transmitter. Data transmitted will be sent out on TX and also received by the device.
            txonly=0x00000002,     ///<Transmit loop back. The transmitter output path is disconnected from the TX pin and the RX input pin is internally looped back out to the TX pin. Data received at RX will be received by the device and also sent directly back out on TX.
            both=0x00000003,     ///<Full loop back. Internally, the transmitter output is routed back to the receiver input. Neither the transmitter nor receiver are connected to external device pins. The device pin RX is looped back to TX in a similar fashion. Data transmitted on TX will be sent directly back in on RX.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,LbmdVal> lbmd{}; 
        namespace LbmdValC{
            constexpr Register::FieldValue<decltype(lbmd)::Type,LbmdVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lbmd)::Type,LbmdVal::rxonly> rxonly{};
            constexpr Register::FieldValue<decltype(lbmd)::Type,LbmdVal::txonly> txonly{};
            constexpr Register::FieldValue<decltype(lbmd)::Type,LbmdVal::both> both{};
        }
        }
        ///Stop State Clock Control. 
        enum class StpstclkVal {
            disabled=0x00000000,     ///<When the USART is a clock master, the clock is not generated during stop bits.
            enabled=0x00000001,     ///<When the USART is a clock master, the clock is generated during stop bits.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,StpstclkVal> stpstclk{}; 
        namespace StpstclkValC{
            constexpr Register::FieldValue<decltype(stpstclk)::Type,StpstclkVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stpstclk)::Type,StpstclkVal::enabled> enabled{};
        }
        }
        ///Start State Clock Control. 
        enum class StrtstclkVal {
            disabled=0x00000000,     ///<When the USART is a clock master, the clock is held idle during a start bit.
            enabled=0x00000001,     ///<When the USART is a clock master, the clock is generated during a start bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,StrtstclkVal> strtstclk{}; 
        namespace StrtstclkValC{
            constexpr Register::FieldValue<decltype(strtstclk)::Type,StrtstclkVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(strtstclk)::Type,StrtstclkVal::enabled> enabled{};
        }
        }
        ///Idle Clock Control. 
        enum class IstclkVal {
            disabled=0x00000000,     ///<When the USART is a clock master, the clock is held idle between transmissions.
            enabled=0x00000001,     ///<When the USART is a clock master, the clock is generated between transmissions or receptions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,IstclkVal> istclk{}; 
        namespace IstclkValC{
            constexpr Register::FieldValue<decltype(istclk)::Type,IstclkVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(istclk)::Type,IstclkVal::enabled> enabled{};
        }
        }
        ///Duplex Mode. 
        enum class DuplexmdVal {
            fullDuplex=0x00000000,     ///<Full-duplex mode. The transmitter and receiver can operate simultaneously.
            halfDuplex=0x00000001,     ///<Half-duplex mode. The transmitter automatically inhibits when the receiver is active and the receiver automatically inhibits when the transmitter is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,DuplexmdVal> duplexmd{}; 
        namespace DuplexmdValC{
            constexpr Register::FieldValue<decltype(duplexmd)::Type,DuplexmdVal::fullDuplex> fullDuplex{};
            constexpr Register::FieldValue<decltype(duplexmd)::Type,DuplexmdVal::halfDuplex> halfDuplex{};
        }
        }
        ///Clock Idle State. 
        enum class ClkidleVal {
            idleLow=0x00000000,     ///<The synchronous clock is low when idle.
            idleHigh=0x00000001,     ///<The synchronous clock is high when idle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ClkidleVal> clkidle{}; 
        namespace ClkidleValC{
            constexpr Register::FieldValue<decltype(clkidle)::Type,ClkidleVal::idleLow> idleLow{};
            constexpr Register::FieldValue<decltype(clkidle)::Type,ClkidleVal::idleHigh> idleHigh{};
        }
        }
        ///Clock Edge Select. 
        enum class ClkeselVal {
            falling=0x00000000,     ///<The clock falls in the middle of each bit.
            rising=0x00000001,     ///<The clock rises in the middle of each bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ClkeselVal> clkesel{}; 
        namespace ClkeselValC{
            constexpr Register::FieldValue<decltype(clkesel)::Type,ClkeselVal::falling> falling{};
            constexpr Register::FieldValue<decltype(clkesel)::Type,ClkeselVal::rising> rising{};
        }
        }
        ///Idle TX/UCLK Tristate Enable. 
        enum class ItsenVal {
            disabled=0x00000000,     ///<The TX and UCLK (if in synchronous master mode) pins are always an output in this mode, even when idle.
            enabled=0x00000001,     ///<If ISTCLK is cleared to 0, the TX pin is tristated when idle. The UCLK pin will also be tristated when idle if in synchronous master mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ItsenVal> itsen{}; 
        namespace ItsenValC{
            constexpr Register::FieldValue<decltype(itsen)::Type,ItsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(itsen)::Type,ItsenVal::enabled> enabled{};
        }
        }
        ///Operational Mode. 
        enum class OpmdVal {
            slave=0x00000000,     ///<The USART operates as a slave.
            master=0x00000001,     ///<The USART operates as a master.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,OpmdVal> opmd{}; 
        namespace OpmdValC{
            constexpr Register::FieldValue<decltype(opmd)::Type,OpmdVal::slave> slave{};
            constexpr Register::FieldValue<decltype(opmd)::Type,OpmdVal::master> master{};
        }
        }
    }
    namespace Noneflowcn{    ///<Flow Control
        using Addr = Register::Address<0x40000020,0xcf58ef1c,0,unsigned>;
        ///RTS State. 
        enum class RtsVal {
            low=0x00000000,     ///<RTS pin (before optional inversion) is driven low.
            high=0x00000001,     ///<RTS pin (before optional inversion) is driven high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RtsVal> rts{}; 
        namespace RtsValC{
            constexpr Register::FieldValue<decltype(rts)::Type,RtsVal::low> low{};
            constexpr Register::FieldValue<decltype(rts)::Type,RtsVal::high> high{};
        }
        }
        ///RX Pin Status. 
        enum class RxVal {
            low=0x00000000,     ///<RX pin (after optional inversion) is low.
            high=0x00000001,     ///<RX pin (after optional inversion) is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RxVal> rx{}; 
        namespace RxValC{
            constexpr Register::FieldValue<decltype(rx)::Type,RxVal::low> low{};
            constexpr Register::FieldValue<decltype(rx)::Type,RxVal::high> high{};
        }
        }
        ///RTS Invert Enable. 
        enum class RtsinvenVal {
            disabled=0x00000000,     ///<The USART does not invert the RTS signal before driving the pin.
            enabled=0x00000001,     ///<The USART inverts the RTS signal driving the pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RtsinvenVal> rtsinven{}; 
        namespace RtsinvenValC{
            constexpr Register::FieldValue<decltype(rtsinven)::Type,RtsinvenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtsinven)::Type,RtsinvenVal::enabled> enabled{};
        }
        }
        ///RTS Threshold Control. 
        enum class RtsthVal {
            full=0x00000000,     ///<RTS is de-asserted when the receive FIFO and shift register are full and no more incoming data can be stored.
            oneByteFree=0x00000001,     ///<RTS is de-asserted when the receive FIFO and shift register are nearly full and only one more data can be received.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RtsthVal> rtsth{}; 
        namespace RtsthValC{
            constexpr Register::FieldValue<decltype(rtsth)::Type,RtsthVal::full> full{};
            constexpr Register::FieldValue<decltype(rtsth)::Type,RtsthVal::oneByteFree> oneByteFree{};
        }
        }
        ///RTS Enable. 
        enum class RtsenVal {
            disabled=0x00000000,     ///<The RTS state is not changed by hardware. The RTS bit can be written only when hardware RTS is disabled (RTSEN = 0).
            enabled=0x00000001,     ///<Hardware sets RTS when the receive FIFO is at or above the threshold set by RTSTH and clears RTS otherwise.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RtsenVal> rtsen{}; 
        namespace RtsenValC{
            constexpr Register::FieldValue<decltype(rtsen)::Type,RtsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtsen)::Type,RtsenVal::enabled> enabled{};
        }
        }
        ///TX Output Enable. 
        enum class TxoenVal {
            disabled=0x00000000,     ///<The pin assigned to TX is tri-stated, regardless of other settings.
            enabled=0x00000001,     ///<The pin assigned to TX is controlled by the USART.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,TxoenVal> txoen{}; 
        namespace TxoenValC{
            constexpr Register::FieldValue<decltype(txoen)::Type,TxoenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txoen)::Type,TxoenVal::enabled> enabled{};
        }
        }
        ///CTS State. 
        enum class CtsVal {
            low=0x00000000,     ///<Indicates the CTS pin state (after optional inversion) is low.
            high=0x00000001,     ///<Indicates the CTS pin state (after optional inversion) is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,CtsVal> cts{}; 
        namespace CtsValC{
            constexpr Register::FieldValue<decltype(cts)::Type,CtsVal::low> low{};
            constexpr Register::FieldValue<decltype(cts)::Type,CtsVal::high> high{};
        }
        }
        ///TX State. 
        enum class TxVal {
            low=0x00000000,     ///<The TX pin (before optional inversion) is low.
            high=0x00000001,     ///<The TX pin (before optional inversion) is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,TxVal> tx{}; 
        namespace TxValC{
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::low> low{};
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::high> high{};
        }
        }
        ///UCLK State. 
        enum class UclkVal {
            low=0x00000000,     ///<The UCLK pin is low.
            high=0x00000001,     ///<The UCLK pin is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,UclkVal> uclk{}; 
        namespace UclkValC{
            constexpr Register::FieldValue<decltype(uclk)::Type,UclkVal::low> low{};
            constexpr Register::FieldValue<decltype(uclk)::Type,UclkVal::high> high{};
        }
        }
        ///CTS Invert Enable. 
        enum class CtsinvenVal {
            disabled=0x00000000,     ///<The USART does not invert CTS.
            enabled=0x00000001,     ///<The USART inverts CTS.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,CtsinvenVal> ctsinven{}; 
        namespace CtsinvenValC{
            constexpr Register::FieldValue<decltype(ctsinven)::Type,CtsinvenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ctsinven)::Type,CtsinvenVal::enabled> enabled{};
        }
        }
        ///CTS Enable. 
        enum class CtsenVal {
            disabled=0x00000000,     ///<The CTS pin state does not affect transmissions.
            enabled=0x00000001,     ///<Transmissions will begin only if the CTS pin (after optional inversion) is low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,CtsenVal> ctsen{}; 
        namespace CtsenValC{
            constexpr Register::FieldValue<decltype(ctsen)::Type,CtsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ctsen)::Type,CtsenVal::enabled> enabled{};
        }
        }
        ///Transmit IrDA Pulse Width. 
        enum class TirdapwVal {
            v116th=0x00000000,     ///<The IrDA pulse width is 1/16th of a bit period.
            v18th=0x00000001,     ///<The IrDA pulse width is 1/8th of a bit period.
            v316th=0x00000002,     ///<The IrDA pulse width is 3/16th of a bit period.
            v14th=0x00000003,     ///<The IrDA pulse width is 1/4th of a bit period.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,TirdapwVal> tirdapw{}; 
        namespace TirdapwValC{
            constexpr Register::FieldValue<decltype(tirdapw)::Type,TirdapwVal::v116th> v116th{};
            constexpr Register::FieldValue<decltype(tirdapw)::Type,TirdapwVal::v18th> v18th{};
            constexpr Register::FieldValue<decltype(tirdapw)::Type,TirdapwVal::v316th> v316th{};
            constexpr Register::FieldValue<decltype(tirdapw)::Type,TirdapwVal::v14th> v14th{};
        }
        }
    }
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40000030,0x27000090,0,unsigned>;
        ///Receive Frame Error Interrupt Flag. 
        enum class RfrmeriVal {
            notSet=0x00000000,     ///<Read: A frame error has not occurred since RFRMERI was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A frame error occurred. Write: Force a frame error interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RfrmeriVal> rfrmeri{}; 
        namespace RfrmeriValC{
            constexpr Register::FieldValue<decltype(rfrmeri)::Type,RfrmeriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rfrmeri)::Type,RfrmeriVal::set> set{};
        }
        }
        ///Receive Parity Error Interrupt Flag. 
        enum class RpareriVal {
            notSet=0x00000000,     ///<Read: An invalid parity bit has not been received since RPARERI was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: An invalid parity bit has been received since RPARERI was last cleared. Write: Force a parity error interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RpareriVal> rpareri{}; 
        namespace RpareriValC{
            constexpr Register::FieldValue<decltype(rpareri)::Type,RpareriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rpareri)::Type,RpareriVal::set> set{};
        }
        }
        ///Receive Overrun Error Interrupt Flag. 
        enum class RoreiVal {
            notSet=0x00000000,     ///<Read: A receiver overrun has not occurred since ROREI was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A receiver overrun occurred. Write: Force a receiver overrun interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RoreiVal> rorei{}; 
        namespace RoreiValC{
            constexpr Register::FieldValue<decltype(rorei)::Type,RoreiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rorei)::Type,RoreiVal::set> set{};
        }
        }
        ///Receive Data Request Interrupt Flag. 
        enum class RdreqiVal {
            notSet=0x00000000,     ///<Fewer than RFTH FIFO entries are filled with data.
            set=0x00000001,     ///<At least RFTH FIFO entries are filled with data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RdreqiVal> rdreqi{}; 
        namespace RdreqiValC{
            constexpr Register::FieldValue<decltype(rdreqi)::Type,RdreqiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rdreqi)::Type,RdreqiVal::set> set{};
        }
        }
        ///Receive Error Interrupt Enable. 
        enum class RerienVal {
            disabled=0x00000000,     ///<Disable the receive error interrupt.
            enabled=0x00000001,     ///<Enable the receive error interrupt. A receive interrupt is asserted when ROREI, RFRMERI, or RPARERI is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RerienVal> rerien{}; 
        namespace RerienValC{
            constexpr Register::FieldValue<decltype(rerien)::Type,RerienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rerien)::Type,RerienVal::enabled> enabled{};
        }
        }
        ///Receive Data Request Interrupt Enable. 
        enum class RdreqienVal {
            disabled=0x00000000,     ///<Disable the read data request interrupt.
            enabled=0x00000001,     ///<Enable the read data request interrupt. A receive interrupt is generated when RDREQI is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RdreqienVal> rdreqien{}; 
        namespace RdreqienValC{
            constexpr Register::FieldValue<decltype(rdreqien)::Type,RdreqienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rdreqien)::Type,RdreqienVal::enabled> enabled{};
        }
        }
        ///Match Mode. 
        enum class MatmdVal {
            off=0x00000000,     ///<Disable the match function.
            mce=0x00000001,     ///<(MCE) Data whose last data bit equals RBIT is accepted and stored. 
            frame=0x00000002,     ///<(Frame) A framing error is asserted if the last received data bit matches RBIT.
            store=0x00000003,     ///<(Store) Store the last incoming data bit in RBIT. This mode can be used inconjunction with the RDATLN setting.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,MatmdVal> matmd{}; 
        namespace MatmdValC{
            constexpr Register::FieldValue<decltype(matmd)::Type,MatmdVal::off> off{};
            constexpr Register::FieldValue<decltype(matmd)::Type,MatmdVal::mce> mce{};
            constexpr Register::FieldValue<decltype(matmd)::Type,MatmdVal::frame> frame{};
            constexpr Register::FieldValue<decltype(matmd)::Type,MatmdVal::store> store{};
        }
        }
        ///Receiver Auto-Baud Enable. 
        enum class RabdenVal {
            disabled=0x00000000,     ///<Disable receiver auto-baud.
            enabled=0x00000001,     ///<Enable receiver auto-baud.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RabdenVal> rabden{}; 
        namespace RabdenValC{
            constexpr Register::FieldValue<decltype(rabden)::Type,RabdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rabden)::Type,RabdenVal::enabled> enabled{};
        }
        }
        ///Receiver Busy Flag. 
        enum class RbusyfVal {
            notSet=0x00000000,     ///<The USART receiver is idle.
            set=0x00000001,     ///<The USART receiver is receiving data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,RbusyfVal> rbusyf{}; 
        namespace RbusyfValC{
            constexpr Register::FieldValue<decltype(rbusyf)::Type,RbusyfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rbusyf)::Type,RbusyfVal::set> set{};
        }
        }
        ///Last Receive Bit. 
        enum class RbitVal {
            notSet=0x00000000,     ///<None
            set=0x00000001,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,RbitVal> rbit{}; 
        namespace RbitValC{
            constexpr Register::FieldValue<decltype(rbit)::Type,RbitVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rbit)::Type,RbitVal::set> set{};
        }
        }
        ///Receiver One-Shot Enable. 
        enum class RosenVal {
            disabled=0x00000000,     ///<Disable one-shot receive mode.
            enabled=0x00000001,     ///<Enable one-shot receive mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,RosenVal> rosen{}; 
        namespace RosenValC{
            constexpr Register::FieldValue<decltype(rosen)::Type,RosenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rosen)::Type,RosenVal::enabled> enabled{};
        }
        }
        ///Receiver Inhibit. 
        enum class RinhVal {
            inactive=0x00000000,     ///<The receiver operates normally.
            active=0x00000001,     ///<RTS is immediately asserted when RINH is set. The receiver will complete any ongoing reception, but ignore all traffic after that.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,RinhVal> rinh{}; 
        namespace RinhValC{
            constexpr Register::FieldValue<decltype(rinh)::Type,RinhVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(rinh)::Type,RinhVal::active> active{};
        }
        }
        ///Receiver Enable. 
        enum class RenVal {
            disabled=0x00000000,     ///<Disable the receiver. The receiver can receive one data transaction only if ROSEN is set.
            enabled=0x00000001,     ///<Enable the receiver.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,RenVal> ren{}; 
        namespace RenValC{
            constexpr Register::FieldValue<decltype(ren)::Type,RenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ren)::Type,RenVal::enabled> enabled{};
        }
        }
        ///Smartcard Parity Error Interrupt Flag. 
        enum class TsceriVal {
            notSet=0x00000000,     ///<Read: A Smartcard parity error has not occurred since TSCERI was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A Smartcard parity error occurred. Write: Force a Smartcard parity error interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TsceriVal> tsceri{}; 
        namespace TsceriValC{
            constexpr Register::FieldValue<decltype(tsceri)::Type,TsceriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(tsceri)::Type,TsceriVal::set> set{};
        }
        }
        ///Transmit Underrun Error Interrupt Flag. 
        enum class TureiVal {
            notSet=0x00000000,     ///<Read: A transmitter underrun has not occurred since TUREI was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A transmitter underrun occurred. Write: Force a transmitter underrun interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,TureiVal> turei{}; 
        namespace TureiValC{
            constexpr Register::FieldValue<decltype(turei)::Type,TureiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(turei)::Type,TureiVal::set> set{};
        }
        }
        ///Transmit Data Request Interrupt Flag. 
        enum class TdreqiVal {
            notSet=0x00000000,     ///<The transmitter is not requesting more FIFO data.
            set=0x00000001,     ///<The transmitter is requesting more FIFO data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,TdreqiVal> tdreqi{}; 
        namespace TdreqiValC{
            constexpr Register::FieldValue<decltype(tdreqi)::Type,TdreqiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(tdreqi)::Type,TdreqiVal::set> set{};
        }
        }
        ///Transmit Complete Interrupt Flag. 
        enum class TcptiVal {
            notSet=0x00000000,     ///<Read: A transmit has not completed since TCPTI was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A byte was transmitted (TCCPTH = 0) or the last available byte was transmitted (TCPTTH = 1). Write: Force a transmit complete interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,TcptiVal> tcpti{}; 
        namespace TcptiValC{
            constexpr Register::FieldValue<decltype(tcpti)::Type,TcptiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(tcpti)::Type,TcptiVal::set> set{};
        }
        }
        ///Transmit Complete Threshold. 
        enum class TcptthVal {
            setOnTx=0x00000000,     ///<The TCPTI flag is set after each data transmission.
            setOnEmpty=0x00000001,     ///<The TCPTI flag is set after transmission of the last available data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,TcptthVal> tcptth{}; 
        namespace TcptthValC{
            constexpr Register::FieldValue<decltype(tcptth)::Type,TcptthVal::setOnTx> setOnTx{};
            constexpr Register::FieldValue<decltype(tcptth)::Type,TcptthVal::setOnEmpty> setOnEmpty{};
        }
        }
        ///Transmit Error Interrupt Enable. 
        enum class TerienVal {
            disabled=0x00000000,     ///<Disable the transmit error interrupt.
            enabled=0x00000001,     ///<Enable the transmit error interrupt. A transmit interrupt is generated when TUREI or TSCERI is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,TerienVal> terien{}; 
        namespace TerienValC{
            constexpr Register::FieldValue<decltype(terien)::Type,TerienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(terien)::Type,TerienVal::enabled> enabled{};
        }
        }
        ///Transmit Data Request Interrupt Enable. 
        enum class TdreqienVal {
            disabled=0x00000000,     ///<Disable the transmit data request interrupt.
            enabled=0x00000001,     ///<Enable the transmit data request interrupt. A transmit interrupt is asserted when TDREQI is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,TdreqienVal> tdreqien{}; 
        namespace TdreqienValC{
            constexpr Register::FieldValue<decltype(tdreqien)::Type,TdreqienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tdreqien)::Type,TdreqienVal::enabled> enabled{};
        }
        }
        ///Transmit Complete Interrupt Enable. 
        enum class TcptienVal {
            disabled=0x00000000,     ///<Disable the transmit complete interrupt.
            enabled=0x00000001,     ///<Enable the transmit complete interrupt. A transmit interrupt is generated when TCPTI is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TcptienVal> tcptien{}; 
        namespace TcptienValC{
            constexpr Register::FieldValue<decltype(tcptien)::Type,TcptienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tcptien)::Type,TcptienVal::enabled> enabled{};
        }
        }
        ///Transmitter Busy Flag. 
        enum class TbusyfVal {
            notSet=0x00000000,     ///<The USART transmitter is idle.
            set=0x00000001,     ///<The USART transmitter is active and transmitting.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,TbusyfVal> tbusyf{}; 
        namespace TbusyfValC{
            constexpr Register::FieldValue<decltype(tbusyf)::Type,TbusyfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(tbusyf)::Type,TbusyfVal::set> set{};
        }
        }
        ///Last Transmit Bit. 
        enum class TbitVal {
            notSet=0x00000000,     ///<None
            set=0x00000001,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,TbitVal> tbit{}; 
        namespace TbitValC{
            constexpr Register::FieldValue<decltype(tbit)::Type,TbitVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(tbit)::Type,TbitVal::set> set{};
        }
        }
        ///Transmit Inhibit. 
        enum class TinhVal {
            inactive=0x00000000,     ///<The transmitter operates normally.
            active=0x00000001,     ///<Transmissions are inhibited. The transmitter will stall after any current transmission is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,TinhVal> tinh{}; 
        namespace TinhValC{
            constexpr Register::FieldValue<decltype(tinh)::Type,TinhVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(tinh)::Type,TinhVal::active> active{};
        }
        }
        ///Transmitter Enable. 
        enum class TenVal {
            disabled=0x00000000,     ///<Disable the transmitter. When cleared, the transmitter immediately aborts any active transmission. Clearing this bit does not automatically flush the transmit FIFO.
            enabled=0x00000001,     ///<Enable the transmitter. The transmitter will initiate a transmission when data becomes available in the transmit FIFO. 
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,TenVal> ten{}; 
        namespace TenValC{
            constexpr Register::FieldValue<decltype(ten)::Type,TenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ten)::Type,TenVal::enabled> enabled{};
        }
        }
    }
    namespace Noneipdelay{    ///<Inter-Packet Delay
        using Addr = Register::Address<0x40000040,0xff00ffff,0,unsigned>;
        ///Inter-Packet Delay. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ipdelay{}; 
    }
    namespace Nonebaudrate{    ///<Transmit and Receive Baud Rate
        using Addr = Register::Address<0x40000050,0x00000000,0,unsigned>;
        ///Receiver Baud Rate Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rbaud{}; 
        ///Transmitter Baud Rate Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tbaud{}; 
    }
    namespace Nonefifocn{    ///<FIFO Control
        using Addr = Register::Address<0x40000060,0xf848f848,0,unsigned>;
        ///Receive FIFO Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rcnt{}; 
        ///Receive FIFO Threshold. 
        enum class RfthVal {
            one=0x00000000,     ///<A DMA request or read data request interrupt (RDREQI) is asserted when >= 1 FIFO entry is full.
            two=0x00000001,     ///<A DMA request or read data request interrupt (RDREQI) is asserted when >= 2 FIFO entries are full.
            three=0x00000002,     ///<A DMA request or read data request interrupt (RDREQI) is asserted when >= 3 FIFO entries are full.
            four=0x00000003,     ///<A DMA request or read data request interrupt (RDREQI) is asserted when >= 4 FIFO entries are full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,RfthVal> rfth{}; 
        namespace RfthValC{
            constexpr Register::FieldValue<decltype(rfth)::Type,RfthVal::one> one{};
            constexpr Register::FieldValue<decltype(rfth)::Type,RfthVal::two> two{};
            constexpr Register::FieldValue<decltype(rfth)::Type,RfthVal::three> three{};
            constexpr Register::FieldValue<decltype(rfth)::Type,RfthVal::four> four{};
        }
        }
        ///Receiver DMA Enable. 
        enum class RdmaenVal {
            disabled=0x00000000,     ///<Disable receive FIFO DMA requests.
            enabled=0x00000001,     ///<Enable receive FIFO DMA requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RdmaenVal> rdmaen{}; 
        namespace RdmaenValC{
            constexpr Register::FieldValue<decltype(rdmaen)::Type,RdmaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rdmaen)::Type,RdmaenVal::enabled> enabled{};
        }
        }
        ///Receive FIFO Flush. 
        enum class RfifoflVal {
            set=0x00000001,     ///<Flush the contents of the receive FIFO and any data in the receive shift register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,RfifoflVal> rfifofl{}; 
        namespace RfifoflValC{
            constexpr Register::FieldValue<decltype(rfifofl)::Type,RfifoflVal::set> set{};
        }
        }
        ///Receive FIFO Error Interrupt Flag. 
        enum class RferiVal {
            notSet=0x00000000,     ///<A receive FIFO error has not occurred since RFERI was last cleared.
            set=0x00000001,     ///<A receive FIFO error occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,RferiVal> rferi{}; 
        namespace RferiValC{
            constexpr Register::FieldValue<decltype(rferi)::Type,RferiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rferi)::Type,RferiVal::set> set{};
        }
        }
        ///Receive Shift Register Full Flag. 
        enum class RsrfullfVal {
            notSet=0x00000000,     ///<The receive data shift register is not full.
            set=0x00000001,     ///<The receive data shift register is full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RsrfullfVal> rsrfullf{}; 
        namespace RsrfullfValC{
            constexpr Register::FieldValue<decltype(rsrfullf)::Type,RsrfullfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rsrfullf)::Type,RsrfullfVal::set> set{};
        }
        }
        ///Transmit FIFO Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> tcnt{}; 
        ///Transmit FIFO Threshold. 
        enum class TfthVal {
            one=0x00000000,     ///<A DMA request or transmit data request interrupt (TDREQI) is asserted when >= 1 FIFO entry is empty.
            two=0x00000001,     ///<A DMA request or transmit data request interrupt (TDREQI) is asserted when >= 2 FIFO entries are empty.
            three=0x00000002,     ///<A DMA request or transmit data request interrupt (TDREQI) is asserted when >= 3 FIFO entries are empty.
            four=0x00000003,     ///<A DMA request or transmit data request interrupt (TDREQI) is asserted when >= 4 FIFO entries are empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TfthVal> tfth{}; 
        namespace TfthValC{
            constexpr Register::FieldValue<decltype(tfth)::Type,TfthVal::one> one{};
            constexpr Register::FieldValue<decltype(tfth)::Type,TfthVal::two> two{};
            constexpr Register::FieldValue<decltype(tfth)::Type,TfthVal::three> three{};
            constexpr Register::FieldValue<decltype(tfth)::Type,TfthVal::four> four{};
        }
        }
        ///Transmitter DMA Enable. 
        enum class TdmaenVal {
            disabled=0x00000000,     ///<Disable transmit FIFO DMA requests.
            enabled=0x00000001,     ///<Enable transmit FIFO DMA requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TdmaenVal> tdmaen{}; 
        namespace TdmaenValC{
            constexpr Register::FieldValue<decltype(tdmaen)::Type,TdmaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tdmaen)::Type,TdmaenVal::enabled> enabled{};
        }
        }
        ///Transmit FIFO Flush. 
        enum class TfifoflVal {
            set=0x00000001,     ///<Flush the contents of the transmit FIFO. If data is pending in the transmit shift register but a transmit has not begun, the shift register is also flushed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,TfifoflVal> tfifofl{}; 
        namespace TfifoflValC{
            constexpr Register::FieldValue<decltype(tfifofl)::Type,TfifoflVal::set> set{};
        }
        }
        ///Transmit FIFO Error Interrupt Flag. 
        enum class TferiVal {
            notSet=0x00000000,     ///<A transmit FIFO error has not occurred since TFERI was last cleared.
            set=0x00000001,     ///<A transmit FIFO error occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,TferiVal> tferi{}; 
        namespace TferiValC{
            constexpr Register::FieldValue<decltype(tferi)::Type,TferiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(tferi)::Type,TferiVal::set> set{};
        }
        }
        ///Transmit Shift Register Full Flag. 
        enum class TsrfullfVal {
            notSet=0x00000000,     ///<The transmit shift register is not full.
            set=0x00000001,     ///<The transmit shift register is full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,TsrfullfVal> tsrfullf{}; 
        namespace TsrfullfValC{
            constexpr Register::FieldValue<decltype(tsrfullf)::Type,TsrfullfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(tsrfullf)::Type,TsrfullfVal::set> set{};
        }
        }
    }
    namespace Nonedata{    ///<FIFO Input/Output Data
        using Addr = Register::Address<0x40000070,0x00000000,0,unsigned>;
        ///FIFO Data. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
}
