#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Ethernet
    namespace EthernetMac1{    ///<MAC configuration register 1.
        using Addr = Register::Address<0x20084000,0x00000000,0x00000000,unsigned>;
        ///RECEIVE ENABLE. Set this to allow receive frames to be received. Internally the MAC synchronizes this control bit to the incoming receive stream.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxenable{}; 
        ///PASS ALL RECEIVE FRAMES. When enabled (set to 1), the MAC will pass all frames regardless of type (normal vs. Control). When disabled, the MAC does not pass valid Control frames.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> parf{}; 
        ///RX FLOW CONTROL. When enabled (set to 1), the MAC acts upon received PAUSE Flow Control frames. When disabled, received PAUSE Flow Control frames are ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxflowctrl{}; 
        ///TX FLOW CONTROL. When enabled (set to 1), PAUSE Flow Control frames are allowed to be transmitted. When disabled, Flow Control frames are blocked.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txflowctrl{}; 
        ///Setting this bit will cause the MAC Transmit interface to be looped back to the MAC Receive interface. Clearing this bit results in normal operation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> loopback{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Setting this bit will put the Transmit Function logic in reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> resettx{}; 
        ///Setting this bit resets the MAC Control Sublayer / Transmit logic. The MCS logic implements flow control.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> resetmcstx{}; 
        ///Setting this bit will put the Ethernet receive logic in reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> resetrx{}; 
        ///Setting this bit resets the MAC Control Sublayer / Receive logic. The MCS logic implements flow control.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> resetmcsrx{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///SIMULATION RESET. Setting this bit will cause a reset to the random number generator within the Transmit Function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> simreset{}; 
        ///SOFT RESET. Setting this bit will put all modules within the MAC in reset except the Host Interface.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> softreset{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetMac2{    ///<MAC configuration register 2.
        using Addr = Register::Address<0x20084004,0x00000000,0x00000000,unsigned>;
        ///When enabled (set to 1), the MAC operates in Full-Duplex mode. When disabled, the MAC operates in Half-Duplex mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fullduplex{}; 
        ///FRAMELENGTH CHECKING. When enabled (set to 1), both transmit and receive frame lengths are compared to the Length/Type field. If the Length/Type field represents a length then the check is performed. Mismatches are reported in the StatusInfo word for each received frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> flc{}; 
        ///HUGE FRAME ENABLEWhen enabled (set to 1), frames of any length are transmitted and received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hfen{}; 
        ///DELAYED CRC. This bit determines the number of bytes, if any, of proprietary header information that exist on the front of IEEE 802.3 frames. When 1, four bytes of header (ignored by the CRC function) are added. When 0, there is no proprietary header.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> delayedcrc{}; 
        ///CRC ENABLESet this bit to append a CRC to every frame whether padding was required or not. Must be set if PAD/CRC ENABLE is set. Clear this bit if frames presented to the MAC contain a CRC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crcen{}; 
        ///PAD CRC ENABLE. Set this bit to have the MAC pad all short frames. Clear this bit if frames presented to the MAC have a valid length. This bit is used in conjunction with AUTO PAD ENABLE and VLAN PAD ENABLE. See Table 153 - Pad Operation for details on the pad function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> padcrcen{}; 
        ///VLAN PAD ENABLE. Set this bit to cause the MAC to pad all short frames to 64 bytes and append a valid CRC. Consult Table 153 - Pad Operation for more information on the various padding features. Note: This bit is ignored if PAD / CRC ENABLE is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> vlanpaden{}; 
        ///AUTODETECTPAD ENABLE. Set this bit to cause the MAC to automatically detect the type of frame, either tagged or un-tagged, by comparing the two octets following the source address with 0x8100 (VLAN Protocol ID) and pad accordingly. Table 153 - Pad Operation provides a description of the pad function based on the configuration of this register. Note: This bit is ignored if PAD / CRC ENABLE is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> autodetpaden{}; 
        ///PURE PREAMBLE ENFORCEMEN. When enabled (set to 1), the MAC will verify the content of the preamble to ensure it contains 0x55 and is error-free. A packet with an incorrect preamble is discarded. When disabled, no preamble checking is performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ppenf{}; 
        ///LONG PREAMBLE ENFORCEMENT. When enabled (set to 1), the MAC only allows receive packets which contain preamble fields less than 12 bytes in length. When disabled, the MAC allows any length preamble as per the Standard.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lpenf{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When enabled (set to 1), the MAC will immediately retransmit following a collision rather than using the Binary Exponential Backoff algorithm as specified in the Standard.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nobackoff{}; 
        ///BACK PRESSURE / NO BACKOFF. When enabled (set to 1), after the MAC incidentally causes a collision during back pressure, it will immediately retransmit without backoff, reducing the chance of further collisions and ensuring transmit packets get sent.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> bpNobackoff{}; 
        ///When enabled (set to 1) the MAC will defer to carrier indefinitely as per the Standard. When disabled, the MAC will abort when the excessive deferral limit is reached.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> excessdefer{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,15),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetIpgt{    ///<Back-to-Back Inter-Packet-Gap register.
        using Addr = Register::Address<0x20084008,0x00000000,0x00000000,unsigned>;
        ///BACK-TO-BACK INTER-PACKET-GAP.This is a programmable field representing the nibble time offset of the minimum possible period between the end of any transmitted packet to the beginning of the next. In Full-Duplex mode, the register value should be the desired period in nibble times minus 3. In Half-Duplex mode, the register value should be the desired period in nibble times minus 6. In Full-Duplex the recommended setting is 0x15 (21d), which represents the minimum IPG of 960 ns (in 100 Mbps mode) or 9.6 us (in 10 Mbps mode). In Half-Duplex the recommended setting is 0x12 (18d), which also represents the minimum IPG of 960 ns (in 100 Mbps mode) or 9.6 us (in 10 Mbps mode).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> btobintegap{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetIpgr{    ///<Non Back-to-Back Inter-Packet-Gap register.
        using Addr = Register::Address<0x2008400c,0x00000000,0x00000000,unsigned>;
        ///NON-BACK-TO-BACK INTER-PACKET-GAP PART2. This is a programmable field representing the Non-Back-to-Back Inter-Packet-Gap. The recommended value is 0x12 (18d), which represents the minimum IPG of 960 ns (in 100 Mbps mode) or 9.6 us (in 10 Mbps mode).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> nbtobintegap2{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///NON-BACK-TO-BACK INTER-PACKET-GAP PART1. This is a programmable field representing the optional carrierSense window referenced in IEEE 802.3/4.2.3.2.1 'Carrier Deference'. If carrier is detected during the timing of IPGR1, the MAC defers to carrier. If, however, carrier becomes active after IPGR1, the MAC continues timing IPGR2 and transmits, knowingly causing a collision, thus ensuring fair access to medium. Its range of values is 0x0 to IPGR2. The recommended value is 0xC (12d)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> nbtobintegap1{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,15),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetClrt{    ///<Collision window / Retry register.
        using Addr = Register::Address<0x20084010,0x00000000,0x00000000,unsigned>;
        ///RETRANSMISSION MAXIMUM.This is a programmable field specifying the number of retransmission attempts following a collision before aborting the packet due to excessive collisions. The Standard specifies the attemptLimit to be 0xF (15d). See IEEE 802.3/4.2.3.2.5.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> retransmax{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///COLLISION WINDOW. This is a programmable field representing the slot time or collision window during which collisions occur in properly configured networks. The default value of 0x37 (55d) represents a 56 byte window following the preamble and SFD.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> collwin{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetMaxf{    ///<Maximum Frame register.
        using Addr = Register::Address<0x20084014,0x00000000,0x00000000,unsigned>;
        ///MAXIMUM FRAME LENGTH. This field resets to the value 0x0600, which represents a maximum receive frame of 1536 octets. An untagged maximum size Ethernet frame is 1518 octets. A tagged frame adds four octets for a total of 1522 octets. If a shorter maximum length restriction is desired, program this 16-bit field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> maxflen{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetSupp{    ///<PHY Support register.
        using Addr = Register::Address<0x20084018,0x00000000,0x00000000,unsigned>;
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit configures the Reduced MII logic for the current operating speed. When set, 100 Mbps mode is selected. When cleared, 10 Mbps mode is selected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> speed{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetTest{    ///<Test register.
        using Addr = Register::Address<0x2008401c,0x00000000,0x00000000,unsigned>;
        ///SHORTCUT PAUSE QUANTA. This bit reduces the effective PAUSE quanta from 64 byte-times to 1 byte-time.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> scpq{}; 
        ///This bit causes the MAC Control sublayer to inhibit transmissions, just as if a PAUSE Receive Control frame with a nonzero pause time parameter was received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> testpause{}; 
        ///TEST BACKPRESSURE. Setting this bit will cause the MAC to assert backpressure on the link. Backpressure causes preamble to be transmitted, raising carrier sense. A transmit packet from the system will be sent during backpressure.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> testbp{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetMcfg{    ///<MII Mgmt Configuration register.
        using Addr = Register::Address<0x20084020,0x00000000,0x00000000,unsigned>;
        ///SCAN INCREMENT. Set this bit to cause the MII Management hardware to perform read cycles across a range of PHYs. When set, the MII Management hardware will perform read cycles from address 1 through the value set in PHY ADDRESS[4:0]. Clear this bit to allow continuous reads of the same PHY.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> scaninc{}; 
        ///SUPPRESS PREAMBLE. Set this bit to cause the MII Management hardware to perform read/write cycles without the 32-bit preamble field. Clear this bit to cause normal cycles to be performed. Some PHYs support suppressed preamble.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> supppreamble{}; 
        ///CLOCK SELECT. This field is used by the clock divide logic in creating the MII Management Clock (MDC) which IEEE 802.3u defines to be no faster than 2.5 MHz. Some PHYs support clock rates up to 12.5 MHz, however. The AHB bus clock (HCLK) is divided by the specified amount. Refer to Table 160 below for the definition of values for this field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> clocksel{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///RESET MII MGMT. This bit resets the MII Management hardware.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> resetmiimgmt{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetMcmd{    ///<MII Mgmt Command register.
        using Addr = Register::Address<0x20084024,0x00000000,0x00000000,unsigned>;
        ///This bit causes the MII Management hardware to perform a single Read cycle. The Read data is returned in Register MRDD (MII Mgmt Read Data).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> read{}; 
        ///This bit causes the MII Management hardware to perform Read cycles continuously. This is useful for monitoring Link Fail for example.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scan{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetMadr{    ///<MII Mgmt Address register.
        using Addr = Register::Address<0x20084028,0x00000000,0x00000000,unsigned>;
        ///REGISTER ADDRESS. This field represents the 5-bit Register Address field of Mgmt cycles. Up to 32 registers can be accessed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> regaddr{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///PHY ADDRESS. This field represents the 5-bit PHY Address field of Mgmt cycles. Up to 31 PHYs can be addressed (0 is reserved).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> phyaddr{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,13),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetMwtd{    ///<MII Mgmt Write Data register.
        using Addr = Register::Address<0x2008402c,0x00000000,0x00000000,unsigned>;
        ///WRITE DATA. When written, an MII Mgmt write cycle is performed using the 16-bit data and the pre-configured PHY and Register addresses from the MII Mgmt Address register (MADR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> writedata{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetMrdd{    ///<MII Mgmt Read Data register.
        using Addr = Register::Address<0x20084030,0x00000000,0x00000000,unsigned>;
        ///READ DATA. Following an MII Mgmt Read Cycle, the 16-bit data can be read from this location.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> readdata{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetMind{    ///<MII Mgmt Indicators register.
        using Addr = Register::Address<0x20084034,0x00000000,0x00000000,unsigned>;
        ///When 1 is returned - indicates MII Mgmt is currently performing an MII Mgmt Read or Write cycle.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> busy{}; 
        ///When 1 is returned - indicates a scan operation (continuous MII Mgmt Read cycles) is in progress.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scanning{}; 
        ///When 1 is returned - indicates MII Mgmt Read cycle has not completed and the Read Data is not yet valid.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> notvalid{}; 
        ///When 1 is returned - indicates that an MII Mgmt link fail has occurred.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> miilinkfail{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetSa0{    ///<Station Address 0 register.
        using Addr = Register::Address<0x20084040,0x00000000,0x00000000,unsigned>;
        ///STATION ADDRESS, 2nd octet. This field holds the second octet of the station address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> saddr2{}; 
        ///STATION ADDRESS, 1st octet. This field holds the first octet of the station address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> saddr1{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetSa1{    ///<Station Address 1 register.
        using Addr = Register::Address<0x20084044,0x00000000,0x00000000,unsigned>;
        ///STATION ADDRESS, 4th octet. This field holds the fourth octet of the station address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> saddr4{}; 
        ///STATION ADDRESS, 3rd octet. This field holds the third octet of the station address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> saddr3{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetSa2{    ///<Station Address 2 register.
        using Addr = Register::Address<0x20084048,0x00000000,0x00000000,unsigned>;
        ///STATION ADDRESS, 6th octet. This field holds the sixth octet of the station address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> saddr6{}; 
        ///STATION ADDRESS, 5th octet. This field holds the fifth octet of the station address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> saddr5{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetCommand{    ///<Command register.
        using Addr = Register::Address<0x20084100,0x00000000,0x00000000,unsigned>;
        ///Enable receive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxenable{}; 
        ///Enable transmit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txenable{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When a  1  is written, all datapaths and the host registers are reset. The MAC needs to be reset separately.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> regreset{}; 
        ///When a  1  is written, the transmit datapath is reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txreset{}; 
        ///When a  1  is written, the receive datapath is reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxreset{}; 
        ///When set to  1 , passes runt frames s1maller than 64 bytes to memory unless they have a CRC error. If 0 runt frames are filtered out.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> passruntframe{}; 
        ///When set to  1 , disables receive filtering i.e. all frames received are written to memory.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> passrxfilter{}; 
        ///Enable IEEE 802.3 / clause 31 flow control sending pause frames in full duplex and continuous preamble in half duplex.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txflowcontrol{}; 
        ///When set to  1 , RMII mode is selected; if 0, MII mode is selected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rmii{}; 
        ///When set to  1 , indicates full duplex operation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fullduplex{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetStatus{    ///<Status register.
        using Addr = Register::Address<0x20084104,0x00000000,0x00000000,unsigned>;
        ///If 1, the receive channel is active. If 0, the receive channel is inactive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxstatus{}; 
        ///If 1, the transmit channel is active. If 0, the transmit channel is inactive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txstatus{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetRxdescriptor{    ///<Receive descriptor base address register.
        using Addr = Register::Address<0x20084108,0x00000000,0x00000000,unsigned>;
        ///Fixed to 00
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///MSBs of receive descriptor base address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> rxdescriptor{}; 
    }
    namespace EthernetRxstatus{    ///<Receive status base address register.
        using Addr = Register::Address<0x2008410c,0x00000000,0x00000000,unsigned>;
        ///Fixed to 000
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///MSBs of receive status base address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> rxstatus{}; 
    }
    namespace EthernetRxdescriptornumber{    ///<Receive number of descriptors register.
        using Addr = Register::Address<0x20084110,0x00000000,0x00000000,unsigned>;
        ///RxDescriptorNumber. Number of descriptors in the descriptor array for which RxDescriptor is the base address. The number of descriptors is minus one encoded.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxdescriptorn{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetRxproduceindex{    ///<Receive produce index register.
        using Addr = Register::Address<0x20084114,0x00000000,0x00000000,unsigned>;
        ///Index of the descriptor that is going to be filled next by the receive datapath.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxproduceix{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetRxconsumeindex{    ///<Receive consume index register.
        using Addr = Register::Address<0x20084118,0x00000000,0x00000000,unsigned>;
        ///Index of the descriptor that is going to be processed next by the receive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxconsumeix{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetTxdescriptor{    ///<Transmit descriptor base address register.
        using Addr = Register::Address<0x2008411c,0x00000000,0x00000000,unsigned>;
        ///Fixed to 00
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///TxDescriptor. MSBs of transmit descriptor base address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> txd{}; 
    }
    namespace EthernetTxstatus{    ///<Transmit status base address register.
        using Addr = Register::Address<0x20084120,0x00000000,0x00000000,unsigned>;
        ///Fixed to 00
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///TxStatus. MSBs of transmit status base address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> txstat{}; 
    }
    namespace EthernetTxdescriptornumber{    ///<Transmit number of descriptors register.
        using Addr = Register::Address<0x20084124,0x00000000,0x00000000,unsigned>;
        ///TxDescriptorNumber. Number of descriptors in the descriptor array for which TxDescriptor is the base address. The register is minus one encoded.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txdn{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetTxproduceindex{    ///<Transmit produce index register.
        using Addr = Register::Address<0x20084128,0x00000000,0x00000000,unsigned>;
        ///TxProduceIndex. Index of the descriptor that is going to be filled next by the transmit software driver.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpi{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetTxconsumeindex{    ///<Transmit consume index register.
        using Addr = Register::Address<0x2008412c,0x00000000,0x00000000,unsigned>;
        ///TxConsumeIndex. Index of the descriptor that is going to be transmitted next by the transmit datapath.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txci{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetTsv0{    ///<Transmit status vector 0 register.
        using Addr = Register::Address<0x20084158,0x00000000,0x00000000,unsigned>;
        ///CRC error. The attached CRC in the packet did not match the internally generated CRC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crcerr{}; 
        ///Length check error. Indicates the frame length field does not match the actual number of data items and is not a type field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lce{}; 
        ///Length out of range. Indicates that frame type/length field was larger than 1500 bytes. The EMAC doesn't distinguish the frame type and frame length, so, e.g. when the IP(0x8000) or ARP(0x0806) packets are received, it compares the frame type with the max length and gives the "Length out of range" error. In fact, this bit is not an error indication, but simply a statement by the chip regarding the status of the received frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lor{}; 
        ///Transmission of packet was completed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> done{}; 
        ///Packet's destination was a multicast address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> multicast{}; 
        ///Packet's destination was a broadcast address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> broadcast{}; 
        ///Packet was deferred for at least one attempt, but less than an excessive defer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> packetdefer{}; 
        ///Excessive Defer. Packet was deferred in excess of 6071 nibble times in 100 Mbps or 24287 bit times in 10 Mbps mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> exdf{}; 
        ///Excessive Collision. Packet was aborted due to exceeding of maximum allowed number of collisions.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> excol{}; 
        ///Late Collision. Collision occurred beyond collision window, 512 bit times.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lcol{}; 
        ///Byte count in frame was greater than can be represented in the transmit byte count field in TSV1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> giant{}; 
        ///Host side caused buffer underrun.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> underrun{}; 
        ///The total number of bytes transferred including collided attempts.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,12),Register::ReadWriteAccess,unsigned> totalbytes{}; 
        ///The frame was a control frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> controlframe{}; 
        ///The frame was a control frame with a valid PAUSE opcode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pause{}; 
        ///Carrier-sense method backpressure was previously applied.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> backpressure{}; 
        ///Frame's length/type field contained 0x8100 which is the VLAN protocol identifier.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> vlan{}; 
    }
    namespace EthernetTsv1{    ///<Transmit status vector 1 register.
        using Addr = Register::Address<0x2008415c,0x00000000,0x00000000,unsigned>;
        ///Transmit byte count. The total number of bytes in the frame, not counting the collided bytes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tbc{}; 
        ///Transmit collision count. Number of collisions the current packet incurred during transmission attempts. The maximum number of collisions (16) cannot be represented.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tcc{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetRsv{    ///<Receive status vector register.
        using Addr = Register::Address<0x20084160,0x00000000,0x00000000,unsigned>;
        ///Received byte count. Indicates length of received frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rbc{}; 
        ///Packet previously ignored. Indicates that a packet was dropped.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ppi{}; 
        ///RXDV event previously seen. Indicates that the last receive event seen was not long enough to be a valid packet.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxdvseen{}; 
        ///Carrier event previously seen. Indicates that at some time since the last receive statistics, a carrier event was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ceseen{}; 
        ///Receive code violation. Indicates that received PHY data does not represent a valid receive code.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rcv{}; 
        ///CRC error. The attached CRC in the packet did not match the internally generated CRC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> crcerr{}; 
        ///Length check error. Indicates the frame length field does not match the actual number of data items and is not a type field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lcerr{}; 
        ///Length out of range. Indicates that frame type/length field was larger than 1518 bytes. The EMAC doesn't distinguish the frame type and frame length, so, e.g. when the IP(0x8000) or ARP(0x0806) packets are received, it compares the frame type with the max length and gives the "Length out of range" error. In fact, this bit is not an error indication, but simply a statement by the chip regarding the status of the received frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lor{}; 
        ///Receive OK. The packet had valid CRC and no symbol errors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rok{}; 
        ///The packet destination was a multicast address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> multicast{}; 
        ///The packet destination was a broadcast address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> broadcast{}; 
        ///Indicates that after the end of packet another 1-7 bits were received. A single nibble, called dribble nibble, is formed but not sent out.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dribblenibble{}; 
        ///The frame was a control frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> controlframe{}; 
        ///The frame was a control frame with a valid PAUSE opcode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pause{}; 
        ///Unsupported Opcode. The current frame was recognized as a Control Frame but contains an unknown opcode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> uo{}; 
        ///Frame's length/type field contained 0x8100 which is the VLAN protocol identifier.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> vlan{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetFlowcontrolcounter{    ///<Flow control counter register.
        using Addr = Register::Address<0x20084170,0x00000000,0x00000000,unsigned>;
        ///MirrorCounter. In full duplex mode the MirrorCounter specifies the number of cycles before re-issuing the Pause control frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mc{}; 
        ///PauseTimer. In full-duplex mode the PauseTimer specifies the value that is inserted into the pause timer field of a pause flow control frame. In half duplex mode the PauseTimer specifies the number of backpressure cycles.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> pt{}; 
    }
    namespace EthernetFlowcontrolstatus{    ///<Flow control status register.
        using Addr = Register::Address<0x20084174,0x00000000,0x00000000,unsigned>;
        ///MirrorCounterCurrent. In full duplex mode this register represents the current value of the datapath's mirror counter which counts up to the value specified by the MirrorCounter field in the FlowControlCounter register. In half duplex mode the register counts until it reaches the value of the PauseTimer bits in the FlowControlCounter register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mcc{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetRxfilterctrl{    ///<Receive filter control register.
        using Addr = Register::Address<0x20084200,0x00000000,0x00000000,unsigned>;
        ///AcceptUnicastEn. When set to 1, all unicast frames are accepted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aue{}; 
        ///AcceptBroadcastEn. When set to 1, all broadcast frames are accepted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> abe{}; 
        ///AcceptMulticastEn. When set to 1, all multicast frames are accepted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ame{}; 
        ///AcceptUnicastHashEn. When set to 1, unicast frames that pass the imperfect hash filter are accepted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> auhe{}; 
        ///AcceptMulticastHashEn. When set to 1, multicast frames that pass the imperfect hash filter are accepted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> amhe{}; 
        ///AcceptPerfectEn. When set to 1, the frames with a destination address identical to the station address are accepted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ape{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///MagicPacketEnWoL. When set to 1, the result of the magic packet filter will generate a WoL interrupt when there is a match.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mpew{}; 
        ///RxFilterEnWoL. When set to 1, the result of the perfect address matching filter and the imperfect hash filter will generate a WoL interrupt when there is a match.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rfew{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetRxfilterwolstatus{    ///<Receive filter WoL status register.
        using Addr = Register::Address<0x20084204,0x00000000,0x00000000,unsigned>;
        ///AcceptUnicastWoL. When the value is 1, a unicast frames caused WoL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> auw{}; 
        ///AcceptBroadcastWoL. When the value is 1, a broadcast frame caused WoL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> abw{}; 
        ///AcceptMulticastWoL. When the value is 1, a multicast frame caused WoL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> amw{}; 
        ///AcceptUnicastHashWoL. When the value is 1, a unicast frame that passes the imperfect hash filter caused WoL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> auhw{}; 
        ///AcceptMulticastHashWoL. When the value is 1, a multicast frame that passes the imperfect hash filter caused WoL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> amhw{}; 
        ///AcceptPerfectWoL. When the value is 1, the perfect address matching filter caused WoL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> apw{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///RxFilterWoL. When the value is 1, the receive filter caused WoL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rfw{}; 
        ///MagicPacketWoL. When the value is 1, the magic packet filter caused WoL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mpw{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetRxfilterwolclear{    ///<Receive filter WoL clear register.
        using Addr = Register::Address<0x20084208,0x00000000,0x00000000,unsigned>;
        ///AcceptUnicastWoLClr. When a 1 is written, the corresponding status bit in the RxFilterWoLStatus register is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> auwclr{}; 
        ///AcceptBroadcastWoLClr. When a 1 is written, the corresponding status bit in the RxFilterWoLStatus register is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> abwclr{}; 
        ///AcceptMulticastWoLClr. When a 1 is written, the corresponding status bit in the RxFilterWoLStatus register is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> amwclr{}; 
        ///AcceptUnicastHashWoLClr. When a 1 is written, the corresponding status bit in the RxFilterWoLStatus register is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> auhwclr{}; 
        ///AcceptMulticastHashWoLClr. When a 1 is written, the corresponding status bit in the RxFilterWoLStatus register is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> amhwclr{}; 
        ///AcceptPerfectWoLClr. When a 1 is written, the corresponding status bit in the RxFilterWoLStatus register is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> apwclr{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///RxFilterWoLClr. When a 1 is written, the corresponding status bit in the RxFilterWoLStatus register is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rfwclr{}; 
        ///MagicPacketWoLClr. When a 1 is written, the corresponding status bit in the RxFilterWoLStatus register is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mpwclr{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetHashfilterl{    ///<Hash filter table LSBs register.
        using Addr = Register::Address<0x20084210,0x00000000,0x00000000,unsigned>;
        ///HashFilterL. Bits 31:0 of the imperfect filter hash table for receive filtering.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hfl{}; 
    }
    namespace EthernetHashfilterh{    ///<Hash filter table MSBs register.
        using Addr = Register::Address<0x20084214,0x00000000,0x00000000,unsigned>;
        ///Bits 63:32 of the imperfect filter hash table for receive filtering.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hfh{}; 
    }
    namespace EthernetIntstatus{    ///<Interrupt status register.
        using Addr = Register::Address<0x20084fe0,0x00000000,0x00000000,unsigned>;
        ///Interrupt set on a fatal overrun error in the receive queue. The fatal interrupt should be resolved by a Rx soft-reset. The bit is not set when there is a nonfatal overrun error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxoverrunint{}; 
        ///Interrupt trigger on receive errors: AlignmentError, RangeError, LengthError, SymbolError, CRCError or NoDescriptor or Overrun.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxerrorint{}; 
        ///Interrupt triggered when all receive descriptors have been processed i.e. on the transition to the situation where ProduceIndex == ConsumeIndex.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxfinishedint{}; 
        ///Interrupt triggered when a receive descriptor has been processed while the Interrupt bit in the Control field of the descriptor was set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxdoneint{}; 
        ///Interrupt set on a fatal underrun error in the transmit queue. The fatal interrupt should be resolved by a Tx soft-reset. The bit is not set when there is a nonfatal underrun error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderrunint{}; 
        ///Interrupt trigger on transmit errors: LateCollision, ExcessiveCollision and ExcessiveDefer, NoDescriptor or Underrun.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txerrorint{}; 
        ///Interrupt triggered when all transmit descriptors have been processed i.e. on the transition to the situation where ProduceIndex == ConsumeIndex.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txfinishedint{}; 
        ///Interrupt triggered when a descriptor has been transmitted while the Interrupt bit in the Control field of the descriptor was set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txdoneint{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Interrupt triggered by software writing a 1 to the SoftIntSet bit in the IntSet register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> softint{}; 
        ///Interrupt triggered by a Wake-up event detected by the receive filter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wakeupint{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetIntenable{    ///<Interrupt enable register.
        using Addr = Register::Address<0x20084fe4,0x00000000,0x00000000,unsigned>;
        ///Enable for interrupt trigger on receive buffer overrun or descriptor underrun situations.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxoverruninten{}; 
        ///Enable for interrupt trigger on receive errors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxerrorinten{}; 
        ///Enable for interrupt triggered when all receive descriptors have been processed i.e. on the transition to the situation where ProduceIndex == ConsumeIndex.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxfinishedinten{}; 
        ///Enable for interrupt triggered when a receive descriptor has been processed while the Interrupt bit in the Control field of the descriptor was set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxdoneinten{}; 
        ///Enable for interrupt trigger on transmit buffer or descriptor underrun situations.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderruninten{}; 
        ///Enable for interrupt trigger on transmit errors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txerrorinten{}; 
        ///Enable for interrupt triggered when all transmit descriptors have been processed i.e. on the transition to the situation where ProduceIndex == ConsumeIndex.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txfinishedinten{}; 
        ///Enable for interrupt triggered when a descriptor has been transmitted while the Interrupt bit in the Control field of the descriptor was set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txdoneinten{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Enable for interrupt triggered by the SoftInt bit in the IntStatus register, caused by software writing a 1 to the SoftIntSet bit in the IntSet register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> softinten{}; 
        ///Enable for interrupt triggered by a Wake-up event detected by the receive filter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wakeupinten{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetIntclear{    ///<Interrupt clear register.
        using Addr = Register::Address<0x20084fe8,0x00000000,0x00000000,unsigned>;
        ///Writing a 1 clears the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxoverrunintclr{}; 
        ///Writing a 1 clears the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxerrorintclr{}; 
        ///Writing a 1 clears the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxfinishedintclr{}; 
        ///Writing a 1 clears the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxdoneintclr{}; 
        ///Writing a 1 clears the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderrunintclr{}; 
        ///Writing a 1 clears the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txerrorintclr{}; 
        ///Writing a 1 clears the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txfinishedintclr{}; 
        ///Writing a 1 clears the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txdoneintclr{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Writing a 1 clears the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> softintclr{}; 
        ///Writing a 1 clears the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wakeupintclr{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetIntset{    ///<Interrupt set register.
        using Addr = Register::Address<0x20084fec,0x00000000,0x00000000,unsigned>;
        ///Writing a 1 to one sets the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxoverrunintset{}; 
        ///Writing a 1 to one sets the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxerrorintset{}; 
        ///Writing a 1 to one sets the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxfinishedintset{}; 
        ///Writing a 1 to one sets the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxdoneintset{}; 
        ///Writing a 1 to one sets the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderrunintset{}; 
        ///Writing a 1 to one sets the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txerrorintset{}; 
        ///Writing a 1 to one sets the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txfinishedintset{}; 
        ///Writing a 1 to one sets the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txdoneintset{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Writing a 1 to one sets the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> softintset{}; 
        ///Writing a 1 to one sets the corresponding status bit in interrupt status register IntStatus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wakeupintset{}; 
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EthernetPowerdown{    ///<Power-down register.
        using Addr = Register::Address<0x20084ff4,0x00000000,0x00000000,unsigned>;
        ///Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///PowerDownMACAHB. If true, all AHB accesses will return a read/write error, except accesses to the Power-Down register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pd{}; 
    }
}
