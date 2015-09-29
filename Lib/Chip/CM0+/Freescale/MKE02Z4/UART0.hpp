#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal Asynchronous Receiver/Transmitter (UART)
    namespace Uart0Bdh{    ///<UART Baud Rate Register: High
        using Addr = Register::Address<0x4006a000,0xffffff00,0,unsigned char>;
        ///Baud Rate Modulo Divisor.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sbr{}; 
        ///Stop Bit Number Select
        enum class sbnsVal {
            v0=0x00000000,     ///<One stop bit.
            v1=0x00000001,     ///<Two stop bit.
        };
        namespace sbnsValC{
            constexpr MPL::Value<sbnsVal,sbnsVal::v0> v0{};
            constexpr MPL::Value<sbnsVal,sbnsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sbnsVal> sbns{}; 
        ///RxD Input Active Edge Interrupt Enable (for RXEDGIF)
        enum class rxedgieVal {
            v0=0x00000000,     ///<Hardware interrupts from UART_S2[RXEDGIF] disabled (use polling).
            v1=0x00000001,     ///<Hardware interrupt requested when UART_S2[RXEDGIF] flag is 1.
        };
        namespace rxedgieValC{
            constexpr MPL::Value<rxedgieVal,rxedgieVal::v0> v0{};
            constexpr MPL::Value<rxedgieVal,rxedgieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rxedgieVal> rxedgie{}; 
        ///LIN Break Detect Interrupt Enable (for LBKDIF)
        enum class lbkdieVal {
            v0=0x00000000,     ///<Hardware interrupts from UART_S2[LBKDIF] disabled (use polling).
            v1=0x00000001,     ///<Hardware interrupt requested when UART_S2[LBKDIF] flag is 1.
        };
        namespace lbkdieValC{
            constexpr MPL::Value<lbkdieVal,lbkdieVal::v0> v0{};
            constexpr MPL::Value<lbkdieVal,lbkdieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lbkdieVal> lbkdie{}; 
    }
    namespace Uart0Bdl{    ///<UART Baud Rate Register: Low
        using Addr = Register::Address<0x4006a001,0xffffff00,0,unsigned char>;
        ///Baud Rate Modulo Divisor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sbr{}; 
    }
    namespace Uart0C1{    ///<UART Control Register 1
        using Addr = Register::Address<0x4006a002,0xffffff00,0,unsigned char>;
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
            v0=0x00000000,     ///<No hardware parity generation or checking.
            v1=0x00000001,     ///<Parity enabled.
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
            v0=0x00000000,     ///<Idle-line wakeup.
            v1=0x00000001,     ///<Address-mark wakeup.
        };
        namespace wakeValC{
            constexpr MPL::Value<wakeVal,wakeVal::v0> v0{};
            constexpr MPL::Value<wakeVal,wakeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,wakeVal> wake{}; 
        ///9-Bit or 8-Bit Mode Select
        enum class mVal {
            v0=0x00000000,     ///<Normal - start + 8 data bits (lsb first) + stop.
            v1=0x00000001,     ///<Receiver and transmitter use 9-bit data characters start + 8 data bits (lsb first) + 9th data bit + stop.
        };
        namespace mValC{
            constexpr MPL::Value<mVal,mVal::v0> v0{};
            constexpr MPL::Value<mVal,mVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mVal> m{}; 
        ///Receiver Source Select
        enum class rsrcVal {
            v0=0x00000000,     ///<Provided LOOPS is set, RSRC is cleared, selects internal loop back mode and the UART does not use the RxD pins.
            v1=0x00000001,     ///<Single-wire UART mode where the TxD pin is connected to the transmitter output and receiver input.
        };
        namespace rsrcValC{
            constexpr MPL::Value<rsrcVal,rsrcVal::v0> v0{};
            constexpr MPL::Value<rsrcVal,rsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rsrcVal> rsrc{}; 
        ///UART Stops in Wait Mode
        enum class uartswaiVal {
            v0=0x00000000,     ///<UART clocks continue to run in wait mode so the UART can be the source of an interrupt that wakes up the CPU.
            v1=0x00000001,     ///<UART clocks freeze while CPU is in wait mode.
        };
        namespace uartswaiValC{
            constexpr MPL::Value<uartswaiVal,uartswaiVal::v0> v0{};
            constexpr MPL::Value<uartswaiVal,uartswaiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,uartswaiVal> uartswai{}; 
        ///Loop Mode Select
        enum class loopsVal {
            v0=0x00000000,     ///<Normal operation - RxD and TxD use separate pins.
            v1=0x00000001,     ///<Loop mode or single-wire mode where transmitter outputs are internally connected to receiver input. (See RSRC bit.) RxD pin is not used by UART.
        };
        namespace loopsValC{
            constexpr MPL::Value<loopsVal,loopsVal::v0> v0{};
            constexpr MPL::Value<loopsVal,loopsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,loopsVal> loops{}; 
    }
    namespace Uart0C2{    ///<UART Control Register 2
        using Addr = Register::Address<0x4006a003,0xffffff00,0,unsigned char>;
        ///Send Break
        enum class sbkVal {
            v0=0x00000000,     ///<Normal transmitter operation.
            v1=0x00000001,     ///<Queue break character(s) to be sent.
        };
        namespace sbkValC{
            constexpr MPL::Value<sbkVal,sbkVal::v0> v0{};
            constexpr MPL::Value<sbkVal,sbkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,sbkVal> sbk{}; 
        ///Receiver Wakeup Control
        enum class rwuVal {
            v0=0x00000000,     ///<Normal UART receiver operation.
            v1=0x00000001,     ///<UART receiver in standby waiting for wakeup condition.
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
        ///Idle Line Interrupt Enable for IDLE
        enum class ilieVal {
            v0=0x00000000,     ///<Hardware interrupts from IDLE disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when IDLE flag is 1.
        };
        namespace ilieValC{
            constexpr MPL::Value<ilieVal,ilieVal::v0> v0{};
            constexpr MPL::Value<ilieVal,ilieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ilieVal> ilie{}; 
        ///Receiver Interrupt Enable for RDRF
        enum class rieVal {
            v0=0x00000000,     ///<Hardware interrupts from RDRF disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when RDRF flag is 1.
        };
        namespace rieValC{
            constexpr MPL::Value<rieVal,rieVal::v0> v0{};
            constexpr MPL::Value<rieVal,rieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rieVal> rie{}; 
        ///Transmission Complete Interrupt Enable for TC
        enum class tcieVal {
            v0=0x00000000,     ///<Hardware interrupts from TC disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when TC flag is 1.
        };
        namespace tcieValC{
            constexpr MPL::Value<tcieVal,tcieVal::v0> v0{};
            constexpr MPL::Value<tcieVal,tcieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,tcieVal> tcie{}; 
        ///Transmit Interrupt Enable for TDRE
        enum class tieVal {
            v0=0x00000000,     ///<Hardware interrupts from TDRE disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when TDRE flag is 1.
        };
        namespace tieValC{
            constexpr MPL::Value<tieVal,tieVal::v0> v0{};
            constexpr MPL::Value<tieVal,tieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tieVal> tie{}; 
    }
    namespace Uart0S1{    ///<UART Status Register 1
        using Addr = Register::Address<0x4006a004,0xffffff00,0,unsigned char>;
        ///Parity Error Flag
        enum class pfVal {
            v0=0x00000000,     ///<No parity error.
            v1=0x00000001,     ///<Parity error.
        };
        namespace pfValC{
            constexpr MPL::Value<pfVal,pfVal::v0> v0{};
            constexpr MPL::Value<pfVal,pfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pfVal> pf{}; 
        ///Framing Error Flag
        enum class feVal {
            v0=0x00000000,     ///<No framing error detected. This does not guarantee the framing is correct.
            v1=0x00000001,     ///<Framing error.
        };
        namespace feValC{
            constexpr MPL::Value<feVal,feVal::v0> v0{};
            constexpr MPL::Value<feVal,feVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,feVal> fe{}; 
        ///Noise Flag
        enum class nfVal {
            v0=0x00000000,     ///<No noise detected.
            v1=0x00000001,     ///<Noise detected in the received character in UART_D.
        };
        namespace nfValC{
            constexpr MPL::Value<nfVal,nfVal::v0> v0{};
            constexpr MPL::Value<nfVal,nfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,nfVal> nf{}; 
        ///Receiver Overrun Flag
        enum class or_Val {
            v0=0x00000000,     ///<No overrun.
            v1=0x00000001,     ///<Receive overrun (new UART data lost).
        };
        namespace or_ValC{
            constexpr MPL::Value<or_Val,or_Val::v0> v0{};
            constexpr MPL::Value<or_Val,or_Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,or_Val> or_{}; 
        ///Idle Line Flag
        enum class idleVal {
            v0=0x00000000,     ///<No idle line detected.
            v1=0x00000001,     ///<Idle line was detected.
        };
        namespace idleValC{
            constexpr MPL::Value<idleVal,idleVal::v0> v0{};
            constexpr MPL::Value<idleVal,idleVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,idleVal> idle{}; 
        ///Receive Data Register Full Flag
        enum class rdrfVal {
            v0=0x00000000,     ///<Receive data register empty.
            v1=0x00000001,     ///<Receive data register full.
        };
        namespace rdrfValC{
            constexpr MPL::Value<rdrfVal,rdrfVal::v0> v0{};
            constexpr MPL::Value<rdrfVal,rdrfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rdrfVal> rdrf{}; 
        ///Transmission Complete Flag
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
            v0=0x00000000,     ///<Transmit data register (buffer) full.
            v1=0x00000001,     ///<Transmit data register (buffer) empty.
        };
        namespace tdreValC{
            constexpr MPL::Value<tdreVal,tdreVal::v0> v0{};
            constexpr MPL::Value<tdreVal,tdreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tdreVal> tdre{}; 
    }
    namespace Uart0S2{    ///<UART Status Register 2
        using Addr = Register::Address<0x4006a005,0xffffff20,0,unsigned char>;
        ///Receiver Active Flag
        enum class rafVal {
            v0=0x00000000,     ///<UART receiver idle waiting for a start bit.
            v1=0x00000001,     ///<UART receiver active (RxD input not idle).
        };
        namespace rafValC{
            constexpr MPL::Value<rafVal,rafVal::v0> v0{};
            constexpr MPL::Value<rafVal,rafVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rafVal> raf{}; 
        ///LIN Break Detection Enable
        enum class lbkdeVal {
            v0=0x00000000,     ///<Break detection is disabled.
            v1=0x00000001,     ///<Break detection is enabled (Break character is detected at length 11 bit times (if M = 0, SBNS = 0) or 12 (if M = 1, SBNS = 0 or M = 0, SBNS = 1) or 13 (if M = 1, SBNS = 1)).
        };
        namespace lbkdeValC{
            constexpr MPL::Value<lbkdeVal,lbkdeVal::v0> v0{};
            constexpr MPL::Value<lbkdeVal,lbkdeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,lbkdeVal> lbkde{}; 
        ///Break Character Generation Length
        enum class brk13Val {
            v0=0x00000000,     ///<Break character is transmitted with length of 10 bit times (if M = 0, SBNS = 0) or 11 (if M = 1, SBNS = 0 or M = 0, SBNS = 1) or 12 (if M = 1, SBNS = 1).
            v1=0x00000001,     ///<Break character is transmitted with length of 13 bit times (if M = 0, SBNS = 0) or 14 (if M = 1, SBNS = 0 or M = 0, SBNS = 1) or 15 (if M = 1, SBNS = 1).
        };
        namespace brk13ValC{
            constexpr MPL::Value<brk13Val,brk13Val::v0> v0{};
            constexpr MPL::Value<brk13Val,brk13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,brk13Val> brk13{}; 
        ///Receive Wake Up Idle Detect
        enum class rwuidVal {
            v0=0x00000000,     ///<During receive standby state (RWU = 1), the IDLE bit does not get set upon detection of an idle character.
            v1=0x00000001,     ///<During receive standby state (RWU = 1), the IDLE bit gets set upon detection of an idle character.
        };
        namespace rwuidValC{
            constexpr MPL::Value<rwuidVal,rwuidVal::v0> v0{};
            constexpr MPL::Value<rwuidVal,rwuidVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rwuidVal> rwuid{}; 
        ///Receive Data Inversion
        enum class rxinvVal {
            v0=0x00000000,     ///<Receive data not inverted.
            v1=0x00000001,     ///<Receive data inverted.
        };
        namespace rxinvValC{
            constexpr MPL::Value<rxinvVal,rxinvVal::v0> v0{};
            constexpr MPL::Value<rxinvVal,rxinvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rxinvVal> rxinv{}; 
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
            v0=0x00000000,     ///<No LIN break character has been detected.
            v1=0x00000001,     ///<LIN break character has been detected.
        };
        namespace lbkdifValC{
            constexpr MPL::Value<lbkdifVal,lbkdifVal::v0> v0{};
            constexpr MPL::Value<lbkdifVal,lbkdifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lbkdifVal> lbkdif{}; 
    }
    namespace Uart0C3{    ///<UART Control Register 3
        using Addr = Register::Address<0x4006a006,0xffffff00,0,unsigned char>;
        ///Parity Error Interrupt Enable
        enum class peieVal {
            v0=0x00000000,     ///<PF interrupts disabled; use polling).
            v1=0x00000001,     ///<Hardware interrupt requested when PF is set.
        };
        namespace peieValC{
            constexpr MPL::Value<peieVal,peieVal::v0> v0{};
            constexpr MPL::Value<peieVal,peieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,peieVal> peie{}; 
        ///Framing Error Interrupt Enable
        enum class feieVal {
            v0=0x00000000,     ///<FE interrupts disabled; use polling).
            v1=0x00000001,     ///<Hardware interrupt requested when FE is set.
        };
        namespace feieValC{
            constexpr MPL::Value<feieVal,feieVal::v0> v0{};
            constexpr MPL::Value<feieVal,feieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,feieVal> feie{}; 
        ///Noise Error Interrupt Enable
        enum class neieVal {
            v0=0x00000000,     ///<NF interrupts disabled; use polling).
            v1=0x00000001,     ///<Hardware interrupt requested when NF is set.
        };
        namespace neieValC{
            constexpr MPL::Value<neieVal,neieVal::v0> v0{};
            constexpr MPL::Value<neieVal,neieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,neieVal> neie{}; 
        ///Overrun Interrupt Enable
        enum class orieVal {
            v0=0x00000000,     ///<OR interrupts disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when OR is set.
        };
        namespace orieValC{
            constexpr MPL::Value<orieVal,orieVal::v0> v0{};
            constexpr MPL::Value<orieVal,orieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,orieVal> orie{}; 
        ///Transmit Data Inversion
        enum class txinvVal {
            v0=0x00000000,     ///<Transmit data not inverted.
            v1=0x00000001,     ///<Transmit data inverted.
        };
        namespace txinvValC{
            constexpr MPL::Value<txinvVal,txinvVal::v0> v0{};
            constexpr MPL::Value<txinvVal,txinvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,txinvVal> txinv{}; 
        ///TxD Pin Direction in Single-Wire Mode
        enum class txdirVal {
            v0=0x00000000,     ///<TxD pin is an input in single-wire mode.
            v1=0x00000001,     ///<TxD pin is an output in single-wire mode.
        };
        namespace txdirValC{
            constexpr MPL::Value<txdirVal,txdirVal::v0> v0{};
            constexpr MPL::Value<txdirVal,txdirVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,txdirVal> txdir{}; 
        ///Ninth Data Bit for Transmitter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> t8{}; 
        ///Ninth Data Bit for Receiver
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> r8{}; 
    }
    namespace Uart0D{    ///<UART Data Register
        using Addr = Register::Address<0x4006a007,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> r0t0{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> r1t1{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> r2t2{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> r3t3{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> r4t4{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> r5t5{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> r6t6{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> r7t7{}; 
    }
}
