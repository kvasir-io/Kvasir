#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//AES CCM Mode Encryption
    namespace CcmTasksKsgen{    ///<Start generation of key-stream. This operation will stop by itself when completed.
        using Addr = Register::Address<0x4000f000,0xffffffff,0x00000000,unsigned>;
    }
    namespace CcmTasksCrypt{    ///<Start encryption/decryption. This operation will stop by itself when completed.
        using Addr = Register::Address<0x4000f004,0xffffffff,0x00000000,unsigned>;
    }
    namespace CcmTasksStop{    ///<Stop encryption/decryption
        using Addr = Register::Address<0x4000f008,0xffffffff,0x00000000,unsigned>;
    }
    namespace CcmEventsEndksgen{    ///<Key-stream generation complete
        using Addr = Register::Address<0x4000f100,0xffffffff,0x00000000,unsigned>;
    }
    namespace CcmEventsEndcrypt{    ///<Encrypt/decrypt complete
        using Addr = Register::Address<0x4000f104,0xffffffff,0x00000000,unsigned>;
    }
    namespace CcmEventsError{    ///<CCM error event
        using Addr = Register::Address<0x4000f108,0xffffffff,0x00000000,unsigned>;
    }
    namespace CcmShorts{    ///<Shortcut register
        using Addr = Register::Address<0x4000f200,0xfffffffe,0x00000000,unsigned>;
        ///Shortcut between EVENTS_ENDKSGEN event and TASKS_CRYPT task
        enum class EndksgencryptVal : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EndksgencryptVal> endksgenCrypt{}; 
        namespace EndksgencryptValC{
            constexpr Register::FieldValue<decltype(endksgenCrypt)::Type,EndksgencryptVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endksgenCrypt)::Type,EndksgencryptVal::enabled> enabled{};
        }
    }
    namespace CcmIntenset{    ///<Enable interrupt
        using Addr = Register::Address<0x4000f304,0xfffffff8,0x00000000,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_ENDKSGEN event
        enum class EndksgenVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EndksgenVal> endksgen{}; 
        namespace EndksgenValC{
            constexpr Register::FieldValue<decltype(endksgen)::Type,EndksgenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endksgen)::Type,EndksgenVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endksgen)::Type,EndksgenVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_ENDCRYPT event
        enum class EndcryptVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EndcryptVal> endcrypt{}; 
        namespace EndcryptValC{
            constexpr Register::FieldValue<decltype(endcrypt)::Type,EndcryptVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endcrypt)::Type,EndcryptVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endcrypt)::Type,EndcryptVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_ERROR event
        enum class ErrorVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ErrorVal> error{}; 
        namespace ErrorValC{
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::set> set{};
        }
    }
    namespace CcmIntenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x4000f308,0xfffffff8,0x00000000,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_ENDKSGEN event
        enum class EndksgenVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EndksgenVal> endksgen{}; 
        namespace EndksgenValC{
            constexpr Register::FieldValue<decltype(endksgen)::Type,EndksgenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endksgen)::Type,EndksgenVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endksgen)::Type,EndksgenVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_ENDCRYPT event
        enum class EndcryptVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EndcryptVal> endcrypt{}; 
        namespace EndcryptValC{
            constexpr Register::FieldValue<decltype(endcrypt)::Type,EndcryptVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endcrypt)::Type,EndcryptVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endcrypt)::Type,EndcryptVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_ERROR event
        enum class ErrorVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ErrorVal> error{}; 
        namespace ErrorValC{
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::clear> clear{};
        }
    }
    namespace CcmMicstatus{    ///<MIC check result
        using Addr = Register::Address<0x4000f400,0xfffffffe,0x00000000,unsigned>;
        ///The result of the MIC check performed during the previous decryption operation
        enum class MicstatusVal : unsigned {
            checkfailed=0x00000000,     ///<MIC check failed
            checkpassed=0x00000001,     ///<MIC check passed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MicstatusVal> micstatus{}; 
        namespace MicstatusValC{
            constexpr Register::FieldValue<decltype(micstatus)::Type,MicstatusVal::checkfailed> checkfailed{};
            constexpr Register::FieldValue<decltype(micstatus)::Type,MicstatusVal::checkpassed> checkpassed{};
        }
    }
    namespace CcmEnable{    ///<Enable
        using Addr = Register::Address<0x4000f500,0xfffffffc,0x00000000,unsigned>;
        ///Enable or disable CCM
        enum class EnableVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000002,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::enabled> enabled{};
        }
    }
    namespace CcmMode{    ///<Operation mode
        using Addr = Register::Address<0x4000f504,0xfefefffe,0x00000000,unsigned>;
        ///The mode of operation to be used
        enum class ModeVal : unsigned {
            encryption=0x00000000,     ///<AES CCM packet encryption mode
            decryption=0x00000001,     ///<AES CCM packet decryption mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::encryption> encryption{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::decryption> decryption{};
        }
        ///Data rate that the CCM shall run in synch with
        enum class DatarateVal : unsigned {
            v1mbit=0x00000000,     ///<In synch with 1 Mbit data rate
            v2mbit=0x00000001,     ///<In synch with 2 Mbit data rate
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,DatarateVal> datarate{}; 
        namespace DatarateValC{
            constexpr Register::FieldValue<decltype(datarate)::Type,DatarateVal::v1mbit> v1mbit{};
            constexpr Register::FieldValue<decltype(datarate)::Type,DatarateVal::v2mbit> v2mbit{};
        }
        ///Packet length configuration
        enum class LengthVal : unsigned {
            default_=0x00000000,     ///<Default length. Effective length of LENGTH field is 5-bit
            extended=0x00000001,     ///<Extended length. Effective length of LENGTH field is 8-bit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,LengthVal> length{}; 
        namespace LengthValC{
            constexpr Register::FieldValue<decltype(length)::Type,LengthVal::default_> default_{};
            constexpr Register::FieldValue<decltype(length)::Type,LengthVal::extended> extended{};
        }
    }
    namespace CcmCnfptr{    ///<Pointer to data structure holding AES key and NONCE vector
        using Addr = Register::Address<0x4000f508,0x00000000,0x00000000,unsigned>;
        ///Pointer to the data structure holding the AES key and the CCM NONCE vector (see Table 1 CCM data structure overview)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cnfptr{}; 
    }
    namespace CcmInptr{    ///<Input pointer
        using Addr = Register::Address<0x4000f50c,0x00000000,0x00000000,unsigned>;
        ///Input pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> inptr{}; 
    }
    namespace CcmOutptr{    ///<Output pointer
        using Addr = Register::Address<0x4000f510,0x00000000,0x00000000,unsigned>;
        ///Output pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outptr{}; 
    }
    namespace CcmScratchptr{    ///<Pointer to data area used for temporary storage
        using Addr = Register::Address<0x4000f514,0x00000000,0x00000000,unsigned>;
        ///Pointer to a "scratch" data area used for temporary storage during key-stream generation, MIC generation and encryption/decryption.The scratch area is used for temporary storage of data during key-stream generation and encryption. A space of minimum 43 bytes must be reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> scratchptr{}; 
    }
}
