#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial Channel (SC)
    namespace Noneen{    ///<SC Enable Register
        using Addr = Register::Address<0x400e1000,0xfffffffe,0,unsigned>;
        ///SIOE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sioe{}; 
        namespace SioeValC{
        }
    }
    namespace Nonebuf{    ///<SC Buffer Register
        using Addr = Register::Address<0x400e1004,0xffffff00,0,unsigned>;
        ///TB_RB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tbRb{}; 
        namespace TbrbValC{
        }
    }
    namespace Nonecr{    ///<SC Control Register
        using Addr = Register::Address<0x400e1008,0xffffff00,0,unsigned>;
        ///IOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ioc{}; 
        namespace IocValC{
        }
        ///SCLKS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sclks{}; 
        namespace SclksValC{
        }
        ///FERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ferr{}; 
        namespace FerrValC{
        }
        ///PERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perr{}; 
        namespace PerrValC{
        }
        ///OERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> oerr{}; 
        namespace OerrValC{
        }
        ///PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        ///EVEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> even{}; 
        namespace EvenValC{
        }
        ///RB8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rb8{}; 
        namespace Rb8ValC{
        }
    }
    namespace Nonemod0{    ///<SC Mode Control Register 0
        using Addr = Register::Address<0x400e100c,0xffffff00,0,unsigned>;
        ///SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sc{}; 
        namespace ScValC{
        }
        ///SM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> sm{}; 
        namespace SmValC{
        }
        ///WU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wu{}; 
        namespace WuValC{
        }
        ///RXE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxe{}; 
        namespace RxeValC{
        }
        ///CTSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctse{}; 
        namespace CtseValC{
        }
        ///TB8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tb8{}; 
        namespace Tb8ValC{
        }
    }
    namespace Nonebrcr{    ///<SC Baud Rate Generator Control Register
        using Addr = Register::Address<0x400e1010,0xffffff80,0,unsigned>;
        ///BRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> brs{}; 
        namespace BrsValC{
        }
        ///BRCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> brck{}; 
        namespace BrckValC{
        }
        ///BRADDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bradde{}; 
        namespace BraddeValC{
        }
    }
    namespace Nonebradd{    ///<SC Baud Rate Generator Control Register 2
        using Addr = Register::Address<0x400e1014,0xfffffff0,0,unsigned>;
        ///BRK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> brk{}; 
        namespace BrkValC{
        }
    }
    namespace Nonemod1{    ///<SC Mode Control Register 1
        using Addr = Register::Address<0x400e1018,0xffffff01,0,unsigned>;
        ///SINT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> sint{}; 
        namespace SintValC{
        }
        ///TXE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txe{}; 
        namespace TxeValC{
        }
        ///FDPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> fdpx{}; 
        namespace FdpxValC{
        }
        ///I2SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> i2sc{}; 
        namespace I2scValC{
        }
    }
    namespace Nonemod2{    ///<SC Mode Control Register 2
        using Addr = Register::Address<0x400e101c,0xffffff00,0,unsigned>;
        ///SWRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
        ///WBUF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wbuf{}; 
        namespace WbufValC{
        }
        ///DRCHG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> drchg{}; 
        namespace DrchgValC{
        }
        ///SBLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sblen{}; 
        namespace SblenValC{
        }
        ///TXRUN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txrun{}; 
        namespace TxrunValC{
        }
        ///RBFLL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rbfll{}; 
        namespace RbfllValC{
        }
        ///TBEMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tbemp{}; 
        namespace TbempValC{
        }
    }
    namespace Nonerfc{    ///<SC RX FIFO Configuration Register
        using Addr = Register::Address<0x400e1020,0xffffff3c,0,unsigned>;
        ///RIL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ril{}; 
        namespace RilValC{
        }
        ///RFIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rfis{}; 
        namespace RfisValC{
        }
        ///RFCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rfcs{}; 
        namespace RfcsValC{
        }
    }
    namespace Nonetfc{    ///<SC TX FIFO Configuration Register
        using Addr = Register::Address<0x400e1024,0xffffff3c,0,unsigned>;
        ///TIL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> til{}; 
        namespace TilValC{
        }
        ///TFIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfis{}; 
        namespace TfisValC{
        }
        ///TFCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tfcs{}; 
        namespace TfcsValC{
        }
    }
    namespace Nonerst{    ///<SC RX FIFO Status Register
        using Addr = Register::Address<0x400e1028,0xffffff78,0,unsigned>;
        ///RLVL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rlvl{}; 
        namespace RlvlValC{
        }
        ///ROR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ror{}; 
        namespace RorValC{
        }
    }
    namespace Nonetst{    ///<SC TX FIFO Status Register
        using Addr = Register::Address<0x400e102c,0xffffff78,0,unsigned>;
        ///TLVL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> tlvl{}; 
        namespace TlvlValC{
        }
        ///TUR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tur{}; 
        namespace TurValC{
        }
    }
    namespace Nonefcnf{    ///<SC FIFO Configuration Register
        using Addr = Register::Address<0x400e1030,0xffffffe0,0,unsigned>;
        ///CNFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cnfg{}; 
        namespace CnfgValC{
        }
        ///RXTXCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtxcnt{}; 
        namespace RxtxcntValC{
        }
        ///RFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rfie{}; 
        namespace RfieValC{
        }
        ///TFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tfie{}; 
        namespace TfieValC{
        }
        ///RFST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rfst{}; 
        namespace RfstValC{
        }
    }
    namespace Nonedma{    ///<SC DMA Enable Register
        using Addr = Register::Address<0x400e1034,0xfffffffc,0,unsigned>;
        ///DMAEN0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen0{}; 
        namespace Dmaen0ValC{
        }
        ///DMAEN1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmaen1{}; 
        namespace Dmaen1ValC{
        }
    }
}
