#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//USB2.0 device controller 
    namespace UsbDevcmdstat{    ///<USB Device Command/Status register
        using Addr = Register::Address<0x40080000,0x00000000,0x00000000,unsigned>;
        ///USB device address. After bus reset, the address is reset to 0x00. If the enable bit is set, the device will respond on packets for function address DEV_ADDR. When receiving a SetAddress Control Request from the USB host, software must program the new address before completing the status phase of the SetAddress Control Request.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> devAddr{}; 
        ///USB device enable. If this bit is set, the HW will start responding on packets for function address DEV_ADDR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> devEn{}; 
        ///SETUP token received. If a SETUP token is received and acknowledged by the device, this bit is set. As long as this bit is set all received IN and OUT tokens will be NAKed by HW. SW must clear this bit by writing a one. If this bit is zero, HW will handle the tokens to the CTRL EP0 as indicated by the CTRL EP0 IN and OUT data information programmed by SW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setup{}; 
        ///Always PLL Clock on:
        enum class PllonVal {
            usbNeedclkFunction=0x00000000,     ///<USB_NeedClk functional
            usbNeedclkAlways1=0x00000001,     ///<USB_NeedClk always 1. Clock will not be stopped in case of suspend.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,PllonVal> pllOn{}; 
        namespace PllonValC{
            constexpr Register::FieldValue<decltype(pllOn)::Type,PllonVal::usbNeedclkFunction> usbNeedclkFunction{};
            constexpr Register::FieldValue<decltype(pllOn)::Type,PllonVal::usbNeedclkAlways1> usbNeedclkAlways1{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///LPM Supported:
        enum class LpmsupVal {
            lpmNotSupported=0x00000000,     ///<LPM not supported.
            lpmSupported=0x00000001,     ///<LPM supported.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,LpmsupVal> lpmSup{}; 
        namespace LpmsupValC{
            constexpr Register::FieldValue<decltype(lpmSup)::Type,LpmsupVal::lpmNotSupported> lpmNotSupported{};
            constexpr Register::FieldValue<decltype(lpmSup)::Type,LpmsupVal::lpmSupported> lpmSupported{};
        }
        ///Interrupt on NAK for interrupt and bulk OUT EP
        enum class IntonnakaoVal {
            acknow=0x00000000,     ///<Only acknowledged packets generate an interrupt
            acknowNak=0x00000001,     ///<Both acknowledged and NAKed packets generate interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,IntonnakaoVal> intonnakAo{}; 
        namespace IntonnakaoValC{
            constexpr Register::FieldValue<decltype(intonnakAo)::Type,IntonnakaoVal::acknow> acknow{};
            constexpr Register::FieldValue<decltype(intonnakAo)::Type,IntonnakaoVal::acknowNak> acknowNak{};
        }
        ///Interrupt on NAK for interrupt and bulk IN EP
        enum class IntonnakaiVal {
            acknow=0x00000000,     ///<Only acknowledged packets generate an interrupt
            acknowNak=0x00000001,     ///<Both acknowledged and NAKed packets generate interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,IntonnakaiVal> intonnakAi{}; 
        namespace IntonnakaiValC{
            constexpr Register::FieldValue<decltype(intonnakAi)::Type,IntonnakaiVal::acknow> acknow{};
            constexpr Register::FieldValue<decltype(intonnakAi)::Type,IntonnakaiVal::acknowNak> acknowNak{};
        }
        ///Interrupt on NAK for control OUT EP
        enum class IntonnakcoVal {
            acknow=0x00000000,     ///<Only acknowledged packets generate an interrupt
            acknowNak=0x00000001,     ///<Both acknowledged and NAKed packets generate interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,IntonnakcoVal> intonnakCo{}; 
        namespace IntonnakcoValC{
            constexpr Register::FieldValue<decltype(intonnakCo)::Type,IntonnakcoVal::acknow> acknow{};
            constexpr Register::FieldValue<decltype(intonnakCo)::Type,IntonnakcoVal::acknowNak> acknowNak{};
        }
        ///Interrupt on NAK for control IN EP
        enum class IntonnakciVal {
            acknow=0x00000000,     ///<Only acknowledged packets generate an interrupt
            acknowNak=0x00000001,     ///<Both acknowledged and NAKed packets generate interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,IntonnakciVal> intonnakCi{}; 
        namespace IntonnakciValC{
            constexpr Register::FieldValue<decltype(intonnakCi)::Type,IntonnakciVal::acknow> acknow{};
            constexpr Register::FieldValue<decltype(intonnakCi)::Type,IntonnakciVal::acknowNak> acknowNak{};
        }
        ///Device status - connect.  The connect bit must be set by SW to indicate that the device must signal a connect. The pull-up resistor on USB_DP will be enabled when this bit is set and the VbusDebounced bit is one.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dcon{}; 
        ///Device status - suspend.  The suspend bit indicates the current suspend state. It is set to 1 when the device hasn't seen any activity on its upstream port for more than 3 milliseconds. It is reset to 0 on any activity. When the device is suspended (Suspend bit DSUS = 1) and the software writes a 0 to it, the device will generate a remote wake-up. This will only happen when the device is connected (Connect bit = 1). When the device is not connected or not suspended, a writing a 0 has no effect. Writing a 1 never has an effect.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dsus{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Device status - LPM Suspend.  This bit represents the current LPM suspend state. It is set to 1 by HW when the device has acknowledged the LPM request from the USB host and the Token Retry Time of 10us has elapsed. When the device is in the LPM suspended state (LPM suspend bit = 1) and the software writes a zero to this bit, the device will generate a remote walk-up. Software can only write a zero to this bit when the LPM_REWP bit is set to 1. HW resets this bit when it receives a host initiated resume. HW only updates the LPM_SUS bit when the LPM_SUPP bit is equal to one.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> lpmSus{}; 
        ///LPM Remote Wake-up Enabled by USB host.  HW sets this bit to one when the bRemoteWake bit in the LPM extended token is set to 1. HW will reset this bit to 0 when it receives the host initiated LPM resume, when a remote wake-up is sent by the device or when a USB bus reset is received. Software can use this bit to check if the remote wake-up feature is enabled by the host for the LPM transaction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lpmRewp{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Device status - connect change.  The Connect Change bit is set when the device's pull-up resistor is disconnected because VBus disappeared. The bit is reset by writing a one to it.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dconC{}; 
        ///Device status - suspend change.  The suspend change bit is set to 1 when the suspend bit toggles. The suspend bit can toggle because: - The device goes in the suspended state  - The device is disconnected - The device receives resume signaling on its upstream port.  The bit is reset by writing a one to it.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dsusC{}; 
        ///Device status - reset change.  This bit is set when the device received a bus reset. On a bus reset the device will automatically go to the default state (unconfigured and responding to address 0). The bit is reset by writing a one to it.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dresC{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit indicates if Vbus is detected or not. The bit raises immediately when Vbus becomes high. It drops to zero if Vbus is low for at least 3 ms. If this bit is high and the DCon bit is set, the HW will enable the pull-up resistor to signal a connect.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> vbusdebounced{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace UsbInfo{    ///<USB Info register
        using Addr = Register::Address<0x40080004,0x00000000,0x00000000,unsigned>;
        ///Frame number. This contains the frame number of the last successfully received SOF. In case no SOF was received by the device at the beginning of a frame, the frame number returned is that of the last successfully received SOF. In case the SOF frame number contained a CRC error, the frame number returned will be the corrupted frame number as received by the device.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> frameNr{}; 
        ///The error code which last occurred:
        enum class ErrcodeVal {
            noError=0x00000000,     ///<No error
            pidEncodingError=0x00000001,     ///<PID encoding error
            pidUnknown=0x00000002,     ///<PID unknown
            packetUnexpected=0x00000003,     ///<Packet unexpected
            tokenCrcError=0x00000004,     ///<Token CRC error
            dataCrcError=0x00000005,     ///<Data CRC error
            timeOut=0x00000006,     ///<Time out
            babble=0x00000007,     ///<Babble
            truncatedEop=0x00000008,     ///<Truncated EOP
            sentreceivedNak=0x00000009,     ///<Sent/Received NAK
            sentStall=0x0000000a,     ///<Sent Stall
            overrun=0x0000000b,     ///<Overrun
            sentEmptyPacket=0x0000000c,     ///<Sent empty packet
            bitstuffError=0x0000000d,     ///<Bitstuff error
            syncError=0x0000000e,     ///<Sync error
            wrongDataToggle=0x0000000f,     ///<Wrong data toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,ErrcodeVal> errCode{}; 
        namespace ErrcodeValC{
            constexpr Register::FieldValue<decltype(errCode)::Type,ErrcodeVal::noError> noError{};
            constexpr Register::FieldValue<decltype(errCode)::Type,ErrcodeVal::pidEncodingError> pidEncodingError{};
            constexpr Register::FieldValue<decltype(errCode)::Type,ErrcodeVal::pidUnknown> pidUnknown{};
            constexpr Register::FieldValue<decltype(errCode)::Type,ErrcodeVal::packetUnexpected> packetUnexpected{};
            constexpr Register::FieldValue<decltype(errCode)::Type,ErrcodeVal::tokenCrcError> tokenCrcError{};
            constexpr Register::FieldValue<decltype(errCode)::Type,ErrcodeVal::dataCrcError> dataCrcError{};
            constexpr Register::FieldValue<decltype(errCode)::Type,ErrcodeVal::timeOut> timeOut{};
            constexpr Register::FieldValue<decltype(errCode)::Type,ErrcodeVal::babble> babble{};
            constexpr Register::FieldValue<decltype(errCode)::Type,ErrcodeVal::truncatedEop> truncatedEop{};
            constexpr Register::FieldValue<decltype(errCode)::Type,ErrcodeVal::sentreceivedNak> sentreceivedNak{};
            constexpr Register::FieldValue<decltype(errCode)::Type,ErrcodeVal::sentStall> sentStall{};
            constexpr Register::FieldValue<decltype(errCode)::Type,ErrcodeVal::overrun> overrun{};
            constexpr Register::FieldValue<decltype(errCode)::Type,ErrcodeVal::sentEmptyPacket> sentEmptyPacket{};
            constexpr Register::FieldValue<decltype(errCode)::Type,ErrcodeVal::bitstuffError> bitstuffError{};
            constexpr Register::FieldValue<decltype(errCode)::Type,ErrcodeVal::syncError> syncError{};
            constexpr Register::FieldValue<decltype(errCode)::Type,ErrcodeVal::wrongDataToggle> wrongDataToggle{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace UsbEpliststart{    ///<USB EP Command/Status List start address
        using Addr = Register::Address<0x40080008,0x00000000,0x00000000,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Start address of the USB EP Command/Status List.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> epList{}; 
    }
    namespace UsbDatabufstart{    ///<USB Data buffer start address
        using Addr = Register::Address<0x4008000c,0x00000000,0x00000000,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Start address of the buffer pointer page where all endpoint data buffers are located.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,22),Register::ReadWriteAccess,unsigned> daBuf{}; 
    }
    namespace UsbLpm{    ///<Link Power Management register
        using Addr = Register::Address<0x40080010,0x00000000,0x00000000,unsigned>;
        ///Host Initiated Resume Duration - HW. This is the HIRD value from the last received LPM token
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> hirdHw{}; 
        ///Host Initiated Resume Duration - SW. This is the time duration required by the USB device system to come out of LPM initiated suspend after receiving the host initiated LPM resume.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> hirdSw{}; 
        ///As long as this bit is set to one and LPM supported bit is set to one, HW will return a NYET handshake on every LPM token it receives. If LPM supported bit is set to one and this bit is zero, HW will return an ACK handshake on every LPM token it receives. If SW has still data pending and LPM is supported, it must set this bit to 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dataPending{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace UsbEpskip{    ///<USB Endpoint skip
        using Addr = Register::Address<0x40080014,0x00000000,0x00000000,unsigned>;
        ///Endpoint skip: Writing 1 to one of these bits, will indicate to HW that it must deactivate the buffer assigned to this endpoint and return control back to software. When HW has deactivated the endpoint, it will clear this bit, but it will not modify the EPINUSE bit.  An interrupt will be generated when the Active bit goes from 1 to 0.  Note: In case of double-buffering, HW will only clear the Active bit of the buffer indicated by the EPINUSE bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> skip{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace UsbEpinuse{    ///<USB Endpoint Buffer in use
        using Addr = Register::Address<0x40080018,0x00000000,0x00000000,unsigned>;
        ///Reserved. Fixed to zero because the control endpoint zero is fixed to single-buffering for each physical endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Buffer in use: This register has one bit per physical endpoint.  0: HW is accessing buffer 0.  1: HW is accessing buffer 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,2),Register::ReadWriteAccess,unsigned> buf{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace UsbEpbufcfg{    ///<USB Endpoint Buffer Configuration register
        using Addr = Register::Address<0x4008001c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Fixed to zero because the control endpoint zero is fixed to single-buffering for each physical endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Buffer usage: This register has one bit per physical endpoint. 0: Single-buffer.  1: Double-buffer. If the bit is set to single-buffer (0), it will not toggle the corresponding EPINUSE bit when it clears the active bit. If the bit is set to double-buffer (1), HW will toggle the EPINUSE bit when it clears the Active bit for the buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,2),Register::ReadWriteAccess,unsigned> bufSb{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace UsbIntstat{    ///<USB interrupt status register
        using Addr = Register::Address<0x40080020,0x00000000,0x00000000,unsigned>;
        ///Interrupt status register bit for the Control EP0 OUT direction.  This bit will be set if NBytes transitions to zero or the skip bit is set by software or a SETUP packet is successfully received for the control EP0. If the IntOnNAK_CO is set, this bit will also be set when a NAK is transmitted for the Control EP0 OUT direction.  Software can clear this bit by writing a one to it.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ep0out{}; 
        ///Interrupt status register bit for the Control EP0 IN direction.  This bit will be set if NBytes transitions to zero or the skip bit is set by software.  If the IntOnNAK_CI is set, this bit will also be set when a NAK is transmitted for the Control EP0 IN direction.  Software can clear this bit by writing a one to it.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep0in{}; 
        ///Interrupt status register bit for the EP1 OUT direction. This bit will be set if the corresponding Active bit is cleared by HW. This is done in case the programmed NBytes transitions to zero or the skip bit is set by software.  If the IntOnNAK_AO is set, this bit will also be set when a NAK is transmitted for the EP1 OUT direction.  Software can clear this bit by writing a one to it.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ep1out{}; 
        ///Interrupt status register bit for the EP1 IN direction.  This bit will be set if the corresponding Active bit is cleared by HW. This is done in case the programmed NBytes transitions to zero or the skip bit is set by software.  If the IntOnNAK_AI is set, this bit will also be set when a NAK is transmitted for the EP1 IN direction.  Software can clear this bit by writing a one to it.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ep1in{}; 
        ///Interrupt status register bit for the EP2 OUT direction.  This bit will be set if the corresponding Active bit is cleared by HW. This is done in case the programmed NBytes transitions to zero or the skip bit is set by software.  If the IntOnNAK_AO is set, this bit will also be set when a NAK is transmitted for the EP2 OUT direction.  Software can clear this bit by writing a one to it.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ep2out{}; 
        ///Interrupt status register bit for the EP2 IN direction.  This bit will be set if the corresponding Active bit is cleared by HW. This is done in case the programmed NBytes transitions to zero or the skip bit is set by software.  If the IntOnNAK_AI is set, this bit will also be set when a NAK is transmitted for the EP2 IN direction.  Software can clear this bit by writing a one to it.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep2in{}; 
        ///Interrupt status register bit for the EP3 OUT direction.  This bit will be set if the corresponding Active bit is cleared by HW. This is done in case the programmed NBytes transitions to zero or the skip bit is set by software.  If the IntOnNAK_AO is set, this bit will also be set when a NAK is transmitted for the EP3 OUT direction.  Software can clear this bit by writing a one to it.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ep3out{}; 
        ///Interrupt status register bit for the EP3 IN direction.  This bit will be set if the corresponding Active bit is cleared by HW. This is done in case the programmed NBytes transitions to zero or the skip bit is set by software.  If the IntOnNAK_AI is set, this bit will also be set when a NAK is transmitted for the EP3 IN direction.  Software can clear this bit by writing a one to it.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ep3in{}; 
        ///Interrupt status register bit for the EP4 OUT direction.  This bit will be set if the corresponding Active bit is cleared by HW. This is done in case the programmed NBytes transitions to zero or the skip bit is set by software.  If the IntOnNAK_AO is set, this bit will also be set when a NAK is transmitted for the EP4 OUT direction.  Software can clear this bit by writing a one to it.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ep4out{}; 
        ///Interrupt status register bit for the EP4 IN direction.  This bit will be set if the corresponding Active bit is cleared by HW. This is done in case the programmed NBytes transitions to zero or the skip bit is set by software.  If the IntOnNAK_AI is set, this bit will also be set when a NAK is transmitted for the EP4 IN direction.  Software can clear this bit by writing a one to it.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ep4in{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Frame interrupt.  This bit is set to one every millisecond when the VbusDebounced bit and the DCON bit are set. This bit can be used by software when handling isochronous endpoints.  Software can clear this bit by writing a one to it.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> frameInt{}; 
        ///Device status interrupt. This bit is set by HW when one of the bits in the Device Status Change register are set. Software can clear this bit by writing a one to it.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> devInt{}; 
    }
    namespace UsbInten{    ///<USB interrupt enable register
        using Addr = Register::Address<0x40080024,0x00000000,0x00000000,unsigned>;
        ///If this bit is set and the corresponding USB interrupt status bit is set, a HW interrupt is generated on the interrupt line indicated by the corresponding USB interrupt routing bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> epIntEn{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///If this bit is set and the corresponding USB interrupt status bit is set, a HW interrupt is generated on the interrupt line indicated by the corresponding USB interrupt routing bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> frameIntEn{}; 
        ///If this bit is set and the corresponding USB interrupt status bit is set, a HW interrupt is generated on the interrupt line indicated by the corresponding USB interrupt routing bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> devIntEn{}; 
    }
    namespace UsbIntsetstat{    ///<USB set interrupt status register
        using Addr = Register::Address<0x40080028,0x00000000,0x00000000,unsigned>;
        ///If software writes a one to one of these bits, the corresponding USB interrupt status bit is set.  When this register is read, the same value as the USB interrupt status register is returned.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> epSetInt{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///If software writes a one to one of these bits, the corresponding USB interrupt status bit is set.  When this register is read, the same value as the USB interrupt status register is returned.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> frameSetInt{}; 
        ///If software writes a one to one of these bits, the corresponding USB interrupt status bit is set.  When this register is read, the same value as the USB interrupt status register is returned.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> devSetInt{}; 
    }
    namespace UsbIntrouting{    ///<USB interrupt routing register
        using Addr = Register::Address<0x4008002c,0x00000000,0x00000000,unsigned>;
        ///This bit can control on which hardware interrupt line the interrupt will be generated:  0: IRQ interrupt line is selected for this interrupt bit 1: FIQ interrupt line is selected for this interrupt bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> routeInt90{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit can control on which hardware interrupt line the interrupt will be generated:  0: IRQ interrupt line is selected for this interrupt bit 1: FIQ interrupt line is selected for this interrupt bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> routeInt30{}; 
        ///This bit can control on which hardware interrupt line the interrupt will be generated:  0: IRQ interrupt line is selected for this interrupt bit 1: FIQ interrupt line is selected for this interrupt bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> routeInt31{}; 
    }
    namespace UsbEptoggle{    ///<USB Endpoint toggle register
        using Addr = Register::Address<0x40080034,0x00000000,0x00000000,unsigned>;
        ///Endpoint data toggle: This field indicates the current value of the data toggle for the corresponding endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> toggle{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
