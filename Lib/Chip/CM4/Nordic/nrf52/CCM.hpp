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
        enum class endksgenCryptVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace endksgenCryptValC{
            constexpr MPL::Value<endksgenCryptVal,endksgenCryptVal::disabled> disabled{};
            constexpr MPL::Value<endksgenCryptVal,endksgenCryptVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,endksgenCryptVal> endksgenCrypt{}; 
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x4000f304,0xfffffff8,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_ENDKSGEN event
        enum class endksgenVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace endksgenValC{
            constexpr MPL::Value<endksgenVal,endksgenVal::disabled> disabled{};
            constexpr MPL::Value<endksgenVal,endksgenVal::enabled> enabled{};
            constexpr MPL::Value<endksgenVal,endksgenVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,endksgenVal> endksgen{}; 
        ///Write '1' to Enable interrupt on EVENTS_ENDCRYPT event
        enum class endcryptVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace endcryptValC{
            constexpr MPL::Value<endcryptVal,endcryptVal::disabled> disabled{};
            constexpr MPL::Value<endcryptVal,endcryptVal::enabled> enabled{};
            constexpr MPL::Value<endcryptVal,endcryptVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,endcryptVal> endcrypt{}; 
        ///Write '1' to Enable interrupt on EVENTS_ERROR event
        enum class errorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace errorValC{
            constexpr MPL::Value<errorVal,errorVal::disabled> disabled{};
            constexpr MPL::Value<errorVal,errorVal::enabled> enabled{};
            constexpr MPL::Value<errorVal,errorVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,errorVal> error{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x4000f308,0xfffffff8,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_ENDKSGEN event
        enum class endksgenVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace endksgenValC{
            constexpr MPL::Value<endksgenVal,endksgenVal::disabled> disabled{};
            constexpr MPL::Value<endksgenVal,endksgenVal::enabled> enabled{};
            constexpr MPL::Value<endksgenVal,endksgenVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,endksgenVal> endksgen{}; 
        ///Write '1' to Clear interrupt on EVENTS_ENDCRYPT event
        enum class endcryptVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace endcryptValC{
            constexpr MPL::Value<endcryptVal,endcryptVal::disabled> disabled{};
            constexpr MPL::Value<endcryptVal,endcryptVal::enabled> enabled{};
            constexpr MPL::Value<endcryptVal,endcryptVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,endcryptVal> endcrypt{}; 
        ///Write '1' to Clear interrupt on EVENTS_ERROR event
        enum class errorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace errorValC{
            constexpr MPL::Value<errorVal,errorVal::disabled> disabled{};
            constexpr MPL::Value<errorVal,errorVal::enabled> enabled{};
            constexpr MPL::Value<errorVal,errorVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,errorVal> error{}; 
    }
    namespace Nonemicstatus{    ///<MIC check result
        using Addr = Register::Address<0x4000f400,0xfffffffe,0,unsigned>;
        ///The result of the MIC check performed during the previous decryption operation
        enum class micstatusVal {
            checkfailed=0x00000000,     ///<MIC check failed
            checkpassed=0x00000001,     ///<MIC check passed
        };
        namespace micstatusValC{
            constexpr MPL::Value<micstatusVal,micstatusVal::checkfailed> checkfailed{};
            constexpr MPL::Value<micstatusVal,micstatusVal::checkpassed> checkpassed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,micstatusVal> micstatus{}; 
    }
    namespace Noneenable{    ///<Enable
        using Addr = Register::Address<0x4000f500,0xfffffffc,0,unsigned>;
        ///Enable or disable CCM
        enum class enableVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000002,     ///<Enable
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::disabled> disabled{};
            constexpr MPL::Value<enableVal,enableVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,enableVal> enable{}; 
    }
    namespace Nonemode{    ///<Operation mode
        using Addr = Register::Address<0x4000f504,0xfefefffe,0,unsigned>;
        ///The mode of operation to be used
        enum class modeVal {
            encryption=0x00000000,     ///<AES CCM packet encryption mode
            decryption=0x00000001,     ///<AES CCM packet decryption mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::encryption> encryption{};
            constexpr MPL::Value<modeVal,modeVal::decryption> decryption{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Data rate that the CCM shall run in synch with
        enum class datarateVal {
            v1mbit=0x00000000,     ///<In synch with 1 Mbit data rate
            v2mbit=0x00000001,     ///<In synch with 2 Mbit data rate
        };
        namespace datarateValC{
            constexpr MPL::Value<datarateVal,datarateVal::v1mbit> v1mbit{};
            constexpr MPL::Value<datarateVal,datarateVal::v2mbit> v2mbit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,datarateVal> datarate{}; 
        ///Packet length configuration
        enum class lengthVal {
            default_=0x00000000,     ///<Default length. Effective length of LENGTH field is 5-bit
            extended=0x00000001,     ///<Extended length. Effective length of LENGTH field is 8-bit
        };
        namespace lengthValC{
            constexpr MPL::Value<lengthVal,lengthVal::default_> default_{};
            constexpr MPL::Value<lengthVal,lengthVal::extended> extended{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,lengthVal> length{}; 
    }
    namespace Nonecnfptr{    ///<Pointer to data structure holding AES key and NONCE vector
        using Addr = Register::Address<0x4000f508,0x00000000,0,unsigned>;
        ///Pointer to the data structure holding the AES key and the CCM NONCE vector (see Table 1 CCM data structure overview)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cnfptr{}; 
    }
    namespace Noneinptr{    ///<Input pointer
        using Addr = Register::Address<0x4000f50c,0x00000000,0,unsigned>;
        ///Input pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> inptr{}; 
    }
    namespace Noneoutptr{    ///<Output pointer
        using Addr = Register::Address<0x4000f510,0x00000000,0,unsigned>;
        ///Output pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outptr{}; 
    }
    namespace Nonescratchptr{    ///<Pointer to data area used for temporary storage
        using Addr = Register::Address<0x4000f514,0x00000000,0,unsigned>;
        ///Pointer to a "scratch" data area used for temporary storage during key-stream generation, MIC generation and encryption/decryption.The scratch area is used for temporary storage of data during key-stream generation and encryption. A space of minimum 43 bytes must be reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> scratchptr{}; 
    }
}
