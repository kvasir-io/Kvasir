#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Static Memory Controller
    namespace SmcSetup0{    ///<SMC Setup Register (CS_number = 0)
        using Addr = Register::Address<0xffffe800,0xc0c0c0c0,0,unsigned>;
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
        using Addr = Register::Address<0xffffe804,0x80808080,0,unsigned>;
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
        using Addr = Register::Address<0xffffe808,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode0{    ///<SMC Mode Register (CS_number = 0)
        using Addr = Register::Address<0xffffe80c,0xcee0cecc,0,unsigned>;
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
        using Addr = Register::Address<0xffffe810,0xc0c0c0c0,0,unsigned>;
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
        using Addr = Register::Address<0xffffe814,0x80808080,0,unsigned>;
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
        using Addr = Register::Address<0xffffe818,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode1{    ///<SMC Mode Register (CS_number = 1)
        using Addr = Register::Address<0xffffe81c,0xcee0cecc,0,unsigned>;
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
        using Addr = Register::Address<0xffffe820,0xc0c0c0c0,0,unsigned>;
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
        using Addr = Register::Address<0xffffe824,0x80808080,0,unsigned>;
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
        using Addr = Register::Address<0xffffe828,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode2{    ///<SMC Mode Register (CS_number = 2)
        using Addr = Register::Address<0xffffe82c,0xcee0cecc,0,unsigned>;
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
        using Addr = Register::Address<0xffffe830,0xc0c0c0c0,0,unsigned>;
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
        using Addr = Register::Address<0xffffe834,0x80808080,0,unsigned>;
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
        using Addr = Register::Address<0xffffe838,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode3{    ///<SMC Mode Register (CS_number = 3)
        using Addr = Register::Address<0xffffe83c,0xcee0cecc,0,unsigned>;
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
        using Addr = Register::Address<0xffffe840,0xc0c0c0c0,0,unsigned>;
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
        using Addr = Register::Address<0xffffe844,0x80808080,0,unsigned>;
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
        using Addr = Register::Address<0xffffe848,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode4{    ///<SMC Mode Register (CS_number = 4)
        using Addr = Register::Address<0xffffe84c,0xcee0cecc,0,unsigned>;
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
        using Addr = Register::Address<0xffffe850,0xc0c0c0c0,0,unsigned>;
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
        using Addr = Register::Address<0xffffe854,0x80808080,0,unsigned>;
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
        using Addr = Register::Address<0xffffe858,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode5{    ///<SMC Mode Register (CS_number = 5)
        using Addr = Register::Address<0xffffe85c,0xcee0cecc,0,unsigned>;
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
    namespace SmcDelay1{    ///<SMC Delay on I/O
        using Addr = Register::Address<0xffffe8c0,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> delay1{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> delay2{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> delay3{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> delay4{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> delay5{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> delay6{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> delay7{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> delay8{}; 
    }
    namespace SmcDelay2{    ///<SMC Delay on I/O
        using Addr = Register::Address<0xffffe8c4,0xffffffff,0,unsigned>;
    }
    namespace SmcDelay3{    ///<SMC Delay on I/O
        using Addr = Register::Address<0xffffe8c8,0xffffffff,0,unsigned>;
    }
    namespace SmcDelay4{    ///<SMC Delay on I/O
        using Addr = Register::Address<0xffffe8cc,0xffffffff,0,unsigned>;
    }
    namespace SmcDelay5{    ///<SMC Delay on I/O
        using Addr = Register::Address<0xffffe8d0,0xffffffff,0,unsigned>;
    }
    namespace SmcDelay6{    ///<SMC Delay on I/O
        using Addr = Register::Address<0xffffe8d4,0xffffffff,0,unsigned>;
    }
    namespace SmcDelay7{    ///<SMC Delay on I/O
        using Addr = Register::Address<0xffffe8d8,0xffffffff,0,unsigned>;
    }
    namespace SmcDelay8{    ///<SMC Delay on I/O
        using Addr = Register::Address<0xffffe8dc,0xffffffff,0,unsigned>;
    }
}
