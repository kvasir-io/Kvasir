#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx USB1 Host/Device controller Modification date=1/19/2011 Major revision=0 Minor revision=7 
    namespace Nonecaplength{    ///<Capability register length
        using Addr = Register::Address<0x40007100,0xff000000,0,unsigned>;
        ///Indicates offset to add to the register base address at the beginning of the Operational Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> caplength{}; 
        ///BCD encoding of the EHCI revision number supported by this host controller.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> hciversion{}; 
    }
    namespace Nonehcsparams{    ///<Host controller structural parameters
        using Addr = Register::Address<0x40007104,0xf00e00e0,0,unsigned>;
        ///Number of downstream ports. This field specifies the number of physical downstream ports implemented on this host controller.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> nPorts{}; 
        ///Port Power Control. This field indicates whether the host controller implementation includes port power control.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ppc{}; 
        ///Number of Ports per Companion Controller. This field indicates the number of ports supported per internal Companion Controller.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> nPcc{}; 
        ///Number of Companion Controller. This field indicates the number of companion controllers associated with this USB2.0 host controller.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> nCc{}; 
        ///Port indicators. This bit indicates whether the ports support port indicator control.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pi{}; 
        ///Number of Ports per Transaction Translator. This field indicates the number of ports assigned to each transaction translator within the USB2.0 host controller.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> nPtt{}; 
        ///Number of Transaction Translators. This field indicates the number of embedded transaction translators associated with the USB2.0 host controller.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> nTt{}; 
    }
    namespace Nonehccparams{    ///<Host controller capability parameters
        using Addr = Register::Address<0x40007108,0xffff0008,0,unsigned>;
        ///64-bit Addressing Capability. If zero, no 64-bit addressing capability is supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adc{}; 
        ///Programmable Frame List Flag. If set to one, then the system software can specify and use a smaller frame list and configure the host controller via the USBCMD register Frame List Size field. The frame list must always be aligned on a 4K-boundary. This requirement ensures that the frame list is always physically contiguous.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pfl{}; 
        ///Asynchronous Schedule Park Capability. If this bit is set to a one, then the host controller supports the park feature for high-speed queue heads in the Asynchronous Schedule.The feature can be disabled or enabled and set to a specific level by using the Asynchronous Schedule Park Mode Enable and Asynchronous Schedule Park Mode Count fields in the USBCMD register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> asp{}; 
        ///Isochronous Scheduling Threshold. This field indicates, relative to the current position of the executing host controller, where software can reliably update the isochronous schedule.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ist{}; 
        ///EHCI Extended Capabilities Pointer. This optional field indicates the existence of a capabilities list.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> eecp{}; 
    }
    namespace Nonedciversion{    ///<Device interface version number
        using Addr = Register::Address<0x40007120,0xffff0000,0,unsigned>;
        ///The device controller interface conforms to the two-byte BCD encoding of the interface version number contained in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dciversion{}; 
    }
    namespace NoneusbcmdD{    ///<USB command (device mode)
        using Addr = Register::Address<0x40007140,0xff001ffc,0,unsigned>;
        ///Run/Stop
        enum class RsVal {
            detach=0x00000000,     ///<Writing a 0 to this bit will cause a detach event.
            atach=0x00000001,     ///<Writing a one to this bit will cause the device controller to enable a pull-up on USB_DP and initiate an attach event. This control bit is not directly connected to the pull-up enable, as the pull-up will become disabled upon transitioning into high-speed mode. Software should use this bit to prevent an attach event before the device controller has been properly initialized.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RsVal> rs{}; 
        namespace RsValC{
            constexpr Register::FieldValue<decltype(rs)::Type,RsVal::detach> detach{};
            constexpr Register::FieldValue<decltype(rs)::Type,RsVal::atach> atach{};
        }
        }
        ///Controller reset. Software uses this bit to reset the controller. This bit is set to zero by the Host/Device Controller when the reset process is complete. Software cannot terminate the reset process early by writing a zero to this register.
        enum class RstVal {
            resetcomplete=0x00000000,     ///<Set to 0 by hardware when the reset process is complete.
            reset=0x00000001,     ///<When software writes a one to this bit, the Device Controller resets its internal pipelines, timers, counters, state machines etc. to their initial values. Writing a one to this bit when the device is in the attached state is not recommended, since the effect on an attached host is undefined. In order to ensure that the device is not in an attached state before initiating a device controller reset, all primed endpoints should be flushed and the USBCMD Run/Stop bit should be set to 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RstVal> rst{}; 
        namespace RstValC{
            constexpr Register::FieldValue<decltype(rst)::Type,RstVal::resetcomplete> resetcomplete{};
            constexpr Register::FieldValue<decltype(rst)::Type,RstVal::reset> reset{};
        }
        }
        ///Setup trip wire  During handling a setup packet, this bit is used as a semaphore to ensure that the setup data payload of 8 bytes is extracted from a QH by the DCD without being corrupted. If the setup lockout mode is off (see USBMODE register) then there exists a hazard when new setup data arrives while the DCD is copying the setup data payload from the QH for a previous setup packet. This bit is set and cleared by software and will be cleared by hardware when a hazard exists. (See Section 18.10).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> sutw{}; 
        ///Add dTD trip wire This bit is used as a semaphore to ensure the to proper addition of a new dTD to an active (primed) endpoint's linked list. This bit is set and cleared by software during the process of adding a new dTD. See also Section 18.10. This bit shall also be cleared by hardware when its state machine is hazard region for which adding a dTD to a primed endpoint may go unrecognized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> atdtw{}; 
        ///Not used in device mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fs2{}; 
        ///Interrupt threshold control. The system software uses this field to set the maximum rate at which the host/device controller will issue interrupts. ITC contains the maximum interrupt interval measured in micro-frames. Valid values are shown below. All other values are reserved. 0x0 = Immediate (no threshold) 0x1 = 1 micro frame. 0x2 = 2 micro frames. 0x8 = 8 micro frames. 0x10 = 16 micro frames. 0x20 = 32 micro frames. 0x40 = 64 micro frames.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> itc{}; 
    }
    namespace NoneusbcmdH{    ///<USB command (host mode)
        using Addr = Register::Address<0x40007140,0xff007480,0,unsigned>;
        ///Run/Stop
        enum class RsVal {
            halt=0x00000000,     ///<When this bit is set to 0, the Host Controller completes the current transaction on the USB and then halts. The HC Halted bit in the status register indicates when the Host Controller has finished the transaction and has entered the stopped state. Software should not write a one to this field unless the host controller is in the Halted state (i.e. HCHalted in the USBSTS register is a one).
            proceed=0x00000001,     ///<When set to a 1, the Host Controller proceeds with the execution of the schedule. The Host Controller continues execution as long as this bit is set to a one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RsVal> rs{}; 
        namespace RsValC{
            constexpr Register::FieldValue<decltype(rs)::Type,RsVal::halt> halt{};
            constexpr Register::FieldValue<decltype(rs)::Type,RsVal::proceed> proceed{};
        }
        }
        ///Controller reset.  Software uses this bit to reset the controller. This bit is set to zero by the Host/Device Controller when the reset process is complete. Software cannot terminate the reset process early by writing a zero to this register.
        enum class RstVal {
            resetcomplete=0x00000000,     ///<This bit is set to zero by hardware when the reset process is complete.
            reset=0x00000001,     ///<When software writes a one to this bit, the Host Controller resets its internal pipelines, timers, counters, state machines etc. to their initial value. Any transaction currently in progress on USB is immediately terminated. A USB reset is not driven on downstream ports. Software should not set this bit to a one when the HCHalted bit in the USBSTS register is a zero. Attempting to reset an actively running host controller will result in undefined behavior.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RstVal> rst{}; 
        namespace RstValC{
            constexpr Register::FieldValue<decltype(rst)::Type,RstVal::resetcomplete> resetcomplete{};
            constexpr Register::FieldValue<decltype(rst)::Type,RstVal::reset> reset{};
        }
        }
        ///Bit 0 of the Frame List Size bits. See Table 281. This field specifies the size of the frame list that controls which bits in the Frame Index Register should be used for the Frame List Current index. Note that this field is made up from USBCMD bits 15, 3, and 2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fs0{}; 
        ///Bit 1 of the Frame List Size bits. See Table 281
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fs1{}; 
        ///This bit controls whether the host controller skips processing the periodic schedule.
        enum class PseVal {
            doNotProcessTheP=0x00000000,     ///<Do not process the periodic schedule.
            useThePeriodiclist=0x00000001,     ///<Use the PERIODICLISTBASE register to access the periodic schedule.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PseVal> pse{}; 
        namespace PseValC{
            constexpr Register::FieldValue<decltype(pse)::Type,PseVal::doNotProcessTheP> doNotProcessTheP{};
            constexpr Register::FieldValue<decltype(pse)::Type,PseVal::useThePeriodiclist> useThePeriodiclist{};
        }
        }
        ///This bit controls whether the host controller skips processing the asynchronous schedule.
        enum class AseVal {
            doNotProcessTheA=0x00000000,     ///<Do not process the asynchronous schedule.
            useTheAsynclistadd=0x00000001,     ///<Use the ASYNCLISTADDR to access the asynchronous schedule.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AseVal> ase{}; 
        namespace AseValC{
            constexpr Register::FieldValue<decltype(ase)::Type,AseVal::doNotProcessTheA> doNotProcessTheA{};
            constexpr Register::FieldValue<decltype(ase)::Type,AseVal::useTheAsynclistadd> useTheAsynclistadd{};
        }
        }
        ///This bit is used as a doorbell by software to tell the host controller to issue an interrupt the next time it advances asynchronous schedule.
        enum class IaaVal {
            st=0x00000000,     ///<The host controller sets this bit to zero after it has set the Interrupt on Sync Advance status bit in the USBSTS register to one.
            doorbell=0x00000001,     ///<Software must write a 1 to this bit to ring the doorbell. When the host controller has evicted all appropriate cached schedule states, it sets the Interrupt on Async Advance status bit in the USBSTS register. If the Interrupt on Sync Advance Enable bit in the USBINTR register is one, then the host controller will assert an interrupt at the next interrupt threshold. Software should not write a one to this bit when the asynchronous schedule is inactive. Doing so will yield undefined results.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,IaaVal> iaa{}; 
        namespace IaaValC{
            constexpr Register::FieldValue<decltype(iaa)::Type,IaaVal::st> st{};
            constexpr Register::FieldValue<decltype(iaa)::Type,IaaVal::doorbell> doorbell{};
        }
        }
        ///Asynchronous schedule park mode. Contains a count of the number of successive transactions the host controller is allowed to execute from a high-speed queue head on the Asynchronous schedule before continuing traversal of the Asynchronous schedule. Valid values are 0x1 to 0x3.  Software must not write 00 to this bit when Park Mode Enable is one as this will result in undefined behavior.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> asp10{}; 
        ///Asynchronous Schedule Park Mode Enable
        enum class AspeVal {
            parkModeIsDisable=0x00000000,     ///<Park mode is disabled.
            parkModeIsEnabled=0x00000001,     ///<Park mode is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AspeVal> aspe{}; 
        namespace AspeValC{
            constexpr Register::FieldValue<decltype(aspe)::Type,AspeVal::parkModeIsDisable> parkModeIsDisable{};
            constexpr Register::FieldValue<decltype(aspe)::Type,AspeVal::parkModeIsEnabled> parkModeIsEnabled{};
        }
        }
        ///Bit 2 of the Frame List Size bits. See Table 281.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fs2{}; 
        ///Interrupt threshold control. The system software uses this field to set the maximum rate at which the host/device controller will issue interrupts. ITC contains the maximum interrupt interval measured in micro-frames. Valid values are shown below. All other values are reserved. 0x0 = Immediate (no threshold) 0x1 = 1 micro frame. 0x2 = 2 micro frames. 0x8 = 8 micro frames. 0x10 = 16 micro frames. 0x20 = 32 micro frames. 0x40 = 64 micro frames.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> itc{}; 
    }
    namespace NoneusbstsD{    ///<USB status (device mode)
        using Addr = Register::Address<0x40007144,0xfffefe38,0,unsigned>;
        ///USB interrupt
        enum class UiVal {
            st=0x00000000,     ///<This bit is cleared by software writing a one to it.
            clear=0x00000001,     ///<This bit is set by the Host/Device Controller when the cause of an interrupt is a completion of a USB transaction where the Transfer Descriptor (TD) has an interrupt on complete (IOC) bit set. This bit is also set by the Host/Device Controller when a short packet is detected. A short packet is when the actual number of bytes received was less than the expected number of bytes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UiVal> ui{}; 
        namespace UiValC{
            constexpr Register::FieldValue<decltype(ui)::Type,UiVal::st> st{};
            constexpr Register::FieldValue<decltype(ui)::Type,UiVal::clear> clear{};
        }
        }
        ///USB error interrupt
        enum class UeiVal {
            st=0x00000000,     ///<This bit is cleared by software writing a one to it.
            clear=0x00000001,     ///<When completion of a USB transaction results in an error condition, this bit is set by the Host/Device Controller. This bit is set along with the USBINT bit, if the TD on which the error interrupt occurred also had its interrupt on complete (IOC) bit set. The device controller detects resume signaling only (see Section 18.10.11.6).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,UeiVal> uei{}; 
        namespace UeiValC{
            constexpr Register::FieldValue<decltype(uei)::Type,UeiVal::st> st{};
            constexpr Register::FieldValue<decltype(uei)::Type,UeiVal::clear> clear{};
        }
        }
        ///Port change detect.
        enum class PciVal {
            st=0x00000000,     ///<This bit is cleared by software writing a one to it.
            clear=0x00000001,     ///<The Device Controller sets this bit to a one when the port controller enters the full or high-speed operational state. When the port controller exits the full or high-speed operation states due to Reset or Suspend events, the notification mechanisms are the USB Reset Received bit (URI) and the DCSuspend bits (SLI) respectively.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PciVal> pci{}; 
        namespace PciValC{
            constexpr Register::FieldValue<decltype(pci)::Type,PciVal::st> st{};
            constexpr Register::FieldValue<decltype(pci)::Type,PciVal::clear> clear{};
        }
        }
        ///USB reset received
        enum class UriVal {
            st=0x00000000,     ///<This bit is cleared by software writing a one to it.
            clear=0x00000001,     ///<When the device controller detects a USB Reset and enters the default state, this bit will be set to a one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,UriVal> uri{}; 
        namespace UriValC{
            constexpr Register::FieldValue<decltype(uri)::Type,UriVal::st> st{};
            constexpr Register::FieldValue<decltype(uri)::Type,UriVal::clear> clear{};
        }
        }
        ///SOF received
        enum class SriVal {
            st=0x00000000,     ///<This bit is cleared by software writing a one to it.
            clear=0x00000001,     ///<When the device controller detects a Start Of (micro) Frame, this bit will be set to a one. When a SOF is extremely late, the device controller will automatically set this bit to indicate that an SOF was expected. Therefore, this bit will be set roughly every 1 ms in device FS mode and every 125  ms in HS mode and will be synchronized to the actual SOF that is received. Since the device controller is initialized to FS before connect, this bit will be set at an interval of 1ms during the prelude to connect and chirp.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SriVal> sri{}; 
        namespace SriValC{
            constexpr Register::FieldValue<decltype(sri)::Type,SriVal::st> st{};
            constexpr Register::FieldValue<decltype(sri)::Type,SriVal::clear> clear{};
        }
        }
        ///DCSuspend
        enum class SliVal {
            st=0x00000000,     ///<The device controller clears the bit upon exiting from a suspend state. This bit is cleared by software writing a one to it.
            clear=0x00000001,     ///<When a device controller enters a suspend state from an active state, this bit will be set to a one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SliVal> sli{}; 
        namespace SliValC{
            constexpr Register::FieldValue<decltype(sli)::Type,SliVal::st> st{};
            constexpr Register::FieldValue<decltype(sli)::Type,SliVal::clear> clear{};
        }
        }
        ///NAK interrupt bit
        enum class NakiVal {
            endpclear=0x00000000,     ///<This bit is automatically cleared by hardware when the all the enabled TX/RX Endpoint NAK bits are cleared.
            set=0x00000001,     ///<It is set by hardware when for a particular endpoint both the TX/RX Endpoint NAK bit and the corresponding TX/RX Endpoint NAK Enable bit are set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,NakiVal> naki{}; 
        namespace NakiValC{
            constexpr Register::FieldValue<decltype(naki)::Type,NakiVal::endpclear> endpclear{};
            constexpr Register::FieldValue<decltype(naki)::Type,NakiVal::set> set{};
        }
        }
    }
    namespace NoneusbstsH{    ///<USB status (host mode)
        using Addr = Register::Address<0x40007144,0xfff30e50,0,unsigned>;
        ///USB interrupt (USBINT)
        enum class UiVal {
            st=0x00000000,     ///<This bit is cleared by software writing a one to it.
            clear=0x00000001,     ///<This bit is set by the Host/Device Controller when the cause of an interrupt is a completion of a USB transaction where the Transfer Descriptor (TD) has an interrupt on complete (IOC) bit set. This bit is also set by the Host/Device Controller when a short packet is detected. A short packet is when the actual number of bytes received was less than the expected number of bytes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UiVal> ui{}; 
        namespace UiValC{
            constexpr Register::FieldValue<decltype(ui)::Type,UiVal::st> st{};
            constexpr Register::FieldValue<decltype(ui)::Type,UiVal::clear> clear{};
        }
        }
        ///USB error interrupt (USBERRINT)
        enum class UeiVal {
            st=0x00000000,     ///<This bit is cleared by software writing a one to it.
            clear=0x00000001,     ///<When completion of a USB transaction results in an error condition, this bit is set by the Host/Device Controller. This bit is set along with the USBINT bit, if the TD on which the error interrupt occurred also had its interrupt on complete (IOC) bit set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,UeiVal> uei{}; 
        namespace UeiValC{
            constexpr Register::FieldValue<decltype(uei)::Type,UeiVal::st> st{};
            constexpr Register::FieldValue<decltype(uei)::Type,UeiVal::clear> clear{};
        }
        }
        ///Port change detect.
        enum class PciVal {
            st=0x00000000,     ///<This bit is cleared by software writing a one to it.
            clear=0x00000001,     ///<The Host Controller sets this bit to a one when on any port a Connect Status occurs, a Port Enable/Disable Change occurs, or the Force Port Resume bit is set as the result of a J-K transition on the suspended port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PciVal> pci{}; 
        namespace PciValC{
            constexpr Register::FieldValue<decltype(pci)::Type,PciVal::st> st{};
            constexpr Register::FieldValue<decltype(pci)::Type,PciVal::clear> clear{};
        }
        }
        ///Frame list roll-over
        enum class FriVal {
            st=0x00000000,     ///<This bit is cleared by software writing a one to it.
            clear=0x00000001,     ///<The Host Controller sets this bit to a one when the Frame List Index rolls over from its maximum value to zero. The exact value at which the rollover occurs depends on the frame list size. For example, if the frame list size (as programmed in the Frame List Size field of the USBCMD register) is 1024, the Frame Index Register rolls over every time FRINDEX [13] toggles. Similarly, if the size is 512, the Host Controller sets this bit to a one every time FRINDEX bit 12 toggles (see Section 19.6.5).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,FriVal> fri{}; 
        namespace FriValC{
            constexpr Register::FieldValue<decltype(fri)::Type,FriVal::st> st{};
            constexpr Register::FieldValue<decltype(fri)::Type,FriVal::clear> clear{};
        }
        }
        ///Interrupt on async advance
        enum class AaiVal {
            st=0x00000000,     ///<This bit is cleared by software writing a one to it.
            clear=0x00000001,     ///<System software can force the host controller to issue an interrupt the next time the host controller advances the asynchronous schedule by writing a one to the Interrupt on Async Advance Doorbell bit in the USBCMD register. This status bit indicates the assertion of that interrupt source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AaiVal> aai{}; 
        namespace AaiValC{
            constexpr Register::FieldValue<decltype(aai)::Type,AaiVal::st> st{};
            constexpr Register::FieldValue<decltype(aai)::Type,AaiVal::clear> clear{};
        }
        }
        ///SOF received
        enum class SriVal {
            st=0x00000000,     ///<This bit is cleared by software writing a one to it.
            clear=0x00000001,     ///<In host mode, this bit will be set every 125 ms and can be used by host controller driver as a time base.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SriVal> sri{}; 
        namespace SriValC{
            constexpr Register::FieldValue<decltype(sri)::Type,SriVal::st> st{};
            constexpr Register::FieldValue<decltype(sri)::Type,SriVal::clear> clear{};
        }
        }
        ///Not used by the Host controller.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sli{}; 
        ///HCHalted
        enum class HchVal {
            rs=0x00000000,     ///<The RS bit in USBCMD is set to zero. Set by the host controller.
            stop=0x00000001,     ///<The Host Controller sets this bit to one after it has stopped executing because of the Run/Stop bit being set to 0, either by software or by the Host Controller hardware (e.g. because of an internal error).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,HchVal> hch{}; 
        namespace HchValC{
            constexpr Register::FieldValue<decltype(hch)::Type,HchVal::rs> rs{};
            constexpr Register::FieldValue<decltype(hch)::Type,HchVal::stop> stop{};
        }
        }
        ///Reclamation
        enum class RclVal {
            noEmptyAsynchronou=0x00000000,     ///<No empty asynchronous schedule detected.
            emptyAsynchronou=0x00000001,     ///<An empty asynchronous schedule is detected. Set by the host controller.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,RclVal> rcl{}; 
        namespace RclValC{
            constexpr Register::FieldValue<decltype(rcl)::Type,RclVal::noEmptyAsynchronou> noEmptyAsynchronou{};
            constexpr Register::FieldValue<decltype(rcl)::Type,RclVal::emptyAsynchronou> emptyAsynchronou{};
        }
        }
        ///Periodic schedule status This bit reports the current real status of the Periodic Schedule. The Host Controller is not required to immediately disable or enable the Periodic Schedule when software transitions the Periodic Schedule Enable bit in the USBCMD register. When this bit and the Periodic Schedule Enable bit are the same value, the Periodic Schedule is either enabled (if both are 1) or disabled (if both are 0).
        enum class PsVal {
            disabled=0x00000000,     ///<The periodic schedule status is disabled.
            enabled=0x00000001,     ///<The periodic schedule status is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::enabled> enabled{};
        }
        }
        ///Asynchronous schedule status This bit reports the current real status of the Asynchronous Schedule. The Host Controller is not required to immediately disable or enable the Asynchronous Schedule when software transitions the Asynchronous Schedule Enable bit in the USBCMD register. When this bit and the Asynchronous Schedule Enable bit are the same value, the Asynchronous Schedule is either enabled (if both are 1) or disabled (if both are 0).
        enum class AsVal {
            disabled=0x00000000,     ///<Asynchronous schedule status is disabled.
            enabled=0x00000001,     ///<Asynchronous schedule status is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,AsVal> as{}; 
        namespace AsValC{
            constexpr Register::FieldValue<decltype(as)::Type,AsVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(as)::Type,AsVal::enabled> enabled{};
        }
        }
        ///USB host asynchronous interrupt (USBHSTASYNCINT)
        enum class UaiVal {
            st=0x00000000,     ///<This bit is cleared by software writing a one to it.
            clear=0x00000001,     ///<This bit is set by the Host Controller when the cause of an interrupt is a completion of a USB transaction where the Transfer Descriptor (TD) has an interrupt on complete (IOC) bit set and the TD was from the asynchronous schedule. This bit is also set by the Host when a short packet is detected and the packet is on the asynchronous schedule. A short packet is when the actual number of bytes received was less than the expected number of bytes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,UaiVal> uai{}; 
        namespace UaiValC{
            constexpr Register::FieldValue<decltype(uai)::Type,UaiVal::st> st{};
            constexpr Register::FieldValue<decltype(uai)::Type,UaiVal::clear> clear{};
        }
        }
        ///USB host periodic interrupt (USBHSTPERINT)
        enum class UpiVal {
            st=0x00000000,     ///<This bit is cleared by software writing a one to it.
            clear=0x00000001,     ///<This bit is set by the Host Controller when the cause of an interrupt is a completion of a USB transaction where the Transfer Descriptor (TD) has an interrupt on complete (IOC) bit set and the TD was from the periodic schedule. This bit is also set by the Host Controller when a short packet is detected and the packet is on the periodic schedule. A short packet is when the actual number of bytes received was less than the expected number of bytes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,UpiVal> upi{}; 
        namespace UpiValC{
            constexpr Register::FieldValue<decltype(upi)::Type,UpiVal::st> st{};
            constexpr Register::FieldValue<decltype(upi)::Type,UpiVal::clear> clear{};
        }
        }
    }
    namespace NoneusbintrD{    ///<USB interrupt enable (device mode)
        using Addr = Register::Address<0x40007148,0xfff2fe38,0,unsigned>;
        ///USB interrupt enable When this bit is one, and the USBINT bit in the USBSTS register is one, the host/device controller will issue an interrupt at the next interrupt threshold. The interrupt is acknowledged by software clearing the USBINT bit in USBSTS.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ue{}; 
        ///USB error interrupt enable When this bit is a one, and the USBERRINT bit in the USBSTS register is a one, the host/device controller will issue an interrupt at the next interrupt threshold. The interrupt is acknowledged by software clearing the USBERRINT bit in the USBSTS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uee{}; 
        ///Port change detect enable When this bit is a one, and the Port Change Detect bit in the USBSTS register is a one, the host/device controller will issue an interrupt. The interrupt is acknowledged by software clearing the Port Change Detect bit in USBSTS.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pce{}; 
        ///USB reset enable When this bit is a one, and the USB Reset Received bit in the USBSTS register is a one, the device controller will issue an interrupt. The interrupt is acknowledged by software clearing the USB Reset Received bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ure{}; 
        ///SOF received enable When this bit is a one, and the SOF Received bit in the USBSTS register is a one, the device controller will issue an interrupt. The interrupt is acknowledged by software clearing the SOF Received bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sre{}; 
        ///Sleep enable When this bit is a one, and the DCSuspend bit in the USBSTS register transitions, the device controller will issue an interrupt. The interrupt is acknowledged by software writing a one to the DCSuspend bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sle{}; 
        ///NAK interrupt enable This bit is set by software if it wants to enable the hardware interrupt for the NAK Interrupt bit. If both this bit and the corresponding NAK Interrupt bit are set, a hardware interrupt is generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nake{}; 
        ///Not used by the Device controller.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uaie{}; 
        ///Not used by the Device controller.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> upia{}; 
    }
    namespace NoneusbintrH{    ///<USB interrupt enable (host mode)
        using Addr = Register::Address<0x40007148,0xfff3ff50,0,unsigned>;
        ///USB interrupt enable When this bit is one, and the USBINT bit in the USBSTS register is one, the host/device controller will issue an interrupt at the next interrupt threshold. The interrupt is acknowledged by software clearing the USBINT bit in USBSTS.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ue{}; 
        ///USB error interrupt enable When this bit is a one, and the USBERRINT bit in the USBSTS register is a one, the host/device controller will issue an interrupt at the next interrupt threshold. The interrupt is acknowledged by software clearing the USBERRINT bit in the USBSTS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uee{}; 
        ///Port change detect enable When this bit is a one, and the Port Change Detect bit in the USBSTS register is a one, the host/device controller will issue an interrupt. The interrupt is acknowledged by software clearing the Port Change Detect bit in USBSTS.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pce{}; 
        ///Frame list rollover enable When this bit is a one, and the Frame List Rollover bit in the USBSTS register is a one, the host controller will issue an interrupt. The interrupt is acknowledged by software clearing the Frame List Rollover bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fre{}; 
        ///Interrupt on asynchronous advance enable When this bit is a one, and the Interrupt on Async Advance bit in the USBSTS register is a one, the host controller will issue an interrupt at the next interrupt threshold. The interrupt is acknowledged by software clearing the Interrupt on Async Advance bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> aae{}; 
        ///If this bit is one and the SRI bit in the USBSTS register is one, the host controller will issue an interrupt. In host mode, the SRI bit will be set every 125 ms and can be used by the host controller as a time base. The interrupt is acknowledged by software clearing the SRI bit in the USBSTS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sre{}; 
        ///USB host asynchronous interrupt enable When this bit is a one, and the USBHSTASYNCINT bit in the USBSTS register is a one, the host controller will issue an interrupt at the next interrupt threshold. The interrupt is acknowledged by software clearing the USBHSTASYNCINT bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uaie{}; 
        ///USB host periodic interrupt enable When this bit is a one, and the USBHSTPERINT bit in the USBSTS register is a one, the host controller will issue an interrupt at the next interrupt threshold. The interrupt is acknowledged by software clearing the USBHSTPERINT bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> upia{}; 
    }
    namespace NonefrindexD{    ///<USB frame index (device mode)
        using Addr = Register::Address<0x4000714c,0xffffc000,0,unsigned>;
        ///Current micro frame number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> frindex20{}; 
        ///Current frame number of the last frame transmitted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,3),Register::ReadWriteAccess,unsigned> frindex133{}; 
    }
    namespace NonefrindexH{    ///<USB frame index (host mode)
        using Addr = Register::Address<0x4000714c,0xffffe000,0,unsigned>;
        ///Current micro frame number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> frindex20{}; 
        ///Frame list current index for 1024 elements.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,3),Register::ReadWriteAccess,unsigned> frindex123{}; 
    }
    namespace Nonedeviceaddr{    ///<USB device address
        using Addr = Register::Address<0x40007154,0x00ffffff,0,unsigned>;
        ///Device address advance
        enum class UsbadraVal {
            advance=0x00000000,     ///<Any write to USBADR are instantaneous.
            hold=0x00000001,     ///<When the user writes a one to this bit at the same time or before USBADR is written, the write to USBADR fields is staged and held in a hidden register. After an IN occurs on endpoint 0 and is acknowledged, USBADR will be loaded from the holding register. Hardware will automatically clear this bit on the following conditions: IN is ACKed to endpoint 0. USBADR is updated from the staging register. OUT/SETUP occurs on endpoint 0. USBADR is not updated. Device reset occurs. USBADR is set to 0. After the status phase of the SET_ADDRESS descriptor, the DCD has 2 ms to program the USBADR field. This mechanism will ensure this specification is met when the DCD can not write the device address within 2 ms from the SET_ADDRESS status phase. If the DCD writes the USBADR with USBADRA=1 after the SET_ADDRESS data phase (before the prime of the status phase), the USBADR will be programmed instantly at the correct time and meet the 2 ms USB requirement.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,UsbadraVal> usbadra{}; 
        namespace UsbadraValC{
            constexpr Register::FieldValue<decltype(usbadra)::Type,UsbadraVal::advance> advance{};
            constexpr Register::FieldValue<decltype(usbadra)::Type,UsbadraVal::hold> hold{};
        }
        }
        ///USB device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::ReadWriteAccess,unsigned> usbadr{}; 
    }
    namespace Noneperiodiclistbase{    ///<Frame list base address
        using Addr = Register::Address<0x40007154,0x00000fff,0,unsigned>;
        ///Base Address (Low) These bits correspond to the memory address signals[31:12].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> perbase3112{}; 
    }
    namespace Noneendpointlistaddr{    ///<Address of endpoint list in memory (device mode)
        using Addr = Register::Address<0x40007158,0x000007ff,0,unsigned>;
        ///Endpoint list pointer (low) These bits correspond to memory address signals 31:11, respectively. This field will reference a list of up to 4 Queue Heads (QH). (i.e. one queue head per endpoint and direction.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> epbase3111{}; 
    }
    namespace Noneasynclistaddr{    ///<Address of endpoint list in memory (host mode)
        using Addr = Register::Address<0x40007158,0x0000001f,0,unsigned>;
        ///Link pointer (Low) LPL These bits correspond to memory address signals 31:5, respectively. This field may only reference a Queue Head (OH).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> asybase315{}; 
    }
    namespace Nonettctrl{    ///<Asynchronous buffer status for embedded TT (host mode)
        using Addr = Register::Address<0x4000715c,0x80ffffff,0,unsigned>;
        ///Hub address when FS or LS device are connected directly.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ttha{}; 
    }
    namespace Noneburstsize{    ///<Programmable burst size
        using Addr = Register::Address<0x40007160,0xffff0000,0,unsigned>;
        ///Programmable RX burst length This register represents the maximum length of a burst in 32-bit words while moving data from the USB bus to system memory.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxpburst{}; 
        ///Programmable TX burst length This register represents the maximum length of a burst in 32-bit words while moving data from system memory to the USB bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txpburst{}; 
    }
    namespace Nonetxfilltuning{    ///<Host transmit pre-buffer packet tuning (host mode)
        using Addr = Register::Address<0x40007164,0xffc0e000,0,unsigned>;
        ///FIFO burst threshold This register controls the number of data bursts that are posted to the TX latency FIFO in host mode before the packet begins on to the bus. The minimum value is 2 and this value should be a low as possible to maximize USB performance. A higher value can be used in systems with unpredictable latency and/or insufficient bandwidth where the FIFO may underrun because the data transferred from the latency FIFO to USB occurs before it can be replenished from system memory. This value is ignored if the Stream Disable bit in USBMODE register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txschoh{}; 
        ///Scheduler health counter This register increments when the host controller fails to fill the TX latency FIFO to the level programmed by TXFIFOTHRES before running out of time to send the packet before the next Start-Of-Frame . This health counter measures the number of times this occurs to provide feedback to selecting a proper TXSCHOH. Writing to this register will clear the counter. The maximum value is 31.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> txscheatlth{}; 
        ///Scheduler overhead This register adds an additional fixed offset to the schedule time estimator described above as Tff. As an approximation, the value chosen for this register should limit the number of back-off events captured in the TXSCHHEALTH to less than 10 per second in a highly utilized bus. Choosing a value that is too high for this register is not desired as it can needlessly reduce USB utilization. The time unit represented in this register is 1.267  ms when a device is connected in High-Speed Mode. The time unit represented in this register is 6.333  ms when a device is connected in Low/Full Speed Mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> txfifothres{}; 
    }
    namespace Noneulpiviewport{    ///<ULPI viewport
        using Addr = Register::Address<0x40007170,0x10000000,0,unsigned>;
        ///When a write operation is commanded, the  data to be sent is written to this field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ulpidatwr{}; 
        ///After a read operation completes, the result is  placed in this field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ulpidatrd{}; 
        ///When a read or write operation is  commanded, the address of the operation is written to this field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ulpiaddr{}; 
        ///For the wakeup or read/write operation to  be executed, this value must be written as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ulpiport{}; 
        ///ULPI sync state. This bit represents the state of the ULPI  interface.
        enum class UlpissVal {
            inAnotherStateI=0x00000000,     ///<In another state  (ie. carkit, serial, low power)
            normalSyncState=0x00000001,     ///<Normal Sync. State.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,UlpissVal> ulpiss{}; 
        namespace UlpissValC{
            constexpr Register::FieldValue<decltype(ulpiss)::Type,UlpissVal::inAnotherStateI> inAnotherStateI{};
            constexpr Register::FieldValue<decltype(ulpiss)::Type,UlpissVal::normalSyncState> normalSyncState{};
        }
        }
        ///ULPI Read/Write control. This bit selects between running a read or write operation.
        enum class UlpirwVal {
            read=0x00000000,     ///<Read
            write=0x00000001,     ///<Write
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,UlpirwVal> ulpirw{}; 
        namespace UlpirwValC{
            constexpr Register::FieldValue<decltype(ulpirw)::Type,UlpirwVal::read> read{};
            constexpr Register::FieldValue<decltype(ulpirw)::Type,UlpirwVal::write> write{};
        }
        }
        ///ULPI Read/Write Run. Writing the 1 to this bit will begin the  read/write operation. The bit will automatically transition to 0 after the  read/write is complete. Once this bit is set, the driver can not set it back to 0. The driver must never executue a wakeup and a read/write operation at  the same time.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ulpirun{}; 
        ///ULPI Wake-up.  Writing the 1 to this bit will begin the wakeup  operation. The bit will automatically transition to 0 after the wakeup is  complete. Once this bit is set, the driver can not set it back to 0. The driver must never executue a wakeup and a read/write operation at  the same time.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ulpiwu{}; 
    }
    namespace Nonebinterval{    ///<Length of virtual frame
        using Addr = Register::Address<0x40007174,0xfffffff0,0,unsigned>;
        ///bInterval value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bint{}; 
    }
    namespace Noneendptnak{    ///<Endpoint NAK (device mode)
        using Addr = Register::Address<0x40007178,0xfff0fff0,0,unsigned>;
        ///Rx endpoint NAK Each RX endpoint has one bit in this field. The bit is set when the device sends a NAK handshake on a received OUT or PING token for the corresponding endpoint. Bit 3 corresponds to endpoint 3. ... Bit 1 corresponds to endpoint 1. Bit 0 corresponds to endpoint 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eprn0{}; 
        ///Rx endpoint NAK Each RX endpoint has one bit in this field. The bit is set when the device sends a NAK handshake on a received OUT or PING token for the corresponding endpoint. Bit 3 corresponds to endpoint 3. ... Bit 1 corresponds to endpoint 1. Bit 0 corresponds to endpoint 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eprn1{}; 
        ///Rx endpoint NAK Each RX endpoint has one bit in this field. The bit is set when the device sends a NAK handshake on a received OUT or PING token for the corresponding endpoint. Bit 3 corresponds to endpoint 3. ... Bit 1 corresponds to endpoint 1. Bit 0 corresponds to endpoint 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eprn2{}; 
        ///Rx endpoint NAK Each RX endpoint has one bit in this field. The bit is set when the device sends a NAK handshake on a received OUT or PING token for the corresponding endpoint. Bit 3 corresponds to endpoint 3. ... Bit 1 corresponds to endpoint 1. Bit 0 corresponds to endpoint 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprn3{}; 
        ///Tx endpoint NAK Each TX endpoint has one bit in this field. The bit is set when the device sends a NAK handshake on a received IN token for the corresponding endpoint. Bit 3 corresponds to endpoint 3. ... Bit 1 corresponds to endpoint 1. Bit 0 corresponds to endpoint 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eptn16{}; 
        ///Tx endpoint NAK Each TX endpoint has one bit in this field. The bit is set when the device sends a NAK handshake on a received IN token for the corresponding endpoint. Bit 3 corresponds to endpoint 3. ... Bit 1 corresponds to endpoint 1. Bit 0 corresponds to endpoint 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eptn17{}; 
        ///Tx endpoint NAK Each TX endpoint has one bit in this field. The bit is set when the device sends a NAK handshake on a received IN token for the corresponding endpoint. Bit 3 corresponds to endpoint 3. ... Bit 1 corresponds to endpoint 1. Bit 0 corresponds to endpoint 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eptn18{}; 
        ///Tx endpoint NAK Each TX endpoint has one bit in this field. The bit is set when the device sends a NAK handshake on a received IN token for the corresponding endpoint. Bit 3 corresponds to endpoint 3. ... Bit 1 corresponds to endpoint 1. Bit 0 corresponds to endpoint 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eptn19{}; 
    }
    namespace Noneendptnaken{    ///<Endpoint NAK Enable (device mode)
        using Addr = Register::Address<0x4000717c,0xfff0fff0,0,unsigned>;
        ///Rx endpoint NAK enable Each bit enables the corresponding RX NAK bit. If this bit is set and the corresponding RX endpoint NAK bit is set, the NAK interrupt bit is set. Bit 3 corresponds to endpoint 3. ... Bit 1 corresponds to endpoint 1. Bit 0 corresponds to endpoint 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eprne0{}; 
        ///Rx endpoint NAK enable Each bit enables the corresponding RX NAK bit. If this bit is set and the corresponding RX endpoint NAK bit is set, the NAK interrupt bit is set. Bit 3 corresponds to endpoint 3. ... Bit 1 corresponds to endpoint 1. Bit 0 corresponds to endpoint 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eprne1{}; 
        ///Rx endpoint NAK enable Each bit enables the corresponding RX NAK bit. If this bit is set and the corresponding RX endpoint NAK bit is set, the NAK interrupt bit is set. Bit 3 corresponds to endpoint 3. ... Bit 1 corresponds to endpoint 1. Bit 0 corresponds to endpoint 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eprne2{}; 
        ///Rx endpoint NAK enable Each bit enables the corresponding RX NAK bit. If this bit is set and the corresponding RX endpoint NAK bit is set, the NAK interrupt bit is set. Bit 3 corresponds to endpoint 3. ... Bit 1 corresponds to endpoint 1. Bit 0 corresponds to endpoint 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprne3{}; 
        ///Tx endpoint NAK Each bit enables the corresponding TX NAK bit. If this bit is set and the corresponding TX endpoint NAK bit is set, the NAK interrupt bit is set. Bit 3 corresponds to endpoint 3. ... Bit 1 corresponds to endpoint 1. Bit 0 corresponds to endpoint 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eptne16{}; 
        ///Tx endpoint NAK Each bit enables the corresponding TX NAK bit. If this bit is set and the corresponding TX endpoint NAK bit is set, the NAK interrupt bit is set. Bit 3 corresponds to endpoint 3. ... Bit 1 corresponds to endpoint 1. Bit 0 corresponds to endpoint 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eptne17{}; 
        ///Tx endpoint NAK Each bit enables the corresponding TX NAK bit. If this bit is set and the corresponding TX endpoint NAK bit is set, the NAK interrupt bit is set. Bit 3 corresponds to endpoint 3. ... Bit 1 corresponds to endpoint 1. Bit 0 corresponds to endpoint 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eptne18{}; 
        ///Tx endpoint NAK Each bit enables the corresponding TX NAK bit. If this bit is set and the corresponding TX endpoint NAK bit is set, the NAK interrupt bit is set. Bit 3 corresponds to endpoint 3. ... Bit 1 corresponds to endpoint 1. Bit 0 corresponds to endpoint 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eptne19{}; 
    }
    namespace Noneportsc1D{    ///<Port 1 status/control (device mode)
        using Addr = Register::Address<0x40007184,0x32702030,0,unsigned>;
        ///Current connect status
        enum class CcsVal {
            deviceNotAttached=0x00000000,     ///<Device not attached A zero indicates that the device did not attach successfully or was forcibly disconnected by the software writing a zero to the Run bit in the USBCMD register. It does not state the device being disconnected or suspended.
            deviceAttachedA=0x00000001,     ///<Device attached.  A one indicates that the device successfully attached and is operating in either high-speed mode or full-speed mode as indicated by the High Speed Port bit in this register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CcsVal> ccs{}; 
        namespace CcsValC{
            constexpr Register::FieldValue<decltype(ccs)::Type,CcsVal::deviceNotAttached> deviceNotAttached{};
            constexpr Register::FieldValue<decltype(ccs)::Type,CcsVal::deviceAttachedA> deviceAttachedA{};
        }
        }
        ///Not used in device mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csc{}; 
        ///Port enable. This bit is always 1. The device port is always enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe{}; 
        ///Port enable/disable change This bit is always 0. The device port is always enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pec{}; 
        ///Force port resume After the device has been in Suspend State for 5 ms or more, software must set this bit to one to drive resume signaling before clearing. The Device Controller will set this bit to one if a J-to-K transition is detected while the port is in the Suspend state. The bit will be cleared when the device returns to normal operation. When this bit transitions to a one because a J-to-K transition detected, the Port Change Detect bit in the USBSTS register is set to one as well.
        enum class FprVal {
            noResumeKState=0x00000000,     ///<No resume (K-state) detected/driven on port.
            resumeDetecteddriv=0x00000001,     ///<Resume detected/driven on port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,FprVal> fpr{}; 
        namespace FprValC{
            constexpr Register::FieldValue<decltype(fpr)::Type,FprVal::noResumeKState> noResumeKState{};
            constexpr Register::FieldValue<decltype(fpr)::Type,FprVal::resumeDetecteddriv> resumeDetecteddriv{};
        }
        }
        ///Suspend In device mode, this is a read-only status bit .
        enum class SuspVal {
            portNotInSuspend=0x00000000,     ///<Port not in suspend state
            portInSuspendStat=0x00000001,     ///<Port in suspend state
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SuspVal> susp{}; 
        namespace SuspValC{
            constexpr Register::FieldValue<decltype(susp)::Type,SuspVal::portNotInSuspend> portNotInSuspend{};
            constexpr Register::FieldValue<decltype(susp)::Type,SuspVal::portInSuspendStat> portInSuspendStat{};
        }
        }
        ///Port reset In device mode, this is a read-only status bit. A device reset from the USB bus is also indicated in the USBSTS register.
        enum class PrVal {
            portIsNotInTheR=0x00000000,     ///<Port is not in the reset state.
            portIsInTheReset=0x00000001,     ///<Port is in the reset state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,PrVal> pr{}; 
        namespace PrValC{
            constexpr Register::FieldValue<decltype(pr)::Type,PrVal::portIsNotInTheR> portIsNotInTheR{};
            constexpr Register::FieldValue<decltype(pr)::Type,PrVal::portIsInTheReset> portIsInTheReset{};
        }
        }
        ///High-speed status This bit is redundant with bits 27:26 (PSPD) in this register. It is implemented for compatibility reasons.
        enum class HspVal {
            hostdeviceConnecte=0x00000000,     ///<Host/device connected to the port is not in High-speed mode.
            hostdeviceConnecte=0x00000001,     ///<Host/device connected to the port is in High-speed mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,HspVal> hsp{}; 
        namespace HspValC{
            constexpr Register::FieldValue<decltype(hsp)::Type,HspVal::hostdeviceConnecte> hostdeviceConnecte{};
            constexpr Register::FieldValue<decltype(hsp)::Type,HspVal::hostdeviceConnecte> hostdeviceConnecte{};
        }
        }
        ///Not used in device mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ls{}; 
        ///Not used in device mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pp{}; 
        ///Port indicator control Writing to this field effects the value of the USB1_IND1:0 pins.
        enum class Pic10Val {
            off=0x00000000,     ///<Port indicators are off.
            amber=0x00000001,     ///<amber
            green=0x00000002,     ///<green
            undefined=0x00000003,     ///<undefined
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Pic10Val> pic10{}; 
        namespace Pic10ValC{
            constexpr Register::FieldValue<decltype(pic10)::Type,Pic10Val::off> off{};
            constexpr Register::FieldValue<decltype(pic10)::Type,Pic10Val::amber> amber{};
            constexpr Register::FieldValue<decltype(pic10)::Type,Pic10Val::green> green{};
            constexpr Register::FieldValue<decltype(pic10)::Type,Pic10Val::undefined> undefined{};
        }
        }
        ///Port test control Any value other than 0000 indicates that the port is operating in test mode. The FORCE_ENABLE_FS and FORCE ENABLE_LS are extensions to the test mode support specified in the EHCI specification. Writing the PTC field to any of the FORCE_ENABLE_HS/FS/LS values will force the port into the connected and enabled state at the selected speed. Writing the PTC field back to TEST_MODE_DISABLE will allow the port state machines to progress normally from that point. Values 0x7 to 0xF are reserved.
        enum class Ptc30Val {
            testModeDisable=0x00000000,     ///<TEST_MODE_DISABLE
            jState=0x00000001,     ///<J_STATE
            kState=0x00000002,     ///<K_STATE
            se0HostnakDevi=0x00000003,     ///<SE0 (host)/NAK (device)
            packet=0x00000004,     ///<Packet
            forceEnableHs=0x00000005,     ///<FORCE_ENABLE_HS
            forceEnableFs=0x00000006,     ///<FORCE_ENABLE_FS
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,Ptc30Val> ptc30{}; 
        namespace Ptc30ValC{
            constexpr Register::FieldValue<decltype(ptc30)::Type,Ptc30Val::testModeDisable> testModeDisable{};
            constexpr Register::FieldValue<decltype(ptc30)::Type,Ptc30Val::jState> jState{};
            constexpr Register::FieldValue<decltype(ptc30)::Type,Ptc30Val::kState> kState{};
            constexpr Register::FieldValue<decltype(ptc30)::Type,Ptc30Val::se0HostnakDevi> se0HostnakDevi{};
            constexpr Register::FieldValue<decltype(ptc30)::Type,Ptc30Val::packet> packet{};
            constexpr Register::FieldValue<decltype(ptc30)::Type,Ptc30Val::forceEnableHs> forceEnableHs{};
            constexpr Register::FieldValue<decltype(ptc30)::Type,Ptc30Val::forceEnableFs> forceEnableFs{};
        }
        }
        ///PHY low power suspend - clock disable (PLPSCD) In device mode, The PHY can be put into Low Power Suspend - Clock Disable when the device is not running (USBCMD Run/Stop = 0) or the host has signaled suspend (PORTSC SUSPEND = 1). Low power suspend will be cleared automatically when the host has signaled resume. Before forcing a resume from the device, the device controller driver must clear this bit.
        enum class PhcdVal {
            enabled=0x00000000,     ///<Writing a 0 enables the PHY clock. Reading a 0 indicates the status of the PHY clock (enabled).
            disabled=0x00000001,     ///<Writing a 1 disables the PHY clock. Reading a 1 indicates the status of the PHY clock (disabled).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,PhcdVal> phcd{}; 
        namespace PhcdValC{
            constexpr Register::FieldValue<decltype(phcd)::Type,PhcdVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(phcd)::Type,PhcdVal::disabled> disabled{};
        }
        }
        ///Port force full speed connect
        enum class PfscVal {
            anyspeed=0x00000000,     ///<Port connects at any speed.
            fullspeed=0x00000001,     ///<Writing this bit to a 1 will force the port to only connect at full speed. It disables the chirp sequence that allows the port to identify itself as High-speed. This is useful for testing FS configurations with a HS host, hub or device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,PfscVal> pfsc{}; 
        namespace PfscValC{
            constexpr Register::FieldValue<decltype(pfsc)::Type,PfscVal::anyspeed> anyspeed{};
            constexpr Register::FieldValue<decltype(pfsc)::Type,PfscVal::fullspeed> fullspeed{};
        }
        }
        ///Port speed This register field indicates the speed at which the port is operating.
        enum class PspdVal {
            fullSpeed=0x00000001,     ///<Full-speed
            invalidInDeviceMo=0x00000002,     ///<invalid in device mode
            highSpeed=0x00000003,     ///<High-speed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,PspdVal> pspd{}; 
        namespace PspdValC{
            constexpr Register::FieldValue<decltype(pspd)::Type,PspdVal::fullSpeed> fullSpeed{};
            constexpr Register::FieldValue<decltype(pspd)::Type,PspdVal::invalidInDeviceMo> invalidInDeviceMo{};
            constexpr Register::FieldValue<decltype(pspd)::Type,PspdVal::highSpeed> highSpeed{};
        }
        }
        ///Parallel transceiver select. All other values are reserved.
        enum class PtsVal {
            ulpi=0x00000002,     ///<ULPI
            serial11PhyFul=0x00000003,     ///<Serial/ 1.1 PHY (Full-speed only)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,PtsVal> pts{}; 
        namespace PtsValC{
            constexpr Register::FieldValue<decltype(pts)::Type,PtsVal::ulpi> ulpi{};
            constexpr Register::FieldValue<decltype(pts)::Type,PtsVal::serial11PhyFul> serial11PhyFul{};
        }
        }
    }
    namespace Noneportsc1H{    ///<Port 1 status/control (host mode)
        using Addr = Register::Address<0x40007184,0x32002000,0,unsigned>;
        ///Current connect status This value reflects the current state of the port and may not correspond directly to the event that caused the CSC bit to be set. This bit is 0 if PP (Port Power bit) is 0. Software clears this bit by writing a 1 to it.
        enum class CcsVal {
            noDeviceIsPresent=0x00000000,     ///<No device is present.
            deviceIsPresentOn=0x00000001,     ///<Device is present on the port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CcsVal> ccs{}; 
        namespace CcsValC{
            constexpr Register::FieldValue<decltype(ccs)::Type,CcsVal::noDeviceIsPresent> noDeviceIsPresent{};
            constexpr Register::FieldValue<decltype(ccs)::Type,CcsVal::deviceIsPresentOn> deviceIsPresentOn{};
        }
        }
        ///Connect status change Indicates a change has occurred in the port's Current Connect Status. The host/device controller sets this bit for all changes to the port device connect status, even if system software has not cleared an existing connect status change. For example, the insertion status changes twice before system software has cleared the changed condition, hub hardware will be setting an already-set bit (i.e., the bit will remain set). Software clears this bit by writing a one to it. This bit is 0 if PP (Port Power bit) is 0
        enum class CscVal {
            noChangeInCurrent=0x00000000,     ///<No change in current status.
            changeInCurrentSt=0x00000001,     ///<Change in current status.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CscVal> csc{}; 
        namespace CscValC{
            constexpr Register::FieldValue<decltype(csc)::Type,CscVal::noChangeInCurrent> noChangeInCurrent{};
            constexpr Register::FieldValue<decltype(csc)::Type,CscVal::changeInCurrentSt> changeInCurrentSt{};
        }
        }
        ///Port enable. Ports can only be enabled by the host controller as a part of the reset and enable. Software cannot enable a port by writing a one to this field. Ports can be disabled by either a fault condition (disconnect event or other fault condition) or by the host software. Note that the bit status does not change until the port state actually changes. There may be a delay in disabling or enabling a port due to other host controller and bus events. When the port is disabled. downstream propagation of data is blocked except for reset. This bit is 0 if PP (Port Power bit) is 0.
        enum class PeVal {
            portDisabled=0x00000000,     ///<Port disabled.
            portEnabled=0x00000001,     ///<Port enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::portDisabled> portDisabled{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::portEnabled> portEnabled{};
        }
        }
        ///Port disable/enable change For the root hub, this bit gets set to a one only when a port is disabled due to disconnect on the port or due to the appropriate conditions existing at the EOF2 point (See Chapter 11 of the USB Specification). Software clears this by writing a one to it. This bit is 0 if PP (Port Power bit) is 0,
        enum class PecVal {
            noChange=0x00000000,     ///<No change.
            portEnableddisable=0x00000001,     ///<Port enabled/disabled status has changed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PecVal> pec{}; 
        namespace PecValC{
            constexpr Register::FieldValue<decltype(pec)::Type,PecVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(pec)::Type,PecVal::portEnableddisable> portEnableddisable{};
        }
        }
        ///Over-current active This bit will automatically transition from 1 to 0 when the over-current condition is removed.
        enum class OcaVal {
            thePortDoesNotHa=0x00000000,     ///<The port does not have an over-current condition.
            thePortHasCurrent=0x00000001,     ///<The port has currently an over-current condition.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,OcaVal> oca{}; 
        namespace OcaValC{
            constexpr Register::FieldValue<decltype(oca)::Type,OcaVal::thePortDoesNotHa> thePortDoesNotHa{};
            constexpr Register::FieldValue<decltype(oca)::Type,OcaVal::thePortHasCurrent> thePortHasCurrent{};
        }
        }
        ///Over-current change This bit gets set to one when there is a change to Over-current Active. Software clears this bit by writing a one to this bit position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> occ{}; 
        ///Force port resume Software sets this bit to one to drive resume signaling. The Host Controller sets this bit to one if a J-to-K transition is detected while the port is in the Suspend state. When this bit transitions to a one because a J-to-K transition is detected, the Port Change Detect bit in the USBSTS register is also set to one. This bit will automatically change to zero after the resume sequence is complete. This behavior is different from EHCI where the host controller driver is required to set this bit to a zero after the resume duration is timed in the driver. Note that when the Host controller owns the port, the resume sequence follows the defined sequence documented in the USB Specification Revision 2.0. The resume signaling (Full-speed K) is driven on the port as long as this bit remains a one. This bit will remain a one until the port has switched to the high-speed idle. Writing a zero has no affect because the port controller will time the resume operation clear the bit the port control state switches to HS or FS idle. This bit is 0 if PP (Port Power bit) is 0.
        enum class FprVal {
            noResumeKState=0x00000000,     ///<No resume (K-state) detected/driven on port.
            resumeDetecteddriv=0x00000001,     ///<Resume detected/driven on port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,FprVal> fpr{}; 
        namespace FprValC{
            constexpr Register::FieldValue<decltype(fpr)::Type,FprVal::noResumeKState> noResumeKState{};
            constexpr Register::FieldValue<decltype(fpr)::Type,FprVal::resumeDetecteddriv> resumeDetecteddriv{};
        }
        }
        ///Suspend Together with the PE (Port enabled bit), this bit describes the port states, see Table 302 Port states as described by the PE and SUSP bits in the PORTSC1 register. The host controller will unconditionally set this bit to zero when software sets the Force Port Resume bit to zero. The host controller ignores a write of zero to this bit. If host software sets this bit to a one when the port is not enabled (i.e. Port enabled bit is a zero) the results are undefined. This bit is 0 if PP (Port Power bit) is 0.
        enum class SuspVal {
            portNotInSuspend=0x00000000,     ///<Port not in suspend state
            portInSuspendStat=0x00000001,     ///<Port in suspend state When in suspend state, downstream propagation of data is blocked on this port, except for port reset. The blocking occurs at the end of the current transaction if a transaction was in progress when this bit was written to 1. In the suspend state, the port is sensitive to resume detection. Note that the bit status does not change until the port is suspended and that there may be a delay in suspending a port if there is a transaction currently in progress on the USB.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SuspVal> susp{}; 
        namespace SuspValC{
            constexpr Register::FieldValue<decltype(susp)::Type,SuspVal::portNotInSuspend> portNotInSuspend{};
            constexpr Register::FieldValue<decltype(susp)::Type,SuspVal::portInSuspendStat> portInSuspendStat{};
        }
        }
        ///Port reset When software writes a one to this bit the bus-reset sequence as defined in the USB Specification Revision 2.0 is started. This bit will automatically change to zero after the reset sequence is complete. This behavior is different from EHCI where the host controller driver is required to set this bit to a zero after the reset duration is timed in the driver. This bit is 0 if PP (Port Power bit) is 0.
        enum class PrVal {
            notInReset=0x00000000,     ///<Port is not in the reset state.
            portIsInTheReset=0x00000001,     ///<Port is in the reset state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,PrVal> pr{}; 
        namespace PrValC{
            constexpr Register::FieldValue<decltype(pr)::Type,PrVal::notInReset> notInReset{};
            constexpr Register::FieldValue<decltype(pr)::Type,PrVal::portIsInTheReset> portIsInTheReset{};
        }
        }
        ///High-speed status
        enum class HspVal {
            nohighspeed=0x00000000,     ///<Host/device connected to the port is not in High-speed mode.
            highspeed=0x00000001,     ///<Host/device connected to the port is in High-speed mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,HspVal> hsp{}; 
        namespace HspValC{
            constexpr Register::FieldValue<decltype(hsp)::Type,HspVal::nohighspeed> nohighspeed{};
            constexpr Register::FieldValue<decltype(hsp)::Type,HspVal::highspeed> highspeed{};
        }
        }
        ///Line status These bits reflect the current logical levels of the USB_DP and USB_DM signal lines. USB_DP corresponds to bit 11 and USB_DM to bit 10. In host mode, the use of linestate by the host controller driver is not necessary for this controller (unlike EHCI) because the controller hardware manages the connection of LS and FS.
        enum class LsVal {
            se0UsbDpAndUsb=0x00000000,     ///<SE0 (USB_DP and USB_DM LOW)
            jStateUsbDpHigh=0x00000001,     ///<J-state (USB_DP HIGH and USB_DM LOW)
            kStateUsbDpLow=0x00000002,     ///<K-state (USB_DP LOW and USB_DM HIGH)
            undefined=0x00000003,     ///<Undefined
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,LsVal> ls{}; 
        namespace LsValC{
            constexpr Register::FieldValue<decltype(ls)::Type,LsVal::se0UsbDpAndUsb> se0UsbDpAndUsb{};
            constexpr Register::FieldValue<decltype(ls)::Type,LsVal::jStateUsbDpHigh> jStateUsbDpHigh{};
            constexpr Register::FieldValue<decltype(ls)::Type,LsVal::kStateUsbDpLow> kStateUsbDpLow{};
            constexpr Register::FieldValue<decltype(ls)::Type,LsVal::undefined> undefined{};
        }
        }
        ///Port power control Host controller requires port power control switches. This bit represents the current setting of the switch (0=off, 1=on). When power is not available on a port (i.e. PP equals a 0), the port is non-functional and will not report attaches, detaches, etc. When an over-current condition is detected on a powered port and PPC is a one, the PP bit in each affected port may be transitioned by the host controller driver from a one to a zero (removing power from the port).
        enum class PpVal {
            portPowerOff=0x00000000,     ///<Port power off.
            portPowerOn=0x00000001,     ///<Port power on.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,PpVal> pp{}; 
        namespace PpValC{
            constexpr Register::FieldValue<decltype(pp)::Type,PpVal::portPowerOff> portPowerOff{};
            constexpr Register::FieldValue<decltype(pp)::Type,PpVal::portPowerOn> portPowerOn{};
        }
        }
        ///Port indicator control Writing to this field controls the value of the pins USB1_IND1 and USB1_IND0.
        enum class Pic10Val {
            off=0x00000000,     ///<Port indicators are off.
            amber=0x00000001,     ///<Amber
            green=0x00000002,     ///<Green
            undefined=0x00000003,     ///<Undefined
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Pic10Val> pic10{}; 
        namespace Pic10ValC{
            constexpr Register::FieldValue<decltype(pic10)::Type,Pic10Val::off> off{};
            constexpr Register::FieldValue<decltype(pic10)::Type,Pic10Val::amber> amber{};
            constexpr Register::FieldValue<decltype(pic10)::Type,Pic10Val::green> green{};
            constexpr Register::FieldValue<decltype(pic10)::Type,Pic10Val::undefined> undefined{};
        }
        }
        ///Port test control Any value other than 0000 indicates that the port is operating in test mode.  The FORCE_ENABLE_FS and FORCE ENABLE_LS are extensions to the test mode support specified in the EHCI specification. Writing the PTC field to any of the FORCE_ENABLE_{HS/FS/LS} values will force the port into the connected and enabled state at the selected speed. Writing the PTC field back to TEST_MODE_DISABLE will allow the port state machines to progress normally from that point. Values 0x8 to 0xF are reserved.
        enum class Ptc30Val {
            testModeDisable=0x00000000,     ///<TEST_MODE_DISABLE
            jState=0x00000001,     ///<J_STATE
            kState=0x00000002,     ///<K_STATE
            se0HostnakDevi=0x00000003,     ///<SE0 (host)/NAK (device)
            packet=0x00000004,     ///<Packet
            forceEnableHs=0x00000005,     ///<FORCE_ENABLE_HS
            forceEnableFs=0x00000006,     ///<FORCE_ENABLE_FS
            forceEnableLs=0x00000007,     ///<FORCE_ENABLE_LS
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,Ptc30Val> ptc30{}; 
        namespace Ptc30ValC{
            constexpr Register::FieldValue<decltype(ptc30)::Type,Ptc30Val::testModeDisable> testModeDisable{};
            constexpr Register::FieldValue<decltype(ptc30)::Type,Ptc30Val::jState> jState{};
            constexpr Register::FieldValue<decltype(ptc30)::Type,Ptc30Val::kState> kState{};
            constexpr Register::FieldValue<decltype(ptc30)::Type,Ptc30Val::se0HostnakDevi> se0HostnakDevi{};
            constexpr Register::FieldValue<decltype(ptc30)::Type,Ptc30Val::packet> packet{};
            constexpr Register::FieldValue<decltype(ptc30)::Type,Ptc30Val::forceEnableHs> forceEnableHs{};
            constexpr Register::FieldValue<decltype(ptc30)::Type,Ptc30Val::forceEnableFs> forceEnableFs{};
            constexpr Register::FieldValue<decltype(ptc30)::Type,Ptc30Val::forceEnableLs> forceEnableLs{};
        }
        }
        ///Wake on connect enable (WKCNNT_E) This bit is 0 if PP (Port Power bit) is 0
        enum class WkcnVal {
            disablesThePortTo=0x00000000,     ///<Disables the port to wake up on device connects.
            enableDeviceCon=0x00000001,     ///<Writing this bit to a one enables the port to be sensitive to device connects as wake-up events.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,WkcnVal> wkcn{}; 
        namespace WkcnValC{
            constexpr Register::FieldValue<decltype(wkcn)::Type,WkcnVal::disablesThePortTo> disablesThePortTo{};
            constexpr Register::FieldValue<decltype(wkcn)::Type,WkcnVal::enableDeviceCon> enableDeviceCon{};
        }
        }
        ///Wake on disconnect enable (WKDSCNNT_E) This bit is 0 if PP (Port Power bit) is 0.
        enum class WkdcVal {
            disablesThePortTo=0x00000000,     ///<Disables the port to wake up on device disconnects.
            enableDeviceCon=0x00000001,     ///<Writing this bit to a one enables the port to be sensitive to device disconnects as wake-up events.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,WkdcVal> wkdc{}; 
        namespace WkdcValC{
            constexpr Register::FieldValue<decltype(wkdc)::Type,WkdcVal::disablesThePortTo> disablesThePortTo{};
            constexpr Register::FieldValue<decltype(wkdc)::Type,WkdcVal::enableDeviceCon> enableDeviceCon{};
        }
        }
        ///Wake on over-current enable (WKOC_E)
        enum class WkocVal {
            disablesOvercurrent=0x00000000,     ///<Disables the port to wake up on over-current events.
            enableOvercurrent=0x00000001,     ///<Writing a one to this bit enabled the port to be sensitive to over-current conditions as wake-up events.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,WkocVal> wkoc{}; 
        namespace WkocValC{
            constexpr Register::FieldValue<decltype(wkoc)::Type,WkocVal::disablesOvercurrent> disablesOvercurrent{};
            constexpr Register::FieldValue<decltype(wkoc)::Type,WkocVal::enableOvercurrent> enableOvercurrent{};
        }
        }
        ///PHY low power suspend - clock disable (PLPSCD) In host mode, the PHY can be put into Low Power Suspend - Clock Disable when the downstream device has been put into suspend mode or when no downstream device is connected. Low power suspend is completely under the control of software.
        enum class PhcdVal {
            enablePhyClk=0x00000000,     ///<Writing a 0 enables the PHY clock. Reading a 0 indicates the status of the PHY clock (enabled).
            disablePhyClk=0x00000001,     ///<Writing a 1 disables the PHY clock. Reading a 1 indicates the status of the PHY clock (disabled).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,PhcdVal> phcd{}; 
        namespace PhcdValC{
            constexpr Register::FieldValue<decltype(phcd)::Type,PhcdVal::enablePhyClk> enablePhyClk{};
            constexpr Register::FieldValue<decltype(phcd)::Type,PhcdVal::disablePhyClk> disablePhyClk{};
        }
        }
        ///Port force full speed connect
        enum class PfscVal {
            anyspeed=0x00000000,     ///<Port connects at any speed.
            fullspeed=0x00000001,     ///<Writing this bit to a 1 will force the port to only connect at Full Speed. It disables the chirp sequence that allows the port to identify itself as High Speed. This is useful for testing FS configurations with a HS host, hub or device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,PfscVal> pfsc{}; 
        namespace PfscValC{
            constexpr Register::FieldValue<decltype(pfsc)::Type,PfscVal::anyspeed> anyspeed{};
            constexpr Register::FieldValue<decltype(pfsc)::Type,PfscVal::fullspeed> fullspeed{};
        }
        }
        ///Port speed This register field indicates the speed at which the port is operating. For HS mode operation in the host controller and HS/FS operation in the device controller the port routing steers data to the Protocol engine. For FS and LS mode operation in the host controller, the port routing steers data to the Protocol Engine w/ Embedded Transaction Translator.
        enum class PspdVal {
            fullSpeed=0x00000000,     ///<Full-speed
            lowSpeed=0x00000001,     ///<Low-speed
            highSpeed=0x00000002,     ///<High-speed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,PspdVal> pspd{}; 
        namespace PspdValC{
            constexpr Register::FieldValue<decltype(pspd)::Type,PspdVal::fullSpeed> fullSpeed{};
            constexpr Register::FieldValue<decltype(pspd)::Type,PspdVal::lowSpeed> lowSpeed{};
            constexpr Register::FieldValue<decltype(pspd)::Type,PspdVal::highSpeed> highSpeed{};
        }
        }
        ///Parallel transceiver select. All other values are reserved.
        enum class PtsVal {
            ulpi=0x00000002,     ///<ULPI
            serial11PhyFul=0x00000003,     ///<Serial/ 1.1 PHY (Full-speed only)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,PtsVal> pts{}; 
        namespace PtsValC{
            constexpr Register::FieldValue<decltype(pts)::Type,PtsVal::ulpi> ulpi{};
            constexpr Register::FieldValue<decltype(pts)::Type,PtsVal::serial11PhyFul> serial11PhyFul{};
        }
        }
    }
    namespace NoneusbmodeD{    ///<USB mode (device mode)
        using Addr = Register::Address<0x400071a8,0xffffffe0,0,unsigned>;
        ///Controller mode The controller defaults to an idle state and needs to be initialized to the desired operating mode after reset. This register can only be written once after reset. If it is necessary to switch modes, software must reset the controller by writing to the RESET bit in the USBCMD register before reprogramming this register.
        enum class Cm10Val {
            idle=0x00000000,     ///<Idle
            deviceController=0x00000002,     ///<Device controller
            hostController=0x00000003,     ///<Host controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Cm10Val> cm10{}; 
        namespace Cm10ValC{
            constexpr Register::FieldValue<decltype(cm10)::Type,Cm10Val::idle> idle{};
            constexpr Register::FieldValue<decltype(cm10)::Type,Cm10Val::deviceController> deviceController{};
            constexpr Register::FieldValue<decltype(cm10)::Type,Cm10Val::hostController> hostController{};
        }
        }
        ///Endian select This bit can change the byte ordering of the transfer buffers to match the host microprocessor bus architecture. The bit fields in the microprocessor interface and the DMA data structures (including the setup buffer within the device QH) are unaffected by the value of this bit, because they are based upon 32-bit words.
        enum class EsVal {
            littleEndianFirst=0x00000000,     ///<Little endian: first byte referenced in least significant byte of 32-bit word.
            bigEndianFirstBy=0x00000001,     ///<Big endian: first byte referenced in most significant byte of 32-bit word.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,EsVal> es{}; 
        namespace EsValC{
            constexpr Register::FieldValue<decltype(es)::Type,EsVal::littleEndianFirst> littleEndianFirst{};
            constexpr Register::FieldValue<decltype(es)::Type,EsVal::bigEndianFirstBy> bigEndianFirstBy{};
        }
        }
        ///Setup Lockout mode In device mode, this bit controls behavior of the setup lock mechanism. See Section 18.10.8.
        enum class SlomVal {
            setupLockoutsOn=0x00000000,     ///<Setup Lockouts on
            setupLockoutsOff=0x00000001,     ///<Setup Lockouts Off (DCD requires the use of Setup Buffer Tripwire in USBCMD)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SlomVal> slom{}; 
        namespace SlomValC{
            constexpr Register::FieldValue<decltype(slom)::Type,SlomVal::setupLockoutsOn> setupLockoutsOn{};
            constexpr Register::FieldValue<decltype(slom)::Type,SlomVal::setupLockoutsOff> setupLockoutsOff{};
        }
        }
        ///Stream disable mode  The use of this feature substantially limits the overall USB performance that can be achieved.
        enum class SdisVal {
            notDisabled=0x00000000,     ///<Not disabled
            disabledSettingTh=0x00000001,     ///<Disabled. Setting this bit to one disables double priming on both RX and TX for low bandwidth systems. This mode ensures that when the RX and TX buffers are sufficient to contain an entire packet that the standard double buffering scheme is disabled to prevent overruns/underruns in bandwidth limited systems. Note: In High Speed Mode, all packets received will be responded to with a NYET handshake when stream disable is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SdisVal> sdis{}; 
        namespace SdisValC{
            constexpr Register::FieldValue<decltype(sdis)::Type,SdisVal::notDisabled> notDisabled{};
            constexpr Register::FieldValue<decltype(sdis)::Type,SdisVal::disabledSettingTh> disabledSettingTh{};
        }
        }
    }
    namespace NoneusbmodeH{    ///<USB mode (host mode)
        using Addr = Register::Address<0x400071a8,0xffffffc8,0,unsigned>;
        ///Controller mode The controller defaults to an idle state and needs to be initialized to the desired operating mode after reset. This register can only be written once after reset. If it is necessary to switch modes, software must reset the controller by writing to the RESET bit in the USBCMD register before reprogramming this register.
        enum class Cm10Val {
            idle=0x00000000,     ///<Idle
            deviceController=0x00000002,     ///<Device controller
            hostController=0x00000003,     ///<Host controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Cm10Val> cm10{}; 
        namespace Cm10ValC{
            constexpr Register::FieldValue<decltype(cm10)::Type,Cm10Val::idle> idle{};
            constexpr Register::FieldValue<decltype(cm10)::Type,Cm10Val::deviceController> deviceController{};
            constexpr Register::FieldValue<decltype(cm10)::Type,Cm10Val::hostController> hostController{};
        }
        }
        ///Endian select This bit can change the byte ordering of the transfer buffers. The bit fields in the microprocessor interface and the DMA data structures (including the setup buffer within the device QH) are unaffected by the value of this bit, because they are based upon 32-bit words.
        enum class EsVal {
            littleEndianFirst=0x00000000,     ///<Little endian: first byte referenced in least significant byte of 32-bit word.
            bigEndianFirstBy=0x00000001,     ///<Big endian: first byte referenced in most significant byte of 32-bit word.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,EsVal> es{}; 
        namespace EsValC{
            constexpr Register::FieldValue<decltype(es)::Type,EsVal::littleEndianFirst> littleEndianFirst{};
            constexpr Register::FieldValue<decltype(es)::Type,EsVal::bigEndianFirstBy> bigEndianFirstBy{};
        }
        }
        ///Stream disable mode  The use of this feature substantially limits the overall USB performance that can be achieved.
        enum class SdisVal {
            notDisabled=0x00000000,     ///<Not disabled
            disabledSettingTo=0x00000001,     ///<Disabled. Setting to a 1 ensures that overruns/underruns of the latency FIFO are eliminated for low bandwidth systems where the RX and TX buffers are sufficient to contain the entire packet. Enabling stream disable also has the effect of ensuring the the TX latency is filled to capacity before the packet is launched onto the USB. Note: Time duration to pre-fill the FIFO becomes significant when stream disable is active. See TXFILLTUNING to characterize the adjustments needed for the scheduler when using this feature.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SdisVal> sdis{}; 
        namespace SdisValC{
            constexpr Register::FieldValue<decltype(sdis)::Type,SdisVal::notDisabled> notDisabled{};
            constexpr Register::FieldValue<decltype(sdis)::Type,SdisVal::disabledSettingTo> disabledSettingTo{};
        }
        }
        ///VBUS power select
        enum class VbpsVal {
            low=0x00000000,     ///<vbus_pwr_select is set LOW.
            high=0x00000001,     ///<vbus_pwr_select is set HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,VbpsVal> vbps{}; 
        namespace VbpsValC{
            constexpr Register::FieldValue<decltype(vbps)::Type,VbpsVal::low> low{};
            constexpr Register::FieldValue<decltype(vbps)::Type,VbpsVal::high> high{};
        }
        }
    }
    namespace Noneendptsetupstat{    ///<Endpoint setup status
        using Addr = Register::Address<0x400071ac,0xfffffff0,0,unsigned>;
        ///Setup endpoint status for logical endpoints. For every setup transaction that is received, a corresponding bit in this register is set to one. Software must clear or acknowledge the setup transfer by writing a one to a respective bit after it has read the setup data from Queue head. The response to a setup packet as in the order of operations and total response time is crucial to limit bus time outs while the setup lockout mechanism is engaged.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> endptsetupstat0{}; 
        ///Setup endpoint status for logical endpoints. For every setup transaction that is received, a corresponding bit in this register is set to one. Software must clear or acknowledge the setup transfer by writing a one to a respective bit after it has read the setup data from Queue head. The response to a setup packet as in the order of operations and total response time is crucial to limit bus time outs while the setup lockout mechanism is engaged.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> endptsetupstat1{}; 
        ///Setup endpoint status for logical endpoints. For every setup transaction that is received, a corresponding bit in this register is set to one. Software must clear or acknowledge the setup transfer by writing a one to a respective bit after it has read the setup data from Queue head. The response to a setup packet as in the order of operations and total response time is crucial to limit bus time outs while the setup lockout mechanism is engaged.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endptsetupstat2{}; 
        ///Setup endpoint status for logical endpoints. For every setup transaction that is received, a corresponding bit in this register is set to one. Software must clear or acknowledge the setup transfer by writing a one to a respective bit after it has read the setup data from Queue head. The response to a setup packet as in the order of operations and total response time is crucial to limit bus time outs while the setup lockout mechanism is engaged.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endptsetupstat3{}; 
    }
    namespace Noneendptprime{    ///<Endpoint initialization
        using Addr = Register::Address<0x400071b0,0xfff0fff0,0,unsigned>;
        ///Prime endpoint receive buffer for physical OUT endpoints. For each OUT endpoint, a corresponding bit is set to 1 by software to request a buffer be prepared for a receive operation for when a USB host initiates a USB OUT transaction. Software should write a one to the corresponding bit whenever posting a new transfer descriptor to an endpoint. Hardware will automatically use this bit to begin parsing for a new transfer descriptor from the queue head and prepare a receive buffer. Hardware will clear this bit when the associated endpoint(s) is (are) successfully primed. PERB0 = endpoint 0 ... PERB3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> perb0{}; 
        ///Prime endpoint receive buffer for physical OUT endpoints. For each OUT endpoint, a corresponding bit is set to 1 by software to request a buffer be prepared for a receive operation for when a USB host initiates a USB OUT transaction. Software should write a one to the corresponding bit whenever posting a new transfer descriptor to an endpoint. Hardware will automatically use this bit to begin parsing for a new transfer descriptor from the queue head and prepare a receive buffer. Hardware will clear this bit when the associated endpoint(s) is (are) successfully primed. PERB0 = endpoint 0 ... PERB3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> perb1{}; 
        ///Prime endpoint receive buffer for physical OUT endpoints. For each OUT endpoint, a corresponding bit is set to 1 by software to request a buffer be prepared for a receive operation for when a USB host initiates a USB OUT transaction. Software should write a one to the corresponding bit whenever posting a new transfer descriptor to an endpoint. Hardware will automatically use this bit to begin parsing for a new transfer descriptor from the queue head and prepare a receive buffer. Hardware will clear this bit when the associated endpoint(s) is (are) successfully primed. PERB0 = endpoint 0 ... PERB3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> perb2{}; 
        ///Prime endpoint receive buffer for physical OUT endpoints. For each OUT endpoint, a corresponding bit is set to 1 by software to request a buffer be prepared for a receive operation for when a USB host initiates a USB OUT transaction. Software should write a one to the corresponding bit whenever posting a new transfer descriptor to an endpoint. Hardware will automatically use this bit to begin parsing for a new transfer descriptor from the queue head and prepare a receive buffer. Hardware will clear this bit when the associated endpoint(s) is (are) successfully primed. PERB0 = endpoint 0 ... PERB3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perb3{}; 
        ///Prime endpoint transmit buffer for physical IN endpoints. For each IN endpoint a corresponding bit is set to one by software to request a buffer be prepared for a transmit operation in order to respond to a USB IN/INTERRUPT transaction. Software should write a one to the corresponding bit when posting a new transfer descriptor to an endpoint. Hardware will automatically use this bit to begin parsing for a new transfer descriptor from the queue head and prepare a transmit buffer. Hardware will clear this bit when the associated endpoint(s) is (are) successfully primed.  PETB0 = endpoint 0 ... PETB3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> petb0{}; 
        ///Prime endpoint transmit buffer for physical IN endpoints. For each IN endpoint a corresponding bit is set to one by software to request a buffer be prepared for a transmit operation in order to respond to a USB IN/INTERRUPT transaction. Software should write a one to the corresponding bit when posting a new transfer descriptor to an endpoint. Hardware will automatically use this bit to begin parsing for a new transfer descriptor from the queue head and prepare a transmit buffer. Hardware will clear this bit when the associated endpoint(s) is (are) successfully primed.  PETB0 = endpoint 0 ... PETB3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> petb1{}; 
        ///Prime endpoint transmit buffer for physical IN endpoints. For each IN endpoint a corresponding bit is set to one by software to request a buffer be prepared for a transmit operation in order to respond to a USB IN/INTERRUPT transaction. Software should write a one to the corresponding bit when posting a new transfer descriptor to an endpoint. Hardware will automatically use this bit to begin parsing for a new transfer descriptor from the queue head and prepare a transmit buffer. Hardware will clear this bit when the associated endpoint(s) is (are) successfully primed.  PETB0 = endpoint 0 ... PETB3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> petb2{}; 
        ///Prime endpoint transmit buffer for physical IN endpoints. For each IN endpoint a corresponding bit is set to one by software to request a buffer be prepared for a transmit operation in order to respond to a USB IN/INTERRUPT transaction. Software should write a one to the corresponding bit when posting a new transfer descriptor to an endpoint. Hardware will automatically use this bit to begin parsing for a new transfer descriptor from the queue head and prepare a transmit buffer. Hardware will clear this bit when the associated endpoint(s) is (are) successfully primed.  PETB0 = endpoint 0 ... PETB3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> petb3{}; 
    }
    namespace Noneendptflush{    ///<Endpoint de-initialization
        using Addr = Register::Address<0x400071b4,0xfff0fff0,0,unsigned>;
        ///Flush endpoint receive buffer for physical OUT endpoints. Writing a one to a bit(s) will clear any primed buffers. FERB0 = endpoint 0 ... FERB3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ferb0{}; 
        ///Flush endpoint receive buffer for physical OUT endpoints. Writing a one to a bit(s) will clear any primed buffers. FERB0 = endpoint 0 ... FERB3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ferb1{}; 
        ///Flush endpoint receive buffer for physical OUT endpoints. Writing a one to a bit(s) will clear any primed buffers. FERB0 = endpoint 0 ... FERB3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ferb2{}; 
        ///Flush endpoint receive buffer for physical OUT endpoints. Writing a one to a bit(s) will clear any primed buffers. FERB0 = endpoint 0 ... FERB3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ferb3{}; 
        ///Flush endpoint transmit buffer for physical IN endpoints. Writing a one to a bit(s) will clear any primed buffers.  FETB0 = endpoint 0 ... FETB3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fetb0{}; 
        ///Flush endpoint transmit buffer for physical IN endpoints. Writing a one to a bit(s) will clear any primed buffers.  FETB0 = endpoint 0 ... FETB3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fetb1{}; 
        ///Flush endpoint transmit buffer for physical IN endpoints. Writing a one to a bit(s) will clear any primed buffers.  FETB0 = endpoint 0 ... FETB3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fetb2{}; 
        ///Flush endpoint transmit buffer for physical IN endpoints. Writing a one to a bit(s) will clear any primed buffers.  FETB0 = endpoint 0 ... FETB3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> fetb3{}; 
    }
    namespace Noneendptstat{    ///<Endpoint status
        using Addr = Register::Address<0x400071b8,0xfff0fff0,0,unsigned>;
        ///Endpoint receive buffer ready for physical OUT endpoints. This bit is set to 1 by hardware as a response to receiving a command from a corresponding bit in the ENDPTPRIME register. ERBR0 = endpoint 0 ... ERBR3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> erbr0{}; 
        ///Endpoint receive buffer ready for physical OUT endpoints. This bit is set to 1 by hardware as a response to receiving a command from a corresponding bit in the ENDPTPRIME register. ERBR0 = endpoint 0 ... ERBR3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> erbr1{}; 
        ///Endpoint receive buffer ready for physical OUT endpoints. This bit is set to 1 by hardware as a response to receiving a command from a corresponding bit in the ENDPTPRIME register. ERBR0 = endpoint 0 ... ERBR3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> erbr2{}; 
        ///Endpoint receive buffer ready for physical OUT endpoints. This bit is set to 1 by hardware as a response to receiving a command from a corresponding bit in the ENDPTPRIME register. ERBR0 = endpoint 0 ... ERBR3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> erbr3{}; 
        ///Endpoint transmit buffer ready for physical IN endpoints 3 to 0. This bit is set to 1 by hardware as a response to receiving a command from a corresponding bit in the ENDPTPRIME register. ETBR0 = endpoint 0 ... ETBR3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> etbr0{}; 
        ///Endpoint transmit buffer ready for physical IN endpoints 3 to 0. This bit is set to 1 by hardware as a response to receiving a command from a corresponding bit in the ENDPTPRIME register. ETBR0 = endpoint 0 ... ETBR3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> etbr1{}; 
        ///Endpoint transmit buffer ready for physical IN endpoints 3 to 0. This bit is set to 1 by hardware as a response to receiving a command from a corresponding bit in the ENDPTPRIME register. ETBR0 = endpoint 0 ... ETBR3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> etbr2{}; 
        ///Endpoint transmit buffer ready for physical IN endpoints 3 to 0. This bit is set to 1 by hardware as a response to receiving a command from a corresponding bit in the ENDPTPRIME register. ETBR0 = endpoint 0 ... ETBR3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> etbr3{}; 
    }
    namespace Noneendptcomplete{    ///<Endpoint complete
        using Addr = Register::Address<0x400071bc,0xfff0fff0,0,unsigned>;
        ///Endpoint receive complete event for physical OUT endpoints. This bit is set to 1 by hardware when receive event (OUT/SETUP) occurred. ERCE0 = endpoint 0 ... ERCE3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> erce0{}; 
        ///Endpoint receive complete event for physical OUT endpoints. This bit is set to 1 by hardware when receive event (OUT/SETUP) occurred. ERCE0 = endpoint 0 ... ERCE3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> erce1{}; 
        ///Endpoint receive complete event for physical OUT endpoints. This bit is set to 1 by hardware when receive event (OUT/SETUP) occurred. ERCE0 = endpoint 0 ... ERCE3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> erce2{}; 
        ///Endpoint receive complete event for physical OUT endpoints. This bit is set to 1 by hardware when receive event (OUT/SETUP) occurred. ERCE0 = endpoint 0 ... ERCE3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> erce3{}; 
        ///Endpoint transmit complete event for physical IN endpoints. This bit is set to 1 by hardware when a transmit event (IN/INTERRUPT) occurred. ETCE0 = endpoint 0 ... ETCE3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> etce0{}; 
        ///Endpoint transmit complete event for physical IN endpoints. This bit is set to 1 by hardware when a transmit event (IN/INTERRUPT) occurred. ETCE0 = endpoint 0 ... ETCE3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> etce1{}; 
        ///Endpoint transmit complete event for physical IN endpoints. This bit is set to 1 by hardware when a transmit event (IN/INTERRUPT) occurred. ETCE0 = endpoint 0 ... ETCE3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> etce2{}; 
        ///Endpoint transmit complete event for physical IN endpoints. This bit is set to 1 by hardware when a transmit event (IN/INTERRUPT) occurred. ETCE0 = endpoint 0 ... ETCE3 = endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> etce3{}; 
    }
    namespace Noneendptctrl0{    ///<Endpoint control 0
        using Addr = Register::Address<0x400071c0,0xff72ff72,0,unsigned>;
        ///Rx endpoint stall
        enum class RxsVal {
            endpointOk=0x00000000,     ///<Endpoint ok.
            endpointStalledSof=0x00000001,     ///<Endpoint stalled Software can write a one to this bit to force the endpoint to return a STALL handshake to the Host. It will continue returning STALL until the bit is cleared by software, or it will automatically be cleared upon receipt of a new SETUP request. After receiving a SETUP request, this bit will continue to be cleared by hardware until the associated ENDSETUPSTAT bit is cleared.[1]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RxsVal> rxs{}; 
        namespace RxsValC{
            constexpr Register::FieldValue<decltype(rxs)::Type,RxsVal::endpointOk> endpointOk{};
            constexpr Register::FieldValue<decltype(rxs)::Type,RxsVal::endpointStalledSof> endpointStalledSof{};
        }
        }
        ///Endpoint type Endpoint 0 is always a control endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rxt{}; 
        ///Rx endpoint enable Endpoint enabled. Control endpoint 0 is always enabled. This bit is always 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rxe{}; 
        ///Tx endpoint stall
        enum class TxsVal {
            endpointOk=0x00000000,     ///<Endpoint ok.
            endpointStalledSof=0x00000001,     ///<Endpoint stalled Software can write a one to this bit to force the endpoint to return a STALL handshake to the Host. It will continue returning STALL until the bit is cleared by software, or it will automatically be cleared upon receipt of a new SETUP request. After receiving a SETUP request, this bit will continue to be cleared by hardware until the associated ENDSETUPSTAT bit is cleared.[1]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TxsVal> txs{}; 
        namespace TxsValC{
            constexpr Register::FieldValue<decltype(txs)::Type,TxsVal::endpointOk> endpointOk{};
            constexpr Register::FieldValue<decltype(txs)::Type,TxsVal::endpointStalledSof> endpointStalledSof{};
        }
        }
        ///Endpoint type Endpoint 0 is always a control endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> txt{}; 
        ///Tx endpoint enable Endpoint enabled. Control endpoint 0 is always enabled. This bit is always 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> txe{}; 
    }
    namespace Noneendptctrl1{    ///<Endpoint control 
        using Addr = Register::Address<0x400071c4,0xff12ff12,0,unsigned>;
        ///Rx endpoint stall
        enum class RxsVal {
            endpointOkThisBi=0x00000000,     ///<Endpoint ok. This bit will be cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control Endpoint and this bit will continue to be cleared by hardware until the associated ENDPTSETUPSTAT bit is cleared.
            endpointStalledSof=0x00000001,     ///<Endpoint stalled Software can write a one to this bit to force the endpoint to return a STALL handshake to the Host. It will continue returning STALL until the bit is cleared by software, or it will automatically be cleared upon receipt of a new SETUP request.[1]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RxsVal> rxs{}; 
        namespace RxsValC{
            constexpr Register::FieldValue<decltype(rxs)::Type,RxsVal::endpointOkThisBi> endpointOkThisBi{};
            constexpr Register::FieldValue<decltype(rxs)::Type,RxsVal::endpointStalledSof> endpointStalledSof{};
        }
        }
        ///Endpoint type
        enum class RxtVal {
            control=0x00000000,     ///<Control
            isochronous=0x00000001,     ///<Isochronous
            bulk=0x00000002,     ///<Bulk
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,RxtVal> rxt{}; 
        namespace RxtValC{
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::control> control{};
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::isochronous> isochronous{};
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::bulk> bulk{};
        }
        }
        ///Rx data toggle inhibit This bit is only used for test and should always be written as zero. Writing a one to this bit will cause this endpoint to ignore the data toggle sequence and always accept data packets regardless of their data PID.
        enum class RxiVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RxiVal> rxi{}; 
        namespace RxiValC{
            constexpr Register::FieldValue<decltype(rxi)::Type,RxiVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxi)::Type,RxiVal::enabled> enabled{};
        }
        }
        ///Rx data toggle reset Write 1 to reset the PID sequence. Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PIDs between the host and device.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxr{}; 
        ///Rx endpoint enable An endpoint should be enabled only after it has been configured.
        enum class RxeVal {
            endpointDisabled=0x00000000,     ///<Endpoint disabled.
            endpointEnabled=0x00000001,     ///<Endpoint enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxeVal> rxe{}; 
        namespace RxeValC{
            constexpr Register::FieldValue<decltype(rxe)::Type,RxeVal::endpointDisabled> endpointDisabled{};
            constexpr Register::FieldValue<decltype(rxe)::Type,RxeVal::endpointEnabled> endpointEnabled{};
        }
        }
        ///Tx endpoint stall
        enum class TxsVal {
            endpointOkThisBi=0x00000000,     ///<Endpoint ok. This bit will be cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control Endpoint, and this bit will continue to be cleared by hardware until the associated ENDPTSETUPSTAT bit is cleared.
            endpointStalledSof=0x00000001,     ///<Endpoint stalled Software can write a one to this bit to force the endpoint to return a STALL handshake to the Host. It will continue returning STALL until the bit is cleared by software, or it will automatically be cleared upon receipt of a new SETUP request.[1]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TxsVal> txs{}; 
        namespace TxsValC{
            constexpr Register::FieldValue<decltype(txs)::Type,TxsVal::endpointOkThisBi> endpointOkThisBi{};
            constexpr Register::FieldValue<decltype(txs)::Type,TxsVal::endpointStalledSof> endpointStalledSof{};
        }
        }
        ///Tx endpoint type
        enum class TxtVal {
            control=0x00000000,     ///<Control
            isochronous=0x00000001,     ///<Isochronous
            bulk=0x00000002,     ///<Bulk
            interrupt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,TxtVal> txt{}; 
        namespace TxtValC{
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::control> control{};
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::isochronous> isochronous{};
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::bulk> bulk{};
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::interrupt> interrupt{};
        }
        }
        ///Tx data toggle inhibit This bit is only used for test and should always be written as zero. Writing a one to this bit will cause this endpoint to ignore the data toggle sequence and always accept data packets regardless of their data PID.
        enum class TxiVal {
            enabled=0x00000000,     ///<Enabled
            disabled=0x00000001,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,TxiVal> txi{}; 
        namespace TxiValC{
            constexpr Register::FieldValue<decltype(txi)::Type,TxiVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txi)::Type,TxiVal::disabled> disabled{};
        }
        }
        ///Tx data toggle reset Write 1 to reset the PID sequence. Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PIDs between the host and device.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> txr{}; 
        ///Tx endpoint enable An endpoint should be enabled only after it has been configured
        enum class TxeVal {
            endpointDisabled=0x00000000,     ///<Endpoint disabled.
            endpointEnabled=0x00000001,     ///<Endpoint enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TxeVal> txe{}; 
        namespace TxeValC{
            constexpr Register::FieldValue<decltype(txe)::Type,TxeVal::endpointDisabled> endpointDisabled{};
            constexpr Register::FieldValue<decltype(txe)::Type,TxeVal::endpointEnabled> endpointEnabled{};
        }
        }
    }
    namespace Noneendptctrl2{    ///<Endpoint control 
        using Addr = Register::Address<0x400071c8,0xff12ff12,0,unsigned>;
        ///Rx endpoint stall
        enum class RxsVal {
            endpointOkThisBi=0x00000000,     ///<Endpoint ok. This bit will be cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control Endpoint and this bit will continue to be cleared by hardware until the associated ENDPTSETUPSTAT bit is cleared.
            endpointStalledSof=0x00000001,     ///<Endpoint stalled Software can write a one to this bit to force the endpoint to return a STALL handshake to the Host. It will continue returning STALL until the bit is cleared by software, or it will automatically be cleared upon receipt of a new SETUP request.[1]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RxsVal> rxs{}; 
        namespace RxsValC{
            constexpr Register::FieldValue<decltype(rxs)::Type,RxsVal::endpointOkThisBi> endpointOkThisBi{};
            constexpr Register::FieldValue<decltype(rxs)::Type,RxsVal::endpointStalledSof> endpointStalledSof{};
        }
        }
        ///Endpoint type
        enum class RxtVal {
            control=0x00000000,     ///<Control
            isochronous=0x00000001,     ///<Isochronous
            bulk=0x00000002,     ///<Bulk
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,RxtVal> rxt{}; 
        namespace RxtValC{
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::control> control{};
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::isochronous> isochronous{};
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::bulk> bulk{};
        }
        }
        ///Rx data toggle inhibit This bit is only used for test and should always be written as zero. Writing a one to this bit will cause this endpoint to ignore the data toggle sequence and always accept data packets regardless of their data PID.
        enum class RxiVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RxiVal> rxi{}; 
        namespace RxiValC{
            constexpr Register::FieldValue<decltype(rxi)::Type,RxiVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxi)::Type,RxiVal::enabled> enabled{};
        }
        }
        ///Rx data toggle reset Write 1 to reset the PID sequence. Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PIDs between the host and device.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxr{}; 
        ///Rx endpoint enable An endpoint should be enabled only after it has been configured.
        enum class RxeVal {
            endpointDisabled=0x00000000,     ///<Endpoint disabled.
            endpointEnabled=0x00000001,     ///<Endpoint enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxeVal> rxe{}; 
        namespace RxeValC{
            constexpr Register::FieldValue<decltype(rxe)::Type,RxeVal::endpointDisabled> endpointDisabled{};
            constexpr Register::FieldValue<decltype(rxe)::Type,RxeVal::endpointEnabled> endpointEnabled{};
        }
        }
        ///Tx endpoint stall
        enum class TxsVal {
            endpointOkThisBi=0x00000000,     ///<Endpoint ok. This bit will be cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control Endpoint, and this bit will continue to be cleared by hardware until the associated ENDPTSETUPSTAT bit is cleared.
            endpointStalledSof=0x00000001,     ///<Endpoint stalled Software can write a one to this bit to force the endpoint to return a STALL handshake to the Host. It will continue returning STALL until the bit is cleared by software, or it will automatically be cleared upon receipt of a new SETUP request.[1]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TxsVal> txs{}; 
        namespace TxsValC{
            constexpr Register::FieldValue<decltype(txs)::Type,TxsVal::endpointOkThisBi> endpointOkThisBi{};
            constexpr Register::FieldValue<decltype(txs)::Type,TxsVal::endpointStalledSof> endpointStalledSof{};
        }
        }
        ///Tx endpoint type
        enum class TxtVal {
            control=0x00000000,     ///<Control
            isochronous=0x00000001,     ///<Isochronous
            bulk=0x00000002,     ///<Bulk
            interrupt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,TxtVal> txt{}; 
        namespace TxtValC{
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::control> control{};
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::isochronous> isochronous{};
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::bulk> bulk{};
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::interrupt> interrupt{};
        }
        }
        ///Tx data toggle inhibit This bit is only used for test and should always be written as zero. Writing a one to this bit will cause this endpoint to ignore the data toggle sequence and always accept data packets regardless of their data PID.
        enum class TxiVal {
            enabled=0x00000000,     ///<Enabled
            disabled=0x00000001,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,TxiVal> txi{}; 
        namespace TxiValC{
            constexpr Register::FieldValue<decltype(txi)::Type,TxiVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txi)::Type,TxiVal::disabled> disabled{};
        }
        }
        ///Tx data toggle reset Write 1 to reset the PID sequence. Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PIDs between the host and device.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> txr{}; 
        ///Tx endpoint enable An endpoint should be enabled only after it has been configured
        enum class TxeVal {
            endpointDisabled=0x00000000,     ///<Endpoint disabled.
            endpointEnabled=0x00000001,     ///<Endpoint enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TxeVal> txe{}; 
        namespace TxeValC{
            constexpr Register::FieldValue<decltype(txe)::Type,TxeVal::endpointDisabled> endpointDisabled{};
            constexpr Register::FieldValue<decltype(txe)::Type,TxeVal::endpointEnabled> endpointEnabled{};
        }
        }
    }
    namespace Noneendptctrl3{    ///<Endpoint control 
        using Addr = Register::Address<0x400071cc,0xff12ff12,0,unsigned>;
        ///Rx endpoint stall
        enum class RxsVal {
            endpointOkThisBi=0x00000000,     ///<Endpoint ok. This bit will be cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control Endpoint and this bit will continue to be cleared by hardware until the associated ENDPTSETUPSTAT bit is cleared.
            endpointStalledSof=0x00000001,     ///<Endpoint stalled Software can write a one to this bit to force the endpoint to return a STALL handshake to the Host. It will continue returning STALL until the bit is cleared by software, or it will automatically be cleared upon receipt of a new SETUP request.[1]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RxsVal> rxs{}; 
        namespace RxsValC{
            constexpr Register::FieldValue<decltype(rxs)::Type,RxsVal::endpointOkThisBi> endpointOkThisBi{};
            constexpr Register::FieldValue<decltype(rxs)::Type,RxsVal::endpointStalledSof> endpointStalledSof{};
        }
        }
        ///Endpoint type
        enum class RxtVal {
            control=0x00000000,     ///<Control
            isochronous=0x00000001,     ///<Isochronous
            bulk=0x00000002,     ///<Bulk
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,RxtVal> rxt{}; 
        namespace RxtValC{
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::control> control{};
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::isochronous> isochronous{};
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::bulk> bulk{};
        }
        }
        ///Rx data toggle inhibit This bit is only used for test and should always be written as zero. Writing a one to this bit will cause this endpoint to ignore the data toggle sequence and always accept data packets regardless of their data PID.
        enum class RxiVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RxiVal> rxi{}; 
        namespace RxiValC{
            constexpr Register::FieldValue<decltype(rxi)::Type,RxiVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxi)::Type,RxiVal::enabled> enabled{};
        }
        }
        ///Rx data toggle reset Write 1 to reset the PID sequence. Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PIDs between the host and device.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxr{}; 
        ///Rx endpoint enable An endpoint should be enabled only after it has been configured.
        enum class RxeVal {
            endpointDisabled=0x00000000,     ///<Endpoint disabled.
            endpointEnabled=0x00000001,     ///<Endpoint enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxeVal> rxe{}; 
        namespace RxeValC{
            constexpr Register::FieldValue<decltype(rxe)::Type,RxeVal::endpointDisabled> endpointDisabled{};
            constexpr Register::FieldValue<decltype(rxe)::Type,RxeVal::endpointEnabled> endpointEnabled{};
        }
        }
        ///Tx endpoint stall
        enum class TxsVal {
            endpointOkThisBi=0x00000000,     ///<Endpoint ok. This bit will be cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control Endpoint, and this bit will continue to be cleared by hardware until the associated ENDPTSETUPSTAT bit is cleared.
            endpointStalledSof=0x00000001,     ///<Endpoint stalled Software can write a one to this bit to force the endpoint to return a STALL handshake to the Host. It will continue returning STALL until the bit is cleared by software, or it will automatically be cleared upon receipt of a new SETUP request.[1]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TxsVal> txs{}; 
        namespace TxsValC{
            constexpr Register::FieldValue<decltype(txs)::Type,TxsVal::endpointOkThisBi> endpointOkThisBi{};
            constexpr Register::FieldValue<decltype(txs)::Type,TxsVal::endpointStalledSof> endpointStalledSof{};
        }
        }
        ///Tx endpoint type
        enum class TxtVal {
            control=0x00000000,     ///<Control
            isochronous=0x00000001,     ///<Isochronous
            bulk=0x00000002,     ///<Bulk
            interrupt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,TxtVal> txt{}; 
        namespace TxtValC{
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::control> control{};
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::isochronous> isochronous{};
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::bulk> bulk{};
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::interrupt> interrupt{};
        }
        }
        ///Tx data toggle inhibit This bit is only used for test and should always be written as zero. Writing a one to this bit will cause this endpoint to ignore the data toggle sequence and always accept data packets regardless of their data PID.
        enum class TxiVal {
            enabled=0x00000000,     ///<Enabled
            disabled=0x00000001,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,TxiVal> txi{}; 
        namespace TxiValC{
            constexpr Register::FieldValue<decltype(txi)::Type,TxiVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txi)::Type,TxiVal::disabled> disabled{};
        }
        }
        ///Tx data toggle reset Write 1 to reset the PID sequence. Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PIDs between the host and device.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> txr{}; 
        ///Tx endpoint enable An endpoint should be enabled only after it has been configured
        enum class TxeVal {
            endpointDisabled=0x00000000,     ///<Endpoint disabled.
            endpointEnabled=0x00000001,     ///<Endpoint enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TxeVal> txe{}; 
        namespace TxeValC{
            constexpr Register::FieldValue<decltype(txe)::Type,TxeVal::endpointDisabled> endpointDisabled{};
            constexpr Register::FieldValue<decltype(txe)::Type,TxeVal::endpointEnabled> endpointEnabled{};
        }
        }
    }
}
