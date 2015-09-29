#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal Asynchronous Receiver/Transmitter
    namespace Lpuart1Baud{    ///<LPUART Baud Rate Register
        using Addr = Register::Address<0x40055000,0x00500000,0,unsigned>;
        ///Baud Rate Modulo Divisor.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> sbr{}; 
        ///Stop Bit Number Select
        enum class sbnsVal {
            v0=0x00000000,     ///<One stop bit.
            v1=0x00000001,     ///<Two stop bits.
        };
        namespace sbnsValC{
            constexpr MPL::Value<sbnsVal,sbnsVal::v0> v0{};
            constexpr MPL::Value<sbnsVal,sbnsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,sbnsVal> sbns{}; 
        ///RX Input Active Edge Interrupt Enable
        enum class rxedgieVal {
            v0=0x00000000,     ///<Hardware interrupts from LPUART_STAT[RXEDGIF] disabled (use polling).
            v1=0x00000001,     ///<Hardware interrupt requested when LPUART_STAT[RXEDGIF] flag is 1.
        };
        namespace rxedgieValC{
            constexpr MPL::Value<rxedgieVal,rxedgieVal::v0> v0{};
            constexpr MPL::Value<rxedgieVal,rxedgieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,rxedgieVal> rxedgie{}; 
        ///LIN Break Detect Interrupt Enable
        enum class lbkdieVal {
            v0=0x00000000,     ///<Hardware interrupts from LPUART_STAT[LBKDIF] disabled (use polling).
            v1=0x00000001,     ///<Hardware interrupt requested when LPUART_STAT[LBKDIF] flag is 1.
        };
        namespace lbkdieValC{
            constexpr MPL::Value<lbkdieVal,lbkdieVal::v0> v0{};
            constexpr MPL::Value<lbkdieVal,lbkdieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lbkdieVal> lbkdie{}; 
        ///Resynchronization Disable
        enum class resyncdisVal {
            v0=0x00000000,     ///<Resynchronization during received data word is supported
            v1=0x00000001,     ///<Resynchronization during received data word is disabled
        };
        namespace resyncdisValC{
            constexpr MPL::Value<resyncdisVal,resyncdisVal::v0> v0{};
            constexpr MPL::Value<resyncdisVal,resyncdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,resyncdisVal> resyncdis{}; 
        ///Both Edge Sampling
        enum class bothedgeVal {
            v0=0x00000000,     ///<Receiver samples input data using the rising edge of the baud rate clock.
            v1=0x00000001,     ///<Receiver samples input data using the rising and falling edge of the baud rate clock.
        };
        namespace bothedgeValC{
            constexpr MPL::Value<bothedgeVal,bothedgeVal::v0> v0{};
            constexpr MPL::Value<bothedgeVal,bothedgeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,bothedgeVal> bothedge{}; 
        ///Match Configuration
        enum class matcfgVal {
            v00=0x00000000,     ///<Address Match Wakeup
            v01=0x00000001,     ///<Idle Match Wakeup
            v10=0x00000002,     ///<Match On and Match Off
            v11=0x00000003,     ///<Enables RWU on Data Match and Match On/Off for transmitter CTS input
        };
        namespace matcfgValC{
            constexpr MPL::Value<matcfgVal,matcfgVal::v00> v00{};
            constexpr MPL::Value<matcfgVal,matcfgVal::v01> v01{};
            constexpr MPL::Value<matcfgVal,matcfgVal::v10> v10{};
            constexpr MPL::Value<matcfgVal,matcfgVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,matcfgVal> matcfg{}; 
        ///Receiver Full DMA Enable
        enum class rdmaeVal {
            v0=0x00000000,     ///<DMA request disabled.
            v1=0x00000001,     ///<DMA request enabled.
        };
        namespace rdmaeValC{
            constexpr MPL::Value<rdmaeVal,rdmaeVal::v0> v0{};
            constexpr MPL::Value<rdmaeVal,rdmaeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,rdmaeVal> rdmae{}; 
        ///Transmitter DMA Enable
        enum class tdmaeVal {
            v0=0x00000000,     ///<DMA request disabled.
            v1=0x00000001,     ///<DMA request enabled.
        };
        namespace tdmaeValC{
            constexpr MPL::Value<tdmaeVal,tdmaeVal::v0> v0{};
            constexpr MPL::Value<tdmaeVal,tdmaeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,tdmaeVal> tdmae{}; 
        ///Over Sampling Ratio
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> osr{}; 
        ///10-bit Mode select
        enum class m10Val {
            v0=0x00000000,     ///<Receiver and transmitter use 8-bit or 9-bit data characters.
            v1=0x00000001,     ///<Receiver and transmitter use 10-bit data characters.
        };
        namespace m10ValC{
            constexpr MPL::Value<m10Val,m10Val::v0> v0{};
            constexpr MPL::Value<m10Val,m10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,m10Val> m10{}; 
        ///Match Address Mode Enable 2
        enum class maen2Val {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Enables automatic address matching or data matching mode for MATCH[MA2].
        };
        namespace maen2ValC{
            constexpr MPL::Value<maen2Val,maen2Val::v0> v0{};
            constexpr MPL::Value<maen2Val,maen2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,maen2Val> maen2{}; 
        ///Match Address Mode Enable 1
        enum class maen1Val {
            v0=0x00000000,     ///<Normal operation.
            v1=0x00000001,     ///<Enables automatic address matching or data matching mode for MATCH[MA1].
        };
        namespace maen1ValC{
            constexpr MPL::Value<maen1Val,maen1Val::v0> v0{};
            constexpr MPL::Value<maen1Val,maen1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,maen1Val> maen1{}; 
    }
    namespace Lpuart1Stat{    ///<LPUART Status Register
        using Addr = Register::Address<0x40055004,0x00003fff,0,unsigned>;
        ///Match 2 Flag
        enum class ma2fVal {
            v0=0x00000000,     ///<Received data is not equal to MA2
            v1=0x00000001,     ///<Received data is equal to MA2
        };
        namespace ma2fValC{
            constexpr MPL::Value<ma2fVal,ma2fVal::v0> v0{};
            constexpr MPL::Value<ma2fVal,ma2fVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ma2fVal> ma2f{}; 
        ///Match 1 Flag
        enum class ma1fVal {
            v0=0x00000000,     ///<Received data is not equal to MA1
            v1=0x00000001,     ///<Received data is equal to MA1
        };
        namespace ma1fValC{
            constexpr MPL::Value<ma1fVal,ma1fVal::v0> v0{};
            constexpr MPL::Value<ma1fVal,ma1fVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ma1fVal> ma1f{}; 
        ///Parity Error Flag
        enum class pfVal {
            v0=0x00000000,     ///<No parity error.
            v1=0x00000001,     ///<Parity error.
        };
        namespace pfValC{
            constexpr MPL::Value<pfVal,pfVal::v0> v0{};
            constexpr MPL::Value<pfVal,pfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,pfVal> pf{}; 
        ///Framing Error Flag
        enum class feVal {
            v0=0x00000000,     ///<No framing error detected. This does not guarantee the framing is correct.
            v1=0x00000001,     ///<Framing error.
        };
        namespace feValC{
            constexpr MPL::Value<feVal,feVal::v0> v0{};
            constexpr MPL::Value<feVal,feVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,feVal> fe{}; 
        ///Noise Flag
        enum class nfVal {
            v0=0x00000000,     ///<No noise detected.
            v1=0x00000001,     ///<Noise detected in the received character in LPUART_DATA.
        };
        namespace nfValC{
            constexpr MPL::Value<nfVal,nfVal::v0> v0{};
            constexpr MPL::Value<nfVal,nfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,nfVal> nf{}; 
        ///Receiver Overrun Flag
        enum class or_Val {
            v0=0x00000000,     ///<No overrun.
            v1=0x00000001,     ///<Receive overrun (new LPUART data lost).
        };
        namespace or_ValC{
            constexpr MPL::Value<or_Val,or_Val::v0> v0{};
            constexpr MPL::Value<or_Val,or_Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,or_Val> or_{}; 
        ///Idle Line Flag
        enum class idleVal {
            v0=0x00000000,     ///<No idle line detected.
            v1=0x00000001,     ///<Idle line was detected.
        };
        namespace idleValC{
            constexpr MPL::Value<idleVal,idleVal::v0> v0{};
            constexpr MPL::Value<idleVal,idleVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,idleVal> idle{}; 
        ///Receive Data Register Full Flag
        enum class rdrfVal {
            v0=0x00000000,     ///<Receive data buffer empty.
            v1=0x00000001,     ///<Receive data buffer full.
        };
        namespace rdrfValC{
            constexpr MPL::Value<rdrfVal,rdrfVal::v0> v0{};
            constexpr MPL::Value<rdrfVal,rdrfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,rdrfVal> rdrf{}; 
        ///Transmission Complete Flag
        enum class tcVal {
            v0=0x00000000,     ///<Transmitter active (sending data, a preamble, or a break).
            v1=0x00000001,     ///<Transmitter idle (transmission activity complete).
        };
        namespace tcValC{
            constexpr MPL::Value<tcVal,tcVal::v0> v0{};
            constexpr MPL::Value<tcVal,tcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,tcVal> tc{}; 
        ///Transmit Data Register Empty Flag
        enum class tdreVal {
            v0=0x00000000,     ///<Transmit data buffer full.
            v1=0x00000001,     ///<Transmit data buffer empty.
        };
        namespace tdreValC{
            constexpr MPL::Value<tdreVal,tdreVal::v0> v0{};
            constexpr MPL::Value<tdreVal,tdreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,tdreVal> tdre{}; 
        ///Receiver Active Flag
        enum class rafVal {
            v0=0x00000000,     ///<LPUART receiver idle waiting for a start bit.
            v1=0x00000001,     ///<LPUART receiver active (LPUART_RX input not idle).
        };
        namespace rafValC{
            constexpr MPL::Value<rafVal,rafVal::v0> v0{};
            constexpr MPL::Value<rafVal,rafVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,rafVal> raf{}; 
        ///LIN Break Detection Enable
        enum class lbkdeVal {
            v0=0x00000000,     ///<Break character is detected at length 10 bit times (if M = 0, SBNS = 0) or 11 (if M = 1, SBNS = 0 or M = 0, SBNS = 1) or 12 (if M = 1, SBNS = 1 or M10 = 1, SNBS = 0) or 13 (if M10 = 1, SNBS = 1).
            v1=0x00000001,     ///<Break character is detected at length of 11 bit times (if M = 0, SBNS = 0) or 12 (if M = 1, SBNS = 0 or M = 0, SBNS = 1) or 14 (if M = 1, SBNS = 1 or M10 = 1, SNBS = 0) or 15 (if M10 = 1, SNBS = 1).
        };
        namespace lbkdeValC{
            constexpr MPL::Value<lbkdeVal,lbkdeVal::v0> v0{};
            constexpr MPL::Value<lbkdeVal,lbkdeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,lbkdeVal> lbkde{}; 
        ///Break Character Generation Length
        enum class brk13Val {
            v0=0x00000000,     ///<Break character is transmitted with length of 10 bit times (if M = 0, SBNS = 0) or 11 (if M = 1, SBNS = 0 or M = 0, SBNS = 1) or 12 (if M = 1, SBNS = 1 or M10 = 1, SNBS = 0) or 13 (if M10 = 1, SNBS = 1).
            v1=0x00000001,     ///<Break character is transmitted with length of 13 bit times (if M = 0, SBNS = 0) or 14 (if M = 1, SBNS = 0 or M = 0, SBNS = 1) or 15 (if M = 1, SBNS = 1 or M10 = 1, SNBS = 0) or 16 (if M10 = 1, SNBS = 1).
        };
        namespace brk13ValC{
            constexpr MPL::Value<brk13Val,brk13Val::v0> v0{};
            constexpr MPL::Value<brk13Val,brk13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,brk13Val> brk13{}; 
        ///Receive Wake Up Idle Detect
        enum class rwuidVal {
            v0=0x00000000,     ///<During receive standby state (RWU = 1), the IDLE bit does not get set upon detection of an idle character. During address match wakeup, the IDLE bit does not get set when an address does not match.
            v1=0x00000001,     ///<During receive standby state (RWU = 1), the IDLE bit gets set upon detection of an idle character. During address match wakeup, the IDLE bit does get set when an address does not match.
        };
        namespace rwuidValC{
            constexpr MPL::Value<rwuidVal,rwuidVal::v0> v0{};
            constexpr MPL::Value<rwuidVal,rwuidVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,rwuidVal> rwuid{}; 
        ///Receive Data Inversion
        enum class rxinvVal {
            v0=0x00000000,     ///<Receive data not inverted.
            v1=0x00000001,     ///<Receive data inverted.
        };
        namespace rxinvValC{
            constexpr MPL::Value<rxinvVal,rxinvVal::v0> v0{};
            constexpr MPL::Value<rxinvVal,rxinvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,rxinvVal> rxinv{}; 
        ///MSB First
        enum class msbfVal {
            v0=0x00000000,     ///<LSB (bit0) is the first bit that is transmitted following the start bit. Further, the first bit received after the start bit is identified as bit0.
            v1=0x00000001,     ///<MSB (bit9, bit8, bit7 or bit6) is the first bit that is transmitted following the start bit depending on the setting of CTRL[M], CTRL[PE] and BAUD[M10]. Further, the first bit received after the start bit is identified as bit9, bit8, bit7 or bit6 depending on the setting of CTRL[M] and CTRL[PE].
        };
        namespace msbfValC{
            constexpr MPL::Value<msbfVal,msbfVal::v0> v0{};
            constexpr MPL::Value<msbfVal,msbfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,msbfVal> msbf{}; 
        ///LPUART_RX Pin Active Edge Interrupt Flag
        enum class rxedgifVal {
            v0=0x00000000,     ///<No active edge on the receive pin has occurred.
            v1=0x00000001,     ///<An active edge on the receive pin has occurred.
        };
        namespace rxedgifValC{
            constexpr MPL::Value<rxedgifVal,rxedgifVal::v0> v0{};
            constexpr MPL::Value<rxedgifVal,rxedgifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,rxedgifVal> rxedgif{}; 
        ///LIN Break Detect Interrupt Flag
        enum class lbkdifVal {
            v0=0x00000000,     ///<No LIN break character has been detected.
            v1=0x00000001,     ///<LIN break character has been detected.
        };
        namespace lbkdifValC{
            constexpr MPL::Value<lbkdifVal,lbkdifVal::v0> v0{};
            constexpr MPL::Value<lbkdifVal,lbkdifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,lbkdifVal> lbkdif{}; 
    }
    namespace Lpuart1Ctrl{    ///<LPUART Control Register
        using Addr = Register::Address<0x40055008,0x00003800,0,unsigned>;
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
            v0=0x00000000,     ///<Configures RWU for idle-line wakeup.
            v1=0x00000001,     ///<Configures RWU with address-mark wakeup.
        };
        namespace wakeValC{
            constexpr MPL::Value<wakeVal,wakeVal::v0> v0{};
            constexpr MPL::Value<wakeVal,wakeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,wakeVal> wake{}; 
        ///9-Bit or 8-Bit Mode Select
        enum class mVal {
            v0=0x00000000,     ///<Receiver and transmitter use 8-bit data characters.
            v1=0x00000001,     ///<Receiver and transmitter use 9-bit data characters.
        };
        namespace mValC{
            constexpr MPL::Value<mVal,mVal::v0> v0{};
            constexpr MPL::Value<mVal,mVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mVal> m{}; 
        ///Receiver Source Select
        enum class rsrcVal {
            v0=0x00000000,     ///<Provided LOOPS is set, RSRC is cleared, selects internal loop back mode and the LPUART does not use the LPUART_RX pin.
            v1=0x00000001,     ///<Single-wire LPUART mode where the LPUART_TX pin is connected to the transmitter output and receiver input.
        };
        namespace rsrcValC{
            constexpr MPL::Value<rsrcVal,rsrcVal::v0> v0{};
            constexpr MPL::Value<rsrcVal,rsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rsrcVal> rsrc{}; 
        ///Doze Enable
        enum class dozeenVal {
            v0=0x00000000,     ///<LPUART is enabled in Doze mode.
            v1=0x00000001,     ///<LPUART is disabled in Doze mode.
        };
        namespace dozeenValC{
            constexpr MPL::Value<dozeenVal,dozeenVal::v0> v0{};
            constexpr MPL::Value<dozeenVal,dozeenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dozeenVal> dozeen{}; 
        ///Loop Mode Select
        enum class loopsVal {
            v0=0x00000000,     ///<Normal operation - LPUART_RX and LPUART_TX use separate pins.
            v1=0x00000001,     ///<Loop mode or single-wire mode where transmitter outputs are internally connected to receiver input (see RSRC bit).
        };
        namespace loopsValC{
            constexpr MPL::Value<loopsVal,loopsVal::v0> v0{};
            constexpr MPL::Value<loopsVal,loopsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,loopsVal> loops{}; 
        ///Idle Configuration
        enum class idlecfgVal {
            v000=0x00000000,     ///<1 idle character
            v001=0x00000001,     ///<2 idle characters
            v010=0x00000002,     ///<4 idle characters
            v011=0x00000003,     ///<8 idle characters
            v100=0x00000004,     ///<16 idle characters
            v101=0x00000005,     ///<32 idle characters
            v110=0x00000006,     ///<64 idle characters
            v111=0x00000007,     ///<128 idle characters
        };
        namespace idlecfgValC{
            constexpr MPL::Value<idlecfgVal,idlecfgVal::v000> v000{};
            constexpr MPL::Value<idlecfgVal,idlecfgVal::v001> v001{};
            constexpr MPL::Value<idlecfgVal,idlecfgVal::v010> v010{};
            constexpr MPL::Value<idlecfgVal,idlecfgVal::v011> v011{};
            constexpr MPL::Value<idlecfgVal,idlecfgVal::v100> v100{};
            constexpr MPL::Value<idlecfgVal,idlecfgVal::v101> v101{};
            constexpr MPL::Value<idlecfgVal,idlecfgVal::v110> v110{};
            constexpr MPL::Value<idlecfgVal,idlecfgVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,idlecfgVal> idlecfg{}; 
        ///Match 2 Interrupt Enable
        enum class ma2ieVal {
            v0=0x00000000,     ///<MA2F interrupt disabled
            v1=0x00000001,     ///<MA2F interrupt enabled
        };
        namespace ma2ieValC{
            constexpr MPL::Value<ma2ieVal,ma2ieVal::v0> v0{};
            constexpr MPL::Value<ma2ieVal,ma2ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ma2ieVal> ma2ie{}; 
        ///Match 1 Interrupt Enable
        enum class ma1ieVal {
            v0=0x00000000,     ///<MA1F interrupt disabled
            v1=0x00000001,     ///<MA1F interrupt enabled
        };
        namespace ma1ieValC{
            constexpr MPL::Value<ma1ieVal,ma1ieVal::v0> v0{};
            constexpr MPL::Value<ma1ieVal,ma1ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ma1ieVal> ma1ie{}; 
        ///Send Break
        enum class sbkVal {
            v0=0x00000000,     ///<Normal transmitter operation.
            v1=0x00000001,     ///<Queue break character(s) to be sent.
        };
        namespace sbkValC{
            constexpr MPL::Value<sbkVal,sbkVal::v0> v0{};
            constexpr MPL::Value<sbkVal,sbkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,sbkVal> sbk{}; 
        ///Receiver Wakeup Control
        enum class rwuVal {
            v0=0x00000000,     ///<Normal receiver operation.
            v1=0x00000001,     ///<LPUART receiver in standby waiting for wakeup condition.
        };
        namespace rwuValC{
            constexpr MPL::Value<rwuVal,rwuVal::v0> v0{};
            constexpr MPL::Value<rwuVal,rwuVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,rwuVal> rwu{}; 
        ///Receiver Enable
        enum class reVal {
            v0=0x00000000,     ///<Receiver disabled.
            v1=0x00000001,     ///<Receiver enabled.
        };
        namespace reValC{
            constexpr MPL::Value<reVal,reVal::v0> v0{};
            constexpr MPL::Value<reVal,reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,reVal> re{}; 
        ///Transmitter Enable
        enum class teVal {
            v0=0x00000000,     ///<Transmitter disabled.
            v1=0x00000001,     ///<Transmitter enabled.
        };
        namespace teValC{
            constexpr MPL::Value<teVal,teVal::v0> v0{};
            constexpr MPL::Value<teVal,teVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,teVal> te{}; 
        ///Idle Line Interrupt Enable
        enum class ilieVal {
            v0=0x00000000,     ///<Hardware interrupts from IDLE disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when IDLE flag is 1.
        };
        namespace ilieValC{
            constexpr MPL::Value<ilieVal,ilieVal::v0> v0{};
            constexpr MPL::Value<ilieVal,ilieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ilieVal> ilie{}; 
        ///Receiver Interrupt Enable
        enum class rieVal {
            v0=0x00000000,     ///<Hardware interrupts from RDRF disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when RDRF flag is 1.
        };
        namespace rieValC{
            constexpr MPL::Value<rieVal,rieVal::v0> v0{};
            constexpr MPL::Value<rieVal,rieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,rieVal> rie{}; 
        ///Transmission Complete Interrupt Enable for
        enum class tcieVal {
            v0=0x00000000,     ///<Hardware interrupts from TC disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when TC flag is 1.
        };
        namespace tcieValC{
            constexpr MPL::Value<tcieVal,tcieVal::v0> v0{};
            constexpr MPL::Value<tcieVal,tcieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,tcieVal> tcie{}; 
        ///Transmit Interrupt Enable
        enum class tieVal {
            v0=0x00000000,     ///<Hardware interrupts from TDRE disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when TDRE flag is 1.
        };
        namespace tieValC{
            constexpr MPL::Value<tieVal,tieVal::v0> v0{};
            constexpr MPL::Value<tieVal,tieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,tieVal> tie{}; 
        ///Parity Error Interrupt Enable
        enum class peieVal {
            v0=0x00000000,     ///<PF interrupts disabled; use polling).
            v1=0x00000001,     ///<Hardware interrupt requested when PF is set.
        };
        namespace peieValC{
            constexpr MPL::Value<peieVal,peieVal::v0> v0{};
            constexpr MPL::Value<peieVal,peieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,peieVal> peie{}; 
        ///Framing Error Interrupt Enable
        enum class feieVal {
            v0=0x00000000,     ///<FE interrupts disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when FE is set.
        };
        namespace feieValC{
            constexpr MPL::Value<feieVal,feieVal::v0> v0{};
            constexpr MPL::Value<feieVal,feieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,feieVal> feie{}; 
        ///Noise Error Interrupt Enable
        enum class neieVal {
            v0=0x00000000,     ///<NF interrupts disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when NF is set.
        };
        namespace neieValC{
            constexpr MPL::Value<neieVal,neieVal::v0> v0{};
            constexpr MPL::Value<neieVal,neieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,neieVal> neie{}; 
        ///Overrun Interrupt Enable
        enum class orieVal {
            v0=0x00000000,     ///<OR interrupts disabled; use polling.
            v1=0x00000001,     ///<Hardware interrupt requested when OR is set.
        };
        namespace orieValC{
            constexpr MPL::Value<orieVal,orieVal::v0> v0{};
            constexpr MPL::Value<orieVal,orieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,orieVal> orie{}; 
        ///Transmit Data Inversion
        enum class txinvVal {
            v0=0x00000000,     ///<Transmit data not inverted.
            v1=0x00000001,     ///<Transmit data inverted.
        };
        namespace txinvValC{
            constexpr MPL::Value<txinvVal,txinvVal::v0> v0{};
            constexpr MPL::Value<txinvVal,txinvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,txinvVal> txinv{}; 
        ///LPUART_TX Pin Direction in Single-Wire Mode
        enum class txdirVal {
            v0=0x00000000,     ///<LPUART_TX pin is an input in single-wire mode.
            v1=0x00000001,     ///<LPUART_TX pin is an output in single-wire mode.
        };
        namespace txdirValC{
            constexpr MPL::Value<txdirVal,txdirVal::v0> v0{};
            constexpr MPL::Value<txdirVal,txdirVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,txdirVal> txdir{}; 
        ///Receive Bit 9 / Transmit Bit 8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> r9t8{}; 
        ///Receive Bit 8 / Transmit Bit 9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> r8t9{}; 
    }
    namespace Lpuart1Data{    ///<LPUART Data Register
        using Addr = Register::Address<0x4005500c,0xffff0400,0,unsigned>;
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
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> r8t8{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> r9t9{}; 
        ///Idle Line
        enum class idlineVal {
            v0=0x00000000,     ///<Receiver was not idle before receiving this character.
            v1=0x00000001,     ///<Receiver was idle before receiving this character.
        };
        namespace idlineValC{
            constexpr MPL::Value<idlineVal,idlineVal::v0> v0{};
            constexpr MPL::Value<idlineVal,idlineVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,idlineVal> idline{}; 
        ///Receive Buffer Empty
        enum class rxemptVal {
            v0=0x00000000,     ///<Receive buffer contains valid data.
            v1=0x00000001,     ///<Receive buffer is empty, data returned on read is not valid.
        };
        namespace rxemptValC{
            constexpr MPL::Value<rxemptVal,rxemptVal::v0> v0{};
            constexpr MPL::Value<rxemptVal,rxemptVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,rxemptVal> rxempt{}; 
        ///Frame Error / Transmit Special Character
        enum class fretscVal {
            v0=0x00000000,     ///<The dataword was received without a frame error on read, transmit a normal character on write.
            v1=0x00000001,     ///<The dataword was received with a frame error, transmit an idle or break character on transmit.
        };
        namespace fretscValC{
            constexpr MPL::Value<fretscVal,fretscVal::v0> v0{};
            constexpr MPL::Value<fretscVal,fretscVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,fretscVal> fretsc{}; 
        ///no description available
        enum class parityeVal {
            v0=0x00000000,     ///<The dataword was received without a parity error.
            v1=0x00000001,     ///<The dataword was received with a parity error.
        };
        namespace parityeValC{
            constexpr MPL::Value<parityeVal,parityeVal::v0> v0{};
            constexpr MPL::Value<parityeVal,parityeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,parityeVal> paritye{}; 
        ///no description available
        enum class noisyVal {
            v0=0x00000000,     ///<The dataword was received without noise.
            v1=0x00000001,     ///<The data was received with noise.
        };
        namespace noisyValC{
            constexpr MPL::Value<noisyVal,noisyVal::v0> v0{};
            constexpr MPL::Value<noisyVal,noisyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,noisyVal> noisy{}; 
    }
    namespace Lpuart1Match{    ///<LPUART Match Address Register
        using Addr = Register::Address<0x40055010,0xfc00fc00,0,unsigned>;
        ///Match Address 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> ma1{}; 
        ///Match Address 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> ma2{}; 
    }
}
