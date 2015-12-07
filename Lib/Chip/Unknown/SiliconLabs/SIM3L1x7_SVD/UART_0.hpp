#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Noneconfig{    ///<Module Configuration
        using Addr = Register::Address<0x40001000,0x88808880,0,unsigned>;
        ///Receiver Start Enable. 
        enum class RstrtenVal {
            disabled=0x00000000,     ///<Do not expect a start bit during receptions.
            enabled=0x00000001,     ///<Expect a start bit during receptions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RstrtenVal> rstrten{}; 
        namespace RstrtenValC{
            constexpr Register::FieldValue<decltype(rstrten),RstrtenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rstrten),RstrtenVal::enabled> enabled{};
        }
        ///Receiver Parity Enable. 
        enum class RparenVal {
            disabled=0x00000000,     ///<Do not expect a parity bit during receptions.
            enabled=0x00000001,     ///<Expect a parity bit during receptions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RparenVal> rparen{}; 
        namespace RparenValC{
            constexpr Register::FieldValue<decltype(rparen),RparenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rparen),RparenVal::enabled> enabled{};
        }
        ///Receiver Stop Enable. 
        enum class RstpenVal {
            disabled=0x00000000,     ///<Do not expect stop bits during receptions.
            enabled=0x00000001,     ///<Expect stop bits during receptions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RstpenVal> rstpen{}; 
        namespace RstpenValC{
            constexpr Register::FieldValue<decltype(rstpen),RstpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rstpen),RstpenVal::enabled> enabled{};
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
            constexpr Register::FieldValue<decltype(rstpmd),RstpmdVal::v0p5Stop> v0p5Stop{};
            constexpr Register::FieldValue<decltype(rstpmd),RstpmdVal::v1Stop> v1Stop{};
            constexpr Register::FieldValue<decltype(rstpmd),RstpmdVal::v1p5Stop> v1p5Stop{};
            constexpr Register::FieldValue<decltype(rstpmd),RstpmdVal::v2Stop> v2Stop{};
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
            constexpr Register::FieldValue<decltype(rparmd),RparmdVal::odd> odd{};
            constexpr Register::FieldValue<decltype(rparmd),RparmdVal::even> even{};
            constexpr Register::FieldValue<decltype(rparmd),RparmdVal::mark> mark{};
            constexpr Register::FieldValue<decltype(rparmd),RparmdVal::space> space{};
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
            constexpr Register::FieldValue<decltype(rdatln),RdatlnVal::v5Bits> v5Bits{};
            constexpr Register::FieldValue<decltype(rdatln),RdatlnVal::v6Bits> v6Bits{};
            constexpr Register::FieldValue<decltype(rdatln),RdatlnVal::v7Bits> v7Bits{};
            constexpr Register::FieldValue<decltype(rdatln),RdatlnVal::v8Bits> v8Bits{};
            constexpr Register::FieldValue<decltype(rdatln),RdatlnVal::v9BitsStored> v9BitsStored{};
            constexpr Register::FieldValue<decltype(rdatln),RdatlnVal::v9BitsMatch> v9BitsMatch{};
        }
        ///Receiver Smartcard Parity Response Enable. 
        enum class RscenVal {
            disabled=0x00000000,     ///<The receiver does not send a Smartcard parity error response.
            enabled=0x00000001,     ///<The receiver sends a Smartcard parity response.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,RscenVal> rscen{}; 
        namespace RscenValC{
            constexpr Register::FieldValue<decltype(rscen),RscenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rscen),RscenVal::enabled> enabled{};
        }
        ///Receiver IrDA Enable. 
        enum class RirdaenVal {
            disabled=0x00000000,     ///<The receiver does not operate in IrDA mode.
            enabled=0x00000001,     ///<The receiver operates in IrDA mode. 
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,RirdaenVal> rirdaen{}; 
        namespace RirdaenValC{
            constexpr Register::FieldValue<decltype(rirdaen),RirdaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rirdaen),RirdaenVal::enabled> enabled{};
        }
        ///Receiver Invert Enable. 
        enum class RinvenVal {
            disabled=0x00000000,     ///<Do not invert the RX pin signals (the RX idle state is high).
            enabled=0x00000001,     ///<Invert the RX pin signals (the RX idle state is low).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,RinvenVal> rinven{}; 
        namespace RinvenValC{
            constexpr Register::FieldValue<decltype(rinven),RinvenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rinven),RinvenVal::enabled> enabled{};
        }
        ///Transmitter Start Enable. 
        enum class TstrtenVal {
            disabled=0x00000000,     ///<Do not generate a start bit during transmissions.
            enabled=0x00000001,     ///<Generate a start bit during transmissions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TstrtenVal> tstrten{}; 
        namespace TstrtenValC{
            constexpr Register::FieldValue<decltype(tstrten),TstrtenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tstrten),TstrtenVal::enabled> enabled{};
        }
        ///Transmitter Parity Enable. 
        enum class TparenVal {
            disabled=0x00000000,     ///<Do not send a parity bit during transmissions.
            enabled=0x00000001,     ///<Send a parity bit during transmissions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,TparenVal> tparen{}; 
        namespace TparenValC{
            constexpr Register::FieldValue<decltype(tparen),TparenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tparen),TparenVal::enabled> enabled{};
        }
        ///Transmitter Stop Enable. 
        enum class TstpenVal {
            disabled=0x00000000,     ///<Do not send stop bits during transmissions.
            enabled=0x00000001,     ///<Send stop bits during transmissions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,TstpenVal> tstpen{}; 
        namespace TstpenValC{
            constexpr Register::FieldValue<decltype(tstpen),TstpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tstpen),TstpenVal::enabled> enabled{};
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
            constexpr Register::FieldValue<decltype(tstpmd),TstpmdVal::v0p5Stop> v0p5Stop{};
            constexpr Register::FieldValue<decltype(tstpmd),TstpmdVal::v1Stop> v1Stop{};
            constexpr Register::FieldValue<decltype(tstpmd),TstpmdVal::v1p5Stop> v1p5Stop{};
            constexpr Register::FieldValue<decltype(tstpmd),TstpmdVal::v2Stop> v2Stop{};
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
            constexpr Register::FieldValue<decltype(tparmd),TparmdVal::odd> odd{};
            constexpr Register::FieldValue<decltype(tparmd),TparmdVal::even> even{};
            constexpr Register::FieldValue<decltype(tparmd),TparmdVal::mark> mark{};
            constexpr Register::FieldValue<decltype(tparmd),TparmdVal::space> space{};
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
            constexpr Register::FieldValue<decltype(tdatln),TdatlnVal::v5Bits> v5Bits{};
            constexpr Register::FieldValue<decltype(tdatln),TdatlnVal::v6Bits> v6Bits{};
            constexpr Register::FieldValue<decltype(tdatln),TdatlnVal::v7Bits> v7Bits{};
            constexpr Register::FieldValue<decltype(tdatln),TdatlnVal::v8Bits> v8Bits{};
            constexpr Register::FieldValue<decltype(tdatln),TdatlnVal::v9BitsFifo> v9BitsFifo{};
            constexpr Register::FieldValue<decltype(tdatln),TdatlnVal::v9BitsTbit> v9BitsTbit{};
        }
        ///Transmitter Smartcard Parity Response Enable. 
        enum class TscenVal {
            disabled=0x00000000,     ///<The transmitter does not check for a Smartcard parity error response.
            enabled=0x00000001,     ///<The transmitter checks for a Smartcard parity error response.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,TscenVal> tscen{}; 
        namespace TscenValC{
            constexpr Register::FieldValue<decltype(tscen),TscenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tscen),TscenVal::enabled> enabled{};
        }
        ///Transmitter IrDA Enable. 
        enum class TirdaenVal {
            disabled=0x00000000,     ///<Disable IrDA transmit mode.
            enabled=0x00000001,     ///<Enable IrDA transmit mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,TirdaenVal> tirdaen{}; 
        namespace TirdaenValC{
            constexpr Register::FieldValue<decltype(tirdaen),TirdaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tirdaen),TirdaenVal::enabled> enabled{};
        }
        ///Transmitter Invert Enable. 
        enum class TinvenVal {
            disabled=0x00000000,     ///<Do not invert the TX pin signals (the TX idle state is high).
            enabled=0x00000001,     ///<Invert the TX pin signals (the TX idle state is low).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,TinvenVal> tinven{}; 
        namespace TinvenValC{
            constexpr Register::FieldValue<decltype(tinven),TinvenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tinven),TinvenVal::enabled> enabled{};
        }
    }
    namespace Nonemode{    ///<Module Mode Select
        using Addr = Register::Address<0x40001010,0xb7f2c0ff,0,unsigned>;
        ///RTC Clock Mode. 
        enum class RtcckmdVal {
            apbclk=0x00000000,     ///<UART clocked from the APB clock. The RBAUD and TBAUD controls will use the APB clock mode to determine the baudrate unless RTCBDMD = 1.
            rtc0tclk=0x00000001,     ///<UART clocked from RTC0TCLK. The RBAUD and TBAUD controls will use the RTC0TCLK mode to determine the baudrate. Software should only set this bit to one when the UART is idle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,RtcckmdVal> rtcckmd{}; 
        namespace RtcckmdValC{
            constexpr Register::FieldValue<decltype(rtcckmd),RtcckmdVal::apbclk> apbclk{};
            constexpr Register::FieldValue<decltype(rtcckmd),RtcckmdVal::rtc0tclk> rtc0tclk{};
        }
        ///RTC Baud Rate Mode. 
        enum class RtcbdmdVal {
            disabled=0x00000000,     ///<The RBAUD and TBAUD controls use the RTCCKMD setting to determine whether to use APB clock mode (RTCCKMD = 0) or the RTC0TCLK mode (RTCCKMD = 1).  Use this setting when APB clock != RTC0TCLK.
            enabled=0x00000001,     ///<The RBAUD and TBAUD controls use RTC0TCLK mode. Use this setting when APB clock = RTC0TCLK and RTCCKMD = 0 to force the RBAUD and TBAUD controls into RTC0TCLK mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,RtcbdmdVal> rtcbdmd{}; 
        namespace RtcbdmdValC{
            constexpr Register::FieldValue<decltype(rtcbdmd),RtcbdmdVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtcbdmd),RtcbdmdVal::enabled> enabled{};
        }
        ///Force Clock On. 
        enum class ForceclkVal {
            disabled=0x00000000,     ///<UART clock is only on when necessary.
            enabled=0x00000001,     ///<Force the UART clock to always be on.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ForceclkVal> forceclk{}; 
        namespace ForceclkValC{
            constexpr Register::FieldValue<decltype(forceclk),ForceclkVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(forceclk),ForceclkVal::enabled> enabled{};
        }
        ///Clock Switch Busy Status. 
        enum class ClkbusyVal {
            idle=0x00000000,     ///<Clock switch completed.
            busy=0x00000001,     ///<Clock switch in progress.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ClkbusyVal> clkbusy{}; 
        namespace ClkbusyValC{
            constexpr Register::FieldValue<decltype(clkbusy),ClkbusyVal::idle> idle{};
            constexpr Register::FieldValue<decltype(clkbusy),ClkbusyVal::busy> busy{};
        }
        ///Receive Automatic Clock Switch. 
        enum class RxclkswVal {
            disabled=0x00000000,     ///<UART will always use the selected clock for receive operations.
            enabled=0x00000001,     ///<UART will automatically switch from RTC0TCLK to the APB clock when a receive interrupt is pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,RxclkswVal> rxclksw{}; 
        namespace RxclkswValC{
            constexpr Register::FieldValue<decltype(rxclksw),RxclkswVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxclksw),RxclkswVal::enabled> enabled{};
        }
        ///Transmit Automatic Clock Switch. 
        enum class TxclkswVal {
            disabled=0x00000000,     ///<UART will always use the selected clock for transmit operations.
            enabled=0x00000001,     ///<UART will automatically switch from RTC0TCLK to the APB clock when a transmit interrupt is pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,TxclkswVal> txclksw{}; 
        namespace TxclkswValC{
            constexpr Register::FieldValue<decltype(txclksw),TxclkswVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txclksw),TxclkswVal::enabled> enabled{};
        }
        ///UART Debug Mode. 
        enum class DbgmdVal {
            run=0x00000000,     ///<The UART module will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will cause the UART module to halt. Any active transmissions and receptions will complete first.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,DbgmdVal> dbgmd{}; 
        namespace DbgmdValC{
            constexpr Register::FieldValue<decltype(dbgmd),DbgmdVal::run> run{};
            constexpr Register::FieldValue<decltype(dbgmd),DbgmdVal::halt> halt{};
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
            constexpr Register::FieldValue<decltype(lbmd),LbmdVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lbmd),LbmdVal::rxonly> rxonly{};
            constexpr Register::FieldValue<decltype(lbmd),LbmdVal::txonly> txonly{};
            constexpr Register::FieldValue<decltype(lbmd),LbmdVal::both> both{};
        }
        ///Duplex Mode. 
        enum class DuplexmdVal {
            fullDuplex=0x00000000,     ///<Full-duplex mode. The transmitter and receiver can operate simultaneously.
            halfDuplex=0x00000001,     ///<Half-duplex mode. The transmitter automatically inhibits when the receiver is active and the receiver automatically inhibits when the transmitter is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,DuplexmdVal> duplexmd{}; 
        namespace DuplexmdValC{
            constexpr Register::FieldValue<decltype(duplexmd),DuplexmdVal::fullDuplex> fullDuplex{};
            constexpr Register::FieldValue<decltype(duplexmd),DuplexmdVal::halfDuplex> halfDuplex{};
        }
        ///Idle TX Tristate Enable. 
        enum class ItsenVal {
            disabled=0x00000000,     ///<The TX pin is always an output in this mode, even when idle.
            enabled=0x00000001,     ///<The TX pin is tristated when idle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ItsenVal> itsen{}; 
        namespace ItsenValC{
            constexpr Register::FieldValue<decltype(itsen),ItsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(itsen),ItsenVal::enabled> enabled{};
        }
    }
    namespace Noneflowcn{    ///<Flow Control
        using Addr = Register::Address<0x40001020,0xcffdeffd,0,unsigned>;
        ///RX Pin Status. 
        enum class RxVal {
            low=0x00000000,     ///<RX pin (after optional inversion) is low.
            high=0x00000001,     ///<RX pin (after optional inversion) is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RxVal> rx{}; 
        namespace RxValC{
            constexpr Register::FieldValue<decltype(rx),RxVal::low> low{};
            constexpr Register::FieldValue<decltype(rx),RxVal::high> high{};
        }
        ///TX Output Enable. 
        enum class TxoenVal {
            disabled=0x00000000,     ///<The pin assigned to TX is controlled by the direct port output value.
            enabled=0x00000001,     ///<The pin assigned to TX is controlled by the UART.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,TxoenVal> txoen{}; 
        namespace TxoenValC{
            constexpr Register::FieldValue<decltype(txoen),TxoenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txoen),TxoenVal::enabled> enabled{};
        }
        ///TX State. 
        enum class TxVal {
            low=0x00000000,     ///<The TX pin (before optional inversion) is low.
            high=0x00000001,     ///<The TX pin (before optional inversion) is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,TxVal> tx{}; 
        namespace TxValC{
            constexpr Register::FieldValue<decltype(tx),TxVal::low> low{};
            constexpr Register::FieldValue<decltype(tx),TxVal::high> high{};
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
            constexpr Register::FieldValue<decltype(tirdapw),TirdapwVal::v116th> v116th{};
            constexpr Register::FieldValue<decltype(tirdapw),TirdapwVal::v18th> v18th{};
            constexpr Register::FieldValue<decltype(tirdapw),TirdapwVal::v316th> v316th{};
            constexpr Register::FieldValue<decltype(tirdapw),TirdapwVal::v14th> v14th{};
        }
    }
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40001030,0x27020090,0,unsigned>;
        ///Receive Frame Error Interrupt Flag. 
        enum class RfrmeriVal {
            notSet=0x00000000,     ///<Read: A frame error has not occurred since RFRMERI was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A frame error occurred. Write: Force a frame error interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RfrmeriVal> rfrmeri{}; 
        namespace RfrmeriValC{
            constexpr Register::FieldValue<decltype(rfrmeri),RfrmeriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rfrmeri),RfrmeriVal::set> set{};
        }
        ///Receive Parity Error Interrupt Flag. 
        enum class RpareriVal {
            notSet=0x00000000,     ///<Read: An invalid parity bit has not been received since RPARERI was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: An invalid parity bit has been received since RPARERI was last cleared. Write: Force a parity error interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RpareriVal> rpareri{}; 
        namespace RpareriValC{
            constexpr Register::FieldValue<decltype(rpareri),RpareriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rpareri),RpareriVal::set> set{};
        }
        ///Receive Overrun Error Interrupt Flag. 
        enum class RoreiVal {
            notSet=0x00000000,     ///<Read: A receiver overrun has not occurred since ROREI was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A receiver overrun occurred. Write: Force a receiver overrun interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RoreiVal> rorei{}; 
        namespace RoreiValC{
            constexpr Register::FieldValue<decltype(rorei),RoreiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rorei),RoreiVal::set> set{};
        }
        ///Receive Data Request Interrupt Flag. 
        enum class RdreqiVal {
            notSet=0x00000000,     ///<Fewer than RFTH FIFO entries are filled with data.
            set=0x00000001,     ///<At least RFTH FIFO entries are filled with data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RdreqiVal> rdreqi{}; 
        namespace RdreqiValC{
            constexpr Register::FieldValue<decltype(rdreqi),RdreqiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rdreqi),RdreqiVal::set> set{};
        }
        ///Receive Error Interrupt Enable. 
        enum class RerienVal {
            disabled=0x00000000,     ///<Disable the receive error interrupt.
            enabled=0x00000001,     ///<Enable the receive error interrupt. A receive interrupt is asserted when ROREI, RFRMERI, or RPARERI is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RerienVal> rerien{}; 
        namespace RerienValC{
            constexpr Register::FieldValue<decltype(rerien),RerienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rerien),RerienVal::enabled> enabled{};
        }
        ///Receive Data Request Interrupt Enable. 
        enum class RdreqienVal {
            disabled=0x00000000,     ///<Disable the read data request interrupt.
            enabled=0x00000001,     ///<Enable the read data request interrupt. A receive interrupt is generated when RDREQI is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RdreqienVal> rdreqien{}; 
        namespace RdreqienValC{
            constexpr Register::FieldValue<decltype(rdreqien),RdreqienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rdreqien),RdreqienVal::enabled> enabled{};
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
            constexpr Register::FieldValue<decltype(matmd),MatmdVal::off> off{};
            constexpr Register::FieldValue<decltype(matmd),MatmdVal::mce> mce{};
            constexpr Register::FieldValue<decltype(matmd),MatmdVal::frame> frame{};
            constexpr Register::FieldValue<decltype(matmd),MatmdVal::store> store{};
        }
        ///Receiver Auto-Baud Enable. 
        enum class RabdenVal {
            disabled=0x00000000,     ///<Disable receiver auto-baud.
            enabled=0x00000001,     ///<Enable receiver auto-baud.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RabdenVal> rabden{}; 
        namespace RabdenValC{
            constexpr Register::FieldValue<decltype(rabden),RabdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rabden),RabdenVal::enabled> enabled{};
        }
        ///Receiver Busy Flag. 
        enum class RbusyfVal {
            notSet=0x00000000,     ///<The UART receiver is idle.
            set=0x00000001,     ///<The UART receiver is receiving data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,RbusyfVal> rbusyf{}; 
        namespace RbusyfValC{
            constexpr Register::FieldValue<decltype(rbusyf),RbusyfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rbusyf),RbusyfVal::set> set{};
        }
        ///Last Receive Bit. 
        enum class RbitVal {
            notSet=0x00000000,     ///<None
            set=0x00000001,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,RbitVal> rbit{}; 
        namespace RbitValC{
            constexpr Register::FieldValue<decltype(rbit),RbitVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rbit),RbitVal::set> set{};
        }
        ///Receiver One-Shot Enable. 
        enum class RosenVal {
            disabled=0x00000000,     ///<Disable one-shot receive mode.
            enabled=0x00000001,     ///<Enable one-shot receive mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,RosenVal> rosen{}; 
        namespace RosenValC{
            constexpr Register::FieldValue<decltype(rosen),RosenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rosen),RosenVal::enabled> enabled{};
        }
        ///Receiver Inhibit. 
        enum class RinhVal {
            inactive=0x00000000,     ///<The receiver operates normally.
            active=0x00000001,     ///<The receiver will complete any ongoing reception, but ignore all traffic after that.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,RinhVal> rinh{}; 
        namespace RinhValC{
            constexpr Register::FieldValue<decltype(rinh),RinhVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(rinh),RinhVal::active> active{};
        }
        ///Receiver Enable. 
        enum class RenVal {
            disabled=0x00000000,     ///<Disable the receiver. The receiver can receive one data transaction only if ROSEN is set.
            enabled=0x00000001,     ///<Enable the receiver.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,RenVal> ren{}; 
        namespace RenValC{
            constexpr Register::FieldValue<decltype(ren),RenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ren),RenVal::enabled> enabled{};
        }
        ///Smartcard Parity Error Interrupt Flag. 
        enum class TsceriVal {
            notSet=0x00000000,     ///<Read: A Smartcard parity error has not occurred since TSCERI was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A Smartcard parity error occurred. Write: Force a Smartcard parity error interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TsceriVal> tsceri{}; 
        namespace TsceriValC{
            constexpr Register::FieldValue<decltype(tsceri),TsceriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(tsceri),TsceriVal::set> set{};
        }
        ///Transmit Data Request Interrupt Flag. 
        enum class TdreqiVal {
            notSet=0x00000000,     ///<The transmitter is not requesting more FIFO data.
            set=0x00000001,     ///<The transmitter is requesting more FIFO data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,TdreqiVal> tdreqi{}; 
        namespace TdreqiValC{
            constexpr Register::FieldValue<decltype(tdreqi),TdreqiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(tdreqi),TdreqiVal::set> set{};
        }
        ///Transmit Complete Interrupt Flag. 
        enum class TcptiVal {
            notSet=0x00000000,     ///<Read: A transmit has not completed since TCPTI was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A byte was transmitted (TCCPTH = 0) or the last available byte was transmitted (TCPTTH = 1). Write: Force a transmit complete interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,TcptiVal> tcpti{}; 
        namespace TcptiValC{
            constexpr Register::FieldValue<decltype(tcpti),TcptiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(tcpti),TcptiVal::set> set{};
        }
        ///Transmit Complete Threshold. 
        enum class TcptthVal {
            setOnTx=0x00000000,     ///<The TCPTI flag is set after each data transmission.
            setOnEmpty=0x00000001,     ///<The TCPTI flag is set after transmission of the last available data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,TcptthVal> tcptth{}; 
        namespace TcptthValC{
            constexpr Register::FieldValue<decltype(tcptth),TcptthVal::setOnTx> setOnTx{};
            constexpr Register::FieldValue<decltype(tcptth),TcptthVal::setOnEmpty> setOnEmpty{};
        }
        ///Transmit Error Interrupt Enable. 
        enum class TerienVal {
            disabled=0x00000000,     ///<Disable the transmit error interrupt.
            enabled=0x00000001,     ///<Enable the transmit error interrupt. A transmit interrupt is generated when TUREI or TSCERI is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,TerienVal> terien{}; 
        namespace TerienValC{
            constexpr Register::FieldValue<decltype(terien),TerienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(terien),TerienVal::enabled> enabled{};
        }
        ///Transmit Data Request Interrupt Enable. 
        enum class TdreqienVal {
            disabled=0x00000000,     ///<Disable the transmit data request interrupt.
            enabled=0x00000001,     ///<Enable the transmit data request interrupt. A transmit interrupt is asserted when TDREQI is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,TdreqienVal> tdreqien{}; 
        namespace TdreqienValC{
            constexpr Register::FieldValue<decltype(tdreqien),TdreqienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tdreqien),TdreqienVal::enabled> enabled{};
        }
        ///Transmit Complete Interrupt Enable. 
        enum class TcptienVal {
            disabled=0x00000000,     ///<Disable the transmit complete interrupt.
            enabled=0x00000001,     ///<Enable the transmit complete interrupt. A transmit interrupt is generated when TCPTI is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TcptienVal> tcptien{}; 
        namespace TcptienValC{
            constexpr Register::FieldValue<decltype(tcptien),TcptienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tcptien),TcptienVal::enabled> enabled{};
        }
        ///Transmitter Busy Flag. 
        enum class TbusyfVal {
            notSet=0x00000000,     ///<The UART transmitter is idle.
            set=0x00000001,     ///<The UART transmitter is active and transmitting.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,TbusyfVal> tbusyf{}; 
        namespace TbusyfValC{
            constexpr Register::FieldValue<decltype(tbusyf),TbusyfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(tbusyf),TbusyfVal::set> set{};
        }
        ///Last Transmit Bit. 
        enum class TbitVal {
            notSet=0x00000000,     ///<None
            set=0x00000001,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,TbitVal> tbit{}; 
        namespace TbitValC{
            constexpr Register::FieldValue<decltype(tbit),TbitVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(tbit),TbitVal::set> set{};
        }
        ///Transmit Inhibit. 
        enum class TinhVal {
            inactive=0x00000000,     ///<The transmitter operates normally.
            active=0x00000001,     ///<Transmissions are inhibited. The transmitter will stall after any current transmission is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,TinhVal> tinh{}; 
        namespace TinhValC{
            constexpr Register::FieldValue<decltype(tinh),TinhVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(tinh),TinhVal::active> active{};
        }
        ///Transmitter Enable. 
        enum class TenVal {
            disabled=0x00000000,     ///<Disable the transmitter. When cleared, the transmitter immediately aborts any active transmission. Clearing this bit does not automatically flush the transmit FIFO.
            enabled=0x00000001,     ///<Enable the transmitter. The transmitter will initiate a transmission when data becomes available in the transmit FIFO. 
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,TenVal> ten{}; 
        namespace TenValC{
            constexpr Register::FieldValue<decltype(ten),TenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ten),TenVal::enabled> enabled{};
        }
    }
    namespace Noneipdelay{    ///<Inter-Packet Delay
        using Addr = Register::Address<0x40001040,0xff00ffff,0,unsigned>;
        ///Inter-Packet Delay. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ipdelay{}; 
        namespace IpdelayValC{
        }
    }
    namespace Nonebaudrate{    ///<Transmit and Receive Baud Rate
        using Addr = Register::Address<0x40001050,0x00000000,0,unsigned>;
        ///Receiver Baud Rate Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rbaud{}; 
        namespace RbaudValC{
        }
        ///Transmitter Baud Rate Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tbaud{}; 
        namespace TbaudValC{
        }
    }
    namespace Nonefifocn{    ///<FIFO Control
        using Addr = Register::Address<0x40001060,0xf8c8f8c8,0,unsigned>;
        ///Receive FIFO Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rcnt{}; 
        namespace RcntValC{
        }
        ///Receive FIFO Threshold. 
        enum class RfthVal {
            one=0x00000000,     ///<A read data request interrupt (RDREQI) is asserted when >= 1 FIFO entry is full.
            two=0x00000001,     ///<A read data request interrupt (RDREQI) is asserted when >= 2 FIFO entries are full.
            three=0x00000002,     ///<A read data request interrupt (RDREQI) is asserted when >= 3 FIFO entries are full.
            four=0x00000003,     ///<A read data request interrupt (RDREQI) is asserted when >= 4 FIFO entries are full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,RfthVal> rfth{}; 
        namespace RfthValC{
            constexpr Register::FieldValue<decltype(rfth),RfthVal::one> one{};
            constexpr Register::FieldValue<decltype(rfth),RfthVal::two> two{};
            constexpr Register::FieldValue<decltype(rfth),RfthVal::three> three{};
            constexpr Register::FieldValue<decltype(rfth),RfthVal::four> four{};
        }
        ///Receive FIFO Flush. 
        enum class RfifoflVal {
            set=0x00000001,     ///<Flush the contents of the receive FIFO and any data in the receive shift register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,RfifoflVal> rfifofl{}; 
        namespace RfifoflValC{
            constexpr Register::FieldValue<decltype(rfifofl),RfifoflVal::set> set{};
        }
        ///Receive FIFO Error Interrupt Flag. 
        enum class RferiVal {
            notSet=0x00000000,     ///<A receive FIFO error has not occurred since RFERI was last cleared.
            set=0x00000001,     ///<A receive FIFO error occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,RferiVal> rferi{}; 
        namespace RferiValC{
            constexpr Register::FieldValue<decltype(rferi),RferiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rferi),RferiVal::set> set{};
        }
        ///Receive Shift Register Full Flag. 
        enum class RsrfullfVal {
            notSet=0x00000000,     ///<The receive data shift register is not full.
            set=0x00000001,     ///<The receive data shift register is full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RsrfullfVal> rsrfullf{}; 
        namespace RsrfullfValC{
            constexpr Register::FieldValue<decltype(rsrfullf),RsrfullfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rsrfullf),RsrfullfVal::set> set{};
        }
        ///Transmit FIFO Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> tcnt{}; 
        namespace TcntValC{
        }
        ///Transmit FIFO Threshold. 
        enum class TfthVal {
            one=0x00000000,     ///<A transmit data request interrupt (TDREQI) is asserted when >= 1 FIFO entry is empty.
            two=0x00000001,     ///<A transmit data request interrupt (TDREQI) is asserted when >= 2 FIFO entries are empty.
            three=0x00000002,     ///<A transmit data request interrupt (TDREQI) is asserted when >= 3 FIFO entries are empty.
            four=0x00000003,     ///<A transmit data request interrupt (TDREQI) is asserted when >= 4 FIFO entries are empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TfthVal> tfth{}; 
        namespace TfthValC{
            constexpr Register::FieldValue<decltype(tfth),TfthVal::one> one{};
            constexpr Register::FieldValue<decltype(tfth),TfthVal::two> two{};
            constexpr Register::FieldValue<decltype(tfth),TfthVal::three> three{};
            constexpr Register::FieldValue<decltype(tfth),TfthVal::four> four{};
        }
        ///Transmit FIFO Flush. 
        enum class TfifoflVal {
            set=0x00000001,     ///<Flush the contents of the transmit FIFO. If data is pending in the transmit shift register but a transmit has not begun, the shift register is also flushed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,TfifoflVal> tfifofl{}; 
        namespace TfifoflValC{
            constexpr Register::FieldValue<decltype(tfifofl),TfifoflVal::set> set{};
        }
        ///Transmit FIFO Error Interrupt Flag. 
        enum class TferiVal {
            notSet=0x00000000,     ///<A transmit FIFO error has not occurred since TFERI was last cleared.
            set=0x00000001,     ///<A transmit FIFO error occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,TferiVal> tferi{}; 
        namespace TferiValC{
            constexpr Register::FieldValue<decltype(tferi),TferiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(tferi),TferiVal::set> set{};
        }
        ///Transmit Shift Register Full Flag. 
        enum class TsrfullfVal {
            notSet=0x00000000,     ///<The transmit shift register is not full.
            set=0x00000001,     ///<The transmit shift register is full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,TsrfullfVal> tsrfullf{}; 
        namespace TsrfullfValC{
            constexpr Register::FieldValue<decltype(tsrfullf),TsrfullfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(tsrfullf),TsrfullfVal::set> set{};
        }
    }
    namespace Nonedata{    ///<FIFO Input/Output Data
        using Addr = Register::Address<0x40001070,0x00000000,0,unsigned>;
        ///FIFO Data. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Noneclkdiv{    ///<Clock Divider
        using Addr = Register::Address<0x40001080,0xfffffffc,0,unsigned>;
        ///Clock Divider. 
        enum class ClkdivVal {
            div1=0x00000000,     ///<Divide by 1.
            div2=0x00000001,     ///<Divide by 2.
            div4=0x00000002,     ///<Divide by 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv),ClkdivVal::div1> div1{};
            constexpr Register::FieldValue<decltype(clkdiv),ClkdivVal::div2> div2{};
            constexpr Register::FieldValue<decltype(clkdiv),ClkdivVal::div4> div4{};
        }
    }
}
