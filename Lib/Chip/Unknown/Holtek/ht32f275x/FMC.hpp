#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//FMC
    namespace NonefmcTadr{    ///<FMC_TADR
        using Addr = Register::Address<0x40080000,0x00000000,0,unsigned>;
        ///TADB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tadb{}; 
    }
    namespace NonefmcWrdr{    ///<FMC_WRDR
        using Addr = Register::Address<0x40080004,0x00000000,0,unsigned>;
        ///WRDB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrdb{}; 
    }
    namespace NonefmcOcmr{    ///<FMC_OCMR
        using Addr = Register::Address<0x4008000c,0xfffffff0,0,unsigned>;
        ///CMD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cmd{}; 
    }
    namespace NonefmcOpcr{    ///<FMC_OPCR
        using Addr = Register::Address<0x40080010,0xffffffe1,0,unsigned>;
        ///OPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> opm{}; 
    }
    namespace NonefmcOier{    ///<FMC_OIER
        using Addr = Register::Address<0x40080014,0xffffffe0,0,unsigned>;
        ///ORFIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> orfien{}; 
        ///ITADIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> itadien{}; 
        ///OBEIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> obeien{}; 
        ///IOCMIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iocmien{}; 
        ///OREIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> oreien{}; 
    }
    namespace NonefmcOisr{    ///<FMC_OISR
        using Addr = Register::Address<0x40080018,0xfffcffe0,0,unsigned>;
        ///ORFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> orff{}; 
        ///ITADF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> itadf{}; 
        ///OBEF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> obef{}; 
        ///IOCMF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iocmf{}; 
        ///OREF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> oref{}; 
        ///RORFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rorff{}; 
        ///PPEF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ppef{}; 
    }
    namespace NonefmcPpsr0{    ///<FMC_PPSR0
        using Addr = Register::Address<0x40080020,0x00000000,0,unsigned>;
        ///PPSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ppsb{}; 
    }
    namespace NonefmcPpsr1{    ///<FMC_PPSR1
        using Addr = Register::Address<0x40080024,0x00000000,0,unsigned>;
        ///PPSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ppsb{}; 
    }
    namespace NonefmcPpsr2{    ///<FMC_PPSR2
        using Addr = Register::Address<0x40080028,0x00000000,0,unsigned>;
        ///PPSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ppsb{}; 
    }
    namespace NonefmcPpsr3{    ///<FMC_PPSR3
        using Addr = Register::Address<0x4008002c,0x00000000,0,unsigned>;
        ///PPSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ppsb{}; 
    }
    namespace NonefmcCpsr{    ///<FMC_CPSR
        using Addr = Register::Address<0x40080030,0xfffffffc,0,unsigned>;
        ///CPSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpsb{}; 
        ///OBPSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> obpsb{}; 
    }
    namespace NonefmcVmcr{    ///<FMC_VMCR
        using Addr = Register::Address<0x40080100,0xfffffffc,0,unsigned>;
        ///VMCB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> vmcb{}; 
    }
    namespace NonefmcCfcr{    ///<FMC_CFCR
        using Addr = Register::Address<0x40080200,0xfffe6f68,0,unsigned>;
        ///WAIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> wait{}; 
        ///PFBE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pfbe{}; 
        ///DCDB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcdb{}; 
        ///CE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ce{}; 
        ///FHLAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fhlaen{}; 
        ///FZWPSEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fzwpsen{}; 
    }
    namespace NonefmcSbvt0{    ///<FMC_SBVT0
        using Addr = Register::Address<0x40080300,0x00000000,0,unsigned>;
        ///SBVT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sbvt{}; 
    }
    namespace NonefmcSbvt1{    ///<FMC_SBVT1
        using Addr = Register::Address<0x40080304,0x00000000,0,unsigned>;
        ///SBVT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sbvt{}; 
    }
    namespace NonefmcSbvt2{    ///<FMC_SBVT2
        using Addr = Register::Address<0x40080308,0x00000000,0,unsigned>;
        ///SBVT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sbvt{}; 
    }
    namespace NonefmcSbvt3{    ///<FMC_SBVT3
        using Addr = Register::Address<0x4008030c,0x00000000,0,unsigned>;
        ///SBVT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sbvt{}; 
    }
}
