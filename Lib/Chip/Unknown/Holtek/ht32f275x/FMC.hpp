#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//FMC
    namespace NonefmcTadr{    ///<FMC_TADR
        using Addr = Register::Address<0x40080000,0x00000000,0,unsigned>;
        ///TADB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tadb{}; 
        namespace TadbValC{
        }
    }
    namespace NonefmcWrdr{    ///<FMC_WRDR
        using Addr = Register::Address<0x40080004,0x00000000,0,unsigned>;
        ///WRDB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrdb{}; 
        namespace WrdbValC{
        }
    }
    namespace NonefmcOcmr{    ///<FMC_OCMR
        using Addr = Register::Address<0x4008000c,0xfffffff0,0,unsigned>;
        ///CMD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cmd{}; 
        namespace CmdValC{
        }
    }
    namespace NonefmcOpcr{    ///<FMC_OPCR
        using Addr = Register::Address<0x40080010,0xffffffe1,0,unsigned>;
        ///OPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> opm{}; 
        namespace OpmValC{
        }
    }
    namespace NonefmcOier{    ///<FMC_OIER
        using Addr = Register::Address<0x40080014,0xffffffe0,0,unsigned>;
        ///ORFIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> orfien{}; 
        namespace OrfienValC{
        }
        ///ITADIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> itadien{}; 
        namespace ItadienValC{
        }
        ///OBEIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> obeien{}; 
        namespace ObeienValC{
        }
        ///IOCMIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iocmien{}; 
        namespace IocmienValC{
        }
        ///OREIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> oreien{}; 
        namespace OreienValC{
        }
    }
    namespace NonefmcOisr{    ///<FMC_OISR
        using Addr = Register::Address<0x40080018,0xfffcffe0,0,unsigned>;
        ///ORFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> orff{}; 
        namespace OrffValC{
        }
        ///ITADF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> itadf{}; 
        namespace ItadfValC{
        }
        ///OBEF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> obef{}; 
        namespace ObefValC{
        }
        ///IOCMF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iocmf{}; 
        namespace IocmfValC{
        }
        ///OREF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> oref{}; 
        namespace OrefValC{
        }
        ///RORFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rorff{}; 
        namespace RorffValC{
        }
        ///PPEF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ppef{}; 
        namespace PpefValC{
        }
    }
    namespace NonefmcPpsr0{    ///<FMC_PPSR0
        using Addr = Register::Address<0x40080020,0x00000000,0,unsigned>;
        ///PPSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ppsb{}; 
        namespace PpsbValC{
        }
    }
    namespace NonefmcPpsr1{    ///<FMC_PPSR1
        using Addr = Register::Address<0x40080024,0x00000000,0,unsigned>;
        ///PPSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ppsb{}; 
        namespace PpsbValC{
        }
    }
    namespace NonefmcPpsr2{    ///<FMC_PPSR2
        using Addr = Register::Address<0x40080028,0x00000000,0,unsigned>;
        ///PPSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ppsb{}; 
        namespace PpsbValC{
        }
    }
    namespace NonefmcPpsr3{    ///<FMC_PPSR3
        using Addr = Register::Address<0x4008002c,0x00000000,0,unsigned>;
        ///PPSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ppsb{}; 
        namespace PpsbValC{
        }
    }
    namespace NonefmcCpsr{    ///<FMC_CPSR
        using Addr = Register::Address<0x40080030,0xfffffffc,0,unsigned>;
        ///CPSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpsb{}; 
        namespace CpsbValC{
        }
        ///OBPSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> obpsb{}; 
        namespace ObpsbValC{
        }
    }
    namespace NonefmcVmcr{    ///<FMC_VMCR
        using Addr = Register::Address<0x40080100,0xfffffffc,0,unsigned>;
        ///VMCB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> vmcb{}; 
        namespace VmcbValC{
        }
    }
    namespace NonefmcCfcr{    ///<FMC_CFCR
        using Addr = Register::Address<0x40080200,0xfffe6f68,0,unsigned>;
        ///WAIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> wait{}; 
        namespace WaitValC{
        }
        ///PFBE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pfbe{}; 
        namespace PfbeValC{
        }
        ///DCDB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcdb{}; 
        namespace DcdbValC{
        }
        ///CE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ce{}; 
        namespace CeValC{
        }
        ///FHLAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fhlaen{}; 
        namespace FhlaenValC{
        }
        ///FZWPSEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fzwpsen{}; 
        namespace FzwpsenValC{
        }
    }
    namespace NonefmcSbvt0{    ///<FMC_SBVT0
        using Addr = Register::Address<0x40080300,0x00000000,0,unsigned>;
        ///SBVT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sbvt{}; 
        namespace SbvtValC{
        }
    }
    namespace NonefmcSbvt1{    ///<FMC_SBVT1
        using Addr = Register::Address<0x40080304,0x00000000,0,unsigned>;
        ///SBVT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sbvt{}; 
        namespace SbvtValC{
        }
    }
    namespace NonefmcSbvt2{    ///<FMC_SBVT2
        using Addr = Register::Address<0x40080308,0x00000000,0,unsigned>;
        ///SBVT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sbvt{}; 
        namespace SbvtValC{
        }
    }
    namespace NonefmcSbvt3{    ///<FMC_SBVT3
        using Addr = Register::Address<0x4008030c,0x00000000,0,unsigned>;
        ///SBVT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sbvt{}; 
        namespace SbvtValC{
        }
    }
}
