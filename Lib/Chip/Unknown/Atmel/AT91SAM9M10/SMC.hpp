#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Static Memory Controller
    namespace SmcSetup0{    ///<SMC Setup Register (CS_number = 0)
        using Addr = Register::Address<0xffffe800,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        namespace NwesetupValC{
        }
        ///NCS Setup Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        namespace NcswrsetupValC{
        }
        ///NRD Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        namespace NrdsetupValC{
        }
        ///NCS Setup Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
        namespace NcsrdsetupValC{
        }
    }
    namespace SmcPulse0{    ///<SMC Pulse Register (CS_number = 0)
        using Addr = Register::Address<0xffffe804,0x80808080,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        namespace NwepulseValC{
        }
        ///NCS Pulse Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        namespace NcswrpulseValC{
        }
        ///NRD Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        namespace NrdpulseValC{
        }
        ///NCS Pulse Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
        namespace NcsrdpulseValC{
        }
    }
    namespace SmcCycle0{    ///<SMC Cycle Register (CS_number = 0)
        using Addr = Register::Address<0xffffe808,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        namespace NwecycleValC{
        }
        ///Total Read Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
        namespace NrdcycleValC{
        }
    }
    namespace SmcMode0{    ///<SMC Mode Register (CS_number = 0)
        using Addr = Register::Address<0xffffe80c,0xcee0cecc,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readMode{}; 
        namespace ReadmodeValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeMode{}; 
        namespace WritemodeValC{
        }
        ///NWAIT Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> exnwMode{}; 
        namespace ExnwmodeValC{
        }
        ///Byte Access Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        namespace BatValC{
        }
        ///Data Bus Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> dbw{}; 
        namespace DbwValC{
        }
        ///Data Float Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        namespace TdfcyclesValC{
        }
        ///TDF Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        namespace TdfmodeValC{
        }
        ///Page Mode Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmen{}; 
        namespace PmenValC{
        }
        ///Page Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ps{}; 
        namespace PsValC{
        }
    }
    namespace SmcSetup1{    ///<SMC Setup Register (CS_number = 1)
        using Addr = Register::Address<0xffffe810,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        namespace NwesetupValC{
        }
        ///NCS Setup Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        namespace NcswrsetupValC{
        }
        ///NRD Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        namespace NrdsetupValC{
        }
        ///NCS Setup Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
        namespace NcsrdsetupValC{
        }
    }
    namespace SmcPulse1{    ///<SMC Pulse Register (CS_number = 1)
        using Addr = Register::Address<0xffffe814,0x80808080,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        namespace NwepulseValC{
        }
        ///NCS Pulse Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        namespace NcswrpulseValC{
        }
        ///NRD Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        namespace NrdpulseValC{
        }
        ///NCS Pulse Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
        namespace NcsrdpulseValC{
        }
    }
    namespace SmcCycle1{    ///<SMC Cycle Register (CS_number = 1)
        using Addr = Register::Address<0xffffe818,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        namespace NwecycleValC{
        }
        ///Total Read Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
        namespace NrdcycleValC{
        }
    }
    namespace SmcMode1{    ///<SMC Mode Register (CS_number = 1)
        using Addr = Register::Address<0xffffe81c,0xcee0cecc,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readMode{}; 
        namespace ReadmodeValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeMode{}; 
        namespace WritemodeValC{
        }
        ///NWAIT Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> exnwMode{}; 
        namespace ExnwmodeValC{
        }
        ///Byte Access Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        namespace BatValC{
        }
        ///Data Bus Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> dbw{}; 
        namespace DbwValC{
        }
        ///Data Float Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        namespace TdfcyclesValC{
        }
        ///TDF Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        namespace TdfmodeValC{
        }
        ///Page Mode Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmen{}; 
        namespace PmenValC{
        }
        ///Page Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ps{}; 
        namespace PsValC{
        }
    }
    namespace SmcSetup2{    ///<SMC Setup Register (CS_number = 2)
        using Addr = Register::Address<0xffffe820,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        namespace NwesetupValC{
        }
        ///NCS Setup Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        namespace NcswrsetupValC{
        }
        ///NRD Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        namespace NrdsetupValC{
        }
        ///NCS Setup Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
        namespace NcsrdsetupValC{
        }
    }
    namespace SmcPulse2{    ///<SMC Pulse Register (CS_number = 2)
        using Addr = Register::Address<0xffffe824,0x80808080,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        namespace NwepulseValC{
        }
        ///NCS Pulse Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        namespace NcswrpulseValC{
        }
        ///NRD Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        namespace NrdpulseValC{
        }
        ///NCS Pulse Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
        namespace NcsrdpulseValC{
        }
    }
    namespace SmcCycle2{    ///<SMC Cycle Register (CS_number = 2)
        using Addr = Register::Address<0xffffe828,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        namespace NwecycleValC{
        }
        ///Total Read Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
        namespace NrdcycleValC{
        }
    }
    namespace SmcMode2{    ///<SMC Mode Register (CS_number = 2)
        using Addr = Register::Address<0xffffe82c,0xcee0cecc,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readMode{}; 
        namespace ReadmodeValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeMode{}; 
        namespace WritemodeValC{
        }
        ///NWAIT Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> exnwMode{}; 
        namespace ExnwmodeValC{
        }
        ///Byte Access Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        namespace BatValC{
        }
        ///Data Bus Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> dbw{}; 
        namespace DbwValC{
        }
        ///Data Float Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        namespace TdfcyclesValC{
        }
        ///TDF Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        namespace TdfmodeValC{
        }
        ///Page Mode Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmen{}; 
        namespace PmenValC{
        }
        ///Page Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ps{}; 
        namespace PsValC{
        }
    }
    namespace SmcSetup3{    ///<SMC Setup Register (CS_number = 3)
        using Addr = Register::Address<0xffffe830,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        namespace NwesetupValC{
        }
        ///NCS Setup Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        namespace NcswrsetupValC{
        }
        ///NRD Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        namespace NrdsetupValC{
        }
        ///NCS Setup Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
        namespace NcsrdsetupValC{
        }
    }
    namespace SmcPulse3{    ///<SMC Pulse Register (CS_number = 3)
        using Addr = Register::Address<0xffffe834,0x80808080,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        namespace NwepulseValC{
        }
        ///NCS Pulse Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        namespace NcswrpulseValC{
        }
        ///NRD Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        namespace NrdpulseValC{
        }
        ///NCS Pulse Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
        namespace NcsrdpulseValC{
        }
    }
    namespace SmcCycle3{    ///<SMC Cycle Register (CS_number = 3)
        using Addr = Register::Address<0xffffe838,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        namespace NwecycleValC{
        }
        ///Total Read Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
        namespace NrdcycleValC{
        }
    }
    namespace SmcMode3{    ///<SMC Mode Register (CS_number = 3)
        using Addr = Register::Address<0xffffe83c,0xcee0cecc,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readMode{}; 
        namespace ReadmodeValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeMode{}; 
        namespace WritemodeValC{
        }
        ///NWAIT Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> exnwMode{}; 
        namespace ExnwmodeValC{
        }
        ///Byte Access Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        namespace BatValC{
        }
        ///Data Bus Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> dbw{}; 
        namespace DbwValC{
        }
        ///Data Float Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        namespace TdfcyclesValC{
        }
        ///TDF Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        namespace TdfmodeValC{
        }
        ///Page Mode Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmen{}; 
        namespace PmenValC{
        }
        ///Page Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ps{}; 
        namespace PsValC{
        }
    }
    namespace SmcSetup4{    ///<SMC Setup Register (CS_number = 4)
        using Addr = Register::Address<0xffffe840,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        namespace NwesetupValC{
        }
        ///NCS Setup Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        namespace NcswrsetupValC{
        }
        ///NRD Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        namespace NrdsetupValC{
        }
        ///NCS Setup Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
        namespace NcsrdsetupValC{
        }
    }
    namespace SmcPulse4{    ///<SMC Pulse Register (CS_number = 4)
        using Addr = Register::Address<0xffffe844,0x80808080,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        namespace NwepulseValC{
        }
        ///NCS Pulse Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        namespace NcswrpulseValC{
        }
        ///NRD Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        namespace NrdpulseValC{
        }
        ///NCS Pulse Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
        namespace NcsrdpulseValC{
        }
    }
    namespace SmcCycle4{    ///<SMC Cycle Register (CS_number = 4)
        using Addr = Register::Address<0xffffe848,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        namespace NwecycleValC{
        }
        ///Total Read Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
        namespace NrdcycleValC{
        }
    }
    namespace SmcMode4{    ///<SMC Mode Register (CS_number = 4)
        using Addr = Register::Address<0xffffe84c,0xcee0cecc,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readMode{}; 
        namespace ReadmodeValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeMode{}; 
        namespace WritemodeValC{
        }
        ///NWAIT Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> exnwMode{}; 
        namespace ExnwmodeValC{
        }
        ///Byte Access Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        namespace BatValC{
        }
        ///Data Bus Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> dbw{}; 
        namespace DbwValC{
        }
        ///Data Float Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        namespace TdfcyclesValC{
        }
        ///TDF Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        namespace TdfmodeValC{
        }
        ///Page Mode Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmen{}; 
        namespace PmenValC{
        }
        ///Page Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ps{}; 
        namespace PsValC{
        }
    }
    namespace SmcSetup5{    ///<SMC Setup Register (CS_number = 5)
        using Addr = Register::Address<0xffffe850,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        namespace NwesetupValC{
        }
        ///NCS Setup Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        namespace NcswrsetupValC{
        }
        ///NRD Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        namespace NrdsetupValC{
        }
        ///NCS Setup Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
        namespace NcsrdsetupValC{
        }
    }
    namespace SmcPulse5{    ///<SMC Pulse Register (CS_number = 5)
        using Addr = Register::Address<0xffffe854,0x80808080,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        namespace NwepulseValC{
        }
        ///NCS Pulse Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        namespace NcswrpulseValC{
        }
        ///NRD Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        namespace NrdpulseValC{
        }
        ///NCS Pulse Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
        namespace NcsrdpulseValC{
        }
    }
    namespace SmcCycle5{    ///<SMC Cycle Register (CS_number = 5)
        using Addr = Register::Address<0xffffe858,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        namespace NwecycleValC{
        }
        ///Total Read Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
        namespace NrdcycleValC{
        }
    }
    namespace SmcMode5{    ///<SMC Mode Register (CS_number = 5)
        using Addr = Register::Address<0xffffe85c,0xcee0cecc,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readMode{}; 
        namespace ReadmodeValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeMode{}; 
        namespace WritemodeValC{
        }
        ///NWAIT Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> exnwMode{}; 
        namespace ExnwmodeValC{
        }
        ///Byte Access Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        namespace BatValC{
        }
        ///Data Bus Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> dbw{}; 
        namespace DbwValC{
        }
        ///Data Float Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        namespace TdfcyclesValC{
        }
        ///TDF Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        namespace TdfmodeValC{
        }
        ///Page Mode Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmen{}; 
        namespace PmenValC{
        }
        ///Page Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ps{}; 
        namespace PsValC{
        }
    }
    namespace SmcDelay1{    ///<SMC Delay on I/O
        using Addr = Register::Address<0xffffe8c0,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> delay1{}; 
        namespace Delay1ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> delay2{}; 
        namespace Delay2ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> delay3{}; 
        namespace Delay3ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> delay4{}; 
        namespace Delay4ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> delay5{}; 
        namespace Delay5ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> delay6{}; 
        namespace Delay6ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> delay7{}; 
        namespace Delay7ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> delay8{}; 
        namespace Delay8ValC{
        }
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
