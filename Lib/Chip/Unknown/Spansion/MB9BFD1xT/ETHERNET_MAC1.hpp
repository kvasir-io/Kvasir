#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Ethernet-MAC 0
    namespace EthernetMac1Mcr{    ///<MAC Configuration Register
        using Addr = Register::Address<0x40067000,0xfc000003,0x00000000,unsigned>;
        ///CRC stripping for Type frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cst{}; 
        ///Transmit Configuration in RGMII
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tc{}; 
        ///Watchdog Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> wd{}; 
        ///Jabber Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> jd{}; 
        ///Frame Burst Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> be{}; 
        ///Jumbo Frame Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> je{}; 
        ///Inter-Frame GAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> ifg{}; 
        ///Disable Carrier Sense During Transaction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dcrs{}; 
        ///Port Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ps{}; 
        ///Speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fes{}; 
        ///Disable Receive Own
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> do_{}; 
        ///Loop-back Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lm{}; 
        ///Duplex mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dm{}; 
        ///Checksum Offload
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ipc{}; 
        ///Disable Retry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dr{}; 
        ///Link Up/Down in RGMII
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lud{}; 
        ///Automatic Pad/CRC Stripping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> acs{}; 
        ///Back-off Limit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> bl{}; 
        ///Deferral Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dc{}; 
        ///Transmitter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> te{}; 
        ///Receiver Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> re{}; 
    }
    namespace EthernetMac1Mffr{    ///<MAC Frame Filter Register
        using Addr = Register::Address<0x40067004,0x7ffff800,0x00000000,unsigned>;
        ///Receive All
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ra{}; 
        ///Hash or Perfect Filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hpf{}; 
        ///Source Address Filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> saf{}; 
        ///Source Address Inverse Filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> saif{}; 
        ///Pass Control Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pcf{}; 
        ///Disable Broadcast Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> db{}; 
        ///Pass All Multicast
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pm{}; 
        ///DA Inverse Filtering
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> daif{}; 
        ///Hash Multicast
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hmc{}; 
        ///Hash Unicast
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> huc{}; 
        ///Promiscuous Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pr{}; 
    }
    namespace EthernetMac1Mhtrh{    ///<MAC Hash Table Register (High)
        using Addr = Register::Address<0x40067008,0x00000000,0x00000000,unsigned>;
        ///the upper 32 bits of the hash table in the HTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hth{}; 
    }
    namespace EthernetMac1Mhtrl{    ///<MAC Hash Table Register (Low)
        using Addr = Register::Address<0x4006700c,0x00000000,0x00000000,unsigned>;
        ///the lower 32 bits of the hash table in the HTL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htl{}; 
    }
    namespace EthernetMac1Gar{    ///<GMII/MII Address Register
        using Addr = Register::Address<0x40067010,0xffff0000,0x00000000,unsigned>;
        ///Physical Layer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> pa{}; 
        ///GMII Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> gr{}; 
        ///Application Clock Range
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> cr{}; 
        ///GMII/MII Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gw{}; 
        ///GMII/MII Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gb{}; 
    }
    namespace EthernetMac1Gdr{    ///<GMII/MII Data Register
        using Addr = Register::Address<0x40067014,0xffff0000,0x00000000,unsigned>;
        ///GMII/MII Data Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gd{}; 
    }
    namespace EthernetMac1Fcr{    ///<Flow Control Register
        using Addr = Register::Address<0x40067018,0x0000ff40,0x00000000,unsigned>;
        ///Pause Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> pt{}; 
        ///Disable Zero-Quanta Pause
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dzpq{}; 
        ///Pause Low Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> plt{}; 
        ///Unicast Pause Frame detect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> up{}; 
        ///Receive Flow Control Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rfe{}; 
        ///Transmit Flow Control Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tfe{}; 
        ///Flow Control Busy/Backpressure Activate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcbBpa{}; 
    }
    namespace EthernetMac1Vtr{    ///<VLAN TAG Register
        using Addr = Register::Address<0x4006701c,0xfffe0000,0x00000000,unsigned>;
        ///Enable 12-Bit VLAN Tag Comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> etv{}; 
        ///VLAN Tag Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> vl{}; 
    }
    namespace EthernetMac1Rwffr{    ///<Remote Wake-up Frame Filter Register
        using Addr = Register::Address<0x40067028,0x00000000,0x00000000,unsigned>;
        ///Remote Wake-up Frame Filter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rwffr31{}; 
    }
    namespace EthernetMac1Pmtr{    ///<PMT Register
        using Addr = Register::Address<0x4006702c,0x7ffffd98,0x00000000,unsigned>;
        ///Remote Wake-up Frame Filter Register Pointer Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> rwffrpr{}; 
        ///Global Unicast
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gu{}; 
        ///Wake Up Frame Receive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wpr{}; 
        ///Magic Packet Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mpr{}; 
        ///Wake-Up Frame Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wfe{}; 
        ///Magic Packet Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mpe{}; 
        ///Power Down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd{}; 
    }
    namespace EthernetMac1Lpicsr{    ///<LPI Control and Status Register
        using Addr = Register::Address<0x40067030,0xfff0fcf0,0x00000000,unsigned>;
        ///LPI TX Automate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> lpitxa{}; 
        ///PHY Link Status Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> plsen{}; 
        ///PHY Link Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pls{}; 
        ///LPI Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lpien{}; 
        ///Receive LPI State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rlpist{}; 
        ///Transmit LPI State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tlpist{}; 
        ///Receive LPI Exit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rlpiex{}; 
        ///Receive LPI Entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rlpien{}; 
        ///Transmit LPI Exit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tlpiex{}; 
        ///Transmit LPI Entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tlpien{}; 
    }
    namespace EthernetMac1Lpitcr{    ///<LPI Timers Control Register
        using Addr = Register::Address<0x40067034,0xfc000000,0x00000000,unsigned>;
        ///LPI LS TIMER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> lit{}; 
        ///LPI TW TIMER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> twt{}; 
    }
    namespace EthernetMac1Isr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40067038,0xfffff906,0x00000000,unsigned>;
        ///LPI Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lpiis{}; 
        ///Time Stamp Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tsis{}; 
        ///MMC Receive Checksum Offload Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cois{}; 
        ///MMC Transmit Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tis{}; 
        ///MMC Receive Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ris{}; 
        ///MMC Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mis{}; 
        ///PMT Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pis{}; 
        ///RGMII Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rgis{}; 
    }
    namespace EthernetMac1Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x4006703c,0xffffff96,0x00000000,unsigned>;
        ///LPI Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lpiim{}; 
        ///Time Stamp Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tsim{}; 
        ///PMT Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pim{}; 
        ///RGMII Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rgim{}; 
    }
    namespace EthernetMac1Mar0h{    ///<MAC Address0 Register (High)
        using Addr = Register::Address<0x40067040,0x7fff0000,0x00000000,unsigned>;
        ///Must be one
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mo{}; 
        ///AD[47]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> a47{}; 
        ///AD[46]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> a46{}; 
        ///AD[45]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> a45{}; 
        ///AD[44]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> a44{}; 
        ///AD[43]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> a43{}; 
        ///AD[42]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> a42{}; 
        ///AD[41]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> a41{}; 
        ///AD[40]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> a40{}; 
        ///AD[39]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> a39{}; 
        ///AD[38]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> a38{}; 
        ///AD[37]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> a37{}; 
        ///AD[36]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> a36{}; 
        ///AD[35]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> a35{}; 
        ///AD[34]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a34{}; 
        ///AD[33]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> a33{}; 
        ///AD[32]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> a32{}; 
    }
    namespace EthernetMac1Mar0l{    ///<MAC Address0 Register (Low)
        using Addr = Register::Address<0x40067044,0x00000000,0x00000000,unsigned>;
        ///AD[31]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> a31{}; 
        ///AD[30]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> a30{}; 
        ///AD[29]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> a29{}; 
        ///AD[28]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> a28{}; 
        ///AD[27]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> a27{}; 
        ///AD[26]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> a26{}; 
        ///AD[25]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> a25{}; 
        ///AD[24]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> a24{}; 
        ///AD[23]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> a23{}; 
        ///AD[22]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> a22{}; 
        ///AD[21]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> a21{}; 
        ///AD[20]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> a20{}; 
        ///AD[19]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> a19{}; 
        ///AD[18]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> a18{}; 
        ///AD[17]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> a17{}; 
        ///AD[16]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> a16{}; 
        ///AD[15]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> a15{}; 
        ///AD[14]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> a14{}; 
        ///AD[13]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> a13{}; 
        ///AD[12]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> a12{}; 
        ///AD[11]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> a11{}; 
        ///AD[10]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> a10{}; 
        ///AD[9]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> a9{}; 
        ///AD[8]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> a8{}; 
        ///AD[7]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> a7{}; 
        ///AD[6]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> a6{}; 
        ///AD[5]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> a5{}; 
        ///AD[4]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> a4{}; 
        ///AD[3]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> a3{}; 
        ///AD[2]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a2{}; 
        ///AD[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> a1{}; 
        ///AD[0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> a0{}; 
    }
    namespace EthernetMac1Mar1h{    ///<MAC Address1 Register -High
        using Addr = Register::Address<0x40067048,0x00ff0000,0x00000000,unsigned>;
        ///Address Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ae{}; 
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sa{}; 
        ///Mask Byte Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> mbc{}; 
        ///AD[47]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> a47{}; 
        ///AD[46]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> a46{}; 
        ///AD[45]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> a45{}; 
        ///AD[44]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> a44{}; 
        ///AD[43]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> a43{}; 
        ///AD[42]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> a42{}; 
        ///AD[41]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> a41{}; 
        ///AD[40]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> a40{}; 
        ///AD[39]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> a39{}; 
        ///AD[38]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> a38{}; 
        ///AD[37]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> a37{}; 
        ///AD[36]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> a36{}; 
        ///AD[35]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> a35{}; 
        ///AD[34]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a34{}; 
        ///AD[33]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> a33{}; 
        ///AD[32]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> a32{}; 
    }
    namespace EthernetMac1Mar1l{    ///<MAC Address1 Register -Low
        using Addr = Register::Address<0x4006704c,0x00000000,0x00000000,unsigned>;
        ///AD[31]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> a31{}; 
        ///AD[30]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> a30{}; 
        ///AD[29]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> a29{}; 
        ///AD[28]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> a28{}; 
        ///AD[27]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> a27{}; 
        ///AD[26]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> a26{}; 
        ///AD[25]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> a25{}; 
        ///AD[24]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> a24{}; 
        ///AD[23]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> a23{}; 
        ///AD[22]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> a22{}; 
        ///AD[21]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> a21{}; 
        ///AD[20]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> a20{}; 
        ///AD[19]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> a19{}; 
        ///AD[18]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> a18{}; 
        ///AD[17]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> a17{}; 
        ///AD[16]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> a16{}; 
        ///AD[15]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> a15{}; 
        ///AD[14]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> a14{}; 
        ///AD[13]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> a13{}; 
        ///AD[12]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> a12{}; 
        ///AD[11]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> a11{}; 
        ///AD[10]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> a10{}; 
        ///AD[9]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> a9{}; 
        ///AD[8]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> a8{}; 
        ///AD[7]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> a7{}; 
        ///AD[6]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> a6{}; 
        ///AD[5]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> a5{}; 
        ///AD[4]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> a4{}; 
        ///AD[3]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> a3{}; 
        ///AD[2]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a2{}; 
        ///AD[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> a1{}; 
        ///AD[0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> a0{}; 
    }
    namespace EthernetMac1Mar2h{    ///<MAC Address2 Register -High
        using Addr = Register::Address<0x40067050,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar2l{    ///<MAC Address2 Register -Low
        using Addr = Register::Address<0x40067054,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar3h{    ///<MAC Address3 Register -High
        using Addr = Register::Address<0x40067058,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar3l{    ///<MAC Address3 Register -Low
        using Addr = Register::Address<0x4006705c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar4h{    ///<MAC Address4 Register -High
        using Addr = Register::Address<0x40067060,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar4l{    ///<MAC Address4 Register -Low
        using Addr = Register::Address<0x40067064,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar5h{    ///<MAC Address5 Register -High
        using Addr = Register::Address<0x40067068,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar5l{    ///<MAC Address5 Register -Low
        using Addr = Register::Address<0x4006706c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar6h{    ///<MAC Address6 Register -High
        using Addr = Register::Address<0x40067070,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar6l{    ///<MAC Address6 Register -Low
        using Addr = Register::Address<0x40067074,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar7h{    ///<MAC Address7 Register -High
        using Addr = Register::Address<0x40067078,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar7l{    ///<MAC Address7 Register -Low
        using Addr = Register::Address<0x4006707c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar8h{    ///<MAC Address8 Register -High
        using Addr = Register::Address<0x40067080,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar8l{    ///<MAC Address8 Register -Low
        using Addr = Register::Address<0x40067084,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar9h{    ///<MAC Address9 Register -High
        using Addr = Register::Address<0x40067088,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar9l{    ///<MAC Address9 Register -Low
        using Addr = Register::Address<0x4006708c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar10h{    ///<MAC Address10 Register -High
        using Addr = Register::Address<0x40067090,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar10l{    ///<MAC Address10 Register -Low
        using Addr = Register::Address<0x40067094,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar11h{    ///<MAC Address11 Register -High
        using Addr = Register::Address<0x40067098,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar11l{    ///<MAC Address11 Register -Low
        using Addr = Register::Address<0x4006709c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar12h{    ///<MAC Address12 Register -High
        using Addr = Register::Address<0x400670a0,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar12l{    ///<MAC Address12 Register -Low
        using Addr = Register::Address<0x400670a4,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar13h{    ///<MAC Address13 Register -High
        using Addr = Register::Address<0x400670a8,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar13l{    ///<MAC Address13 Register -Low
        using Addr = Register::Address<0x400670ac,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar14h{    ///<MAC Address14 Register -High
        using Addr = Register::Address<0x400670b0,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar14l{    ///<MAC Address14 Register -Low
        using Addr = Register::Address<0x400670b4,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar15h{    ///<MAC Address15 Register -High
        using Addr = Register::Address<0x400670b8,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar15l{    ///<MAC Address15 Register -Low
        using Addr = Register::Address<0x400670bc,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1MmcCntl{    ///<MMC Control Register
        using Addr = Register::Address<0x40067100,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1MmcIntrRx{    ///<Receive Interrupt Register
        using Addr = Register::Address<0x40067104,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1MmcIntrTx{    ///<MMC Transmit Interrupt Register 
        using Addr = Register::Address<0x40067108,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1MmcIntrMaskRx{    ///<MMC Receive Interrupt Mask Register
        using Addr = Register::Address<0x4006710c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1MmcIntrMaskTx{    ///<MMC Transmit Interrupt Mask Register 
        using Addr = Register::Address<0x40067110,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1TxoctetcountGb{    ///<"Number of bytes transmitted, exclusive of preamble and retried bytes, in good and bad frames"
        using Addr = Register::Address<0x40067114,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1TxframecountGb{    ///<"Number of good and bad frames transmitted, exclusive of retried frames"
        using Addr = Register::Address<0x40067118,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1TxbroadcastframesG{    ///<Number of good broadcast frames transmitted
        using Addr = Register::Address<0x4006711c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1TxmulticastframesG{    ///<Number of good multicast frames transmitted
        using Addr = Register::Address<0x40067120,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Tx64octetsGb{    ///<"Number of good and bad frames transmitted with length of 64 bytes, exclusive of preamble and retried frames"
        using Addr = Register::Address<0x40067124,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Tx65to127octetsGb{    ///<"Number of good and bad frames transmitted with length between 65 and 127 (inclusive) bytes, exclusive of preamble and retried frames"
        using Addr = Register::Address<0x40067128,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Tx128to255octetsGb{    ///<"Number of good and bad frames transmitted with length between 128 and 255 (inclusive) bytes, exclusive of preamble and retried frames"
        using Addr = Register::Address<0x4006712c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Tx256to511octetsGb{    ///<"Number of good and bad frames transmitted with length between 256 and 511 (inclusive) bytes, exclusive of preamble and retried frames"
        using Addr = Register::Address<0x40067130,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Tx512to1023octetsGb{    ///<"Number of good and bad frames transmitted with length between 512 and 1023 (inclusive) bytes, exclusive of preamble and retried frames"
        using Addr = Register::Address<0x40067134,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Tx1024tomaxoctetsGb{    ///<"Number of good and bad frames transmitted with length between 1024 and Maxsize (inclusive) bytes, exclusive of preamble and retried frames"
        using Addr = Register::Address<0x40067138,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1TxunicastframesGb{    ///<Number of good and bad unicast frames transmitted
        using Addr = Register::Address<0x4006713c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1TxmulticastframesGb{    ///<Number of good and bad multicast frames transmitted
        using Addr = Register::Address<0x40067140,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1TxbroadcastframesGb{    ///<Number of good and bad broadcast frames transmitted
        using Addr = Register::Address<0x40067144,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Txunderflowerror{    ///<Number of frames aborted due to frame underflow error
        using Addr = Register::Address<0x40067148,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1TxsinglecolG{    ///<Number of successfully transmitted frames after a single collision in Half-duplex mode 
        using Addr = Register::Address<0x4006714c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1TxmulticolG{    ///<Number of successfully transmitted frames after more than a single collision in Half-duplex mode
        using Addr = Register::Address<0x40067150,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Txdeferred{    ///<Number of successfully transmitted frames after a deferral in Half-duplex mode.
        using Addr = Register::Address<0x40067154,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Txlatecol{    ///<Number of frames aborted due to late collision error. 
        using Addr = Register::Address<0x40067158,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Txexesscol{    ///<Number of frames aborted due to excessive (16) collision errors. 
        using Addr = Register::Address<0x4006715c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Txcarriererror{    ///<Number of frames aborted due to carrier sense error (no carrier or loss of carrier).  
        using Addr = Register::Address<0x40067160,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1TxoctetcountG{    ///<"Number of bytes transmitted, exclusive of preamble, in good frames only. "
        using Addr = Register::Address<0x40067164,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1TxframecountG{    ///<Number of good frames transmitted. 
        using Addr = Register::Address<0x40067168,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1TxexecessdefG{    ///<Number of frames aborted due to excessive deferral error (deferred for more than two max-sized frame times).
        using Addr = Register::Address<0x4006716c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Txpauseframes{    ///<Number of good PAUSE frames transmitted. 
        using Addr = Register::Address<0x40067170,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1TxvlanframesG{    ///<"Number of good VLAN frames transmitted, exclusive of retried frames. "
        using Addr = Register::Address<0x40067174,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxframecountGb{    ///<Number of good and bad frames received. 
        using Addr = Register::Address<0x40067180,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxoctetcountGb{    ///<"Number of bytes received, exclusive of preamble, in good and bad frames.  "
        using Addr = Register::Address<0x40067184,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxoctetcountG{    ///<"Number of bytes received, exclusive of preamble, only in good frames. "
        using Addr = Register::Address<0x40067188,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxbroadcastframesG{    ///<Number of good broadcast frames received. 
        using Addr = Register::Address<0x4006718c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxmulticastframesG{    ///<Number of good multicast frames received. 
        using Addr = Register::Address<0x40067190,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxcrcerror{    ///<Number of frames received with CRC error. 
        using Addr = Register::Address<0x40067194,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxallignmenterror{    ///<Number of frames received with alignment (dribble) error. Valid only in 10/100 mode. 
        using Addr = Register::Address<0x40067198,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxrunterror{    ///<Number of frames received with runt (64 bytes and CRC error) error. 
        using Addr = Register::Address<0x4006719c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxjabbererror{    ///<Number of frames received with length greater than 1518 bytes with CRC error. 
        using Addr = Register::Address<0x400671a0,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxundersizeG{    ///<"Number of frames received with length less than 64 bytes, without any errors.  "
        using Addr = Register::Address<0x400671a4,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxoversizeG{    ///<Number of frames received with length greater than the maxsize without error. 
        using Addr = Register::Address<0x400671a8,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rx64octetsGb{    ///<"Number of good and bad frames received with length 64 bytes, exclusive of preamble. "
        using Addr = Register::Address<0x400671ac,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rx65to127octetsGb{    ///<"Number of good and bad frames received with length between 65 and 127 (inclusive) bytes, exclusive of preamble.  "
        using Addr = Register::Address<0x400671b0,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rx128to255octetsGb{    ///<"Number of good and bad frames received with length between 128 and 255 (inclusive) bytes, exclusive of preamble.  "
        using Addr = Register::Address<0x400671b4,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rx256to511octetsGb{    ///<"Number of good and bad frames received with length between 256 and 511 (inclusive) bytes, exclusive of preamble.  "
        using Addr = Register::Address<0x400671b8,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rx512to1023octetsGb{    ///<"Number of good and bad frames received with length between 512 and 1023 (inclusive) bytes, exclusive of preamble.  "
        using Addr = Register::Address<0x400671bc,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rx1024tomaxoctetsGb{    ///<"Number of good and bad frames received with length between 1024 and maxsize (inclusive) bytes, exclusive of preamble. "
        using Addr = Register::Address<0x400671c0,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxunicastframesG{    ///<Number of good unicast frames received. 
        using Addr = Register::Address<0x400671c4,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxlengtherror{    ///<"Number of frames received with length error (Length type field is not the frame size), for all frames with valid length field. "
        using Addr = Register::Address<0x400671c8,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxoutofrangetype{    ///<Number of frames received with length/type field not equal to the valid frame size (>1500) 
        using Addr = Register::Address<0x400671cc,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxpauseframes{    ///<Number of good and valid PAUSE frames received. 
        using Addr = Register::Address<0x400671d0,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxfifooverflow{    ///<Number of missed received frames due to FIFO overflow. 
        using Addr = Register::Address<0x400671d4,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxvlanframesGb{    ///<Number of good and bad VLAN frames received. 
        using Addr = Register::Address<0x400671d8,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxwatchdogerror{    ///<Number of frames received with error due to watchdog timeout error (frames with a data load larger than 2048 bytes). 
        using Addr = Register::Address<0x400671dc,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1MmcIpcIntrMaskRx{    ///<MMC Receive Checksum Offload Interrupt Mask Register
        using Addr = Register::Address<0x40067200,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1MmcIpcIntrRx{    ///<MMC Receive Checksum Offload Interrupt Register
        using Addr = Register::Address<0x40067208,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxipv4GdFrms{    ///<"Number of good IPv4 datagrams received with the TCP, UDP, or ICMP payload  "
        using Addr = Register::Address<0x40067210,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxipv4HdrerrFrms{    ///<"Number of IPv4 datagrams received with header errors (checksum, length, or version mismatch) "
        using Addr = Register::Address<0x40067214,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxipv4NopayFrms{    ///<"Number of IPv4 datagram frames received that did not have a TCP, UDP, or ICMP payload processed by the Checksum engine "
        using Addr = Register::Address<0x40067218,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxipv4FragFrms{    ///<Number of good IPv4 datagrams with fragmentation 
        using Addr = Register::Address<0x4006721c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxipv4UdsblFrms{    ///<Number of good IPv4 datagrams received that had a UDP payload with checksum disabled 
        using Addr = Register::Address<0x40067220,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxipv6GdFrms{    ///<"Number of good IPv6 datagrams received with TCP, UDP, or ICMP payloads "
        using Addr = Register::Address<0x40067224,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxipv6HdrerrFrms{    ///<Number of IPv6 datagrams received with header errors (length or version mismatch) 
        using Addr = Register::Address<0x40067228,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxipv6NopayFrms{    ///<"Number of IPv6 datagram frames received that did not have a TCP, UDP, or ICMP payload. This includes all IPv6 datagrams with fragmentation or security extension headers  "
        using Addr = Register::Address<0x4006722c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxudpGdFrms{    ///<Number of good IP datagrams with a good UDP payload. This counter is not updated when the rxipv4_udsbl_frms counter is incremented. 
        using Addr = Register::Address<0x40067230,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxudpErrFrms{    ///<Number of good IP datagrams whose UDP payload has a checksum error
        using Addr = Register::Address<0x40067234,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxtcpGdFrms{    ///<Number of good IP datagrams with a good TCP payload 
        using Addr = Register::Address<0x40067238,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxtcpErrFrms{    ///<Number of good IP datagrams whose TCP payload has a checksum error
        using Addr = Register::Address<0x4006723c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxicmpGdFrms{    ///<Number of good IP datagrams with a good ICMP payload 
        using Addr = Register::Address<0x40067240,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxicmpErrFrms{    ///<Number of good IP datagrams whose ICMP payload has a checksum error
        using Addr = Register::Address<0x40067244,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxipv4GdOctets{    ///<"Number of bytes received in good IPv4 datagrams encapsulating TCP, UDP, or ICMP data. (Ethernet header, FCS, pad, or IP pad bytes are not included in this counter or in the octet counters listed below).  "
        using Addr = Register::Address<0x40067250,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxipv4HdrerrOctets{    ///<"Number of bytes received in IPv4 datagrams with header errors (checksum, length, version mismatch). The value in the Length field of IPv4 header is used to update this counter. "
        using Addr = Register::Address<0x40067254,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxipv4NopayOctets{    ///<"Number of bytes received in IPv4 datagrams that did not have a TCP, UDP, or ICMP payload. The value in the IPv4 header's Length field is used to update this counter. "
        using Addr = Register::Address<0x40067258,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxipv4FragOctets{    ///<Number of bytes received in fragmented IPv4 datagrams. The value in the IPv4 header's Length field is used to update this counter. 
        using Addr = Register::Address<0x4006725c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxipv4UdsblOctets{    ///<Number of bytes received in a UDP segment that had the UDP checksum disabled. This counter does not count IP Header bytes. 
        using Addr = Register::Address<0x40067260,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxipv6GdOctets{    ///<"Number of bytes received in good IPv6 datagrams encapsulating TCP, UDP or ICMPv6 data"
        using Addr = Register::Address<0x40067264,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxipv6HdrerrOctets{    ///<"Number of bytes received in IPv6 datagrams with header errors (length, version mismatch). The value in the IPv6 header's Length field is used to update this counter.  "
        using Addr = Register::Address<0x40067268,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rxipv6NopayOctets{    ///<"Number of bytes received in IPv6 datagrams that did not have a TCP, UDP, or ICMP payload. The value in the IPv6 header's Length field is used to update this counter. "
        using Addr = Register::Address<0x4006726c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxudpGdOctets{    ///<Number of bytes received in a good UDP segment. This counter (and the counters below) does not count IP header bytes. 
        using Addr = Register::Address<0x40067270,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxudpErrOctets{    ///<Number of bytes received in a UDP segment that had checksum errors
        using Addr = Register::Address<0x40067274,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxtcpGdOctets{    ///<Number of bytes received in a good TCP segment 
        using Addr = Register::Address<0x40067278,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxtcpErrOctets{    ///<Number of bytes received in a TCP segment with checksum errors 
        using Addr = Register::Address<0x4006727c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxicmpGdOctets{    ///<Number of bytes received in a good ICMP segment 
        using Addr = Register::Address<0x40067280,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1RxicmpErrOctets{    ///<Number of bytes received in an ICMP segment with checksum errors
        using Addr = Register::Address<0x40067284,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Rgsr{    ///<RGMII Status Register)
        using Addr = Register::Address<0x400670d8,0xfffffff0,0x00000000,unsigned>;
        ///Link Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ls{}; 
        ///Link Speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lsp{}; 
        ///Link Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lm{}; 
    }
    namespace EthernetMac1Tscr{    ///<Time Stamp Control Register
        using Addr = Register::Address<0x40067700,0xfef800c0,0x00000000,unsigned>;
        ///Auxiliary Snapshot FIFO Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> atsfc{}; 
        ///Enable MAC address for PTP frame filtering
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tsenmf{}; 
        ///SelectPTP packets for taking snapshots
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> tsps{}; 
        ///Enable Snapshot for Messages Relevant to Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tsmrm{}; 
        ///Enable Time Stamp Snapshot for Event Messages
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tetsem{}; 
        ///Enable Time Stamp Snapshot for IPv4 frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tsip4e{}; 
        ///Enable Time Stamp Snapshot for IPv6 frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tsip6e{}; 
        ///Enable Time Stamp Snapshot for PTP over Ethernet frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tetsp{}; 
        ///Enable PTP packet snooping for version 2 format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tsv2e{}; 
        ///Time Stamp Digital or Binary rollover control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tsdb{}; 
        ///Enable Time Stamp for All Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tsea{}; 
        ///Addend Register Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> taru{}; 
        ///Time Stamp Interrupt Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tite{}; 
        ///Time Stamp Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tsu{}; 
        ///Time Stamp Initialize
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tsi{}; 
        ///Time Stamp Fine or Coarse Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tfcu{}; 
        ///Time Stamp Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tse{}; 
    }
    namespace EthernetMac1Ssir{    ///<Sub-Second Increment Register
        using Addr = Register::Address<0x40067704,0xffffff00,0x00000000,unsigned>;
        ///Sub-Second Increment Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ssinc{}; 
    }
    namespace EthernetMac1Stsr{    ///<System Time - Seconds Register
        using Addr = Register::Address<0x40067708,0x00000000,0x00000000,unsigned>;
        ///Time Stamp Second
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tss{}; 
    }
    namespace EthernetMac1Stnr{    ///<System Time - Nanoseconds Register
        using Addr = Register::Address<0x4006770c,0x80000000,0x00000000,unsigned>;
        ///Time Stamp Sub-Seconds
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tsss{}; 
    }
    namespace EthernetMac1Stsur{    ///<System Time - Seconds Update Register
        using Addr = Register::Address<0x40067710,0x00000000,0x00000000,unsigned>;
        ///Time Stamp Second
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tss{}; 
    }
    namespace EthernetMac1Stnur{    ///<System Time - Nanoseconds Update Register
        using Addr = Register::Address<0x40067714,0x00000000,0x00000000,unsigned>;
        ///Add or Subtract Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> addsub{}; 
        ///Time Stamp Sub-Seconds
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> tsss{}; 
    }
    namespace EthernetMac1Tsar{    ///<Time Stamp Addend Register
        using Addr = Register::Address<0x40067718,0x00000000,0x00000000,unsigned>;
        ///Time Stamp Addend Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsar{}; 
    }
    namespace EthernetMac1Ttsr{    ///<Target Time Seconds Register
        using Addr = Register::Address<0x4006771c,0x00000000,0x00000000,unsigned>;
        ///Target Time Stamp Seconds Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tstr{}; 
    }
    namespace EthernetMac1Ttnr{    ///<Target Time Nanoseconds Register
        using Addr = Register::Address<0x40067720,0x80000000,0x00000000,unsigned>;
        ///Target Time Stamp Nanoseconds Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> tstr{}; 
    }
    namespace EthernetMac1Sthwsr{    ///<System Time - Higher Word Seconds Register
        using Addr = Register::Address<0x40067724,0xffff0000,0x00000000,unsigned>;
        ///Time Stamp Higher Word Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tshwr{}; 
    }
    namespace EthernetMac1Tsr{    ///<Time Stamp Status Register
        using Addr = Register::Address<0x40067728,0xf0fffff0,0x00000000,unsigned>;
        ///Auxiliary Time Stamp Number of Snapshots
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> atsns{}; 
        ///Auxiliary Time Stamp Snapshot Trigger Missed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> atsstm{}; 
        ///Timestamp Target Time Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trgter{}; 
        ///Auxiliary Time Stamp Trigger Snapshot
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> atsts{}; 
        ///Time Stamp Target Time Reached
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tstart{}; 
        ///Time Stamp Seconds Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tssovf{}; 
    }
    namespace EthernetMac1Ppscr{    ///<PPS Control Register
        using Addr = Register::Address<0x4006772c,0xfffffff0,0x00000000,unsigned>;
        ///Controls the frequency of the PPS output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppsctrl{}; 
    }
    namespace EthernetMac1Atnr{    ///<Auxiliary Time Stamp - Nanoseconds Register
        using Addr = Register::Address<0x40067730,0x80000000,0x00000000,unsigned>;
        ///ATN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> atn{}; 
    }
    namespace EthernetMac1Atsr{    ///<Auxiliary Time Stamp - Seconds Register
        using Addr = Register::Address<0x40067734,0x00000000,0x00000000,unsigned>;
        ///ATS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ats{}; 
    }
    namespace EthernetMac1Mar16h{    ///<MAC Address16 Register -High
        using Addr = Register::Address<0x40067800,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar16l{    ///<MAC Address16 Register -Low
        using Addr = Register::Address<0x40067804,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar17h{    ///<MAC Address17 Register -High
        using Addr = Register::Address<0x40067808,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar17l{    ///<MAC Address17 Register -Low
        using Addr = Register::Address<0x4006780c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar18h{    ///<MAC Address18 Register -High
        using Addr = Register::Address<0x40067810,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar18l{    ///<MAC Address18 Register -Low
        using Addr = Register::Address<0x40067814,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar19h{    ///<MAC Address19 Register -High
        using Addr = Register::Address<0x40067818,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar19l{    ///<MAC Address19 Register -Low
        using Addr = Register::Address<0x4006781c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar20h{    ///<MAC Address20 Register -High
        using Addr = Register::Address<0x40067820,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar20l{    ///<MAC Address20 Register -Low
        using Addr = Register::Address<0x40067824,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar21h{    ///<MAC Address21 Register -High
        using Addr = Register::Address<0x40067828,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar21l{    ///<MAC Address21 Register -Low
        using Addr = Register::Address<0x4006782c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar22h{    ///<MAC Address22 Register -High
        using Addr = Register::Address<0x40067830,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar22l{    ///<MAC Address22 Register -Low
        using Addr = Register::Address<0x40067834,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar23h{    ///<MAC Address23 Register -High
        using Addr = Register::Address<0x40067838,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar23l{    ///<MAC Address23 Register -Low
        using Addr = Register::Address<0x4006783c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar24h{    ///<MAC Address24 Register -High
        using Addr = Register::Address<0x40067840,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar24l{    ///<MAC Address24 Register -Low
        using Addr = Register::Address<0x40067844,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar25h{    ///<MAC Address25 Register -High
        using Addr = Register::Address<0x40067848,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar25l{    ///<MAC Address25 Register -Low
        using Addr = Register::Address<0x4006784c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar26h{    ///<MAC Address26 Register -High
        using Addr = Register::Address<0x40067850,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar26l{    ///<MAC Address26 Register -Low
        using Addr = Register::Address<0x40067854,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar27h{    ///<MAC Address27 Register -High
        using Addr = Register::Address<0x40067858,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar27l{    ///<MAC Address27 Register -Low
        using Addr = Register::Address<0x4006785c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar28h{    ///<MAC Address28 Register -High
        using Addr = Register::Address<0x40067860,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar28l{    ///<MAC Address28 Register -Low
        using Addr = Register::Address<0x40067864,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar29h{    ///<MAC Address29 Register -High
        using Addr = Register::Address<0x40067868,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar29l{    ///<MAC Address29 Register -Low
        using Addr = Register::Address<0x4006786c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar30h{    ///<MAC Address30 Register -High
        using Addr = Register::Address<0x40067870,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar30l{    ///<MAC Address30 Register -Low
        using Addr = Register::Address<0x40067874,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar31h{    ///<MAC Address31 Register -High
        using Addr = Register::Address<0x40067878,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Mar31l{    ///<MAC Address31 Register -Low
        using Addr = Register::Address<0x4006787c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac1Bmr{    ///<Bus Mode Register
        using Addr = Register::Address<0x40068000,0xf0000000,0x00000000,unsigned>;
        ///Transmit Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> txpr{}; 
        ///Mixed Burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mb{}; 
        ///Address-Aligned Beats
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> aal{}; 
        ///8xPBL Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> 8xpbl{}; 
        ///Use Separate PBL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usp{}; 
        ///RxDMA PBL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,17),Register::ReadWriteAccess,unsigned> rpbl{}; 
        ///Fixed Burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fb{}; 
        ///Rx:Tx priority ratio
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pr{}; 
        ///Programmable Burst Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> pbl{}; 
        ///Alternate Descriptor Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> atds{}; 
        ///Descriptor Skip Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,2),Register::ReadWriteAccess,unsigned> dsl{}; 
        ///DMA Arbitration scheme
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> da{}; 
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swr{}; 
    }
    namespace EthernetMac1Tpdr{    ///<Transmit Poll Demand Register)
        using Addr = Register::Address<0x40068004,0x00000000,0x00000000,unsigned>;
        ///Transmit Poll Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tpd{}; 
    }
    namespace EthernetMac1Rpdr{    ///<Receive Poll Demand Register
        using Addr = Register::Address<0x40068008,0x00000000,0x00000000,unsigned>;
        ///Receive Poll Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rpd{}; 
    }
    namespace EthernetMac1Rdlar{    ///<Receive Descriptor List Address Register)
        using Addr = Register::Address<0x4006800c,0x00000003,0x00000000,unsigned>;
        ///Start of Receive List
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> srl31{}; 
        ///Bit30 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> srl30{}; 
        ///Bit29 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> srl29{}; 
        ///Bit28 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> srl28{}; 
        ///Bit27 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> srl27{}; 
        ///Bit26 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> srl26{}; 
        ///Bit25 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> srl25{}; 
        ///Bit24 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> srl24{}; 
        ///Bit23 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> srl23{}; 
        ///Bit22 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srl22{}; 
        ///Bit21 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> srl21{}; 
        ///Bit20 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> srl20{}; 
        ///Bit19 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> srl19{}; 
        ///Bit18 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> srl18{}; 
        ///Bit17 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> srl17{}; 
        ///Bit16 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srl16{}; 
        ///Bit15 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> srl15{}; 
        ///Bit14 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> srl14{}; 
        ///Bit13 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> srl13{}; 
        ///Bit12 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> srl12{}; 
        ///Bit11 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> srl11{}; 
        ///Bit10 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> srl10{}; 
        ///Bit9 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srl9{}; 
        ///Bit8 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srl8{}; 
        ///Bit7 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srl7{}; 
        ///Bit6 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srl6{}; 
        ///Bit5 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> srl5{}; 
        ///Bit4 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> srl4{}; 
        ///Bit3 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> srl3{}; 
        ///Bit2 of RDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srl2{}; 
    }
    namespace EthernetMac1Tdlar{    ///< Transmit Descriptor List Address Register
        using Addr = Register::Address<0x40068010,0x00000003,0x00000000,unsigned>;
        ///Start of Transmit List
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> stl31{}; 
        ///Bit30 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> stl30{}; 
        ///Bit29 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> stl29{}; 
        ///Bit28 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> stl28{}; 
        ///Bit27 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> stl27{}; 
        ///Bit26 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> stl26{}; 
        ///Bit25 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> stl25{}; 
        ///Bit24 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> stl24{}; 
        ///Bit23 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> stl23{}; 
        ///Bit22 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> stl22{}; 
        ///Bit21 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stl21{}; 
        ///Bit20 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> stl20{}; 
        ///Bit19 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stl19{}; 
        ///Bit18 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> stl18{}; 
        ///Bit17 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> stl17{}; 
        ///Bit16 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> stl16{}; 
        ///Bit15 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> stl15{}; 
        ///Bit14 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> stl14{}; 
        ///Bit13 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stl13{}; 
        ///Bit12 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> stl12{}; 
        ///Bit11 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> stl11{}; 
        ///Bit10 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> stl10{}; 
        ///Bit9 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stl9{}; 
        ///Bit8 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> stl8{}; 
        ///Bit7 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stl7{}; 
        ///Bit6 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stl6{}; 
        ///Bit5 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stl5{}; 
        ///Bit4 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> stl4{}; 
        ///Bit3 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stl3{}; 
        ///Bit2 of TDLAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stl2{}; 
    }
    namespace EthernetMac1Sr{    ///<Status Register
        using Addr = Register::Address<0x40068014,0x80001800,0x00000000,unsigned>;
        ///GMAC LPI Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> glpii{}; 
        ///Time-Stamp Trigger Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tti{}; 
        ///GMAC PMT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpi{}; 
        ///GMAC MMC Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gmi{}; 
        ///GMAC Line interface Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gli{}; 
        ///Error Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eb{}; 
        ///Transmit Process State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ts{}; 
        ///Receive Process State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rs{}; 
        ///Normal Interrupt Summary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nis{}; 
        ///Abnormal Interrupt Summary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ais{}; 
        ///Early Receive Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eri{}; 
        ///Fatal Bus Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fbi{}; 
        ///Early Transmit Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eti{}; 
        ///Receive Watchdog Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwt{}; 
        ///Receive process Stopped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rps{}; 
        ///Receive Buffer Unavailable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ru{}; 
        ///Receive Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ri{}; 
        ///Transmit underflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> unf{}; 
        ///Receive Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovf{}; 
        ///Transmit Jabber Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tjt{}; 
        ///Transmit Buffer Unavailable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tu{}; 
        ///Transmit Process Stopped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tps{}; 
        ///Transmit Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ti{}; 
    }
    namespace EthernetMac1Omr{    ///<Operation Mode Register
        using Addr = Register::Address<0x40068018,0xf8ce1f21,0x00000000,unsigned>;
        ///Disable Dropping of TCP/IP Checksum Error Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Receive Store and Forward
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rsf{}; 
        ///Disable Flushing of Received Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dff{}; 
        ///Transmit Store Forward
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tsf{}; 
        ///Flush Transmit FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ftf{}; 
        ///Transmit Threshold Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,14),Register::ReadWriteAccess,unsigned> ttc{}; 
        ///Start/Stop Transmission Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> st{}; 
        ///Forward Error Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fef{}; 
        ///Forward Undersized Good Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fuf{}; 
        ///Receive Threshold Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> rtc{}; 
        ///Operate on Second Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osf{}; 
        ///Start/Stop Receive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sr{}; 
    }
    namespace EthernetMac1Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x4006801c,0xfffe1800,0x00000000,unsigned>;
        ///Normal Interrupt Summary Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nie{}; 
        ///Abnormal Interrupt Summary Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> aie{}; 
        ///Early Receive Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ere{}; 
        ///Fatal Bus Error Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbe{}; 
        ///Early Transmit Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ete{}; 
        ///Receive Watchdog Timeout Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rwe{}; 
        ///Receive Process Stopped Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rse{}; 
        ///Receive Buffer Unavailable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rue{}; 
        ///Receive Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rie{}; 
        ///Transmit underflow Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> une{}; 
        ///Receive Overflow Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ove{}; 
        ///Transmit Jabber Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tje{}; 
        ///Transmit Buffer Unavailable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tue{}; 
        ///Transmit Process Stopped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tse{}; 
        ///Transmit Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tie{}; 
    }
    namespace EthernetMac1Mfbocr{    ///<Missed Frame and Buffer Overflow Counter Register
        using Addr = Register::Address<0x40068020,0xe0000000,0x00000000,unsigned>;
        ///Overflow NMFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> onmff{}; 
        ///Number of Missed frame by Ethernet-MAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nmff{}; 
        ///Overflow NMFH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> onmfh{}; 
        ///Number of Missed frame by HOST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nmfh{}; 
    }
    namespace EthernetMac1Riwtr{    ///<Receive Interrupt Watchdog Timer Register
        using Addr = Register::Address<0x40068024,0xffffff00,0x00000000,unsigned>;
        ///RI Watchdog Timer count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> riwt{}; 
    }
    namespace EthernetMac1Ahbsr{    ///<AHB Status Register
        using Addr = Register::Address<0x4006802c,0xfffffffe,0x00000000,unsigned>;
        ///AHB Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ahbs{}; 
    }
    namespace EthernetMac1Chtdr{    ///<Current Host Transmit Descriptor Register
        using Addr = Register::Address<0x40068048,0x00000000,0x00000000,unsigned>;
        ///Host Transmit Descriptor Address Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> htdap{}; 
    }
    namespace EthernetMac1Chrdr{    ///<Current Host Receive Descriptor Register
        using Addr = Register::Address<0x4006804c,0x00000000,0x00000000,unsigned>;
        ///Host Receive Descriptor Address Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hrdap{}; 
    }
    namespace EthernetMac1Chtbar{    ///<Current Host Transmit Buffer Address Register
        using Addr = Register::Address<0x40068050,0x00000000,0x00000000,unsigned>;
        ///Host Transmit Buffer Address Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> htbar{}; 
    }
    namespace EthernetMac1Chrbar{    ///<Current Host Receive Buffer Address Register
        using Addr = Register::Address<0x40068054,0x00000000,0x00000000,unsigned>;
        ///Host Receive Buffer Address Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hrbar{}; 
    }
}
