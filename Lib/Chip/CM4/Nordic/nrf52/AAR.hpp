#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Accelerated Address Resolver
    namespace AarTasksStart{    ///<Start resolving addresses based on IRKs specified in the IRK data structure
        using Addr = Register::Address<0x4000f000,0xffffffff,0x00000000,unsigned>;
    }
    namespace AarTasksStop{    ///<Stop resolving addresses
        using Addr = Register::Address<0x4000f008,0xffffffff,0x00000000,unsigned>;
    }
    namespace AarEventsEnd{    ///<Address resolution procedure complete
        using Addr = Register::Address<0x4000f100,0xffffffff,0x00000000,unsigned>;
    }
    namespace AarEventsResolved{    ///<Address resolved
        using Addr = Register::Address<0x4000f104,0xffffffff,0x00000000,unsigned>;
    }
    namespace AarEventsNotresolved{    ///<Address not resolved
        using Addr = Register::Address<0x4000f108,0xffffffff,0x00000000,unsigned>;
    }
    namespace AarIntenset{    ///<Enable interrupt
        using Addr = Register::Address<0x4000f304,0xfffffff8,0x00000000,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_END event
        enum class EndVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_RESOLVED event
        enum class ResolvedVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ResolvedVal> resolved{}; 
        namespace ResolvedValC{
            constexpr Register::FieldValue<decltype(resolved)::Type,ResolvedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(resolved)::Type,ResolvedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(resolved)::Type,ResolvedVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_NOTRESOLVED event
        enum class NotresolvedVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NotresolvedVal> notresolved{}; 
        namespace NotresolvedValC{
            constexpr Register::FieldValue<decltype(notresolved)::Type,NotresolvedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(notresolved)::Type,NotresolvedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(notresolved)::Type,NotresolvedVal::set> set{};
        }
    }
    namespace AarIntenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x4000f308,0xfffffff8,0x00000000,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_END event
        enum class EndVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_RESOLVED event
        enum class ResolvedVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ResolvedVal> resolved{}; 
        namespace ResolvedValC{
            constexpr Register::FieldValue<decltype(resolved)::Type,ResolvedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(resolved)::Type,ResolvedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(resolved)::Type,ResolvedVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_NOTRESOLVED event
        enum class NotresolvedVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NotresolvedVal> notresolved{}; 
        namespace NotresolvedValC{
            constexpr Register::FieldValue<decltype(notresolved)::Type,NotresolvedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(notresolved)::Type,NotresolvedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(notresolved)::Type,NotresolvedVal::clear> clear{};
        }
    }
    namespace AarStatus{    ///<Resolution status
        using Addr = Register::Address<0x4000f400,0xfffffff0,0x00000000,unsigned>;
        ///The IRK that was used last time an address was resolved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> status{}; 
    }
    namespace AarEnable{    ///<Enable AAR
        using Addr = Register::Address<0x4000f500,0xfffffffc,0x00000000,unsigned>;
        ///Enable or disable AAR
        enum class EnableVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000003,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::enabled> enabled{};
        }
    }
    namespace AarNirk{    ///<Number of IRKs
        using Addr = Register::Address<0x4000f504,0xffffffe0,0x00000000,unsigned>;
        ///Number of Identity root keys available in the IRK data structure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> nirk{}; 
    }
    namespace AarIrkptr{    ///<Pointer to IRK data structure
        using Addr = Register::Address<0x4000f508,0x00000000,0x00000000,unsigned>;
        ///Pointer to the IRK data structure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> irkptr{}; 
    }
    namespace AarAddrptr{    ///<Pointer to the resolvable address
        using Addr = Register::Address<0x4000f510,0x00000000,0x00000000,unsigned>;
        ///Pointer to the resolvable address (6-bytes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addrptr{}; 
    }
    namespace AarScratchptr{    ///<Pointer to data area used for temporary storage
        using Addr = Register::Address<0x4000f514,0x00000000,0x00000000,unsigned>;
        ///Pointer to a "scratch" data area used for temporary storage during resolution.A space of minimum 3 bytes must be reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> scratchptr{}; 
    }
}
