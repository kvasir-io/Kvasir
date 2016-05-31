#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Pbstd0Pb{    ///<Output Latch
        using Addr = Register::Address<0x4002a0a0,0xffff0000,0x00000000,unsigned>;
        ///Output Latch. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pb{}; 
    }
    namespace Pbstd0Pbpin{    ///<Pin Value
        using Addr = Register::Address<0x4002a0b0,0xffff0000,0x00000000,unsigned>;
        ///Pin Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pbpin{}; 
    }
    namespace Pbstd0Pbmdsel{    ///<Mode Select
        using Addr = Register::Address<0x4002a0c0,0xffff0000,0x00000000,unsigned>;
        ///Mode Select. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbmdsel{}; 
    }
    namespace Pbstd0Pbskipen{    ///<Crossbar Pin Skip Enable
        using Addr = Register::Address<0x4002a0d0,0xffff0000,0x00000000,unsigned>;
        ///Crossbar Pin Skip Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbskipen{}; 
    }
    namespace Pbstd0Pboutmd{    ///<Output Mode
        using Addr = Register::Address<0x4002a0e0,0xffff0000,0x00000000,unsigned>;
        ///Output Mode. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pboutmd{}; 
    }
    namespace Pbstd0Pbdrv{    ///<Drive Strength
        using Addr = Register::Address<0x4002a0f0,0xfffe0000,0x00000000,unsigned>;
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
    namespace Pbstd0Pm{    ///<Port Match Value
        using Addr = Register::Address<0x4002a100,0xffff0000,0x00000000,unsigned>;
        ///Port Match Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pm{}; 
    }
    namespace Pbstd0Pmen{    ///<Port Match Enable
        using Addr = Register::Address<0x4002a110,0xffff0000,0x00000000,unsigned>;
        ///Port Match Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pmen{}; 
    }
    namespace Pbstd0Pbpgen{    ///<Pulse Generator Pin Enable
        using Addr = Register::Address<0x4002a120,0xfffff000,0x00000000,unsigned>;
        ///Pulse Generator Pin Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> pbpgen{}; 
    }
    namespace Pbstd0Pbpgphase{    ///<Pulse Generator Phase
        using Addr = Register::Address<0x4002a130,0xf000f000,0x00000000,unsigned>;
        ///Pulse Generator Phase 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> pbpgph0{}; 
        ///Pulse Generator Phase 1. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> pbpgph1{}; 
    }
}
