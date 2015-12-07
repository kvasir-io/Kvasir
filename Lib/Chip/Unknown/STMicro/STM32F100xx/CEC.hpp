#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//HDMI-CEC controller
    namespace Nonecfgr{    ///<configuration register
        using Addr = Register::Address<0x40007800,0xfffffff0,0,unsigned>;
        ///Peripheral enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        ///Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ie{}; 
        namespace IeValC{
        }
        ///Bit timing error mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btem{}; 
        namespace BtemValC{
        }
        ///Bit period error mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bpem{}; 
        namespace BpemValC{
        }
    }
    namespace Noneoar{    ///<CEC own address register
        using Addr = Register::Address<0x40007804,0xfffffff0,0,unsigned>;
        ///Own address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> oa{}; 
        namespace OaValC{
        }
    }
    namespace Nonepres{    ///<Rx Data Register
        using Addr = Register::Address<0x40007808,0xffffc000,0,unsigned>;
        ///CEC Rx Data Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> presc{}; 
        namespace PrescValC{
        }
    }
    namespace Noneesr{    ///<CEC error status register
        using Addr = Register::Address<0x4000780c,0xffffff80,0,unsigned>;
        ///Bit timing error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bte{}; 
        namespace BteValC{
        }
        ///Bit period error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bpe{}; 
        namespace BpeValC{
        }
        ///Rx block transfer finished
              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rbtfe{}; 
        namespace RbtfeValC{
        }
        ///Start bit error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sbe{}; 
        namespace SbeValC{
        }
        ///Block acknowledge error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> acke{}; 
        namespace AckeValC{
        }
        ///Line error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> line{}; 
        namespace LineValC{
        }
        ///Tx block transfer finished
              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tbtfe{}; 
        namespace TbtfeValC{
        }
    }
    namespace Nonecsr{    ///<CEC control and status
          register
        using Addr = Register::Address<0x40007810,0xffffff00,0,unsigned>;
        ///Tx start of message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tsom{}; 
        namespace TsomValC{
        }
        ///Tx end of message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> teom{}; 
        namespace TeomValC{
        }
        ///Tx error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> terr{}; 
        namespace TerrValC{
        }
        ///Tx byte transfer request or block
              transfer finished
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tbtrf{}; 
        namespace TbtrfValC{
        }
        ///Rx start of message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rsom{}; 
        namespace RsomValC{
        }
        ///Rx end of message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> reom{}; 
        namespace ReomValC{
        }
        ///Rx error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rerr{}; 
        namespace RerrValC{
        }
        ///Rx byte/block transfer
              finished
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rbtf{}; 
        namespace RbtfValC{
        }
    }
    namespace Nonetxd{    ///<CEC Tx data register
        using Addr = Register::Address<0x40007814,0xffffff00,0,unsigned>;
        ///Tx Data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txd{}; 
        namespace TxdValC{
        }
    }
    namespace Nonerxd{    ///<CEC Rx data register
        using Addr = Register::Address<0x40007818,0xffffff00,0,unsigned>;
        ///Rx data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxd{}; 
        namespace RxdValC{
        }
    }
}
