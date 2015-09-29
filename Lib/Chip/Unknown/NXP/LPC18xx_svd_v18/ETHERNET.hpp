#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx Ethernet Modification date=1/20/2011 Major revision=0 Minor revision=7 
    namespace NonemacConfig{    ///<MAC configuration register
        using Addr = Register::Address<0x40010000,0xff200103,0,unsigned>;
        ///Receiver enable When this bit is set, the receiver state machine of the MAC is enabled for receiving frames from the MII. When this bit is reset, the MAC receive state machine is disabled after the completion of the reception of the current frame, and will not receive any further frames from the MII.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> re{}; 
        ///Transmitter Enable  When this bit is set, the transmit state machine of the MAC is enabled for transmission on the MII. When this bit is reset, the MAC transmit state machine is disabled after the completion of the transmission of the current frame, and will not transmit any further frames.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> te{}; 
        ///Deferral Check  When this bit is set, the deferral check function is enabled in the MAC. The MAC will issue a Frame Abort status, along with the excessive deferral error bit set in the transmit frame status when the transmit state machine is deferred for more than 24,288 bit times in 10/100-Mbps mode. If the Core is configured for 1000 Mbps operation, or if the Jumbo frame mode is enabled in 10/100-Mbps mode, the threshold for deferral is 155,680 bits times. Deferral begins when the transmitter is ready to transmit, but is prevented because of an active CRS (carrier sense) signal on the MII. Defer time is not cumulative. If the transmitter defers for 10,000 bit times, then transmits, collides, backs off, and then has to defer again after completion of back-off, the deferral timer resets to 0 and restarts.  When this bit is reset, the deferral check function is disabled and the MAC defers until the CRS signal goes inactive. This bit is applicable only in Half-Duplex mode and is reserved (RO) in Full-Duplex-only configuration.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> df{}; 
        ///Back-Off Limit  The Back-Off limit determines the random integer number (r) of slot time delays (4,096 bit times for 1000 Mbps and 512 bit times for 10/100 Mbps) the MAC waits before rescheduling a transmission attempt during retries after a collision. This bit is applicable only to Half-Duplex mode and is reserved (RO) in Full-Duplex-only configuration.  00: k = min (n, 10)  01: k = min (n, 8)  10: k = min (n, 4)  11: k = min (n, 1) where n = retransmission attempt. The random integer r takes the value in the range between 0  and 2^k.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> bl{}; 
        ///Automatic Pad/CRC Stripping  When this bit is set, the MAC strips the Pad/FCS field on incoming frames only if the length's field value is less than or equal to 1,500 bytes. All received frames with length field greater than or equal to 1,501 bytes are passed to the application without stripping the Pad/FCS field.  When this bit is reset, the MAC will pass all incoming frames to the Host unmodified.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> acs{}; 
        ///Disable Retry  When this bit is set, the MAC will attempt only 1 transmission. When a collision occurs on the MII, the MAC will ignore the current frame transmission and report a Frame Abort with excessive collision error in the transmit frame status. When this bit is reset, the MAC will attempt retries based on the settings of BL. This bit is applicable only to Half-Duplex mode and is reserved (RO with default value) in Full- Duplex-only configuration.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dr{}; 
        ///Checksum Offload  When this bit is set, the MAC calculates the 16-bit one's complement of the one's complement sum of all received Ethernet frame payloads. It also checks whether the IPv4 Header checksum (assumed to be bytes 25-26 or 29-30 (VLAN-tagged) of the received Ethernet frame) is correct for the received frame and gives the status in the receive status word. The MAC core also appends the 16-bit checksum calculated for the IP header datagram payload (bytes after the IPv4 header) and appends it to the Ethernet frame transferred to the application (when Type 2 COE is deselected). When this bit is reset, this function is disabled.  When Type 2 COE is selected, this bit, when set, enables IPv4 checksum checking for received frame payload's TCP/UDP/ICMP headers. When this bit is reset, the COE function in the receiver is disabled and the corresponding PCE and IP HCE status bits (see  ) are always cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ipc{}; 
        ///Duplex Mode  When this bit is set, the MAC operates in a Full-Duplex mode where it can transmit and receive simultaneously.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dm{}; 
        ///Loopback Mode  When this bit is set, the MAC operates in loopback mode at MII. The (G)MII Receive clock input  is required for the loopback to work properly, as the Transmit clock is not looped-back internally.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lm{}; 
        ///Disable Receive Own  When this bit is set, the MAC disables the reception of frames in Half-Duplex mode. When this bit is reset, the MAC receives all packets that are given by the PHY while transmitting.  This bit is not applicable if the MAC is operating in Full-Duplex mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> do_{}; 
        ///Speed Indicates the speed in Fast Ethernet (MII) mode:  0 = 10 Mbps 1 = 100 Mbps  .
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fes{}; 
        ///Port select   1 = MII (100 Mbp) - this is the only allowed value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ps{}; 
        ///Disable carrier sense during transmission When set high, this bit makes the MAC transmitter ignore the (G)MII CRS signal during frame transmission in Half-Duplex mode. This request results in no errors generated due to Loss of Carrier or No Carrier during such transmission. When this bit is low, the MAC transmitter generates such errors due to Carrier Sense and will even abort the transmissions.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dcrs{}; 
        ///Inter-frame gap These bits control the minimum IFG between frames during transmission.  000 = 96 bit times 001 = 88 bit times 010 = 80 bit times ... 000 = 40 bit times Note that in Half-Duplex mode, the minimum IFG can be configured for 64 bit times (IFG = 100) only. Lower values are not considered
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> ifg{}; 
        ///Jumbo Frame Enable  When this bit is set, MAC allows Jumbo frames of 9,018 bytes (9,022 bytes for VLAN tagged frames) without reporting a giant frame error in the receive frame status.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> je{}; 
        ///Jabber Disable  When this bit is set, the MAC disables the jabber timer on the transmitter, and can transfer frames of up to 16,384 bytes.  When this bit is reset, the MAC cuts off the transmitter if the application sends out more than 2,048 bytes of data (10,240 if JE is set high) during transmission.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> jd{}; 
        ///Watchdog Disable  When this bit is set, the MAC disables the watchdog timer on the receiver, and can receive frames of up to 16,384 bytes.  When this bit is reset, the MAC allows no more than 2,048 bytes (10,240 if JE is set high) of the frame being received and cuts off any bytes received after that.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> wd{}; 
    }
    namespace NonemacFrameFilter{    ///<MAC frame filter
        using Addr = Register::Address<0x40010004,0x7ffffc06,0,unsigned>;
        ///Promiscuous Mode  When this bit is set, the Address Filter module passes all incoming frames regardless of its destination or source address. The SA/DA Filter Fails status bits of the Receive Status Word will always be cleared when PR is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pr{}; 
        ///DA Inverse Filtering  When this bit is set, the Address Check block operates in inverse filtering mode for the DA address comparison for both unicast and multicast frames.  When reset, normal filtering of frames is performed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> daif{}; 
        ///Pass All Multicast  When set, this bit indicates that all received frames with a multicast destination address (first bit in the destination address field is '1') are passed.  When reset, filtering of multicast frame depends on HMC bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pm{}; 
        ///Disable Broadcast Frames  When this bit is set, the AFM module filters all incoming broadcast frames.  When this bit is reset, the AFM module passes all received broadcast frames.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dbf{}; 
        ///Pass Control Frames  These bits control the forwarding of all control frames (including unicast and multicast PAUSE frames). Note that the processing of PAUSE control frames depends only on RFE of Flow Control Register[2].  00 = MAC filters all control frames from reaching the application.  01 = MAC forwards all control frames except PAUSE control frames to application even if they fail the Address filter.  10 = MAC forwards all control frames to application even if they fail the Address Filter.  11 = MAC forwards control frames that pass the Address Filter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pcf{}; 
        ///SA Inverse Filtering  When this bit is set, the Address Check block operates in inverse filtering mode for the SA address comparison. The frames whose SA matches the SA registers will be marked as failing the SA Address filter.  When this bit is reset, frames whose SA does not match the SA registers will be marked as failing the SA Address filter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> saif{}; 
        ///Source Address Filter Enable  The MAC core compares the SA field of the received frames with the values programmed in the enabled SA registers. If the comparison matches, then the SAMatch bit of RxStatus Word is set high. When this bit is set high and the SA filter fails, the MAC drops the frame.  When this bit is reset, then the MAC Core forwards the received frame to the application and with the updated SA Match bit of the RxStatus depending on the SA address comparison.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> saf{}; 
        ///Receive all When this bit is set, the MAC Receiver module passes to the Application all frames received irrespective of whether they pass the address filter. The result of the SA/DA filtering is updated (pass or fail) in the corresponding bits in the Receive Status Word. When this bit is reset, the Receiver module passes to the Application only those frames that pass the SA/DA address filter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ra{}; 
    }
    namespace NonemacHashtableHigh{    ///<Hash table high register
        using Addr = Register::Address<0x40010008,0x00000000,0,unsigned>;
        ///Hash table high This field contains the upper 32 bits of Hash table.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hth{}; 
    }
    namespace NonemacHashtableLow{    ///<Hash table low register
        using Addr = Register::Address<0x4001000c,0x00000000,0,unsigned>;
        ///Hash table low This field contains the upper 32 bits of Hash table.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htl{}; 
    }
    namespace NonemacMiiAddr{    ///<MII address register
        using Addr = Register::Address<0x40010010,0xffff0000,0,unsigned>;
        ///MII busy This bit should read a logic 0 before writing to this register and the MAC_MII_DATA register. This bit must also be set to 0 during a Write to this register. During a PHY register access, this bit will be set to 1 by the Application to indicate that a Read or Write access is in progress. The MAC_MII_DATA register should be kept valid until this bit is cleared by the MAC during a PHY Write operation. The MAC_MII_DATA register is invalid until this bit is cleared by the MAC during a PHY Read operation. This register should not be written to until this bit is cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gb{}; 
        ///MII write When set, this bit tells the PHY that this will be a Write operation using the MII Data register. If this bit is not set, this will be a Read operation, placing the data in the MII Data register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> w{}; 
        ///CSR clock range The CSR Clock Range selection determines the frequency of the MDC clock . The suggested range of clk_csr_i frequency applicable for each value below (when Bit[5] = 0) ensures that the MDC clock is approximately between the frequency range 1.0 MHz - 2.5 MHz.  When bit 5 is set, you can achieve MDC clock of frequency higher than the IEEE 802.3 specified frequency limit of 2.5 MHz and program a clock divider of lower value. For example, when clk_csr_i is of frequency 100 Mhz and you program these bits as 1010, then the resultant MDC clock will be of 12.5 Mhz which is outside the limit of IEEE 802.3 specified range. Please program the values given below only if the interfacing chips supports faster MDC clocks.  See Table 320 for bit values.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> cr{}; 
        ///MII register These bits select the desired MII register in the selected PHY device.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> gr{}; 
        ///Physical layer address This field tells which of the 32 possible PHY devices are being accessed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace NonemacMiiData{    ///<MII data register
        using Addr = Register::Address<0x40010014,0xffff0000,0,unsigned>;
        ///MII data This contains the 16-bit data value read from the PHY after a Management Read operation or the 16-bit data value to be written to the PHY before a Management Write operation.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gd{}; 
    }
    namespace NonemacFlowCtrl{    ///<Flow control register
        using Addr = Register::Address<0x40010018,0x0000ff40,0,unsigned>;
        ///Flow Control Busy/Backpressure Activate  This bit initiates a Pause Control frame in Full-Duplex mode. In Full-Duplex mode, this bit should be read as 0 before writing to the Flow Control register. To initiate a Pause control frame, the Application must set this bit to 1. During a transfer of the Control Frame, this bit will continue to be set to signify that a frame transmission is in progress. After the completion of Pause control frame transmission, the MAC will reset this bit to 0. The Flow Control register should not be written to until this bit is cleared. In Half-Duplex mode, when this bit is set (and TFE is set), then backpressure is asserted by the MAC Core. During backpressure, when the MAC receives a new frame, the transmitter starts sending a JAM pattern resulting in a collision. This control register bit is logically OR'ed with the mti_flowctrl_i input signal for the backpressure function. When the MAC is configured to Full- Duplex mode, the BPA is automatically disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcb{}; 
        ///Transmit Flow Control Enable  In Full-Duplex mode, when this bit is set, the MAC enables the flow control operation to transmit Pause frames. When this bit is reset, the flow control operation in the MAC is disabled, and the MAC will not transmit any Pause frames. In Half-Duplex mode, when this bit is set, the MAC enables the back-pressure operation. When this bit is reset, the backpressure feature is disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tfe{}; 
        ///Receive Flow Control Enable  When this bit is set, the MAC will decode the received Pause frame and disable its transmitter for a specified (Pause Time) time. When this bit is reset, the decode function of the Pause frame is disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rfe{}; 
        ///Unicast Pause Frame Detect  When this bit is set, the MAC will detect the Pause frames with the station's unicast address specified in MAC Address0 High Register and MAC Address0 Low Register, in addition to the detecting Pause frames with the unique multicast address. When this bit is reset, the MAC will detect only a Pause frame with the unique multicast address specified in the 802.3x standard.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> up{}; 
        ///Pause Low Threshold  This field configures the threshold of the PAUSE timer at which the input flow control  is checked for automatic retransmission of PAUSE Frame. The threshold values should be always less than the Pause Time configured in Bits[31:16]. For example, if PT = Ox100 (256 slot-times), and PLT = 01, then a second PAUSE frame is automatically transmitted if the flow control signal  is asserted at 228 (256 - 28) slot-times after the first PAUSE frame is transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> plt{}; 
        ///Disable Zero-Quanta Pause  When set, this bit disables the automatic generation of Zero-Quanta Pause Control frames on the deassertion of the flow-control signal from the FIFO layer . When this bit is reset, normal operation with automatic Zero-Quanta Pause Control frame generation is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dzpq{}; 
        ///Pause time This field holds the value to be used in the Pause Time field in the transmit control frame. If the Pause Time bits is configured to be double-synchronized to the (G)MII clock domain, then consecutive writes to this register should be performed only after at least 4 clock cycles in the destination clock domain.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> pt{}; 
    }
    namespace NonemacVlanTag{    ///<VLAN tag register
        using Addr = Register::Address<0x4001001c,0xfffe0000,0,unsigned>;
        ///VLAN Tag Identifier for Receive Frames  This contains the 802.1Q VLAN tag to identify VLAN frames, and is compared to the fifteenth and sixteenth bytes of the frames being received for VLAN frames. Bits[15:13] are the User Priority, Bit[12] is the Canonical Format Indicator (CFI) and bits[11:0] are the VLAN tag's VLAN Identifier (VID) field. When the ETV bit is set, only the VID (Bits[11:0]) is used for comparison.  If VL (VL[11:0] if ETV is set) is all zeros, the MAC does not check the fifteenth and sixteenth bytes for VLAN tag comparison, and declares all frames with a Type field value of 0x8100 to be VLAN frames.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> vl{}; 
        ///Enable 12-Bit VLAN Tag Comparison  When this bit is set, a 12-bit VLAN identifier, rather than the complete 16-bit VLAN tag, is used for comparison and filtering. Bits[11:0] of the VLAN tag are compared with the corresponding field in the received VLAN-tagged frame.  When this bit is reset, all 16 bits of the received VLAN frame's fifteenth and sixteenth bytes are used for comparison.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> etv{}; 
    }
    namespace NonemacDebug{    ///<Debug register
        using Addr = Register::Address<0x40010024,0xfc80fc88,0,unsigned>;
        ///When high, it indicates that the MAC MII receive protocol engine is actively receiving data and not in IDLE state.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxidlestat{}; 
        ///When high, it indicates the active state of the small FIFO Read and Write controllers respectively of the MAC receive Frame Controller module.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> fifostat0{}; 
        ///When high, it indicates that the MTL RxFIFO Write Controller is active and transferring a received frame to the FIFO.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxfifostat1{}; 
        ///State of the RxFIFO read Controller:  00 = idle state 01 = reading frame data 10 = reading frame status (or time stamp) 11 = flushing the frame data and status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> rxfifostat{}; 
        ///Status of the RxFIFO Fill-level  00 = RxFIFO Empty  01 = RxFIFO fill-level below flow-control de-activate threshold  10 = RxFIFO fill-level above flow-control activate threshold  11 = RxFIFO Full
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rxfifolvl{}; 
        ///When high, it indicates that the MAC MII transmit protocol engine is actively transmitting data and not in IDLE state.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txidlestat{}; 
        ///State of the MAC Transmit Frame Controller module:  00 = idle 01 = Waiting for Status of previous frame or IFG/backoff period to be over  10 = Generating and transmitting a PAUSE control frame (in full duplex mode)  11 = Transferring input frame for transmission
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> txstat{}; 
        ///When high, it indicates that the MAC transmitter is in PAUSE condition (in full-duplex only) and hence will not schedule any frame for transmission.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pause{}; 
        ///State of the TxFIFO read Controller  00 = idle state 01 = READ state (transferring data to MAC transmitter)  10 = Waiting for TxStatus from MAC transmitter  11 = Writing the received TxStatus or flushing the TxFIFO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> txfifostat{}; 
        ///When high, it indicates that the MTL TxFIFO Write Controller is active and transferring data to the TxFIFO.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> txfifostat1{}; 
        ///When high, it indicates that the MTL TxFIFO is not empty and has some data left for transmission.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> txfifolvl{}; 
        ///When high, it indicates that the MTL TxStatus FIFO is full and hence the MTL will not be accepting any more frames for transmission.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> txfifofull{}; 
    }
    namespace NonemacRwakeFrflt{    ///<Remote wake-up frame filter
        using Addr = Register::Address<0x40010028,0x00000000,0,unsigned>;
        ///WKUPFMFILTER address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace NonemacPmtCtrlStat{    ///<PMT control and status
        using Addr = Register::Address<0x4001002c,0x7ffffd98,0,unsigned>;
        ///Power-down When set, all received frames will be dropped. This bit is cleared automatically when a magic packet or Wake-Up frame is received, and Power-Down mode is disabled. Frames received after this bit is cleared are forwarded to the application.This bit must only be set when either the Magic Packet Enable or Wake- Up Frame Enable bit is set high.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd{}; 
        ///Magic packet enable When set, enables generation of a power management event due to Magic Packet reception.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mpe{}; 
        ///Wake-up frame enable When set, enables generation of a power management event due to wake-up frame reception.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wfe{}; 
        ///Magic Packet Received When set, this bit indicates the power management event was generated by the reception of a Magic Packet. This bit is cleared by a Read into this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mpr{}; 
        ///Wake-up Frame Received When set, this bit indicates the power management event was generated due to reception of a wake-up frame. This bit is cleared by a Read into this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wfr{}; 
        ///Global Unicast When set, enables any unicast packet filtered by the MAC (DAF) address recognition to be a wake-up frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gu{}; 
        ///Wake-up Frame Filter Register Pointer Reset When set, resets the Remote Wake-up Frame Filter register pointer to 000. It is automatically cleared after 1 clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> wffrpr{}; 
    }
    namespace NonemacIntr{    ///<Interrupt status register
        using Addr = Register::Address<0x40010038,0xffffffff,0,unsigned>;
    }
    namespace NonemacIntrMask{    ///<Interrupt mask register
        using Addr = Register::Address<0x4001003c,0xfffffff7,0,unsigned>;
        ///PMT Interrupt Mask  This bit when set, will disable the assertion of the interrupt signal due to the setting of PMT Interrupt Status bit in Table 327.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pmtmsk{}; 
    }
    namespace NonemacAddr0High{    ///<MAC address 0 high register
        using Addr = Register::Address<0x40010040,0x7fff0000,0,unsigned>;
        ///MAC Address0 [47:32]  This field contains the upper 16 bits (47:32) of the 6-byte first MAC address. This is used by the MAC for filtering for received frames and for inserting the MAC address in the Transmit Flow Control (PAUSE) Frames.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> a4732{}; 
        ///Always 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mo{}; 
    }
    namespace NonemacAddr0Low{    ///<MAC address 0 low register
        using Addr = Register::Address<0x40010044,0x00000000,0,unsigned>;
        ///MAC Address0 [31:0]  This field contains the lower 32 bits of the 6-byte first MAC address. This is used by the MAC for filtering for received frames and for inserting the MAC address in the Transmit Flow Control (PAUSE) Frames.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> a310{}; 
    }
    namespace NonemacTimestpCtrl{    ///<Time stamp control register
        using Addr = Register::Address<0x40010700,0xfff800c0,0,unsigned>;
        ///Time Stamp Enable  When this bit, is set the timestamping is enabled for transmit and receive frames. When disabled timestamp is not added for transmit and receive frames and the TimeStamp Generator is also suspended. User has to always initialize the TimeStamp (system time) after enabling this mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tsena{}; 
        ///Time Stamp Fine or Coarse Update  When set, indicates that the system times update to be done using fine update method. When reset it indicates the system time stamp update to be done using Coarse method. This bit is reserved if the fine correction option is not enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tscfupdt{}; 
        ///Time Stamp Initialize  When set, the system time is initialized (over-written) with the value specified in the Time Stamp High Update and Time Stamp Low Update registers. This register bit should be read zero before updating it. This bit is reset once the initialize is complete.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tsinit{}; 
        ///Time Stamp Update  When set, the system time is updated (added/subtracted) with the value specified in the Time Stamp High Update and Time Stamp Low Update registers. This register bit should be read zero before updating it. This bit is reset once the update is completed in hardware.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tsupdt{}; 
        ///Time Stamp Interrupt Trigger Enable  When set, the Time Stamp interrupt is generated when the System Time becomes greater than the value written in Target Time register. This bit is reset after the generation of Time Stamp Trigger Interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tstrig{}; 
        ///Addend Reg Update  When set, the contents of the Time Stamp Addend register is updated in the PTP block for fine correction. This is cleared when the update is completed. This register bit should be zero before setting it. This is a reserved bit when only coarse correction option is selected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tsaddreg{}; 
        ///Enable Time Stamp for All Frames  When set, the time stamp snapshot is enabled for all frames received by the core.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tsenall{}; 
        ///Time Stamp Digital or Binary rollover control  When set, the Time Stamp Low register rolls over after 0x3B9A_C9FF value (i.e., 1 nanosecond accuracy) and increments the Time Stamp (High) seconds. When reset, the rollover value of sub-second register is 0x7FFF_FFFF. The sub-second increment has to be programmed correctly depending on the PTP reference clock frequency and this bit value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tsctrlssr{}; 
        ///Enable PTP packet snooping for version 2 format  When set, the PTP packets are snooped using the 1588 version 2 format else snooped using the version 1 format.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tsver2ena{}; 
        ///Enable Time Stamp Snapshot for PTP over Ethernet frames  When set, the time stamp snapshot is taken for frames which have PTP messages in Ethernet frames (PTP over Ethernet) also. By default snapshots are taken for UDP-IP-Ethernet PTP packets.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tsipena{}; 
        ///Enable Time Stamp Snapshot for IPv6 frames  When set, the time stamp snapshot is taken for IPv6 frames.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tsipv6ena{}; 
        ///Enable Time Stamp Snapshot for IPv4 frames  When set, the time stamp snapshot is taken for IPv4 frames.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tsipv4ena{}; 
        ///Enable Time Stamp Snapshot for Event Messages  When set, the time stamp snapshot is taken for event messages only . When reset snapshot is taken for all other messages except Announce, Management and Signaling.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tsevntena{}; 
        ///Enable Snapshot for Messages Relevant to Master  When set, the snapshot is taken for messages relevant to master node only else snapshot is taken for messages relevant to slave node. This is valid only for ordinary clock and boundary clock node.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tsmstrena{}; 
        ///Select the type of clock node  The following are the options to select the type of clock node:  00 = ordinary clock 01 = boundary clock 10 = end-to-end transparent clock 11 = peer-to-peer transparent clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> tsclktype{}; 
        ///Enable MAC address for PTP frame filtering  When set, uses the DA MAC address (that matches any MAC Address register except the default MAC address 0) to filter the PTP frames when PTP is sent directly over Ethernet.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tsenmacaddr{}; 
    }
    namespace NonedmaBusMode{    ///<Bus Mode Register
        using Addr = Register::Address<0x40011000,0xf0000000,0,unsigned>;
        ///Software reset When this bit is set, the MAC DMA Controller resets all MAC Subsystem internal registers and logic. It is cleared automatically after the reset operation has completed in all of the core clock domains. Read a 0 value in this bit before re-programming any register of the core.  The reset operation is completed only when all the resets in all the active clock domains are de-asserted. Hence it is essential that all the PHY inputs clocks (applicable for the selected PHY interface) are present for software reset completion.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swr{}; 
        ///DMA arbitration scheme 0 = Round-robin with Rx:Tx priority given in bits [15:14]  1 = Rx has priority over Tx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> da{}; 
        ///Descriptor skip length This bit specifies the number of Word/Dword/Lword (depending on 32/64/128-bit bus) to skip between two unchained descriptors. The address skipping starts from the end of current descriptor to the start of next descriptor. When DSL value equals zero, then the descriptor table is taken as contiguous by the DMA, in Ring mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,2),Register::ReadWriteAccess,unsigned> dsl{}; 
        ///Alternate (Enhanced) descriptor size When set, the alternate (enhanced) descriptor (see Section 20.9) size is increased to 32 bytes (8 DWORDS). This is required when the Advanced Time-Stamp feature or Full IPC Offload Engine is enabled in the receiver.  When reset, the descriptor size reverts back to 4 DWORDs (16 bytes).  This bit is present only when Alternate Descriptor feature is selected and either Advanced Time Stamp or IPC Full Checksum Offload (type 2) feature is selected during configuration. Otherwise, this bit is reserved and read-only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> atds{}; 
        ///Programmable burst length These bits indicate the maximum number of beats to be transferred in one DMA transaction. This will be the maximum value that is used in a single block Read/Write. The DMA will always attempt to burst as specified in PBL each time it starts a Burst transfer on the host bus. PBL can be programmed with permissible values of 1, 2, 4, 8, 16, and 32. Any other value will result in undefined behavior. When USP is set high, this PBL value is applicable for TxDMA transactions only.  The PBL values have the following limitations.  The maximum number of beats (PBL) possible is limited by the size of the Tx FIFO and Rx FIFO in the MTL layer and the data bus width on the DMA. The FIFO has a constraint that the maximum beat supported is half the depth of the FIFO, except when specified (as given below). For different data bus widths and FIFO sizes, the valid PBL range (including x8 mode) is provided in the following table. If the PBL is common for both transmit and receive DMA, the minimum Rx FIFO and Tx FIFO depths must be considered. Do not program out-of-range PBL values, because the system may not behave properly.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> pbl{}; 
        ///Rx-to-Tx priority ratio RxDMA requests given priority over TxDMA requests in the following ratio. This is valid only when the DA bit is reset.  00 = 1-to-1 01 = 2-to-1 10 = 3-to-1 11 = 4-to-1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pr{}; 
        ///Fixed burst This bit controls whether the AHB Master interface performs fixed burst transfers or not. When set, the AHB will use only SINGLE, INCR4, INCR8 or INCR16 during start of normal burst transfers. When reset, the AHB will use SINGLE and INCR burst transfer operations.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fb{}; 
        ///RxDMA PBL These bits indicate the maximum number of beats to be transferred in one RxDMA transaction. This will be the maximum value that is used in a single block Read/Write. The RxDMA will always attempt to burst as specified in RPBL each time it starts a Burst transfer on the host bus. RPBL can be programmed with permissible values of 1, 2, 4, 8, 16, and 32. Any other value will result in undefined behavior. These bits are valid and applicable only when USP is set high.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,17),Register::ReadWriteAccess,unsigned> rpbl{}; 
        ///Use separate PBL When set high, it configures the RxDMA to use the value configured in bits [22:17] as PBL while the PBL value in bits [13:8] is applicable to TxDMA operations only. When reset to low, the PBL value in bits [13:8] is applicable for both DMA engines.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usp{}; 
        ///8 x PBL mode When set high, this bit multiplies the PBL value programmed (bits [22:17] and bits [13:8]) eight times. Thus the DMA will transfer data in to a maximum of 8, 16, 32, 64, 128, and 256 beats depending on the PBL value.  This bit function is not backward compatible. Before version 3.50a, this bit was 4xPBL.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pbl8x{}; 
        ///Address-aligned beats When this bit is set high and the FB bit equals 1, the AHB interface generates all bursts aligned to the start address LS bits. If the FB bit equals 0, the first burst (accessing the data buffer's start address) is not aligned, but subsequent bursts are aligned to the address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> aal{}; 
        ///Mixed burst When this bit is set high and FB bit is low, the AHB master interface will start all bursts of length more than 16 with INCR (undefined burst) whereas it will revert to fixed burst transfers (INCRx and SINGLE) for burst-length of 16 and below.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mb{}; 
        ///When set, this bit indicates that the transmit DMA has higher priority than the receive DMA during arbitration for the system-side bus.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> txpr{}; 
    }
    namespace NonedmaTransPollDemand{    ///<Transmit poll demand register
        using Addr = Register::Address<0x40011004,0x00000000,0,unsigned>;
        ///Transmit poll demand When these bits are written with any value, the DMA reads the current descriptor pointed to by the Current Host Transmit Descriptor register (Section 20.6.27). If that descriptor is not available (owned by Host), transmission returns to the Suspend state and bit 2 in the DMA_STAT Register is asserted. If the descriptor is available, transmission resumes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tpd{}; 
    }
    namespace NonedmaRecPollDemand{    ///<Receive poll demand register
        using Addr = Register::Address<0x40011008,0x00000000,0,unsigned>;
        ///Receive poll demand When these bits are written with any value, the DMA reads the current descriptor pointed to by the Current Host Receive Descriptor register (Section 20.6.28). If that descriptor is not available (owned by Host), reception returns to the Suspended state and bit 7 in the DMA_STAT Register is not asserted. If the descriptor is available, the Receive DMA returns to active state.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rpd{}; 
    }
    namespace NonedmaRecDesAddr{    ///<Receive descriptor list address register
        using Addr = Register::Address<0x4001100c,0x00000000,0,unsigned>;
        ///Start of receive list This field contains the base address of the First Descriptor in the Receive Descriptor list. The LSB bits [1/2/3:0] for 32/64/128-bit bus width) will be ignored and taken as all-zero by the DMA internally. Hence these LSB bits are Read Only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srl{}; 
    }
    namespace NonedmaTransDesAddr{    ///<Transmit descriptor list address register
        using Addr = Register::Address<0x40011010,0x00000000,0,unsigned>;
        ///Start of transmit list This field contains the base address of the First Descriptor in the Transmit Descriptor list. The LSB bits [1/2/3:0] for 32/64/128-bit bus width) will be ignored and taken as all-zero by the DMA internally. Hence these LSB bits are Read Only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srl{}; 
    }
    namespace NonedmaStat{    ///<Status register
        using Addr = Register::Address<0x40011014,0xfffe1800,0,unsigned>;
        ///Transmit interrupt  This bit indicates that frame transmission is finished and TDES1[31] is set in the First Descriptor.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ti{}; 
        ///Transmit process stopped This bit is set when the transmission is stopped.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tps{}; 
        ///Transmit buffer unavailable  This bit indicates that the Next Descriptor in the Transmit List is owned by the host and cannot be acquired by the DMA. Transmission is suspended. Bits[22:20] explain the Transmit Process state transitions. To resume processing transmit descriptors, the host should change the ownership of the bit of the descriptor and then issue a Transmit Poll Demand command.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tu{}; 
        ///Transmit jabber timeout  This bit indicates that the Transmit Jabber Timer expired, meaning that the transmitter had been excessively active. The transmission process is aborted and placed in the Stopped state. This causes the Transmit Jabber Timeout TDES0[14] flag to assert.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tjt{}; 
        ///Receive overflow This bit indicates that the Receive Buffer had an Overflow during frame reception. If the partial frame is transferred to application, the overflow status is set in RDES0[11].
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Transmit underflow This bit indicates that the Transmit Buffer had an Underflow during frame transmission. Transmission is suspended and an Underflow Error TDES0[1] is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> unf{}; 
        ///Receive interrupt  This bit indicates the completion of frame reception. Specific frame status information has been posted in the descriptor. Reception remains in the Running state.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ri{}; 
        ///Receive buffer unavailable  This bit indicates that the Next Descriptor in the Receive List is owned by the host and cannot be acquired by the DMA. Receive Process is suspended. To resume processing Receive descriptors, the host should change the ownership of the descriptor and issue a Receive Poll Demand command. If no Receive Poll Demand is issued, Receive Process resumes when the next recognized incoming frame is received. This bit is set only when the previous Receive Descriptor was owned by the DMA.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ru{}; 
        ///Received process stopped This bit is asserted when the Receive Process enters the Stopped state.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rps{}; 
        ///Receive watchdog timeout  This bit is asserted when a frame with a length greater than 2,048 bytes is received (10,240 when Jumbo Frame mode is enabled).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rwt{}; 
        ///Early transmit interrupt  This bit indicates that the frame to be transmitted was fully transferred to the MTL Transmit FIFO.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eti{}; 
        ///Fatal bus error interrupt This bit indicates that a bus error occurred, as detailed in bits [25:23]. When this bit is set, the corresponding DMA engine disables all its bus accesses.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbi{}; 
        ///Early receive interrupt  This bit indicates that the DMA had filled the first data buffer of the packet. Receive Interrupt bit 6 in this register automatically clears this bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eri{}; 
        ///Abnormal interrupt summary  Abnormal Interrupt Summary bit value is the logical OR of the following when the corresponding interrupt bits are enabled in the DMA_INT_EN register:  DMA_STAT register, bit 1: Transmit process stopped DMA_STAT register, bit 3: Transmit jabber timeout DMA_STAT register, bit 4: Receive overflow DMA_STAT register, bit 5: Transmit underflow DMA_STAT register, bit 7: Receiver buffer unavailable DMA_STAT register, bit 8: Receive process stopped DMA_STAT register, bit 9: Receive watchdog timeout DMA_STAT register, bit 10: Early transmit interrupt DMA_STAT register, bit 13: Fatal bus error Only unmasked bits affect the Abnormal Interrupt Summary bit.  This is a sticky bit and must be cleared each time a corresponding bit that causes AIS to be set is cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> aie{}; 
        ///Normal interrupt summary Normal Interrupt Summary bit value is the logical OR of the following when the corresponding interrupt bits are enabled in the DMA_INT_EN register:  DMA_STAT register, bit 0: Transmit interrupt DMA_STAT register, bit 2: Transmit buffer unavailable DMA_STAT register, bit 6: Receive interrupt DMA_STAT register, bit 14: Early receive interrupt Only unmasked bits affect the Normal Interrupt Summary bit.  This is a sticky bit and must be cleared (by writing a 1 to this bit) each time a corresponding bit that causes NIS to be set is cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nis{}; 
    }
    namespace NonedmaOpMode{    ///<Operation mode register
        using Addr = Register::Address<0x40011018,0xf8ce1f21,0,unsigned>;
        ///Start/stop receive When this bit is set, the Receive process is placed in the Running state. The DMA attempts to acquire the descriptor from the Receive list and processes incoming frames. Descriptor acquisition is attempted from the current position in the list, which is the address set by the DMA_REC_DES_ADDR register or the position retained when the Receive process was previously stopped. If no descriptor is owned by the DMA, reception is suspended and Receive Buffer Unavailable bit (bit 7 in DMA_STAT register) is set. The Start Receive command is effective only when reception has stopped. If the command was issued before setting the DMA_REC_DES_ADDR, DMA behavior is unpredictable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sr{}; 
        ///Operate on second frame When this bit is set, this bit instructs the DMA to process a second frame of Transmit data even before status for first frame is obtained.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osf{}; 
        ///Receive threshold control These two bits control the threshold level of the MTL Receive FIFO. Transfer (request) to DMA starts when the frame size within the MTL Receive FIFO is larger than the threshold. In addition, full frames with a length less than the threshold are transferred automatically. Note that value of 11 is not applicable if the configured Receive FIFO size is 128 bytes. These bits are valid only when the RSF bit is zero, and are ignored when the RSF bit is set to 1.  00 = 64 01 = 32 10 = 96 11 = 128
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> rtc{}; 
        ///Forward undersized good frames When set, the Rx FIFO will forward Undersized frames (frames with no Error and length less than 64 bytes) including pad-bytes and CRC).  When reset, the Rx FIFO will drop all frames of less than 64 bytes, unless it is already transferred due to lower value of Receive Threshold (e.g., RTC = 01).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fuf{}; 
        ///Forward error frames When this bit is reset, the Rx FIFO drops frames with error status (CRC error, collision error, GMII_ER, giant frame, watchdog timeout, overflow). However, if the frame's start byte (write) pointer is already transferred to the read controller side (in Threshold mode), then the frames are not dropped.  . When FEF is set, all frames except runt error frames are forwarded to the DMA. But when RxFIFO overflows when a partial frame is written, then such frames are dropped even when FEF is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fef{}; 
        ///Start/Stop Transmission Command  When this bit is set, transmission is placed in the Running state, and the DMA checks the Transmit List at the current position for a frame to be transmitted. Descriptor acquisition is attempted either from the current position in the list, which is the Transmit List Base Address set by the DMA_TRANS_DES_ADDR register or from the position retained when transmission was stopped previously. If the current descriptor is not owned by the DMA, transmission enters the Suspended state and Transmit Buffer Unavailable (DMA_STAT register, bit 2) is set. The Start Transmission command is effective only when transmission is stopped. If the command is issued before setting the DMA_TRANS_DES_ADDR register, then the DMA behavior is unpredictable.  When this bit is reset, the transmission process is placed in the Stopped state after completing the transmission of the current frame. The Next Descriptor position in the Transmit List is saved, and becomes the current position when transmission is restarted. The stop transmission command is effective only the transmission of the current frame is complete or when the transmission is in the Suspended state.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> st{}; 
        ///Transmit threshold control These three bits control the threshold level of the MTL Transmit FIFO. Transmission starts when the frame size within the MTL Transmit FIFO is larger than the threshold. In addition, full frames with a length less than the threshold are also transmitted. These bits are used only when the TSF bit (Bit 21) is reset. 000 = 64 001 = 128 010 = 192 011 = 256 100 = 40 101 = 32 110 = 24 111 = 16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,14),Register::ReadWriteAccess,unsigned> ttc{}; 
        ///Flush transmit FIFO When this bit is set, the transmit FIFO controller logic is reset to its default values and thus all data in the Tx FIFO is lost/flushed. This bit is cleared internally when the flushing operation is completed fully. The Operation Mode register should not be written to until this bit is cleared. The data which is already accepted by the MAC transmitter will not be flushed. It will be scheduled for transmission and will result in underflow and runt frame transmission.  The flush operation completes only after emptying the TxFIFO of its contents and all the pending Transmit Status of the transmitted frames are accepted by the host. In order to complete this flush operation, the PHY transmit clock is required to be active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ftf{}; 
        ///Transmit store and forward When this bit is set, transmission starts when a full frame resides in the MTL Transmit FIFO. When this bit is set, the TTC values specified in this register (bits [16:14]) are ignored. This bit should be changed only when transmission is stopped.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tsf{}; 
        ///Disable flushing of received frames When this bit is set, the RxDMA does not flush any frames due to the unavailability of receive descriptors/buffers as it does normally when this bit is reset. (See ).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dff{}; 
        ///Receive store and forward When this bit is set, the MTL only reads a frame from the Rx FIFO after the complete frame has been written to it, ignoring RTC bits. When this bit is reset, the Rx FIFO operates in Cut-Through mode, subject to the threshold specified by the RTC bits.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rsf{}; 
        ///Disable Dropping of TCP/IP Checksum Error Frames  When this bit is set, the core does not drop frames that only have errors detected by the Receive Checksum Offload engine. Such frames do not have any errors (including FCS error) in the Ethernet frame received by the MAC but have errors in the encapsulated payload only. When this bit is reset, all error frames are dropped if the FEF bit is reset.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dt{}; 
    }
    namespace NonedmaIntEn{    ///<Interrupt enable register
        using Addr = Register::Address<0x4001101c,0xfffe1800,0,unsigned>;
        ///Transmit interrupt enable When this bit is set with Normal Interrupt Summary Enable (bit 16 in this register), Transmit Interrupt is enabled. When this bit is reset, Transmit Interrupt is disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tie{}; 
        ///Transmit stopped enable When this bit is set with Abnormal Interrupt Summary Enable (bit 15 in this register), Transmission Stopped Interrupt is enabled. When this bit is reset, Transmission Stopped Interrupt is disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tse{}; 
        ///Transmit buffer unavailable enable When this bit is set with Normal Interrupt Summary Enable (bit 16 in this register), Transmit Buffer Unavailable Interrupt is enabled. When this bit is reset, Transmit Buffer Unavailable Interrupt is disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tue{}; 
        ///Transmit jabber timeout enable When this bit is set with Abnormal Interrupt Summary Enable (bit 15 in this register), Transmit Jabber Timeout Interrupt is enabled. When this bit is reset, Transmit Jabber Timeout Interrupt is disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tje{}; 
        ///Overflow interrupt enable When this bit is set with Abnormal Interrupt Summary Enable (bit 15 in this register), Receive Overflow Interrupt is enabled. When this bit is reset, Overflow Interrupt is disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ove{}; 
        ///Underflow interrupt enable When this bit is set with Abnormal Interrupt Summary Enable (bit 15 in this register), Transmit Underflow Interrupt is enabled. When this bit is reset, Underflow Interrupt is disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> une{}; 
        ///Receive interrupt enable When this bit is set with Normal Interrupt Summary Enable (bit 16 in this register), Receive Interrupt is enabled. When this bit is reset, Receive Interrupt is disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rie{}; 
        ///Receive buffer unavailable enable When this bit is set with Abnormal Interrupt Summary Enable (bit 15 in this register), Receive Buffer Unavailable Interrupt is enabled. When this bit is reset, the Receive Buffer Unavailable Interrupt is disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rue{}; 
        ///Received stopped enable When this bit is set with Abnormal Interrupt Summary Enable (bit 15 in this register), Receive Stopped Interrupt is enabled. When this bit is reset, Receive Stopped Interrupt is disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rse{}; 
        ///Receive watchdog timeout enable When this bit is set with Abnormal Interrupt Summary Enable (bit 15 in this register), the Receive Watchdog Timeout Interrupt is enabled. When this bit is reset, Receive Watchdog Timeout Interrupt is disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rwe{}; 
        ///Early transmit interrupt enable When this bit is set with an Abnormal Interrupt Summary Enable (bit 15 in this register), Early Transmit Interrupt is enabled. When this bit is reset, Early Transmit Interrupt is disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ete{}; 
        ///Fatal bus error enable When this bit is set with Abnormal Interrupt Summary Enable (bit 15 in this register), the Fatal Bus Error Interrupt is enabled. When this bit is reset, Fatal Bus Error Enable Interrupt is disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbe{}; 
        ///Early receive interrupt enable When this bit is set with Normal Interrupt Summary Enable (bit 16 in this register), Early Receive Interrupt is enabled. When this bit is reset, Early Receive Interrupt is disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ere{}; 
        ///Abnormal interrupt summary enable When this bit is set, an Abnormal Interrupt is enabled. When this bit is reset, an Abnormal Interrupt is disabled. This bit enables the following bits  DMA_STAT register, bit 1: Transmit process stopped DMA_STAT register, bit 3: Transmit jabber timeout DMA_STAT register, bit 4: Receive overflow DMA_STAT register, bit 5: Transmit underflow DMA_STAT register, bit 7: Receiver buffer unavailable DMA_STAT register, bit 8: Receive process stopped DMA_STAT register, bit 9: Receive watchdog timeout DMA_STAT register, bit 10: Early transmit interrupt DMA_STAT register, bit 13: Fatal bus error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> aie{}; 
        ///Normal interrupt summary enable When this bit is set, a normal interrupt is enabled. When this bit is reset, a normal interrupt is disabled. This bit enables the following bits:  DMA_STAT register, bit 0: Transmit interrupt DMA_STAT register, bit 2: Transmit buffer unavailable DMA_STAT register, bit 6: Receive interrupt DMA_STAT register, bit 14: Early receive interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nie{}; 
    }
    namespace NonedmaMfrmBufof{    ///<Missed frame and buffer overflow register
        using Addr = Register::Address<0x40011020,0xe0000000,0,unsigned>;
        ///Number of frames missed Indicates the number of frames missed by the controller due to the Host Receive Buffer being unavailable. This counter is incremented each time the DMA discards an incoming frame. The counter is cleared when this register is read with .
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> fmc{}; 
        ///Overflow bit for missed frame counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> oc{}; 
        ///Number of frames missed by the application Indicates the number of frames missed by the application. This counter is incremented each time the MTL asserts the sideband signal mtl_rxoverflow_o. The counter is cleared when this register is read with  .
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,17),Register::ReadWriteAccess,unsigned> fma{}; 
        ///Overflow bit for FIFO overflow counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> of{}; 
    }
    namespace NonedmaRecIntWdt{    ///<Receive interrupt watchdog timer register
        using Addr = Register::Address<0x40011024,0xffffff00,0,unsigned>;
        ///RI watchdog timeout Indicates the number of system clock cycles multiplied by 256 for which the watchdog timer is set. The watchdog timer gets triggered with the programmed value after the RxDMA completes the transfer of a frame for which the RI status bit is not set due to the setting in the corresponding descriptor RDES1[31]. When the watch-dog timer runs out, the RI bit is set and the timer is stopped. The watchdog timer is reset when RI bit is set high due to automatic setting of RI as per RDES1[31] of any received frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> riwt{}; 
    }
    namespace NonedmaCurhostTransDes{    ///<Current host transmit descriptor register
        using Addr = Register::Address<0x40011048,0x00000000,0,unsigned>;
        ///Host Transmit Descriptor Address Pointer  Cleared on Reset. Pointer updated by DMA during operation.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htd{}; 
    }
    namespace NonedmaCurhostRecDes{    ///<Current host receive descriptor register
        using Addr = Register::Address<0x4001104c,0x00000000,0,unsigned>;
        ///Host Receive Descriptor Address Pointer  Cleared on Reset. Pointer updated by DMA during operation.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hrd{}; 
    }
    namespace NonedmaCurhostTransBuf{    ///<Current host transmit buffer address register
        using Addr = Register::Address<0x40011050,0x00000000,0,unsigned>;
        ///Host Transmit Buffer Address Pointer  Cleared on Reset. Pointer updated by DMA during operation.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htb{}; 
    }
    namespace NonedmaCurhostRecBuf{    ///<Current host receive buffer address register
        using Addr = Register::Address<0x40011054,0x00000000,0,unsigned>;
        ///Host Receive Buffer Address Pointer  Cleared on Reset. Pointer updated by DMA during operation.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hrb{}; 
    }
}
