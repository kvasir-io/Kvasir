#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial controller 1 (Direct memory
      access)
    namespace Nonesc1Dmarxbegaddar{    ///<Serial controller receive DMA begin address
          channel A register
        using Addr = Register::Address<0x4000c800,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc1Dmarxendaddar{    ///<Serial controller receive DMA end address
          channel A register
        using Addr = Register::Address<0x4000c804,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc1Dmarxbegaddbr{    ///<Serial controller receive DMA begin address
          channel B register
        using Addr = Register::Address<0x4000c808,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc1Dmarxendaddbr{    ///<Serial controller receive DMA end address
          channel B register
        using Addr = Register::Address<0x4000c80c,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc1Dmatxbegaddar{    ///<Serial controller transmit DMA begin address
          channel A register
        using Addr = Register::Address<0x4000c810,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc1Dmatxendaddar{    ///<Serial controller transmit DMA end address
          channel A register
        using Addr = Register::Address<0x4000c814,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc1Dmatxbegaddbr{    ///<Serial controller transmit DMA begin address
          channel B register
        using Addr = Register::Address<0x4000c818,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc1Dmatxendaddbr{    ///<Serial controller transmit DMA end address
          channel B
        using Addr = Register::Address<0x4000c81c,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc1Dmarxcntar{    ///<Serial controller receive DMA counter
          channel A register
        using Addr = Register::Address<0x4000c820,0xffffe000,0,unsigned>;
        ///CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace Nonesc1Dmarxcntbr{    ///<Serial controller receive DMA count channel
          B register
        using Addr = Register::Address<0x4000c824,0xffffe000,0,unsigned>;
        ///CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace Nonesc1Dmatxcntr{    ///<Serial controller transmit DMA counter
          register
        using Addr = Register::Address<0x4000c828,0xffffe000,0,unsigned>;
        ///CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace Nonesc1Dmasr{    ///<Serial controller DMA status
          register
        using Addr = Register::Address<0x4000c82c,0xffffe000,0,unsigned>;
        ///NSSS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> nsss{}; 
        namespace NsssValC{
        }
        ///FEB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> feb{}; 
        namespace FebValC{
        }
        ///FEA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fea{}; 
        namespace FeaValC{
        }
        ///PEB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> peb{}; 
        namespace PebValC{
        }
        ///PEA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pea{}; 
        namespace PeaValC{
        }
        ///OVRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrb{}; 
        namespace OvrbValC{
        }
        ///OVRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovra{}; 
        namespace OvraValC{
        }
        ///TXBACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txback{}; 
        namespace TxbackValC{
        }
        ///TXAACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txaack{}; 
        namespace TxaackValC{
        }
        ///RXBACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxback{}; 
        namespace RxbackValC{
        }
        ///RXAACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxaack{}; 
        namespace RxaackValC{
        }
    }
    namespace Nonesc1Dmacr{    ///<Serial controller DMA control
          register
        using Addr = Register::Address<0x4000c830,0xffffffc0,0,unsigned>;
        ///TXRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txrst{}; 
        namespace TxrstValC{
        }
        ///RXRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrst{}; 
        namespace RxrstValC{
        }
        ///TXLODB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txlodb{}; 
        namespace TxlodbValC{
        }
        ///TXLODA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txloda{}; 
        namespace TxlodaValC{
        }
        ///RXLODB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxlodb{}; 
        namespace RxlodbValC{
        }
        ///RXLODA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxloda{}; 
        namespace RxlodaValC{
        }
    }
    namespace Nonesc1Dmarxerrar{    ///<Serial controller receive DMA channel A
          first error register
        using Addr = Register::Address<0x4000c834,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc1Dmarxerrbr{    ///<Serial controller receive DMA channel B
          first error register
        using Addr = Register::Address<0x4000c838,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc1Dmarxcntsavedr{    ///<Serial controller receive DMA saved counter
          channel B register
        using Addr = Register::Address<0x4000c870,0xffffe000,0,unsigned>;
        ///CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
}
