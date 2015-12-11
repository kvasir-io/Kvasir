#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//AES ECB Mode Encryption
    namespace NonetasksStartecb{    ///<Start ECB block encrypt
        using Addr = Register::Address<0x4000e000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStopecb{    ///<Abort a possible executing ECB operation
        using Addr = Register::Address<0x4000e004,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEndecb{    ///<ECB block encrypt complete
        using Addr = Register::Address<0x4000e100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsErrorecb{    ///<ECB block encrypt aborted because of a STOPECB task or due to an error
        using Addr = Register::Address<0x4000e104,0xffffffff,0,unsigned>;
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x4000e304,0xfffffffc,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_ENDECB event
        enum class EndecbVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EndecbVal> endecb{}; 
        namespace EndecbValC{
            constexpr Register::FieldValue<decltype(endecb)::Type,EndecbVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endecb)::Type,EndecbVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endecb)::Type,EndecbVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_ERRORECB event
        enum class ErrorecbVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ErrorecbVal> errorecb{}; 
        namespace ErrorecbValC{
            constexpr Register::FieldValue<decltype(errorecb)::Type,ErrorecbVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(errorecb)::Type,ErrorecbVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(errorecb)::Type,ErrorecbVal::set> set{};
        }
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x4000e308,0xfffffffc,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_ENDECB event
        enum class EndecbVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EndecbVal> endecb{}; 
        namespace EndecbValC{
            constexpr Register::FieldValue<decltype(endecb)::Type,EndecbVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endecb)::Type,EndecbVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endecb)::Type,EndecbVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_ERRORECB event
        enum class ErrorecbVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ErrorecbVal> errorecb{}; 
        namespace ErrorecbValC{
            constexpr Register::FieldValue<decltype(errorecb)::Type,ErrorecbVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(errorecb)::Type,ErrorecbVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(errorecb)::Type,ErrorecbVal::clear> clear{};
        }
    }
    namespace Noneecbdataptr{    ///<ECB block encrypt memory pointers
        using Addr = Register::Address<0x4000e504,0x00000000,0,unsigned>;
        ///Pointer to the ECB data structure (see Table 1 ECB data structure overview)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ecbdataptr{}; 
    }
}
