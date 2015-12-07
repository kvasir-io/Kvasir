#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonefaddr{    ///<Function Address
        using Addr = Register::Address<0x40018000,0xffffff00,0,unsigned>;
        ///Function Address. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> faddr{}; 
        namespace FaddrValC{
        }
        ///Function Address Update. 
        enum class FaddrupdVal {
            notSet=0x00000000,     ///<The last address written to FADDR is in effect.
            set=0x00000001,     ///<The last address written to FADDR is not yet in effect.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,FaddrupdVal> faddrupd{}; 
        namespace FaddrupdValC{
            constexpr Register::FieldValue<decltype(faddrupd),FaddrupdVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(faddrupd),FaddrupdVal::set> set{};
        }
    }
    namespace Nonepower{    ///<Power Control
        using Addr = Register::Address<0x40018010,0xffffff40,0,unsigned>;
        ///Suspend Detection Enable. 
        enum class SusdenVal {
            disabled=0x00000000,     ///<Disable suspend detection. The USB module will ignore suspend signaling on the bus.
            enabled=0x00000001,     ///<Enable suspend detection. The USB module will enter suspend mode if it detects suspend signalling on the bus.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SusdenVal> susden{}; 
        namespace SusdenValC{
            constexpr Register::FieldValue<decltype(susden),SusdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(susden),SusdenVal::enabled> enabled{};
        }
        ///Suspend Mode Flag. 
        enum class SusmdfVal {
            notSet=0x00000000,     ///<The USB module is not in suspend mode.
            set=0x00000001,     ///<The USB module is in suspend mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SusmdfVal> susmdf{}; 
        namespace SusmdfValC{
            constexpr Register::FieldValue<decltype(susmdf),SusmdfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(susmdf),SusmdfVal::set> set{};
        }
        ///Force Resume. 
        enum class ResumeVal {
            stop=0x00000000,     ///<None
            generate=0x00000001,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ResumeVal> resume{}; 
        namespace ResumeValC{
            constexpr Register::FieldValue<decltype(resume),ResumeVal::stop> stop{};
            constexpr Register::FieldValue<decltype(resume),ResumeVal::generate> generate{};
        }
        ///Reset Detect Flag. 
        enum class RstdetfVal {
            notSet=0x00000000,     ///<Reset signaling is not present on the bus.
            set=0x00000001,     ///<Reset signaling detected on the bus.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RstdetfVal> rstdetf{}; 
        namespace RstdetfValC{
            constexpr Register::FieldValue<decltype(rstdetf),RstdetfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rstdetf),RstdetfVal::set> set{};
        }
        ///USB Inhibit. 
        enum class UsbinhVal {
            inactive=0x00000000,     ///<Enable the USB module.
            active=0x00000001,     ///<USB module inhibited. All USB traffic is ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,UsbinhVal> usbinh{}; 
        namespace UsbinhValC{
            constexpr Register::FieldValue<decltype(usbinh),UsbinhVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(usbinh),UsbinhVal::active> active{};
        }
        ///USB Dither Enable. 
        enum class DithenVal {
            disabled=0x00000000,     ///<Disable automatic USB dithering.
            enabled=0x00000001,     ///<Enable automatic USB dithering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DithenVal> dithen{}; 
        namespace DithenValC{
            constexpr Register::FieldValue<decltype(dithen),DithenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dithen),DithenVal::enabled> enabled{};
        }
        ///ISO Update Mode. 
        enum class IsoupdmdVal {
            sendOnIn=0x00000000,     ///<When software writes IPRDYI = 1, USB will send the packet when the next IN token is received.
            sendOnSof=0x00000001,     ///<When software writes IPRDYI = 1, USB will wait for a SOF token before sending the packet. If an IN token is received before a SOF token, USB will send a zero-length data packet.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,IsoupdmdVal> isoupdmd{}; 
        namespace IsoupdmdValC{
            constexpr Register::FieldValue<decltype(isoupdmd),IsoupdmdVal::sendOnIn> sendOnIn{};
            constexpr Register::FieldValue<decltype(isoupdmd),IsoupdmdVal::sendOnSof> sendOnSof{};
        }
    }
    namespace Noneioint{    ///<IN/OUT Endpoint Interrupt Flags
        using Addr = Register::Address<0x40018020,0xffe1ffe0,0,unsigned>;
        ///Endpoint 0 Interrupt Flag. 
        enum class Ep0iVal {
            notSet=0x00000000,     ///<Read: Endpoint 0 interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: Endpoint 0 interrupt occurred. Write: Clear the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ep0iVal> ep0i{}; 
        namespace Ep0iValC{
            constexpr Register::FieldValue<decltype(ep0i),Ep0iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ep0i),Ep0iVal::set> set{};
        }
        ///IN Endpoint 1 Interrupt Flag. 
        enum class In1iVal {
            notSet=0x00000000,     ///<Read: IN Endpoint 1 interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: IN Endpoint 1 interrupt occurred. Write: Clear the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,In1iVal> in1i{}; 
        namespace In1iValC{
            constexpr Register::FieldValue<decltype(in1i),In1iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(in1i),In1iVal::set> set{};
        }
        ///IN Endpoint 2 Interrupt Flag. 
        enum class In2iVal {
            notSet=0x00000000,     ///<Read: IN Endpoint 2 interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: IN Endpoint 2 interrupt occurred. Write: Clear the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,In2iVal> in2i{}; 
        namespace In2iValC{
            constexpr Register::FieldValue<decltype(in2i),In2iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(in2i),In2iVal::set> set{};
        }
        ///IN Endpoint 3 Interrupt Flag. 
        enum class In3iVal {
            notSet=0x00000000,     ///<Read: IN Endpoint 3 interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: IN Endpoint 3 interrupt occurred. Write: Clear the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,In3iVal> in3i{}; 
        namespace In3iValC{
            constexpr Register::FieldValue<decltype(in3i),In3iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(in3i),In3iVal::set> set{};
        }
        ///IN Endpoint 4 Interrupt Flag. 
        enum class In4iVal {
            notSet=0x00000000,     ///<Read: IN Endpoint 4 interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: IN Endpoint 4 interrupt occurred. Write: Clear the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,In4iVal> in4i{}; 
        namespace In4iValC{
            constexpr Register::FieldValue<decltype(in4i),In4iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(in4i),In4iVal::set> set{};
        }
        ///OUT Endpoint 1 Interrupt Flag. 
        enum class Out1iVal {
            notSet=0x00000000,     ///<Read: OUT Endpoint 1 interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: OUT Endpoint 1 interrupt occurred. Write: Clear the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Out1iVal> out1i{}; 
        namespace Out1iValC{
            constexpr Register::FieldValue<decltype(out1i),Out1iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(out1i),Out1iVal::set> set{};
        }
        ///OUT Endpoint 2 Interrupt Flag. 
        enum class Out2iVal {
            notSet=0x00000000,     ///<Read: OUT Endpoint 2 interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: OUT Endpoint 2 interrupt occurred. Write: Clear the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Out2iVal> out2i{}; 
        namespace Out2iValC{
            constexpr Register::FieldValue<decltype(out2i),Out2iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(out2i),Out2iVal::set> set{};
        }
        ///OUT Endpoint 3 Interrupt Flag. 
        enum class Out3iVal {
            notSet=0x00000000,     ///<Read: OUT Endpoint 3 interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: OUT Endpoint 3 interrupt occurred. Write: Clear the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Out3iVal> out3i{}; 
        namespace Out3iValC{
            constexpr Register::FieldValue<decltype(out3i),Out3iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(out3i),Out3iVal::set> set{};
        }
        ///OUT Endpoint 4 Interrupt Flag. 
        enum class Out4iVal {
            notSet=0x00000000,     ///<Read: OUT Endpoint 4 interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: OUT Endpoint 4 interrupt occurred. Write: Clear the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Out4iVal> out4i{}; 
        namespace Out4iValC{
            constexpr Register::FieldValue<decltype(out4i),Out4iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(out4i),Out4iVal::set> set{};
        }
    }
    namespace Nonecmint{    ///<Common Interrupt Flags
        using Addr = Register::Address<0x40018030,0xfffffff0,0,unsigned>;
        ///Suspend Interrupt Flag. 
        enum class SusiVal {
            notSet=0x00000000,     ///<Read: Suspend interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: Suspend interrupt occurred. Write: Clear the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SusiVal> susi{}; 
        namespace SusiValC{
            constexpr Register::FieldValue<decltype(susi),SusiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(susi),SusiVal::set> set{};
        }
        ///Resume Interrupt Flag. 
        enum class ResiVal {
            notSet=0x00000000,     ///<Read: Resume interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: Resume interrupt occurred. Write: Clear the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ResiVal> resi{}; 
        namespace ResiValC{
            constexpr Register::FieldValue<decltype(resi),ResiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(resi),ResiVal::set> set{};
        }
        ///Reset Interrupt Flag. 
        enum class RstiVal {
            notSet=0x00000000,     ///<Read: Reset interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: Reset interrupt occurred. Write: Clear the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RstiVal> rsti{}; 
        namespace RstiValC{
            constexpr Register::FieldValue<decltype(rsti),RstiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rsti),RstiVal::set> set{};
        }
        ///Start of Frame Interrupt Flag. 
        enum class SofiVal {
            notSet=0x00000000,     ///<Read: SOF interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: SOF interrupt occurred. Write: Clear the interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SofiVal> sofi{}; 
        namespace SofiValC{
            constexpr Register::FieldValue<decltype(sofi),SofiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(sofi),SofiVal::set> set{};
        }
    }
    namespace Noneiointe{    ///<IN/OUT Endpoint Interrupt Control
        using Addr = Register::Address<0x40018040,0xffe1ffe0,0,unsigned>;
        ///Endpoint 0 Interrupt Enable. 
        enum class Ep0ienVal {
            disabled=0x00000000,     ///<Disable the Endpoint 0 interrupt.
            enabled=0x00000001,     ///<Enable the Endpoint 0 interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ep0ienVal> ep0ien{}; 
        namespace Ep0ienValC{
            constexpr Register::FieldValue<decltype(ep0ien),Ep0ienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ep0ien),Ep0ienVal::enabled> enabled{};
        }
        ///IN Endpoint 1 Interrupt Enable. 
        enum class In1ienVal {
            disabled=0x00000000,     ///<Disable the IN Endpoint 1 interrupt.
            enabled=0x00000001,     ///<Enable the IN Endpoint 1 interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,In1ienVal> in1ien{}; 
        namespace In1ienValC{
            constexpr Register::FieldValue<decltype(in1ien),In1ienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in1ien),In1ienVal::enabled> enabled{};
        }
        ///IN Endpoint 2 Interrupt Enable. 
        enum class In2ienVal {
            disabled=0x00000000,     ///<Disable the IN Endpoint 2 interrupt.
            enabled=0x00000001,     ///<Enable the IN Endpoint 2 interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,In2ienVal> in2ien{}; 
        namespace In2ienValC{
            constexpr Register::FieldValue<decltype(in2ien),In2ienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in2ien),In2ienVal::enabled> enabled{};
        }
        ///IN Endpoint 3 Interrupt Enable. 
        enum class In3ienVal {
            disabled=0x00000000,     ///<Disable the IN Endpoint 3 interrupt.
            enabled=0x00000001,     ///<Enable the IN Endpoint 3 interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,In3ienVal> in3ien{}; 
        namespace In3ienValC{
            constexpr Register::FieldValue<decltype(in3ien),In3ienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in3ien),In3ienVal::enabled> enabled{};
        }
        ///IN Endpoint 4 Interrupt Enable. 
        enum class In4ienVal {
            disabled=0x00000000,     ///<Disable the IN Endpoint 4 interrupt.
            enabled=0x00000001,     ///<Enable the IN Endpoint 4 interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,In4ienVal> in4ien{}; 
        namespace In4ienValC{
            constexpr Register::FieldValue<decltype(in4ien),In4ienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in4ien),In4ienVal::enabled> enabled{};
        }
        ///OUT Endpoint 1 Interrupt Enable. 
        enum class Out1ienVal {
            disabled=0x00000000,     ///<Disable the OUT Endpoint 1 interrupt.
            enabled=0x00000001,     ///<Enable the OUT Endpoint 1 interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Out1ienVal> out1ien{}; 
        namespace Out1ienValC{
            constexpr Register::FieldValue<decltype(out1ien),Out1ienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(out1ien),Out1ienVal::enabled> enabled{};
        }
        ///OUT Endpoint 2 Interrupt Enable. 
        enum class Out2ienVal {
            disabled=0x00000000,     ///<Disable the OUT Endpoint 2 interrupt.
            enabled=0x00000001,     ///<Enable the OUT Endpoint 2 interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Out2ienVal> out2ien{}; 
        namespace Out2ienValC{
            constexpr Register::FieldValue<decltype(out2ien),Out2ienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(out2ien),Out2ienVal::enabled> enabled{};
        }
        ///OUT Endpoint 3 Interrupt Enable. 
        enum class Out3ienVal {
            disabled=0x00000000,     ///<Disable the OUT Endpoint 3 interrupt.
            enabled=0x00000001,     ///<Enable the OUT Endpoint 3 interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Out3ienVal> out3ien{}; 
        namespace Out3ienValC{
            constexpr Register::FieldValue<decltype(out3ien),Out3ienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(out3ien),Out3ienVal::enabled> enabled{};
        }
        ///OUT Endpoint 4 Interrupt Enable. 
        enum class Out4ienVal {
            disabled=0x00000000,     ///<Disable the OUT Endpoint 4 interrupt.
            enabled=0x00000001,     ///<Enable the OUT Endpoint 4 interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Out4ienVal> out4ien{}; 
        namespace Out4ienValC{
            constexpr Register::FieldValue<decltype(out4ien),Out4ienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(out4ien),Out4ienVal::enabled> enabled{};
        }
    }
    namespace Nonecmintepe{    ///<Common Interrupt and Endpoint Control
        using Addr = Register::Address<0x40018050,0xffe0fff0,0,unsigned>;
        ///Suspend Interrupt Enable. 
        enum class SusienVal {
            disabled=0x00000000,     ///<Disable the Suspend interrupt.
            enabled=0x00000001,     ///<Enable the Suspend interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SusienVal> susien{}; 
        namespace SusienValC{
            constexpr Register::FieldValue<decltype(susien),SusienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(susien),SusienVal::enabled> enabled{};
        }
        ///Resume Interrupt Enable. 
        enum class ResienVal {
            disabled=0x00000000,     ///<Disable the Resume interrupt.
            enabled=0x00000001,     ///<Enable the Resume interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ResienVal> resien{}; 
        namespace ResienValC{
            constexpr Register::FieldValue<decltype(resien),ResienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(resien),ResienVal::enabled> enabled{};
        }
        ///Reset Interrupt Enable. 
        enum class RstienVal {
            disabled=0x00000000,     ///<Disable the Reset interrupt.
            enabled=0x00000001,     ///<Enable the Reset interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RstienVal> rstien{}; 
        namespace RstienValC{
            constexpr Register::FieldValue<decltype(rstien),RstienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rstien),RstienVal::enabled> enabled{};
        }
        ///Start of Frame Interrupt Enable. 
        enum class SofienVal {
            disabled=0x00000000,     ///<Disable the SOF interrupt.
            enabled=0x00000001,     ///<Enable the SOF interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SofienVal> sofien{}; 
        namespace SofienValC{
            constexpr Register::FieldValue<decltype(sofien),SofienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sofien),SofienVal::enabled> enabled{};
        }
        ///Endpoint 0 Enable. 
        enum class Ep0enVal {
            disabled=0x00000000,     ///<Disable Endpoint 0 (no NACK, ACK, or STALL on the USB network).
            enabled=0x00000001,     ///<Enable Endpoint 0 (normal).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ep0enVal> ep0en{}; 
        namespace Ep0enValC{
            constexpr Register::FieldValue<decltype(ep0en),Ep0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ep0en),Ep0enVal::enabled> enabled{};
        }
        ///Endpoint 1 Enable. 
        enum class Ep1enVal {
            disabled=0x00000000,     ///<Disable Endpoint 1 (no NACK, ACK, or STALL on the USB network).
            enabled=0x00000001,     ///<Enable Endpoint 1 (normal).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ep1enVal> ep1en{}; 
        namespace Ep1enValC{
            constexpr Register::FieldValue<decltype(ep1en),Ep1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ep1en),Ep1enVal::enabled> enabled{};
        }
        ///Endpoint 2 Enable. 
        enum class Ep2enVal {
            disabled=0x00000000,     ///<Disable Endpoint 2 (no NACK, ACK, or STALL on the USB network).
            enabled=0x00000001,     ///<Enable Endpoint 2 (normal).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ep2enVal> ep2en{}; 
        namespace Ep2enValC{
            constexpr Register::FieldValue<decltype(ep2en),Ep2enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ep2en),Ep2enVal::enabled> enabled{};
        }
        ///Endpoint 3 Enable. 
        enum class Ep3enVal {
            disabled=0x00000000,     ///<Disable Endpoint 3 (no NACK, ACK, or STALL on the USB network).
            enabled=0x00000001,     ///<Enable Endpoint 3 (normal).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ep3enVal> ep3en{}; 
        namespace Ep3enValC{
            constexpr Register::FieldValue<decltype(ep3en),Ep3enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ep3en),Ep3enVal::enabled> enabled{};
        }
        ///Endpoint 4 Enable. 
        enum class Ep4enVal {
            disabled=0x00000000,     ///<Disable Endpoint 4 (no NACK, ACK, or STALL on the USB network).
            enabled=0x00000001,     ///<Enable Endpoint 4 (normal).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ep4enVal> ep4en{}; 
        namespace Ep4enValC{
            constexpr Register::FieldValue<decltype(ep4en),Ep4enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ep4en),Ep4enVal::enabled> enabled{};
        }
    }
    namespace Nonecrcontrol{    ///<Clock Recovery Control
        using Addr = Register::Address<0x40018060,0xffffff0f,0,unsigned>;
        ///Oscillator Open-Loop Mode Enable. 
        enum class OlenVal {
            disabled=0x00000000,     ///<Do not freeze the USB oscillator output frequency (closed loop mode).
            enabled=0x00000001,     ///<Freeze the USB oscillator output frequency (open loop mode).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,OlenVal> olen{}; 
        namespace OlenValC{
            constexpr Register::FieldValue<decltype(olen),OlenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(olen),OlenVal::enabled> enabled{};
        }
        ///Low Speed Clock Recovery Mode. 
        enum class LscrmdVal {
            fullSpeed=0x00000000,     ///<Full Speed Mode.
            lowSpeed=0x00000001,     ///<Low Speed Mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,LscrmdVal> lscrmd{}; 
        namespace LscrmdValC{
            constexpr Register::FieldValue<decltype(lscrmd),LscrmdVal::fullSpeed> fullSpeed{};
            constexpr Register::FieldValue<decltype(lscrmd),LscrmdVal::lowSpeed> lowSpeed{};
        }
        ///Clock Recovery Single Step Enable. 
        enum class CrssenVal {
            disabled=0x00000000,     ///<Normal calibration mode.
            enabled=0x00000001,     ///<Single step mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CrssenVal> crssen{}; 
        namespace CrssenValC{
            constexpr Register::FieldValue<decltype(crssen),CrssenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(crssen),CrssenVal::enabled> enabled{};
        }
        ///Clock Recovery Enable. 
        enum class CrenVal {
            disabled=0x00000000,     ///<Disable clock recovery.
            enabled=0x00000001,     ///<Enable clock recovery.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CrenVal> cren{}; 
        namespace CrenValC{
            constexpr Register::FieldValue<decltype(cren),CrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cren),CrenVal::enabled> enabled{};
        }
    }
    namespace Noneframe{    ///<Frame Number
        using Addr = Register::Address<0x40018070,0xfffff800,0,unsigned>;
        ///Frame Number. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> framenum{}; 
        namespace FramenumValC{
        }
    }
    namespace Nonetcontrol{    ///<Transceiver Control
        using Addr = Register::Address<0x40018200,0xffffff00,0,unsigned>;
        ///D- Signal State. 
        enum class DnVal {
            logic0=0x00000000,     ///<D- signal currently at logic 0.
            logic1=0x00000001,     ///<D- signal currently at logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DnVal> dn{}; 
        namespace DnValC{
            constexpr Register::FieldValue<decltype(dn),DnVal::logic0> logic0{};
            constexpr Register::FieldValue<decltype(dn),DnVal::logic1> logic1{};
        }
        ///D+ Signal State. 
        enum class DpVal {
            logic0=0x00000000,     ///<D+ signal currently at logic 0.
            logic1=0x00000001,     ///<D+ signal currently at logic 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DpVal> dp{}; 
        namespace DpValC{
            constexpr Register::FieldValue<decltype(dp),DpVal::logic0> logic0{};
            constexpr Register::FieldValue<decltype(dp),DpVal::logic1> logic1{};
        }
        ///Differential Receiver State. 
        enum class DfrecVal {
            diff0=0x00000000,     ///<Differential 0 signalling is present on the bus.
            diff1=0x00000001,     ///<Differential 1 signalling is present on the bus.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DfrecVal> dfrec{}; 
        namespace DfrecValC{
            constexpr Register::FieldValue<decltype(dfrec),DfrecVal::diff0> diff0{};
            constexpr Register::FieldValue<decltype(dfrec),DfrecVal::diff1> diff1{};
        }
        ///Physical Layer Test. 
        enum class PhytstVal {
            mode0=0x00000000,     ///<Mode 0: Normal (non-test mode) (D+ = X, D- = X).
            mode1=0x00000001,     ///<Mode 1: Differential 1 Forced (D+ = 1, D- = 0).
            mode2=0x00000002,     ///<Mode 2: Differential 0 Forced (D+ = 0, D- = 1).
            mode3=0x00000003,     ///<Mode 3: Single-Ended 0 Forced (D+ = 0, D- = 0).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,PhytstVal> phytst{}; 
        namespace PhytstValC{
            constexpr Register::FieldValue<decltype(phytst),PhytstVal::mode0> mode0{};
            constexpr Register::FieldValue<decltype(phytst),PhytstVal::mode1> mode1{};
            constexpr Register::FieldValue<decltype(phytst),PhytstVal::mode2> mode2{};
            constexpr Register::FieldValue<decltype(phytst),PhytstVal::mode3> mode3{};
        }
        ///USB Speed Select. 
        enum class SselVal {
            lowSpeed=0x00000000,     ///<USB operates as a Low Speed device. If enabled, the internal pull-up resistor appears on the D- line.
            fullSpeed=0x00000001,     ///<USB operates as a Full Speed device. If enabled, the internal pull-up resistor appears on the D+ line.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SselVal> ssel{}; 
        namespace SselValC{
            constexpr Register::FieldValue<decltype(ssel),SselVal::lowSpeed> lowSpeed{};
            constexpr Register::FieldValue<decltype(ssel),SselVal::fullSpeed> fullSpeed{};
        }
        ///Physical Layer Enable. 
        enum class PhyenVal {
            disabled=0x00000000,     ///<Disable the USB physical layer Transceiver (suspend).
            enabled=0x00000001,     ///<Enable the USB physical layer Transceiver (normal).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PhyenVal> phyen{}; 
        namespace PhyenValC{
            constexpr Register::FieldValue<decltype(phyen),PhyenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(phyen),PhyenVal::enabled> enabled{};
        }
        ///Internal Pull-up Resistor Enable. 
        enum class PuenVal {
            disabled=0x00000000,     ///<Disable the internal pull-up resistor (device effectively detached from the USB network).
            enabled=0x00000001,     ///<Enable the internal pull-up resistor when VBUS is present (device is attached to the USB network).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PuenVal> puen{}; 
        namespace PuenValC{
            constexpr Register::FieldValue<decltype(puen),PuenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(puen),PuenVal::enabled> enabled{};
        }
    }
    namespace Noneclksel{    ///<Module Clock Select
        using Addr = Register::Address<0x40018300,0xffffff8c,0,unsigned>;
        ///USB Clock Select. 
        enum class ClkselVal {
            usbnosc=0x00000000,     ///<Select the USB Oscillator as the USB clock.
            pllnosc=0x00000001,     ///<Select the PLL output as the USB clock.
            extoscn=0x00000002,     ///<Select the External Oscillator output (EXTOSCn) as the USB clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ClkselVal> clksel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clksel),ClkselVal::usbnosc> usbnosc{};
            constexpr Register::FieldValue<decltype(clksel),ClkselVal::pllnosc> pllnosc{};
            constexpr Register::FieldValue<decltype(clksel),ClkselVal::extoscn> extoscn{};
        }
        ///USB Clock Divider. 
        enum class ClkdivVal {
            div1=0x00000000,     ///<The USB module uses the selected input clock divided by 1.
            div2=0x00000001,     ///<The USB module uses the selected input clock divided by 2.
            div4=0x00000002,     ///<The USB module uses the selected input clock divided by 4.
            div8=0x00000003,     ///<The USB module uses the selected input clock divided by 8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv),ClkdivVal::div1> div1{};
            constexpr Register::FieldValue<decltype(clkdiv),ClkdivVal::div2> div2{};
            constexpr Register::FieldValue<decltype(clkdiv),ClkdivVal::div4> div4{};
            constexpr Register::FieldValue<decltype(clkdiv),ClkdivVal::div8> div8{};
        }
        ///USB Reset. 
        enum class ResetVal {
            notSet=0x00000000,     ///<Do not reset the USB module.
            set=0x00000001,     ///<Reset the USB module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ResetVal> reset{}; 
        namespace ResetValC{
            constexpr Register::FieldValue<decltype(reset),ResetVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(reset),ResetVal::set> set{};
        }
    }
    namespace Noneosccontrol{    ///<Oscillator Control
        using Addr = Register::Address<0x40018310,0xffffff5f,0,unsigned>;
        ///USB Oscillator Suspend. 
        enum class SuspendVal {
            disabled=0x00000000,     ///<The USB oscillator is not suspended.
            enabled=0x00000001,     ///<Suspend the USB oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SuspendVal> suspend{}; 
        namespace SuspendValC{
            constexpr Register::FieldValue<decltype(suspend),SuspendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(suspend),SuspendVal::enabled> enabled{};
        }
        ///USB Oscillator Enable. 
        enum class OscenVal {
            disabled=0x00000000,     ///<Disable the USB oscillator.
            enabled=0x00000001,     ///<Enable the USB oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,OscenVal> oscen{}; 
        namespace OscenValC{
            constexpr Register::FieldValue<decltype(oscen),OscenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(oscen),OscenVal::enabled> enabled{};
        }
    }
    namespace Noneafadjust{    ///<Oscillator Additional Frequency Adjust
        using Addr = Register::Address<0x40018320,0xffffff80,0,unsigned>;
        ///USB Oscillator Fine Output Frequency Adjust. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> finefadj{}; 
        namespace FinefadjValC{
        }
        ///USB Oscillator Dithering Enable. 
        enum class DithenVal {
            disabled=0x00000000,     ///<Disable USB oscillator dithering.
            enabled=0x00000001,     ///<Enable USB oscillator dithering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DithenVal> dithen{}; 
        namespace DithenValC{
            constexpr Register::FieldValue<decltype(dithen),DithenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dithen),DithenVal::enabled> enabled{};
        }
    }
    namespace Nonefadjust{    ///<Oscillator Frequency Adjust
        using Addr = Register::Address<0x40018330,0xffffff80,0,unsigned>;
        ///Oscillator Output Frequency Adjust. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> fadj{}; 
        namespace FadjValC{
        }
    }
    namespace Nonedmafifo{    ///<DMA Data FIFO Access
        using Addr = Register::Address<0x40018400,0x00000000,0,unsigned>;
        ///DMA Data FIFO Access. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmafifo{}; 
        namespace DmafifoValC{
        }
    }
    namespace Nonedmacontrol{    ///<DMA Control
        using Addr = Register::Address<0x40018410,0xffffff0f,0,unsigned>;
        ///USB DMA Debug Mode. 
        enum class DbgmdVal {
            run=0x00000000,     ///<The USB module will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will prevent the USB DMA buffer from transferring data to and from the USB FIFOs when the core is halted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DbgmdVal> dbgmd{}; 
        namespace DbgmdValC{
            constexpr Register::FieldValue<decltype(dbgmd),DbgmdVal::run> run{};
            constexpr Register::FieldValue<decltype(dbgmd),DbgmdVal::halt> halt{};
        }
        ///Timeout Error Flag. 
        enum class TerrfVal {
            notSet=0x00000000,     ///<A timeout error has not occurred.
            set=0x00000001,     ///<A timeout error occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TerrfVal> terrf{}; 
        namespace TerrfValC{
            constexpr Register::FieldValue<decltype(terrf),TerrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(terrf),TerrfVal::set> set{};
        }
        ///USB DMA Busy Flag. 
        enum class DbusyfVal {
            notSet=0x00000000,     ///<The DMA buffer is not busy.
            set=0x00000001,     ///<The DMA buffer is busy reading or writing an 8-word packet.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DbusyfVal> dbusyf{}; 
        namespace DbusyfValC{
            constexpr Register::FieldValue<decltype(dbusyf),DbusyfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(dbusyf),DbusyfVal::set> set{};
        }
        ///USB DMA Buffer Flush Control. 
        enum class DfifoflVal {
            set=0x00000001,     ///<Flush the USB DMA buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DfifoflVal> dfifofl{}; 
        namespace DfifoflValC{
            constexpr Register::FieldValue<decltype(dfifofl),DfifoflVal::set> set{};
        }
    }
    namespace Noneep0control{    ///<Endpoint 0 Control
        using Addr = Register::Address<0x40018810,0xffffff00,0,unsigned>;
        ///OUT Packet Ready Interrupt Flag. 
        enum class OprdyiVal {
            notSet=0x00000000,     ///<A packet is not available.
            set=0x00000001,     ///<A packet is available.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OprdyiVal> oprdyi{}; 
        namespace OprdyiValC{
            constexpr Register::FieldValue<decltype(oprdyi),OprdyiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oprdyi),OprdyiVal::set> set{};
        }
        ///IN Packet Ready Indicator. 
        enum class IprdyiVal {
            notSet=0x00000000,     ///<A packet is not ready for transmission to host.
            set=0x00000001,     ///<A packet is ready for transmission to host.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IprdyiVal> iprdyi{}; 
        namespace IprdyiValC{
            constexpr Register::FieldValue<decltype(iprdyi),IprdyiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(iprdyi),IprdyiVal::set> set{};
        }
        ///Sent Stall Interrupt Flag. 
        enum class StstliVal {
            notSet=0x00000000,     ///<Read: A STALL handshake has not been sent or is cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: STALL handshake sent. Write: No effect.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,StstliVal> ststli{}; 
        namespace StstliValC{
            constexpr Register::FieldValue<decltype(ststli),StstliVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ststli),StstliVal::set> set{};
        }
        ///Data End. 
        enum class DendVal {
            notSet=0x00000000,     ///<The current packet is not the last packet of the transfer.
            set=0x00000001,     ///<The current packet is the last packet of the transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DendVal> dend{}; 
        namespace DendValC{
            constexpr Register::FieldValue<decltype(dend),DendVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(dend),DendVal::set> set{};
        }
        ///Setup End Interrupt Flag. 
        enum class SuendiVal {
            notSet=0x00000000,     ///<The current packet is not the last packet of setup.
            set=0x00000001,     ///<The current packet is the last packet of setup.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SuendiVal> suendi{}; 
        namespace SuendiValC{
            constexpr Register::FieldValue<decltype(suendi),SuendiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(suendi),SuendiVal::set> set{};
        }
        ///Send Stall. 
        enum class SdstlVal {
            notSet=0x00000000,     ///<The STALL handshake has been transmitted or not triggered.
            set=0x00000001,     ///<Initiate a STALL condition.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SdstlVal> sdstl{}; 
        namespace SdstlValC{
            constexpr Register::FieldValue<decltype(sdstl),SdstlVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(sdstl),SdstlVal::set> set{};
        }
        ///Serviced Out Packet Ready Interrupt Flag. 
        enum class OprdyisVal {
            notSet=0x00000000,     ///<The out packet has not been processed.
            set=0x00000001,     ///<The out packet has been received and accepted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,OprdyisVal> oprdyis{}; 
        namespace OprdyisValC{
            constexpr Register::FieldValue<decltype(oprdyis),OprdyisVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oprdyis),OprdyisVal::set> set{};
        }
        ///Serviced Setup End Interrupt Flag. 
        enum class SuendisVal {
            notSet=0x00000000,     ///<Setup end has not been serviced.
            set=0x00000001,     ///<Setup end has been serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SuendisVal> suendis{}; 
        namespace SuendisValC{
            constexpr Register::FieldValue<decltype(suendis),SuendisVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(suendis),SuendisVal::set> set{};
        }
    }
    namespace Noneep0count{    ///<Endpoint 0 Data Count
        using Addr = Register::Address<0x40018820,0xffffff80,0,unsigned>;
        ///Endpoint 0 OUT Data Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Noneep0fifo{    ///<Endpoint 0 Data FIFO Access
        using Addr = Register::Address<0x40018830,0x00000000,0,unsigned>;
        ///Endpoint 0 Data FIFO. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifo{}; 
        namespace FifoValC{
        }
    }
    namespace Noneepmpsize1{    ///<Endpoint Maximum Packet Size
        using Addr = Register::Address<0x40018880,0xff00ff00,0,unsigned>;
        ///IN Maximum Packet Size. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> imaxp{}; 
        namespace ImaxpValC{
        }
        ///OUT Maximum Packet Size. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> omaxp{}; 
        namespace OmaxpValC{
        }
    }
    namespace Noneepcontrol1{    ///<Endpoint Control
        using Addr = Register::Address<0x40018890,0x0f000380,0,unsigned>;
        ///IN Packet Ready Indicator. 
        enum class IprdyiVal {
            notSet=0x00000000,     ///<The packet has been sent or there is an open FIFO slot.
            set=0x00000001,     ///<A packet is loaded in the FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IprdyiVal> iprdyi{}; 
        namespace IprdyiValC{
            constexpr Register::FieldValue<decltype(iprdyi),IprdyiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(iprdyi),IprdyiVal::set> set{};
        }
        ///IN FIFO Not Empty Flag. 
        enum class IfifonefVal {
            notSet=0x00000000,     ///<The IN Endpoint FIFO is empty.
            set=0x00000001,     ///<The IN Endpoint FIFO contains one or more packets.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IfifonefVal> ififonef{}; 
        namespace IfifonefValC{
            constexpr Register::FieldValue<decltype(ififonef),IfifonefVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ififonef),IfifonefVal::set> set{};
        }
        ///IN FIFO Underrun Flag. 
        enum class IurfVal {
            notSet=0x00000000,     ///<Underrun has not occurred.
            set=0x00000001,     ///<Underrun occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,IurfVal> iurf{}; 
        namespace IurfValC{
            constexpr Register::FieldValue<decltype(iurf),IurfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(iurf),IurfVal::set> set{};
        }
        ///IN FIFO Flush. 
        enum class IfifoflVal {
            set=0x00000001,     ///<Flush the IN FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,IfifoflVal> ififofl{}; 
        namespace IfifoflValC{
            constexpr Register::FieldValue<decltype(ififofl),IfifoflVal::set> set{};
        }
        ///IN Send Stall. 
        enum class IsdstlVal {
            notSet=0x00000000,     ///<Stop sending a stall.
            set=0x00000001,     ///<Generate a stall.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IsdstlVal> isdstl{}; 
        namespace IsdstlValC{
            constexpr Register::FieldValue<decltype(isdstl),IsdstlVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(isdstl),IsdstlVal::set> set{};
        }
        ///IN Sent Stall Interrupt Flag. 
        enum class IststliVal {
            notSet=0x00000000,     ///<Read: A stall condition has not been sent since this bit was last cleared. Write: Clear the interrupt. 
            set=0x00000001,     ///<Read: A stall condition has been sent since this bit was last cleared. Write: No effect.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,IststliVal> iststli{}; 
        namespace IststliValC{
            constexpr Register::FieldValue<decltype(iststli),IststliVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(iststli),IststliVal::set> set{};
        }
        ///IN Clear Data Toggle. 
        enum class IclrdtVal {
            noReset=0x00000000,     ///<Do not reset the IN data toggle.
            reset=0x00000001,     ///<Reset the IN data toggle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,IclrdtVal> iclrdt{}; 
        namespace IclrdtValC{
            constexpr Register::FieldValue<decltype(iclrdt),IclrdtVal::noReset> noReset{};
            constexpr Register::FieldValue<decltype(iclrdt),IclrdtVal::reset> reset{};
        }
        ///FIFO Split Enable. 
        enum class SplitenVal {
            disabled=0x00000000,     ///<Do not split the endpoint FIFO.
            enabled=0x00000001,     ///<Split the endpoint FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,SplitenVal> spliten{}; 
        namespace SplitenValC{
            constexpr Register::FieldValue<decltype(spliten),SplitenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spliten),SplitenVal::enabled> enabled{};
        }
        ///Force Data Toggle Enable. 
        enum class FdtenVal {
            disabled=0x00000000,     ///<The endpoint data toggle switches only when an ACK is received following a data packet transmission.
            enabled=0x00000001,     ///<The endpoint data toggle is forced to switch after every data packet is transmitted, regardless of ACK reception.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,FdtenVal> fdten{}; 
        namespace FdtenValC{
            constexpr Register::FieldValue<decltype(fdten),FdtenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fdten),FdtenVal::enabled> enabled{};
        }
        ///IN Endpoint DMA Enable. 
        enum class IdmaenVal {
            disabled=0x00000000,     ///<Disable the DMA request for the IN endpoint.
            enabled=0x00000001,     ///<Enable the DMA request for the IN endpoint.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,IdmaenVal> idmaen{}; 
        namespace IdmaenValC{
            constexpr Register::FieldValue<decltype(idmaen),IdmaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(idmaen),IdmaenVal::enabled> enabled{};
        }
        ///Endpoint Direction Select. 
        enum class DirselVal {
            out=0x00000000,     ///<Select the endpoint direction as OUT.
            in=0x00000001,     ///<Select the endpoint direction as IN.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,DirselVal> dirsel{}; 
        namespace DirselValC{
            constexpr Register::FieldValue<decltype(dirsel),DirselVal::out> out{};
            constexpr Register::FieldValue<decltype(dirsel),DirselVal::in> in{};
        }
        ///IN Isochronous Transfer Enable. 
        enum class IisoenVal {
            bulkInt=0x00000000,     ///<Configure the endpoint for Bulk/Interrupt transfers.
            iso=0x00000001,     ///<Configure the endpoint for Isochronous transfers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,IisoenVal> iisoen{}; 
        namespace IisoenValC{
            constexpr Register::FieldValue<decltype(iisoen),IisoenVal::bulkInt> bulkInt{};
            constexpr Register::FieldValue<decltype(iisoen),IisoenVal::iso> iso{};
        }
        ///IN Endpoint IPRDYI Automatic Set Enable. 
        enum class AutosetenVal {
            disabled=0x00000000,     ///<The IPRDYI bit is not automatically set by hardware.
            enabled=0x00000001,     ///<The IPRDYI bit is automatically set by hardware.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,AutosetenVal> autoseten{}; 
        namespace AutosetenValC{
            constexpr Register::FieldValue<decltype(autoseten),AutosetenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(autoseten),AutosetenVal::enabled> enabled{};
        }
        ///OUT Packet Ready. 
        enum class OprdyiVal {
            notSet=0x00000000,     ///<A data packet is not available.
            set=0x00000001,     ///<A data packet is available.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,OprdyiVal> oprdyi{}; 
        namespace OprdyiValC{
            constexpr Register::FieldValue<decltype(oprdyi),OprdyiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oprdyi),OprdyiVal::set> set{};
        }
        ///OUT FIFO Full. 
        enum class OfifoffVal {
            notSet=0x00000000,     ///<The OUT endpoint FIFO is not full.
            set=0x00000001,     ///<The OUT endpoint FIFO is full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,OfifoffVal> ofifoff{}; 
        namespace OfifoffValC{
            constexpr Register::FieldValue<decltype(ofifoff),OfifoffVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ofifoff),OfifoffVal::set> set{};
        }
        ///OUT FIFO Overrun Flag. 
        enum class OorfVal {
            notSet=0x00000000,     ///<No data overrun.
            set=0x00000001,     ///<A data packet was lost because of a full FIFO since this flag was last cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,OorfVal> oorf{}; 
        namespace OorfValC{
            constexpr Register::FieldValue<decltype(oorf),OorfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oorf),OorfVal::set> set{};
        }
        ///OUT Data Error Flag. 
        enum class OderrfVal {
            notSet=0x00000000,     ///<A CRC or bit-stuff error has not occurred.
            set=0x00000001,     ///<A CRC or bit-stuff error occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,OderrfVal> oderrf{}; 
        namespace OderrfValC{
            constexpr Register::FieldValue<decltype(oderrf),OderrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oderrf),OderrfVal::set> set{};
        }
        ///OUT FIFO Flush. 
        enum class OfifoflVal {
            set=0x00000001,     ///<Flush the OUT FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OfifoflVal> ofifofl{}; 
        namespace OfifoflValC{
            constexpr Register::FieldValue<decltype(ofifofl),OfifoflVal::set> set{};
        }
        ///OUT Send Stall. 
        enum class OsdstlVal {
            stop=0x00000000,     ///<Stop sending a stall.
            send=0x00000001,     ///<Generate a stall.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,OsdstlVal> osdstl{}; 
        namespace OsdstlValC{
            constexpr Register::FieldValue<decltype(osdstl),OsdstlVal::stop> stop{};
            constexpr Register::FieldValue<decltype(osdstl),OsdstlVal::send> send{};
        }
        ///OUT Sent Stall Interrupt Flag. 
        enum class OststliVal {
            notSet=0x00000000,     ///<Read: A stall condition has not been sent since this bit was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A stall condition has been sent since this bit was last cleared. Write: No effect.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,OststliVal> oststli{}; 
        namespace OststliValC{
            constexpr Register::FieldValue<decltype(oststli),OststliVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oststli),OststliVal::set> set{};
        }
        ///OUT Clear Data Toggle. 
        enum class OclrdtVal {
            noReset=0x00000000,     ///<Do not reset the OUT data toggle.
            reset=0x00000001,     ///<Reset the OUT data toggle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,OclrdtVal> oclrdt{}; 
        namespace OclrdtValC{
            constexpr Register::FieldValue<decltype(oclrdt),OclrdtVal::noReset> noReset{};
            constexpr Register::FieldValue<decltype(oclrdt),OclrdtVal::reset> reset{};
        }
        ///OUT Endpoint DMA Mode. 
        enum class OdmamdVal {
            autoDma=0x00000000,     ///<Automatic DMA service is requested on the last packet of the transfer until less than four bytes remain in the packet. At this time, an interrupt is generated. The firmware must read or write the last few bytes of the packet, if any remain.
            noDma=0x00000001,     ///<No DMA service is requested on the last packet of the transfer. When the DMA recognizes the last packet, an interrupt is generated. The firmware must handle the entirety of the last packet.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,OdmamdVal> odmamd{}; 
        namespace OdmamdValC{
            constexpr Register::FieldValue<decltype(odmamd),OdmamdVal::autoDma> autoDma{};
            constexpr Register::FieldValue<decltype(odmamd),OdmamdVal::noDma> noDma{};
        }
        ///OUT Endpoint DMA Enable. 
        enum class OdmaenVal {
            disabled=0x00000000,     ///<Disable the DMA request for the OUT endpoint.
            enabled=0x00000001,     ///<Enable the DMA request for the OUT endpoint.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,OdmaenVal> odmaen{}; 
        namespace OdmaenValC{
            constexpr Register::FieldValue<decltype(odmaen),OdmaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(odmaen),OdmaenVal::enabled> enabled{};
        }
        ///OUT Isochronous Transfer Enable. 
        enum class OisoenVal {
            bulkInt=0x00000000,     ///<Configure the endpoint for Bulk/Interrupt transfers.
            iso=0x00000001,     ///<Configure the endpoint for Isochronous transfers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,OisoenVal> oisoen{}; 
        namespace OisoenValC{
            constexpr Register::FieldValue<decltype(oisoen),OisoenVal::bulkInt> bulkInt{};
            constexpr Register::FieldValue<decltype(oisoen),OisoenVal::iso> iso{};
        }
        ///OUT Endpoint OPRDYI Auto-Clear Enable. 
        enum class AutoclrenVal {
            disabled=0x00000000,     ///<The OPRDYI bit is not automatically cleared by hardware.
            enabled=0x00000001,     ///<The OPRDYI bit is automatically cleared by hardware.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,AutoclrenVal> autoclren{}; 
        namespace AutoclrenValC{
            constexpr Register::FieldValue<decltype(autoclren),AutoclrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(autoclren),AutoclrenVal::enabled> enabled{};
        }
    }
    namespace Noneepcount1{    ///<Endpoint Data Count
        using Addr = Register::Address<0x400188a0,0xfffffc00,0,unsigned>;
        ///Endpoint OUT Data Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Noneepfifo1{    ///<Endpoint Data FIFO Access
        using Addr = Register::Address<0x400188b0,0x00000000,0,unsigned>;
        ///Endpoint Data FIFO. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifo{}; 
        namespace FifoValC{
        }
    }
    namespace Noneepmpsize2{    ///<Endpoint Maximum Packet Size
        using Addr = Register::Address<0x40018900,0xff00ff00,0,unsigned>;
        ///IN Maximum Packet Size. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> imaxp{}; 
        namespace ImaxpValC{
        }
        ///OUT Maximum Packet Size. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> omaxp{}; 
        namespace OmaxpValC{
        }
    }
    namespace Noneepcontrol2{    ///<Endpoint Control
        using Addr = Register::Address<0x40018910,0x0f000380,0,unsigned>;
        ///IN Packet Ready Indicator. 
        enum class IprdyiVal {
            notSet=0x00000000,     ///<The packet has been sent or there is an open FIFO slot.
            set=0x00000001,     ///<A packet is loaded in the FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IprdyiVal> iprdyi{}; 
        namespace IprdyiValC{
            constexpr Register::FieldValue<decltype(iprdyi),IprdyiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(iprdyi),IprdyiVal::set> set{};
        }
        ///IN FIFO Not Empty Flag. 
        enum class IfifonefVal {
            notSet=0x00000000,     ///<The IN Endpoint FIFO is empty.
            set=0x00000001,     ///<The IN Endpoint FIFO contains one or more packets.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IfifonefVal> ififonef{}; 
        namespace IfifonefValC{
            constexpr Register::FieldValue<decltype(ififonef),IfifonefVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ififonef),IfifonefVal::set> set{};
        }
        ///IN FIFO Underrun Flag. 
        enum class IurfVal {
            notSet=0x00000000,     ///<Underrun has not occurred.
            set=0x00000001,     ///<Underrun occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,IurfVal> iurf{}; 
        namespace IurfValC{
            constexpr Register::FieldValue<decltype(iurf),IurfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(iurf),IurfVal::set> set{};
        }
        ///IN FIFO Flush. 
        enum class IfifoflVal {
            set=0x00000001,     ///<Flush the IN FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,IfifoflVal> ififofl{}; 
        namespace IfifoflValC{
            constexpr Register::FieldValue<decltype(ififofl),IfifoflVal::set> set{};
        }
        ///IN Send Stall. 
        enum class IsdstlVal {
            notSet=0x00000000,     ///<Stop sending a stall.
            set=0x00000001,     ///<Generate a stall.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IsdstlVal> isdstl{}; 
        namespace IsdstlValC{
            constexpr Register::FieldValue<decltype(isdstl),IsdstlVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(isdstl),IsdstlVal::set> set{};
        }
        ///IN Sent Stall Interrupt Flag. 
        enum class IststliVal {
            notSet=0x00000000,     ///<Read: A stall condition has not been sent since this bit was last cleared. Write: Clear the interrupt. 
            set=0x00000001,     ///<Read: A stall condition has been sent since this bit was last cleared. Write: No effect.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,IststliVal> iststli{}; 
        namespace IststliValC{
            constexpr Register::FieldValue<decltype(iststli),IststliVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(iststli),IststliVal::set> set{};
        }
        ///IN Clear Data Toggle. 
        enum class IclrdtVal {
            noReset=0x00000000,     ///<Do not reset the IN data toggle.
            reset=0x00000001,     ///<Reset the IN data toggle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,IclrdtVal> iclrdt{}; 
        namespace IclrdtValC{
            constexpr Register::FieldValue<decltype(iclrdt),IclrdtVal::noReset> noReset{};
            constexpr Register::FieldValue<decltype(iclrdt),IclrdtVal::reset> reset{};
        }
        ///FIFO Split Enable. 
        enum class SplitenVal {
            disabled=0x00000000,     ///<Do not split the endpoint FIFO.
            enabled=0x00000001,     ///<Split the endpoint FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,SplitenVal> spliten{}; 
        namespace SplitenValC{
            constexpr Register::FieldValue<decltype(spliten),SplitenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spliten),SplitenVal::enabled> enabled{};
        }
        ///Force Data Toggle Enable. 
        enum class FdtenVal {
            disabled=0x00000000,     ///<The endpoint data toggle switches only when an ACK is received following a data packet transmission.
            enabled=0x00000001,     ///<The endpoint data toggle is forced to switch after every data packet is transmitted, regardless of ACK reception.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,FdtenVal> fdten{}; 
        namespace FdtenValC{
            constexpr Register::FieldValue<decltype(fdten),FdtenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fdten),FdtenVal::enabled> enabled{};
        }
        ///IN Endpoint DMA Enable. 
        enum class IdmaenVal {
            disabled=0x00000000,     ///<Disable the DMA request for the IN endpoint.
            enabled=0x00000001,     ///<Enable the DMA request for the IN endpoint.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,IdmaenVal> idmaen{}; 
        namespace IdmaenValC{
            constexpr Register::FieldValue<decltype(idmaen),IdmaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(idmaen),IdmaenVal::enabled> enabled{};
        }
        ///Endpoint Direction Select. 
        enum class DirselVal {
            out=0x00000000,     ///<Select the endpoint direction as OUT.
            in=0x00000001,     ///<Select the endpoint direction as IN.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,DirselVal> dirsel{}; 
        namespace DirselValC{
            constexpr Register::FieldValue<decltype(dirsel),DirselVal::out> out{};
            constexpr Register::FieldValue<decltype(dirsel),DirselVal::in> in{};
        }
        ///IN Isochronous Transfer Enable. 
        enum class IisoenVal {
            bulkInt=0x00000000,     ///<Configure the endpoint for Bulk/Interrupt transfers.
            iso=0x00000001,     ///<Configure the endpoint for Isochronous transfers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,IisoenVal> iisoen{}; 
        namespace IisoenValC{
            constexpr Register::FieldValue<decltype(iisoen),IisoenVal::bulkInt> bulkInt{};
            constexpr Register::FieldValue<decltype(iisoen),IisoenVal::iso> iso{};
        }
        ///IN Endpoint IPRDYI Automatic Set Enable. 
        enum class AutosetenVal {
            disabled=0x00000000,     ///<The IPRDYI bit is not automatically set by hardware.
            enabled=0x00000001,     ///<The IPRDYI bit is automatically set by hardware.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,AutosetenVal> autoseten{}; 
        namespace AutosetenValC{
            constexpr Register::FieldValue<decltype(autoseten),AutosetenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(autoseten),AutosetenVal::enabled> enabled{};
        }
        ///OUT Packet Ready. 
        enum class OprdyiVal {
            notSet=0x00000000,     ///<A data packet is not available.
            set=0x00000001,     ///<A data packet is available.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,OprdyiVal> oprdyi{}; 
        namespace OprdyiValC{
            constexpr Register::FieldValue<decltype(oprdyi),OprdyiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oprdyi),OprdyiVal::set> set{};
        }
        ///OUT FIFO Full. 
        enum class OfifoffVal {
            notSet=0x00000000,     ///<The OUT endpoint FIFO is not full.
            set=0x00000001,     ///<The OUT endpoint FIFO is full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,OfifoffVal> ofifoff{}; 
        namespace OfifoffValC{
            constexpr Register::FieldValue<decltype(ofifoff),OfifoffVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ofifoff),OfifoffVal::set> set{};
        }
        ///OUT FIFO Overrun Flag. 
        enum class OorfVal {
            notSet=0x00000000,     ///<No data overrun.
            set=0x00000001,     ///<A data packet was lost because of a full FIFO since this flag was last cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,OorfVal> oorf{}; 
        namespace OorfValC{
            constexpr Register::FieldValue<decltype(oorf),OorfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oorf),OorfVal::set> set{};
        }
        ///OUT Data Error Flag. 
        enum class OderrfVal {
            notSet=0x00000000,     ///<A CRC or bit-stuff error has not occurred.
            set=0x00000001,     ///<A CRC or bit-stuff error occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,OderrfVal> oderrf{}; 
        namespace OderrfValC{
            constexpr Register::FieldValue<decltype(oderrf),OderrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oderrf),OderrfVal::set> set{};
        }
        ///OUT FIFO Flush. 
        enum class OfifoflVal {
            set=0x00000001,     ///<Flush the OUT FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OfifoflVal> ofifofl{}; 
        namespace OfifoflValC{
            constexpr Register::FieldValue<decltype(ofifofl),OfifoflVal::set> set{};
        }
        ///OUT Send Stall. 
        enum class OsdstlVal {
            stop=0x00000000,     ///<Stop sending a stall.
            send=0x00000001,     ///<Generate a stall.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,OsdstlVal> osdstl{}; 
        namespace OsdstlValC{
            constexpr Register::FieldValue<decltype(osdstl),OsdstlVal::stop> stop{};
            constexpr Register::FieldValue<decltype(osdstl),OsdstlVal::send> send{};
        }
        ///OUT Sent Stall Interrupt Flag. 
        enum class OststliVal {
            notSet=0x00000000,     ///<Read: A stall condition has not been sent since this bit was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A stall condition has been sent since this bit was last cleared. Write: No effect.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,OststliVal> oststli{}; 
        namespace OststliValC{
            constexpr Register::FieldValue<decltype(oststli),OststliVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oststli),OststliVal::set> set{};
        }
        ///OUT Clear Data Toggle. 
        enum class OclrdtVal {
            noReset=0x00000000,     ///<Do not reset the OUT data toggle.
            reset=0x00000001,     ///<Reset the OUT data toggle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,OclrdtVal> oclrdt{}; 
        namespace OclrdtValC{
            constexpr Register::FieldValue<decltype(oclrdt),OclrdtVal::noReset> noReset{};
            constexpr Register::FieldValue<decltype(oclrdt),OclrdtVal::reset> reset{};
        }
        ///OUT Endpoint DMA Mode. 
        enum class OdmamdVal {
            autoDma=0x00000000,     ///<Automatic DMA service is requested on the last packet of the transfer until less than four bytes remain in the packet. At this time, an interrupt is generated. The firmware must read or write the last few bytes of the packet, if any remain.
            noDma=0x00000001,     ///<No DMA service is requested on the last packet of the transfer. When the DMA recognizes the last packet, an interrupt is generated. The firmware must handle the entirety of the last packet.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,OdmamdVal> odmamd{}; 
        namespace OdmamdValC{
            constexpr Register::FieldValue<decltype(odmamd),OdmamdVal::autoDma> autoDma{};
            constexpr Register::FieldValue<decltype(odmamd),OdmamdVal::noDma> noDma{};
        }
        ///OUT Endpoint DMA Enable. 
        enum class OdmaenVal {
            disabled=0x00000000,     ///<Disable the DMA request for the OUT endpoint.
            enabled=0x00000001,     ///<Enable the DMA request for the OUT endpoint.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,OdmaenVal> odmaen{}; 
        namespace OdmaenValC{
            constexpr Register::FieldValue<decltype(odmaen),OdmaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(odmaen),OdmaenVal::enabled> enabled{};
        }
        ///OUT Isochronous Transfer Enable. 
        enum class OisoenVal {
            bulkInt=0x00000000,     ///<Configure the endpoint for Bulk/Interrupt transfers.
            iso=0x00000001,     ///<Configure the endpoint for Isochronous transfers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,OisoenVal> oisoen{}; 
        namespace OisoenValC{
            constexpr Register::FieldValue<decltype(oisoen),OisoenVal::bulkInt> bulkInt{};
            constexpr Register::FieldValue<decltype(oisoen),OisoenVal::iso> iso{};
        }
        ///OUT Endpoint OPRDYI Auto-Clear Enable. 
        enum class AutoclrenVal {
            disabled=0x00000000,     ///<The OPRDYI bit is not automatically cleared by hardware.
            enabled=0x00000001,     ///<The OPRDYI bit is automatically cleared by hardware.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,AutoclrenVal> autoclren{}; 
        namespace AutoclrenValC{
            constexpr Register::FieldValue<decltype(autoclren),AutoclrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(autoclren),AutoclrenVal::enabled> enabled{};
        }
    }
    namespace Noneepcount2{    ///<Endpoint Data Count
        using Addr = Register::Address<0x40018920,0xfffffc00,0,unsigned>;
        ///Endpoint OUT Data Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Noneepfifo2{    ///<Endpoint Data FIFO Access
        using Addr = Register::Address<0x40018930,0x00000000,0,unsigned>;
        ///Endpoint Data FIFO. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifo{}; 
        namespace FifoValC{
        }
    }
    namespace Noneepmpsize3{    ///<Endpoint Maximum Packet Size
        using Addr = Register::Address<0x40018980,0xff00ff00,0,unsigned>;
        ///IN Maximum Packet Size. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> imaxp{}; 
        namespace ImaxpValC{
        }
        ///OUT Maximum Packet Size. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> omaxp{}; 
        namespace OmaxpValC{
        }
    }
    namespace Noneepcontrol3{    ///<Endpoint Control
        using Addr = Register::Address<0x40018990,0x0f000380,0,unsigned>;
        ///IN Packet Ready Indicator. 
        enum class IprdyiVal {
            notSet=0x00000000,     ///<The packet has been sent or there is an open FIFO slot.
            set=0x00000001,     ///<A packet is loaded in the FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IprdyiVal> iprdyi{}; 
        namespace IprdyiValC{
            constexpr Register::FieldValue<decltype(iprdyi),IprdyiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(iprdyi),IprdyiVal::set> set{};
        }
        ///IN FIFO Not Empty Flag. 
        enum class IfifonefVal {
            notSet=0x00000000,     ///<The IN Endpoint FIFO is empty.
            set=0x00000001,     ///<The IN Endpoint FIFO contains one or more packets.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IfifonefVal> ififonef{}; 
        namespace IfifonefValC{
            constexpr Register::FieldValue<decltype(ififonef),IfifonefVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ififonef),IfifonefVal::set> set{};
        }
        ///IN FIFO Underrun Flag. 
        enum class IurfVal {
            notSet=0x00000000,     ///<Underrun has not occurred.
            set=0x00000001,     ///<Underrun occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,IurfVal> iurf{}; 
        namespace IurfValC{
            constexpr Register::FieldValue<decltype(iurf),IurfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(iurf),IurfVal::set> set{};
        }
        ///IN FIFO Flush. 
        enum class IfifoflVal {
            set=0x00000001,     ///<Flush the IN FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,IfifoflVal> ififofl{}; 
        namespace IfifoflValC{
            constexpr Register::FieldValue<decltype(ififofl),IfifoflVal::set> set{};
        }
        ///IN Send Stall. 
        enum class IsdstlVal {
            notSet=0x00000000,     ///<Stop sending a stall.
            set=0x00000001,     ///<Generate a stall.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IsdstlVal> isdstl{}; 
        namespace IsdstlValC{
            constexpr Register::FieldValue<decltype(isdstl),IsdstlVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(isdstl),IsdstlVal::set> set{};
        }
        ///IN Sent Stall Interrupt Flag. 
        enum class IststliVal {
            notSet=0x00000000,     ///<Read: A stall condition has not been sent since this bit was last cleared. Write: Clear the interrupt. 
            set=0x00000001,     ///<Read: A stall condition has been sent since this bit was last cleared. Write: No effect.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,IststliVal> iststli{}; 
        namespace IststliValC{
            constexpr Register::FieldValue<decltype(iststli),IststliVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(iststli),IststliVal::set> set{};
        }
        ///IN Clear Data Toggle. 
        enum class IclrdtVal {
            noReset=0x00000000,     ///<Do not reset the IN data toggle.
            reset=0x00000001,     ///<Reset the IN data toggle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,IclrdtVal> iclrdt{}; 
        namespace IclrdtValC{
            constexpr Register::FieldValue<decltype(iclrdt),IclrdtVal::noReset> noReset{};
            constexpr Register::FieldValue<decltype(iclrdt),IclrdtVal::reset> reset{};
        }
        ///FIFO Split Enable. 
        enum class SplitenVal {
            disabled=0x00000000,     ///<Do not split the endpoint FIFO.
            enabled=0x00000001,     ///<Split the endpoint FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,SplitenVal> spliten{}; 
        namespace SplitenValC{
            constexpr Register::FieldValue<decltype(spliten),SplitenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spliten),SplitenVal::enabled> enabled{};
        }
        ///Force Data Toggle Enable. 
        enum class FdtenVal {
            disabled=0x00000000,     ///<The endpoint data toggle switches only when an ACK is received following a data packet transmission.
            enabled=0x00000001,     ///<The endpoint data toggle is forced to switch after every data packet is transmitted, regardless of ACK reception.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,FdtenVal> fdten{}; 
        namespace FdtenValC{
            constexpr Register::FieldValue<decltype(fdten),FdtenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fdten),FdtenVal::enabled> enabled{};
        }
        ///IN Endpoint DMA Enable. 
        enum class IdmaenVal {
            disabled=0x00000000,     ///<Disable the DMA request for the IN endpoint.
            enabled=0x00000001,     ///<Enable the DMA request for the IN endpoint.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,IdmaenVal> idmaen{}; 
        namespace IdmaenValC{
            constexpr Register::FieldValue<decltype(idmaen),IdmaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(idmaen),IdmaenVal::enabled> enabled{};
        }
        ///Endpoint Direction Select. 
        enum class DirselVal {
            out=0x00000000,     ///<Select the endpoint direction as OUT.
            in=0x00000001,     ///<Select the endpoint direction as IN.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,DirselVal> dirsel{}; 
        namespace DirselValC{
            constexpr Register::FieldValue<decltype(dirsel),DirselVal::out> out{};
            constexpr Register::FieldValue<decltype(dirsel),DirselVal::in> in{};
        }
        ///IN Isochronous Transfer Enable. 
        enum class IisoenVal {
            bulkInt=0x00000000,     ///<Configure the endpoint for Bulk/Interrupt transfers.
            iso=0x00000001,     ///<Configure the endpoint for Isochronous transfers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,IisoenVal> iisoen{}; 
        namespace IisoenValC{
            constexpr Register::FieldValue<decltype(iisoen),IisoenVal::bulkInt> bulkInt{};
            constexpr Register::FieldValue<decltype(iisoen),IisoenVal::iso> iso{};
        }
        ///IN Endpoint IPRDYI Automatic Set Enable. 
        enum class AutosetenVal {
            disabled=0x00000000,     ///<The IPRDYI bit is not automatically set by hardware.
            enabled=0x00000001,     ///<The IPRDYI bit is automatically set by hardware.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,AutosetenVal> autoseten{}; 
        namespace AutosetenValC{
            constexpr Register::FieldValue<decltype(autoseten),AutosetenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(autoseten),AutosetenVal::enabled> enabled{};
        }
        ///OUT Packet Ready. 
        enum class OprdyiVal {
            notSet=0x00000000,     ///<A data packet is not available.
            set=0x00000001,     ///<A data packet is available.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,OprdyiVal> oprdyi{}; 
        namespace OprdyiValC{
            constexpr Register::FieldValue<decltype(oprdyi),OprdyiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oprdyi),OprdyiVal::set> set{};
        }
        ///OUT FIFO Full. 
        enum class OfifoffVal {
            notSet=0x00000000,     ///<The OUT endpoint FIFO is not full.
            set=0x00000001,     ///<The OUT endpoint FIFO is full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,OfifoffVal> ofifoff{}; 
        namespace OfifoffValC{
            constexpr Register::FieldValue<decltype(ofifoff),OfifoffVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ofifoff),OfifoffVal::set> set{};
        }
        ///OUT FIFO Overrun Flag. 
        enum class OorfVal {
            notSet=0x00000000,     ///<No data overrun.
            set=0x00000001,     ///<A data packet was lost because of a full FIFO since this flag was last cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,OorfVal> oorf{}; 
        namespace OorfValC{
            constexpr Register::FieldValue<decltype(oorf),OorfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oorf),OorfVal::set> set{};
        }
        ///OUT Data Error Flag. 
        enum class OderrfVal {
            notSet=0x00000000,     ///<A CRC or bit-stuff error has not occurred.
            set=0x00000001,     ///<A CRC or bit-stuff error occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,OderrfVal> oderrf{}; 
        namespace OderrfValC{
            constexpr Register::FieldValue<decltype(oderrf),OderrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oderrf),OderrfVal::set> set{};
        }
        ///OUT FIFO Flush. 
        enum class OfifoflVal {
            set=0x00000001,     ///<Flush the OUT FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OfifoflVal> ofifofl{}; 
        namespace OfifoflValC{
            constexpr Register::FieldValue<decltype(ofifofl),OfifoflVal::set> set{};
        }
        ///OUT Send Stall. 
        enum class OsdstlVal {
            stop=0x00000000,     ///<Stop sending a stall.
            send=0x00000001,     ///<Generate a stall.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,OsdstlVal> osdstl{}; 
        namespace OsdstlValC{
            constexpr Register::FieldValue<decltype(osdstl),OsdstlVal::stop> stop{};
            constexpr Register::FieldValue<decltype(osdstl),OsdstlVal::send> send{};
        }
        ///OUT Sent Stall Interrupt Flag. 
        enum class OststliVal {
            notSet=0x00000000,     ///<Read: A stall condition has not been sent since this bit was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A stall condition has been sent since this bit was last cleared. Write: No effect.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,OststliVal> oststli{}; 
        namespace OststliValC{
            constexpr Register::FieldValue<decltype(oststli),OststliVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oststli),OststliVal::set> set{};
        }
        ///OUT Clear Data Toggle. 
        enum class OclrdtVal {
            noReset=0x00000000,     ///<Do not reset the OUT data toggle.
            reset=0x00000001,     ///<Reset the OUT data toggle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,OclrdtVal> oclrdt{}; 
        namespace OclrdtValC{
            constexpr Register::FieldValue<decltype(oclrdt),OclrdtVal::noReset> noReset{};
            constexpr Register::FieldValue<decltype(oclrdt),OclrdtVal::reset> reset{};
        }
        ///OUT Endpoint DMA Mode. 
        enum class OdmamdVal {
            autoDma=0x00000000,     ///<Automatic DMA service is requested on the last packet of the transfer until less than four bytes remain in the packet. At this time, an interrupt is generated. The firmware must read or write the last few bytes of the packet, if any remain.
            noDma=0x00000001,     ///<No DMA service is requested on the last packet of the transfer. When the DMA recognizes the last packet, an interrupt is generated. The firmware must handle the entirety of the last packet.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,OdmamdVal> odmamd{}; 
        namespace OdmamdValC{
            constexpr Register::FieldValue<decltype(odmamd),OdmamdVal::autoDma> autoDma{};
            constexpr Register::FieldValue<decltype(odmamd),OdmamdVal::noDma> noDma{};
        }
        ///OUT Endpoint DMA Enable. 
        enum class OdmaenVal {
            disabled=0x00000000,     ///<Disable the DMA request for the OUT endpoint.
            enabled=0x00000001,     ///<Enable the DMA request for the OUT endpoint.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,OdmaenVal> odmaen{}; 
        namespace OdmaenValC{
            constexpr Register::FieldValue<decltype(odmaen),OdmaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(odmaen),OdmaenVal::enabled> enabled{};
        }
        ///OUT Isochronous Transfer Enable. 
        enum class OisoenVal {
            bulkInt=0x00000000,     ///<Configure the endpoint for Bulk/Interrupt transfers.
            iso=0x00000001,     ///<Configure the endpoint for Isochronous transfers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,OisoenVal> oisoen{}; 
        namespace OisoenValC{
            constexpr Register::FieldValue<decltype(oisoen),OisoenVal::bulkInt> bulkInt{};
            constexpr Register::FieldValue<decltype(oisoen),OisoenVal::iso> iso{};
        }
        ///OUT Endpoint OPRDYI Auto-Clear Enable. 
        enum class AutoclrenVal {
            disabled=0x00000000,     ///<The OPRDYI bit is not automatically cleared by hardware.
            enabled=0x00000001,     ///<The OPRDYI bit is automatically cleared by hardware.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,AutoclrenVal> autoclren{}; 
        namespace AutoclrenValC{
            constexpr Register::FieldValue<decltype(autoclren),AutoclrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(autoclren),AutoclrenVal::enabled> enabled{};
        }
    }
    namespace Noneepcount3{    ///<Endpoint Data Count
        using Addr = Register::Address<0x400189a0,0xfffffc00,0,unsigned>;
        ///Endpoint OUT Data Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Noneepfifo3{    ///<Endpoint Data FIFO Access
        using Addr = Register::Address<0x400189b0,0x00000000,0,unsigned>;
        ///Endpoint Data FIFO. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifo{}; 
        namespace FifoValC{
        }
    }
    namespace Noneepmpsize4{    ///<Endpoint Maximum Packet Size
        using Addr = Register::Address<0x40018a00,0xff00ff00,0,unsigned>;
        ///IN Maximum Packet Size. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> imaxp{}; 
        namespace ImaxpValC{
        }
        ///OUT Maximum Packet Size. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> omaxp{}; 
        namespace OmaxpValC{
        }
    }
    namespace Noneepcontrol4{    ///<Endpoint Control
        using Addr = Register::Address<0x40018a10,0x0f000380,0,unsigned>;
        ///IN Packet Ready Indicator. 
        enum class IprdyiVal {
            notSet=0x00000000,     ///<The packet has been sent or there is an open FIFO slot.
            set=0x00000001,     ///<A packet is loaded in the FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IprdyiVal> iprdyi{}; 
        namespace IprdyiValC{
            constexpr Register::FieldValue<decltype(iprdyi),IprdyiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(iprdyi),IprdyiVal::set> set{};
        }
        ///IN FIFO Not Empty Flag. 
        enum class IfifonefVal {
            notSet=0x00000000,     ///<The IN Endpoint FIFO is empty.
            set=0x00000001,     ///<The IN Endpoint FIFO contains one or more packets.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IfifonefVal> ififonef{}; 
        namespace IfifonefValC{
            constexpr Register::FieldValue<decltype(ififonef),IfifonefVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ififonef),IfifonefVal::set> set{};
        }
        ///IN FIFO Underrun Flag. 
        enum class IurfVal {
            notSet=0x00000000,     ///<Underrun has not occurred.
            set=0x00000001,     ///<Underrun occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,IurfVal> iurf{}; 
        namespace IurfValC{
            constexpr Register::FieldValue<decltype(iurf),IurfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(iurf),IurfVal::set> set{};
        }
        ///IN FIFO Flush. 
        enum class IfifoflVal {
            set=0x00000001,     ///<Flush the IN FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,IfifoflVal> ififofl{}; 
        namespace IfifoflValC{
            constexpr Register::FieldValue<decltype(ififofl),IfifoflVal::set> set{};
        }
        ///IN Send Stall. 
        enum class IsdstlVal {
            notSet=0x00000000,     ///<Stop sending a stall.
            set=0x00000001,     ///<Generate a stall.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IsdstlVal> isdstl{}; 
        namespace IsdstlValC{
            constexpr Register::FieldValue<decltype(isdstl),IsdstlVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(isdstl),IsdstlVal::set> set{};
        }
        ///IN Sent Stall Interrupt Flag. 
        enum class IststliVal {
            notSet=0x00000000,     ///<Read: A stall condition has not been sent since this bit was last cleared. Write: Clear the interrupt. 
            set=0x00000001,     ///<Read: A stall condition has been sent since this bit was last cleared. Write: No effect.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,IststliVal> iststli{}; 
        namespace IststliValC{
            constexpr Register::FieldValue<decltype(iststli),IststliVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(iststli),IststliVal::set> set{};
        }
        ///IN Clear Data Toggle. 
        enum class IclrdtVal {
            noReset=0x00000000,     ///<Do not reset the IN data toggle.
            reset=0x00000001,     ///<Reset the IN data toggle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,IclrdtVal> iclrdt{}; 
        namespace IclrdtValC{
            constexpr Register::FieldValue<decltype(iclrdt),IclrdtVal::noReset> noReset{};
            constexpr Register::FieldValue<decltype(iclrdt),IclrdtVal::reset> reset{};
        }
        ///FIFO Split Enable. 
        enum class SplitenVal {
            disabled=0x00000000,     ///<Do not split the endpoint FIFO.
            enabled=0x00000001,     ///<Split the endpoint FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,SplitenVal> spliten{}; 
        namespace SplitenValC{
            constexpr Register::FieldValue<decltype(spliten),SplitenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spliten),SplitenVal::enabled> enabled{};
        }
        ///Force Data Toggle Enable. 
        enum class FdtenVal {
            disabled=0x00000000,     ///<The endpoint data toggle switches only when an ACK is received following a data packet transmission.
            enabled=0x00000001,     ///<The endpoint data toggle is forced to switch after every data packet is transmitted, regardless of ACK reception.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,FdtenVal> fdten{}; 
        namespace FdtenValC{
            constexpr Register::FieldValue<decltype(fdten),FdtenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fdten),FdtenVal::enabled> enabled{};
        }
        ///IN Endpoint DMA Enable. 
        enum class IdmaenVal {
            disabled=0x00000000,     ///<Disable the DMA request for the IN endpoint.
            enabled=0x00000001,     ///<Enable the DMA request for the IN endpoint.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,IdmaenVal> idmaen{}; 
        namespace IdmaenValC{
            constexpr Register::FieldValue<decltype(idmaen),IdmaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(idmaen),IdmaenVal::enabled> enabled{};
        }
        ///Endpoint Direction Select. 
        enum class DirselVal {
            out=0x00000000,     ///<Select the endpoint direction as OUT.
            in=0x00000001,     ///<Select the endpoint direction as IN.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,DirselVal> dirsel{}; 
        namespace DirselValC{
            constexpr Register::FieldValue<decltype(dirsel),DirselVal::out> out{};
            constexpr Register::FieldValue<decltype(dirsel),DirselVal::in> in{};
        }
        ///IN Isochronous Transfer Enable. 
        enum class IisoenVal {
            bulkInt=0x00000000,     ///<Configure the endpoint for Bulk/Interrupt transfers.
            iso=0x00000001,     ///<Configure the endpoint for Isochronous transfers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,IisoenVal> iisoen{}; 
        namespace IisoenValC{
            constexpr Register::FieldValue<decltype(iisoen),IisoenVal::bulkInt> bulkInt{};
            constexpr Register::FieldValue<decltype(iisoen),IisoenVal::iso> iso{};
        }
        ///IN Endpoint IPRDYI Automatic Set Enable. 
        enum class AutosetenVal {
            disabled=0x00000000,     ///<The IPRDYI bit is not automatically set by hardware.
            enabled=0x00000001,     ///<The IPRDYI bit is automatically set by hardware.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,AutosetenVal> autoseten{}; 
        namespace AutosetenValC{
            constexpr Register::FieldValue<decltype(autoseten),AutosetenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(autoseten),AutosetenVal::enabled> enabled{};
        }
        ///OUT Packet Ready. 
        enum class OprdyiVal {
            notSet=0x00000000,     ///<A data packet is not available.
            set=0x00000001,     ///<A data packet is available.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,OprdyiVal> oprdyi{}; 
        namespace OprdyiValC{
            constexpr Register::FieldValue<decltype(oprdyi),OprdyiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oprdyi),OprdyiVal::set> set{};
        }
        ///OUT FIFO Full. 
        enum class OfifoffVal {
            notSet=0x00000000,     ///<The OUT endpoint FIFO is not full.
            set=0x00000001,     ///<The OUT endpoint FIFO is full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,OfifoffVal> ofifoff{}; 
        namespace OfifoffValC{
            constexpr Register::FieldValue<decltype(ofifoff),OfifoffVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ofifoff),OfifoffVal::set> set{};
        }
        ///OUT FIFO Overrun Flag. 
        enum class OorfVal {
            notSet=0x00000000,     ///<No data overrun.
            set=0x00000001,     ///<A data packet was lost because of a full FIFO since this flag was last cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,OorfVal> oorf{}; 
        namespace OorfValC{
            constexpr Register::FieldValue<decltype(oorf),OorfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oorf),OorfVal::set> set{};
        }
        ///OUT Data Error Flag. 
        enum class OderrfVal {
            notSet=0x00000000,     ///<A CRC or bit-stuff error has not occurred.
            set=0x00000001,     ///<A CRC or bit-stuff error occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,OderrfVal> oderrf{}; 
        namespace OderrfValC{
            constexpr Register::FieldValue<decltype(oderrf),OderrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oderrf),OderrfVal::set> set{};
        }
        ///OUT FIFO Flush. 
        enum class OfifoflVal {
            set=0x00000001,     ///<Flush the OUT FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OfifoflVal> ofifofl{}; 
        namespace OfifoflValC{
            constexpr Register::FieldValue<decltype(ofifofl),OfifoflVal::set> set{};
        }
        ///OUT Send Stall. 
        enum class OsdstlVal {
            stop=0x00000000,     ///<Stop sending a stall.
            send=0x00000001,     ///<Generate a stall.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,OsdstlVal> osdstl{}; 
        namespace OsdstlValC{
            constexpr Register::FieldValue<decltype(osdstl),OsdstlVal::stop> stop{};
            constexpr Register::FieldValue<decltype(osdstl),OsdstlVal::send> send{};
        }
        ///OUT Sent Stall Interrupt Flag. 
        enum class OststliVal {
            notSet=0x00000000,     ///<Read: A stall condition has not been sent since this bit was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A stall condition has been sent since this bit was last cleared. Write: No effect.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,OststliVal> oststli{}; 
        namespace OststliValC{
            constexpr Register::FieldValue<decltype(oststli),OststliVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oststli),OststliVal::set> set{};
        }
        ///OUT Clear Data Toggle. 
        enum class OclrdtVal {
            noReset=0x00000000,     ///<Do not reset the OUT data toggle.
            reset=0x00000001,     ///<Reset the OUT data toggle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,OclrdtVal> oclrdt{}; 
        namespace OclrdtValC{
            constexpr Register::FieldValue<decltype(oclrdt),OclrdtVal::noReset> noReset{};
            constexpr Register::FieldValue<decltype(oclrdt),OclrdtVal::reset> reset{};
        }
        ///OUT Endpoint DMA Mode. 
        enum class OdmamdVal {
            autoDma=0x00000000,     ///<Automatic DMA service is requested on the last packet of the transfer until less than four bytes remain in the packet. At this time, an interrupt is generated. The firmware must read or write the last few bytes of the packet, if any remain.
            noDma=0x00000001,     ///<No DMA service is requested on the last packet of the transfer. When the DMA recognizes the last packet, an interrupt is generated. The firmware must handle the entirety of the last packet.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,OdmamdVal> odmamd{}; 
        namespace OdmamdValC{
            constexpr Register::FieldValue<decltype(odmamd),OdmamdVal::autoDma> autoDma{};
            constexpr Register::FieldValue<decltype(odmamd),OdmamdVal::noDma> noDma{};
        }
        ///OUT Endpoint DMA Enable. 
        enum class OdmaenVal {
            disabled=0x00000000,     ///<Disable the DMA request for the OUT endpoint.
            enabled=0x00000001,     ///<Enable the DMA request for the OUT endpoint.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,OdmaenVal> odmaen{}; 
        namespace OdmaenValC{
            constexpr Register::FieldValue<decltype(odmaen),OdmaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(odmaen),OdmaenVal::enabled> enabled{};
        }
        ///OUT Isochronous Transfer Enable. 
        enum class OisoenVal {
            bulkInt=0x00000000,     ///<Configure the endpoint for Bulk/Interrupt transfers.
            iso=0x00000001,     ///<Configure the endpoint for Isochronous transfers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,OisoenVal> oisoen{}; 
        namespace OisoenValC{
            constexpr Register::FieldValue<decltype(oisoen),OisoenVal::bulkInt> bulkInt{};
            constexpr Register::FieldValue<decltype(oisoen),OisoenVal::iso> iso{};
        }
        ///OUT Endpoint OPRDYI Auto-Clear Enable. 
        enum class AutoclrenVal {
            disabled=0x00000000,     ///<The OPRDYI bit is not automatically cleared by hardware.
            enabled=0x00000001,     ///<The OPRDYI bit is automatically cleared by hardware.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,AutoclrenVal> autoclren{}; 
        namespace AutoclrenValC{
            constexpr Register::FieldValue<decltype(autoclren),AutoclrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(autoclren),AutoclrenVal::enabled> enabled{};
        }
    }
    namespace Noneepcount4{    ///<Endpoint Data Count
        using Addr = Register::Address<0x40018a20,0xfffffc00,0,unsigned>;
        ///Endpoint OUT Data Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Noneepfifo4{    ///<Endpoint Data FIFO Access
        using Addr = Register::Address<0x40018a30,0x00000000,0,unsigned>;
        ///Endpoint Data FIFO. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifo{}; 
        namespace FifoValC{
        }
    }
}
