#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Pbstd2Pb{    ///<Output Latch
        using Addr = Register::Address<0x4002a1e0,0xffff0000,0x00000000,unsigned>;
        ///Output Latch. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pb{}; 
    }
    namespace Pbstd2Pbpin{    ///<Pin Value
        using Addr = Register::Address<0x4002a1f0,0xffff0000,0x00000000,unsigned>;
        ///Pin Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pbpin{}; 
    }
    namespace Pbstd2Pbmdsel{    ///<Mode Select
        using Addr = Register::Address<0x4002a200,0xffff0000,0x00000000,unsigned>;
        ///Mode Select. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbmdsel{}; 
    }
    namespace Pbstd2Pbskipen{    ///<Crossbar Pin Skip Enable
        using Addr = Register::Address<0x4002a210,0xffff0000,0x00000000,unsigned>;
        ///Crossbar Pin Skip Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbskipen{}; 
    }
    namespace Pbstd2Pboutmd{    ///<Output Mode
        using Addr = Register::Address<0x4002a220,0xffff0000,0x00000000,unsigned>;
        ///Output Mode. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pboutmd{}; 
    }
    namespace Pbstd2Pbdrv{    ///<Drive Strength
        using Addr = Register::Address<0x4002a230,0xfffe0000,0x00000000,unsigned>;
        ///Drive Strength. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbdrv{}; 
        ///Port Bank Weak Pull-up Enable. 
        enum class PbpuenVal {
            disabled=0x00000000,     ///<Disable weak pull-ups for this port.
            enabled=0x00000001,     ///<Enable weak pull-ups for this port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,PbpuenVal> pbpuen{}; 
        namespace PbpuenValC{
            constexpr Register::FieldValue<decltype(pbpuen)::Type,PbpuenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pbpuen)::Type,PbpuenVal::enabled> enabled{};
        }
    }
    namespace Pbstd2Pm{    ///<Port Match Value
        using Addr = Register::Address<0x4002a240,0xffff0000,0x00000000,unsigned>;
        ///Port Match Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pm{}; 
    }
    namespace Pbstd2Pmen{    ///<Port Match Enable
        using Addr = Register::Address<0x4002a250,0xffff0000,0x00000000,unsigned>;
        ///Port Match Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pmen{}; 
    }
    namespace Pbstd2Pblock{    ///<Lock Control
        using Addr = Register::Address<0x4002a260,0xffff0000,0x00000000,unsigned>;
        ///Port Bank Lock. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pblock{}; 
    }
    namespace Pbstd2Pbpgen{    ///<Pulse Generator Pin Enable
        using Addr = Register::Address<0x4002a270,0xffff0000,0x00000000,unsigned>;
        ///Pulse Generator Pin Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbpgen{}; 
    }
    namespace Pbstd2Pbpgphase{    ///<Pulse Generator Phase
        using Addr = Register::Address<0x4002a280,0x00000000,0x00000000,unsigned>;
        ///Pulse Generator Phase 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbpgph0{}; 
        ///Pulse Generator Phase 1. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> pbpgph1{}; 
    }
}
