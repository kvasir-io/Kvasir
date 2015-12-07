#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//AES CCM Mode Encryption
    namespace NonetasksKsgen{    ///<Start generation of key-stream. This operation will stop by itself when completed.
        using Addr = Register::Address<0x4000f000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCrypt{    ///<Start encryption/decryption. This operation will stop by itself when completed.
        using Addr = Register::Address<0x4000f004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop encryption/decryption
        using Addr = Register::Address<0x4000f008,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEndksgen{    ///<Key-stream generation complete
        using Addr = Register::Address<0x4000f100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEndcrypt{    ///<Encrypt/decrypt complete
        using Addr = Register::Address<0x4000f104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsError{    ///<CCM error event
        using Addr = Register::Address<0x4000f108,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcut register
        using Addr = Register::Address<0x4000f200,0xfffffffe,0,unsigned>;
        ///Shortcut between EVENTS_ENDKSGEN event and TASKS_CRYPT task
        enum class EndksgencryptVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EndksgencryptVal> endksgenCrypt{}; 
        namespace EndksgencryptValC{
            constexpr Register::FieldValue<decltype(endksgenCrypt),EndksgencryptVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endksgenCrypt),EndksgencryptVal::enabled> enabled{};
        }
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x4000f304,0xfffffff8,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_ENDKSGEN event
        enum class EndksgenVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EndksgenVal> endksgen{}; 
        namespace EndksgenValC{
            constexpr Register::FieldValue<decltype(endksgen),EndksgenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endksgen),EndksgenVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endksgen),EndksgenVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_ENDCRYPT event
        enum class EndcryptVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EndcryptVal> endcrypt{}; 
        namespace EndcryptValC{
            constexpr Register::FieldValue<decltype(endcrypt),EndcryptVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endcrypt),EndcryptVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endcrypt),EndcryptVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_ERROR event
        enum class ErrorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ErrorVal> error{}; 
        namespace ErrorValC{
            constexpr Register::FieldValue<decltype(error),ErrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(error),ErrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(error),ErrorVal::set> set{};
        }
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x4000f308,0xfffffff8,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_ENDKSGEN event
        enum class EndksgenVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EndksgenVal> endksgen{}; 
        namespace EndksgenValC{
            constexpr Register::FieldValue<decltype(endksgen),EndksgenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endksgen),EndksgenVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endksgen),EndksgenVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_ENDCRYPT event
        enum class EndcryptVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EndcryptVal> endcrypt{}; 
        namespace EndcryptValC{
            constexpr Register::FieldValue<decltype(endcrypt),EndcryptVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endcrypt),EndcryptVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endcrypt),EndcryptVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_ERROR event
        enum class ErrorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ErrorVal> error{}; 
        namespace ErrorValC{
            constexpr Register::FieldValue<decltype(error),ErrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(error),ErrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(error),ErrorVal::clear> clear{};
        }
    }
    namespace Nonemicstatus{    ///<MIC check result
        using Addr = Register::Address<0x4000f400,0xfffffffe,0,unsigned>;
        ///The result of the MIC check performed during the previous decryption operation
        enum class MicstatusVal {
            checkfailed=0x00000000,     ///<MIC check failed
            checkpassed=0x00000001,     ///<MIC check passed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MicstatusVal> micstatus{}; 
        namespace MicstatusValC{
            constexpr Register::FieldValue<decltype(micstatus),MicstatusVal::checkfailed> checkfailed{};
            constexpr Register::FieldValue<decltype(micstatus),MicstatusVal::checkpassed> checkpassed{};
        }
    }
    namespace Noneenable{    ///<Enable
        using Addr = Register::Address<0x4000f500,0xfffffffc,0,unsigned>;
        ///Enable or disable CCM
        enum class EnableVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000002,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable),EnableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enable),EnableVal::enabled> enabled{};
        }
    }
    namespace Nonemode{    ///<Operation mode
        using Addr = Register::Address<0x4000f504,0xfefefffe,0,unsigned>;
        ///The mode of operation to be used
        enum class ModeVal {
            encryption=0x00000000,     ///<AES CCM packet encryption mode
            decryption=0x00000001,     ///<AES CCM packet decryption mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::encryption> encryption{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::decryption> decryption{};
        }
        ///Data rate that the CCM shall run in synch with
        enum class DatarateVal {
            v1mbit=0x00000000,     ///<In synch with 1 Mbit data rate
            v2mbit=0x00000001,     ///<In synch with 2 Mbit data rate
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,DatarateVal> datarate{}; 
        namespace DatarateValC{
            constexpr Register::FieldValue<decltype(datarate),DatarateVal::v1mbit> v1mbit{};
            constexpr Register::FieldValue<decltype(datarate),DatarateVal::v2mbit> v2mbit{};
        }
        ///Packet length configuration
        enum class LengthVal {
            default_=0x00000000,     ///<Default length. Effective length of LENGTH field is 5-bit
            extended=0x00000001,     ///<Extended length. Effective length of LENGTH field is 8-bit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,LengthVal> length{}; 
        namespace LengthValC{
            constexpr Register::FieldValue<decltype(length),LengthVal::default_> default_{};
            constexpr Register::FieldValue<decltype(length),LengthVal::extended> extended{};
        }
    }
    namespace Nonecnfptr{    ///<Pointer to data structure holding AES key and NONCE vector
        using Addr = Register::Address<0x4000f508,0x00000000,0,unsigned>;
        ///Pointer to the data structure holding the AES key and the CCM NONCE vector (see Table 1 CCM data structure overview)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cnfptr{}; 
        namespace CnfptrValC{
        }
    }
    namespace Noneinptr{    ///<Input pointer
        using Addr = Register::Address<0x4000f50c,0x00000000,0,unsigned>;
        ///Input pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> inptr{}; 
        namespace InptrValC{
        }
    }
    namespace Noneoutptr{    ///<Output pointer
        using Addr = Register::Address<0x4000f510,0x00000000,0,unsigned>;
        ///Output pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outptr{}; 
        namespace OutptrValC{
        }
    }
    namespace Nonescratchptr{    ///<Pointer to data area used for temporary storage
        using Addr = Register::Address<0x4000f514,0x00000000,0,unsigned>;
        ///Pointer to a "scratch" data area used for temporary storage during key-stream generation, MIC generation and encryption/decryption.The scratch area is used for temporary storage of data during key-stream generation and encryption. A space of minimum 43 bytes must be reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> scratchptr{}; 
        namespace ScratchptrValC{
        }
    }
}
