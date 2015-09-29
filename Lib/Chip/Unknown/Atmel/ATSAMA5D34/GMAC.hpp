#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Gigabit Ethernet MAC
    namespace GmacNcr{    ///<Network Control Register
        using Addr = Register::Address<0xf0028000,0xfff82000,0,unsigned>;
        ///Loop Back
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lb{}; 
        ///Loop Back Local
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lbl{}; 
        ///Receive Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxen{}; 
        ///Transmit Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txen{}; 
        ///Management Port Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mpe{}; 
        ///Clear Statistics Registers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrstat{}; 
        ///Increment Statistics Registers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> incstat{}; 
        ///Write Enable for Statistics Registers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> westat{}; 
        ///Back pressure
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bp{}; 
        ///Start Transmission
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tstart{}; 
        ///Transmit Halt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> thalt{}; 
        ///Transmit Pause Frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txpf{}; 
        ///Transmit Zero Quantum Pause Frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txzqpf{}; 
        ///Read Snapshot
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rds{}; 
        ///Store Receive Time Stamp to Memory
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> srtsm{}; 
        ///Enable PFC Priority-based Pause Reception
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> enpbpr{}; 
        ///Transmit PFC Priority-based Pause Frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txpbpf{}; 
        ///Flush Next Packet
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fnp{}; 
    }
    namespace GmacNcfgr{    ///<Network Configuration Register
        using Addr = Register::Address<0xf0028004,0x88000200,0,unsigned>;
        ///Speed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> spd{}; 
        ///Full Duplex
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fd{}; 
        ///Discard Non-VLAN FRAMES
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dnvlan{}; 
        ///Jumbo Frame Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jframe{}; 
        ///Copy All Frames
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> caf{}; 
        ///No Broadcast
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nbc{}; 
        ///Multicast Hash Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mtihen{}; 
        ///Unicast Hash Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> unihen{}; 
        ///1536 Maximum Frame Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maxfs{}; 
        ///Gigabit Mode Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gbe{}; 
        ///Physical Interface Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pis{}; 
        ///Retry Test
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rty{}; 
        ///Pause Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pen{}; 
        ///Receive Buffer Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> rxbufo{}; 
        ///Length Field Error Frame Discard
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lferd{}; 
        ///Remove FCS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rfcs{}; 
        ///MDC CLock Division
        enum class clkVal {
            mck8=0x00000000,     ///<MCK divided by 8 (MCK up to 20 MHz)
            mck16=0x00000001,     ///<MCK divided by 16 (MCK up to 40 MHz)
            mck32=0x00000002,     ///<MCK divided by 32 (MCK up to 80 MHz)
            mck48=0x00000003,     ///<MCK divided by 48 (MCK up to 120MHz)
            mck64=0x00000004,     ///<MCK divided by 64 (MCK up to 160 MHz)
            mck96=0x00000005,     ///<MCK divided by 96 (MCK up to 240 MHz)
            mck128=0x00000006,     ///<MCK divided by 128 (MCK up to 320 MHz)
            mck224=0x00000007,     ///<MCK divided by 224 (MCK up to 540 MHz)
        };
        namespace clkValC{
            constexpr MPL::Value<clkVal,clkVal::mck8> mck8{};
            constexpr MPL::Value<clkVal,clkVal::mck16> mck16{};
            constexpr MPL::Value<clkVal,clkVal::mck32> mck32{};
            constexpr MPL::Value<clkVal,clkVal::mck48> mck48{};
            constexpr MPL::Value<clkVal,clkVal::mck64> mck64{};
            constexpr MPL::Value<clkVal,clkVal::mck96> mck96{};
            constexpr MPL::Value<clkVal,clkVal::mck128> mck128{};
            constexpr MPL::Value<clkVal,clkVal::mck224> mck224{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,clkVal> clk{}; 
        ///Data Bus Width
        enum class dbwVal {
            dbw32=0x00000000,     ///<32-bit data bus width
            dbw64=0x00000001,     ///<64-bit data bus width
        };
        namespace dbwValC{
            constexpr MPL::Value<dbwVal,dbwVal::dbw32> dbw32{};
            constexpr MPL::Value<dbwVal,dbwVal::dbw64> dbw64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,dbwVal> dbw{}; 
        ///Disable Copy of Pause Frames
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dcpf{}; 
        ///Receive Checksum Offload Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rxcoen{}; 
        ///Enable Frames Received in Half Duplex
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> efrhd{}; 
        ///Ignore RX FCS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> irxfcs{}; 
        ///IP Stretch Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ipgsen{}; 
        ///Receive Bad Preamble
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> rxbp{}; 
        ///Ignore IPG rx_er
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> irxer{}; 
    }
    namespace GmacNsr{    ///<Network Status Register
        using Addr = Register::Address<0xf0028008,0xfffffff9,0,unsigned>;
        ///MDIO Input Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mdio{}; 
        ///PHY Management Logic Idle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> idle{}; 
    }
    namespace GmacUr{    ///<User Register
        using Addr = Register::Address<0xf002800c,0xffffff3e,0,unsigned>;
        ///RGMII Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rgmii{}; 
        ///Half Duplex Flow Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hdfc{}; 
        ///BPDG Bypass Deglitchers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bpdg{}; 
    }
    namespace GmacDcfgr{    ///<DMA Configuration Register
        using Addr = Register::Address<0xf0028010,0xfe00f020,0,unsigned>;
        ///Fixed Burst Length for DMA Data Operations:
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> fbldo{}; 
        ///Endian Swap Mode Enable for Management Descriptor Accesses
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> esma{}; 
        ///Endian Swap Mode Enable for Packet Data Accesses
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> espa{}; 
        ///Receiver Packet Buffer Memory Size Select
        enum class rxbmsVal {
            eighth=0x00000000,     ///<1 Kbyte Memory Size
            quarter=0x00000001,     ///<2 Kbytes Memory Size
            half=0x00000002,     ///<4 Kbytes Memory Size
            full=0x00000003,     ///<8 Kbytes Memory Size
        };
        namespace rxbmsValC{
            constexpr MPL::Value<rxbmsVal,rxbmsVal::eighth> eighth{};
            constexpr MPL::Value<rxbmsVal,rxbmsVal::quarter> quarter{};
            constexpr MPL::Value<rxbmsVal,rxbmsVal::half> half{};
            constexpr MPL::Value<rxbmsVal,rxbmsVal::full> full{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,rxbmsVal> rxbms{}; 
        ///Transmitter Packet Buffer Memory Size Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txpbms{}; 
        ///Transmitter Checksum Generation Offload Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txcoen{}; 
        ///DMA Receive Buffer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> drbs{}; 
        ///DMA Discard Receive Packets
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ddrp{}; 
    }
    namespace GmacTsr{    ///<Transmit Status Register
        using Addr = Register::Address<0xf0028014,0xfffffe00,0,unsigned>;
        ///Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ubr{}; 
        ///Collision Occurred
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> col{}; 
        ///Retry Limit Exceeded
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rle{}; 
        ///Transmit Go
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txgo{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Transmit Under Run
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> und{}; 
        ///Late Collision Occurred
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lco{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacRbqb{    ///<Receive Buffer Queue Base Address
        using Addr = Register::Address<0xf0028018,0x00000003,0,unsigned>;
        ///Receive buffer queue base address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace GmacTbqb{    ///<Transmit Buffer Queue Base Address
        using Addr = Register::Address<0xf002801c,0x00000003,0,unsigned>;
        ///Transmit Buffer Queue Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace GmacRsr{    ///<Receive Status Register
        using Addr = Register::Address<0xf0028020,0xfffffff0,0,unsigned>;
        ///Buffer Not Available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bna{}; 
        ///Frame Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rec{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hno{}; 
    }
    namespace GmacIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xf0028024,0xe8030300,0,unsigned>;
        ///Management Frame Sent
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfs{}; 
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///TX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txubr{}; 
        ///Transmit Under Run
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tur{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
        ///Pause Frame with Non-zero Pause Quantum Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pfnz{}; 
        ///Pause Time Zero
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ptz{}; 
        ///Pause Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pftr{}; 
        ///External Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> exint{}; 
        ///PTP Delay Request Frame Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> drqfr{}; 
        ///PTP Sync Frame Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> sfr{}; 
        ///PTP Delay Request Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> drqft{}; 
        ///PTP Sync Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sft{}; 
        ///PDelay Request Frame Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdrqfr{}; 
        ///PDelay Response Frame Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pdrsfr{}; 
        ///PDelay Request Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pdrqft{}; 
        ///PDelay Response Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pdrsft{}; 
        ///TSU Seconds Register Increment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> sri{}; 
        ///Wake On LAN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> wol{}; 
    }
    namespace GmacIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf0028028,0xe8030300,0,unsigned>;
        ///Management Frame Sent
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfs{}; 
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///TX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txubr{}; 
        ///Transmit Under Run
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tur{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
        ///Pause Frame with Non-zero Pause Quantum Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pfnz{}; 
        ///Pause Time Zero
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ptz{}; 
        ///Pause Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pftr{}; 
        ///External Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> exint{}; 
        ///PTP Delay Request Frame Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> drqfr{}; 
        ///PTP Sync Frame Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> sfr{}; 
        ///PTP Delay Request Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> drqft{}; 
        ///PTP Sync Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sft{}; 
        ///PDelay Request Frame Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdrqfr{}; 
        ///PDelay Response Frame Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pdrsfr{}; 
        ///PDelay Request Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pdrqft{}; 
        ///PDelay Response Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pdrsft{}; 
        ///TSU Seconds Register Increment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> sri{}; 
        ///Wake On LAN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> wol{}; 
    }
    namespace GmacIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf002802c,0xe8030300,0,unsigned>;
        ///Management Frame Sent
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfs{}; 
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///TX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txubr{}; 
        ///Transmit Under Run
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tur{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
        ///Pause Frame with Non-zero Pause Quantum Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pfnz{}; 
        ///Pause Time Zero
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ptz{}; 
        ///Pause Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pftr{}; 
        ///External Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> exint{}; 
        ///PTP Delay Request Frame Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> drqfr{}; 
        ///PTP Sync Frame Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> sfr{}; 
        ///PTP Delay Request Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> drqft{}; 
        ///PTP Sync Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sft{}; 
        ///PDelay Request Frame Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdrqfr{}; 
        ///PDelay Response Frame Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pdrsfr{}; 
        ///PDelay Request Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pdrqft{}; 
        ///PDelay Response Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pdrsft{}; 
        ///TSU Seconds Register Increment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> sri{}; 
        ///Wake On LAN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> wol{}; 
    }
    namespace GmacImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf0028030,0xfc030300,0,unsigned>;
        ///Management Frame Sent
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfs{}; 
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///TX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txubr{}; 
        ///Transmit Under Run
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tur{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
        ///Pause Frame with Non-zero Pause Quantum Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pfnz{}; 
        ///Pause Time Zero
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ptz{}; 
        ///Pause Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pftr{}; 
        ///External Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> exint{}; 
        ///PTP Delay Request Frame Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> drqfr{}; 
        ///PTP Sync Frame Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> sfr{}; 
        ///PTP Delay Request Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> drqft{}; 
        ///PTP Sync Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sft{}; 
        ///PDelay Request Frame Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdrqfr{}; 
        ///PDelay Response Frame Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pdrsfr{}; 
        ///PDelay Request Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pdrqft{}; 
        ///PDelay Response Frame Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pdrsft{}; 
    }
    namespace GmacMan{    ///<PHY Maintenance Register
        using Addr = Register::Address<0xf0028034,0x00000000,0,unsigned>;
        ///PHY Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        ///Write Ten
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> wtn{}; 
        ///Register Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> rega{}; 
        ///PHY Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,23),Register::ReadWriteAccess,unsigned> phya{}; 
        ///Operation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> op{}; 
        ///Clause 22 Operation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cltto{}; 
        ///Write ZERO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> wzo{}; 
    }
    namespace GmacRpq{    ///<Received Pause Quantum Register
        using Addr = Register::Address<0xf0028038,0xffff0000,0,unsigned>;
        ///Received Pause Quantum
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rpq{}; 
    }
    namespace GmacTpq{    ///<Transmit Pause Quantum Register
        using Addr = Register::Address<0xf002803c,0xffff0000,0,unsigned>;
        ///Transmit Pause Quantum
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tpq{}; 
    }
    namespace GmacTpsf{    ///<TX Partial Store and Forward Register
        using Addr = Register::Address<0xf0028040,0x7ffff000,0,unsigned>;
        ///tx_pbuf_addr-1:0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> tpb1adr{}; 
        ///Enable TX Partial Store and Forward Operation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> entxp{}; 
    }
    namespace GmacRpsf{    ///<RX Partial Store and Forward Register
        using Addr = Register::Address<0xf0028044,0x7ffff000,0,unsigned>;
        ///rx_pbuf_addr-1:0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> rpb1adr{}; 
        ///Enable RX Partial Store and Forward Operation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> enrxp{}; 
    }
    namespace GmacHrb{    ///<Hash Register Bottom [31:0]
        using Addr = Register::Address<0xf0028080,0x00000000,0,unsigned>;
        ///Hash Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace GmacHrt{    ///<Hash Register Top [63:32]
        using Addr = Register::Address<0xf0028084,0x00000000,0,unsigned>;
        ///Hash Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace GmacSab1{    ///<Specific Address 1 Bottom [31:0] Register
        using Addr = Register::Address<0xf0028088,0x00000000,0,unsigned>;
        ///Specific Address 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace GmacSat1{    ///<Specific Address 1 Top [47:32] Register
        using Addr = Register::Address<0xf002808c,0xffff0000,0,unsigned>;
        ///Specific Address 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace GmacSab2{    ///<Specific Address 2 Bottom [31:0] Register
        using Addr = Register::Address<0xf0028090,0x00000000,0,unsigned>;
        ///Specific Address 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace GmacSat2{    ///<Specific Address 2 Top [47:32] Register
        using Addr = Register::Address<0xf0028094,0xffff0000,0,unsigned>;
        ///Specific Address 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace GmacSab3{    ///<Specific Address 3 Bottom [31:0] Register
        using Addr = Register::Address<0xf0028098,0x00000000,0,unsigned>;
        ///Specific Address 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace GmacSat3{    ///<Specific Address 3 Top [47:32] Register
        using Addr = Register::Address<0xf002809c,0xffff0000,0,unsigned>;
        ///Specific Address 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace GmacSab4{    ///<Specific Address 4 Bottom [31:0] Register
        using Addr = Register::Address<0xf00280a0,0x00000000,0,unsigned>;
        ///Specific Address 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace GmacSat4{    ///<Specific Address 4 Top [47:32] Register
        using Addr = Register::Address<0xf00280a4,0xffff0000,0,unsigned>;
        ///Specific Address 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace GmacTidm0{    ///<Type ID Match 1 Register
        using Addr = Register::Address<0xf00280a8,0xffff0000,0,unsigned>;
        ///Type ID Match 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tid{}; 
    }
    namespace GmacTidm1{    ///<Type ID Match 1 Register
        using Addr = Register::Address<0xf00280ac,0xffff0000,0,unsigned>;
        ///Type ID Match 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tid{}; 
    }
    namespace GmacTidm2{    ///<Type ID Match 1 Register
        using Addr = Register::Address<0xf00280b0,0xffff0000,0,unsigned>;
        ///Type ID Match 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tid{}; 
    }
    namespace GmacTidm3{    ///<Type ID Match 1 Register
        using Addr = Register::Address<0xf00280b4,0xffff0000,0,unsigned>;
        ///Type ID Match 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tid{}; 
    }
    namespace GmacWol{    ///<Wake on LAN Register
        using Addr = Register::Address<0xf00280b8,0xfff00000,0,unsigned>;
        ///ARP Request IP Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ip{}; 
        ///Magic Packet Event Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mag{}; 
        ///ARP Request IP Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> arp{}; 
        ///Specific Address Register 1 Event Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> sa1{}; 
        ///Multicast Hash Event Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mti{}; 
    }
    namespace GmacIpgs{    ///<IPG Stretch Register
        using Addr = Register::Address<0xf00280bc,0xffff0000,0,unsigned>;
        ///Frame Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> fl{}; 
    }
    namespace GmacSvlan{    ///<Stacked VLAN Register
        using Addr = Register::Address<0xf00280c0,0x7fff0000,0,unsigned>;
        ///User Defined VLAN_TYPE Field
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> vlanType{}; 
        ///Enable Stacked VLAN Processing Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> esvlan{}; 
    }
    namespace GmacTpfcp{    ///<Transmit PFC Pause Register
        using Addr = Register::Address<0xf00280c4,0xffff0000,0,unsigned>;
        ///Priority Enable Vector
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pev{}; 
        ///Pause Quantum
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pq{}; 
    }
    namespace GmacSamb1{    ///<Specific Address 1 Mask Bottom [31:0] Register
        using Addr = Register::Address<0xf00280c8,0x00000000,0,unsigned>;
        ///Specific Address 1 Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace GmacSamt1{    ///<Specific Address 1 Mask Top [47:32] Register
        using Addr = Register::Address<0xf00280cc,0xffff0000,0,unsigned>;
        ///Specific Address 1 Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace GmacOtlo{    ///<Octets Transmitted [31:0] Register
        using Addr = Register::Address<0xf0028100,0x00000000,0,unsigned>;
        ///Transmitted Octets
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txo{}; 
    }
    namespace GmacOthi{    ///<Octets Transmitted [47:32] Register
        using Addr = Register::Address<0xf0028104,0xffff0000,0,unsigned>;
        ///Transmitted Octets
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txo{}; 
    }
    namespace GmacFt{    ///<Frames Transmitted Register
        using Addr = Register::Address<0xf0028108,0x00000000,0,unsigned>;
        ///Frames Transmitted without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ftx{}; 
    }
    namespace GmacBcft{    ///<Broadcast Frames Transmitted Register
        using Addr = Register::Address<0xf002810c,0x00000000,0,unsigned>;
        ///Broadcast Frames Transmitted without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bftx{}; 
    }
    namespace GmacMft{    ///<Multicast Frames Transmitted Register
        using Addr = Register::Address<0xf0028110,0x00000000,0,unsigned>;
        ///Multicast Frames Transmitted without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mftx{}; 
    }
    namespace GmacPft{    ///<Pause Frames Transmitted Register
        using Addr = Register::Address<0xf0028114,0xffff0000,0,unsigned>;
        ///Pause Frames Transmitted Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pftx{}; 
    }
    namespace GmacBft64{    ///<64 Byte Frames Transmitted Register
        using Addr = Register::Address<0xf0028118,0x00000000,0,unsigned>;
        ///64 Byte Frames Transmitted without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nftx{}; 
    }
    namespace GmacTbft127{    ///<65 to 127 Byte Frames Transmitted Register
        using Addr = Register::Address<0xf002811c,0x00000000,0,unsigned>;
        ///65 to 127 Byte Frames Transmitted without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nftx{}; 
    }
    namespace GmacTbft255{    ///<128 to 255 Byte Frames Transmitted Register
        using Addr = Register::Address<0xf0028120,0x00000000,0,unsigned>;
        ///128 to 255 Byte Frames Transmitted without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nftx{}; 
    }
    namespace GmacTbft511{    ///<256 to 511 Byte Frames Transmitted Register
        using Addr = Register::Address<0xf0028124,0x00000000,0,unsigned>;
        ///256 to 511 Byte Frames Transmitted without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nftx{}; 
    }
    namespace GmacTbft1023{    ///<512 to 1023 Byte Frames Transmitted Register
        using Addr = Register::Address<0xf0028128,0x00000000,0,unsigned>;
        ///512 to 1023 Byte Frames Transmitted without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nftx{}; 
    }
    namespace GmacTbft1518{    ///<1024 to 1518 Byte Frames Transmitted Register
        using Addr = Register::Address<0xf002812c,0x00000000,0,unsigned>;
        ///1024 to 1518 Byte Frames Transmitted without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nftx{}; 
    }
    namespace GmacGtbft1518{    ///<Greater Than 1518 Byte Frames Transmitted Register
        using Addr = Register::Address<0xf0028130,0x00000000,0,unsigned>;
        ///Greater than 1518 Byte Frames Transmitted without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nftx{}; 
    }
    namespace GmacTur{    ///<Transmit Under Runs Register
        using Addr = Register::Address<0xf0028134,0xfffffc00,0,unsigned>;
        ///Transmit Under Runs
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> txunr{}; 
    }
    namespace GmacScf{    ///<Single Collision Frames Register
        using Addr = Register::Address<0xf0028138,0xfffc0000,0,unsigned>;
        ///Single Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> scol{}; 
    }
    namespace GmacMcf{    ///<Multiple Collision Frames Register
        using Addr = Register::Address<0xf002813c,0xfffc0000,0,unsigned>;
        ///Multiple Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> mcol{}; 
    }
    namespace GmacEc{    ///<Excessive Collisions Register
        using Addr = Register::Address<0xf0028140,0xfffffc00,0,unsigned>;
        ///Excessive Collisions
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> xcol{}; 
    }
    namespace GmacLc{    ///<Late Collisions Register
        using Addr = Register::Address<0xf0028144,0xfffffc00,0,unsigned>;
        ///Late Collisions
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> lcol{}; 
    }
    namespace GmacDtf{    ///<Deferred Transmission Frames Register
        using Addr = Register::Address<0xf0028148,0xfffc0000,0,unsigned>;
        ///Deferred Transmission
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> deft{}; 
    }
    namespace GmacCse{    ///<Carrier Sense Errors Register
        using Addr = Register::Address<0xf002814c,0xfffffc00,0,unsigned>;
        ///Carrier Sense Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> csr{}; 
    }
    namespace GmacOrlo{    ///<Octets Received [31:0] Received
        using Addr = Register::Address<0xf0028150,0x00000000,0,unsigned>;
        ///Received Octets
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxo{}; 
    }
    namespace GmacOrhi{    ///<Octets Received [47:32] Received
        using Addr = Register::Address<0xf0028154,0xffff0000,0,unsigned>;
        ///Received Octets
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxo{}; 
    }
    namespace GmacFr{    ///<Frames Received Register
        using Addr = Register::Address<0xf0028158,0x00000000,0,unsigned>;
        ///Frames Received without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> frx{}; 
    }
    namespace GmacBcfr{    ///<Broadcast Frames Received Register
        using Addr = Register::Address<0xf002815c,0x00000000,0,unsigned>;
        ///Broadcast Frames Received without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bfrx{}; 
    }
    namespace GmacMfr{    ///<Multicast Frames Received Register
        using Addr = Register::Address<0xf0028160,0x00000000,0,unsigned>;
        ///Multicast Frames Received without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mfrx{}; 
    }
    namespace GmacPfr{    ///<Pause Frames Received Register
        using Addr = Register::Address<0xf0028164,0xffff0000,0,unsigned>;
        ///Pause Frames Received Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pfrx{}; 
    }
    namespace GmacBfr64{    ///<64 Byte Frames Received Register
        using Addr = Register::Address<0xf0028168,0x00000000,0,unsigned>;
        ///64 Byte Frames Received without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nfrx{}; 
    }
    namespace GmacTbfr127{    ///<65 to 127 Byte Frames Received Register
        using Addr = Register::Address<0xf002816c,0x00000000,0,unsigned>;
        ///65 to 127 Byte Frames Received without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nfrx{}; 
    }
    namespace GmacTbfr255{    ///<128 to 255 Byte Frames Received Register
        using Addr = Register::Address<0xf0028170,0x00000000,0,unsigned>;
        ///128 to 255 Byte Frames Received without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nfrx{}; 
    }
    namespace GmacTbfr511{    ///<256 to 511Byte Frames Received Register
        using Addr = Register::Address<0xf0028174,0x00000000,0,unsigned>;
        ///256 to 511 Byte Frames Received without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nfrx{}; 
    }
    namespace GmacTbfr1023{    ///<512 to 1023 Byte Frames Received Register
        using Addr = Register::Address<0xf0028178,0x00000000,0,unsigned>;
        ///512 to 1023 Byte Frames Received without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nfrx{}; 
    }
    namespace GmacTbfr1518{    ///<1024 to 1518 Byte Frames Received Register
        using Addr = Register::Address<0xf002817c,0x00000000,0,unsigned>;
        ///1024 to 1518 Byte Frames Received without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nfrx{}; 
    }
    namespace GmacTmxbfr{    ///<1519 to Maximum Byte Frames Received Register
        using Addr = Register::Address<0xf0028180,0x00000000,0,unsigned>;
        ///1519 to Maximum Byte Frames Received without Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nfrx{}; 
    }
    namespace GmacUfr{    ///<Undersize Frames Received Register
        using Addr = Register::Address<0xf0028184,0xfffffc00,0,unsigned>;
        ///Undersize Frames Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> ufrx{}; 
    }
    namespace GmacOfr{    ///<Oversize Frames Received Register
        using Addr = Register::Address<0xf0028188,0xfffffc00,0,unsigned>;
        ///Oversized Frames Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> ofrx{}; 
    }
    namespace GmacJr{    ///<Jabbers Received Register
        using Addr = Register::Address<0xf002818c,0xfffffc00,0,unsigned>;
        ///Jabbers Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> jrx{}; 
    }
    namespace GmacFcse{    ///<Frame Check Sequence Errors Register
        using Addr = Register::Address<0xf0028190,0xfffffc00,0,unsigned>;
        ///Frame Check Sequence Errors
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> fckr{}; 
    }
    namespace GmacLffe{    ///<Length Field Frame Errors Register
        using Addr = Register::Address<0xf0028194,0xfffffc00,0,unsigned>;
        ///Length Field Frame Errors
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> lfer{}; 
    }
    namespace GmacRse{    ///<Receive Symbol Errors Register
        using Addr = Register::Address<0xf0028198,0xfffffc00,0,unsigned>;
        ///Receive Symbol Errors
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> rxse{}; 
    }
    namespace GmacAe{    ///<Alignment Errors Register
        using Addr = Register::Address<0xf002819c,0xfffffc00,0,unsigned>;
        ///Alignment Errors
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> aer{}; 
    }
    namespace GmacRre{    ///<Receive Resource Errors Register
        using Addr = Register::Address<0xf00281a0,0xfffc0000,0,unsigned>;
        ///Receive Resource Errors
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> rxrer{}; 
    }
    namespace GmacRoe{    ///<Receive Overrun Register
        using Addr = Register::Address<0xf00281a4,0xfffffc00,0,unsigned>;
        ///Receive Overruns
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> rxovr{}; 
    }
    namespace GmacIhce{    ///<IP Header Checksum Errors Register
        using Addr = Register::Address<0xf00281a8,0xffffff00,0,unsigned>;
        ///IP Header Checksum Errors
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> hcker{}; 
    }
    namespace GmacTce{    ///<TCP Checksum Errors Register
        using Addr = Register::Address<0xf00281ac,0xffffff00,0,unsigned>;
        ///TCP Checksum Errors
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tcker{}; 
    }
    namespace GmacUce{    ///<UDP Checksum Errors Register
        using Addr = Register::Address<0xf00281b0,0xffffff00,0,unsigned>;
        ///UDP Checksum Errors
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ucker{}; 
    }
    namespace GmacTsss{    ///<1588 Timer Sync Strobe Seconds Register
        using Addr = Register::Address<0xf00281c8,0x00000000,0,unsigned>;
        ///Value of Timer Seconds Register Capture
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vts{}; 
    }
    namespace GmacTssn{    ///<1588 Timer Sync Strobe Nanoseconds Register
        using Addr = Register::Address<0xf00281cc,0xc0000000,0,unsigned>;
        ///Value Timer Nanoseconds Register Capture
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> vtn{}; 
    }
    namespace GmacTs{    ///<1588 Timer Seconds Register
        using Addr = Register::Address<0xf00281d0,0x00000000,0,unsigned>;
        ///Timer Count in Seconds
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tcs{}; 
    }
    namespace GmacTn{    ///<1588 Timer Nanoseconds Register
        using Addr = Register::Address<0xf00281d4,0xc0000000,0,unsigned>;
        ///Timer Count in Nanoseconds
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> tns{}; 
    }
    namespace GmacTa{    ///<1588 Timer Adjust Register
        using Addr = Register::Address<0xf00281d8,0x40000000,0,unsigned>;
        ///Increment/Decrement
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> itdt{}; 
        ///Adjust 1588 Timer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> adj{}; 
    }
    namespace GmacTi{    ///<1588 Timer Increment Register
        using Addr = Register::Address<0xf00281dc,0xff000000,0,unsigned>;
        ///Count Nanoseconds
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cns{}; 
        ///Alternative Count Nanoseconds
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> acns{}; 
        ///Number of Increments
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nit{}; 
    }
    namespace GmacEfts{    ///<PTP Event Frame Transmitted Seconds
        using Addr = Register::Address<0xf00281e0,0x00000000,0,unsigned>;
        ///Register Update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rud{}; 
    }
    namespace GmacEftn{    ///<PTP Event Frame Transmitted Nanoseconds
        using Addr = Register::Address<0xf00281e4,0xc0000000,0,unsigned>;
        ///Register Update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> rud{}; 
    }
    namespace GmacEfrs{    ///<PTP Event Frame Received Seconds
        using Addr = Register::Address<0xf00281e8,0x00000000,0,unsigned>;
        ///Register Update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rud{}; 
    }
    namespace GmacEfrn{    ///<PTP Event Frame Received Nanoseconds
        using Addr = Register::Address<0xf00281ec,0xc0000000,0,unsigned>;
        ///Register Update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> rud{}; 
    }
    namespace GmacPefts{    ///<PTP Peer Event Frame Transmitted Seconds
        using Addr = Register::Address<0xf00281f0,0x00000000,0,unsigned>;
        ///Register Update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rud{}; 
    }
    namespace GmacPeftn{    ///<PTP Peer Event Frame Transmitted Nanoseconds
        using Addr = Register::Address<0xf00281f4,0xc0000000,0,unsigned>;
        ///Register Update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> rud{}; 
    }
    namespace GmacPefrs{    ///<PTP Peer Event Frame Received Seconds
        using Addr = Register::Address<0xf00281f8,0x00000000,0,unsigned>;
        ///Register Update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rud{}; 
    }
    namespace GmacPefrn{    ///<PTP Peer Event Frame Received Nanoseconds
        using Addr = Register::Address<0xf00281fc,0xc0000000,0,unsigned>;
        ///Register Update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> rud{}; 
    }
    namespace GmacIsrpq0{    ///<Interrupt Status Register Priority Queue
        using Addr = Register::Address<0xf0028400,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacIsrpq1{    ///<Interrupt Status Register Priority Queue
        using Addr = Register::Address<0xf0028404,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacIsrpq2{    ///<Interrupt Status Register Priority Queue
        using Addr = Register::Address<0xf0028408,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacIsrpq3{    ///<Interrupt Status Register Priority Queue
        using Addr = Register::Address<0xf002840c,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacIsrpq4{    ///<Interrupt Status Register Priority Queue
        using Addr = Register::Address<0xf0028410,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacIsrpq5{    ///<Interrupt Status Register Priority Queue
        using Addr = Register::Address<0xf0028414,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacIsrpq6{    ///<Interrupt Status Register Priority Queue
        using Addr = Register::Address<0xf0028418,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacTbqbapq0{    ///<Transmit Buffer Queue Base Address Priority Queue
        using Addr = Register::Address<0xf0028440,0xffffff03,0,unsigned>;
        ///Transmit Buffer Queue Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> txbqba{}; 
    }
    namespace GmacTbqbapq1{    ///<Transmit Buffer Queue Base Address Priority Queue
        using Addr = Register::Address<0xf0028444,0xffffff03,0,unsigned>;
        ///Transmit Buffer Queue Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> txbqba{}; 
    }
    namespace GmacTbqbapq2{    ///<Transmit Buffer Queue Base Address Priority Queue
        using Addr = Register::Address<0xf0028448,0xffffff03,0,unsigned>;
        ///Transmit Buffer Queue Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> txbqba{}; 
    }
    namespace GmacTbqbapq3{    ///<Transmit Buffer Queue Base Address Priority Queue
        using Addr = Register::Address<0xf002844c,0xffffff03,0,unsigned>;
        ///Transmit Buffer Queue Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> txbqba{}; 
    }
    namespace GmacTbqbapq4{    ///<Transmit Buffer Queue Base Address Priority Queue
        using Addr = Register::Address<0xf0028450,0xffffff03,0,unsigned>;
        ///Transmit Buffer Queue Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> txbqba{}; 
    }
    namespace GmacTbqbapq5{    ///<Transmit Buffer Queue Base Address Priority Queue
        using Addr = Register::Address<0xf0028454,0xffffff03,0,unsigned>;
        ///Transmit Buffer Queue Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> txbqba{}; 
    }
    namespace GmacTbqbapq6{    ///<Transmit Buffer Queue Base Address Priority Queue
        using Addr = Register::Address<0xf0028458,0xffffff03,0,unsigned>;
        ///Transmit Buffer Queue Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> txbqba{}; 
    }
    namespace GmacRbqbapq0{    ///<Receive Buffer Queue Base Address Priority Queue
        using Addr = Register::Address<0xf0028480,0xffffff03,0,unsigned>;
        ///Receive Buffer Queue Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> rxbqba{}; 
    }
    namespace GmacRbqbapq1{    ///<Receive Buffer Queue Base Address Priority Queue
        using Addr = Register::Address<0xf0028484,0xffffff03,0,unsigned>;
        ///Receive Buffer Queue Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> rxbqba{}; 
    }
    namespace GmacRbqbapq2{    ///<Receive Buffer Queue Base Address Priority Queue
        using Addr = Register::Address<0xf0028488,0xffffff03,0,unsigned>;
        ///Receive Buffer Queue Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> rxbqba{}; 
    }
    namespace GmacRbqbapq3{    ///<Receive Buffer Queue Base Address Priority Queue
        using Addr = Register::Address<0xf002848c,0xffffff03,0,unsigned>;
        ///Receive Buffer Queue Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> rxbqba{}; 
    }
    namespace GmacRbqbapq4{    ///<Receive Buffer Queue Base Address Priority Queue
        using Addr = Register::Address<0xf0028490,0xffffff03,0,unsigned>;
        ///Receive Buffer Queue Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> rxbqba{}; 
    }
    namespace GmacRbqbapq5{    ///<Receive Buffer Queue Base Address Priority Queue
        using Addr = Register::Address<0xf0028494,0xffffff03,0,unsigned>;
        ///Receive Buffer Queue Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> rxbqba{}; 
    }
    namespace GmacRbqbapq6{    ///<Receive Buffer Queue Base Address Priority Queue
        using Addr = Register::Address<0xf0028498,0xffffff03,0,unsigned>;
        ///Receive Buffer Queue Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> rxbqba{}; 
    }
    namespace GmacRbsrpq0{    ///<Receive Buffer Size Register Priority Queue
        using Addr = Register::Address<0xf00284a0,0xffff0000,0,unsigned>;
        ///Receive Buffer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rbs{}; 
    }
    namespace GmacRbsrpq1{    ///<Receive Buffer Size Register Priority Queue
        using Addr = Register::Address<0xf00284a4,0xffff0000,0,unsigned>;
        ///Receive Buffer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rbs{}; 
    }
    namespace GmacRbsrpq2{    ///<Receive Buffer Size Register Priority Queue
        using Addr = Register::Address<0xf00284a8,0xffff0000,0,unsigned>;
        ///Receive Buffer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rbs{}; 
    }
    namespace GmacRbsrpq3{    ///<Receive Buffer Size Register Priority Queue
        using Addr = Register::Address<0xf00284ac,0xffff0000,0,unsigned>;
        ///Receive Buffer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rbs{}; 
    }
    namespace GmacRbsrpq4{    ///<Receive Buffer Size Register Priority Queue
        using Addr = Register::Address<0xf00284b0,0xffff0000,0,unsigned>;
        ///Receive Buffer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rbs{}; 
    }
    namespace GmacRbsrpq5{    ///<Receive Buffer Size Register Priority Queue
        using Addr = Register::Address<0xf00284b4,0xffff0000,0,unsigned>;
        ///Receive Buffer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rbs{}; 
    }
    namespace GmacRbsrpq6{    ///<Receive Buffer Size Register Priority Queue
        using Addr = Register::Address<0xf00284b8,0xffff0000,0,unsigned>;
        ///Receive Buffer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rbs{}; 
    }
    namespace GmacSt1rpq0{    ///<Screening Type1 Register Priority Queue
        using Addr = Register::Address<0xf0028500,0xc0000000,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///Differentiated Services or Traffic Class Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4),Register::ReadWriteAccess,unsigned> dstcm{}; 
        ///UDP Port Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12),Register::ReadWriteAccess,unsigned> udpm{}; 
        ///Differentiated Services or Traffic Class Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dstce{}; 
        ///UDP Port Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> udpe{}; 
    }
    namespace GmacSt1rpq1{    ///<Screening Type1 Register Priority Queue
        using Addr = Register::Address<0xf0028504,0xc0000000,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///Differentiated Services or Traffic Class Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4),Register::ReadWriteAccess,unsigned> dstcm{}; 
        ///UDP Port Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12),Register::ReadWriteAccess,unsigned> udpm{}; 
        ///Differentiated Services or Traffic Class Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dstce{}; 
        ///UDP Port Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> udpe{}; 
    }
    namespace GmacSt1rpq2{    ///<Screening Type1 Register Priority Queue
        using Addr = Register::Address<0xf0028508,0xc0000000,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///Differentiated Services or Traffic Class Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4),Register::ReadWriteAccess,unsigned> dstcm{}; 
        ///UDP Port Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12),Register::ReadWriteAccess,unsigned> udpm{}; 
        ///Differentiated Services or Traffic Class Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dstce{}; 
        ///UDP Port Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> udpe{}; 
    }
    namespace GmacSt1rpq3{    ///<Screening Type1 Register Priority Queue
        using Addr = Register::Address<0xf002850c,0xc0000000,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///Differentiated Services or Traffic Class Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4),Register::ReadWriteAccess,unsigned> dstcm{}; 
        ///UDP Port Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12),Register::ReadWriteAccess,unsigned> udpm{}; 
        ///Differentiated Services or Traffic Class Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dstce{}; 
        ///UDP Port Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> udpe{}; 
    }
    namespace GmacSt1rpq4{    ///<Screening Type1 Register Priority Queue
        using Addr = Register::Address<0xf0028510,0xc0000000,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///Differentiated Services or Traffic Class Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4),Register::ReadWriteAccess,unsigned> dstcm{}; 
        ///UDP Port Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12),Register::ReadWriteAccess,unsigned> udpm{}; 
        ///Differentiated Services or Traffic Class Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dstce{}; 
        ///UDP Port Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> udpe{}; 
    }
    namespace GmacSt1rpq5{    ///<Screening Type1 Register Priority Queue
        using Addr = Register::Address<0xf0028514,0xc0000000,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///Differentiated Services or Traffic Class Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4),Register::ReadWriteAccess,unsigned> dstcm{}; 
        ///UDP Port Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12),Register::ReadWriteAccess,unsigned> udpm{}; 
        ///Differentiated Services or Traffic Class Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dstce{}; 
        ///UDP Port Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> udpe{}; 
    }
    namespace GmacSt1rpq6{    ///<Screening Type1 Register Priority Queue
        using Addr = Register::Address<0xf0028518,0xc0000000,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///Differentiated Services or Traffic Class Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4),Register::ReadWriteAccess,unsigned> dstcm{}; 
        ///UDP Port Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12),Register::ReadWriteAccess,unsigned> udpm{}; 
        ///Differentiated Services or Traffic Class Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dstce{}; 
        ///UDP Port Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> udpe{}; 
    }
    namespace GmacSt1rpq7{    ///<Screening Type1 Register Priority Queue
        using Addr = Register::Address<0xf002851c,0xc0000000,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///Differentiated Services or Traffic Class Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4),Register::ReadWriteAccess,unsigned> dstcm{}; 
        ///UDP Port Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12),Register::ReadWriteAccess,unsigned> udpm{}; 
        ///Differentiated Services or Traffic Class Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dstce{}; 
        ///UDP Port Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> udpe{}; 
    }
    namespace GmacSt1rpq8{    ///<Screening Type1 Register Priority Queue
        using Addr = Register::Address<0xf0028520,0xc0000000,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///Differentiated Services or Traffic Class Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4),Register::ReadWriteAccess,unsigned> dstcm{}; 
        ///UDP Port Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12),Register::ReadWriteAccess,unsigned> udpm{}; 
        ///Differentiated Services or Traffic Class Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dstce{}; 
        ///UDP Port Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> udpe{}; 
    }
    namespace GmacSt1rpq9{    ///<Screening Type1 Register Priority Queue
        using Addr = Register::Address<0xf0028524,0xc0000000,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///Differentiated Services or Traffic Class Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4),Register::ReadWriteAccess,unsigned> dstcm{}; 
        ///UDP Port Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12),Register::ReadWriteAccess,unsigned> udpm{}; 
        ///Differentiated Services or Traffic Class Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dstce{}; 
        ///UDP Port Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> udpe{}; 
    }
    namespace GmacSt1rpq10{    ///<Screening Type1 Register Priority Queue
        using Addr = Register::Address<0xf0028528,0xc0000000,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///Differentiated Services or Traffic Class Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4),Register::ReadWriteAccess,unsigned> dstcm{}; 
        ///UDP Port Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12),Register::ReadWriteAccess,unsigned> udpm{}; 
        ///Differentiated Services or Traffic Class Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dstce{}; 
        ///UDP Port Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> udpe{}; 
    }
    namespace GmacSt1rpq11{    ///<Screening Type1 Register Priority Queue
        using Addr = Register::Address<0xf002852c,0xc0000000,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///Differentiated Services or Traffic Class Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4),Register::ReadWriteAccess,unsigned> dstcm{}; 
        ///UDP Port Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12),Register::ReadWriteAccess,unsigned> udpm{}; 
        ///Differentiated Services or Traffic Class Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dstce{}; 
        ///UDP Port Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> udpe{}; 
    }
    namespace GmacSt1rpq12{    ///<Screening Type1 Register Priority Queue
        using Addr = Register::Address<0xf0028530,0xc0000000,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///Differentiated Services or Traffic Class Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4),Register::ReadWriteAccess,unsigned> dstcm{}; 
        ///UDP Port Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12),Register::ReadWriteAccess,unsigned> udpm{}; 
        ///Differentiated Services or Traffic Class Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dstce{}; 
        ///UDP Port Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> udpe{}; 
    }
    namespace GmacSt1rpq13{    ///<Screening Type1 Register Priority Queue
        using Addr = Register::Address<0xf0028534,0xc0000000,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///Differentiated Services or Traffic Class Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4),Register::ReadWriteAccess,unsigned> dstcm{}; 
        ///UDP Port Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12),Register::ReadWriteAccess,unsigned> udpm{}; 
        ///Differentiated Services or Traffic Class Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dstce{}; 
        ///UDP Port Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> udpe{}; 
    }
    namespace GmacSt1rpq14{    ///<Screening Type1 Register Priority Queue
        using Addr = Register::Address<0xf0028538,0xc0000000,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///Differentiated Services or Traffic Class Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4),Register::ReadWriteAccess,unsigned> dstcm{}; 
        ///UDP Port Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12),Register::ReadWriteAccess,unsigned> udpm{}; 
        ///Differentiated Services or Traffic Class Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dstce{}; 
        ///UDP Port Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> udpe{}; 
    }
    namespace GmacSt1rpq15{    ///<Screening Type1 Register Priority Queue
        using Addr = Register::Address<0xf002853c,0xc0000000,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///Differentiated Services or Traffic Class Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,4),Register::ReadWriteAccess,unsigned> dstcm{}; 
        ///UDP Port Match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,12),Register::ReadWriteAccess,unsigned> udpm{}; 
        ///Differentiated Services or Traffic Class Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dstce{}; 
        ///UDP Port Match Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> udpe{}; 
    }
    namespace GmacSt2rpq0{    ///<Screening Type2 Register Priority Queue
        using Addr = Register::Address<0xf0028540,0xfffffe00,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///VLAN Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> vlanp{}; 
        ///VLAN Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vlane{}; 
    }
    namespace GmacSt2rpq1{    ///<Screening Type2 Register Priority Queue
        using Addr = Register::Address<0xf0028544,0xfffffe00,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///VLAN Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> vlanp{}; 
        ///VLAN Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vlane{}; 
    }
    namespace GmacSt2rpq2{    ///<Screening Type2 Register Priority Queue
        using Addr = Register::Address<0xf0028548,0xfffffe00,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///VLAN Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> vlanp{}; 
        ///VLAN Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vlane{}; 
    }
    namespace GmacSt2rpq3{    ///<Screening Type2 Register Priority Queue
        using Addr = Register::Address<0xf002854c,0xfffffe00,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///VLAN Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> vlanp{}; 
        ///VLAN Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vlane{}; 
    }
    namespace GmacSt2rpq4{    ///<Screening Type2 Register Priority Queue
        using Addr = Register::Address<0xf0028550,0xfffffe00,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///VLAN Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> vlanp{}; 
        ///VLAN Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vlane{}; 
    }
    namespace GmacSt2rpq5{    ///<Screening Type2 Register Priority Queue
        using Addr = Register::Address<0xf0028554,0xfffffe00,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///VLAN Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> vlanp{}; 
        ///VLAN Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vlane{}; 
    }
    namespace GmacSt2rpq6{    ///<Screening Type2 Register Priority Queue
        using Addr = Register::Address<0xf0028558,0xfffffe00,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///VLAN Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> vlanp{}; 
        ///VLAN Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vlane{}; 
    }
    namespace GmacSt2rpq7{    ///<Screening Type2 Register Priority Queue
        using Addr = Register::Address<0xf002855c,0xfffffe00,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///VLAN Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> vlanp{}; 
        ///VLAN Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vlane{}; 
    }
    namespace GmacSt2rpq8{    ///<Screening Type2 Register Priority Queue
        using Addr = Register::Address<0xf0028560,0xfffffe00,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///VLAN Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> vlanp{}; 
        ///VLAN Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vlane{}; 
    }
    namespace GmacSt2rpq9{    ///<Screening Type2 Register Priority Queue
        using Addr = Register::Address<0xf0028564,0xfffffe00,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///VLAN Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> vlanp{}; 
        ///VLAN Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vlane{}; 
    }
    namespace GmacSt2rpq10{    ///<Screening Type2 Register Priority Queue
        using Addr = Register::Address<0xf0028568,0xfffffe00,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///VLAN Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> vlanp{}; 
        ///VLAN Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vlane{}; 
    }
    namespace GmacSt2rpq11{    ///<Screening Type2 Register Priority Queue
        using Addr = Register::Address<0xf002856c,0xfffffe00,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///VLAN Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> vlanp{}; 
        ///VLAN Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vlane{}; 
    }
    namespace GmacSt2rpq12{    ///<Screening Type2 Register Priority Queue
        using Addr = Register::Address<0xf0028570,0xfffffe00,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///VLAN Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> vlanp{}; 
        ///VLAN Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vlane{}; 
    }
    namespace GmacSt2rpq13{    ///<Screening Type2 Register Priority Queue
        using Addr = Register::Address<0xf0028574,0xfffffe00,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///VLAN Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> vlanp{}; 
        ///VLAN Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vlane{}; 
    }
    namespace GmacSt2rpq14{    ///<Screening Type2 Register Priority Queue
        using Addr = Register::Address<0xf0028578,0xfffffe00,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///VLAN Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> vlanp{}; 
        ///VLAN Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vlane{}; 
    }
    namespace GmacSt2rpq15{    ///<Screening Type2 Register Priority Queue
        using Addr = Register::Address<0xf002857c,0xfffffe00,0,unsigned>;
        ///Que Number (0->7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qnb{}; 
        ///VLAN Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> vlanp{}; 
        ///VLAN Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vlane{}; 
    }
    namespace GmacIerpq0{    ///<Interrupt Enable Register Priority Queue
        using Addr = Register::Address<0xf0028600,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacIerpq1{    ///<Interrupt Enable Register Priority Queue
        using Addr = Register::Address<0xf0028604,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacIerpq2{    ///<Interrupt Enable Register Priority Queue
        using Addr = Register::Address<0xf0028608,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacIerpq3{    ///<Interrupt Enable Register Priority Queue
        using Addr = Register::Address<0xf002860c,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacIerpq4{    ///<Interrupt Enable Register Priority Queue
        using Addr = Register::Address<0xf0028610,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacIerpq5{    ///<Interrupt Enable Register Priority Queue
        using Addr = Register::Address<0xf0028614,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacIerpq6{    ///<Interrupt Enable Register Priority Queue
        using Addr = Register::Address<0xf0028618,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacIdrpq0{    ///<Interrupt Disable Register Priority Queue
        using Addr = Register::Address<0xf0028620,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacIdrpq1{    ///<Interrupt Disable Register Priority Queue
        using Addr = Register::Address<0xf0028624,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacIdrpq2{    ///<Interrupt Disable Register Priority Queue
        using Addr = Register::Address<0xf0028628,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacIdrpq3{    ///<Interrupt Disable Register Priority Queue
        using Addr = Register::Address<0xf002862c,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacIdrpq4{    ///<Interrupt Disable Register Priority Queue
        using Addr = Register::Address<0xf0028630,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacIdrpq5{    ///<Interrupt Disable Register Priority Queue
        using Addr = Register::Address<0xf0028634,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacIdrpq6{    ///<Interrupt Disable Register Priority Queue
        using Addr = Register::Address<0xf0028638,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///Transmit Frame Corruption due to AHB error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfc{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacImrpq0{    ///<Interrupt Mask Register Priority Queue
        using Addr = Register::Address<0xf0028640,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///AHB Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ahb{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacImrpq1{    ///<Interrupt Mask Register Priority Queue
        using Addr = Register::Address<0xf0028644,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///AHB Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ahb{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacImrpq2{    ///<Interrupt Mask Register Priority Queue
        using Addr = Register::Address<0xf0028648,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///AHB Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ahb{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacImrpq3{    ///<Interrupt Mask Register Priority Queue
        using Addr = Register::Address<0xf002864c,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///AHB Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ahb{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacImrpq4{    ///<Interrupt Mask Register Priority Queue
        using Addr = Register::Address<0xf0028650,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///AHB Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ahb{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacImrpq5{    ///<Interrupt Mask Register Priority Queue
        using Addr = Register::Address<0xf0028654,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///AHB Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ahb{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
    namespace GmacImrpq6{    ///<Interrupt Mask Register Priority Queue
        using Addr = Register::Address<0xf0028658,0xfffff319,0,unsigned>;
        ///Receive Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///RX Used Bit Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Retry Limit Exceeded or Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        ///AHB Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ahb{}; 
        ///Transmit Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///HRESP Not OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
    }
}
