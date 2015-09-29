#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//AES ECB Mode Encryption.
    namespace NonetasksStartecb{    ///<Start ECB block encrypt. If a crypto operation is running, this will not initiate a new encryption and the ERRORECB event will be triggered.
        using Addr = Register::Address<0x4000e000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStopecb{    ///<Stop current ECB encryption. If a crypto operation is running, this will will trigger the ERRORECB event.
        using Addr = Register::Address<0x4000e004,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEndecb{    ///<ECB block encrypt complete.
        using Addr = Register::Address<0x4000e100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsErrorecb{    ///<ECB block encrypt aborted due to a STOPECB task or due to an error.
        using Addr = Register::Address<0x4000e104,0xffffffff,0,unsigned>;
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x4000e304,0xfffffffc,0,unsigned>;
        ///Enable interrupt on ENDECB event.
        enum class endecbVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace endecbValC{
            constexpr MPL::Value<endecbVal,endecbVal::disabled> disabled{};
            constexpr MPL::Value<endecbVal,endecbVal::enabled> enabled{};
            constexpr MPL::Value<endecbVal,endecbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,endecbVal> endecb{}; 
        ///Enable interrupt on ERRORECB event.
        enum class errorecbVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace errorecbValC{
            constexpr MPL::Value<errorecbVal,errorecbVal::disabled> disabled{};
            constexpr MPL::Value<errorecbVal,errorecbVal::enabled> enabled{};
            constexpr MPL::Value<errorecbVal,errorecbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,errorecbVal> errorecb{}; 
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x4000e308,0xfffffffc,0,unsigned>;
        ///Disable interrupt on ENDECB event.
        enum class endecbVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace endecbValC{
            constexpr MPL::Value<endecbVal,endecbVal::disabled> disabled{};
            constexpr MPL::Value<endecbVal,endecbVal::enabled> enabled{};
            constexpr MPL::Value<endecbVal,endecbVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,endecbVal> endecb{}; 
        ///Disable interrupt on ERRORECB event.
        enum class errorecbVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace errorecbValC{
            constexpr MPL::Value<errorecbVal,errorecbVal::disabled> disabled{};
            constexpr MPL::Value<errorecbVal,errorecbVal::enabled> enabled{};
            constexpr MPL::Value<errorecbVal,errorecbVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,errorecbVal> errorecb{}; 
    }
    namespace Noneecbdataptr{    ///<ECB block encrypt memory pointer.
        using Addr = Register::Address<0x4000e504,0xffffffff,0,unsigned>;
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x4000effc,0xfffffffe,0,unsigned>;
        ///Peripheral power control.
        enum class powerVal {
            disabled=0x00000000,     ///<Module power disabled.
            enabled=0x00000001,     ///<Module power enabled.
        };
        namespace powerValC{
            constexpr MPL::Value<powerVal,powerVal::disabled> disabled{};
            constexpr MPL::Value<powerVal,powerVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,powerVal> power{}; 
    }
}
