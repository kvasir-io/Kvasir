#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonefaddr{    ///<Function Address
        using Addr = Register::Address<0x40018000,0xffffff00,0,unsigned>;
        ///Function Address. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> faddr{}; 
        ///Function Address Update. 
        enum class faddrupdVal {
            notSet=0x00000000,     ///<The last address written to FADDR is in effect.
            set=0x00000001,     ///<The last address written to FADDR is not yet in effect.
        };
        namespace faddrupdValC{
            constexpr MPL::Value<faddrupdVal,faddrupdVal::notSet> notSet{};
            constexpr MPL::Value<faddrupdVal,faddrupdVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,faddrupdVal> faddrupd{}; 
    }
    namespace Nonepower{    ///<Power Control
        using Addr = Register::Address<0x40018010,0xffffff40,0,unsigned>;
        ///Suspend Detection Enable. 
        enum class susdenVal {
            disabled=0x00000000,     ///<Disable suspend detection. The USB module will ignore suspend signaling on the bus.
            enabled=0x00000001,     ///<Enable suspend detection. The USB module will enter suspend mode if it detects suspend signalling on the bus.
        };
        namespace susdenValC{
            constexpr MPL::Value<susdenVal,susdenVal::disabled> disabled{};
            constexpr MPL::Value<susdenVal,susdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,susdenVal> susden{}; 
        ///Suspend Mode Flag. 
        enum class susmdfVal {
            notSet=0x00000000,     ///<The USB module is not in suspend mode.
            set=0x00000001,     ///<The USB module is in suspend mode.
        };
        namespace susmdfValC{
            constexpr MPL::Value<susmdfVal,susmdfVal::notSet> notSet{};
            constexpr MPL::Value<susmdfVal,susmdfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,susmdfVal> susmdf{}; 
        ///Force Resume. 
        enum class resumeVal {
            stop=0x00000000,     ///<None
            generate=0x00000001,     ///<None
        };
        namespace resumeValC{
            constexpr MPL::Value<resumeVal,resumeVal::stop> stop{};
            constexpr MPL::Value<resumeVal,resumeVal::generate> generate{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,resumeVal> resume{}; 
        ///Reset Detect Flag. 
        enum class rstdetfVal {
            notSet=0x00000000,     ///<Reset signaling is not present on the bus.
            set=0x00000001,     ///<Reset signaling detected on the bus.
        };
        namespace rstdetfValC{
            constexpr MPL::Value<rstdetfVal,rstdetfVal::notSet> notSet{};
            constexpr MPL::Value<rstdetfVal,rstdetfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rstdetfVal> rstdetf{}; 
        ///USB Inhibit. 
        enum class usbinhVal {
            inactive=0x00000000,     ///<Enable the USB module.
            active=0x00000001,     ///<USB module inhibited. All USB traffic is ignored.
        };
        namespace usbinhValC{
            constexpr MPL::Value<usbinhVal,usbinhVal::inactive> inactive{};
            constexpr MPL::Value<usbinhVal,usbinhVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,usbinhVal> usbinh{}; 
        ///USB Dither Enable. 
        enum class dithenVal {
            disabled=0x00000000,     ///<Disable automatic USB dithering.
            enabled=0x00000001,     ///<Enable automatic USB dithering.
        };
        namespace dithenValC{
            constexpr MPL::Value<dithenVal,dithenVal::disabled> disabled{};
            constexpr MPL::Value<dithenVal,dithenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,dithenVal> dithen{}; 
        ///ISO Update Mode. 
        enum class isoupdmdVal {
            sendOnIn=0x00000000,     ///<When software writes IPRDYI = 1, USB will send the packet when the next IN token is received.
            sendOnSof=0x00000001,     ///<When software writes IPRDYI = 1, USB will wait for a SOF token before sending the packet. If an IN token is received before a SOF token, USB will send a zero-length data packet.
        };
        namespace isoupdmdValC{
            constexpr MPL::Value<isoupdmdVal,isoupdmdVal::sendOnIn> sendOnIn{};
            constexpr MPL::Value<isoupdmdVal,isoupdmdVal::sendOnSof> sendOnSof{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,isoupdmdVal> isoupdmd{}; 
    }
    namespace Noneioint{    ///<IN/OUT Endpoint Interrupt Flags
        using Addr = Register::Address<0x40018020,0xffe1ffe0,0,unsigned>;
        ///Endpoint 0 Interrupt Flag. 
        enum class ep0iVal {
            notSet=0x00000000,     ///<Read: Endpoint 0 interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: Endpoint 0 interrupt occurred. Write: Clear the interrupt.
        };
        namespace ep0iValC{
            constexpr MPL::Value<ep0iVal,ep0iVal::notSet> notSet{};
            constexpr MPL::Value<ep0iVal,ep0iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ep0iVal> ep0i{}; 
        ///IN Endpoint 1 Interrupt Flag. 
        enum class in1iVal {
            notSet=0x00000000,     ///<Read: IN Endpoint 1 interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: IN Endpoint 1 interrupt occurred. Write: Clear the interrupt.
        };
        namespace in1iValC{
            constexpr MPL::Value<in1iVal,in1iVal::notSet> notSet{};
            constexpr MPL::Value<in1iVal,in1iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,in1iVal> in1i{}; 
        ///IN Endpoint 2 Interrupt Flag. 
        enum class in2iVal {
            notSet=0x00000000,     ///<Read: IN Endpoint 2 interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: IN Endpoint 2 interrupt occurred. Write: Clear the interrupt.
        };
        namespace in2iValC{
            constexpr MPL::Value<in2iVal,in2iVal::notSet> notSet{};
            constexpr MPL::Value<in2iVal,in2iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,in2iVal> in2i{}; 
        ///IN Endpoint 3 Interrupt Flag. 
        enum class in3iVal {
            notSet=0x00000000,     ///<Read: IN Endpoint 3 interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: IN Endpoint 3 interrupt occurred. Write: Clear the interrupt.
        };
        namespace in3iValC{
            constexpr MPL::Value<in3iVal,in3iVal::notSet> notSet{};
            constexpr MPL::Value<in3iVal,in3iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,in3iVal> in3i{}; 
        ///IN Endpoint 4 Interrupt Flag. 
        enum class in4iVal {
            notSet=0x00000000,     ///<Read: IN Endpoint 4 interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: IN Endpoint 4 interrupt occurred. Write: Clear the interrupt.
        };
        namespace in4iValC{
            constexpr MPL::Value<in4iVal,in4iVal::notSet> notSet{};
            constexpr MPL::Value<in4iVal,in4iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,in4iVal> in4i{}; 
        ///OUT Endpoint 1 Interrupt Flag. 
        enum class out1iVal {
            notSet=0x00000000,     ///<Read: OUT Endpoint 1 interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: OUT Endpoint 1 interrupt occurred. Write: Clear the interrupt.
        };
        namespace out1iValC{
            constexpr MPL::Value<out1iVal,out1iVal::notSet> notSet{};
            constexpr MPL::Value<out1iVal,out1iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,out1iVal> out1i{}; 
        ///OUT Endpoint 2 Interrupt Flag. 
        enum class out2iVal {
            notSet=0x00000000,     ///<Read: OUT Endpoint 2 interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: OUT Endpoint 2 interrupt occurred. Write: Clear the interrupt.
        };
        namespace out2iValC{
            constexpr MPL::Value<out2iVal,out2iVal::notSet> notSet{};
            constexpr MPL::Value<out2iVal,out2iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,out2iVal> out2i{}; 
        ///OUT Endpoint 3 Interrupt Flag. 
        enum class out3iVal {
            notSet=0x00000000,     ///<Read: OUT Endpoint 3 interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: OUT Endpoint 3 interrupt occurred. Write: Clear the interrupt.
        };
        namespace out3iValC{
            constexpr MPL::Value<out3iVal,out3iVal::notSet> notSet{};
            constexpr MPL::Value<out3iVal,out3iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,out3iVal> out3i{}; 
        ///OUT Endpoint 4 Interrupt Flag. 
        enum class out4iVal {
            notSet=0x00000000,     ///<Read: OUT Endpoint 4 interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: OUT Endpoint 4 interrupt occurred. Write: Clear the interrupt.
        };
        namespace out4iValC{
            constexpr MPL::Value<out4iVal,out4iVal::notSet> notSet{};
            constexpr MPL::Value<out4iVal,out4iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,out4iVal> out4i{}; 
    }
    namespace Nonecmint{    ///<Common Interrupt Flags
        using Addr = Register::Address<0x40018030,0xfffffff0,0,unsigned>;
        ///Suspend Interrupt Flag. 
        enum class susiVal {
            notSet=0x00000000,     ///<Read: Suspend interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: Suspend interrupt occurred. Write: Clear the interrupt.
        };
        namespace susiValC{
            constexpr MPL::Value<susiVal,susiVal::notSet> notSet{};
            constexpr MPL::Value<susiVal,susiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,susiVal> susi{}; 
        ///Resume Interrupt Flag. 
        enum class resiVal {
            notSet=0x00000000,     ///<Read: Resume interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: Resume interrupt occurred. Write: Clear the interrupt.
        };
        namespace resiValC{
            constexpr MPL::Value<resiVal,resiVal::notSet> notSet{};
            constexpr MPL::Value<resiVal,resiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,resiVal> resi{}; 
        ///Reset Interrupt Flag. 
        enum class rstiVal {
            notSet=0x00000000,     ///<Read: Reset interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: Reset interrupt occurred. Write: Clear the interrupt.
        };
        namespace rstiValC{
            constexpr MPL::Value<rstiVal,rstiVal::notSet> notSet{};
            constexpr MPL::Value<rstiVal,rstiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rstiVal> rsti{}; 
        ///Start of Frame Interrupt Flag. 
        enum class sofiVal {
            notSet=0x00000000,     ///<Read: SOF interrupt has not occurred. Write: No effect.
            set=0x00000001,     ///<Read: SOF interrupt occurred. Write: Clear the interrupt.
        };
        namespace sofiValC{
            constexpr MPL::Value<sofiVal,sofiVal::notSet> notSet{};
            constexpr MPL::Value<sofiVal,sofiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,sofiVal> sofi{}; 
    }
    namespace Noneiointe{    ///<IN/OUT Endpoint Interrupt Control
        using Addr = Register::Address<0x40018040,0xffe1ffe0,0,unsigned>;
        ///Endpoint 0 Interrupt Enable. 
        enum class ep0ienVal {
            disabled=0x00000000,     ///<Disable the Endpoint 0 interrupt.
            enabled=0x00000001,     ///<Enable the Endpoint 0 interrupt.
        };
        namespace ep0ienValC{
            constexpr MPL::Value<ep0ienVal,ep0ienVal::disabled> disabled{};
            constexpr MPL::Value<ep0ienVal,ep0ienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ep0ienVal> ep0ien{}; 
        ///IN Endpoint 1 Interrupt Enable. 
        enum class in1ienVal {
            disabled=0x00000000,     ///<Disable the IN Endpoint 1 interrupt.
            enabled=0x00000001,     ///<Enable the IN Endpoint 1 interrupt.
        };
        namespace in1ienValC{
            constexpr MPL::Value<in1ienVal,in1ienVal::disabled> disabled{};
            constexpr MPL::Value<in1ienVal,in1ienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,in1ienVal> in1ien{}; 
        ///IN Endpoint 2 Interrupt Enable. 
        enum class in2ienVal {
            disabled=0x00000000,     ///<Disable the IN Endpoint 2 interrupt.
            enabled=0x00000001,     ///<Enable the IN Endpoint 2 interrupt.
        };
        namespace in2ienValC{
            constexpr MPL::Value<in2ienVal,in2ienVal::disabled> disabled{};
            constexpr MPL::Value<in2ienVal,in2ienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,in2ienVal> in2ien{}; 
        ///IN Endpoint 3 Interrupt Enable. 
        enum class in3ienVal {
            disabled=0x00000000,     ///<Disable the IN Endpoint 3 interrupt.
            enabled=0x00000001,     ///<Enable the IN Endpoint 3 interrupt.
        };
        namespace in3ienValC{
            constexpr MPL::Value<in3ienVal,in3ienVal::disabled> disabled{};
            constexpr MPL::Value<in3ienVal,in3ienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,in3ienVal> in3ien{}; 
        ///IN Endpoint 4 Interrupt Enable. 
        enum class in4ienVal {
            disabled=0x00000000,     ///<Disable the IN Endpoint 4 interrupt.
            enabled=0x00000001,     ///<Enable the IN Endpoint 4 interrupt.
        };
        namespace in4ienValC{
            constexpr MPL::Value<in4ienVal,in4ienVal::disabled> disabled{};
            constexpr MPL::Value<in4ienVal,in4ienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,in4ienVal> in4ien{}; 
        ///OUT Endpoint 1 Interrupt Enable. 
        enum class out1ienVal {
            disabled=0x00000000,     ///<Disable the OUT Endpoint 1 interrupt.
            enabled=0x00000001,     ///<Enable the OUT Endpoint 1 interrupt.
        };
        namespace out1ienValC{
            constexpr MPL::Value<out1ienVal,out1ienVal::disabled> disabled{};
            constexpr MPL::Value<out1ienVal,out1ienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,out1ienVal> out1ien{}; 
        ///OUT Endpoint 2 Interrupt Enable. 
        enum class out2ienVal {
            disabled=0x00000000,     ///<Disable the OUT Endpoint 2 interrupt.
            enabled=0x00000001,     ///<Enable the OUT Endpoint 2 interrupt.
        };
        namespace out2ienValC{
            constexpr MPL::Value<out2ienVal,out2ienVal::disabled> disabled{};
            constexpr MPL::Value<out2ienVal,out2ienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,out2ienVal> out2ien{}; 
        ///OUT Endpoint 3 Interrupt Enable. 
        enum class out3ienVal {
            disabled=0x00000000,     ///<Disable the OUT Endpoint 3 interrupt.
            enabled=0x00000001,     ///<Enable the OUT Endpoint 3 interrupt.
        };
        namespace out3ienValC{
            constexpr MPL::Value<out3ienVal,out3ienVal::disabled> disabled{};
            constexpr MPL::Value<out3ienVal,out3ienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,out3ienVal> out3ien{}; 
        ///OUT Endpoint 4 Interrupt Enable. 
        enum class out4ienVal {
            disabled=0x00000000,     ///<Disable the OUT Endpoint 4 interrupt.
            enabled=0x00000001,     ///<Enable the OUT Endpoint 4 interrupt.
        };
        namespace out4ienValC{
            constexpr MPL::Value<out4ienVal,out4ienVal::disabled> disabled{};
            constexpr MPL::Value<out4ienVal,out4ienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,out4ienVal> out4ien{}; 
    }
    namespace Nonecmintepe{    ///<Common Interrupt and Endpoint Control
        using Addr = Register::Address<0x40018050,0xffe0fff0,0,unsigned>;
        ///Suspend Interrupt Enable. 
        enum class susienVal {
            disabled=0x00000000,     ///<Disable the Suspend interrupt.
            enabled=0x00000001,     ///<Enable the Suspend interrupt.
        };
        namespace susienValC{
            constexpr MPL::Value<susienVal,susienVal::disabled> disabled{};
            constexpr MPL::Value<susienVal,susienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,susienVal> susien{}; 
        ///Resume Interrupt Enable. 
        enum class resienVal {
            disabled=0x00000000,     ///<Disable the Resume interrupt.
            enabled=0x00000001,     ///<Enable the Resume interrupt.
        };
        namespace resienValC{
            constexpr MPL::Value<resienVal,resienVal::disabled> disabled{};
            constexpr MPL::Value<resienVal,resienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,resienVal> resien{}; 
        ///Reset Interrupt Enable. 
        enum class rstienVal {
            disabled=0x00000000,     ///<Disable the Reset interrupt.
            enabled=0x00000001,     ///<Enable the Reset interrupt.
        };
        namespace rstienValC{
            constexpr MPL::Value<rstienVal,rstienVal::disabled> disabled{};
            constexpr MPL::Value<rstienVal,rstienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rstienVal> rstien{}; 
        ///Start of Frame Interrupt Enable. 
        enum class sofienVal {
            disabled=0x00000000,     ///<Disable the SOF interrupt.
            enabled=0x00000001,     ///<Enable the SOF interrupt.
        };
        namespace sofienValC{
            constexpr MPL::Value<sofienVal,sofienVal::disabled> disabled{};
            constexpr MPL::Value<sofienVal,sofienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,sofienVal> sofien{}; 
        ///Endpoint 0 Enable. 
        enum class ep0enVal {
            disabled=0x00000000,     ///<Disable Endpoint 0 (no NACK, ACK, or STALL on the USB network).
            enabled=0x00000001,     ///<Enable Endpoint 0 (normal).
        };
        namespace ep0enValC{
            constexpr MPL::Value<ep0enVal,ep0enVal::disabled> disabled{};
            constexpr MPL::Value<ep0enVal,ep0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ep0enVal> ep0en{}; 
        ///Endpoint 1 Enable. 
        enum class ep1enVal {
            disabled=0x00000000,     ///<Disable Endpoint 1 (no NACK, ACK, or STALL on the USB network).
            enabled=0x00000001,     ///<Enable Endpoint 1 (normal).
        };
        namespace ep1enValC{
            constexpr MPL::Value<ep1enVal,ep1enVal::disabled> disabled{};
            constexpr MPL::Value<ep1enVal,ep1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ep1enVal> ep1en{}; 
        ///Endpoint 2 Enable. 
        enum class ep2enVal {
            disabled=0x00000000,     ///<Disable Endpoint 2 (no NACK, ACK, or STALL on the USB network).
            enabled=0x00000001,     ///<Enable Endpoint 2 (normal).
        };
        namespace ep2enValC{
            constexpr MPL::Value<ep2enVal,ep2enVal::disabled> disabled{};
            constexpr MPL::Value<ep2enVal,ep2enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ep2enVal> ep2en{}; 
        ///Endpoint 3 Enable. 
        enum class ep3enVal {
            disabled=0x00000000,     ///<Disable Endpoint 3 (no NACK, ACK, or STALL on the USB network).
            enabled=0x00000001,     ///<Enable Endpoint 3 (normal).
        };
        namespace ep3enValC{
            constexpr MPL::Value<ep3enVal,ep3enVal::disabled> disabled{};
            constexpr MPL::Value<ep3enVal,ep3enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ep3enVal> ep3en{}; 
        ///Endpoint 4 Enable. 
        enum class ep4enVal {
            disabled=0x00000000,     ///<Disable Endpoint 4 (no NACK, ACK, or STALL on the USB network).
            enabled=0x00000001,     ///<Enable Endpoint 4 (normal).
        };
        namespace ep4enValC{
            constexpr MPL::Value<ep4enVal,ep4enVal::disabled> disabled{};
            constexpr MPL::Value<ep4enVal,ep4enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ep4enVal> ep4en{}; 
    }
    namespace Nonecrcontrol{    ///<Clock Recovery Control
        using Addr = Register::Address<0x40018060,0xffffff0f,0,unsigned>;
        ///Oscillator Open-Loop Mode Enable. 
        enum class olenVal {
            disabled=0x00000000,     ///<Do not freeze the USB oscillator output frequency (closed loop mode).
            enabled=0x00000001,     ///<Freeze the USB oscillator output frequency (open loop mode).
        };
        namespace olenValC{
            constexpr MPL::Value<olenVal,olenVal::disabled> disabled{};
            constexpr MPL::Value<olenVal,olenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,olenVal> olen{}; 
        ///Low Speed Clock Recovery Mode. 
        enum class lscrmdVal {
            fullSpeed=0x00000000,     ///<Full Speed Mode.
            lowSpeed=0x00000001,     ///<Low Speed Mode.
        };
        namespace lscrmdValC{
            constexpr MPL::Value<lscrmdVal,lscrmdVal::fullSpeed> fullSpeed{};
            constexpr MPL::Value<lscrmdVal,lscrmdVal::lowSpeed> lowSpeed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,lscrmdVal> lscrmd{}; 
        ///Clock Recovery Single Step Enable. 
        enum class crssenVal {
            disabled=0x00000000,     ///<Normal calibration mode.
            enabled=0x00000001,     ///<Single step mode.
        };
        namespace crssenValC{
            constexpr MPL::Value<crssenVal,crssenVal::disabled> disabled{};
            constexpr MPL::Value<crssenVal,crssenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,crssenVal> crssen{}; 
        ///Clock Recovery Enable. 
        enum class crenVal {
            disabled=0x00000000,     ///<Disable clock recovery.
            enabled=0x00000001,     ///<Enable clock recovery.
        };
        namespace crenValC{
            constexpr MPL::Value<crenVal,crenVal::disabled> disabled{};
            constexpr MPL::Value<crenVal,crenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,crenVal> cren{}; 
    }
    namespace Noneframe{    ///<Frame Number
        using Addr = Register::Address<0x40018070,0xfffff800,0,unsigned>;
        ///Frame Number. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> framenum{}; 
    }
    namespace Nonetcontrol{    ///<Transceiver Control
        using Addr = Register::Address<0x40018200,0xffffff00,0,unsigned>;
        ///D- Signal State. 
        enum class dnVal {
            logic0=0x00000000,     ///<D- signal currently at logic 0.
            logic1=0x00000001,     ///<D- signal currently at logic 1.
        };
        namespace dnValC{
            constexpr MPL::Value<dnVal,dnVal::logic0> logic0{};
            constexpr MPL::Value<dnVal,dnVal::logic1> logic1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dnVal> dn{}; 
        ///D+ Signal State. 
        enum class dpVal {
            logic0=0x00000000,     ///<D+ signal currently at logic 0.
            logic1=0x00000001,     ///<D+ signal currently at logic 1.
        };
        namespace dpValC{
            constexpr MPL::Value<dpVal,dpVal::logic0> logic0{};
            constexpr MPL::Value<dpVal,dpVal::logic1> logic1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dpVal> dp{}; 
        ///Differential Receiver State. 
        enum class dfrecVal {
            diff0=0x00000000,     ///<Differential 0 signalling is present on the bus.
            diff1=0x00000001,     ///<Differential 1 signalling is present on the bus.
        };
        namespace dfrecValC{
            constexpr MPL::Value<dfrecVal,dfrecVal::diff0> diff0{};
            constexpr MPL::Value<dfrecVal,dfrecVal::diff1> diff1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,dfrecVal> dfrec{}; 
        ///Physical Layer Test. 
        enum class phytstVal {
            mode0=0x00000000,     ///<Mode 0: Normal (non-test mode) (D+ = X, D- = X).
            mode1=0x00000001,     ///<Mode 1: Differential 1 Forced (D+ = 1, D- = 0).
            mode2=0x00000002,     ///<Mode 2: Differential 0 Forced (D+ = 0, D- = 1).
            mode3=0x00000003,     ///<Mode 3: Single-Ended 0 Forced (D+ = 0, D- = 0).
        };
        namespace phytstValC{
            constexpr MPL::Value<phytstVal,phytstVal::mode0> mode0{};
            constexpr MPL::Value<phytstVal,phytstVal::mode1> mode1{};
            constexpr MPL::Value<phytstVal,phytstVal::mode2> mode2{};
            constexpr MPL::Value<phytstVal,phytstVal::mode3> mode3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,phytstVal> phytst{}; 
        ///USB Speed Select. 
        enum class sselVal {
            lowSpeed=0x00000000,     ///<USB operates as a Low Speed device. If enabled, the internal pull-up resistor appears on the D- line.
            fullSpeed=0x00000001,     ///<USB operates as a Full Speed device. If enabled, the internal pull-up resistor appears on the D+ line.
        };
        namespace sselValC{
            constexpr MPL::Value<sselVal,sselVal::lowSpeed> lowSpeed{};
            constexpr MPL::Value<sselVal,sselVal::fullSpeed> fullSpeed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sselVal> ssel{}; 
        ///Physical Layer Enable. 
        enum class phyenVal {
            disabled=0x00000000,     ///<Disable the USB physical layer Transceiver (suspend).
            enabled=0x00000001,     ///<Enable the USB physical layer Transceiver (normal).
        };
        namespace phyenValC{
            constexpr MPL::Value<phyenVal,phyenVal::disabled> disabled{};
            constexpr MPL::Value<phyenVal,phyenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,phyenVal> phyen{}; 
        ///Internal Pull-up Resistor Enable. 
        enum class puenVal {
            disabled=0x00000000,     ///<Disable the internal pull-up resistor (device effectively detached from the USB network).
            enabled=0x00000001,     ///<Enable the internal pull-up resistor when VBUS is present (device is attached to the USB network).
        };
        namespace puenValC{
            constexpr MPL::Value<puenVal,puenVal::disabled> disabled{};
            constexpr MPL::Value<puenVal,puenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,puenVal> puen{}; 
    }
    namespace Noneclksel{    ///<Module Clock Select
        using Addr = Register::Address<0x40018300,0xffffff8c,0,unsigned>;
        ///USB Clock Select. 
        enum class clkselVal {
            usbnosc=0x00000000,     ///<Select the USB Oscillator as the USB clock.
            pllnosc=0x00000001,     ///<Select the PLL output as the USB clock.
            extoscn=0x00000002,     ///<Select the External Oscillator output (EXTOSCn) as the USB clock.
        };
        namespace clkselValC{
            constexpr MPL::Value<clkselVal,clkselVal::usbnosc> usbnosc{};
            constexpr MPL::Value<clkselVal,clkselVal::pllnosc> pllnosc{};
            constexpr MPL::Value<clkselVal,clkselVal::extoscn> extoscn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,clkselVal> clksel{}; 
        ///USB Clock Divider. 
        enum class clkdivVal {
            div1=0x00000000,     ///<The USB module uses the selected input clock divided by 1.
            div2=0x00000001,     ///<The USB module uses the selected input clock divided by 2.
            div4=0x00000002,     ///<The USB module uses the selected input clock divided by 4.
            div8=0x00000003,     ///<The USB module uses the selected input clock divided by 8.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::div1> div1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::div2> div2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::div4> div4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::div8> div8{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
        ///USB Reset. 
        enum class resetVal {
            notSet=0x00000000,     ///<Do not reset the USB module.
            set=0x00000001,     ///<Reset the USB module.
        };
        namespace resetValC{
            constexpr MPL::Value<resetVal,resetVal::notSet> notSet{};
            constexpr MPL::Value<resetVal,resetVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,resetVal> reset{}; 
    }
    namespace Noneosccontrol{    ///<Oscillator Control
        using Addr = Register::Address<0x40018310,0xffffff5f,0,unsigned>;
        ///USB Oscillator Suspend. 
        enum class suspendVal {
            disabled=0x00000000,     ///<The USB oscillator is not suspended.
            enabled=0x00000001,     ///<Suspend the USB oscillator.
        };
        namespace suspendValC{
            constexpr MPL::Value<suspendVal,suspendVal::disabled> disabled{};
            constexpr MPL::Value<suspendVal,suspendVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,suspendVal> suspend{}; 
        ///USB Oscillator Enable. 
        enum class oscenVal {
            disabled=0x00000000,     ///<Disable the USB oscillator.
            enabled=0x00000001,     ///<Enable the USB oscillator.
        };
        namespace oscenValC{
            constexpr MPL::Value<oscenVal,oscenVal::disabled> disabled{};
            constexpr MPL::Value<oscenVal,oscenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,oscenVal> oscen{}; 
    }
    namespace Noneafadjust{    ///<Oscillator Additional Frequency Adjust
        using Addr = Register::Address<0x40018320,0xffffff80,0,unsigned>;
        ///USB Oscillator Fine Output Frequency Adjust. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> finefadj{}; 
        ///USB Oscillator Dithering Enable. 
        enum class dithenVal {
            disabled=0x00000000,     ///<Disable USB oscillator dithering.
            enabled=0x00000001,     ///<Enable USB oscillator dithering.
        };
        namespace dithenValC{
            constexpr MPL::Value<dithenVal,dithenVal::disabled> disabled{};
            constexpr MPL::Value<dithenVal,dithenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dithenVal> dithen{}; 
    }
    namespace Nonefadjust{    ///<Oscillator Frequency Adjust
        using Addr = Register::Address<0x40018330,0xffffff80,0,unsigned>;
        ///Oscillator Output Frequency Adjust. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> fadj{}; 
    }
    namespace Nonedmafifo{    ///<DMA Data FIFO Access
        using Addr = Register::Address<0x40018400,0x00000000,0,unsigned>;
        ///DMA Data FIFO Access. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmafifo{}; 
    }
    namespace Nonedmacontrol{    ///<DMA Control
        using Addr = Register::Address<0x40018410,0xffffff0f,0,unsigned>;
        ///USB DMA Debug Mode. 
        enum class dbgmdVal {
            run=0x00000000,     ///<The USB module will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will prevent the USB DMA buffer from transferring data to and from the USB FIFOs when the core is halted.
        };
        namespace dbgmdValC{
            constexpr MPL::Value<dbgmdVal,dbgmdVal::run> run{};
            constexpr MPL::Value<dbgmdVal,dbgmdVal::halt> halt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,dbgmdVal> dbgmd{}; 
        ///Timeout Error Flag. 
        enum class terrfVal {
            notSet=0x00000000,     ///<A timeout error has not occurred.
            set=0x00000001,     ///<A timeout error occurred.
        };
        namespace terrfValC{
            constexpr MPL::Value<terrfVal,terrfVal::notSet> notSet{};
            constexpr MPL::Value<terrfVal,terrfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,terrfVal> terrf{}; 
        ///USB DMA Busy Flag. 
        enum class dbusyfVal {
            notSet=0x00000000,     ///<The DMA buffer is not busy.
            set=0x00000001,     ///<The DMA buffer is busy reading or writing an 8-word packet.
        };
        namespace dbusyfValC{
            constexpr MPL::Value<dbusyfVal,dbusyfVal::notSet> notSet{};
            constexpr MPL::Value<dbusyfVal,dbusyfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dbusyfVal> dbusyf{}; 
        ///USB DMA Buffer Flush Control. 
        enum class dfifoflVal {
            set=0x00000001,     ///<Flush the USB DMA buffer.
        };
        namespace dfifoflValC{
            constexpr MPL::Value<dfifoflVal,dfifoflVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,dfifoflVal> dfifofl{}; 
    }
    namespace Noneep0control{    ///<Endpoint 0 Control
        using Addr = Register::Address<0x40018810,0xffffff00,0,unsigned>;
        ///OUT Packet Ready Interrupt Flag. 
        enum class oprdyiVal {
            notSet=0x00000000,     ///<A packet is not available.
            set=0x00000001,     ///<A packet is available.
        };
        namespace oprdyiValC{
            constexpr MPL::Value<oprdyiVal,oprdyiVal::notSet> notSet{};
            constexpr MPL::Value<oprdyiVal,oprdyiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,oprdyiVal> oprdyi{}; 
        ///IN Packet Ready Indicator. 
        enum class iprdyiVal {
            notSet=0x00000000,     ///<A packet is not ready for transmission to host.
            set=0x00000001,     ///<A packet is ready for transmission to host.
        };
        namespace iprdyiValC{
            constexpr MPL::Value<iprdyiVal,iprdyiVal::notSet> notSet{};
            constexpr MPL::Value<iprdyiVal,iprdyiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,iprdyiVal> iprdyi{}; 
        ///Sent Stall Interrupt Flag. 
        enum class ststliVal {
            notSet=0x00000000,     ///<Read: A STALL handshake has not been sent or is cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: STALL handshake sent. Write: No effect.
        };
        namespace ststliValC{
            constexpr MPL::Value<ststliVal,ststliVal::notSet> notSet{};
            constexpr MPL::Value<ststliVal,ststliVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ststliVal> ststli{}; 
        ///Data End. 
        enum class dendVal {
            notSet=0x00000000,     ///<The current packet is not the last packet of the transfer.
            set=0x00000001,     ///<The current packet is the last packet of the transfer.
        };
        namespace dendValC{
            constexpr MPL::Value<dendVal,dendVal::notSet> notSet{};
            constexpr MPL::Value<dendVal,dendVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dendVal> dend{}; 
        ///Setup End Interrupt Flag. 
        enum class suendiVal {
            notSet=0x00000000,     ///<The current packet is not the last packet of setup.
            set=0x00000001,     ///<The current packet is the last packet of setup.
        };
        namespace suendiValC{
            constexpr MPL::Value<suendiVal,suendiVal::notSet> notSet{};
            constexpr MPL::Value<suendiVal,suendiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,suendiVal> suendi{}; 
        ///Send Stall. 
        enum class sdstlVal {
            notSet=0x00000000,     ///<The STALL handshake has been transmitted or not triggered.
            set=0x00000001,     ///<Initiate a STALL condition.
        };
        namespace sdstlValC{
            constexpr MPL::Value<sdstlVal,sdstlVal::notSet> notSet{};
            constexpr MPL::Value<sdstlVal,sdstlVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sdstlVal> sdstl{}; 
        ///Serviced Out Packet Ready Interrupt Flag. 
        enum class oprdyisVal {
            notSet=0x00000000,     ///<The out packet has not been processed.
            set=0x00000001,     ///<The out packet has been received and accepted.
        };
        namespace oprdyisValC{
            constexpr MPL::Value<oprdyisVal,oprdyisVal::notSet> notSet{};
            constexpr MPL::Value<oprdyisVal,oprdyisVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,oprdyisVal> oprdyis{}; 
        ///Serviced Setup End Interrupt Flag. 
        enum class suendisVal {
            notSet=0x00000000,     ///<Setup end has not been serviced.
            set=0x00000001,     ///<Setup end has been serviced.
        };
        namespace suendisValC{
            constexpr MPL::Value<suendisVal,suendisVal::notSet> notSet{};
            constexpr MPL::Value<suendisVal,suendisVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,suendisVal> suendis{}; 
    }
    namespace Noneep0count{    ///<Endpoint 0 Data Count
        using Addr = Register::Address<0x40018820,0xffffff80,0,unsigned>;
        ///Endpoint 0 OUT Data Count. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Noneep0fifo{    ///<Endpoint 0 Data FIFO Access
        using Addr = Register::Address<0x40018830,0x00000000,0,unsigned>;
        ///Endpoint 0 Data FIFO. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifo{}; 
    }
    namespace Noneepmpsize1{    ///<Endpoint Maximum Packet Size
        using Addr = Register::Address<0x40018880,0xff00ff00,0,unsigned>;
        ///IN Maximum Packet Size. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> imaxp{}; 
        ///OUT Maximum Packet Size. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> omaxp{}; 
    }
    namespace Noneepcontrol1{    ///<Endpoint Control
        using Addr = Register::Address<0x40018890,0x0f000380,0,unsigned>;
        ///IN Packet Ready Indicator. 
        enum class iprdyiVal {
            notSet=0x00000000,     ///<The packet has been sent or there is an open FIFO slot.
            set=0x00000001,     ///<A packet is loaded in the FIFO.
        };
        namespace iprdyiValC{
            constexpr MPL::Value<iprdyiVal,iprdyiVal::notSet> notSet{};
            constexpr MPL::Value<iprdyiVal,iprdyiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,iprdyiVal> iprdyi{}; 
        ///IN FIFO Not Empty Flag. 
        enum class ififonefVal {
            notSet=0x00000000,     ///<The IN Endpoint FIFO is empty.
            set=0x00000001,     ///<The IN Endpoint FIFO contains one or more packets.
        };
        namespace ififonefValC{
            constexpr MPL::Value<ififonefVal,ififonefVal::notSet> notSet{};
            constexpr MPL::Value<ififonefVal,ififonefVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ififonefVal> ififonef{}; 
        ///IN FIFO Underrun Flag. 
        enum class iurfVal {
            notSet=0x00000000,     ///<Underrun has not occurred.
            set=0x00000001,     ///<Underrun occurred.
        };
        namespace iurfValC{
            constexpr MPL::Value<iurfVal,iurfVal::notSet> notSet{};
            constexpr MPL::Value<iurfVal,iurfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,iurfVal> iurf{}; 
        ///IN FIFO Flush. 
        enum class ififoflVal {
            set=0x00000001,     ///<Flush the IN FIFO.
        };
        namespace ififoflValC{
            constexpr MPL::Value<ififoflVal,ififoflVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ififoflVal> ififofl{}; 
        ///IN Send Stall. 
        enum class isdstlVal {
            notSet=0x00000000,     ///<Stop sending a stall.
            set=0x00000001,     ///<Generate a stall.
        };
        namespace isdstlValC{
            constexpr MPL::Value<isdstlVal,isdstlVal::notSet> notSet{};
            constexpr MPL::Value<isdstlVal,isdstlVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,isdstlVal> isdstl{}; 
        ///IN Sent Stall Interrupt Flag. 
        enum class iststliVal {
            notSet=0x00000000,     ///<Read: A stall condition has not been sent since this bit was last cleared. Write: Clear the interrupt. 
            set=0x00000001,     ///<Read: A stall condition has been sent since this bit was last cleared. Write: No effect.
        };
        namespace iststliValC{
            constexpr MPL::Value<iststliVal,iststliVal::notSet> notSet{};
            constexpr MPL::Value<iststliVal,iststliVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,iststliVal> iststli{}; 
        ///IN Clear Data Toggle. 
        enum class iclrdtVal {
            noReset=0x00000000,     ///<Do not reset the IN data toggle.
            reset=0x00000001,     ///<Reset the IN data toggle.
        };
        namespace iclrdtValC{
            constexpr MPL::Value<iclrdtVal,iclrdtVal::noReset> noReset{};
            constexpr MPL::Value<iclrdtVal,iclrdtVal::reset> reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,iclrdtVal> iclrdt{}; 
        ///FIFO Split Enable. 
        enum class splitenVal {
            disabled=0x00000000,     ///<Do not split the endpoint FIFO.
            enabled=0x00000001,     ///<Split the endpoint FIFO.
        };
        namespace splitenValC{
            constexpr MPL::Value<splitenVal,splitenVal::disabled> disabled{};
            constexpr MPL::Value<splitenVal,splitenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,splitenVal> spliten{}; 
        ///Force Data Toggle Enable. 
        enum class fdtenVal {
            disabled=0x00000000,     ///<The endpoint data toggle switches only when an ACK is received following a data packet transmission.
            enabled=0x00000001,     ///<The endpoint data toggle is forced to switch after every data packet is transmitted, regardless of ACK reception.
        };
        namespace fdtenValC{
            constexpr MPL::Value<fdtenVal,fdtenVal::disabled> disabled{};
            constexpr MPL::Value<fdtenVal,fdtenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,fdtenVal> fdten{}; 
        ///IN Endpoint DMA Enable. 
        enum class idmaenVal {
            disabled=0x00000000,     ///<Disable the DMA request for the IN endpoint.
            enabled=0x00000001,     ///<Enable the DMA request for the IN endpoint.
        };
        namespace idmaenValC{
            constexpr MPL::Value<idmaenVal,idmaenVal::disabled> disabled{};
            constexpr MPL::Value<idmaenVal,idmaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,idmaenVal> idmaen{}; 
        ///Endpoint Direction Select. 
        enum class dirselVal {
            out=0x00000000,     ///<Select the endpoint direction as OUT.
            in=0x00000001,     ///<Select the endpoint direction as IN.
        };
        namespace dirselValC{
            constexpr MPL::Value<dirselVal,dirselVal::out> out{};
            constexpr MPL::Value<dirselVal,dirselVal::in> in{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dirselVal> dirsel{}; 
        ///IN Isochronous Transfer Enable. 
        enum class iisoenVal {
            bulkInt=0x00000000,     ///<Configure the endpoint for Bulk/Interrupt transfers.
            iso=0x00000001,     ///<Configure the endpoint for Isochronous transfers.
        };
        namespace iisoenValC{
            constexpr MPL::Value<iisoenVal,iisoenVal::bulkInt> bulkInt{};
            constexpr MPL::Value<iisoenVal,iisoenVal::iso> iso{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,iisoenVal> iisoen{}; 
        ///IN Endpoint IPRDYI Automatic Set Enable. 
        enum class autosetenVal {
            disabled=0x00000000,     ///<The IPRDYI bit is not automatically set by hardware.
            enabled=0x00000001,     ///<The IPRDYI bit is automatically set by hardware.
        };
        namespace autosetenValC{
            constexpr MPL::Value<autosetenVal,autosetenVal::disabled> disabled{};
            constexpr MPL::Value<autosetenVal,autosetenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,autosetenVal> autoseten{}; 
        ///OUT Packet Ready. 
        enum class oprdyiVal {
            notSet=0x00000000,     ///<A data packet is not available.
            set=0x00000001,     ///<A data packet is available.
        };
        namespace oprdyiValC{
            constexpr MPL::Value<oprdyiVal,oprdyiVal::notSet> notSet{};
            constexpr MPL::Value<oprdyiVal,oprdyiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,oprdyiVal> oprdyi{}; 
        ///OUT FIFO Full. 
        enum class ofifoffVal {
            notSet=0x00000000,     ///<The OUT endpoint FIFO is not full.
            set=0x00000001,     ///<The OUT endpoint FIFO is full.
        };
        namespace ofifoffValC{
            constexpr MPL::Value<ofifoffVal,ofifoffVal::notSet> notSet{};
            constexpr MPL::Value<ofifoffVal,ofifoffVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ofifoffVal> ofifoff{}; 
        ///OUT FIFO Overrun Flag. 
        enum class oorfVal {
            notSet=0x00000000,     ///<No data overrun.
            set=0x00000001,     ///<A data packet was lost because of a full FIFO since this flag was last cleared.
        };
        namespace oorfValC{
            constexpr MPL::Value<oorfVal,oorfVal::notSet> notSet{};
            constexpr MPL::Value<oorfVal,oorfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,oorfVal> oorf{}; 
        ///OUT Data Error Flag. 
        enum class oderrfVal {
            notSet=0x00000000,     ///<A CRC or bit-stuff error has not occurred.
            set=0x00000001,     ///<A CRC or bit-stuff error occurred.
        };
        namespace oderrfValC{
            constexpr MPL::Value<oderrfVal,oderrfVal::notSet> notSet{};
            constexpr MPL::Value<oderrfVal,oderrfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,oderrfVal> oderrf{}; 
        ///OUT FIFO Flush. 
        enum class ofifoflVal {
            set=0x00000001,     ///<Flush the OUT FIFO.
        };
        namespace ofifoflValC{
            constexpr MPL::Value<ofifoflVal,ofifoflVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ofifoflVal> ofifofl{}; 
        ///OUT Send Stall. 
        enum class osdstlVal {
            stop=0x00000000,     ///<Stop sending a stall.
            send=0x00000001,     ///<Generate a stall.
        };
        namespace osdstlValC{
            constexpr MPL::Value<osdstlVal,osdstlVal::stop> stop{};
            constexpr MPL::Value<osdstlVal,osdstlVal::send> send{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,osdstlVal> osdstl{}; 
        ///OUT Sent Stall Interrupt Flag. 
        enum class oststliVal {
            notSet=0x00000000,     ///<Read: A stall condition has not been sent since this bit was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A stall condition has been sent since this bit was last cleared. Write: No effect.
        };
        namespace oststliValC{
            constexpr MPL::Value<oststliVal,oststliVal::notSet> notSet{};
            constexpr MPL::Value<oststliVal,oststliVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,oststliVal> oststli{}; 
        ///OUT Clear Data Toggle. 
        enum class oclrdtVal {
            noReset=0x00000000,     ///<Do not reset the OUT data toggle.
            reset=0x00000001,     ///<Reset the OUT data toggle.
        };
        namespace oclrdtValC{
            constexpr MPL::Value<oclrdtVal,oclrdtVal::noReset> noReset{};
            constexpr MPL::Value<oclrdtVal,oclrdtVal::reset> reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,oclrdtVal> oclrdt{}; 
        ///OUT Endpoint DMA Mode. 
        enum class odmamdVal {
            autoDma=0x00000000,     ///<Automatic DMA service is requested on the last packet of the transfer until less than four bytes remain in the packet. At this time, an interrupt is generated. The firmware must read or write the last few bytes of the packet, if any remain.
            noDma=0x00000001,     ///<No DMA service is requested on the last packet of the transfer. When the DMA recognizes the last packet, an interrupt is generated. The firmware must handle the entirety of the last packet.
        };
        namespace odmamdValC{
            constexpr MPL::Value<odmamdVal,odmamdVal::autoDma> autoDma{};
            constexpr MPL::Value<odmamdVal,odmamdVal::noDma> noDma{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,odmamdVal> odmamd{}; 
        ///OUT Endpoint DMA Enable. 
        enum class odmaenVal {
            disabled=0x00000000,     ///<Disable the DMA request for the OUT endpoint.
            enabled=0x00000001,     ///<Enable the DMA request for the OUT endpoint.
        };
        namespace odmaenValC{
            constexpr MPL::Value<odmaenVal,odmaenVal::disabled> disabled{};
            constexpr MPL::Value<odmaenVal,odmaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,odmaenVal> odmaen{}; 
        ///OUT Isochronous Transfer Enable. 
        enum class oisoenVal {
            bulkInt=0x00000000,     ///<Configure the endpoint for Bulk/Interrupt transfers.
            iso=0x00000001,     ///<Configure the endpoint for Isochronous transfers.
        };
        namespace oisoenValC{
            constexpr MPL::Value<oisoenVal,oisoenVal::bulkInt> bulkInt{};
            constexpr MPL::Value<oisoenVal,oisoenVal::iso> iso{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,oisoenVal> oisoen{}; 
        ///OUT Endpoint OPRDYI Auto-Clear Enable. 
        enum class autoclrenVal {
            disabled=0x00000000,     ///<The OPRDYI bit is not automatically cleared by hardware.
            enabled=0x00000001,     ///<The OPRDYI bit is automatically cleared by hardware.
        };
        namespace autoclrenValC{
            constexpr MPL::Value<autoclrenVal,autoclrenVal::disabled> disabled{};
            constexpr MPL::Value<autoclrenVal,autoclrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,autoclrenVal> autoclren{}; 
    }
    namespace Noneepcount1{    ///<Endpoint Data Count
        using Addr = Register::Address<0x400188a0,0xfffffc00,0,unsigned>;
        ///Endpoint OUT Data Count. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Noneepfifo1{    ///<Endpoint Data FIFO Access
        using Addr = Register::Address<0x400188b0,0x00000000,0,unsigned>;
        ///Endpoint Data FIFO. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifo{}; 
    }
    namespace Noneepmpsize2{    ///<Endpoint Maximum Packet Size
        using Addr = Register::Address<0x40018900,0xff00ff00,0,unsigned>;
        ///IN Maximum Packet Size. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> imaxp{}; 
        ///OUT Maximum Packet Size. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> omaxp{}; 
    }
    namespace Noneepcontrol2{    ///<Endpoint Control
        using Addr = Register::Address<0x40018910,0x0f000380,0,unsigned>;
        ///IN Packet Ready Indicator. 
        enum class iprdyiVal {
            notSet=0x00000000,     ///<The packet has been sent or there is an open FIFO slot.
            set=0x00000001,     ///<A packet is loaded in the FIFO.
        };
        namespace iprdyiValC{
            constexpr MPL::Value<iprdyiVal,iprdyiVal::notSet> notSet{};
            constexpr MPL::Value<iprdyiVal,iprdyiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,iprdyiVal> iprdyi{}; 
        ///IN FIFO Not Empty Flag. 
        enum class ififonefVal {
            notSet=0x00000000,     ///<The IN Endpoint FIFO is empty.
            set=0x00000001,     ///<The IN Endpoint FIFO contains one or more packets.
        };
        namespace ififonefValC{
            constexpr MPL::Value<ififonefVal,ififonefVal::notSet> notSet{};
            constexpr MPL::Value<ififonefVal,ififonefVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ififonefVal> ififonef{}; 
        ///IN FIFO Underrun Flag. 
        enum class iurfVal {
            notSet=0x00000000,     ///<Underrun has not occurred.
            set=0x00000001,     ///<Underrun occurred.
        };
        namespace iurfValC{
            constexpr MPL::Value<iurfVal,iurfVal::notSet> notSet{};
            constexpr MPL::Value<iurfVal,iurfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,iurfVal> iurf{}; 
        ///IN FIFO Flush. 
        enum class ififoflVal {
            set=0x00000001,     ///<Flush the IN FIFO.
        };
        namespace ififoflValC{
            constexpr MPL::Value<ififoflVal,ififoflVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ififoflVal> ififofl{}; 
        ///IN Send Stall. 
        enum class isdstlVal {
            notSet=0x00000000,     ///<Stop sending a stall.
            set=0x00000001,     ///<Generate a stall.
        };
        namespace isdstlValC{
            constexpr MPL::Value<isdstlVal,isdstlVal::notSet> notSet{};
            constexpr MPL::Value<isdstlVal,isdstlVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,isdstlVal> isdstl{}; 
        ///IN Sent Stall Interrupt Flag. 
        enum class iststliVal {
            notSet=0x00000000,     ///<Read: A stall condition has not been sent since this bit was last cleared. Write: Clear the interrupt. 
            set=0x00000001,     ///<Read: A stall condition has been sent since this bit was last cleared. Write: No effect.
        };
        namespace iststliValC{
            constexpr MPL::Value<iststliVal,iststliVal::notSet> notSet{};
            constexpr MPL::Value<iststliVal,iststliVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,iststliVal> iststli{}; 
        ///IN Clear Data Toggle. 
        enum class iclrdtVal {
            noReset=0x00000000,     ///<Do not reset the IN data toggle.
            reset=0x00000001,     ///<Reset the IN data toggle.
        };
        namespace iclrdtValC{
            constexpr MPL::Value<iclrdtVal,iclrdtVal::noReset> noReset{};
            constexpr MPL::Value<iclrdtVal,iclrdtVal::reset> reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,iclrdtVal> iclrdt{}; 
        ///FIFO Split Enable. 
        enum class splitenVal {
            disabled=0x00000000,     ///<Do not split the endpoint FIFO.
            enabled=0x00000001,     ///<Split the endpoint FIFO.
        };
        namespace splitenValC{
            constexpr MPL::Value<splitenVal,splitenVal::disabled> disabled{};
            constexpr MPL::Value<splitenVal,splitenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,splitenVal> spliten{}; 
        ///Force Data Toggle Enable. 
        enum class fdtenVal {
            disabled=0x00000000,     ///<The endpoint data toggle switches only when an ACK is received following a data packet transmission.
            enabled=0x00000001,     ///<The endpoint data toggle is forced to switch after every data packet is transmitted, regardless of ACK reception.
        };
        namespace fdtenValC{
            constexpr MPL::Value<fdtenVal,fdtenVal::disabled> disabled{};
            constexpr MPL::Value<fdtenVal,fdtenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,fdtenVal> fdten{}; 
        ///IN Endpoint DMA Enable. 
        enum class idmaenVal {
            disabled=0x00000000,     ///<Disable the DMA request for the IN endpoint.
            enabled=0x00000001,     ///<Enable the DMA request for the IN endpoint.
        };
        namespace idmaenValC{
            constexpr MPL::Value<idmaenVal,idmaenVal::disabled> disabled{};
            constexpr MPL::Value<idmaenVal,idmaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,idmaenVal> idmaen{}; 
        ///Endpoint Direction Select. 
        enum class dirselVal {
            out=0x00000000,     ///<Select the endpoint direction as OUT.
            in=0x00000001,     ///<Select the endpoint direction as IN.
        };
        namespace dirselValC{
            constexpr MPL::Value<dirselVal,dirselVal::out> out{};
            constexpr MPL::Value<dirselVal,dirselVal::in> in{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dirselVal> dirsel{}; 
        ///IN Isochronous Transfer Enable. 
        enum class iisoenVal {
            bulkInt=0x00000000,     ///<Configure the endpoint for Bulk/Interrupt transfers.
            iso=0x00000001,     ///<Configure the endpoint for Isochronous transfers.
        };
        namespace iisoenValC{
            constexpr MPL::Value<iisoenVal,iisoenVal::bulkInt> bulkInt{};
            constexpr MPL::Value<iisoenVal,iisoenVal::iso> iso{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,iisoenVal> iisoen{}; 
        ///IN Endpoint IPRDYI Automatic Set Enable. 
        enum class autosetenVal {
            disabled=0x00000000,     ///<The IPRDYI bit is not automatically set by hardware.
            enabled=0x00000001,     ///<The IPRDYI bit is automatically set by hardware.
        };
        namespace autosetenValC{
            constexpr MPL::Value<autosetenVal,autosetenVal::disabled> disabled{};
            constexpr MPL::Value<autosetenVal,autosetenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,autosetenVal> autoseten{}; 
        ///OUT Packet Ready. 
        enum class oprdyiVal {
            notSet=0x00000000,     ///<A data packet is not available.
            set=0x00000001,     ///<A data packet is available.
        };
        namespace oprdyiValC{
            constexpr MPL::Value<oprdyiVal,oprdyiVal::notSet> notSet{};
            constexpr MPL::Value<oprdyiVal,oprdyiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,oprdyiVal> oprdyi{}; 
        ///OUT FIFO Full. 
        enum class ofifoffVal {
            notSet=0x00000000,     ///<The OUT endpoint FIFO is not full.
            set=0x00000001,     ///<The OUT endpoint FIFO is full.
        };
        namespace ofifoffValC{
            constexpr MPL::Value<ofifoffVal,ofifoffVal::notSet> notSet{};
            constexpr MPL::Value<ofifoffVal,ofifoffVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ofifoffVal> ofifoff{}; 
        ///OUT FIFO Overrun Flag. 
        enum class oorfVal {
            notSet=0x00000000,     ///<No data overrun.
            set=0x00000001,     ///<A data packet was lost because of a full FIFO since this flag was last cleared.
        };
        namespace oorfValC{
            constexpr MPL::Value<oorfVal,oorfVal::notSet> notSet{};
            constexpr MPL::Value<oorfVal,oorfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,oorfVal> oorf{}; 
        ///OUT Data Error Flag. 
        enum class oderrfVal {
            notSet=0x00000000,     ///<A CRC or bit-stuff error has not occurred.
            set=0x00000001,     ///<A CRC or bit-stuff error occurred.
        };
        namespace oderrfValC{
            constexpr MPL::Value<oderrfVal,oderrfVal::notSet> notSet{};
            constexpr MPL::Value<oderrfVal,oderrfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,oderrfVal> oderrf{}; 
        ///OUT FIFO Flush. 
        enum class ofifoflVal {
            set=0x00000001,     ///<Flush the OUT FIFO.
        };
        namespace ofifoflValC{
            constexpr MPL::Value<ofifoflVal,ofifoflVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ofifoflVal> ofifofl{}; 
        ///OUT Send Stall. 
        enum class osdstlVal {
            stop=0x00000000,     ///<Stop sending a stall.
            send=0x00000001,     ///<Generate a stall.
        };
        namespace osdstlValC{
            constexpr MPL::Value<osdstlVal,osdstlVal::stop> stop{};
            constexpr MPL::Value<osdstlVal,osdstlVal::send> send{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,osdstlVal> osdstl{}; 
        ///OUT Sent Stall Interrupt Flag. 
        enum class oststliVal {
            notSet=0x00000000,     ///<Read: A stall condition has not been sent since this bit was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A stall condition has been sent since this bit was last cleared. Write: No effect.
        };
        namespace oststliValC{
            constexpr MPL::Value<oststliVal,oststliVal::notSet> notSet{};
            constexpr MPL::Value<oststliVal,oststliVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,oststliVal> oststli{}; 
        ///OUT Clear Data Toggle. 
        enum class oclrdtVal {
            noReset=0x00000000,     ///<Do not reset the OUT data toggle.
            reset=0x00000001,     ///<Reset the OUT data toggle.
        };
        namespace oclrdtValC{
            constexpr MPL::Value<oclrdtVal,oclrdtVal::noReset> noReset{};
            constexpr MPL::Value<oclrdtVal,oclrdtVal::reset> reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,oclrdtVal> oclrdt{}; 
        ///OUT Endpoint DMA Mode. 
        enum class odmamdVal {
            autoDma=0x00000000,     ///<Automatic DMA service is requested on the last packet of the transfer until less than four bytes remain in the packet. At this time, an interrupt is generated. The firmware must read or write the last few bytes of the packet, if any remain.
            noDma=0x00000001,     ///<No DMA service is requested on the last packet of the transfer. When the DMA recognizes the last packet, an interrupt is generated. The firmware must handle the entirety of the last packet.
        };
        namespace odmamdValC{
            constexpr MPL::Value<odmamdVal,odmamdVal::autoDma> autoDma{};
            constexpr MPL::Value<odmamdVal,odmamdVal::noDma> noDma{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,odmamdVal> odmamd{}; 
        ///OUT Endpoint DMA Enable. 
        enum class odmaenVal {
            disabled=0x00000000,     ///<Disable the DMA request for the OUT endpoint.
            enabled=0x00000001,     ///<Enable the DMA request for the OUT endpoint.
        };
        namespace odmaenValC{
            constexpr MPL::Value<odmaenVal,odmaenVal::disabled> disabled{};
            constexpr MPL::Value<odmaenVal,odmaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,odmaenVal> odmaen{}; 
        ///OUT Isochronous Transfer Enable. 
        enum class oisoenVal {
            bulkInt=0x00000000,     ///<Configure the endpoint for Bulk/Interrupt transfers.
            iso=0x00000001,     ///<Configure the endpoint for Isochronous transfers.
        };
        namespace oisoenValC{
            constexpr MPL::Value<oisoenVal,oisoenVal::bulkInt> bulkInt{};
            constexpr MPL::Value<oisoenVal,oisoenVal::iso> iso{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,oisoenVal> oisoen{}; 
        ///OUT Endpoint OPRDYI Auto-Clear Enable. 
        enum class autoclrenVal {
            disabled=0x00000000,     ///<The OPRDYI bit is not automatically cleared by hardware.
            enabled=0x00000001,     ///<The OPRDYI bit is automatically cleared by hardware.
        };
        namespace autoclrenValC{
            constexpr MPL::Value<autoclrenVal,autoclrenVal::disabled> disabled{};
            constexpr MPL::Value<autoclrenVal,autoclrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,autoclrenVal> autoclren{}; 
    }
    namespace Noneepcount2{    ///<Endpoint Data Count
        using Addr = Register::Address<0x40018920,0xfffffc00,0,unsigned>;
        ///Endpoint OUT Data Count. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Noneepfifo2{    ///<Endpoint Data FIFO Access
        using Addr = Register::Address<0x40018930,0x00000000,0,unsigned>;
        ///Endpoint Data FIFO. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifo{}; 
    }
    namespace Noneepmpsize3{    ///<Endpoint Maximum Packet Size
        using Addr = Register::Address<0x40018980,0xff00ff00,0,unsigned>;
        ///IN Maximum Packet Size. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> imaxp{}; 
        ///OUT Maximum Packet Size. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> omaxp{}; 
    }
    namespace Noneepcontrol3{    ///<Endpoint Control
        using Addr = Register::Address<0x40018990,0x0f000380,0,unsigned>;
        ///IN Packet Ready Indicator. 
        enum class iprdyiVal {
            notSet=0x00000000,     ///<The packet has been sent or there is an open FIFO slot.
            set=0x00000001,     ///<A packet is loaded in the FIFO.
        };
        namespace iprdyiValC{
            constexpr MPL::Value<iprdyiVal,iprdyiVal::notSet> notSet{};
            constexpr MPL::Value<iprdyiVal,iprdyiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,iprdyiVal> iprdyi{}; 
        ///IN FIFO Not Empty Flag. 
        enum class ififonefVal {
            notSet=0x00000000,     ///<The IN Endpoint FIFO is empty.
            set=0x00000001,     ///<The IN Endpoint FIFO contains one or more packets.
        };
        namespace ififonefValC{
            constexpr MPL::Value<ififonefVal,ififonefVal::notSet> notSet{};
            constexpr MPL::Value<ififonefVal,ififonefVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ififonefVal> ififonef{}; 
        ///IN FIFO Underrun Flag. 
        enum class iurfVal {
            notSet=0x00000000,     ///<Underrun has not occurred.
            set=0x00000001,     ///<Underrun occurred.
        };
        namespace iurfValC{
            constexpr MPL::Value<iurfVal,iurfVal::notSet> notSet{};
            constexpr MPL::Value<iurfVal,iurfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,iurfVal> iurf{}; 
        ///IN FIFO Flush. 
        enum class ififoflVal {
            set=0x00000001,     ///<Flush the IN FIFO.
        };
        namespace ififoflValC{
            constexpr MPL::Value<ififoflVal,ififoflVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ififoflVal> ififofl{}; 
        ///IN Send Stall. 
        enum class isdstlVal {
            notSet=0x00000000,     ///<Stop sending a stall.
            set=0x00000001,     ///<Generate a stall.
        };
        namespace isdstlValC{
            constexpr MPL::Value<isdstlVal,isdstlVal::notSet> notSet{};
            constexpr MPL::Value<isdstlVal,isdstlVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,isdstlVal> isdstl{}; 
        ///IN Sent Stall Interrupt Flag. 
        enum class iststliVal {
            notSet=0x00000000,     ///<Read: A stall condition has not been sent since this bit was last cleared. Write: Clear the interrupt. 
            set=0x00000001,     ///<Read: A stall condition has been sent since this bit was last cleared. Write: No effect.
        };
        namespace iststliValC{
            constexpr MPL::Value<iststliVal,iststliVal::notSet> notSet{};
            constexpr MPL::Value<iststliVal,iststliVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,iststliVal> iststli{}; 
        ///IN Clear Data Toggle. 
        enum class iclrdtVal {
            noReset=0x00000000,     ///<Do not reset the IN data toggle.
            reset=0x00000001,     ///<Reset the IN data toggle.
        };
        namespace iclrdtValC{
            constexpr MPL::Value<iclrdtVal,iclrdtVal::noReset> noReset{};
            constexpr MPL::Value<iclrdtVal,iclrdtVal::reset> reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,iclrdtVal> iclrdt{}; 
        ///FIFO Split Enable. 
        enum class splitenVal {
            disabled=0x00000000,     ///<Do not split the endpoint FIFO.
            enabled=0x00000001,     ///<Split the endpoint FIFO.
        };
        namespace splitenValC{
            constexpr MPL::Value<splitenVal,splitenVal::disabled> disabled{};
            constexpr MPL::Value<splitenVal,splitenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,splitenVal> spliten{}; 
        ///Force Data Toggle Enable. 
        enum class fdtenVal {
            disabled=0x00000000,     ///<The endpoint data toggle switches only when an ACK is received following a data packet transmission.
            enabled=0x00000001,     ///<The endpoint data toggle is forced to switch after every data packet is transmitted, regardless of ACK reception.
        };
        namespace fdtenValC{
            constexpr MPL::Value<fdtenVal,fdtenVal::disabled> disabled{};
            constexpr MPL::Value<fdtenVal,fdtenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,fdtenVal> fdten{}; 
        ///IN Endpoint DMA Enable. 
        enum class idmaenVal {
            disabled=0x00000000,     ///<Disable the DMA request for the IN endpoint.
            enabled=0x00000001,     ///<Enable the DMA request for the IN endpoint.
        };
        namespace idmaenValC{
            constexpr MPL::Value<idmaenVal,idmaenVal::disabled> disabled{};
            constexpr MPL::Value<idmaenVal,idmaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,idmaenVal> idmaen{}; 
        ///Endpoint Direction Select. 
        enum class dirselVal {
            out=0x00000000,     ///<Select the endpoint direction as OUT.
            in=0x00000001,     ///<Select the endpoint direction as IN.
        };
        namespace dirselValC{
            constexpr MPL::Value<dirselVal,dirselVal::out> out{};
            constexpr MPL::Value<dirselVal,dirselVal::in> in{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dirselVal> dirsel{}; 
        ///IN Isochronous Transfer Enable. 
        enum class iisoenVal {
            bulkInt=0x00000000,     ///<Configure the endpoint for Bulk/Interrupt transfers.
            iso=0x00000001,     ///<Configure the endpoint for Isochronous transfers.
        };
        namespace iisoenValC{
            constexpr MPL::Value<iisoenVal,iisoenVal::bulkInt> bulkInt{};
            constexpr MPL::Value<iisoenVal,iisoenVal::iso> iso{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,iisoenVal> iisoen{}; 
        ///IN Endpoint IPRDYI Automatic Set Enable. 
        enum class autosetenVal {
            disabled=0x00000000,     ///<The IPRDYI bit is not automatically set by hardware.
            enabled=0x00000001,     ///<The IPRDYI bit is automatically set by hardware.
        };
        namespace autosetenValC{
            constexpr MPL::Value<autosetenVal,autosetenVal::disabled> disabled{};
            constexpr MPL::Value<autosetenVal,autosetenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,autosetenVal> autoseten{}; 
        ///OUT Packet Ready. 
        enum class oprdyiVal {
            notSet=0x00000000,     ///<A data packet is not available.
            set=0x00000001,     ///<A data packet is available.
        };
        namespace oprdyiValC{
            constexpr MPL::Value<oprdyiVal,oprdyiVal::notSet> notSet{};
            constexpr MPL::Value<oprdyiVal,oprdyiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,oprdyiVal> oprdyi{}; 
        ///OUT FIFO Full. 
        enum class ofifoffVal {
            notSet=0x00000000,     ///<The OUT endpoint FIFO is not full.
            set=0x00000001,     ///<The OUT endpoint FIFO is full.
        };
        namespace ofifoffValC{
            constexpr MPL::Value<ofifoffVal,ofifoffVal::notSet> notSet{};
            constexpr MPL::Value<ofifoffVal,ofifoffVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ofifoffVal> ofifoff{}; 
        ///OUT FIFO Overrun Flag. 
        enum class oorfVal {
            notSet=0x00000000,     ///<No data overrun.
            set=0x00000001,     ///<A data packet was lost because of a full FIFO since this flag was last cleared.
        };
        namespace oorfValC{
            constexpr MPL::Value<oorfVal,oorfVal::notSet> notSet{};
            constexpr MPL::Value<oorfVal,oorfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,oorfVal> oorf{}; 
        ///OUT Data Error Flag. 
        enum class oderrfVal {
            notSet=0x00000000,     ///<A CRC or bit-stuff error has not occurred.
            set=0x00000001,     ///<A CRC or bit-stuff error occurred.
        };
        namespace oderrfValC{
            constexpr MPL::Value<oderrfVal,oderrfVal::notSet> notSet{};
            constexpr MPL::Value<oderrfVal,oderrfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,oderrfVal> oderrf{}; 
        ///OUT FIFO Flush. 
        enum class ofifoflVal {
            set=0x00000001,     ///<Flush the OUT FIFO.
        };
        namespace ofifoflValC{
            constexpr MPL::Value<ofifoflVal,ofifoflVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ofifoflVal> ofifofl{}; 
        ///OUT Send Stall. 
        enum class osdstlVal {
            stop=0x00000000,     ///<Stop sending a stall.
            send=0x00000001,     ///<Generate a stall.
        };
        namespace osdstlValC{
            constexpr MPL::Value<osdstlVal,osdstlVal::stop> stop{};
            constexpr MPL::Value<osdstlVal,osdstlVal::send> send{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,osdstlVal> osdstl{}; 
        ///OUT Sent Stall Interrupt Flag. 
        enum class oststliVal {
            notSet=0x00000000,     ///<Read: A stall condition has not been sent since this bit was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A stall condition has been sent since this bit was last cleared. Write: No effect.
        };
        namespace oststliValC{
            constexpr MPL::Value<oststliVal,oststliVal::notSet> notSet{};
            constexpr MPL::Value<oststliVal,oststliVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,oststliVal> oststli{}; 
        ///OUT Clear Data Toggle. 
        enum class oclrdtVal {
            noReset=0x00000000,     ///<Do not reset the OUT data toggle.
            reset=0x00000001,     ///<Reset the OUT data toggle.
        };
        namespace oclrdtValC{
            constexpr MPL::Value<oclrdtVal,oclrdtVal::noReset> noReset{};
            constexpr MPL::Value<oclrdtVal,oclrdtVal::reset> reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,oclrdtVal> oclrdt{}; 
        ///OUT Endpoint DMA Mode. 
        enum class odmamdVal {
            autoDma=0x00000000,     ///<Automatic DMA service is requested on the last packet of the transfer until less than four bytes remain in the packet. At this time, an interrupt is generated. The firmware must read or write the last few bytes of the packet, if any remain.
            noDma=0x00000001,     ///<No DMA service is requested on the last packet of the transfer. When the DMA recognizes the last packet, an interrupt is generated. The firmware must handle the entirety of the last packet.
        };
        namespace odmamdValC{
            constexpr MPL::Value<odmamdVal,odmamdVal::autoDma> autoDma{};
            constexpr MPL::Value<odmamdVal,odmamdVal::noDma> noDma{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,odmamdVal> odmamd{}; 
        ///OUT Endpoint DMA Enable. 
        enum class odmaenVal {
            disabled=0x00000000,     ///<Disable the DMA request for the OUT endpoint.
            enabled=0x00000001,     ///<Enable the DMA request for the OUT endpoint.
        };
        namespace odmaenValC{
            constexpr MPL::Value<odmaenVal,odmaenVal::disabled> disabled{};
            constexpr MPL::Value<odmaenVal,odmaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,odmaenVal> odmaen{}; 
        ///OUT Isochronous Transfer Enable. 
        enum class oisoenVal {
            bulkInt=0x00000000,     ///<Configure the endpoint for Bulk/Interrupt transfers.
            iso=0x00000001,     ///<Configure the endpoint for Isochronous transfers.
        };
        namespace oisoenValC{
            constexpr MPL::Value<oisoenVal,oisoenVal::bulkInt> bulkInt{};
            constexpr MPL::Value<oisoenVal,oisoenVal::iso> iso{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,oisoenVal> oisoen{}; 
        ///OUT Endpoint OPRDYI Auto-Clear Enable. 
        enum class autoclrenVal {
            disabled=0x00000000,     ///<The OPRDYI bit is not automatically cleared by hardware.
            enabled=0x00000001,     ///<The OPRDYI bit is automatically cleared by hardware.
        };
        namespace autoclrenValC{
            constexpr MPL::Value<autoclrenVal,autoclrenVal::disabled> disabled{};
            constexpr MPL::Value<autoclrenVal,autoclrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,autoclrenVal> autoclren{}; 
    }
    namespace Noneepcount3{    ///<Endpoint Data Count
        using Addr = Register::Address<0x400189a0,0xfffffc00,0,unsigned>;
        ///Endpoint OUT Data Count. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Noneepfifo3{    ///<Endpoint Data FIFO Access
        using Addr = Register::Address<0x400189b0,0x00000000,0,unsigned>;
        ///Endpoint Data FIFO. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifo{}; 
    }
    namespace Noneepmpsize4{    ///<Endpoint Maximum Packet Size
        using Addr = Register::Address<0x40018a00,0xff00ff00,0,unsigned>;
        ///IN Maximum Packet Size. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> imaxp{}; 
        ///OUT Maximum Packet Size. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> omaxp{}; 
    }
    namespace Noneepcontrol4{    ///<Endpoint Control
        using Addr = Register::Address<0x40018a10,0x0f000380,0,unsigned>;
        ///IN Packet Ready Indicator. 
        enum class iprdyiVal {
            notSet=0x00000000,     ///<The packet has been sent or there is an open FIFO slot.
            set=0x00000001,     ///<A packet is loaded in the FIFO.
        };
        namespace iprdyiValC{
            constexpr MPL::Value<iprdyiVal,iprdyiVal::notSet> notSet{};
            constexpr MPL::Value<iprdyiVal,iprdyiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,iprdyiVal> iprdyi{}; 
        ///IN FIFO Not Empty Flag. 
        enum class ififonefVal {
            notSet=0x00000000,     ///<The IN Endpoint FIFO is empty.
            set=0x00000001,     ///<The IN Endpoint FIFO contains one or more packets.
        };
        namespace ififonefValC{
            constexpr MPL::Value<ififonefVal,ififonefVal::notSet> notSet{};
            constexpr MPL::Value<ififonefVal,ififonefVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ififonefVal> ififonef{}; 
        ///IN FIFO Underrun Flag. 
        enum class iurfVal {
            notSet=0x00000000,     ///<Underrun has not occurred.
            set=0x00000001,     ///<Underrun occurred.
        };
        namespace iurfValC{
            constexpr MPL::Value<iurfVal,iurfVal::notSet> notSet{};
            constexpr MPL::Value<iurfVal,iurfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,iurfVal> iurf{}; 
        ///IN FIFO Flush. 
        enum class ififoflVal {
            set=0x00000001,     ///<Flush the IN FIFO.
        };
        namespace ififoflValC{
            constexpr MPL::Value<ififoflVal,ififoflVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ififoflVal> ififofl{}; 
        ///IN Send Stall. 
        enum class isdstlVal {
            notSet=0x00000000,     ///<Stop sending a stall.
            set=0x00000001,     ///<Generate a stall.
        };
        namespace isdstlValC{
            constexpr MPL::Value<isdstlVal,isdstlVal::notSet> notSet{};
            constexpr MPL::Value<isdstlVal,isdstlVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,isdstlVal> isdstl{}; 
        ///IN Sent Stall Interrupt Flag. 
        enum class iststliVal {
            notSet=0x00000000,     ///<Read: A stall condition has not been sent since this bit was last cleared. Write: Clear the interrupt. 
            set=0x00000001,     ///<Read: A stall condition has been sent since this bit was last cleared. Write: No effect.
        };
        namespace iststliValC{
            constexpr MPL::Value<iststliVal,iststliVal::notSet> notSet{};
            constexpr MPL::Value<iststliVal,iststliVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,iststliVal> iststli{}; 
        ///IN Clear Data Toggle. 
        enum class iclrdtVal {
            noReset=0x00000000,     ///<Do not reset the IN data toggle.
            reset=0x00000001,     ///<Reset the IN data toggle.
        };
        namespace iclrdtValC{
            constexpr MPL::Value<iclrdtVal,iclrdtVal::noReset> noReset{};
            constexpr MPL::Value<iclrdtVal,iclrdtVal::reset> reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,iclrdtVal> iclrdt{}; 
        ///FIFO Split Enable. 
        enum class splitenVal {
            disabled=0x00000000,     ///<Do not split the endpoint FIFO.
            enabled=0x00000001,     ///<Split the endpoint FIFO.
        };
        namespace splitenValC{
            constexpr MPL::Value<splitenVal,splitenVal::disabled> disabled{};
            constexpr MPL::Value<splitenVal,splitenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,splitenVal> spliten{}; 
        ///Force Data Toggle Enable. 
        enum class fdtenVal {
            disabled=0x00000000,     ///<The endpoint data toggle switches only when an ACK is received following a data packet transmission.
            enabled=0x00000001,     ///<The endpoint data toggle is forced to switch after every data packet is transmitted, regardless of ACK reception.
        };
        namespace fdtenValC{
            constexpr MPL::Value<fdtenVal,fdtenVal::disabled> disabled{};
            constexpr MPL::Value<fdtenVal,fdtenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,fdtenVal> fdten{}; 
        ///IN Endpoint DMA Enable. 
        enum class idmaenVal {
            disabled=0x00000000,     ///<Disable the DMA request for the IN endpoint.
            enabled=0x00000001,     ///<Enable the DMA request for the IN endpoint.
        };
        namespace idmaenValC{
            constexpr MPL::Value<idmaenVal,idmaenVal::disabled> disabled{};
            constexpr MPL::Value<idmaenVal,idmaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,idmaenVal> idmaen{}; 
        ///Endpoint Direction Select. 
        enum class dirselVal {
            out=0x00000000,     ///<Select the endpoint direction as OUT.
            in=0x00000001,     ///<Select the endpoint direction as IN.
        };
        namespace dirselValC{
            constexpr MPL::Value<dirselVal,dirselVal::out> out{};
            constexpr MPL::Value<dirselVal,dirselVal::in> in{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dirselVal> dirsel{}; 
        ///IN Isochronous Transfer Enable. 
        enum class iisoenVal {
            bulkInt=0x00000000,     ///<Configure the endpoint for Bulk/Interrupt transfers.
            iso=0x00000001,     ///<Configure the endpoint for Isochronous transfers.
        };
        namespace iisoenValC{
            constexpr MPL::Value<iisoenVal,iisoenVal::bulkInt> bulkInt{};
            constexpr MPL::Value<iisoenVal,iisoenVal::iso> iso{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,iisoenVal> iisoen{}; 
        ///IN Endpoint IPRDYI Automatic Set Enable. 
        enum class autosetenVal {
            disabled=0x00000000,     ///<The IPRDYI bit is not automatically set by hardware.
            enabled=0x00000001,     ///<The IPRDYI bit is automatically set by hardware.
        };
        namespace autosetenValC{
            constexpr MPL::Value<autosetenVal,autosetenVal::disabled> disabled{};
            constexpr MPL::Value<autosetenVal,autosetenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,autosetenVal> autoseten{}; 
        ///OUT Packet Ready. 
        enum class oprdyiVal {
            notSet=0x00000000,     ///<A data packet is not available.
            set=0x00000001,     ///<A data packet is available.
        };
        namespace oprdyiValC{
            constexpr MPL::Value<oprdyiVal,oprdyiVal::notSet> notSet{};
            constexpr MPL::Value<oprdyiVal,oprdyiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,oprdyiVal> oprdyi{}; 
        ///OUT FIFO Full. 
        enum class ofifoffVal {
            notSet=0x00000000,     ///<The OUT endpoint FIFO is not full.
            set=0x00000001,     ///<The OUT endpoint FIFO is full.
        };
        namespace ofifoffValC{
            constexpr MPL::Value<ofifoffVal,ofifoffVal::notSet> notSet{};
            constexpr MPL::Value<ofifoffVal,ofifoffVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ofifoffVal> ofifoff{}; 
        ///OUT FIFO Overrun Flag. 
        enum class oorfVal {
            notSet=0x00000000,     ///<No data overrun.
            set=0x00000001,     ///<A data packet was lost because of a full FIFO since this flag was last cleared.
        };
        namespace oorfValC{
            constexpr MPL::Value<oorfVal,oorfVal::notSet> notSet{};
            constexpr MPL::Value<oorfVal,oorfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,oorfVal> oorf{}; 
        ///OUT Data Error Flag. 
        enum class oderrfVal {
            notSet=0x00000000,     ///<A CRC or bit-stuff error has not occurred.
            set=0x00000001,     ///<A CRC or bit-stuff error occurred.
        };
        namespace oderrfValC{
            constexpr MPL::Value<oderrfVal,oderrfVal::notSet> notSet{};
            constexpr MPL::Value<oderrfVal,oderrfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,oderrfVal> oderrf{}; 
        ///OUT FIFO Flush. 
        enum class ofifoflVal {
            set=0x00000001,     ///<Flush the OUT FIFO.
        };
        namespace ofifoflValC{
            constexpr MPL::Value<ofifoflVal,ofifoflVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ofifoflVal> ofifofl{}; 
        ///OUT Send Stall. 
        enum class osdstlVal {
            stop=0x00000000,     ///<Stop sending a stall.
            send=0x00000001,     ///<Generate a stall.
        };
        namespace osdstlValC{
            constexpr MPL::Value<osdstlVal,osdstlVal::stop> stop{};
            constexpr MPL::Value<osdstlVal,osdstlVal::send> send{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,osdstlVal> osdstl{}; 
        ///OUT Sent Stall Interrupt Flag. 
        enum class oststliVal {
            notSet=0x00000000,     ///<Read: A stall condition has not been sent since this bit was last cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A stall condition has been sent since this bit was last cleared. Write: No effect.
        };
        namespace oststliValC{
            constexpr MPL::Value<oststliVal,oststliVal::notSet> notSet{};
            constexpr MPL::Value<oststliVal,oststliVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,oststliVal> oststli{}; 
        ///OUT Clear Data Toggle. 
        enum class oclrdtVal {
            noReset=0x00000000,     ///<Do not reset the OUT data toggle.
            reset=0x00000001,     ///<Reset the OUT data toggle.
        };
        namespace oclrdtValC{
            constexpr MPL::Value<oclrdtVal,oclrdtVal::noReset> noReset{};
            constexpr MPL::Value<oclrdtVal,oclrdtVal::reset> reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,oclrdtVal> oclrdt{}; 
        ///OUT Endpoint DMA Mode. 
        enum class odmamdVal {
            autoDma=0x00000000,     ///<Automatic DMA service is requested on the last packet of the transfer until less than four bytes remain in the packet. At this time, an interrupt is generated. The firmware must read or write the last few bytes of the packet, if any remain.
            noDma=0x00000001,     ///<No DMA service is requested on the last packet of the transfer. When the DMA recognizes the last packet, an interrupt is generated. The firmware must handle the entirety of the last packet.
        };
        namespace odmamdValC{
            constexpr MPL::Value<odmamdVal,odmamdVal::autoDma> autoDma{};
            constexpr MPL::Value<odmamdVal,odmamdVal::noDma> noDma{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,odmamdVal> odmamd{}; 
        ///OUT Endpoint DMA Enable. 
        enum class odmaenVal {
            disabled=0x00000000,     ///<Disable the DMA request for the OUT endpoint.
            enabled=0x00000001,     ///<Enable the DMA request for the OUT endpoint.
        };
        namespace odmaenValC{
            constexpr MPL::Value<odmaenVal,odmaenVal::disabled> disabled{};
            constexpr MPL::Value<odmaenVal,odmaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,odmaenVal> odmaen{}; 
        ///OUT Isochronous Transfer Enable. 
        enum class oisoenVal {
            bulkInt=0x00000000,     ///<Configure the endpoint for Bulk/Interrupt transfers.
            iso=0x00000001,     ///<Configure the endpoint for Isochronous transfers.
        };
        namespace oisoenValC{
            constexpr MPL::Value<oisoenVal,oisoenVal::bulkInt> bulkInt{};
            constexpr MPL::Value<oisoenVal,oisoenVal::iso> iso{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,oisoenVal> oisoen{}; 
        ///OUT Endpoint OPRDYI Auto-Clear Enable. 
        enum class autoclrenVal {
            disabled=0x00000000,     ///<The OPRDYI bit is not automatically cleared by hardware.
            enabled=0x00000001,     ///<The OPRDYI bit is automatically cleared by hardware.
        };
        namespace autoclrenValC{
            constexpr MPL::Value<autoclrenVal,autoclrenVal::disabled> disabled{};
            constexpr MPL::Value<autoclrenVal,autoclrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,autoclrenVal> autoclren{}; 
    }
    namespace Noneepcount4{    ///<Endpoint Data Count
        using Addr = Register::Address<0x40018a20,0xfffffc00,0,unsigned>;
        ///Endpoint OUT Data Count. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Noneepfifo4{    ///<Endpoint Data FIFO Access
        using Addr = Register::Address<0x40018a30,0x00000000,0,unsigned>;
        ///Endpoint Data FIFO. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifo{}; 
    }
}
