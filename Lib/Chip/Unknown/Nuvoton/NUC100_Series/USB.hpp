#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace NoneusbInten{    ///<Interrupt Enable Flag
        using Addr = Register::Address<0x40060000,0xffff7ef0,0,unsigned>;
        ///1/0: Enable/disable BUS event interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> busIe{}; 
        ///1/0: Enable/disable USB event interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbIe{}; 
        ///1/0: Enable/disable Floating detect Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fldetIe{}; 
        ///1/0: Enable/disable Wakeup Interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeupIe{}; 
        ///1/0: Enable/Disable USB wakeup function
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wakeupEn{}; 
        ///1 = The NAK status is updated into the endpoint status register, USB_EPSTS, when it is set to 1 and there is NAK response in IN token. It also enable the interrupt event when the device responds NAK after receiving IN token.
0 = The NAK status doesn't be updated into the endpoint status register when it was set to 0. It also disable the interrupt event when device responds NAK after receiving IN token
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> innakEn{}; 
    }
    namespace NoneusbIntsts{    ///<Interrupt Event Flag
        using Addr = Register::Address<0x40060004,0x7fc0fff0,0,unsigned>;
        ///The BUS event means that there is one of the suspense or the resume function in the bus.
1 = Bus event occurred; check USB_ATTR[3:0] to know which kind of bus event was occurred, cleared by write 1 to USB_INTSTS[0].
0 = No any BUS event is occurred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> busSts{}; 
        ///The USB event includes the Setup Token, IN Token, OUT ACK, ISO IN, or ISO OUT events in the bus.
1 = USB event occurred, check EPSTS0~5[2:0] to know which kind of USB event was occurred, cleared by write 1 to USB_INTSTS[1] or EPSTS0~5 and SETUP (USB_INTSTS[31])
0 = No any USB event is occurred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbSts{}; 
        ///1 = There is attached/detached event in the USB bus and it is cleared by write 1 to USB_INTSTS[2].
0 = There is not attached/detached event in the USB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fldetSts{}; 
        ///1 = Wakeup event occurred, cleared by write 1 to USB_INTSTS[3]
0 = No Wakeup event is occurred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeupSts{}; 
        ///1 = USB event occurred on Endpoint 0, check USB_EPSTS[10:8] to know which kind of USB event was occurred, cleared by write 1 to USB_INTSTS[16] or USB_INTSTS[1]
0 = No event occurred in endpoint 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epevt0{}; 
        ///1 = USB event occurred on Endpoint 1, check USB_EPSTS[13:11] to know which kind of USB event was occurred, cleared by write 1 to USB_INTSTS[17] or USB_INTSTS[1]
0 = No event occurred in endpoint 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epevt1{}; 
        ///1 = USB event occurred on Endpoint 2, check USB_EPSTS[16:14] to know which kind of USB event was occurred, cleared by write 1 to USB_INTSTS[18] or USB_INTSTS[1]
0 = No event occurred in endpoint 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epevt2{}; 
        ///1 = USB event occurred on Endpoint 3, check USB_EPSTS[19:17] to know which kind of USB event was occurred, cleared by write 1 to USB_INTSTS[19] or USB_INTSTS[1]
0 = No event occurred in endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epevt3{}; 
        ///1 = USB event occurred on Endpoint 4, check USB_EPSTS[22:20] to know which kind of USB event was occurred, cleared by write 1 to USB_INTSTS[20] or USB_INTSTS[1]
0 = No event occurred in endpoint 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epevt4{}; 
        ///1 = USB event occurred on Endpoint 5, check USB_EPSTS[25:23] to know which kind of USB event was occurred, cleared by write 1 to USB_INTSTS[21] or USB_INTSTS[1]
0 = No event occurred in endpoint 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epevt5{}; 
        ///1 = Setup event occurred, cleared by write 1 to USB_INTSTS[31]
0 = No Setup event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setup{}; 
    }
    namespace NoneusbFaddr{    ///<Function Address
        using Addr = Register::Address<0x40060008,0xffffff80,0,unsigned>;
        ///Function Address of this USB device.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> faddr{}; 
    }
    namespace NoneusbEpsts{    ///<System state
        using Addr = Register::Address<0x4006000c,0xfc00007f,0,unsigned>;
        ///It indicates that the received data is over the maximum payload number or not.
1 = It indicates that the Out Data more than the Max Payload in MXPLD register or the Setup Data more than 8 Bytes
0 = No overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///These bits are used to indicate the current status of this endpoint
000 = In ACK
001 = In NAK
010 = Out Packet Data0 ACK
110 = Out Packet Data1 ACK
011 = Setup ACK
111 = Isochronous transfer end
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> epsts0{}; 
        ///These bits are used to indicate the current status of this endpoint
000 = In ACK
001 = In NAK
010 = Out Packet Data0 ACK
110 = Out Packet Data1 ACK
011 = Setup ACK
111 = Isochronous transfer end
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,unsigned> epsts1{}; 
        ///These bits are used to indicate the current status of this endpoint
000 = In ACK
001 = In NAK
010 = Out Packet Data0 ACK
110 = Out Packet Data1 ACK
011 = Setup ACK
111 = Isochronous transfer end
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,14),Register::ReadWriteAccess,unsigned> epsts2{}; 
        ///These bits are used to indicate the current status of this endpoint
000 = In ACK
001 = In NAK
010 = Out Packet Data0 ACK
110 = Out Packet Data1 ACK
011 = Setup ACK
111 = Isochronous transfer end
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> epsts3{}; 
        ///These bits are used to indicate the current status of this endpoint
000 = In ACK
001 = In NAK
010 = Out Packet Data0 ACK
110 = Out Packet Data1 ACK
011 = Setup ACK
111 = Isochronous transfer end
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> epsts4{}; 
        ///These bits are used to indicate the current status of this endpoint
000 = In ACK
001 = In NAK
010 = Out Packet Data0 ACK
110 = Out Packet Data1 ACK
011 = Setup ACK
111 = Isochronous transfer end
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> epsts5{}; 
    }
    namespace NoneusbAttr{    ///<Bus state & attribution
        using Addr = Register::Address<0x40060010,0xfffff840,0,unsigned>;
        ///1: Bus reset when SE0(single-ended 0) more than 2.5uS.
0: Bus no reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbrst{}; 
        ///1: Bus idle more than 3mS, either cable is plugged off or host is sleeping.
0: Bus no suspend.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> suspend{}; 
        ///1: Resume from suspension
0: No bus resume.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> resume{}; 
        ///1: No response more than 18 bits time
0: No time out.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///1: Enable PHY transceiver function.
0: Disable PHY transceiver function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> phyEn{}; 
        ///1: Force USB bus to K state, used for remote wake-up.
0: Release the USB bus from K state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rwakeup{}; 
        ///1: Enable USB controller.
0: Disable USB controller.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> usbEn{}; 
        ///Pull-up resistor on USB_DP enable bit
1: Enable
0: Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dppuEn{}; 
        ///1: Turn-on related circuit of PHY transceiver
0: power-down related circuit of PHY transceiver
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pwrdn{}; 
        ///1: Byte Mode. The size of the transfer from CPU to USB SRAM can be Byte only.
0: Word Mode. The size of the transfer from CPU to USB SRAM can be Word. only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bytem{}; 
    }
    namespace NoneusbFldet{    ///<Device Floating Detected
        using Addr = Register::Address<0x40060014,0xfffffffe,0,unsigned>;
        ///1: When the controller is attached into the BUS, this bit will be set as 1
0: The controller didn't attached into the USB host
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fldet{}; 
    }
    namespace NoneusbBufseg{    ///<Buffer Segmentation
        using Addr = Register::Address<0x40060018,0xfffffe07,0,unsigned>;
        ///It is used to indicate the offset address for the Setup token with the USB SRAM starting address. The effective starting address is
USB_SRAM address + { BUFSEG[8:3], 3'b000}
Where the USB_SRAM address = 0x40060100h.
Note: It is used for Setup token only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,3),Register::ReadWriteAccess,unsigned> bufseg{}; 
    }
    namespace NoneusbBufseg0{    ///<Buffer Segmentation of endpoint 0
        using Addr = Register::Address<0x40060020,0xfffffe07,0,unsigned>;
        ///It is used to indicate the offset address for each endpoint with the USB SRAM starting address. The effective starting address of the endpoint is:
USB_SRAM address + { BUFSEG0[8:3], 3'b000}
Where the USB_SRAM address = 0x40060100h.
Refer to section 5.4.4.7 for the endpoint SRAM structure and its description.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,3),Register::ReadWriteAccess,unsigned> bufseg0{}; 
    }
    namespace NoneusbMxpld0{    ///<Maximal payload of endpoint 0
        using Addr = Register::Address<0x40060024,0xfffffe00,0,unsigned>;
        ///It is used to define the data length which is transmitted to host (IN token) or the actual data length which is received from the host (OUT token). It also used to indicate that the endpoint is ready to be transmitted in IN token or received in OUT token.
(1). When the register is written by CPU, For IN token, the value of MXPLD is used to define the data length to be transmitted and indicate the data buffer is ready. For OUT token, it means that the controller is ready to receive data from the host and the value of MXPLD is the maximal data length comes from host.
(2). When the register is read by CPU, For IN token, the value of MXPLD is indicated the data length be transmitted to host. For OUT token, the value of MXPLD is indicated the actual data length receiving from host.
Note that once MXPLD is written, the data packets will be transmitted/received immediately after IN/OUT token arrived.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> mxpld{}; 
    }
    namespace NoneusbCfg0{    ///<Configuration of endpoint 0
        using Addr = Register::Address<0x40060028,0xfffffd00,0,unsigned>;
        ///These bits are used to define the endpoint number of the current endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> epNum{}; 
        ///This bit is used to set the endpoint as Isochronous endpoint, no handshake.
1: Isochronous endpoint
0: No Isochronous endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> isoch{}; 
        ///00 = Endpoint is disabled
01 = OUT endpoint
10 = IN endpoint
11 = Undefined
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> state{}; 
        ///1 = DATA1 PID
0 = DATA0 PID
It is used to specify the DATA0 or DATA1 PID in the following IN token transaction. H/W will toggle automatically in IN token base on the bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dsqSync{}; 
        ///1 = Clear the device to response STALL handshake in setup stage
0 = Disable the device to clear the STALL handshake in setup stage
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cstall{}; 
    }
    namespace NoneusbCfgp0{    ///<stall control register and In/out ready clear flag of endpoint 0
        using Addr = Register::Address<0x4006002c,0xfffffffc,0,unsigned>;
        ///When the MXPLD register is set by user, it means that the endpoint is ready to transmit or receive data. If the user wants to turn off this transaction before the transaction start, users can set this bit to 1 to turn it off and it is auto clear to 0.
For IN token, write 1 is used to clear the IN token had ready to transmit the data to USB.
For OUT token, write 1 is used to clear the OUT token had ready to receive the data from USB.
This bit is write 1 only and it is always 0 when it was read back.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrrdy{}; 
        ///1 = Set the device to respond STALL automatically
0 = Disable the device to response STALL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sstall{}; 
    }
    namespace NoneusbBufseg1{    ///<Buffer Segmentation of endpoint 1
        using Addr = Register::Address<0x40060030,0xfffffe07,0,unsigned>;
        ///It is used to indicate the offset address for each endpoint with the USB SRAM starting address. The effective starting address of the endpoint is:
USB_SRAM address + { BUFSEG1[8:3], 3'b000}
Where the USB_SRAM address = 0x40060100h.
Refer to section 5.4.4.7 for the endpoint SRAM structure and its description.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,3),Register::ReadWriteAccess,unsigned> bufseg1{}; 
    }
    namespace NoneusbMxpld1{    ///<Maximal payload of endpoint 1
        using Addr = Register::Address<0x40060034,0xfffffe00,0,unsigned>;
        ///It is used to define the data length which is transmitted to host (IN token) or the actual data length which is received from the host (OUT token). It also used to indicate that the endpoint is ready to be transmitted in IN token or received in OUT token.
(1). When the register is written by CPU, For IN token, the value of MXPLD is used to define the data length to be transmitted and indicate the data buffer is ready. For OUT token, it means that the controller is ready to receive data from the host and the value of MXPLD is the maximal data length comes from host.
(2). When the register is read by CPU, For IN token, the value of MXPLD is indicated the data length be transmitted to host. For OUT token, the value of MXPLD is indicated the actual data length receiving from host.
Note that once MXPLD is written, the data packets will be transmitted/received immediately after IN/OUT token arrived.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> mxpld{}; 
    }
    namespace NoneusbCfg1{    ///<Configuration of endpoint 1
        using Addr = Register::Address<0x40060038,0xfffffd00,0,unsigned>;
        ///These bits are used to define the endpoint number of the current endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> epNum{}; 
        ///This bit is used to set the endpoint as Isochronous endpoint, no handshake.
1: Isochronous endpoint
0: No Isochronous endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> isoch{}; 
        ///00 = Endpoint is disabled
01 = OUT endpoint
10 = IN endpoint
11 = Undefined
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> state{}; 
        ///1 = DATA1 PID
0 = DATA0 PID
It is used to specify the DATA0 or DATA1 PID in the following IN token transaction. H/W will toggle automatically in IN token base on the bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dsqSync{}; 
        ///1 = Clear the device to response STALL handshake in setup stage
0 = Disable the device to clear the STALL handshake in setup stage
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cstall{}; 
    }
    namespace NoneusbCfgp1{    ///<stall control register and In/out ready clear flag of endpoint 1
        using Addr = Register::Address<0x4006003c,0xfffffffc,0,unsigned>;
        ///When the MXPLD register is set by user, it means that the endpoint is ready to transmit or receive data. If the user wants to turn off this transaction before the transaction start, users can set this bit to 1 to turn it off and it is auto clear to 0.
For IN token, write 1 is used to clear the IN token had ready to transmit the data to USB.
For OUT token, write 1 is used to clear the OUT token had ready to receive the data from USB.
This bit is write 1 only and it is always 0 when it was read back.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrrdy{}; 
        ///1 = Set the device to respond STALL automatically
0 = Disable the device to response STALL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sstall{}; 
    }
    namespace NoneusbBufseg2{    ///<Buffer Segmentation of endpoint 2
        using Addr = Register::Address<0x40060040,0xfffffe07,0,unsigned>;
        ///It is used to indicate the offset address for each endpoint with the USB SRAM starting address. The effective starting address of the endpoint is:
USB_SRAM address + { BUFSEG2[8:3], 3'b000}
Where the USB_SRAM address = 0x40060100h.
Refer to section 5.4.4.7 for the endpoint SRAM structure and its description.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,3),Register::ReadWriteAccess,unsigned> bufseg2{}; 
    }
    namespace NoneusbMxpld2{    ///<Maximal payload of endpoint 2
        using Addr = Register::Address<0x40060044,0xfffffe00,0,unsigned>;
        ///It is used to define the data length which is transmitted to host (IN token) or the actual data length which is received from the host (OUT token). It also used to indicate that the endpoint is ready to be transmitted in IN token or received in OUT token.
(1). When the register is written by CPU, For IN token, the value of MXPLD is used to define the data length to be transmitted and indicate the data buffer is ready. For OUT token, it means that the controller is ready to receive data from the host and the value of MXPLD is the maximal data length comes from host.
(2). When the register is read by CPU, For IN token, the value of MXPLD is indicated the data length be transmitted to host. For OUT token, the value of MXPLD is indicated the actual data length receiving from host.
Note that once MXPLD is written, the data packets will be transmitted/received immediately after IN/OUT token arrived.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> mxpld{}; 
    }
    namespace NoneusbCfg2{    ///<Configuration of endpoint 2
        using Addr = Register::Address<0x40060048,0xfffffd00,0,unsigned>;
        ///These bits are used to define the endpoint number of the current endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> epNum{}; 
        ///This bit is used to set the endpoint as Isochronous endpoint, no handshake.
1: Isochronous endpoint
0: No Isochronous endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> isoch{}; 
        ///00 = Endpoint is disabled
01 = OUT endpoint
10 = IN endpoint
11 = Undefined
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> state{}; 
        ///1 = DATA1 PID
0 = DATA0 PID
It is used to specify the DATA0 or DATA1 PID in the following IN token transaction. H/W will toggle automatically in IN token base on the bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dsqSync{}; 
        ///1 = Clear the device to response STALL handshake in setup stage
0 = Disable the device to clear the STALL handshake in setup stage
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cstall{}; 
    }
    namespace NoneusbCfgp2{    ///<stall control register and In/out ready clear flag of endpoint 2
        using Addr = Register::Address<0x4006004c,0xfffffffc,0,unsigned>;
        ///When the MXPLD register is set by user, it means that the endpoint is ready to transmit or receive data. If the user wants to turn off this transaction before the transaction start, users can set this bit to 1 to turn it off and it is auto clear to 0.
For IN token, write 1 is used to clear the IN token had ready to transmit the data to USB.
For OUT token, write 1 is used to clear the OUT token had ready to receive the data from USB.
This bit is write 1 only and it is always 0 when it was read back.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrrdy{}; 
        ///1 = Set the device to respond STALL automatically
0 = Disable the device to response STALL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sstall{}; 
    }
    namespace NoneusbBufseg3{    ///<Buffer Segmentation of endpoint 3
        using Addr = Register::Address<0x40060050,0xfffffe07,0,unsigned>;
        ///It is used to indicate the offset address for each endpoint with the USB SRAM starting address. The effective starting address of the endpoint is:
USB_SRAM address + { BUFSEG3[8:3], 3'b000}
Where the USB_SRAM address = 0x40060100h.
Refer to section 5.4.4.7 for the endpoint SRAM structure and its description.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,3),Register::ReadWriteAccess,unsigned> bufseg3{}; 
    }
    namespace NoneusbMxpld3{    ///<Maximal payload of endpoint 3
        using Addr = Register::Address<0x40060054,0xfffffe00,0,unsigned>;
        ///It is used to define the data length which is transmitted to host (IN token) or the actual data length which is received from the host (OUT token). It also used to indicate that the endpoint is ready to be transmitted in IN token or received in OUT token.
(1). When the register is written by CPU, For IN token, the value of MXPLD is used to define the data length to be transmitted and indicate the data buffer is ready. For OUT token, it means that the controller is ready to receive data from the host and the value of MXPLD is the maximal data length comes from host.
(2). When the register is read by CPU, For IN token, the value of MXPLD is indicated the data length be transmitted to host. For OUT token, the value of MXPLD is indicated the actual data length receiving from host.
Note that once MXPLD is written, the data packets will be transmitted/received immediately after IN/OUT token arrived.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> mxpld{}; 
    }
    namespace NoneusbCfg3{    ///<Configuration of endpoint 3
        using Addr = Register::Address<0x40060058,0xfffffd00,0,unsigned>;
        ///These bits are used to define the endpoint number of the current endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> epNum{}; 
        ///This bit is used to set the endpoint as Isochronous endpoint, no handshake.
1: Isochronous endpoint
0: No Isochronous endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> isoch{}; 
        ///00 = Endpoint is disabled
01 = OUT endpoint
10 = IN endpoint
11 = Undefined
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> state{}; 
        ///1 = DATA1 PID
0 = DATA0 PID
It is used to specify the DATA0 or DATA1 PID in the following IN token transaction. H/W will toggle automatically in IN token base on the bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dsqSync{}; 
        ///1 = Clear the device to response STALL handshake in setup stage
0 = Disable the device to clear the STALL handshake in setup stage
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cstall{}; 
    }
    namespace NoneusbCfgp3{    ///<stall control register and In/out ready clear flag of endpoint 3
        using Addr = Register::Address<0x4006005c,0xfffffffc,0,unsigned>;
        ///When the MXPLD register is set by user, it means that the endpoint is ready to transmit or receive data. If the user wants to turn off this transaction before the transaction start, users can set this bit to 1 to turn it off and it is auto clear to 0.
For IN token, write 1 is used to clear the IN token had ready to transmit the data to USB.
For OUT token, write 1 is used to clear the OUT token had ready to receive the data from USB.
This bit is write 1 only and it is always 0 when it was read back.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrrdy{}; 
        ///1 = Set the device to respond STALL automatically
0 = Disable the device to response STALL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sstall{}; 
    }
    namespace NoneusbBufseg4{    ///<Buffer Segmentation of endpoint 4
        using Addr = Register::Address<0x40060060,0xfffffe07,0,unsigned>;
        ///It is used to indicate the offset address for each endpoint with the USB SRAM starting address. The effective starting address of the endpoint is:
USB_SRAM address + { BUFSEG4[8:3], 3'b000}
Where the USB_SRAM address = 0x40060100h.
Refer to section 5.4.4.7 for the endpoint SRAM structure and its description.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,3),Register::ReadWriteAccess,unsigned> bufseg4{}; 
    }
    namespace NoneusbMxpld4{    ///<Maximal payload of endpoint 4
        using Addr = Register::Address<0x40060064,0xfffffe00,0,unsigned>;
        ///It is used to define the data length which is transmitted to host (IN token) or the actual data length which is received from the host (OUT token). It also used to indicate that the endpoint is ready to be transmitted in IN token or received in OUT token.
(1). When the register is written by CPU, For IN token, the value of MXPLD is used to define the data length to be transmitted and indicate the data buffer is ready. For OUT token, it means that the controller is ready to receive data from the host and the value of MXPLD is the maximal data length comes from host.
(2). When the register is read by CPU, For IN token, the value of MXPLD is indicated the data length be transmitted to host. For OUT token, the value of MXPLD is indicated the actual data length receiving from host.
Note that once MXPLD is written, the data packets will be transmitted/received immediately after IN/OUT token arrived.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> mxpld{}; 
    }
    namespace NoneusbCfg4{    ///<Configuration of endpoint 4
        using Addr = Register::Address<0x40060068,0xfffffd00,0,unsigned>;
        ///These bits are used to define the endpoint number of the current endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> epNum{}; 
        ///This bit is used to set the endpoint as Isochronous endpoint, no handshake.
1: Isochronous endpoint
0: No Isochronous endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> isoch{}; 
        ///00 = Endpoint is disabled
01 = OUT endpoint
10 = IN endpoint
11 = Undefined
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> state{}; 
        ///1 = DATA1 PID
0 = DATA0 PID
It is used to specify the DATA0 or DATA1 PID in the following IN token transaction. H/W will toggle automatically in IN token base on the bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dsqSync{}; 
        ///1 = Clear the device to response STALL handshake in setup stage
0 = Disable the device to clear the STALL handshake in setup stage
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cstall{}; 
    }
    namespace NoneusbCfgp4{    ///<stall control register and In/out ready clear flag of endpoint 4
        using Addr = Register::Address<0x4006006c,0xfffffffc,0,unsigned>;
        ///When the MXPLD register is set by user, it means that the endpoint is ready to transmit or receive data. If the user wants to turn off this transaction before the transaction start, users can set this bit to 1 to turn it off and it is auto clear to 0.
For IN token, write 1 is used to clear the IN token had ready to transmit the data to USB.
For OUT token, write 1 is used to clear the OUT token had ready to receive the data from USB.
This bit is write 1 only and it is always 0 when it was read back.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrrdy{}; 
        ///1 = Set the device to respond STALL automatically
0 = Disable the device to response STALL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sstall{}; 
    }
    namespace NoneusbBufseg5{    ///<Buffer Segmentation of endpoint 5
        using Addr = Register::Address<0x40060070,0xfffffe07,0,unsigned>;
        ///It is used to indicate the offset address for each endpoint with the USB SRAM starting address. The effective starting address of the endpoint is:
USB_SRAM address + { BUFSEG5[8:3], 3'b000}
Where the USB_SRAM address = 0x40060100h.
Refer to section 5.4.4.7 for the endpoint SRAM structure and its description.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,3),Register::ReadWriteAccess,unsigned> bufseg5{}; 
    }
    namespace NoneusbMxpld5{    ///<Maximal payload of endpoint 5
        using Addr = Register::Address<0x40060074,0xfffffe00,0,unsigned>;
        ///It is used to define the data length which is transmitted to host (IN token) or the actual data length which is received from the host (OUT token). It also used to indicate that the endpoint is ready to be transmitted in IN token or received in OUT token.
(1). When the register is written by CPU, For IN token, the value of MXPLD is used to define the data length to be transmitted and indicate the data buffer is ready. For OUT token, it means that the controller is ready to receive data from the host and the value of MXPLD is the maximal data length comes from host.
(2). When the register is read by CPU, For IN token, the value of MXPLD is indicated the data length be transmitted to host. For OUT token, the value of MXPLD is indicated the actual data length receiving from host.
Note that once MXPLD is written, the data packets will be transmitted/received immediately after IN/OUT token arrived.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> mxpld{}; 
    }
    namespace NoneusbCfg5{    ///<Configuration of endpoint 5
        using Addr = Register::Address<0x40060078,0xfffffd00,0,unsigned>;
        ///These bits are used to define the endpoint number of the current endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> epNum{}; 
        ///This bit is used to set the endpoint as Isochronous endpoint, no handshake.
1: Isochronous endpoint
0: No Isochronous endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> isoch{}; 
        ///00 = Endpoint is disabled
01 = OUT endpoint
10 = IN endpoint
11 = Undefined
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> state{}; 
        ///1 = DATA1 PID
0 = DATA0 PID
It is used to specify the DATA0 or DATA1 PID in the following IN token transaction. H/W will toggle automatically in IN token base on the bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dsqSync{}; 
        ///1 = Clear the device to response STALL handshake in setup stage
0 = Disable the device to clear the STALL handshake in setup stage
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cstall{}; 
    }
    namespace NoneusbCfgp5{    ///<In ready clear flag of endpoint 5
        using Addr = Register::Address<0x4006007c,0xfffffffc,0,unsigned>;
        ///When the MXPLD register is set by user, it means that the endpoint is ready to transmit or receive data. If the user wants to turn off this transaction before the transaction start, users can set this bit to 1 to turn it off and it is auto clear to 0.
For IN token, write 1 is used to clear the IN token had ready to transmit the data to USB.
For OUT token, write 1 is used to clear the OUT token had ready to receive the data from USB.
This bit is write 1 only and it is always 0 when it was read back.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrrdy{}; 
        ///1 = Set the device to respond STALL automatically
0 = Disable the device to response STALL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sstall{}; 
    }
    namespace NoneusbDrvse0{    ///<Drive Single Ended Zero (SE0) in USB Bus
        using Addr = Register::Address<0x40060090,0xfffffffe,0,unsigned>;
        ///The Single Ended Zero (SE0) is when both lines (USB_DP and USB_DM) are being pulled low.
1 = Force USB PHY transceiver to drive SE0
0 = None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> drvse0{}; 
    }
    namespace NoneusbPdma{    ///<New description for register
        using Addr = Register::Address<0x400600a4,0xfffffffc,0,unsigned>;
        ///1 = The USB PDMA read data from USB buffer to memory
0 = The USB PDMA write data from memory to USB buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pdmaRw{}; 
        ///1 = The PDMA function in USB is enabled
0 = The PDMA function in USB is disabled
This bit will be automatically cleared after PDMA transfer done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdmaEn{}; 
    }
}
