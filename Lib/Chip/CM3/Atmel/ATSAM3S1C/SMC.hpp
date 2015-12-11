#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Static Memory Controller
    namespace SmcSetup0{    ///<SMC Setup Register (CS_number = 0)
        using Addr = Register::Address<0x400e0000,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse0{    ///<SMC Pulse Register (CS_number = 0)
        using Addr = Register::Address<0x400e0004,0x80808080,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle0{    ///<SMC Cycle Register (CS_number = 0)
        using Addr = Register::Address<0x400e0008,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode0{    ///<SMC Mode Register (CS_number = 0)
        using Addr = Register::Address<0x400e000c,0xcee0ffcc,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readMode{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeMode{}; 
        ///NWAIT Mode
        enum class ExnwmodeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,ExnwmodeVal> exnwMode{}; 
        namespace ExnwmodeValC{
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::frozen> frozen{};
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::ready> ready{};
        }
        ///Data Float Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        ///Page Mode Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmen{}; 
        ///Page Size
        enum class PsVal {
            v4Byte=0x00000000,     ///<4-byte page
            v8Byte=0x00000001,     ///<8-byte page
            v16Byte=0x00000002,     ///<16-byte page
            v32Byte=0x00000003,     ///<32-byte page
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v4Byte> v4Byte{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v32Byte> v32Byte{};
        }
    }
    namespace SmcSetup1{    ///<SMC Setup Register (CS_number = 1)
        using Addr = Register::Address<0x400e0010,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse1{    ///<SMC Pulse Register (CS_number = 1)
        using Addr = Register::Address<0x400e0014,0x80808080,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle1{    ///<SMC Cycle Register (CS_number = 1)
        using Addr = Register::Address<0x400e0018,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode1{    ///<SMC Mode Register (CS_number = 1)
        using Addr = Register::Address<0x400e001c,0xcee0ffcc,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readMode{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeMode{}; 
        ///NWAIT Mode
        enum class ExnwmodeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,ExnwmodeVal> exnwMode{}; 
        namespace ExnwmodeValC{
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::frozen> frozen{};
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::ready> ready{};
        }
        ///Data Float Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        ///Page Mode Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmen{}; 
        ///Page Size
        enum class PsVal {
            v4Byte=0x00000000,     ///<4-byte page
            v8Byte=0x00000001,     ///<8-byte page
            v16Byte=0x00000002,     ///<16-byte page
            v32Byte=0x00000003,     ///<32-byte page
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v4Byte> v4Byte{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v32Byte> v32Byte{};
        }
    }
    namespace SmcSetup2{    ///<SMC Setup Register (CS_number = 2)
        using Addr = Register::Address<0x400e0020,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse2{    ///<SMC Pulse Register (CS_number = 2)
        using Addr = Register::Address<0x400e0024,0x80808080,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle2{    ///<SMC Cycle Register (CS_number = 2)
        using Addr = Register::Address<0x400e0028,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode2{    ///<SMC Mode Register (CS_number = 2)
        using Addr = Register::Address<0x400e002c,0xcee0ffcc,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readMode{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeMode{}; 
        ///NWAIT Mode
        enum class ExnwmodeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,ExnwmodeVal> exnwMode{}; 
        namespace ExnwmodeValC{
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::frozen> frozen{};
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::ready> ready{};
        }
        ///Data Float Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        ///Page Mode Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmen{}; 
        ///Page Size
        enum class PsVal {
            v4Byte=0x00000000,     ///<4-byte page
            v8Byte=0x00000001,     ///<8-byte page
            v16Byte=0x00000002,     ///<16-byte page
            v32Byte=0x00000003,     ///<32-byte page
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v4Byte> v4Byte{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v32Byte> v32Byte{};
        }
    }
    namespace SmcSetup3{    ///<SMC Setup Register (CS_number = 3)
        using Addr = Register::Address<0x400e0030,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse3{    ///<SMC Pulse Register (CS_number = 3)
        using Addr = Register::Address<0x400e0034,0x80808080,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle3{    ///<SMC Cycle Register (CS_number = 3)
        using Addr = Register::Address<0x400e0038,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcMode3{    ///<SMC Mode Register (CS_number = 3)
        using Addr = Register::Address<0x400e003c,0xcee0ffcc,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readMode{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeMode{}; 
        ///NWAIT Mode
        enum class ExnwmodeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,ExnwmodeVal> exnwMode{}; 
        namespace ExnwmodeValC{
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::frozen> frozen{};
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::ready> ready{};
        }
        ///Data Float Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        ///Page Mode Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmen{}; 
        ///Page Size
        enum class PsVal {
            v4Byte=0x00000000,     ///<4-byte page
            v8Byte=0x00000001,     ///<8-byte page
            v16Byte=0x00000002,     ///<16-byte page
            v32Byte=0x00000003,     ///<32-byte page
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v4Byte> v4Byte{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v32Byte> v32Byte{};
        }
    }
    namespace SmcOcms{    ///<SMC OCMS MODE Register
        using Addr = Register::Address<0x400e0080,0xfff0fffe,0,unsigned>;
        ///Static Memory Controller Scrambling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> smse{}; 
        ///Chip Select (x = 0 to 3) Scrambling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cs0se{}; 
        ///Chip Select (x = 0 to 3) Scrambling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cs1se{}; 
        ///Chip Select (x = 0 to 3) Scrambling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cs2se{}; 
        ///Chip Select (x = 0 to 3) Scrambling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cs3se{}; 
    }
    namespace SmcKey1{    ///<SMC OCMS KEY1 Register
        using Addr = Register::Address<0x400e0084,0x00000000,0,unsigned>;
        ///Off Chip Memory Scrambling (OCMS) Key Part 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> key1{}; 
    }
    namespace SmcKey2{    ///<SMC OCMS KEY2 Register
        using Addr = Register::Address<0x400e0088,0x00000000,0,unsigned>;
        ///Off Chip Memory Scrambling (OCMS) Key Part 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> key2{}; 
    }
    namespace SmcWpmr{    ///<SMC Write Protect Mode Register
        using Addr = Register::Address<0x400e00e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace SmcWpsr{    ///<SMC Write Protect Status Register
        using Addr = Register::Address<0x400e00e8,0xff0000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
}
