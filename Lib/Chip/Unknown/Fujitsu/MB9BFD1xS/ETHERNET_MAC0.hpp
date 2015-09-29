#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Ethernet-MAC 0
    namespace Nonemcr{    ///<MAC Configuration Register
        using Addr = Register::Address<0x40064000,0xfc000003,0,unsigned>;
        ///CRC stripping for Type frames
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cst{}; 
        ///Transmit Configuration in RGMII
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tc{}; 
        ///Watchdog Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> wd{}; 
        ///Jabber Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> jd{}; 
        ///Frame Burst Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> be{}; 
        ///Jumbo Frame Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> je{}; 
        ///Inter-Frame GAP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> ifg{}; 
        ///Disable Carrier Sense During Transaction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dcrs{}; 
        ///Port Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ps{}; 
        ///Speed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fes{}; 
        ///Disable Receive Own
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> do_{}; 
        ///Loop-back Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lm{}; 
        ///Duplex mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dm{}; 
        ///Checksum Offload
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ipc{}; 
        ///Disable Retry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dr{}; 
        ///Link Up/Down in RGMII
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lud{}; 
        ///Automatic Pad/CRC Stripping
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> acs{}; 
        ///Back-off Limit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> bl{}; 
        ///Deferral Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dc{}; 
        ///Transmitter Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> te{}; 
        ///Receiver Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> re{}; 
    }
    namespace Nonemffr{    ///<MAC Frame Filter Register
        using Addr = Register::Address<0x40064004,0x7ffff800,0,unsigned>;
        ///Receive All
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ra{}; 
        ///Hash or Perfect Filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hpf{}; 
        ///Source Address Filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> saf{}; 
        ///Source Address Inverse Filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> saif{}; 
        ///Pass Control Frames
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pcf{}; 
        ///Disable Broadcast Frames
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> db{}; 
        ///Pass All Multicast
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pm{}; 
        ///DA Inverse Filtering
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> daif{}; 
        ///Hash Multicast
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hmc{}; 
        ///Hash Unicast
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> huc{}; 
        ///Promiscuous Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pr{}; 
    }
    namespace Nonemhtrh{    ///<MAC Hash Table Register (High)
        using Addr = Register::Address<0x40064008,0x00000000,0,unsigned>;
        ///the upper 32 bits of the hash table in the HTH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hth{}; 
    }
    namespace Nonemhtrl{    ///<MAC Hash Table Register (Low)
        using Addr = Register::Address<0x4006400c,0x00000000,0,unsigned>;
        ///the lower 32 bits of the hash table in the HTL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htl{}; 
    }
    namespace Nonegar{    ///<GMII/MII Address Register
        using Addr = Register::Address<0x40064010,0xffff0000,0,unsigned>;
        ///Physical Layer Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> pa{}; 
        ///GMII Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> gr{}; 
        ///Application Clock Range
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> cr{}; 
        ///GMII/MII Write
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gw{}; 
        ///GMII/MII Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gb{}; 
    }
    namespace Nonegdr{    ///<GMII/MII Data Register
        using Addr = Register::Address<0x40064014,0xffff0000,0,unsigned>;
        ///GMII/MII Data Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gd{}; 
    }
    namespace Nonefcr{    ///<Flow Control Register
        using Addr = Register::Address<0x40064018,0x0000ff40,0,unsigned>;
        ///Pause Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> pt{}; 
        ///Disable Zero-Quanta Pause
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dzpq{}; 
        ///Pause Low Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> plt{}; 
        ///Unicast Pause Frame detect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> up{}; 
        ///Receive Flow Control Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rfe{}; 
        ///Transmit Flow Control Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tfe{}; 
        ///Flow Control Busy/Backpressure Activate
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcbBpa{}; 
    }
    namespace Nonevtr{    ///<VLAN TAG Register
        using Addr = Register::Address<0x4006401c,0xfffe0000,0,unsigned>;
        ///Enable 12-Bit VLAN Tag Comparison
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> etv{}; 
        ///VLAN Tag Identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> vl{}; 
    }
    namespace Nonerwffr{    ///<Remote Wake-up Frame Filter Register
        using Addr = Register::Address<0x40064028,0x00000000,0,unsigned>;
        ///Remote Wake-up Frame Filter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rwffr31{}; 
    }
    namespace Nonepmtr{    ///<PMT Register
        using Addr = Register::Address<0x4006402c,0x7ffffd98,0,unsigned>;
        ///Remote Wake-up Frame Filter Register Pointer Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> rwffrpr{}; 
        ///Global Unicast
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gu{}; 
        ///Wake Up Frame Receive
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wpr{}; 
        ///Magic Packet Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mpr{}; 
        ///Wake-Up Frame Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wfe{}; 
        ///Magic Packet Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mpe{}; 
        ///Power Down
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd{}; 
    }
    namespace Nonelpicsr{    ///<LPI Control and Status Register
        using Addr = Register::Address<0x40064030,0xfff0fcf0,0,unsigned>;
        ///LPI TX Automate
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> lpitxa{}; 
        ///PHY Link Status Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> plsen{}; 
        ///PHY Link Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pls{}; 
        ///LPI Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lpien{}; 
        ///Receive LPI State
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rlpist{}; 
        ///Transmit LPI State
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tlpist{}; 
        ///Receive LPI Exit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rlpiex{}; 
        ///Receive LPI Entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rlpien{}; 
        ///Transmit LPI Exit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tlpiex{}; 
        ///Transmit LPI Entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tlpien{}; 
    }
    namespace Nonelpitcr{    ///<LPI Timers Control Register
        using Addr = Register::Address<0x40064034,0xfc000000,0,unsigned>;
        ///LPI LS TIMER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> lit{}; 
        ///LPI TW TIMER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> twt{}; 
    }
    namespace Noneisr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40064038,0xfffff906,0,unsigned>;
        ///LPI Interrupt Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lpiis{}; 
        ///Time Stamp Interrupt Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tsis{}; 
        ///MMC Receive Checksum Offload Interrupt Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cois{}; 
        ///MMC Transmit Interrupt Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tis{}; 
        ///MMC Receive Interrupt Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ris{}; 
        ///MMC Interrupt Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mis{}; 
        ///PMT Interrupt Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pis{}; 
        ///RGMII Interrupt Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rgis{}; 
    }
    namespace Noneimr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x4006403c,0xffffff96,0,unsigned>;
        ///LPI Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lpiim{}; 
        ///Time Stamp Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tsim{}; 
        ///PMT Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pim{}; 
        ///RGMII Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rgim{}; 
    }
    namespace Nonemar0h{    ///<MAC Address0 Register (High)
        using Addr = Register::Address<0x40064040,0x7fff0000,0,unsigned>;
        ///Must be one
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mo{}; 
        ///AD[47]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> a47{}; 
        ///AD[46]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> a46{}; 
        ///AD[45]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> a45{}; 
        ///AD[44]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> a44{}; 
        ///AD[43]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> a43{}; 
        ///AD[42]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> a42{}; 
        ///AD[41]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> a41{}; 
        ///AD[40]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> a40{}; 
        ///AD[39]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> a39{}; 
        ///AD[38]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> a38{}; 
        ///AD[37]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> a37{}; 
        ///AD[36]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> a36{}; 
        ///AD[35]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> a35{}; 
        ///AD[34]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a34{}; 
        ///AD[33]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> a33{}; 
        ///AD[32]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> a32{}; 
    }
    namespace Nonemar0l{    ///<MAC Address0 Register (Low)
        using Addr = Register::Address<0x40064044,0x00000000,0,unsigned>;
        ///AD[31]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> a31{}; 
        ///AD[30]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> a30{}; 
        ///AD[29]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> a29{}; 
        ///AD[28]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> a28{}; 
        ///AD[27]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> a27{}; 
        ///AD[26]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> a26{}; 
        ///AD[25]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> a25{}; 
        ///AD[24]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> a24{}; 
        ///AD[23]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> a23{}; 
        ///AD[22]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> a22{}; 
        ///AD[21]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> a21{}; 
        ///AD[20]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> a20{}; 
        ///AD[19]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> a19{}; 
        ///AD[18]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> a18{}; 
        ///AD[17]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> a17{}; 
        ///AD[16]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> a16{}; 
        ///AD[15]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> a15{}; 
        ///AD[14]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> a14{}; 
        ///AD[13]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> a13{}; 
        ///AD[12]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> a12{}; 
        ///AD[11]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> a11{}; 
        ///AD[10]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> a10{}; 
        ///AD[9]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> a9{}; 
        ///AD[8]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> a8{}; 
        ///AD[7]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> a7{}; 
        ///AD[6]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> a6{}; 
        ///AD[5]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> a5{}; 
        ///AD[4]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> a4{}; 
        ///AD[3]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> a3{}; 
        ///AD[2]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a2{}; 
        ///AD[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> a1{}; 
        ///AD[0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> a0{}; 
    }
    namespace Nonemar1h{    ///<MAC Address1 Register -High
        using Addr = Register::Address<0x40064048,0x00ff0000,0,unsigned>;
        ///Address Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ae{}; 
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sa{}; 
        ///Mask Byte Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> mbc{}; 
        ///AD[47]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> a47{}; 
        ///AD[46]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> a46{}; 
        ///AD[45]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> a45{}; 
        ///AD[44]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> a44{}; 
        ///AD[43]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> a43{}; 
        ///AD[42]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> a42{}; 
        ///AD[41]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> a41{}; 
        ///AD[40]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> a40{}; 
        ///AD[39]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> a39{}; 
        ///AD[38]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> a38{}; 
        ///AD[37]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> a37{}; 
        ///AD[36]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> a36{}; 
        ///AD[35]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> a35{}; 
        ///AD[34]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a34{}; 
        ///AD[33]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> a33{}; 
        ///AD[32]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> a32{}; 
    }
    namespace Nonemar1l{    ///<MAC Address1 Register -Low
        using Addr = Register::Address<0x4006404c,0x00000000,0,unsigned>;
        ///AD[31]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> a31{}; 
        ///AD[30]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> a30{}; 
        ///AD[29]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> a29{}; 
        ///AD[28]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> a28{}; 
        ///AD[27]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> a27{}; 
        ///AD[26]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> a26{}; 
        ///AD[25]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> a25{}; 
        ///AD[24]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> a24{}; 
        ///AD[23]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> a23{}; 
        ///AD[22]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> a22{}; 
        ///AD[21]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> a21{}; 
        ///AD[20]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> a20{}; 
        ///AD[19]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> a19{}; 
        ///AD[18]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> a18{}; 
        ///AD[17]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> a17{}; 
        ///AD[16]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> a16{}; 
        ///AD[15]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> a15{}; 
        ///AD[14]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> a14{}; 
        ///AD[13]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> a13{}; 
        ///AD[12]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> a12{}; 
        ///AD[11]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> a11{}; 
        ///AD[10]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> a10{}; 
        ///AD[9]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> a9{}; 
        ///AD[8]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> a8{}; 
        ///AD[7]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> a7{}; 
        ///AD[6]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> a6{}; 
        ///AD[5]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> a5{}; 
        ///AD[4]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> a4{}; 
        ///AD[3]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> a3{}; 
        ///AD[2]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a2{}; 
        ///AD[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> a1{}; 
        ///AD[0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> a0{}; 
    }
    namespace Nonemar2h{    ///<MAC Address2 Register -High
        using Addr = Register::Address<0x40064050,0xffffffff,0,unsigned>;
    }
    namespace Nonemar2l{    ///<MAC Address2 Register -Low
        using Addr = Register::Address<0x40064054,0xffffffff,0,unsigned>;
    }
    namespace Nonemar3h{    ///<MAC Address3 Register -High
        using Addr = Register::Address<0x40064058,0xffffffff,0,unsigned>;
    }
    namespace Nonemar3l{    ///<MAC Address3 Register -Low
        using Addr = Register::Address<0x4006405c,0xffffffff,0,unsigned>;
    }
    namespace Nonemar4h{    ///<MAC Address4 Register -High
        using Addr = Register::Address<0x40064060,0xffffffff,0,unsigned>;
    }
    namespace Nonemar4l{    ///<MAC Address4 Register -Low
        using Addr = Register::Address<0x40064064,0xffffffff,0,unsigned>;
    }
    namespace Nonemar5h{    ///<MAC Address5 Register -High
        using Addr = Register::Address<0x40064068,0xffffffff,0,unsigned>;
    }
    namespace Nonemar5l{    ///<MAC Address5 Register -Low
        using Addr = Register::Address<0x4006406c,0xffffffff,0,unsigned>;
    }
    namespace Nonemar6h{    ///<MAC Address6 Register -High
        using Addr = Register::Address<0x40064070,0xffffffff,0,unsigned>;
    }
    namespace Nonemar6l{    ///<MAC Address6 Register -Low
        using Addr = Register::Address<0x40064074,0xffffffff,0,unsigned>;
    }
    namespace Nonemar7h{    ///<MAC Address7 Register -High
        using Addr = Register::Address<0x40064078,0xffffffff,0,unsigned>;
    }
    namespace Nonemar7l{    ///<MAC Address7 Register -Low
        using Addr = Register::Address<0x4006407c,0xffffffff,0,unsigned>;
    }
    namespace Nonemar8h{    ///<MAC Address8 Register -High
        using Addr = Register::Address<0x40064080,0xffffffff,0,unsigned>;
    }
    namespace Nonemar8l{    ///<MAC Address8 Register -Low
        using Addr = Register::Address<0x40064084,0xffffffff,0,unsigned>;
    }
    namespace Nonemar9h{    ///<MAC Address9 Register -High
        using Addr = Register::Address<0x40064088,0xffffffff,0,unsigned>;
    }
    namespace Nonemar9l{    ///<MAC Address9 Register -Low
        using Addr = Register::Address<0x4006408c,0xffffffff,0,unsigned>;
    }
    namespace Nonemar10h{    ///<MAC Address10 Register -High
        using Addr = Register::Address<0x40064090,0xffffffff,0,unsigned>;
    }
    namespace Nonemar10l{    ///<MAC Address10 Register -Low
        using Addr = Register::Address<0x40064094,0xffffffff,0,unsigned>;
    }
    namespace Nonemar11h{    ///<MAC Address11 Register -High
        using Addr = Register::Address<0x40064098,0xffffffff,0,unsigned>;
    }
    namespace Nonemar11l{    ///<MAC Address11 Register -Low
        using Addr = Register::Address<0x4006409c,0xffffffff,0,unsigned>;
    }
    namespace Nonemar12h{    ///<MAC Address12 Register -High
        using Addr = Register::Address<0x400640a0,0xffffffff,0,unsigned>;
    }
    namespace Nonemar12l{    ///<MAC Address12 Register -Low
        using Addr = Register::Address<0x400640a4,0xffffffff,0,unsigned>;
    }
    namespace Nonemar13h{    ///<MAC Address13 Register -High
        using Addr = Register::Address<0x400640a8,0xffffffff,0,unsigned>;
    }
    namespace Nonemar13l{    ///<MAC Address13 Register -Low
        using Addr = Register::Address<0x400640ac,0xffffffff,0,unsigned>;
    }
    namespace Nonemar14h{    ///<MAC Address14 Register -High
        using Addr = Register::Address<0x400640b0,0xffffffff,0,unsigned>;
    }
    namespace Nonemar14l{    ///<MAC Address14 Register -Low
        using Addr = Register::Address<0x400640b4,0xffffffff,0,unsigned>;
    }
    namespace Nonemar15h{    ///<MAC Address15 Register -High
        using Addr = Register::Address<0x400640b8,0xffffffff,0,unsigned>;
    }
    namespace Nonemar15l{    ///<MAC Address15 Register -Low
        using Addr = Register::Address<0x400640bc,0xffffffff,0,unsigned>;
    }
    namespace NonemmcCntl{    ///<MMC Control Register
        using Addr = Register::Address<0x40064100,0xffffffff,0,unsigned>;
    }
    namespace NonemmcIntrRx{    ///<Receive Interrupt Register
        using Addr = Register::Address<0x40064104,0xffffffff,0,unsigned>;
    }
    namespace NonemmcIntrTx{    ///<MMC Transmit Interrupt Register 
        using Addr = Register::Address<0x40064108,0xffffffff,0,unsigned>;
    }
    namespace NonemmcIntrMaskRx{    ///<MMC Receive Interrupt Mask Register
        using Addr = Register::Address<0x4006410c,0xffffffff,0,unsigned>;
    }
    namespace NonemmcIntrMaskTx{    ///<MMC Transmit Interrupt Mask Register 
        using Addr = Register::Address<0x40064110,0xffffffff,0,unsigned>;
    }
    namespace NonetxoctetcountGb{    ///<"Number of bytes transmitted, exclusive of preamble and retried bytes, in good and bad frames"
        using Addr = Register::Address<0x40064114,0xffffffff,0,unsigned>;
    }
    namespace NonetxframecountGb{    ///<"Number of good and bad frames transmitted, exclusive of retried frames"
        using Addr = Register::Address<0x40064118,0xffffffff,0,unsigned>;
    }
    namespace NonetxbroadcastframesG{    ///<Number of good broadcast frames transmitted
        using Addr = Register::Address<0x4006411c,0xffffffff,0,unsigned>;
    }
    namespace NonetxmulticastframesG{    ///<Number of good multicast frames transmitted
        using Addr = Register::Address<0x40064120,0xffffffff,0,unsigned>;
    }
    namespace Nonetx64octetsGb{    ///<"Number of good and bad frames transmitted with length of 64 bytes, exclusive of preamble and retried frames"
        using Addr = Register::Address<0x40064124,0xffffffff,0,unsigned>;
    }
    namespace Nonetx65to127octetsGb{    ///<"Number of good and bad frames transmitted with length between 65 and 127 (inclusive) bytes, exclusive of preamble and retried frames"
        using Addr = Register::Address<0x40064128,0xffffffff,0,unsigned>;
    }
    namespace Nonetx128to255octetsGb{    ///<"Number of good and bad frames transmitted with length between 128 and 255 (inclusive) bytes, exclusive of preamble and retried frames"
        using Addr = Register::Address<0x4006412c,0xffffffff,0,unsigned>;
    }
    namespace Nonetx256to511octetsGb{    ///<"Number of good and bad frames transmitted with length between 256 and 511 (inclusive) bytes, exclusive of preamble and retried frames"
        using Addr = Register::Address<0x40064130,0xffffffff,0,unsigned>;
    }
    namespace Nonetx512to1023octetsGb{    ///<"Number of good and bad frames transmitted with length between 512 and 1023 (inclusive) bytes, exclusive of preamble and retried frames"
        using Addr = Register::Address<0x40064134,0xffffffff,0,unsigned>;
    }
    namespace Nonetx1024tomaxoctetsGb{    ///<"Number of good and bad frames transmitted with length between 1024 and Maxsize (inclusive) bytes, exclusive of preamble and retried frames"
        using Addr = Register::Address<0x40064138,0xffffffff,0,unsigned>;
    }
    namespace NonetxunicastframesGb{    ///<Number of good and bad unicast frames transmitted
        using Addr = Register::Address<0x4006413c,0xffffffff,0,unsigned>;
    }
    namespace NonetxmulticastframesGb{    ///<Number of good and bad multicast frames transmitted
        using Addr = Register::Address<0x40064140,0xffffffff,0,unsigned>;
    }
    namespace NonetxbroadcastframesGb{    ///<Number of good and bad broadcast frames transmitted
        using Addr = Register::Address<0x40064144,0xffffffff,0,unsigned>;
    }
    namespace Nonetxunderflowerror{    ///<Number of frames aborted due to frame underflow error
        using Addr = Register::Address<0x40064148,0xffffffff,0,unsigned>;
    }
    namespace NonetxsinglecolG{    ///<Number of successfully transmitted frames after a single collision in Half-duplex mode 
        using Addr = Register::Address<0x4006414c,0xffffffff,0,unsigned>;
    }
    namespace NonetxmulticolG{    ///<Number of successfully transmitted frames after more than a single collision in Half-duplex mode
        using Addr = Register::Address<0x40064150,0xffffffff,0,unsigned>;
    }
    namespace Nonetxdeferred{    ///<Number of successfully transmitted frames after a deferral in Half-duplex mode.
        using Addr = Register::Address<0x40064154,0xffffffff,0,unsigned>;
    }
    namespace Nonetxlatecol{    ///<Number of frames aborted due to late collision error. 
        using Addr = Register::Address<0x40064158,0xffffffff,0,unsigned>;
    }
    namespace Nonetxexesscol{    ///<Number of frames aborted due to excessive (16) collision errors. 
        using Addr = Register::Address<0x4006415c,0xffffffff,0,unsigned>;
    }
    namespace Nonetxcarriererror{    ///<Number of frames aborted due to carrier sense error (no carrier or loss of carrier).  
        using Addr = Register::Address<0x40064160,0xffffffff,0,unsigned>;
    }
    namespace NonetxoctetcountG{    ///<"Number of bytes transmitted, exclusive of preamble, in good frames only. "
        using Addr = Register::Address<0x40064164,0xffffffff,0,unsigned>;
    }
    namespace NonetxframecountG{    ///<Number of good frames transmitted. 
        using Addr = Register::Address<0x40064168,0xffffffff,0,unsigned>;
    }
    namespace NonetxexecessdefG{    ///<Number of frames aborted due to excessive deferral error (deferred for more than two max-sized frame times).
        using Addr = Register::Address<0x4006416c,0xffffffff,0,unsigned>;
    }
    namespace Nonetxpauseframes{    ///<Number of good PAUSE frames transmitted. 
        using Addr = Register::Address<0x40064170,0xffffffff,0,unsigned>;
    }
    namespace NonetxvlanframesG{    ///<"Number of good VLAN frames transmitted, exclusive of retried frames. "
        using Addr = Register::Address<0x40064174,0xffffffff,0,unsigned>;
    }
    namespace NonerxframecountGb{    ///<Number of good and bad frames received. 
        using Addr = Register::Address<0x40064180,0xffffffff,0,unsigned>;
    }
    namespace NonerxoctetcountGb{    ///<"Number of bytes received, exclusive of preamble, in good and bad frames.  "
        using Addr = Register::Address<0x40064184,0xffffffff,0,unsigned>;
    }
    namespace NonerxoctetcountG{    ///<"Number of bytes received, exclusive of preamble, only in good frames. "
        using Addr = Register::Address<0x40064188,0xffffffff,0,unsigned>;
    }
    namespace NonerxbroadcastframesG{    ///<Number of good broadcast frames received. 
        using Addr = Register::Address<0x4006418c,0xffffffff,0,unsigned>;
    }
    namespace NonerxmulticastframesG{    ///<Number of good multicast frames received. 
        using Addr = Register::Address<0x40064190,0xffffffff,0,unsigned>;
    }
    namespace Nonerxcrcerror{    ///<Number of frames received with CRC error. 
        using Addr = Register::Address<0x40064194,0xffffffff,0,unsigned>;
    }
    namespace Nonerxallignmenterror{    ///<Number of frames received with alignment (dribble) error. Valid only in 10/100 mode. 
        using Addr = Register::Address<0x40064198,0xffffffff,0,unsigned>;
    }
    namespace Nonerxrunterror{    ///<Number of frames received with runt (64 bytes and CRC error) error. 
        using Addr = Register::Address<0x4006419c,0xffffffff,0,unsigned>;
    }
    namespace Nonerxjabbererror{    ///<Number of frames received with length greater than 1518 bytes with CRC error. 
        using Addr = Register::Address<0x400641a0,0xffffffff,0,unsigned>;
    }
    namespace NonerxundersizeG{    ///<"Number of frames received with length less than 64 bytes, without any errors.  "
        using Addr = Register::Address<0x400641a4,0xffffffff,0,unsigned>;
    }
    namespace NonerxoversizeG{    ///<Number of frames received with length greater than the maxsize without error. 
        using Addr = Register::Address<0x400641a8,0xffffffff,0,unsigned>;
    }
    namespace Nonerx64octetsGb{    ///<"Number of good and bad frames received with length 64 bytes, exclusive of preamble. "
        using Addr = Register::Address<0x400641ac,0xffffffff,0,unsigned>;
    }
    namespace Nonerx65to127octetsGb{    ///<"Number of good and bad frames received with length between 65 and 127 (inclusive) bytes, exclusive of preamble.  "
        using Addr = Register::Address<0x400641b0,0xffffffff,0,unsigned>;
    }
    namespace Nonerx128to255octetsGb{    ///<"Number of good and bad frames received with length between 128 and 255 (inclusive) bytes, exclusive of preamble.  "
        using Addr = Register::Address<0x400641b4,0xffffffff,0,unsigned>;
    }
    namespace Nonerx256to511octetsGb{    ///<"Number of good and bad frames received with length between 256 and 511 (inclusive) bytes, exclusive of preamble.  "
        using Addr = Register::Address<0x400641b8,0xffffffff,0,unsigned>;
    }
    namespace Nonerx512to1023octetsGb{    ///<"Number of good and bad frames received with length between 512 and 1023 (inclusive) bytes, exclusive of preamble.  "
        using Addr = Register::Address<0x400641bc,0xffffffff,0,unsigned>;
    }
    namespace Nonerx1024tomaxoctetsGb{    ///<"Number of good and bad frames received with length between 1024 and maxsize (inclusive) bytes, exclusive of preamble. "
        using Addr = Register::Address<0x400641c0,0xffffffff,0,unsigned>;
    }
    namespace NonerxunicastframesG{    ///<Number of good unicast frames received. 
        using Addr = Register::Address<0x400641c4,0xffffffff,0,unsigned>;
    }
    namespace Nonerxlengtherror{    ///<"Number of frames received with length error (Length type field is not the frame size), for all frames with valid length field. "
        using Addr = Register::Address<0x400641c8,0xffffffff,0,unsigned>;
    }
    namespace Nonerxoutofrangetype{    ///<Number of frames received with length/type field not equal to the valid frame size (>1500) 
        using Addr = Register::Address<0x400641cc,0xffffffff,0,unsigned>;
    }
    namespace Nonerxpauseframes{    ///<Number of good and valid PAUSE frames received. 
        using Addr = Register::Address<0x400641d0,0xffffffff,0,unsigned>;
    }
    namespace Nonerxfifooverflow{    ///<Number of missed received frames due to FIFO overflow. 
        using Addr = Register::Address<0x400641d4,0xffffffff,0,unsigned>;
    }
    namespace NonerxvlanframesGb{    ///<Number of good and bad VLAN frames received. 
        using Addr = Register::Address<0x400641d8,0xffffffff,0,unsigned>;
    }
    namespace Nonerxwatchdogerror{    ///<Number of frames received with error due to watchdog timeout error (frames with a data load larger than 2048 bytes). 
        using Addr = Register::Address<0x400641dc,0xffffffff,0,unsigned>;
    }
    namespace NonemmcIpcIntrMaskRx{    ///<MMC Receive Checksum Offload Interrupt Mask Register
        using Addr = Register::Address<0x40064200,0xffffffff,0,unsigned>;
    }
    namespace NonemmcIpcIntrRx{    ///<MMC Receive Checksum Offload Interrupt Register
        using Addr = Register::Address<0x40064208,0xffffffff,0,unsigned>;
    }
    namespace Nonerxipv4GdFrms{    ///<"Number of good IPv4 datagrams received with the TCP, UDP, or ICMP payload  "
        using Addr = Register::Address<0x40064210,0xffffffff,0,unsigned>;
    }
    namespace Nonerxipv4HdrerrFrms{    ///<"Number of IPv4 datagrams received with header errors (checksum, length, or version mismatch) "
        using Addr = Register::Address<0x40064214,0xffffffff,0,unsigned>;
    }
    namespace Nonerxipv4NopayFrms{    ///<"Number of IPv4 datagram frames received that did not have a TCP, UDP, or ICMP payload processed by the Checksum engine "
        using Addr = Register::Address<0x40064218,0xffffffff,0,unsigned>;
    }
    namespace Nonerxipv4FragFrms{    ///<Number of good IPv4 datagrams with fragmentation 
        using Addr = Register::Address<0x4006421c,0xffffffff,0,unsigned>;
    }
    namespace Nonerxipv4UdsblFrms{    ///<Number of good IPv4 datagrams received that had a UDP payload with checksum disabled 
        using Addr = Register::Address<0x40064220,0xffffffff,0,unsigned>;
    }
    namespace Nonerxipv6GdFrms{    ///<"Number of good IPv6 datagrams received with TCP, UDP, or ICMP payloads "
        using Addr = Register::Address<0x40064224,0xffffffff,0,unsigned>;
    }
    namespace Nonerxipv6HdrerrFrms{    ///<Number of IPv6 datagrams received with header errors (length or version mismatch) 
        using Addr = Register::Address<0x40064228,0xffffffff,0,unsigned>;
    }
    namespace Nonerxipv6NopayFrms{    ///<"Number of IPv6 datagram frames received that did not have a TCP, UDP, or ICMP payload. This includes all IPv6 datagrams with fragmentation or security extension headers  "
        using Addr = Register::Address<0x4006422c,0xffffffff,0,unsigned>;
    }
    namespace NonerxudpGdFrms{    ///<Number of good IP datagrams with a good UDP payload. This counter is not updated when the rxipv4_udsbl_frms counter is incremented. 
        using Addr = Register::Address<0x40064230,0xffffffff,0,unsigned>;
    }
    namespace NonerxudpErrFrms{    ///<Number of good IP datagrams whose UDP payload has a checksum error
        using Addr = Register::Address<0x40064234,0xffffffff,0,unsigned>;
    }
    namespace NonerxtcpGdFrms{    ///<Number of good IP datagrams with a good TCP payload 
        using Addr = Register::Address<0x40064238,0xffffffff,0,unsigned>;
    }
    namespace NonerxtcpErrFrms{    ///<Number of good IP datagrams whose TCP payload has a checksum error
        using Addr = Register::Address<0x4006423c,0xffffffff,0,unsigned>;
    }
    namespace NonerxicmpGdFrms{    ///<Number of good IP datagrams with a good ICMP payload 
        using Addr = Register::Address<0x40064240,0xffffffff,0,unsigned>;
    }
    namespace NonerxicmpErrFrms{    ///<Number of good IP datagrams whose ICMP payload has a checksum error
        using Addr = Register::Address<0x40064244,0xffffffff,0,unsigned>;
    }
    namespace Nonerxipv4GdOctets{    ///<"Number of bytes received in good IPv4 datagrams encapsulating TCP, UDP, or ICMP data. (Ethernet header, FCS, pad, or IP pad bytes are not included in this counter or in the octet counters listed below).  "
        using Addr = Register::Address<0x40064250,0xffffffff,0,unsigned>;
    }
    namespace Nonerxipv4HdrerrOctets{    ///<"Number of bytes received in IPv4 datagrams with header errors (checksum, length, version mismatch). The value in the Length field of IPv4 header is used to update this counter. "
        using Addr = Register::Address<0x40064254,0xffffffff,0,unsigned>;
    }
    namespace Nonerxipv4NopayOctets{    ///<"Number of bytes received in IPv4 datagrams that did not have a TCP, UDP, or ICMP payload. The value in the IPv4 header's Length field is used to update this counter. "
        using Addr = Register::Address<0x40064258,0xffffffff,0,unsigned>;
    }
    namespace Nonerxipv4FragOctets{    ///<Number of bytes received in fragmented IPv4 datagrams. The value in the IPv4 header's Length field is used to update this counter. 
        using Addr = Register::Address<0x4006425c,0xffffffff,0,unsigned>;
    }
    namespace Nonerxipv4UdsblOctets{    ///<Number of bytes received in a UDP segment that had the UDP checksum disabled. This counter does not count IP Header bytes. 
        using Addr = Register::Address<0x40064260,0xffffffff,0,unsigned>;
    }
    namespace Nonerxipv6GdOctets{    ///<"Number of bytes received in good IPv6 datagrams encapsulating TCP, UDP or ICMPv6 data"
        using Addr = Register::Address<0x40064264,0xffffffff,0,unsigned>;
    }
    namespace Nonerxipv6HdrerrOctets{    ///<"Number of bytes received in IPv6 datagrams with header errors (length, version mismatch). The value in the IPv6 header's Length field is used to update this counter.  "
        using Addr = Register::Address<0x40064268,0xffffffff,0,unsigned>;
    }
    namespace Nonerxipv6NopayOctets{    ///<"Number of bytes received in IPv6 datagrams that did not have a TCP, UDP, or ICMP payload. The value in the IPv6 header's Length field is used to update this counter. "
        using Addr = Register::Address<0x4006426c,0xffffffff,0,unsigned>;
    }
    namespace NonerxudpGdOctets{    ///<Number of bytes received in a good UDP segment. This counter (and the counters below) does not count IP header bytes. 
        using Addr = Register::Address<0x40064270,0xffffffff,0,unsigned>;
    }
    namespace NonerxudpErrOctets{    ///<Number of bytes received in a UDP segment that had checksum errors
        using Addr = Register::Address<0x40064274,0xffffffff,0,unsigned>;
    }
    namespace NonerxtcpGdOctets{    ///<Number of bytes received in a good TCP segment 
        using Addr = Register::Address<0x40064278,0xffffffff,0,unsigned>;
    }
    namespace NonerxtcpErrOctets{    ///<Number of bytes received in a TCP segment with checksum errors 
        using Addr = Register::Address<0x4006427c,0xffffffff,0,unsigned>;
    }
    namespace NonerxicmpGdOctets{    ///<Number of bytes received in a good ICMP segment 
        using Addr = Register::Address<0x40064280,0xffffffff,0,unsigned>;
    }
    namespace NonerxicmpErrOctets{    ///<Number of bytes received in an ICMP segment with checksum errors
        using Addr = Register::Address<0x40064284,0xffffffff,0,unsigned>;
    }
    namespace Nonergsr{    ///<RGMII Status Register)
        using Addr = Register::Address<0x400640d8,0xfffffff0,0,unsigned>;
        ///Link Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ls{}; 
        ///Link Speed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> lsp{}; 
        ///Link Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lm{}; 
    }
    namespace Nonetscr{    ///<Time Stamp Control Register
        using Addr = Register::Address<0x40064700,0xfef800c0,0,unsigned>;
        ///Auxiliary Snapshot FIFO Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> atsfc{}; 
        ///Enable MAC address for PTP frame filtering
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tsenmf{}; 
        ///SelectPTP packets for taking snapshots
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> tsps{}; 
        ///Enable Snapshot for Messages Relevant to Master
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tsmrm{}; 
        ///Enable Time Stamp Snapshot for Event Messages
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tetsem{}; 
        ///Enable Time Stamp Snapshot for IPv4 frames
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tsip4e{}; 
        ///Enable Time Stamp Snapshot for IPv6 frames
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tsip6e{}; 
        ///Enable Time Stamp Snapshot for PTP over Ethernet frames
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tetsp{}; 
        ///Enable PTP packet snooping for version 2 format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tsv2e{}; 
        ///Time Stamp Digital or Binary rollover control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tsdb{}; 
        ///Enable Time Stamp for All Frames
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tsea{}; 
        ///Addend Register Update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> taru{}; 
        ///Time Stamp Interrupt Trigger Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tite{}; 
        ///Time Stamp Update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tsu{}; 
        ///Time Stamp Initialize
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tsi{}; 
        ///Time Stamp Fine or Coarse Update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tfcu{}; 
        ///Time Stamp Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tse{}; 
    }
    namespace Nonessir{    ///<Sub-Second Increment Register
        using Addr = Register::Address<0x40064704,0xffffff00,0,unsigned>;
        ///Sub-Second Increment Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ssinc{}; 
    }
    namespace Nonestsr{    ///<System Time - Seconds Register
        using Addr = Register::Address<0x40064708,0x00000000,0,unsigned>;
        ///Time Stamp Second
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tss{}; 
    }
    namespace Nonestnr{    ///<System Time - Nanoseconds Register
        using Addr = Register::Address<0x4006470c,0x80000000,0,unsigned>;
        ///Time Stamp Sub-Seconds
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> tsss{}; 
    }
    namespace Nonestsur{    ///<System Time - Seconds Update Register
        using Addr = Register::Address<0x40064710,0x00000000,0,unsigned>;
        ///Time Stamp Second
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tss{}; 
    }
    namespace Nonestnur{    ///<System Time - Nanoseconds Update Register
        using Addr = Register::Address<0x40064714,0x00000000,0,unsigned>;
        ///Add or Subtract Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> addsub{}; 
        ///Time Stamp Sub-Seconds
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> tsss{}; 
    }
    namespace Nonetsar{    ///<Time Stamp Addend Register
        using Addr = Register::Address<0x40064718,0x00000000,0,unsigned>;
        ///Time Stamp Addend Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsar{}; 
    }
    namespace Nonettsr{    ///<Target Time Seconds Register
        using Addr = Register::Address<0x4006471c,0x00000000,0,unsigned>;
        ///Target Time Stamp Seconds Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tstr{}; 
    }
    namespace Nonettnr{    ///<Target Time Nanoseconds Register
        using Addr = Register::Address<0x40064720,0x80000000,0,unsigned>;
        ///Target Time Stamp Nanoseconds Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> tstr{}; 
    }
    namespace Nonesthwsr{    ///<System Time - Higher Word Seconds Register
        using Addr = Register::Address<0x40064724,0xffff0000,0,unsigned>;
        ///Time Stamp Higher Word Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tshwr{}; 
    }
    namespace Nonetsr{    ///<Time Stamp Status Register
        using Addr = Register::Address<0x40064728,0xf0fffff0,0,unsigned>;
        ///Auxiliary Time Stamp Number of Snapshots
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> atsns{}; 
        ///Auxiliary Time Stamp Snapshot Trigger Missed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> atsstm{}; 
        ///Timestamp Target Time Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> trgter{}; 
        ///Auxiliary Time Stamp Trigger Snapshot
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> atsts{}; 
        ///Time Stamp Target Time Reached
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tstart{}; 
        ///Time Stamp Seconds Overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tssovf{}; 
    }
    namespace Noneppscr{    ///<PPS Control Register
        using Addr = Register::Address<0x4006472c,0xfffffff0,0,unsigned>;
        ///Controls the frequency of the PPS output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ppsctrl{}; 
    }
    namespace Noneatnr{    ///<Auxiliary Time Stamp - Nanoseconds Register
        using Addr = Register::Address<0x40064730,0x80000000,0,unsigned>;
        ///ATN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> atn{}; 
    }
    namespace Noneatsr{    ///<Auxiliary Time Stamp - Seconds Register
        using Addr = Register::Address<0x40064734,0x00000000,0,unsigned>;
        ///ATS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ats{}; 
    }
    namespace Nonemar16h{    ///<MAC Address16 Register -High
        using Addr = Register::Address<0x40064800,0xffffffff,0,unsigned>;
    }
    namespace Nonemar16l{    ///<MAC Address16 Register -Low
        using Addr = Register::Address<0x40064804,0xffffffff,0,unsigned>;
    }
    namespace Nonemar17h{    ///<MAC Address17 Register -High
        using Addr = Register::Address<0x40064808,0xffffffff,0,unsigned>;
    }
    namespace Nonemar17l{    ///<MAC Address17 Register -Low
        using Addr = Register::Address<0x4006480c,0xffffffff,0,unsigned>;
    }
    namespace Nonemar18h{    ///<MAC Address18 Register -High
        using Addr = Register::Address<0x40064810,0xffffffff,0,unsigned>;
    }
    namespace Nonemar18l{    ///<MAC Address18 Register -Low
        using Addr = Register::Address<0x40064814,0xffffffff,0,unsigned>;
    }
    namespace Nonemar19h{    ///<MAC Address19 Register -High
        using Addr = Register::Address<0x40064818,0xffffffff,0,unsigned>;
    }
    namespace Nonemar19l{    ///<MAC Address19 Register -Low
        using Addr = Register::Address<0x4006481c,0xffffffff,0,unsigned>;
    }
    namespace Nonemar20h{    ///<MAC Address20 Register -High
        using Addr = Register::Address<0x40064820,0xffffffff,0,unsigned>;
    }
    namespace Nonemar20l{    ///<MAC Address20 Register -Low
        using Addr = Register::Address<0x40064824,0xffffffff,0,unsigned>;
    }
    namespace Nonemar21h{    ///<MAC Address21 Register -High
        using Addr = Register::Address<0x40064828,0xffffffff,0,unsigned>;
    }
    namespace Nonemar21l{    ///<MAC Address21 Register -Low
        using Addr = Register::Address<0x4006482c,0xffffffff,0,unsigned>;
    }
    namespace Nonemar22h{    ///<MAC Address22 Register -High
        using Addr = Register::Address<0x40064830,0xffffffff,0,unsigned>;
    }
    namespace Nonemar22l{    ///<MAC Address22 Register -Low
        using Addr = Register::Address<0x40064834,0xffffffff,0,unsigned>;
    }
    namespace Nonemar23h{    ///<MAC Address23 Register -High
        using Addr = Register::Address<0x40064838,0xffffffff,0,unsigned>;
    }
    namespace Nonemar23l{    ///<MAC Address23 Register -Low
        using Addr = Register::Address<0x4006483c,0xffffffff,0,unsigned>;
    }
    namespace Nonemar24h{    ///<MAC Address24 Register -High
        using Addr = Register::Address<0x40064840,0xffffffff,0,unsigned>;
    }
    namespace Nonemar24l{    ///<MAC Address24 Register -Low
        using Addr = Register::Address<0x40064844,0xffffffff,0,unsigned>;
    }
    namespace Nonemar25h{    ///<MAC Address25 Register -High
        using Addr = Register::Address<0x40064848,0xffffffff,0,unsigned>;
    }
    namespace Nonemar25l{    ///<MAC Address25 Register -Low
        using Addr = Register::Address<0x4006484c,0xffffffff,0,unsigned>;
    }
    namespace Nonemar26h{    ///<MAC Address26 Register -High
        using Addr = Register::Address<0x40064850,0xffffffff,0,unsigned>;
    }
    namespace Nonemar26l{    ///<MAC Address26 Register -Low
        using Addr = Register::Address<0x40064854,0xffffffff,0,unsigned>;
    }
    namespace Nonemar27h{    ///<MAC Address27 Register -High
        using Addr = Register::Address<0x40064858,0xffffffff,0,unsigned>;
    }
    namespace Nonemar27l{    ///<MAC Address27 Register -Low
        using Addr = Register::Address<0x4006485c,0xffffffff,0,unsigned>;
    }
    namespace Nonemar28h{    ///<MAC Address28 Register -High
        using Addr = Register::Address<0x40064860,0xffffffff,0,unsigned>;
    }
    namespace Nonemar28l{    ///<MAC Address28 Register -Low
        using Addr = Register::Address<0x40064864,0xffffffff,0,unsigned>;
    }
    namespace Nonemar29h{    ///<MAC Address29 Register -High
        using Addr = Register::Address<0x40064868,0xffffffff,0,unsigned>;
    }
    namespace Nonemar29l{    ///<MAC Address29 Register -Low
        using Addr = Register::Address<0x4006486c,0xffffffff,0,unsigned>;
    }
    namespace Nonemar30h{    ///<MAC Address30 Register -High
        using Addr = Register::Address<0x40064870,0xffffffff,0,unsigned>;
    }
    namespace Nonemar30l{    ///<MAC Address30 Register -Low
        using Addr = Register::Address<0x40064874,0xffffffff,0,unsigned>;
    }
    namespace Nonemar31h{    ///<MAC Address31 Register -High
        using Addr = Register::Address<0x40064878,0xffffffff,0,unsigned>;
    }
    namespace Nonemar31l{    ///<MAC Address31 Register -Low
        using Addr = Register::Address<0x4006487c,0xffffffff,0,unsigned>;
    }
    namespace Nonebmr{    ///<Bus Mode Register
        using Addr = Register::Address<0x40065000,0xf0000000,0,unsigned>;
        ///Transmit Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> txpr{}; 
        ///Mixed Burst
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mb{}; 
        ///Address-Aligned Beats
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> aal{}; 
        ///8xPBL Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> 8xpbl{}; 
        ///Use Separate PBL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usp{}; 
        ///RxDMA PBL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,17),Register::ReadWriteAccess,unsigned> rpbl{}; 
        ///Fixed Burst
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fb{}; 
        ///Rx:Tx priority ratio
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pr{}; 
        ///Programmable Burst Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> pbl{}; 
        ///Alternate Descriptor Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> atds{}; 
        ///Descriptor Skip Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,2),Register::ReadWriteAccess,unsigned> dsl{}; 
        ///DMA Arbitration scheme
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> da{}; 
        ///Software Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swr{}; 
    }
    namespace Nonetpdr{    ///<Transmit Poll Demand Register)
        using Addr = Register::Address<0x40065004,0x00000000,0,unsigned>;
        ///Transmit Poll Demand
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tpd{}; 
    }
    namespace Nonerpdr{    ///<Receive Poll Demand Register
        using Addr = Register::Address<0x40065008,0x00000000,0,unsigned>;
        ///Receive Poll Demand
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rpd{}; 
    }
    namespace Nonerdlar{    ///<Receive Descriptor List Address Register)
        using Addr = Register::Address<0x4006500c,0x00000003,0,unsigned>;
        ///Start of Receive List
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> srl31{}; 
        ///Bit30 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> srl30{}; 
        ///Bit29 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> srl29{}; 
        ///Bit28 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> srl28{}; 
        ///Bit27 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> srl27{}; 
        ///Bit26 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> srl26{}; 
        ///Bit25 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> srl25{}; 
        ///Bit24 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> srl24{}; 
        ///Bit23 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> srl23{}; 
        ///Bit22 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> srl22{}; 
        ///Bit21 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> srl21{}; 
        ///Bit20 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> srl20{}; 
        ///Bit19 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> srl19{}; 
        ///Bit18 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> srl18{}; 
        ///Bit17 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> srl17{}; 
        ///Bit16 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srl16{}; 
        ///Bit15 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> srl15{}; 
        ///Bit14 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> srl14{}; 
        ///Bit13 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> srl13{}; 
        ///Bit12 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> srl12{}; 
        ///Bit11 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> srl11{}; 
        ///Bit10 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> srl10{}; 
        ///Bit9 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srl9{}; 
        ///Bit8 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srl8{}; 
        ///Bit7 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srl7{}; 
        ///Bit6 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srl6{}; 
        ///Bit5 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> srl5{}; 
        ///Bit4 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> srl4{}; 
        ///Bit3 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> srl3{}; 
        ///Bit2 of RDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srl2{}; 
    }
    namespace Nonetdlar{    ///< Transmit Descriptor List Address Register
        using Addr = Register::Address<0x40065010,0x00000003,0,unsigned>;
        ///Start of Transmit List
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> stl31{}; 
        ///Bit30 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> stl30{}; 
        ///Bit29 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> stl29{}; 
        ///Bit28 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> stl28{}; 
        ///Bit27 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> stl27{}; 
        ///Bit26 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> stl26{}; 
        ///Bit25 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> stl25{}; 
        ///Bit24 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> stl24{}; 
        ///Bit23 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> stl23{}; 
        ///Bit22 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> stl22{}; 
        ///Bit21 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stl21{}; 
        ///Bit20 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> stl20{}; 
        ///Bit19 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stl19{}; 
        ///Bit18 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> stl18{}; 
        ///Bit17 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> stl17{}; 
        ///Bit16 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> stl16{}; 
        ///Bit15 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> stl15{}; 
        ///Bit14 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> stl14{}; 
        ///Bit13 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stl13{}; 
        ///Bit12 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> stl12{}; 
        ///Bit11 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> stl11{}; 
        ///Bit10 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> stl10{}; 
        ///Bit9 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stl9{}; 
        ///Bit8 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> stl8{}; 
        ///Bit7 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stl7{}; 
        ///Bit6 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stl6{}; 
        ///Bit5 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stl5{}; 
        ///Bit4 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> stl4{}; 
        ///Bit3 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stl3{}; 
        ///Bit2 of TDLAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stl2{}; 
    }
    namespace Nonesr{    ///<Status Register
        using Addr = Register::Address<0x40065014,0x80001800,0,unsigned>;
        ///GMAC LPI Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> glpii{}; 
        ///Time-Stamp Trigger Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tti{}; 
        ///GMAC PMT Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> gpi{}; 
        ///GMAC MMC Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> gmi{}; 
        ///GMAC Line interface Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> gli{}; 
        ///Error Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> eb{}; 
        ///Transmit Process State
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ts{}; 
        ///Receive Process State
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> rs{}; 
        ///Normal Interrupt Summary
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nis{}; 
        ///Abnormal Interrupt Summary
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ais{}; 
        ///Early Receive Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eri{}; 
        ///Fatal Bus Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbi{}; 
        ///Early Transmit Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eti{}; 
        ///Receive Watchdog Timeout
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rwt{}; 
        ///Receive process Stopped
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rps{}; 
        ///Receive Buffer Unavailable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ru{}; 
        ///Receive Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ri{}; 
        ///Transmit underflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> unf{}; 
        ///Receive Overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Transmit Jabber Timeout
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tjt{}; 
        ///Transmit Buffer Unavailable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tu{}; 
        ///Transmit Process Stopped
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tps{}; 
        ///Transmit Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ti{}; 
    }
    namespace Noneomr{    ///<Operation Mode Register
        using Addr = Register::Address<0x40065018,0xf8ce1f21,0,unsigned>;
        ///Disable Dropping of TCP/IP Checksum Error Frames
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Receive Store and Forward
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rsf{}; 
        ///Disable Flushing of Received Frames
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dff{}; 
        ///Transmit Store Forward
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tsf{}; 
        ///Flush Transmit FIFO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ftf{}; 
        ///Transmit Threshold Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,14),Register::ReadWriteAccess,unsigned> ttc{}; 
        ///Start/Stop Transmission Command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> st{}; 
        ///Forward Error Frames
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fef{}; 
        ///Forward Undersized Good Frames
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fuf{}; 
        ///Receive Threshold Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> rtc{}; 
        ///Operate on Second Frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osf{}; 
        ///Start/Stop Receive
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sr{}; 
    }
    namespace Noneier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x4006501c,0xfffe1800,0,unsigned>;
        ///Normal Interrupt Summary Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nie{}; 
        ///Abnormal Interrupt Summary Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> aie{}; 
        ///Early Receive Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ere{}; 
        ///Fatal Bus Error Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbe{}; 
        ///Early Transmit Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ete{}; 
        ///Receive Watchdog Timeout Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rwe{}; 
        ///Receive Process Stopped Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rse{}; 
        ///Receive Buffer Unavailable Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rue{}; 
        ///Receive Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rie{}; 
        ///Transmit underflow Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> une{}; 
        ///Receive Overflow Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ove{}; 
        ///Transmit Jabber Timeout
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tje{}; 
        ///Transmit Buffer Unavailable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tue{}; 
        ///Transmit Process Stopped
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tse{}; 
        ///Transmit Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tie{}; 
    }
    namespace Nonemfbocr{    ///<Missed Frame and Buffer Overflow Counter Register
        using Addr = Register::Address<0x40065020,0xe0000000,0,unsigned>;
        ///Overflow NMFF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> onmff{}; 
        ///Number of Missed frame by Ethernet-MAC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,17),Register::ReadWriteAccess,unsigned> nmff{}; 
        ///Overflow NMFH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> onmfh{}; 
        ///Number of Missed frame by HOST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> nmfh{}; 
    }
    namespace Noneriwtr{    ///<Receive Interrupt Watchdog Timer Register
        using Addr = Register::Address<0x40065024,0xffffff00,0,unsigned>;
        ///RI Watchdog Timer count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> riwt{}; 
    }
    namespace Noneahbsr{    ///<AHB Status Register
        using Addr = Register::Address<0x4006502c,0xfffffffe,0,unsigned>;
        ///AHB Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ahbs{}; 
    }
    namespace Nonechtdr{    ///<Current Host Transmit Descriptor Register
        using Addr = Register::Address<0x40065048,0x00000000,0,unsigned>;
        ///Host Transmit Descriptor Address Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htdap{}; 
    }
    namespace Nonechrdr{    ///<Current Host Receive Descriptor Register
        using Addr = Register::Address<0x4006504c,0x00000000,0,unsigned>;
        ///Host Receive Descriptor Address Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hrdap{}; 
    }
    namespace Nonechtbar{    ///<Current Host Transmit Buffer Address Register
        using Addr = Register::Address<0x40065050,0x00000000,0,unsigned>;
        ///Host Transmit Buffer Address Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htbar{}; 
    }
    namespace Nonechrbar{    ///<Current Host Receive Buffer Address Register
        using Addr = Register::Address<0x40065054,0x00000000,0,unsigned>;
        ///Host Receive Buffer Address Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hrbar{}; 
    }
}
