#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Accelerated Address Resolver.
    namespace NonetasksStart{    ///<Start resolving addresses based on IRKs specified in the IRK data structure.
        using Addr = Register::Address<0x4000f000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop resolving addresses.
        using Addr = Register::Address<0x4000f008,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEnd{    ///<Address resolution procedure completed.
        using Addr = Register::Address<0x4000f100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsResolved{    ///<Address resolved.
        using Addr = Register::Address<0x4000f104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsNotresolved{    ///<Address not resolved.
        using Addr = Register::Address<0x4000f108,0xffffffff,0,unsigned>;
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x4000f304,0xfffffff8,0,unsigned>;
        ///Enable interrupt on END event.
        enum class EndVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::set> set{};
        }
        }
        ///Enable interrupt on RESOLVED event.
        enum class ResolvedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ResolvedVal> resolved{}; 
        namespace ResolvedValC{
            constexpr Register::FieldValue<decltype(resolved)::Type,ResolvedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(resolved)::Type,ResolvedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(resolved)::Type,ResolvedVal::set> set{};
        }
        }
        ///Enable interrupt on NOTRESOLVED event.
        enum class NotresolvedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NotresolvedVal> notresolved{}; 
        namespace NotresolvedValC{
            constexpr Register::FieldValue<decltype(notresolved)::Type,NotresolvedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(notresolved)::Type,NotresolvedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(notresolved)::Type,NotresolvedVal::set> set{};
        }
        }
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x4000f308,0xfffffff8,0,unsigned>;
        ///Disable interrupt on ENDKSGEN event.
        enum class EndVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::clear> clear{};
        }
        }
        ///Disable interrupt on RESOLVED event.
        enum class ResolvedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ResolvedVal> resolved{}; 
        namespace ResolvedValC{
            constexpr Register::FieldValue<decltype(resolved)::Type,ResolvedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(resolved)::Type,ResolvedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(resolved)::Type,ResolvedVal::clear> clear{};
        }
        }
        ///Disable interrupt on NOTRESOLVED event.
        enum class NotresolvedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NotresolvedVal> notresolved{}; 
        namespace NotresolvedValC{
            constexpr Register::FieldValue<decltype(notresolved)::Type,NotresolvedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(notresolved)::Type,NotresolvedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(notresolved)::Type,NotresolvedVal::clear> clear{};
        }
        }
    }
    namespace Nonestatus{    ///<Resolution status.
        using Addr = Register::Address<0x4000f400,0xfffffff0,0,unsigned>;
        ///The IRK used last time an address was resolved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> status{}; 
    }
    namespace Noneenable{    ///<Enable AAR.
        using Addr = Register::Address<0x4000f500,0xfffffffc,0,unsigned>;
        ///Enable AAR.
        enum class EnableVal {
            disabled=0x00000000,     ///<Disabled AAR.
            enabled=0x00000003,     ///<Enable AAR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::enabled> enabled{};
        }
        }
    }
    namespace Nonenirk{    ///<Number of Identity root Keys in the IRK data structure.
        using Addr = Register::Address<0x4000f504,0xffffffe0,0,unsigned>;
        ///Number of Identity root Keys in the IRK data structure.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> nirk{}; 
    }
    namespace Noneirkptr{    ///<Pointer to the IRK data structure.
        using Addr = Register::Address<0x4000f508,0xffffffff,0,unsigned>;
    }
    namespace Noneaddrptr{    ///<Pointer to the resolvable address (6 bytes).
        using Addr = Register::Address<0x4000f510,0xffffffff,0,unsigned>;
    }
    namespace Nonescratchptr{    ///<Pointer to a "scratch" data area used for temporary storage during resolution. A minimum of 3 bytes must be reserved.
        using Addr = Register::Address<0x4000f514,0xffffffff,0,unsigned>;
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x4000fffc,0xfffffffe,0,unsigned>;
        ///Peripheral power control.
        enum class PowerVal {
            disabled=0x00000000,     ///<Module power disabled.
            enabled=0x00000001,     ///<Module power enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PowerVal> power{}; 
        namespace PowerValC{
            constexpr Register::FieldValue<decltype(power)::Type,PowerVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(power)::Type,PowerVal::enabled> enabled{};
        }
        }
    }
}
