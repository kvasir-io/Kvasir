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
        enum class endecbVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace endecbValC{
            constexpr MPL::Value<endecbVal,endecbVal::disabled> disabled{};
            constexpr MPL::Value<endecbVal,endecbVal::enabled> enabled{};
            constexpr MPL::Value<endecbVal,endecbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,endecbVal> endecb{}; 
        ///Write '1' to Enable interrupt on EVENTS_ERRORECB event
        enum class errorecbVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace errorecbValC{
            constexpr MPL::Value<errorecbVal,errorecbVal::disabled> disabled{};
            constexpr MPL::Value<errorecbVal,errorecbVal::enabled> enabled{};
            constexpr MPL::Value<errorecbVal,errorecbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,errorecbVal> errorecb{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x4000e308,0xfffffffc,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_ENDECB event
        enum class endecbVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace endecbValC{
            constexpr MPL::Value<endecbVal,endecbVal::disabled> disabled{};
            constexpr MPL::Value<endecbVal,endecbVal::enabled> enabled{};
            constexpr MPL::Value<endecbVal,endecbVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,endecbVal> endecb{}; 
        ///Write '1' to Clear interrupt on EVENTS_ERRORECB event
        enum class errorecbVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace errorecbValC{
            constexpr MPL::Value<errorecbVal,errorecbVal::disabled> disabled{};
            constexpr MPL::Value<errorecbVal,errorecbVal::enabled> enabled{};
            constexpr MPL::Value<errorecbVal,errorecbVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,errorecbVal> errorecb{}; 
    }
    namespace Noneecbdataptr{    ///<ECB block encrypt memory pointers
        using Addr = Register::Address<0x4000e504,0x00000000,0,unsigned>;
        ///Pointer to the ECB data structure (see Table 1 ECB data structure overview)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ecbdataptr{}; 
    }
}
