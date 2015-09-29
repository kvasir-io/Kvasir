#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Noneconfig{    ///<Module Configuration
        using Addr = Register::Address<0x40000000,0x08800880,0,unsigned>;
        ///Receiver Start Enable. 
        enum class rstrtenVal {
            disabled=0x00000000,     ///<Do not expect a start bit during receptions.
            enabled=0x00000001,     ///<Expect a start bit during receptions.
        };
        namespace rstrtenValC{
            constexpr MPL::Value<rstrtenVal,rstrtenVal::disabled> disabled{};
            constexpr MPL::Value<rstrtenVal,rstrtenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rstrtenVal> rstrten{}; 
        ///Receiver Parity Enable. 
        enum class rparenVal {
            disabled=0x00000000,     ///<Do not expect a parity bit during receptions.
            enabled=0x00000001,     ///<Expect a parity bit during receptions.
        };
        namespace rparenValC{
            constexpr MPL::Value<rparenVal,rparenVal::disabled> disabled{};
            constexpr MPL::Value<rparenVal,rparenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rparenVal> rparen{}; 
        ///Receiver Stop Enable. 
        enum class rstpenVal {
            disabled=0x00000000,     ///<Do not expect stop bits during receptions.
            enabled=0x00000001,     ///<Expect stop bits during receptions.
        };
        namespace rstpenValC{
            constexpr MPL::Value<rstpenVal,rstpenVal::disabled> disabled{};
            constexpr MPL::Value<rstpenVal,rstpenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rstpenVal> rstpen{}; 
        ///Receiver Stop Mode. 
        enum class rstpmdVal {
            v0p5Stop=0x00000000,     ///<0.5 stop bit.
            v1Stop=0x00000001,     ///<1 stop bit.
            v1p5Stop=0x00000002,     ///<1.5 stop bits.
            v2Stop=0x00000003,     ///<2 stop bits.
        };
        namespace rstpmdValC{
            constexpr MPL::Value<rstpmdVal,rstpmdVal::v0p5Stop> v0p5Stop{};
            constexpr MPL::Value<rstpmdVal,rstpmdVal::v1Stop> v1Stop{};
            constexpr MPL::Value<rstpmdVal,rstpmdVal::v1p5Stop> v1p5Stop{};
            constexpr MPL::Value<rstpmdVal,rstpmdVal::v2Stop> v2Stop{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,rstpmdVal> rstpmd{}; 
        ///Receiver Parity Mode. 
        enum class rparmdVal {
            odd=0x00000000,     ///<Odd Parity.
            even=0x00000001,     ///<Even Parity.
            mark=0x00000002,     ///<Set (Parity = 1).
            space=0x00000003,     ///<Clear (Parity = 0).
        };
        namespace rparmdValC{
            constexpr MPL::Value<rparmdVal,rparmdVal::odd> odd{};
            constexpr MPL::Value<rparmdVal,rparmdVal::even> even{};
            constexpr MPL::Value<rparmdVal,rparmdVal::mark> mark{};
            constexpr MPL::Value<rparmdVal,rparmdVal::space> space{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,rparmdVal> rparmd{}; 
        ///Receiver Data Length. 
        enum class rdatlnVal {
            v5Bits=0x00000000,     ///<5 bits.
            v6Bits=0x00000001,     ///<6 bits.
            v7Bits=0x00000002,     ///<7 bits.
            v8Bits=0x00000003,     ///<8 bits.
            v9BitsStored=0x00000004,     ///<9 bits. The 9th bit is stored in the FIFO (normal mode).
            v9BitsMatch=0x00000005,     ///<9 bits. The 9th bit is not stored in the FIFO (fixed mode). This mode is used when the 9th bit is only used for match operations (see MATMD).
        };
        namespace rdatlnValC{
            constexpr MPL::Value<rdatlnVal,rdatlnVal::v5Bits> v5Bits{};
            constexpr MPL::Value<rdatlnVal,rdatlnVal::v6Bits> v6Bits{};
            constexpr MPL::Value<rdatlnVal,rdatlnVal::v7Bits> v7Bits{};
            constexpr MPL::Value<rdatlnVal,rdatlnVal::v8Bits> v8Bits{};
            constexpr MPL::Value<rdatlnVal,rdatlnVal::v9BitsStored> v9BitsStored{};
            constexpr MPL::Value<rdatlnVal,rdatlnVal::v9BitsMatch> v9BitsMatch{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,rdatlnVal> rdatln{}; 
        ///Receiver Smartcard Parity Response Enable. 
        enum class rscenVal {
            disabled=0x00000000,     ///<The receiver does not send a Smartcard parity error response.
            enabled=0x00000001,     ///<The receiver sends a Smartcard parity response.
        };
        namespace rscenValC{
            constexpr MPL::Value<rscenVal,rscenVal::disabled> disabled{};
            constexpr MPL::Value<rscenVal,rscenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,rscenVal> rscen{}; 
        ///Receiver IrDA Enable. 
        enum class rirdaenVal {
            disabled=0x00000000,     ///<The receiver does not operate in IrDA mode.
            enabled=0x00000001,     ///<The receiver operates in IrDA mode. 
        };
        namespace rirdaenValC{
            constexpr MPL::Value<rirdaenVal,rirdaenVal::disabled> disabled{};
            constexpr MPL::Value<rirdaenVal,rirdaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,rirdaenVal> rirdaen{}; 
        ///Receiver Invert Enable. 
        enum class rinvenVal {
            disabled=0x00000000,     ///<Do not invert the RX pin signals (the RX idle state is high).
            enabled=0x00000001,     ///<Invert the RX pin signals (the RX idle state is low).
        };
        namespace rinvenValC{
            constexpr MPL::Value<rinvenVal,rinvenVal::disabled> disabled{};
            constexpr MPL::Value<rinvenVal,rinvenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,rinvenVal> rinven{}; 
        ///Receiver Synchronous Mode Enable. 
        enum class rsyncenVal {
            disabled=0x00000000,     ///<The receiver operates in asynchronous mode.
            enabled=0x00000001,     ///<The receiver operates in synchronous mode.
        };
        namespace rsyncenValC{
            constexpr MPL::Value<rsyncenVal,rsyncenVal::disabled> disabled{};
            constexpr MPL::Value<rsyncenVal,rsyncenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,rsyncenVal> rsyncen{}; 
        ///Transmitter Start Enable. 
        enum class tstrtenVal {
            disabled=0x00000000,     ///<Do not generate a start bit during transmissions.
            enabled=0x00000001,     ///<Generate a start bit during transmissions.
        };
        namespace tstrtenValC{
            constexpr MPL::Value<tstrtenVal,tstrtenVal::disabled> disabled{};
            constexpr MPL::Value<tstrtenVal,tstrtenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tstrtenVal> tstrten{}; 
        ///Transmitter Parity Enable. 
        enum class tparenVal {
            disabled=0x00000000,     ///<Do not send a parity bit during transmissions.
            enabled=0x00000001,     ///<Send a parity bit during transmissions.
        };
        namespace tparenValC{
            constexpr MPL::Value<tparenVal,tparenVal::disabled> disabled{};
            constexpr MPL::Value<tparenVal,tparenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,tparenVal> tparen{}; 
        ///Transmitter Stop Enable. 
        enum class tstpenVal {
            disabled=0x00000000,     ///<Do not send stop bits during transmissions.
            enabled=0x00000001,     ///<Send stop bits during transmissions.
        };
        namespace tstpenValC{
            constexpr MPL::Value<tstpenVal,tstpenVal::disabled> disabled{};
            constexpr MPL::Value<tstpenVal,tstpenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,tstpenVal> tstpen{}; 
        ///Transmitter Stop Mode. 
        enum class tstpmdVal {
            v0p5Stop=0x00000000,     ///<0.5 stop bit.
            v1Stop=0x00000001,     ///<1 stop bit.
            v1p5Stop=0x00000002,     ///<1.5 stop bits.
            v2Stop=0x00000003,     ///<2 stop bits.
        };
        namespace tstpmdValC{
            constexpr MPL::Value<tstpmdVal,tstpmdVal::v0p5Stop> v0p5Stop{};
            constexpr MPL::Value<tstpmdVal,tstpmdVal::v1Stop> v1Stop{};
            constexpr MPL::Value<tstpmdVal,tstpmdVal::v1p5Stop> v1p5Stop{};
            constexpr MPL::Value<tstpmdVal,tstpmdVal::v2Stop> v2Stop{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,tstpmdVal> tstpmd{}; 
        ///Transmitter Parity Mode. 
        enum class tparmdVal {
            odd=0x00000000,     ///<Odd Parity.
            even=0x00000001,     ///<Even Parity.
            mark=0x00000002,     ///<Set (Parity = 1).
            space=0x00000003,     ///<Clear (Parity = 0).
        };
        namespace tparmdValC{
            constexpr MPL::Value<tparmdVal,tparmdVal::odd> odd{};
            constexpr MPL::Value<tparmdVal,tparmdVal::even> even{};
            constexpr MPL::Value<tparmdVal,tparmdVal::mark> mark{};
            constexpr MPL::Value<tparmdVal,tparmdVal::space> space{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,tparmdVal> tparmd{}; 
        ///Transmitter Data Length. 
        enum class tdatlnVal {
            v5Bits=0x00000000,     ///<5 bits.
            v6Bits=0x00000001,     ///<6 bits.
            v7Bits=0x00000002,     ///<7 bits.
            v8Bits=0x00000003,     ///<8 bits.
            v9BitsFifo=0x00000004,     ///<9 bits. The 9th bit is taken from the FIFO data (normal mode).
            v9BitsTbit=0x00000005,     ///<9 bits. The 9th bit is set by the value of TBIT (fixed mode).
        };
        namespace tdatlnValC{
            constexpr MPL::Value<tdatlnVal,tdatlnVal::v5Bits> v5Bits{};
            constexpr MPL::Value<tdatlnVal,tdatlnVal::v6Bits> v6Bits{};
            constexpr MPL::Value<tdatlnVal,tdatlnVal::v7Bits> v7Bits{};
            constexpr MPL::Value<tdatlnVal,tdatlnVal::v8Bits> v8Bits{};
            constexpr MPL::Value<tdatlnVal,tdatlnVal::v9BitsFifo> v9BitsFifo{};
            constexpr MPL::Value<tdatlnVal,tdatlnVal::v9BitsTbit> v9BitsTbit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,tdatlnVal> tdatln{}; 
        ///Transmitter Smartcard Parity Response Enable. 
        enum class tscenVal {
            disabled=0x00000000,     ///<The transmitter does not check for a Smartcard parity error response.
            enabled=0x00000001,     ///<The transmitter checks for a Smartcard parity error response.
        };
        namespace tscenValC{
            constexpr MPL::Value<tscenVal,tscenVal::disabled> disabled{};
            constexpr MPL::Value<tscenVal,tscenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tscenVal> tscen{}; 
        ///Transmitter IrDA Enable. 
        enum class tirdaenVal {
            disabled=0x00000000,     ///<Disable IrDA transmit mode.
            enabled=0x00000001,     ///<Enable IrDA transmit mode.
        };
        namespace tirdaenValC{
            constexpr MPL::Value<tirdaenVal,tirdaenVal::disabled> disabled{};
            constexpr MPL::Value<tirdaenVal,tirdaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,tirdaenVal> tirdaen{}; 
        ///Transmitter Invert Enable. 
        enum class tinvenVal {
            disabled=0x00000000,     ///<Do not invert the TX pin signals (the TX idle state is high).
            enabled=0x00000001,     ///<Invert the TX pin signals (the TX idle state is low).
        };
        namespace tinvenValC{
            constexpr MPL::Value<tinvenVal,tinvenVal::disabled> disabled{};
            constexpr MPL::Value<tinvenVal,tinvenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,tinvenVal> tinven{}; 
        ///Transmitter Synchronous Mode Enable. 
        enum class tsyncenVal {
            disabled=0x00000000,     ///<The transmitter operates in asynchronous mode.
            enabled=0x00000001,     ///<The transmitter operates in synchronous mode.
        };
        namespace tsyncenValC{
            constexpr MPL::Value<tsyncenVal,tsyncenVal::disabled> disabled{};
            constexpr MPL::Value<tsyncenVal,tsyncenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,tsyncenVal> tsyncen{}; 
    }
    namespace Nonemode{    ///<Module Mode Select
        using Addr = Register::Address<0x40000010,0x0712ffff,0,unsigned>;
        ///USART Debug Mode. 
        enum class dbgmdVal {
            run=0x00000000,     ///<The USART module will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will cause the USART module to halt. Any active transmissions and receptions will complete first.
        };
        namespace dbgmdValC{
            constexpr MPL::Value<dbgmdVal,dbgmdVal::run> run{};
            constexpr MPL::Value<dbgmdVal,dbgmdVal::halt> halt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,dbgmdVal> dbgmd{}; 
        ///Loop Back Mode. 
        enum class lbmdVal {
            disabled=0x00000000,     ///<Loop back is disabled and the TX and RX signals are connected to the corresponding external pins.
            rxonly=0x00000001,     ///<Receive loop back. The receiver input path is disconnected from the RX pin and internally connected to the transmitter. Data transmitted will be sent out on TX and also received by the device.
            txonly=0x00000002,     ///<Transmit loop back. The transmitter output path is disconnected from the TX pin and the RX input pin is internally looped back out to the TX pin. Data received at RX will be received by the device and also sent directly back out on TX.
            both=0x00000003,     ///<Full loop back. Internally, the transmitter output is routed back to the receiver input. Neither the transmitter nor receiver are connected to external device pins. The device pin RX is looped back to TX in a similar fashion. Data transmitted on TX will be sent directly back in on RX.
        };
        namespace lbmdValC{
            constexpr MPL::Value<lbmdVal,lbmdVal::disabled> disabled{};
            constexpr MPL::Value<lbmdVal,lbmdVal::rxonly> rxonly{};
            constexpr MPL::Value<lbmdVal,lbmdVal::txonly> txonly{};
            constexpr MPL::Value<lbmdVal,lbmdVal::both> both{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,lbmdVal> lbmd{}; 
        ///Stop State Clock Control. 
        enum class stpstclkVal {
            disabled=0x00000000,     ///<When the USART is a clock master, the clock is not generated during stop bits.
            enabled=0x00000001,     ///<When the USART is a clock master, the clock is generated during stop bits.
        };
        namespace stpstclkValC{
            constexpr MPL::Value<stpstclkVal,stpstclkVal::disabled> disabled{};
            constexpr MPL::Value<stpstclkVal,stpstclkVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,stpstclkVal> stpstclk{}; 
        ///Start State Clock Control. 
        enum class strtstclkVal {
            disabled=0x00000000,     ///<When the USART is a clock master, the clock is held idle during a start bit.
            enabled=0x00000001,     ///<When the USART is a clock master, the clock is generated during a start bit.
        };
        namespace strtstclkValC{
            constexpr MPL::Value<strtstclkVal,strtstclkVal::disabled> disabled{};
            constexpr MPL::Value<strtstclkVal,strtstclkVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,strtstclkVal> strtstclk{}; 
        ///Idle Clock Control. 
        enum class istclkVal {
            disabled=0x00000000,     ///<When the USART is a clock master, the clock is held idle between transmissions.
            enabled=0x00000001,     ///<When the USART is a clock master, the clock is generated between transmissions or receptions.
        };
        namespace istclkValC{
            constexpr MPL::Value<istclkVal,istclkVal::disabled> disabled{};
            constexpr MPL::Value<istclkVal,istclkVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,istclkVal> istclk{}; 
        ///Duplex Mode. 
        enum class duplexmdVal {
            fullDuplex=0x00000000,     ///<Full-duplex mode. The transmitter and receiver can operate simultaneously.
            halfDuplex=0x00000001,     ///<Half-duplex mode. The transmitter automatically inhibits when the receiver is active and the receiver automatically inhibits when the transmitter is active.
        };
        namespace duplexmdValC{
            constexpr MPL::Value<duplexmdVal,duplexmdVal::fullDuplex> fullDuplex{};
            constexpr MPL::Value<duplexmdVal,duplexmdVal::halfDuplex> halfDuplex{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,duplexmdVal> duplexmd{}; 
        ///Clock Idle State. 
        enum class clkidleVal {
            idleLow=0x00000000,     ///<The synchronous clock is low when idle.
            idleHigh=0x00000001,     ///<The synchronous clock is high when idle.
        };
        namespace clkidleValC{
            constexpr MPL::Value<clkidleVal,clkidleVal::idleLow> idleLow{};
            constexpr MPL::Value<clkidleVal,clkidleVal::idleHigh> idleHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,clkidleVal> clkidle{}; 
        ///Clock Edge Select. 
        enum class clkeselVal {
            falling=0x00000000,     ///<The clock falls in the middle of each bit.
            rising=0x00000001,     ///<The clock rises in the middle of each bit.
        };
        namespace clkeselValC{
            constexpr MPL::Value<clkeselVal,clkeselVal::falling> falling{};
            constexpr MPL::Value<clkeselVal,clkeselVal::rising> rising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,clkeselVal> clkesel{}; 
        ///Idle TX/UCLK Tristate Enable. 
        enum class itsenVal {
            disabled=0x00000000,     ///<The TX and UCLK (if in synchronous master mode) pins are always an output in this mode, even when idle.
            enabled=0x00000001,     ///<If ISTCLK is cleared to 0, the TX pin is tristated when idle. The UCLK pin will also be tristated when idle if in synchronous master mode.
        };
        namespace itsenValC{
            constexpr MPL::Value<itsenVal,itsenVal::disabled> disabled{};
            constexpr MPL::Value<itsenVal,itsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,itsenVal> itsen{}; 
        ///Operational Mode. 
        enum class opmdVal {
            slave=0x00000000,     ///<The USART operates as a slave.
            master=0x00000001,     ///<The USART operates as a master.
        };
        namespace opmdValC{
            constexpr MPL::Value<opmdVal,opmdVal::slave> slave{};
            constexpr MPL::Value<opmdVal,opmdVal::master> master{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,opmdVal> opmd{}; 
    }
    namespace Noneflowcn{    ///<Flow Control
        using Addr = Register::Address<0x40000020,0xcf58ef1c,0,unsigned>;
        ///RTS State. 
        enum class rtsVal {
            low=0x00000000,     ///<RTS pin (before optional inversion) is driven low.
            high=0x00000001,     ///<RTS pin (before optional inversion) is driven high.
        };
        namespace rtsValC{
            constexpr MPL::Value<rtsVal,rtsVal::low> low{};
            constexpr MPL::Value<rtsVal,rtsVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rtsVal> rts{}; 
        ///RX Pin Status. 
        enum class rxVal {
            low=0x00000000,     ///<RX pin (after optional inversion) is low.
            high=0x00000001,     ///<RX pin (after optional inversion) is high.
        };
        namespace rxValC{
            constexpr MPL::Value<rxVal,rxVal::low> low{};
            constexpr MPL::Value<rxVal,rxVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rxVal> rx{}; 
        ///RTS Invert Enable. 
        enum class rtsinvenVal {
            disabled=0x00000000,     ///<The USART does not invert the RTS signal before driving the pin.
            enabled=0x00000001,     ///<The USART inverts the RTS signal driving the pin.
        };
        namespace rtsinvenValC{
            constexpr MPL::Value<rtsinvenVal,rtsinvenVal::disabled> disabled{};
            constexpr MPL::Value<rtsinvenVal,rtsinvenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rtsinvenVal> rtsinven{}; 
        ///RTS Threshold Control. 
        enum class rtsthVal {
            full=0x00000000,     ///<RTS is de-asserted when the receive FIFO and shift register are full and no more incoming data can be stored.
            oneByteFree=0x00000001,     ///<RTS is de-asserted when the receive FIFO and shift register are nearly full and only one more data can be received.
        };
        namespace rtsthValC{
            constexpr MPL::Value<rtsthVal,rtsthVal::full> full{};
            constexpr MPL::Value<rtsthVal,rtsthVal::oneByteFree> oneByteFree{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rtsthVal> rtsth{}; 
        ///RTS Enable. 
        enum class rtsenVal {
            disabled=0x00000000,     ///<The RTS state is not changed by hardware. The RTS bit can be written only when hardware RTS is disabled (RTSEN = 0).
            enabled=0x00000001,     ///<Hardware sets RTS when the receive FIFO is at or above the threshold set by RTSTH and clears RTS otherwise.
        };
        namespace rtsenValC{
            constexpr MPL::Value<rtsenVal,rtsenVal::disabled> disabled{};
            constexpr MPL::Value<rtsenVal,rtsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rtsenVal> rtsen{}; 
        ///TX Output Enable. 
        enum class txoenVal {
            disabled=0x00000000,     ///<The pin assigned to TX is controlled by the direct port output value.
            enabled=0x00000001,     ///<The pin assigned to TX is controlled by the USART.
        };
        namespace txoenValC{
            constexpr MPL::Value<txoenVal,txoenVal::disabled> disabled{};
            constexpr MPL::Value<txoenVal,txoenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,txoenVal> txoen{}; 
        ///CTS State. 
        enum class ctsVal {
            low=0x00000000,     ///<Indicates the CTS pin state (after optional inversion) is low.
            high=0x00000001,     ///<Indicates the CTS pin state (after optional inversion) is high.
        };
        namespace ctsValC{
            constexpr MPL::Value<ctsVal,ctsVal::low> low{};
            constexpr MPL::Value<ctsVal,ctsVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ctsVal> cts{}; 
        ///TX State. 
        enum class txVal {
            low=0x00000000,     ///<The TX pin (before optional inversion) is low.
            high=0x00000001,     ///<The TX pin (before optional inversion) is high.
        };
        namespace txValC{
            constexpr MPL::Value<txVal,txVal::low> low{};
            constexpr MPL::Value<txVal,txVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,txVal> tx{}; 
        ///UCLK State. 
        enum class uclkVal {
            low=0x00000000,     ///<The UCLK pin is low.
            high=0x00000001,     ///<The UCLK pin is high.
        };
        namespace uclkValC{
            constexpr MPL::Value<uclkVal,uclkVal::low> low{};
            constexpr MPL::Value<uclkVal,uclkVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,uclkVal> uclk{}; 
        ///CTS Invert Enable. 
        enum class ctsinvenVal {
            disabled=0x00000000,     ///<The USART does not invert CTS.
            enabled=0x00000001,     ///<The USART inverts CTS.
        };
        namespace ctsinvenValC{
            constexpr MPL::Value<ctsinvenVal,ctsinvenVal::disabled> disabled{};
            constexpr MPL::Value<ctsinvenVal,ctsinvenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ctsinvenVal> ctsinven{}; 
        ///CTS Enable. 
        enum class ctsenVal {
            disabled=0x00000000,     ///<The CTS pin state does not affect transmissions.
            enabled=0x00000001,     ///<Transmissions will begin only if the CTS pin (after optional inversion) is low.
        };
        namespace ctsenValC{
            constexpr MPL::Value<ctsenVal,ctsenVal::disabled> disabled{};
            constexpr MPL::Value<ctsenVal,ctsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ctsenVal> ctsen{}; 
        ///Transmit IrDA Pulse Width. 
        enum class tirdapwVal {
            v116th=0x00000000,     ///<The IrDA pulse width is 1/16th of a bit period.
            v18th=0x00000001,     ///<The IrDA pulse width is 1/8th of a bit period.
            v316th=0x00000002,     ///<The IrDA pulse width is 3/16th of a bit period.
            v14th=0x00000003,     ///<The IrDA pulse width is 1/4th of a bit period.
        };
        namespace tirdapwValC{
            constexpr MPL::Value<tirdapwVal,tirdapwVal::v116th> v116th{};
            constexpr MPL::Value<tirdapwVal,tirdapwVal::v18th> v18th{};
            constexpr MPL::Value<tirdapwVal,tirdapwVal::v316th> v316th{};
            constexpr MPL::Value<tirdapwVal,tirdapwVal::v14th> v14th{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,tirdapwVal> tirdapw{}; 
    }
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40000030,0x27000090,0,unsigned>;
        ///Receive Frame Error Interrupt Flag. 
        enum class rfrmeriVal {
            notSet=0x00000000,     ///<Read: A frame error has not occurred since RFRMERI was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A frame error occurred. Write: Force a frame error interrupt.
        };
        namespace rfrmeriValC{
            constexpr MPL::Value<rfrmeriVal,rfrmeriVal::notSet> notSet{};
            constexpr MPL::Value<rfrmeriVal,rfrmeriVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rfrmeriVal> rfrmeri{}; 
        ///Receive Parity Error Interrupt Flag. 
        enum class rpareriVal {
            notSet=0x00000000,     ///<Read: An invalid parity bit has not been received since RPARERI was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: An invalid parity bit has been received since RPARERI was last cleared. Write: Force a parity error interrupt.
        };
        namespace rpareriValC{
            constexpr MPL::Value<rpareriVal,rpareriVal::notSet> notSet{};
            constexpr MPL::Value<rpareriVal,rpareriVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rpareriVal> rpareri{}; 
        ///Receive Overrun Error Interrupt Flag. 
        enum class roreiVal {
            notSet=0x00000000,     ///<Read: A receiver overrun has not occurred since ROREI was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A receiver overrun occurred. Write: Force a receiver overrun interrupt.
        };
        namespace roreiValC{
            constexpr MPL::Value<roreiVal,roreiVal::notSet> notSet{};
            constexpr MPL::Value<roreiVal,roreiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,roreiVal> rorei{}; 
        ///Receive Data Request Interrupt Flag. 
        enum class rdreqiVal {
            notSet=0x00000000,     ///<Fewer than RFTH FIFO slots are filled with data.
            set=0x00000001,     ///<At least RFTH FIFO slots are filled with data.
        };
        namespace rdreqiValC{
            constexpr MPL::Value<rdreqiVal,rdreqiVal::notSet> notSet{};
            constexpr MPL::Value<rdreqiVal,rdreqiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rdreqiVal> rdreqi{}; 
        ///Receive Error Interrupt Enable. 
        enum class rerienVal {
            disabled=0x00000000,     ///<Disable the receive error interrupt.
            enabled=0x00000001,     ///<Enable the receive error interrupt. A receive error interrupt is asserted when ROREI, RFRMERI, or RPARERI is set to 1.
        };
        namespace rerienValC{
            constexpr MPL::Value<rerienVal,rerienVal::disabled> disabled{};
            constexpr MPL::Value<rerienVal,rerienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rerienVal> rerien{}; 
        ///Receive Data Request Interrupt Enable. 
        enum class rdreqienVal {
            disabled=0x00000000,     ///<Disable the read data request interrupt.
            enabled=0x00000001,     ///<Enable the read data request interrupt. A receive interrupt is generated when RDREQI is set to 1.
        };
        namespace rdreqienValC{
            constexpr MPL::Value<rdreqienVal,rdreqienVal::disabled> disabled{};
            constexpr MPL::Value<rdreqienVal,rdreqienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rdreqienVal> rdreqien{}; 
        ///Match Mode. 
        enum class matmdVal {
            off=0x00000000,     ///<Disable the match function.
            mce=0x00000001,     ///<(MCE) Data whose last data bit equals RBIT is accepted and stored. 
            frame=0x00000002,     ///<(Frame) A framing error is asserted if the last received bit matches RBIT.
            store=0x00000003,     ///<(Store) Store the last incoming data bit in RBIT. This mode can be used inconjunction with the RDATLN setting.
        };
        namespace matmdValC{
            constexpr MPL::Value<matmdVal,matmdVal::off> off{};
            constexpr MPL::Value<matmdVal,matmdVal::mce> mce{};
            constexpr MPL::Value<matmdVal,matmdVal::frame> frame{};
            constexpr MPL::Value<matmdVal,matmdVal::store> store{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,matmdVal> matmd{}; 
        ///Receiver Auto-Baud Enable. 
        enum class rabdenVal {
            disabled=0x00000000,     ///<Disable receiver auto-baud.
            enabled=0x00000001,     ///<Enable receiver auto-baud.
        };
        namespace rabdenValC{
            constexpr MPL::Value<rabdenVal,rabdenVal::disabled> disabled{};
            constexpr MPL::Value<rabdenVal,rabdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,rabdenVal> rabden{}; 
        ///Receiver Busy Flag. 
        enum class rbusyfVal {
            notSet=0x00000000,     ///<The USART receiver is idle.
            set=0x00000001,     ///<The USART receiver is receiving data.
        };
        namespace rbusyfValC{
            constexpr MPL::Value<rbusyfVal,rbusyfVal::notSet> notSet{};
            constexpr MPL::Value<rbusyfVal,rbusyfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,rbusyfVal> rbusyf{}; 
        ///Last Receive Bit. 
        enum class rbitVal {
            notSet=0x00000000,     ///<None
            set=0x00000001,     ///<None
        };
        namespace rbitValC{
            constexpr MPL::Value<rbitVal,rbitVal::notSet> notSet{};
            constexpr MPL::Value<rbitVal,rbitVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,rbitVal> rbit{}; 
        ///Receiver One-Shot Enable. 
        enum class rosenVal {
            disabled=0x00000000,     ///<Disable one-shot receive mode.
            enabled=0x00000001,     ///<Enable one-shot receive mode.
        };
        namespace rosenValC{
            constexpr MPL::Value<rosenVal,rosenVal::disabled> disabled{};
            constexpr MPL::Value<rosenVal,rosenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,rosenVal> rosen{}; 
        ///Receiver Inhibit. 
        enum class rinhVal {
            inactive=0x00000000,     ///<The receiver operates normally.
            active=0x00000001,     ///<RTS is immediately asserted when RINH is set. The receiver will complete any ongoing reception, but ignore all traffic after that.
        };
        namespace rinhValC{
            constexpr MPL::Value<rinhVal,rinhVal::inactive> inactive{};
            constexpr MPL::Value<rinhVal,rinhVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,rinhVal> rinh{}; 
        ///Receiver Enable. 
        enum class renVal {
            disabled=0x00000000,     ///<Disable the receiver. The receiver can receive one data transaction only if ROSEN is set.
            enabled=0x00000001,     ///<Enable the receiver.
        };
        namespace renValC{
            constexpr MPL::Value<renVal,renVal::disabled> disabled{};
            constexpr MPL::Value<renVal,renVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,renVal> ren{}; 
        ///Smartcard Parity Error Interrupt Flag. 
        enum class tsceriVal {
            notSet=0x00000000,     ///<Read: A Smartcard parity error has not occurred since TSCERI was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A Smartcard parity error occurred. Write: Force a Smartcard parity error interrupt.
        };
        namespace tsceriValC{
            constexpr MPL::Value<tsceriVal,tsceriVal::notSet> notSet{};
            constexpr MPL::Value<tsceriVal,tsceriVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tsceriVal> tsceri{}; 
        ///Transmit Underrun Error Interrupt Flag. 
        enum class tureiVal {
            notSet=0x00000000,     ///<Read: A transmitter underrun has not occurred since TUREI was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A transmitter underrun occurred. Write: Force a transmitter underrun interrupt.
        };
        namespace tureiValC{
            constexpr MPL::Value<tureiVal,tureiVal::notSet> notSet{};
            constexpr MPL::Value<tureiVal,tureiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,tureiVal> turei{}; 
        ///Transmit Data Request Interrupt Flag. 
        enum class tdreqiVal {
            notSet=0x00000000,     ///<The transmitter is not requesting more FIFO data.
            set=0x00000001,     ///<The transmitter is requesting more FIFO data.
        };
        namespace tdreqiValC{
            constexpr MPL::Value<tdreqiVal,tdreqiVal::notSet> notSet{};
            constexpr MPL::Value<tdreqiVal,tdreqiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,tdreqiVal> tdreqi{}; 
        ///Transmit Complete Interrupt Flag. 
        enum class tcptiVal {
            notSet=0x00000000,     ///<Read: A transmit has not completed since TCPTI was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A byte was transmitted (TCCPTH = 0) or the last available byte was transmitted (TCPTTH = 1). Write: Force a transmit complete interrupt.
        };
        namespace tcptiValC{
            constexpr MPL::Value<tcptiVal,tcptiVal::notSet> notSet{};
            constexpr MPL::Value<tcptiVal,tcptiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,tcptiVal> tcpti{}; 
        ///Transmit Complete Threshold. 
        enum class tcptthVal {
            setOnTx=0x00000000,     ///<A transmit is completed (TCPTI = 1) at the end of each transmission.
            setOnEmpty=0x00000001,     ///<A transmit is completed (TCPTI = 1) only at the end of a transmission when no more data is available to transmit.
        };
        namespace tcptthValC{
            constexpr MPL::Value<tcptthVal,tcptthVal::setOnTx> setOnTx{};
            constexpr MPL::Value<tcptthVal,tcptthVal::setOnEmpty> setOnEmpty{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,tcptthVal> tcptth{}; 
        ///Transmit Error Interrupt Enable. 
        enum class terienVal {
            disabled=0x00000000,     ///<Disable the transmit error interrupt.
            enabled=0x00000001,     ///<Enable the transmit error interrupt. A transmit interrupt is generated when TUREI or TSCERI is set to 1.
        };
        namespace terienValC{
            constexpr MPL::Value<terienVal,terienVal::disabled> disabled{};
            constexpr MPL::Value<terienVal,terienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,terienVal> terien{}; 
        ///Transmit Data Request Interrupt Enable. 
        enum class tdreqienVal {
            disabled=0x00000000,     ///<Disable the transmit data request interrupt.
            enabled=0x00000001,     ///<Enable the transmit data request interrupt. A transmit interrupt is asserted when TDREQI is set to 1.
        };
        namespace tdreqienValC{
            constexpr MPL::Value<tdreqienVal,tdreqienVal::disabled> disabled{};
            constexpr MPL::Value<tdreqienVal,tdreqienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,tdreqienVal> tdreqien{}; 
        ///Transmit Complete Interrupt Enable. 
        enum class tcptienVal {
            disabled=0x00000000,     ///<Disable the transmit complete interrupt.
            enabled=0x00000001,     ///<Enable the transmit complete interrupt. A transmit interrupt is generated when TCPTI is set to 1.
        };
        namespace tcptienValC{
            constexpr MPL::Value<tcptienVal,tcptienVal::disabled> disabled{};
            constexpr MPL::Value<tcptienVal,tcptienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,tcptienVal> tcptien{}; 
        ///Transmitter Busy Flag. 
        enum class tbusyfVal {
            notSet=0x00000000,     ///<The USART transmitter is idle.
            set=0x00000001,     ///<The USART transmitter is active and transmitting.
        };
        namespace tbusyfValC{
            constexpr MPL::Value<tbusyfVal,tbusyfVal::notSet> notSet{};
            constexpr MPL::Value<tbusyfVal,tbusyfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,tbusyfVal> tbusyf{}; 
        ///Last Transmit Bit. 
        enum class tbitVal {
            notSet=0x00000000,     ///<None
            set=0x00000001,     ///<None
        };
        namespace tbitValC{
            constexpr MPL::Value<tbitVal,tbitVal::notSet> notSet{};
            constexpr MPL::Value<tbitVal,tbitVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tbitVal> tbit{}; 
        ///Transmit Inhibit. 
        enum class tinhVal {
            inactive=0x00000000,     ///<The transmitter operates normally.
            active=0x00000001,     ///<Transmissions are inhibited. The transmitter will stall after any current transmission is complete.
        };
        namespace tinhValC{
            constexpr MPL::Value<tinhVal,tinhVal::inactive> inactive{};
            constexpr MPL::Value<tinhVal,tinhVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,tinhVal> tinh{}; 
        ///Transmitter Enable. 
        enum class tenVal {
            disabled=0x00000000,     ///<Disable the transmitter. When cleared, the transmitter immediately aborts any active transmission. Clearing this bit does not automatically flush the transmit FIFO.
            enabled=0x00000001,     ///<Enable the transmitter. The transmitter will initiate a transmission when data becomes available in the transmit FIFO. 
        };
        namespace tenValC{
            constexpr MPL::Value<tenVal,tenVal::disabled> disabled{};
            constexpr MPL::Value<tenVal,tenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,tenVal> ten{}; 
    }
    namespace Noneipdelay{    ///<Inter-Packet Delay
        using Addr = Register::Address<0x40000040,0xff00ffff,0,unsigned>;
        ///Inter-Packet Delay. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ipdelay{}; 
    }
    namespace Nonebaudrate{    ///<Transmit and Receive Baud Rate
        using Addr = Register::Address<0x40000050,0x00000000,0,unsigned>;
        ///Receiver Baud Rate Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rbaud{}; 
        ///Transmitter Baud Rate Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tbaud{}; 
    }
    namespace Nonefifocn{    ///<FIFO Control
        using Addr = Register::Address<0x40000060,0xf848f848,0,unsigned>;
        ///Receive FIFO Count. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rcnt{}; 
        ///Receive FIFO Threshold. 
        enum class rfthVal {
            one=0x00000000,     ///<A DMA request or read data request interrupt (RDREQI) is asserted when >= 1 FIFO slot is full.
            two=0x00000001,     ///<A DMA request or read data request interrupt (RDREQI) is asserted when >= 2 FIFO slots are full.
            three=0x00000002,     ///<A DMA request or read data request interrupt (RDREQI) is asserted when >= 3 FIFO slots are full.
            four=0x00000003,     ///<A DMA request or read data request interrupt (RDREQI) is asserted when >= 4 FIFO slots are full.
        };
        namespace rfthValC{
            constexpr MPL::Value<rfthVal,rfthVal::one> one{};
            constexpr MPL::Value<rfthVal,rfthVal::two> two{};
            constexpr MPL::Value<rfthVal,rfthVal::three> three{};
            constexpr MPL::Value<rfthVal,rfthVal::four> four{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,rfthVal> rfth{}; 
        ///Receiver DMA Enable. 
        enum class rdmaenVal {
            disabled=0x00000000,     ///<Disable receive FIFO DMA requests.
            enabled=0x00000001,     ///<Enable receive FIFO DMA requests.
        };
        namespace rdmaenValC{
            constexpr MPL::Value<rdmaenVal,rdmaenVal::disabled> disabled{};
            constexpr MPL::Value<rdmaenVal,rdmaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rdmaenVal> rdmaen{}; 
        ///Receive FIFO Flush. 
        enum class rfifoflVal {
            set=0x00000001,     ///<Flush the contents of the receive FIFO and any data in the receive shift register.
        };
        namespace rfifoflValC{
            constexpr MPL::Value<rfifoflVal,rfifoflVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,rfifoflVal> rfifofl{}; 
        ///Receive FIFO Error Interrupt Flag. 
        enum class rferiVal {
            notSet=0x00000000,     ///<A receive FIFO error has not occurred since RFERI was last cleared.
            set=0x00000001,     ///<A receive FIFO error occurred.
        };
        namespace rferiValC{
            constexpr MPL::Value<rferiVal,rferiVal::notSet> notSet{};
            constexpr MPL::Value<rferiVal,rferiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,rferiVal> rferi{}; 
        ///Receive Shift Register Full Flag. 
        enum class rsrfullfVal {
            notSet=0x00000000,     ///<The receive data shift register is not full.
            set=0x00000001,     ///<The receive data shift register is full.
        };
        namespace rsrfullfValC{
            constexpr MPL::Value<rsrfullfVal,rsrfullfVal::notSet> notSet{};
            constexpr MPL::Value<rsrfullfVal,rsrfullfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,rsrfullfVal> rsrfullf{}; 
        ///Transmit FIFO Count. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> tcnt{}; 
        ///Transmit FIFO Threshold. 
        enum class tfthVal {
            one=0x00000000,     ///<A DMA request or transmit data request interrupt (TDREQI) is asserted when >= 1 FIFO slot is empty.
            two=0x00000001,     ///<A DMA request or transmit data request interrupt (TDREQI) is asserted when >= 2 FIFO slots are empty.
            three=0x00000002,     ///<A DMA request or transmit data request interrupt (TDREQI) is asserted when >= 3 FIFO slots are empty.
            four=0x00000003,     ///<A DMA request or transmit data request interrupt (TDREQI) is asserted when >= 4 FIFO slots are empty.
        };
        namespace tfthValC{
            constexpr MPL::Value<tfthVal,tfthVal::one> one{};
            constexpr MPL::Value<tfthVal,tfthVal::two> two{};
            constexpr MPL::Value<tfthVal,tfthVal::three> three{};
            constexpr MPL::Value<tfthVal,tfthVal::four> four{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,tfthVal> tfth{}; 
        ///Transmitter DMA Enable. 
        enum class tdmaenVal {
            disabled=0x00000000,     ///<Disable transmit FIFO DMA requests.
            enabled=0x00000001,     ///<Enable transmit FIFO DMA requests.
        };
        namespace tdmaenValC{
            constexpr MPL::Value<tdmaenVal,tdmaenVal::disabled> disabled{};
            constexpr MPL::Value<tdmaenVal,tdmaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,tdmaenVal> tdmaen{}; 
        ///Transmit FIFO Flush. 
        enum class tfifoflVal {
            set=0x00000001,     ///<Flush the contents of the transmit FIFO. If data is pending in the transmit shift register but a transmit has not begun, the shift register is also flushed.
        };
        namespace tfifoflValC{
            constexpr MPL::Value<tfifoflVal,tfifoflVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tfifoflVal> tfifofl{}; 
        ///Transmit FIFO Error Interrupt Flag. 
        enum class tferiVal {
            notSet=0x00000000,     ///<A transmit FIFO error has not occurred since TFERI was last cleared.
            set=0x00000001,     ///<A transmit FIFO error occurred.
        };
        namespace tferiValC{
            constexpr MPL::Value<tferiVal,tferiVal::notSet> notSet{};
            constexpr MPL::Value<tferiVal,tferiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,tferiVal> tferi{}; 
        ///Transmit Shift Register Full Flag. 
        enum class tsrfullfVal {
            notSet=0x00000000,     ///<The transmit shift register is not full.
            set=0x00000001,     ///<The transmit shift register is full.
        };
        namespace tsrfullfValC{
            constexpr MPL::Value<tsrfullfVal,tsrfullfVal::notSet> notSet{};
            constexpr MPL::Value<tsrfullfVal,tsrfullfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,tsrfullfVal> tsrfullf{}; 
    }
    namespace Nonedata{    ///<FIFO Input/Output Data
        using Addr = Register::Address<0x40000070,0x00000000,0,unsigned>;
        ///FIFO Data. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
}
