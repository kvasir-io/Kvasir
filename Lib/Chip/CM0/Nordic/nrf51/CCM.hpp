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
        enum class endksgenCryptVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace endksgenCryptValC{
            constexpr MPL::Value<endksgenCryptVal,endksgenCryptVal::disabled> disabled{};
            constexpr MPL::Value<endksgenCryptVal,endksgenCryptVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,endksgenCryptVal> endksgenCrypt{}; 
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x4000f304,0xfffffff8,0,unsigned>;
        ///Enable interrupt on ENDKSGEN event.
        enum class endksgenVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace endksgenValC{
            constexpr MPL::Value<endksgenVal,endksgenVal::disabled> disabled{};
            constexpr MPL::Value<endksgenVal,endksgenVal::enabled> enabled{};
            constexpr MPL::Value<endksgenVal,endksgenVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,endksgenVal> endksgen{}; 
        ///Enable interrupt on ENDCRYPT event.
        enum class endcryptVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace endcryptValC{
            constexpr MPL::Value<endcryptVal,endcryptVal::disabled> disabled{};
            constexpr MPL::Value<endcryptVal,endcryptVal::enabled> enabled{};
            constexpr MPL::Value<endcryptVal,endcryptVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,endcryptVal> endcrypt{}; 
        ///Enable interrupt on ERROR event.
        enum class errorVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace errorValC{
            constexpr MPL::Value<errorVal,errorVal::disabled> disabled{};
            constexpr MPL::Value<errorVal,errorVal::enabled> enabled{};
            constexpr MPL::Value<errorVal,errorVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,errorVal> error{}; 
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x4000f308,0xfffffff8,0,unsigned>;
        ///Disable interrupt on ENDKSGEN event.
        enum class endksgenVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace endksgenValC{
            constexpr MPL::Value<endksgenVal,endksgenVal::disabled> disabled{};
            constexpr MPL::Value<endksgenVal,endksgenVal::enabled> enabled{};
            constexpr MPL::Value<endksgenVal,endksgenVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,endksgenVal> endksgen{}; 
        ///Disable interrupt on ENDCRYPT event.
        enum class endcryptVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace endcryptValC{
            constexpr MPL::Value<endcryptVal,endcryptVal::disabled> disabled{};
            constexpr MPL::Value<endcryptVal,endcryptVal::enabled> enabled{};
            constexpr MPL::Value<endcryptVal,endcryptVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,endcryptVal> endcrypt{}; 
        ///Disable interrupt on ERROR event.
        enum class errorVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace errorValC{
            constexpr MPL::Value<errorVal,errorVal::disabled> disabled{};
            constexpr MPL::Value<errorVal,errorVal::enabled> enabled{};
            constexpr MPL::Value<errorVal,errorVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,errorVal> error{}; 
    }
    namespace Nonemicstatus{    ///<CCM RX MIC check result.
        using Addr = Register::Address<0x4000f400,0xfffffffe,0,unsigned>;
        ///Result of the MIC check performed during the previous CCM RX STARTCRYPT
        enum class micstatusVal {
            checkfailed=0x00000000,     ///<MIC check failed.
            checkpassed=0x00000001,     ///<MIC check passed.
        };
        namespace micstatusValC{
            constexpr MPL::Value<micstatusVal,micstatusVal::checkfailed> checkfailed{};
            constexpr MPL::Value<micstatusVal,micstatusVal::checkpassed> checkpassed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,micstatusVal> micstatus{}; 
    }
    namespace Noneenable{    ///<CCM enable.
        using Addr = Register::Address<0x4000f500,0xfffffffc,0,unsigned>;
        ///CCM enable.
        enum class enableVal {
            disabled=0x00000000,     ///<CCM is disabled.
            enabled=0x00000002,     ///<CCM is enabled.
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::disabled> disabled{};
            constexpr MPL::Value<enableVal,enableVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,enableVal> enable{}; 
    }
    namespace Nonemode{    ///<Operation mode.
        using Addr = Register::Address<0x4000f504,0xfffffffe,0,unsigned>;
        ///CCM mode operation.
        enum class modeVal {
            encryption=0x00000000,     ///<CCM mode TX
            decryption=0x00000001,     ///<CCM mode TX
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::encryption> encryption{};
            constexpr MPL::Value<modeVal,modeVal::decryption> decryption{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,modeVal> mode{}; 
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
