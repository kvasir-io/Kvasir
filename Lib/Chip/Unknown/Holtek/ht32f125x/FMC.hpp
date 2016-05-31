#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//FMC
    namespace FmcFmcTadr{    ///<FMC_TADR
        using Addr = Register::Address<0x40080000,0x00000000,0x00000000,unsigned>;
        ///TADB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tadb{}; 
    }
    namespace FmcFmcWrdr{    ///<FMC_WRDR
        using Addr = Register::Address<0x40080004,0x00000000,0x00000000,unsigned>;
        ///WRDB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrdb{}; 
    }
    namespace FmcFmcOcmr{    ///<FMC_OCMR
        using Addr = Register::Address<0x4008000c,0x00000000,0x00000000,unsigned>;
        ///CMD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cmd{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace FmcFmcOpcr{    ///<FMC_OPCR
        using Addr = Register::Address<0x40080010,0x00000001,0x00000000,unsigned>;
        ///OPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> opm{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace FmcFmcOier{    ///<FMC_OIER
        using Addr = Register::Address<0x40080014,0x00000000,0x00000000,unsigned>;
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace FmcFmcOisr{    ///<FMC_OISR
        using Addr = Register::Address<0x40080018,0x0000ffe0,0x00000000,unsigned>;
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace FmcFmcPpsr0{    ///<FMC_PPSR0
        using Addr = Register::Address<0x40080020,0x00000000,0x00000000,unsigned>;
        ///PPSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ppsb{}; 
    }
    namespace FmcFmcPpsr1{    ///<FMC_PPSR1
        using Addr = Register::Address<0x40080024,0x00000000,0x00000000,unsigned>;
        ///PPSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ppsb{}; 
    }
    namespace FmcFmcPpsr2{    ///<FMC_PPSR2
        using Addr = Register::Address<0x40080028,0x00000000,0x00000000,unsigned>;
        ///PPSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ppsb{}; 
    }
    namespace FmcFmcPpsr3{    ///<FMC_PPSR3
        using Addr = Register::Address<0x4008002c,0x00000000,0x00000000,unsigned>;
        ///PPSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ppsb{}; 
    }
    namespace FmcFmcCpsr{    ///<FMC_CPSR
        using Addr = Register::Address<0x40080030,0x00000000,0x00000000,unsigned>;
        ///CPSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpsb{}; 
        ///OBPSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> obpsb{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace FmcFmcVmcr{    ///<FMC_VMCR
        using Addr = Register::Address<0x40080100,0x00000000,0x00000000,unsigned>;
        ///VMCB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> vmcb{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace FmcFmcCfcr{    ///<FMC_CFCR
        using Addr = Register::Address<0x40080200,0x00000028,0x00000000,unsigned>;
        ///WAIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> wait{}; 
        ///PFBE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pfbe{}; 
        ///IPSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ipse{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace FmcFmcSbvt0{    ///<FMC_SBVT0
        using Addr = Register::Address<0x40080300,0x00000000,0x00000000,unsigned>;
        ///SBVT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sbvt{}; 
    }
    namespace FmcFmcSbvt1{    ///<FMC_SBVT1
        using Addr = Register::Address<0x40080304,0x00000000,0x00000000,unsigned>;
        ///SBVT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sbvt{}; 
    }
    namespace FmcFmcSbvt2{    ///<FMC_SBVT2
        using Addr = Register::Address<0x40080308,0x00000000,0x00000000,unsigned>;
        ///SBVT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sbvt{}; 
    }
    namespace FmcFmcSbvt3{    ///<FMC_SBVT3
        using Addr = Register::Address<0x4008030c,0x00000000,0x00000000,unsigned>;
        ///SBVT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sbvt{}; 
    }
}
