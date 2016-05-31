#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Ethernet-MAC 0
    namespace EthernetMac0Mcr{    ///<MAC Configuration Register
        using Addr = Register::Address<0x40064000,0xfc000003,0x00000000,unsigned>;
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
    namespace EthernetMac0Mffr{    ///<MAC Frame Filter Register
        using Addr = Register::Address<0x40064004,0x7ffff800,0x00000000,unsigned>;
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
    namespace EthernetMac0Mhtrh{    ///<MAC Hash Table Register (High)
        using Addr = Register::Address<0x40064008,0x00000000,0x00000000,unsigned>;
        ///the upper 32 bits of the hash table in the HTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hth{}; 
    }
    namespace EthernetMac0Mhtrl{    ///<MAC Hash Table Register (Low)
        using Addr = Register::Address<0x4006400c,0x00000000,0x00000000,unsigned>;
        ///the lower 32 bits of the hash table in the HTL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htl{}; 
    }
    namespace EthernetMac0Gar{    ///<GMII/MII Address Register
        using Addr = Register::Address<0x40064010,0xffff0000,0x00000000,unsigned>;
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
    namespace EthernetMac0Gdr{    ///<GMII/MII Data Register
        using Addr = Register::Address<0x40064014,0xffff0000,0x00000000,unsigned>;
        ///GMII/MII Data Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gd{}; 
    }
    namespace EthernetMac0Fcr{    ///<Flow Control Register
        using Addr = Register::Address<0x40064018,0x0000ff40,0x00000000,unsigned>;
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
    namespace EthernetMac0Vtr{    ///<VLAN TAG Register
        using Addr = Register::Address<0x4006401c,0xfffe0000,0x00000000,unsigned>;
        ///Enable 12-Bit VLAN Tag Comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> etv{}; 
        ///VLAN Tag Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> vl{}; 
    }
    namespace EthernetMac0Rwffr{    ///<Remote Wake-up Frame Filter Register
        using Addr = Register::Address<0x40064028,0x00000000,0x00000000,unsigned>;
        ///Remote Wake-up Frame Filter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rwffr{}; 
    }
    namespace EthernetMac0Pmtr{    ///<PMT Register
        using Addr = Register::Address<0x4006402c,0x7ffffd98,0x00000000,unsigned>;
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
    namespace EthernetMac0Lpicsr{    ///<LPI Control and Status Register
        using Addr = Register::Address<0x40064030,0xfff0fcf0,0x00000000,unsigned>;
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
    namespace EthernetMac0Lpitcr{    ///<LPI Timers Control Register
        using Addr = Register::Address<0x40064034,0xfc000000,0x00000000,unsigned>;
        ///LPI LS TIMER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> lit{}; 
        ///LPI TW TIMER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> twt{}; 
    }
    namespace EthernetMac0Isr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40064038,0xfffff906,0x00000000,unsigned>;
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
    namespace EthernetMac0Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x4006403c,0xfffff9f6,0x00000000,unsigned>;
        ///LPI Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lpiim{}; 
        ///Time Stamp Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tsim{}; 
        ///PMT Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pim{}; 
        ///RGMII Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rgim{}; 
    }
    namespace EthernetMac0Mar0h{    ///<MAC Address0 Register (High)
        using Addr = Register::Address<0x40064040,0x7fff0000,0x00000000,unsigned>;
        ///Must be one
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mo{}; 
        ///MAC Address0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> a0{}; 
    }
    namespace EthernetMac0Mar0l{    ///<MAC Address0 Register (Low)
        using Addr = Register::Address<0x40064044,0x00000000,0x00000000,unsigned>;
        ///MAC Address0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> a0{}; 
    }
    namespace EthernetMac0Mar1h{    ///<MAC Address1 Register -High
        using Addr = Register::Address<0x40064048,0x00ff0000,0x00000000,unsigned>;
        ///Address Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ae{}; 
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sa{}; 
        ///Mask Byte Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> mbc{}; 
        ///MAC Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> a{}; 
    }
    namespace EthernetMac0Mar1l{    ///<MAC Address1 Register -Low
        using Addr = Register::Address<0x4006404c,0x00000000,0x00000000,unsigned>;
        ///MAC Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> a{}; 
    }
    namespace EthernetMac0Mar2h{    ///<MAC Address2 Register -High
        using Addr = Register::Address<0x40064050,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar2l{    ///<MAC Address2 Register -Low
        using Addr = Register::Address<0x40064054,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar3h{    ///<MAC Address3 Register -High
        using Addr = Register::Address<0x40064058,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar3l{    ///<MAC Address3 Register -Low
        using Addr = Register::Address<0x4006405c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar4h{    ///<MAC Address4 Register -High
        using Addr = Register::Address<0x40064060,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar4l{    ///<MAC Address4 Register -Low
        using Addr = Register::Address<0x40064064,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar5h{    ///<MAC Address5 Register -High
        using Addr = Register::Address<0x40064068,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar5l{    ///<MAC Address5 Register -Low
        using Addr = Register::Address<0x4006406c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar6h{    ///<MAC Address6 Register -High
        using Addr = Register::Address<0x40064070,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar6l{    ///<MAC Address6 Register -Low
        using Addr = Register::Address<0x40064074,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar7h{    ///<MAC Address7 Register -High
        using Addr = Register::Address<0x40064078,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar7l{    ///<MAC Address7 Register -Low
        using Addr = Register::Address<0x4006407c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar8h{    ///<MAC Address8 Register -High
        using Addr = Register::Address<0x40064080,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar8l{    ///<MAC Address8 Register -Low
        using Addr = Register::Address<0x40064084,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar9h{    ///<MAC Address9 Register -High
        using Addr = Register::Address<0x40064088,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar9l{    ///<MAC Address9 Register -Low
        using Addr = Register::Address<0x4006408c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar10h{    ///<MAC Address10 Register -High
        using Addr = Register::Address<0x40064090,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar10l{    ///<MAC Address10 Register -Low
        using Addr = Register::Address<0x40064094,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar11h{    ///<MAC Address11 Register -High
        using Addr = Register::Address<0x40064098,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar11l{    ///<MAC Address11 Register -Low
        using Addr = Register::Address<0x4006409c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar12h{    ///<MAC Address12 Register -High
        using Addr = Register::Address<0x400640a0,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar12l{    ///<MAC Address12 Register -Low
        using Addr = Register::Address<0x400640a4,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar13h{    ///<MAC Address13 Register -High
        using Addr = Register::Address<0x400640a8,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar13l{    ///<MAC Address13 Register -Low
        using Addr = Register::Address<0x400640ac,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar14h{    ///<MAC Address14 Register -High
        using Addr = Register::Address<0x400640b0,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar14l{    ///<MAC Address14 Register -Low
        using Addr = Register::Address<0x400640b4,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar15h{    ///<MAC Address15 Register -High
        using Addr = Register::Address<0x400640b8,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar15l{    ///<MAC Address15 Register -Low
        using Addr = Register::Address<0x400640bc,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rgsr{    ///<RGMII Status Register)
        using Addr = Register::Address<0x400640d8,0xfffffff0,0x00000000,unsigned>;
        ///Link Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ls{}; 
        ///Link Speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lsp{}; 
        ///Link Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lm{}; 
    }
    namespace EthernetMac0MmcCntl{    ///<MMC Control Register
        using Addr = Register::Address<0x40064100,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0MmcIntrRx{    ///<Receive Interrupt Register
        using Addr = Register::Address<0x40064104,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0MmcIntrTx{    ///<MMC Transmit Interrupt Register 
        using Addr = Register::Address<0x40064108,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0MmcIntrMaskRx{    ///<MMC Receive Interrupt Mask Register
        using Addr = Register::Address<0x4006410c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0MmcIntrMaskTx{    ///<MMC Transmit Interrupt Mask Register 
        using Addr = Register::Address<0x40064110,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0TxoctetcountGb{    ///<"Number of bytes transmitted, exclusive of preamble and retried bytes, in good and bad frames"
        using Addr = Register::Address<0x40064114,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0TxframecountGb{    ///<"Number of good and bad frames transmitted, exclusive of retried frames"
        using Addr = Register::Address<0x40064118,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0TxbroadcastframesG{    ///<Number of good broadcast frames transmitted
        using Addr = Register::Address<0x4006411c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0TxmulticastframesG{    ///<Number of good multicast frames transmitted
        using Addr = Register::Address<0x40064120,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Tx64octetsGb{    ///<"Number of good and bad frames transmitted with length of 64 bytes, exclusive of preamble and retried frames"
        using Addr = Register::Address<0x40064124,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Tx65to127octetsGb{    ///<"Number of good and bad frames transmitted with length between 65 and 127 (inclusive) bytes, exclusive of preamble and retried frames"
        using Addr = Register::Address<0x40064128,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Tx128to255octetsGb{    ///<"Number of good and bad frames transmitted with length between 128 and 255 (inclusive) bytes, exclusive of preamble and retried frames"
        using Addr = Register::Address<0x4006412c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Tx256to511octetsGb{    ///<"Number of good and bad frames transmitted with length between 256 and 511 (inclusive) bytes, exclusive of preamble and retried frames"
        using Addr = Register::Address<0x40064130,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Tx512to1023octetsGb{    ///<"Number of good and bad frames transmitted with length between 512 and 1023 (inclusive) bytes, exclusive of preamble and retried frames"
        using Addr = Register::Address<0x40064134,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Tx1024tomaxoctetsGb{    ///<"Number of good and bad frames transmitted with length between 1024 and Maxsize (inclusive) bytes, exclusive of preamble and retried frames"
        using Addr = Register::Address<0x40064138,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0TxunicastframesGb{    ///<Number of good and bad unicast frames transmitted
        using Addr = Register::Address<0x4006413c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0TxmulticastframesGb{    ///<Number of good and bad multicast frames transmitted
        using Addr = Register::Address<0x40064140,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0TxbroadcastframesGb{    ///<Number of good and bad broadcast frames transmitted
        using Addr = Register::Address<0x40064144,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Txunderflowerror{    ///<Number of frames aborted due to frame underflow error
        using Addr = Register::Address<0x40064148,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0TxsinglecolG{    ///<Number of successfully transmitted frames after a single collision in Half-duplex mode 
        using Addr = Register::Address<0x4006414c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0TxmulticolG{    ///<Number of successfully transmitted frames after more than a single collision in Half-duplex mode
        using Addr = Register::Address<0x40064150,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Txdeferred{    ///<Number of successfully transmitted frames after a deferral in Half-duplex mode.
        using Addr = Register::Address<0x40064154,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Txlatecol{    ///<Number of frames aborted due to late collision error. 
        using Addr = Register::Address<0x40064158,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Txexesscol{    ///<Number of frames aborted due to excessive (16) collision errors. 
        using Addr = Register::Address<0x4006415c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Txcarriererror{    ///<Number of frames aborted due to carrier sense error (no carrier or loss of carrier).  
        using Addr = Register::Address<0x40064160,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0TxoctetcountG{    ///<"Number of bytes transmitted, exclusive of preamble, in good frames only. "
        using Addr = Register::Address<0x40064164,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0TxframecountG{    ///<Number of good frames transmitted. 
        using Addr = Register::Address<0x40064168,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0TxexecessdefG{    ///<Number of frames aborted due to excessive deferral error (deferred for more than two max-sized frame times).
        using Addr = Register::Address<0x4006416c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Txpauseframes{    ///<Number of good PAUSE frames transmitted. 
        using Addr = Register::Address<0x40064170,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0TxvlanframesG{    ///<"Number of good VLAN frames transmitted, exclusive of retried frames. "
        using Addr = Register::Address<0x40064174,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxframecountGb{    ///<Number of good and bad frames received. 
        using Addr = Register::Address<0x40064180,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxoctetcountGb{    ///<"Number of bytes received, exclusive of preamble, in good and bad frames.  "
        using Addr = Register::Address<0x40064184,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxoctetcountG{    ///<"Number of bytes received, exclusive of preamble, only in good frames. "
        using Addr = Register::Address<0x40064188,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxbroadcastframesG{    ///<Number of good broadcast frames received. 
        using Addr = Register::Address<0x4006418c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxmulticastframesG{    ///<Number of good multicast frames received. 
        using Addr = Register::Address<0x40064190,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxcrcerror{    ///<Number of frames received with CRC error. 
        using Addr = Register::Address<0x40064194,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxallignmenterror{    ///<Number of frames received with alignment (dribble) error. Valid only in 10/100 mode. 
        using Addr = Register::Address<0x40064198,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxrunterror{    ///<Number of frames received with runt (64 bytes and CRC error) error. 
        using Addr = Register::Address<0x4006419c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxjabbererror{    ///<Number of frames received with length greater than 1518 bytes with CRC error. 
        using Addr = Register::Address<0x400641a0,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxundersizeG{    ///<"Number of frames received with length less than 64 bytes, without any errors.  "
        using Addr = Register::Address<0x400641a4,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxoversizeG{    ///<Number of frames received with length greater than the maxsize without error. 
        using Addr = Register::Address<0x400641a8,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rx64octetsGb{    ///<"Number of good and bad frames received with length 64 bytes, exclusive of preamble. "
        using Addr = Register::Address<0x400641ac,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rx65to127octetsGb{    ///<"Number of good and bad frames received with length between 65 and 127 (inclusive) bytes, exclusive of preamble.  "
        using Addr = Register::Address<0x400641b0,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rx128to255octetsGb{    ///<"Number of good and bad frames received with length between 128 and 255 (inclusive) bytes, exclusive of preamble.  "
        using Addr = Register::Address<0x400641b4,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rx256to511octetsGb{    ///<"Number of good and bad frames received with length between 256 and 511 (inclusive) bytes, exclusive of preamble.  "
        using Addr = Register::Address<0x400641b8,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rx512to1023octetsGb{    ///<"Number of good and bad frames received with length between 512 and 1023 (inclusive) bytes, exclusive of preamble.  "
        using Addr = Register::Address<0x400641bc,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rx1024tomaxoctetsGb{    ///<"Number of good and bad frames received with length between 1024 and maxsize (inclusive) bytes, exclusive of preamble. "
        using Addr = Register::Address<0x400641c0,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxunicastframesG{    ///<Number of good unicast frames received. 
        using Addr = Register::Address<0x400641c4,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxlengtherror{    ///<"Number of frames received with length error (Length type field is not the frame size), for all frames with valid length field. "
        using Addr = Register::Address<0x400641c8,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxoutofrangetype{    ///<Number of frames received with length/type field not equal to the valid frame size (>1500) 
        using Addr = Register::Address<0x400641cc,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxpauseframes{    ///<Number of good and valid PAUSE frames received. 
        using Addr = Register::Address<0x400641d0,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxfifooverflow{    ///<Number of missed received frames due to FIFO overflow. 
        using Addr = Register::Address<0x400641d4,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxvlanframesGb{    ///<Number of good and bad VLAN frames received. 
        using Addr = Register::Address<0x400641d8,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxwatchdogerror{    ///<Number of frames received with error due to watchdog timeout error (frames with a data load larger than 2048 bytes). 
        using Addr = Register::Address<0x400641dc,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0MmcIpcIntrMaskRx{    ///<MMC Receive Checksum Offload Interrupt Mask Register
        using Addr = Register::Address<0x40064200,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0MmcIpcIntrRx{    ///<MMC Receive Checksum Offload Interrupt Register
        using Addr = Register::Address<0x40064208,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxipv4GdFrms{    ///<"Number of good IPv4 datagrams received with the TCP, UDP, or ICMP payload  "
        using Addr = Register::Address<0x40064210,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxipv4HdrerrFrms{    ///<"Number of IPv4 datagrams received with header errors (checksum, length, or version mismatch) "
        using Addr = Register::Address<0x40064214,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxipv4NopayFrms{    ///<"Number of IPv4 datagram frames received that did not have a TCP, UDP, or ICMP payload processed by the Checksum engine "
        using Addr = Register::Address<0x40064218,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxipv4FragFrms{    ///<Number of good IPv4 datagrams with fragmentation 
        using Addr = Register::Address<0x4006421c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxipv4UdsblFrms{    ///<Number of good IPv4 datagrams received that had a UDP payload with checksum disabled 
        using Addr = Register::Address<0x40064220,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxipv6GdFrms{    ///<"Number of good IPv6 datagrams received with TCP, UDP, or ICMP payloads "
        using Addr = Register::Address<0x40064224,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxipv6HdrerrFrms{    ///<Number of IPv6 datagrams received with header errors (length or version mismatch) 
        using Addr = Register::Address<0x40064228,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxipv6NopayFrms{    ///<"Number of IPv6 datagram frames received that did not have a TCP, UDP, or ICMP payload. This includes all IPv6 datagrams with fragmentation or security extension headers  "
        using Addr = Register::Address<0x4006422c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxudpGdFrms{    ///<Number of good IP datagrams with a good UDP payload. This counter is not updated when the rxipv4_udsbl_frms counter is incremented. 
        using Addr = Register::Address<0x40064230,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxudpErrFrms{    ///<Number of good IP datagrams whose UDP payload has a checksum error
        using Addr = Register::Address<0x40064234,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxtcpGdFrms{    ///<Number of good IP datagrams with a good TCP payload 
        using Addr = Register::Address<0x40064238,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxtcpErrFrms{    ///<Number of good IP datagrams whose TCP payload has a checksum error
        using Addr = Register::Address<0x4006423c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxicmpGdFrms{    ///<Number of good IP datagrams with a good ICMP payload 
        using Addr = Register::Address<0x40064240,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxicmpErrFrms{    ///<Number of good IP datagrams whose ICMP payload has a checksum error
        using Addr = Register::Address<0x40064244,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxipv4GdOctets{    ///<"Number of bytes received in good IPv4 datagrams encapsulating TCP, UDP, or ICMP data. (Ethernet header, FCS, pad, or IP pad bytes are not included in this counter or in the octet counters listed below).  "
        using Addr = Register::Address<0x40064250,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxipv4HdrerrOctets{    ///<"Number of bytes received in IPv4 datagrams with header errors (checksum, length, version mismatch). The value in the Length field of IPv4 header is used to update this counter. "
        using Addr = Register::Address<0x40064254,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxipv4NopayOctets{    ///<"Number of bytes received in IPv4 datagrams that did not have a TCP, UDP, or ICMP payload. The value in the IPv4 header's Length field is used to update this counter. "
        using Addr = Register::Address<0x40064258,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxipv4FragOctets{    ///<Number of bytes received in fragmented IPv4 datagrams. The value in the IPv4 header's Length field is used to update this counter. 
        using Addr = Register::Address<0x4006425c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxipv4UdsblOctets{    ///<Number of bytes received in a UDP segment that had the UDP checksum disabled. This counter does not count IP Header bytes. 
        using Addr = Register::Address<0x40064260,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxipv6GdOctets{    ///<"Number of bytes received in good IPv6 datagrams encapsulating TCP, UDP or ICMPv6 data"
        using Addr = Register::Address<0x40064264,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxipv6HdrerrOctets{    ///<"Number of bytes received in IPv6 datagrams with header errors (length, version mismatch). The value in the IPv6 header's Length field is used to update this counter.  "
        using Addr = Register::Address<0x40064268,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Rxipv6NopayOctets{    ///<"Number of bytes received in IPv6 datagrams that did not have a TCP, UDP, or ICMP payload. The value in the IPv6 header's Length field is used to update this counter. "
        using Addr = Register::Address<0x4006426c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxudpGdOctets{    ///<Number of bytes received in a good UDP segment. This counter (and the counters below) does not count IP header bytes. 
        using Addr = Register::Address<0x40064270,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxudpErrOctets{    ///<Number of bytes received in a UDP segment that had checksum errors
        using Addr = Register::Address<0x40064274,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxtcpGdOctets{    ///<Number of bytes received in a good TCP segment 
        using Addr = Register::Address<0x40064278,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxtcpErrOctets{    ///<Number of bytes received in a TCP segment with checksum errors 
        using Addr = Register::Address<0x4006427c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxicmpGdOctets{    ///<Number of bytes received in a good ICMP segment 
        using Addr = Register::Address<0x40064280,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0RxicmpErrOctets{    ///<Number of bytes received in an ICMP segment with checksum errors
        using Addr = Register::Address<0x40064284,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Tscr{    ///<Time Stamp Control Register
        using Addr = Register::Address<0x40064700,0xfef800c0,0x00000000,unsigned>;
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
    namespace EthernetMac0Ssir{    ///<Sub-Second Increment Register
        using Addr = Register::Address<0x40064704,0xffffff00,0x00000000,unsigned>;
        ///Sub-Second Increment Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ssinc{}; 
    }
    namespace EthernetMac0Stsr{    ///<System Time - Seconds Register
        using Addr = Register::Address<0x40064708,0x00000000,0x00000000,unsigned>;
        ///Time Stamp Second
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tss{}; 
    }
    namespace EthernetMac0Stnr{    ///<System Time - Nanoseconds Register
        using Addr = Register::Address<0x4006470c,0x80000000,0x00000000,unsigned>;
        ///Time Stamp Sub-Seconds
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tsss{}; 
    }
    namespace EthernetMac0Stsur{    ///<System Time - Seconds Update Register
        using Addr = Register::Address<0x40064710,0x00000000,0x00000000,unsigned>;
        ///Time Stamp Second
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tss{}; 
    }
    namespace EthernetMac0Stnur{    ///<System Time - Nanoseconds Update Register
        using Addr = Register::Address<0x40064714,0x00000000,0x00000000,unsigned>;
        ///Add or Subtract Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> addsub{}; 
        ///Time Stamp Sub-Seconds
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> tsss{}; 
    }
    namespace EthernetMac0Tsar{    ///<Time Stamp Addend Register
        using Addr = Register::Address<0x40064718,0x00000000,0x00000000,unsigned>;
        ///Time Stamp Addend Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsar{}; 
    }
    namespace EthernetMac0Ttsr{    ///<Target Time Seconds Register
        using Addr = Register::Address<0x4006471c,0x00000000,0x00000000,unsigned>;
        ///Target Time Stamp Seconds Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tstr{}; 
    }
    namespace EthernetMac0Ttnr{    ///<Target Time Nanoseconds Register
        using Addr = Register::Address<0x40064720,0x80000000,0x00000000,unsigned>;
        ///Target Time Stamp Nanoseconds Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> tstr{}; 
    }
    namespace EthernetMac0Sthwsr{    ///<System Time - Higher Word Seconds Register
        using Addr = Register::Address<0x40064724,0xffff0000,0x00000000,unsigned>;
        ///Time Stamp Higher Word Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tshwr{}; 
    }
    namespace EthernetMac0Tsr{    ///<Time Stamp Status Register
        using Addr = Register::Address<0x40064728,0xf0fffff0,0x00000000,unsigned>;
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
    namespace EthernetMac0Ppscr{    ///<PPS Control Register
        using Addr = Register::Address<0x4006472c,0xfffffff0,0x00000000,unsigned>;
        ///Controls the frequency of the PPS output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppsctrl{}; 
    }
    namespace EthernetMac0Atnr{    ///<Auxiliary Time Stamp - Nanoseconds Register
        using Addr = Register::Address<0x40064730,0x80000000,0x00000000,unsigned>;
        ///ATN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> atn{}; 
    }
    namespace EthernetMac0Atsr{    ///<Auxiliary Time Stamp - Seconds Register
        using Addr = Register::Address<0x40064734,0x00000000,0x00000000,unsigned>;
        ///ATS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ats{}; 
    }
    namespace EthernetMac0Mar16h{    ///<MAC Address16 Register -High
        using Addr = Register::Address<0x40064800,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar16l{    ///<MAC Address16 Register -Low
        using Addr = Register::Address<0x40064804,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar17h{    ///<MAC Address17 Register -High
        using Addr = Register::Address<0x40064808,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar17l{    ///<MAC Address17 Register -Low
        using Addr = Register::Address<0x4006480c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar18h{    ///<MAC Address18 Register -High
        using Addr = Register::Address<0x40064810,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar18l{    ///<MAC Address18 Register -Low
        using Addr = Register::Address<0x40064814,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar19h{    ///<MAC Address19 Register -High
        using Addr = Register::Address<0x40064818,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar19l{    ///<MAC Address19 Register -Low
        using Addr = Register::Address<0x4006481c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar20h{    ///<MAC Address20 Register -High
        using Addr = Register::Address<0x40064820,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar20l{    ///<MAC Address20 Register -Low
        using Addr = Register::Address<0x40064824,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar21h{    ///<MAC Address21 Register -High
        using Addr = Register::Address<0x40064828,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar21l{    ///<MAC Address21 Register -Low
        using Addr = Register::Address<0x4006482c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar22h{    ///<MAC Address22 Register -High
        using Addr = Register::Address<0x40064830,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar22l{    ///<MAC Address22 Register -Low
        using Addr = Register::Address<0x40064834,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar23h{    ///<MAC Address23 Register -High
        using Addr = Register::Address<0x40064838,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar23l{    ///<MAC Address23 Register -Low
        using Addr = Register::Address<0x4006483c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar24h{    ///<MAC Address24 Register -High
        using Addr = Register::Address<0x40064840,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar24l{    ///<MAC Address24 Register -Low
        using Addr = Register::Address<0x40064844,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar25h{    ///<MAC Address25 Register -High
        using Addr = Register::Address<0x40064848,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar25l{    ///<MAC Address25 Register -Low
        using Addr = Register::Address<0x4006484c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar26h{    ///<MAC Address26 Register -High
        using Addr = Register::Address<0x40064850,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar26l{    ///<MAC Address26 Register -Low
        using Addr = Register::Address<0x40064854,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar27h{    ///<MAC Address27 Register -High
        using Addr = Register::Address<0x40064858,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar27l{    ///<MAC Address27 Register -Low
        using Addr = Register::Address<0x4006485c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar28h{    ///<MAC Address28 Register -High
        using Addr = Register::Address<0x40064860,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar28l{    ///<MAC Address28 Register -Low
        using Addr = Register::Address<0x40064864,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar29h{    ///<MAC Address29 Register -High
        using Addr = Register::Address<0x40064868,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar29l{    ///<MAC Address29 Register -Low
        using Addr = Register::Address<0x4006486c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar30h{    ///<MAC Address30 Register -High
        using Addr = Register::Address<0x40064870,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar30l{    ///<MAC Address30 Register -Low
        using Addr = Register::Address<0x40064874,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar31h{    ///<MAC Address31 Register -High
        using Addr = Register::Address<0x40064878,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Mar31l{    ///<MAC Address31 Register -Low
        using Addr = Register::Address<0x4006487c,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMac0Bmr{    ///<Bus Mode Register
        using Addr = Register::Address<0x40065000,0xf0000000,0x00000000,unsigned>;
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
    namespace EthernetMac0Tpdr{    ///<Transmit Poll Demand Register)
        using Addr = Register::Address<0x40065004,0x00000000,0x00000000,unsigned>;
        ///Transmit Poll Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tpd{}; 
    }
    namespace EthernetMac0Rpdr{    ///<Receive Poll Demand Register
        using Addr = Register::Address<0x40065008,0x00000000,0x00000000,unsigned>;
        ///Receive Poll Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rpd{}; 
    }
    namespace EthernetMac0Rdlar{    ///<Receive Descriptor List Address Register)
        using Addr = Register::Address<0x4006500c,0x00000003,0x00000000,unsigned>;
        ///Start of Receive List
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> srl{}; 
    }
    namespace EthernetMac0Tdlar{    ///< Transmit Descriptor List Address Register
        using Addr = Register::Address<0x40065010,0x00000003,0x00000000,unsigned>;
        ///Start of Transmit List
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> stl{}; 
    }
    namespace EthernetMac0Sr{    ///<Status Register
        using Addr = Register::Address<0x40065014,0x80001800,0x00000000,unsigned>;
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
    namespace EthernetMac0Omr{    ///<Operation Mode Register
        using Addr = Register::Address<0x40065018,0xf8ce1f21,0x00000000,unsigned>;
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
    namespace EthernetMac0Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x4006501c,0xfffe1800,0x00000000,unsigned>;
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
    namespace EthernetMac0Mfbocr{    ///<Missed Frame and Buffer Overflow Counter Register
        using Addr = Register::Address<0x40065020,0xe0000000,0x00000000,unsigned>;
        ///Overflow NMFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> onmff{}; 
        ///Number of Missed frame by Ethernet-MAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nmff{}; 
        ///Overflow NMFH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> onmfh{}; 
        ///Number of Missed frame by HOST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nmfh{}; 
    }
    namespace EthernetMac0Riwtr{    ///<Receive Interrupt Watchdog Timer Register
        using Addr = Register::Address<0x40065024,0xffffff00,0x00000000,unsigned>;
        ///RI Watchdog Timer count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> riwt{}; 
    }
    namespace EthernetMac0Ahbsr{    ///<AHB Status Register
        using Addr = Register::Address<0x4006502c,0xfffffffe,0x00000000,unsigned>;
        ///AHB Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ahbs{}; 
    }
    namespace EthernetMac0Chtdr{    ///<Current Host Transmit Descriptor Register
        using Addr = Register::Address<0x40065048,0x00000000,0x00000000,unsigned>;
        ///Host Transmit Descriptor Address Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> htdap{}; 
    }
    namespace EthernetMac0Chrdr{    ///<Current Host Receive Descriptor Register
        using Addr = Register::Address<0x4006504c,0x00000000,0x00000000,unsigned>;
        ///Host Receive Descriptor Address Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hrdap{}; 
    }
    namespace EthernetMac0Chtbar{    ///<Current Host Transmit Buffer Address Register
        using Addr = Register::Address<0x40065050,0x00000000,0x00000000,unsigned>;
        ///Host Transmit Buffer Address Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> htbar{}; 
    }
    namespace EthernetMac0Chrbar{    ///<Current Host Receive Buffer Address Register
        using Addr = Register::Address<0x40065054,0x00000000,0x00000000,unsigned>;
        ///Host Receive Buffer Address Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hrbar{}; 
    }
}
