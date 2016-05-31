#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Ethernet: media access control
    namespace EthernetMacMaccr{    ///<Ethernet MAC configuration register          (ETH_MACCR)
        using Addr = Register::Address<0x40028000,0xff308103,0x00000000,unsigned>;
        ///Receiver enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> re{}; 
        ///Transmitter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> te{}; 
        ///Deferral check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dc{}; 
        ///Back-off limit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> bl{}; 
        ///Automatic pad/CRC              stripping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> apcs{}; 
        ///Retry disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rd{}; 
        ///IPv4 checksum offload
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ipco{}; 
        ///Duplex mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dm{}; 
        ///Loopback mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lm{}; 
        ///Receive own disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rod{}; 
        ///Fast Ethernet speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fes{}; 
        ///Carrier sense disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> csd{}; 
        ///Interframe gap
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> ifg{}; 
        ///Jabber disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> jd{}; 
        ///Watchdog disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> wd{}; 
    }
    namespace EthernetMacMacffr{    ///<Ethernet MAC frame filter register          (ETH_MACCFFR)
        using Addr = Register::Address<0x40028004,0x7ffff800,0x00000000,unsigned>;
        ///Promiscuous mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pm{}; 
        ///Hash unicast
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hu{}; 
        ///Hash multicast
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hm{}; 
        ///Destination address inverse              filtering
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> daif{}; 
        ///Pass all multicast
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pam{}; 
        ///Broadcast frames disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bfd{}; 
        ///Pass control frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pcf{}; 
        ///Source address inverse              filtering
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> saif{}; 
        ///Source address filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> saf{}; 
        ///Hash or perfect filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hpf{}; 
        ///Receive all
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ra{}; 
    }
    namespace EthernetMacMachthr{    ///<Ethernet MAC hash table high          register
        using Addr = Register::Address<0x40028008,0x00000000,0x00000000,unsigned>;
        ///Hash table high
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hth{}; 
    }
    namespace EthernetMacMachtlr{    ///<Ethernet MAC hash table low          register
        using Addr = Register::Address<0x4002800c,0x00000000,0x00000000,unsigned>;
        ///Hash table low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htl{}; 
    }
    namespace EthernetMacMacmiiar{    ///<Ethernet MAC MII address register          (ETH_MACMIIAR)
        using Addr = Register::Address<0x40028010,0xffff0020,0x00000000,unsigned>;
        ///MII busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mb{}; 
        ///MII write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mw{}; 
        ///Clock range
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> cr{}; 
        ///MII register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> mr{}; 
        ///PHY address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace EthernetMacMacmiidr{    ///<Ethernet MAC MII data register          (ETH_MACMIIDR)
        using Addr = Register::Address<0x40028014,0xffff0000,0x00000000,unsigned>;
        ///MII data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> md{}; 
    }
    namespace EthernetMacMacfcr{    ///<Ethernet MAC flow control register          (ETH_MACFCR)
        using Addr = Register::Address<0x40028018,0x0000ff40,0x00000000,unsigned>;
        ///Flow control busy/back pressure              activate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcbBpa{}; 
        ///Transmit flow control              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tfce{}; 
        ///Receive flow control              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rfce{}; 
        ///Unicast pause frame detect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> upfd{}; 
        ///Pause low threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> plt{}; 
        ///Zero-quanta pause disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> zqpd{}; 
        ///Pass control frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> pt{}; 
    }
    namespace EthernetMacMacvlantr{    ///<Ethernet MAC VLAN tag register          (ETH_MACVLANTR)
        using Addr = Register::Address<0x4002801c,0xfffe0000,0x00000000,unsigned>;
        ///VLAN tag identifier (for receive              frames)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> vlanti{}; 
        ///12-bit VLAN tag comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> vlantc{}; 
    }
    namespace EthernetMacMacrwuffr{    ///<Ethernet MAC remote wakeup frame filter          register (ETH_MACRWUFFR)
        using Addr = Register::Address<0x40028028,0xffffffff,0x00000000,unsigned>;
    }
    namespace EthernetMacMacpmtcsr{    ///<Ethernet MAC PMT control and status register          (ETH_MACPMTCSR)
        using Addr = Register::Address<0x4002802c,0x7ffffd98,0x00000000,unsigned>;
        ///Power down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd{}; 
        ///Magic Packet enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mpe{}; 
        ///Wakeup frame enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wfe{}; 
        ///Magic packet received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mpr{}; 
        ///Wakeup frame received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wfr{}; 
        ///Global unicast
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gu{}; 
        ///Wakeup frame filter register pointer              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> wffrpr{}; 
    }
    namespace EthernetMacMacsr{    ///<Ethernet MAC interrupt status register          (ETH_MACSR)
        using Addr = Register::Address<0x40028038,0xfffffd87,0x00000000,unsigned>;
        ///PMT status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pmts{}; 
        ///MMC status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mmcs{}; 
        ///MMC receive status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mmcrs{}; 
        ///MMC transmit status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mmcts{}; 
        ///Time stamp trigger status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tsts{}; 
    }
    namespace EthernetMacMacimr{    ///<Ethernet MAC interrupt mask register          (ETH_MACIMR)
        using Addr = Register::Address<0x4002803c,0xfffffdf7,0x00000000,unsigned>;
        ///PMT interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pmtim{}; 
        ///Time stamp trigger interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tstim{}; 
    }
    namespace EthernetMacMaca0hr{    ///<Ethernet MAC address 0 high register          (ETH_MACA0HR)
        using Addr = Register::Address<0x40028040,0x7fff0000,0x00000000,unsigned>;
        ///MAC address0 high
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> maca0h{}; 
        ///Always 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mo{}; 
    }
    namespace EthernetMacMaca0lr{    ///<Ethernet MAC address 0 low          register
        using Addr = Register::Address<0x40028044,0x00000000,0x00000000,unsigned>;
        ///MAC address0 low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> maca0l{}; 
    }
    namespace EthernetMacMaca1hr{    ///<Ethernet MAC address 1 high register          (ETH_MACA1HR)
        using Addr = Register::Address<0x40028048,0x00ff0000,0x00000000,unsigned>;
        ///MAC address1 high
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> maca1h{}; 
        ///Mask byte control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> mbc{}; 
        ///Source address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sa{}; 
        ///Address enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ae{}; 
    }
    namespace EthernetMacMaca1lr{    ///<Ethernet MAC address1 low          register
        using Addr = Register::Address<0x4002804c,0x00000000,0x00000000,unsigned>;
        ///MAC address1 low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> maca1l{}; 
    }
    namespace EthernetMacMaca2hr{    ///<Ethernet MAC address 2 high register          (ETH_MACA2HR)
        using Addr = Register::Address<0x40028050,0x00ff0000,0x00000000,unsigned>;
        ///Ethernet MAC address 2 high              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ethMaca2hr{}; 
        ///Mask byte control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> mbc{}; 
        ///Source address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sa{}; 
        ///Address enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ae{}; 
    }
    namespace EthernetMacMaca2lr{    ///<Ethernet MAC address 2 low          register
        using Addr = Register::Address<0x40028054,0x80000000,0x00000000,unsigned>;
        ///MAC address2 low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> maca2l{}; 
    }
    namespace EthernetMacMaca3hr{    ///<Ethernet MAC address 3 high register          (ETH_MACA3HR)
        using Addr = Register::Address<0x40028058,0x00ff0000,0x00000000,unsigned>;
        ///MAC address3 high
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> maca3h{}; 
        ///Mask byte control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> mbc{}; 
        ///Source address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sa{}; 
        ///Address enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ae{}; 
    }
    namespace EthernetMacMaca3lr{    ///<Ethernet MAC address 3 low          register
        using Addr = Register::Address<0x4002805c,0x00000000,0x00000000,unsigned>;
        ///MAC address3 low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mbca3l{}; 
    }
}
