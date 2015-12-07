#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Fault_Reports
    namespace Nonecfsr{    ///<CFSR
        using Addr = Register::Address<0xe000ed28,0x00000000,0,unsigned>;
        ///MFSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> mfsr{}; 
        namespace MfsrValC{
        }
        ///BFSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> bfsr{}; 
        namespace BfsrValC{
        }
        ///UFSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ufsr{}; 
        namespace UfsrValC{
        }
    }
    namespace Nonemfsr{    ///<MFSR
        using Addr = Register::Address<0xe000ed28,0xffffff64,0,unsigned char>;
        ///IACCVIOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iaccviol{}; 
        namespace IaccviolValC{
        }
        ///DACCVIOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> daccviol{}; 
        namespace DaccviolValC{
        }
        ///MUNSTKERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> munstkerr{}; 
        namespace MunstkerrValC{
        }
        ///MSTKERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mstkerr{}; 
        namespace MstkerrValC{
        }
        ///MMARVALID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mmarvalid{}; 
        namespace MmarvalidValC{
        }
    }
    namespace Nonemmfar{    ///<MMFAR
        using Addr = Register::Address<0xe000ed34,0x00000000,0,unsigned>;
        ///ADDRESS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> address{}; 
        namespace AddressValC{
        }
    }
    namespace Nonebfsr{    ///<BFSR
        using Addr = Register::Address<0xe000ed29,0xffffff60,0,unsigned char>;
        ///IBUSERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ibuserr{}; 
        namespace IbuserrValC{
        }
        ///PRECISERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> preciserr{}; 
        namespace PreciserrValC{
        }
        ///IMPRECISERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> impreciserr{}; 
        namespace ImpreciserrValC{
        }
        ///UNSTKERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> unstkerr{}; 
        namespace UnstkerrValC{
        }
        ///STKERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> stkerr{}; 
        namespace StkerrValC{
        }
        ///BFARVALID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bfarvalid{}; 
        namespace BfarvalidValC{
        }
    }
    namespace Nonebfar{    ///<BFAR
        using Addr = Register::Address<0xe000ed38,0x00000000,0,unsigned>;
        ///ADDRESS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> address{}; 
        namespace AddressValC{
        }
    }
    namespace Noneufsr{    ///<UFSR
        using Addr = Register::Address<0xe000ed2a,0xfffffcf0,0,unsigned>;
        ///UNDEFINSTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> undefinstr{}; 
        namespace UndefinstrValC{
        }
        ///INVSTATE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> invstate{}; 
        namespace InvstateValC{
        }
        ///INVPC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> invpc{}; 
        namespace InvpcValC{
        }
        ///NOCP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nocp{}; 
        namespace NocpValC{
        }
        ///UNALIGNED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> unaligned{}; 
        namespace UnalignedValC{
        }
        ///DIVBYZERO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> divbyzero{}; 
        namespace DivbyzeroValC{
        }
    }
    namespace Nonehfsr{    ///<HFSR
        using Addr = Register::Address<0xe000ed2c,0x3ffffffd,0,unsigned>;
        ///VECTTBL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vecttbl{}; 
        namespace VecttblValC{
        }
        ///FORCED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> forced{}; 
        namespace ForcedValC{
        }
        ///DEBUGEVT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> debugevt{}; 
        namespace DebugevtValC{
        }
    }
    namespace Nonedfsr{    ///<DFSR
        using Addr = Register::Address<0xe000ed30,0xffffffe0,0,unsigned>;
        ///HALTED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> halted{}; 
        namespace HaltedValC{
        }
        ///BKPT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bkpt{}; 
        namespace BkptValC{
        }
        ///DWTTRAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dwttrap{}; 
        namespace DwttrapValC{
        }
        ///VCATCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vcatch{}; 
        namespace VcatchValC{
        }
        ///EXTERNAL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> external{}; 
        namespace ExternalValC{
        }
    }
    namespace Noneafsr{    ///<AFSR
        using Addr = Register::Address<0xe000ed3c,0x00000000,0,unsigned>;
        ///IMPDEF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> impdef{}; 
        namespace ImpdefValC{
        }
    }
}
