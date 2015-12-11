#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//AES CCM Mode Encryption.
    namespace NonetasksKsgen{    ///<Start generation of key-stream. This operation will stop by itself when completed.
        using Addr = Register::Address<0x4000f000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCrypt{    ///<Start encrypt/decrypt. This operation will stop by itself when completed.
        using Addr = Register::Address<0x4000f004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop encrypt/decrypt.
        using Addr = Register::Address<0x4000f008,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEndksgen{    ///<Keystream generation completed.
        using Addr = Register::Address<0x4000f100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEndcrypt{    ///<Encrypt/decrypt completed.
        using Addr = Register::Address<0x4000f104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsError{    ///<Error happened.
        using Addr = Register::Address<0x4000f108,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcuts for the CCM.
        using Addr = Register::Address<0x4000f200,0xfffffffe,0,unsigned>;
        ///Shortcut between ENDKSGEN event and CRYPT task.
        enum class EndksgencryptVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EndksgencryptVal> endksgenCrypt{}; 
        namespace EndksgencryptValC{
            constexpr Register::FieldValue<decltype(endksgenCrypt)::Type,EndksgencryptVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endksgenCrypt)::Type,EndksgencryptVal::enabled> enabled{};
        }
        }
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x4000f304,0xfffffff8,0,unsigned>;
        ///Enable interrupt on ENDKSGEN event.
        enum class EndksgenVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EndksgenVal> endksgen{}; 
        namespace EndksgenValC{
            constexpr Register::FieldValue<decltype(endksgen)::Type,EndksgenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endksgen)::Type,EndksgenVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endksgen)::Type,EndksgenVal::set> set{};
        }
        }
        ///Enable interrupt on ENDCRYPT event.
        enum class EndcryptVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EndcryptVal> endcrypt{}; 
        namespace EndcryptValC{
            constexpr Register::FieldValue<decltype(endcrypt)::Type,EndcryptVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endcrypt)::Type,EndcryptVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endcrypt)::Type,EndcryptVal::set> set{};
        }
        }
        ///Enable interrupt on ERROR event.
        enum class ErrorVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ErrorVal> error{}; 
        namespace ErrorValC{
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::set> set{};
        }
        }
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x4000f308,0xfffffff8,0,unsigned>;
        ///Disable interrupt on ENDKSGEN event.
        enum class EndksgenVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EndksgenVal> endksgen{}; 
        namespace EndksgenValC{
            constexpr Register::FieldValue<decltype(endksgen)::Type,EndksgenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endksgen)::Type,EndksgenVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endksgen)::Type,EndksgenVal::clear> clear{};
        }
        }
        ///Disable interrupt on ENDCRYPT event.
        enum class EndcryptVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EndcryptVal> endcrypt{}; 
        namespace EndcryptValC{
            constexpr Register::FieldValue<decltype(endcrypt)::Type,EndcryptVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endcrypt)::Type,EndcryptVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endcrypt)::Type,EndcryptVal::clear> clear{};
        }
        }
        ///Disable interrupt on ERROR event.
        enum class ErrorVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ErrorVal> error{}; 
        namespace ErrorValC{
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::clear> clear{};
        }
        }
    }
    namespace Nonemicstatus{    ///<CCM RX MIC check result.
        using Addr = Register::Address<0x4000f400,0xfffffffe,0,unsigned>;
        ///Result of the MIC check performed during the previous CCM RX STARTCRYPT
        enum class MicstatusVal {
            checkfailed=0x00000000,     ///<MIC check failed.
            checkpassed=0x00000001,     ///<MIC check passed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MicstatusVal> micstatus{}; 
        namespace MicstatusValC{
            constexpr Register::FieldValue<decltype(micstatus)::Type,MicstatusVal::checkfailed> checkfailed{};
            constexpr Register::FieldValue<decltype(micstatus)::Type,MicstatusVal::checkpassed> checkpassed{};
        }
        }
    }
    namespace Noneenable{    ///<CCM enable.
        using Addr = Register::Address<0x4000f500,0xfffffffc,0,unsigned>;
        ///CCM enable.
        enum class EnableVal {
            disabled=0x00000000,     ///<CCM is disabled.
            enabled=0x00000002,     ///<CCM is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::enabled> enabled{};
        }
        }
    }
    namespace Nonemode{    ///<Operation mode.
        using Addr = Register::Address<0x4000f504,0xfffffffe,0,unsigned>;
        ///CCM mode operation.
        enum class ModeVal {
            encryption=0x00000000,     ///<CCM mode TX
            decryption=0x00000001,     ///<CCM mode TX
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::encryption> encryption{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::decryption> decryption{};
        }
        }
    }
    namespace Nonecnfptr{    ///<Pointer to a data structure holding AES key and NONCE vector.
        using Addr = Register::Address<0x4000f508,0xffffffff,0,unsigned>;
    }
    namespace Noneinptr{    ///<Pointer to the input packet.
        using Addr = Register::Address<0x4000f50c,0xffffffff,0,unsigned>;
    }
    namespace Noneoutptr{    ///<Pointer to the output packet.
        using Addr = Register::Address<0x4000f510,0xffffffff,0,unsigned>;
    }
    namespace Nonescratchptr{    ///<Pointer to a "scratch" data area used for temporary storage during resolution. A minimum of 43 bytes must be reserved.
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
