#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Static Memory Controller
    namespace SmcSetup0{    ///<SMC Setup Register (CS_number = 0)
        using Addr = Register::Address<0xffffec00,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse0{    ///<SMC Pulse Register (CS_number = 0)
        using Addr = Register::Address<0xffffec04,0x80808080,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle0{    ///<SMC Cycle Register (CS_number = 0)
        using Addr = Register::Address<0xffffec08,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode0{    ///<SMC Mode Register (CS_number = 0)
        using Addr = Register::Address<0xffffec0c,0xcee0cecc,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readMode{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeMode{}; 
        ///NWAIT Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> exnwMode{}; 
        ///Byte Access Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> dbw{}; 
        ///Data Float Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        ///Page Mode Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmen{}; 
        ///Page Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ps{}; 
    }
    namespace SmcSetup1{    ///<SMC Setup Register (CS_number = 1)
        using Addr = Register::Address<0xffffec10,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse1{    ///<SMC Pulse Register (CS_number = 1)
        using Addr = Register::Address<0xffffec14,0x80808080,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle1{    ///<SMC Cycle Register (CS_number = 1)
        using Addr = Register::Address<0xffffec18,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode1{    ///<SMC Mode Register (CS_number = 1)
        using Addr = Register::Address<0xffffec1c,0xcee0cecc,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readMode{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeMode{}; 
        ///NWAIT Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> exnwMode{}; 
        ///Byte Access Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> dbw{}; 
        ///Data Float Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        ///Page Mode Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmen{}; 
        ///Page Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ps{}; 
    }
    namespace SmcSetup2{    ///<SMC Setup Register (CS_number = 2)
        using Addr = Register::Address<0xffffec20,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse2{    ///<SMC Pulse Register (CS_number = 2)
        using Addr = Register::Address<0xffffec24,0x80808080,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle2{    ///<SMC Cycle Register (CS_number = 2)
        using Addr = Register::Address<0xffffec28,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode2{    ///<SMC Mode Register (CS_number = 2)
        using Addr = Register::Address<0xffffec2c,0xcee0cecc,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readMode{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeMode{}; 
        ///NWAIT Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> exnwMode{}; 
        ///Byte Access Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> dbw{}; 
        ///Data Float Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        ///Page Mode Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmen{}; 
        ///Page Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ps{}; 
    }
    namespace SmcSetup3{    ///<SMC Setup Register (CS_number = 3)
        using Addr = Register::Address<0xffffec30,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse3{    ///<SMC Pulse Register (CS_number = 3)
        using Addr = Register::Address<0xffffec34,0x80808080,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle3{    ///<SMC Cycle Register (CS_number = 3)
        using Addr = Register::Address<0xffffec38,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode3{    ///<SMC Mode Register (CS_number = 3)
        using Addr = Register::Address<0xffffec3c,0xcee0cecc,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readMode{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeMode{}; 
        ///NWAIT Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> exnwMode{}; 
        ///Byte Access Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> dbw{}; 
        ///Data Float Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        ///Page Mode Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmen{}; 
        ///Page Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ps{}; 
    }
    namespace SmcSetup4{    ///<SMC Setup Register (CS_number = 4)
        using Addr = Register::Address<0xffffec40,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse4{    ///<SMC Pulse Register (CS_number = 4)
        using Addr = Register::Address<0xffffec44,0x80808080,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle4{    ///<SMC Cycle Register (CS_number = 4)
        using Addr = Register::Address<0xffffec48,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode4{    ///<SMC Mode Register (CS_number = 4)
        using Addr = Register::Address<0xffffec4c,0xcee0cecc,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readMode{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeMode{}; 
        ///NWAIT Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> exnwMode{}; 
        ///Byte Access Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> dbw{}; 
        ///Data Float Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        ///Page Mode Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmen{}; 
        ///Page Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ps{}; 
    }
    namespace SmcSetup5{    ///<SMC Setup Register (CS_number = 5)
        using Addr = Register::Address<0xffffec50,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse5{    ///<SMC Pulse Register (CS_number = 5)
        using Addr = Register::Address<0xffffec54,0x80808080,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle5{    ///<SMC Cycle Register (CS_number = 5)
        using Addr = Register::Address<0xffffec58,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode5{    ///<SMC Mode Register (CS_number = 5)
        using Addr = Register::Address<0xffffec5c,0xcee0cecc,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readMode{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeMode{}; 
        ///NWAIT Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> exnwMode{}; 
        ///Byte Access Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> dbw{}; 
        ///Data Float Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        ///Page Mode Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmen{}; 
        ///Page Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ps{}; 
    }
    namespace SmcSetup6{    ///<SMC Setup Register (CS_number = 6)
        using Addr = Register::Address<0xffffec60,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse6{    ///<SMC Pulse Register (CS_number = 6)
        using Addr = Register::Address<0xffffec64,0x80808080,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle6{    ///<SMC Cycle Register (CS_number = 6)
        using Addr = Register::Address<0xffffec68,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode6{    ///<SMC Mode Register (CS_number = 6)
        using Addr = Register::Address<0xffffec6c,0xcee0cecc,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readMode{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeMode{}; 
        ///NWAIT Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> exnwMode{}; 
        ///Byte Access Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> dbw{}; 
        ///Data Float Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        ///Page Mode Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmen{}; 
        ///Page Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ps{}; 
    }
    namespace SmcSetup7{    ///<SMC Setup Register (CS_number = 7)
        using Addr = Register::Address<0xffffec70,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse7{    ///<SMC Pulse Register (CS_number = 7)
        using Addr = Register::Address<0xffffec74,0x80808080,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle7{    ///<SMC Cycle Register (CS_number = 7)
        using Addr = Register::Address<0xffffec78,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode7{    ///<SMC Mode Register (CS_number = 7)
        using Addr = Register::Address<0xffffec7c,0xcee0cecc,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readMode{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeMode{}; 
        ///NWAIT Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> exnwMode{}; 
        ///Byte Access Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> dbw{}; 
        ///Data Float Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        ///Page Mode Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmen{}; 
        ///Page Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ps{}; 
    }
}
