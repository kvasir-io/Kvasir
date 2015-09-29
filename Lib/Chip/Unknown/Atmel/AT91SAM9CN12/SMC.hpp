#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Static Memory Controller
    namespace SmcSetup0{    ///<SMC Setup Register (CS_number = 0)
        using Addr = Register::Address<0xffffea00,0xc0c0c0c0,0,unsigned>;
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
        using Addr = Register::Address<0xffffea04,0x80808080,0,unsigned>;
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
        using Addr = Register::Address<0xffffea08,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode0{    ///<SMC Mode Register (CS_number = 0)
        using Addr = Register::Address<0xffffea0c,0xcee0cecc,0,unsigned>;
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
        using Addr = Register::Address<0xffffea10,0xc0c0c0c0,0,unsigned>;
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
        using Addr = Register::Address<0xffffea14,0x80808080,0,unsigned>;
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
        using Addr = Register::Address<0xffffea18,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode1{    ///<SMC Mode Register (CS_number = 1)
        using Addr = Register::Address<0xffffea1c,0xcee0cecc,0,unsigned>;
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
        using Addr = Register::Address<0xffffea20,0xc0c0c0c0,0,unsigned>;
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
        using Addr = Register::Address<0xffffea24,0x80808080,0,unsigned>;
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
        using Addr = Register::Address<0xffffea28,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode2{    ///<SMC Mode Register (CS_number = 2)
        using Addr = Register::Address<0xffffea2c,0xcee0cecc,0,unsigned>;
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
        using Addr = Register::Address<0xffffea30,0xc0c0c0c0,0,unsigned>;
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
        using Addr = Register::Address<0xffffea34,0x80808080,0,unsigned>;
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
        using Addr = Register::Address<0xffffea38,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode3{    ///<SMC Mode Register (CS_number = 3)
        using Addr = Register::Address<0xffffea3c,0xcee0cecc,0,unsigned>;
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
        using Addr = Register::Address<0xffffea40,0xc0c0c0c0,0,unsigned>;
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
        using Addr = Register::Address<0xffffea44,0x80808080,0,unsigned>;
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
        using Addr = Register::Address<0xffffea48,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode4{    ///<SMC Mode Register (CS_number = 4)
        using Addr = Register::Address<0xffffea4c,0xcee0cecc,0,unsigned>;
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
        using Addr = Register::Address<0xffffea50,0xc0c0c0c0,0,unsigned>;
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
        using Addr = Register::Address<0xffffea54,0x80808080,0,unsigned>;
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
        using Addr = Register::Address<0xffffea58,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode5{    ///<SMC Mode Register (CS_number = 5)
        using Addr = Register::Address<0xffffea5c,0xcee0cecc,0,unsigned>;
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
        using Addr = Register::Address<0xffffeac0,0x00000000,0,unsigned>;
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
        using Addr = Register::Address<0xffffeac4,0xffffffff,0,unsigned>;
    }
    namespace SmcDelay3{    ///<SMC Delay on I/O
        using Addr = Register::Address<0xffffeac8,0xffffffff,0,unsigned>;
    }
    namespace SmcDelay4{    ///<SMC Delay on I/O
        using Addr = Register::Address<0xffffeacc,0xffffffff,0,unsigned>;
    }
    namespace SmcDelay5{    ///<SMC Delay on I/O
        using Addr = Register::Address<0xffffead0,0xffffffff,0,unsigned>;
    }
    namespace SmcDelay6{    ///<SMC Delay on I/O
        using Addr = Register::Address<0xffffead4,0xffffffff,0,unsigned>;
    }
    namespace SmcDelay7{    ///<SMC Delay on I/O
        using Addr = Register::Address<0xffffead8,0xffffffff,0,unsigned>;
    }
    namespace SmcDelay8{    ///<SMC Delay on I/O
        using Addr = Register::Address<0xffffeadc,0xffffffff,0,unsigned>;
    }
    namespace SmcWpmr{    ///<SMC Write Protect Mode Register
        using Addr = Register::Address<0xffffeae4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace SmcWpsr{    ///<SMC Write Protect Status Register
        using Addr = Register::Address<0xffffeae8,0xff0000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
}
