#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Ethernet: MAC management counters
    namespace EthernetMmcMmccr{    ///<Ethernet MMC control register          (ETH_MMCCR)
        using Addr = Register::Address<0x40028100,0x7ffffff8,0x00000000,unsigned>;
        ///Counter reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cr{}; 
        ///Counter stop rollover
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csr{}; 
        ///Reset on read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ror{}; 
        ///MMC counter freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mcf{}; 
    }
    namespace EthernetMmcMmcrir{    ///<Ethernet MMC receive interrupt register          (ETH_MMCRIR)
        using Addr = Register::Address<0x40028104,0xfffdff9f,0x00000000,unsigned>;
        ///Received frames CRC error              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rfces{}; 
        ///Received frames alignment error              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rfaes{}; 
        ///Received Good Unicast Frames              Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rgufs{}; 
    }
    namespace EthernetMmcMmctir{    ///<Ethernet MMC transmit interrupt register          (ETH_MMCTIR)
        using Addr = Register::Address<0x40028108,0xffdf3fff,0x00000000,unsigned>;
        ///Transmitted good frames single collision              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tgfscs{}; 
        ///Transmitted good frames more single              collision status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tgfmscs{}; 
        ///Transmitted good frames              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tgfs{}; 
    }
    namespace EthernetMmcMmcrimr{    ///<Ethernet MMC receive interrupt mask register          (ETH_MMCRIMR)
        using Addr = Register::Address<0x4002810c,0xfffdff9f,0x00000000,unsigned>;
        ///Received frame CRC error              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rfcem{}; 
        ///Received frames alignment error              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rfaem{}; 
        ///Received good unicast frames              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rgufm{}; 
    }
    namespace EthernetMmcMmctimr{    ///<Ethernet MMC transmit interrupt mask          register (ETH_MMCTIMR)
        using Addr = Register::Address<0x40028110,0xffdf3fff,0x00000000,unsigned>;
        ///Transmitted good frames single collision              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tgfscm{}; 
        ///Transmitted good frames more single              collision mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tgfmscm{}; 
        ///Transmitted good frames              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tgfm{}; 
    }
    namespace EthernetMmcMmctgfsccr{    ///<Ethernet MMC transmitted good frames after a          single collision counter
        using Addr = Register::Address<0x4002814c,0x00000000,0x00000000,unsigned>;
        ///Transmitted good frames after a single              collision counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tgfscc{}; 
    }
    namespace EthernetMmcMmctgfmsccr{    ///<Ethernet MMC transmitted good frames after          more than a single collision
        using Addr = Register::Address<0x40028150,0x00000000,0x00000000,unsigned>;
        ///Transmitted good frames after more than              a single collision counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tgfmscc{}; 
    }
    namespace EthernetMmcMmctgfcr{    ///<Ethernet MMC transmitted good frames counter          register
        using Addr = Register::Address<0x40028168,0x00000000,0x00000000,unsigned>;
        ///Transmitted good frames              counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tgfc{}; 
    }
    namespace EthernetMmcMmcrfcecr{    ///<Ethernet MMC received frames with CRC error          counter register
        using Addr = Register::Address<0x40028194,0x00000000,0x00000000,unsigned>;
        ///Received frames with CRC error              counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rfcfc{}; 
    }
    namespace EthernetMmcMmcrfaecr{    ///<Ethernet MMC received frames with alignment          error counter register
        using Addr = Register::Address<0x40028198,0x00000000,0x00000000,unsigned>;
        ///Received frames with alignment error              counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rfaec{}; 
    }
    namespace EthernetMmcMmcrgufcr{    ///<MMC received good unicast frames counter          register
        using Addr = Register::Address<0x400281c4,0x00000000,0x00000000,unsigned>;
        ///Received good unicast frames              counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rgufc{}; 
    }
}
