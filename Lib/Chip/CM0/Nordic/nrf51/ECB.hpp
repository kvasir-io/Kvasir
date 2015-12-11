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
        enum class EndecbVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EndecbVal> endecb{}; 
        namespace EndecbValC{
            constexpr Register::FieldValue<decltype(endecb)::Type,EndecbVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endecb)::Type,EndecbVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endecb)::Type,EndecbVal::set> set{};
        }
        }
        ///Enable interrupt on ERRORECB event.
        enum class ErrorecbVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ErrorecbVal> errorecb{}; 
        namespace ErrorecbValC{
            constexpr Register::FieldValue<decltype(errorecb)::Type,ErrorecbVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(errorecb)::Type,ErrorecbVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(errorecb)::Type,ErrorecbVal::set> set{};
        }
        }
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x4000e308,0xfffffffc,0,unsigned>;
        ///Disable interrupt on ENDECB event.
        enum class EndecbVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EndecbVal> endecb{}; 
        namespace EndecbValC{
            constexpr Register::FieldValue<decltype(endecb)::Type,EndecbVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endecb)::Type,EndecbVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endecb)::Type,EndecbVal::clear> clear{};
        }
        }
        ///Disable interrupt on ERRORECB event.
        enum class ErrorecbVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ErrorecbVal> errorecb{}; 
        namespace ErrorecbValC{
            constexpr Register::FieldValue<decltype(errorecb)::Type,ErrorecbVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(errorecb)::Type,ErrorecbVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(errorecb)::Type,ErrorecbVal::clear> clear{};
        }
        }
    }
    namespace Noneecbdataptr{    ///<ECB block encrypt memory pointer.
        using Addr = Register::Address<0x4000e504,0xffffffff,0,unsigned>;
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x4000effc,0xfffffffe,0,unsigned>;
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
