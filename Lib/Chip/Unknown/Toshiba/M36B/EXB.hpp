#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//External Bus Interface(EXB)
    namespace Nonemod{    ///<External Bus Mode Register
        using Addr = Register::Address<0x4005c000,0xfffffff8,0,unsigned>;
        ///EXBSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> exbsel{}; 
        ///EXBWAIT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> exbwait{}; 
    }
    namespace Noneas0{    ///<External Bus Base Address and CS Space setting Register 0
        using Addr = Register::Address<0x4005c010,0x0000ff00,0,unsigned>;
        ///EXAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> exar{}; 
        ///SA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> sa{}; 
    }
    namespace Noneas1{    ///<External Bus Base Address and CS Space setting Register 1
        using Addr = Register::Address<0x4005c014,0x0000ff00,0,unsigned>;
        ///EXAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> exar{}; 
        ///SA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> sa{}; 
    }
    namespace Noneas2{    ///<External Bus Base Address and CS Space setting Register 2
        using Addr = Register::Address<0x4005c018,0x0000ff00,0,unsigned>;
        ///EXAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> exar{}; 
        ///SA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> sa{}; 
    }
    namespace Noneas3{    ///<External Bus Base Address and CS Space setting Register 3
        using Addr = Register::Address<0x4005c01c,0x0000ff00,0,unsigned>;
        ///EXAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> exar{}; 
        ///SA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> sa{}; 
    }
    namespace Nonecs0{    ///<Chip Select and Wait Controller Register 0
        using Addr = Register::Address<0x4005c040,0x00c0e0f8,0,unsigned>;
        ///CSW0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csw0{}; 
        ///CSW1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csw1{}; 
        ///CSW2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> csw2{}; 
        ///CSIW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> csiw{}; 
        ///RDS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> rds{}; 
        ///WRS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> wrs{}; 
        ///ALEW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> alew{}; 
        ///RDR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rdr{}; 
        ///WRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,27),Register::ReadWriteAccess,unsigned> wrr{}; 
        ///CSR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> csr{}; 
    }
    namespace Nonecs1{    ///<Chip Select and Wait Controller Register 1
        using Addr = Register::Address<0x4005c044,0x00c0e0f8,0,unsigned>;
        ///CSW0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csw0{}; 
        ///CSW1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csw1{}; 
        ///CSW2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> csw2{}; 
        ///CSIW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> csiw{}; 
        ///RDS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> rds{}; 
        ///WRS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> wrs{}; 
        ///ALEW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> alew{}; 
        ///RDR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rdr{}; 
        ///WRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,27),Register::ReadWriteAccess,unsigned> wrr{}; 
        ///CSR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> csr{}; 
    }
    namespace Nonecs2{    ///<Chip Select and Wait Controller Register 2
        using Addr = Register::Address<0x4005c048,0x00c0e0f8,0,unsigned>;
        ///CSW0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csw0{}; 
        ///CSW1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csw1{}; 
        ///CSW2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> csw2{}; 
        ///CSIW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> csiw{}; 
        ///RDS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> rds{}; 
        ///WRS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> wrs{}; 
        ///ALEW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> alew{}; 
        ///RDR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rdr{}; 
        ///WRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,27),Register::ReadWriteAccess,unsigned> wrr{}; 
        ///CSR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> csr{}; 
    }
    namespace Nonecs3{    ///<Chip Select and Wait Controller Register 3
        using Addr = Register::Address<0x4005c04c,0x00c0e0f8,0,unsigned>;
        ///CSW0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csw0{}; 
        ///CSW1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csw1{}; 
        ///CSW2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> csw2{}; 
        ///CSIW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> csiw{}; 
        ///RDS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> rds{}; 
        ///WRS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> wrs{}; 
        ///ALEW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> alew{}; 
        ///RDR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rdr{}; 
        ///WRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,27),Register::ReadWriteAccess,unsigned> wrr{}; 
        ///CSR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> csr{}; 
    }
}
