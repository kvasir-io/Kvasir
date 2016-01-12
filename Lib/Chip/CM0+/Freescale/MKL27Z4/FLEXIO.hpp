#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//The FLEXIO Memory Map/Register Definition can be found here.
    namespace FlexioVerid{    ///<Version ID Register
        using Addr = Register::Address<0x4005f000,0x00000000,0x00000000,unsigned>;
        ///Feature Specification Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> feature{}; 
        ///Minor Version Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> minor{}; 
        ///Major Version Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> major{}; 
    }
    namespace FlexioParam{    ///<Parameter Register
        using Addr = Register::Address<0x4005f004,0x00000000,0x00000000,unsigned>;
        ///Shifter Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shifter{}; 
        ///Timer Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timer{}; 
        ///Pin Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pin{}; 
        ///Trigger Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trigger{}; 
    }
    namespace FlexioCtrl{    ///<FlexIO Control Register
        using Addr = Register::Address<0x4005f008,0x3ffffff8,0x00000000,unsigned>;
        ///FlexIO Enable
        enum class FlexenVal {
            v0=0x00000000,     ///<FlexIO module is disabled.
            v1=0x00000001,     ///<FlexIO module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FlexenVal> flexen{}; 
        namespace FlexenValC{
            constexpr Register::FieldValue<decltype(FlexioCtrl::flexen)::Type,FlexenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioCtrl::flexen)::Type,FlexenVal::v1> v1{};
        }
        ///Software Reset
        enum class SwrstVal {
            v0=0x00000000,     ///<Software reset is disabled
            v1=0x00000001,     ///<Software reset is enabled, all FlexIO registers except the Control Register are reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SwrstVal> swrst{}; 
        namespace SwrstValC{
            constexpr Register::FieldValue<decltype(FlexioCtrl::swrst)::Type,SwrstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioCtrl::swrst)::Type,SwrstVal::v1> v1{};
        }
        ///Fast Access
        enum class FastaccVal {
            v0=0x00000000,     ///<Configures for normal register accesses to FlexIO
            v1=0x00000001,     ///<Configures for fast register accesses to FlexIO
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FastaccVal> fastacc{}; 
        namespace FastaccValC{
            constexpr Register::FieldValue<decltype(FlexioCtrl::fastacc)::Type,FastaccVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioCtrl::fastacc)::Type,FastaccVal::v1> v1{};
        }
        ///Debug Enable
        enum class DbgeVal {
            v0=0x00000000,     ///<FlexIO is disabled in debug modes.
            v1=0x00000001,     ///<FlexIO is enabled in debug modes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DbgeVal> dbge{}; 
        namespace DbgeValC{
            constexpr Register::FieldValue<decltype(FlexioCtrl::dbge)::Type,DbgeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioCtrl::dbge)::Type,DbgeVal::v1> v1{};
        }
        ///Doze Enable
        enum class DozenVal {
            v0=0x00000000,     ///<FlexIO enabled in Doze modes.
            v1=0x00000001,     ///<FlexIO disabled in Doze modes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,DozenVal> dozen{}; 
        namespace DozenValC{
            constexpr Register::FieldValue<decltype(FlexioCtrl::dozen)::Type,DozenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioCtrl::dozen)::Type,DozenVal::v1> v1{};
        }
    }
    namespace FlexioShiftstat{    ///<Shifter Status Register
        using Addr = Register::Address<0x4005f010,0xfffffff0,0x00000000,unsigned>;
        ///Shifter Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ssf{}; 
    }
    namespace FlexioShifterr{    ///<Shifter Error Register
        using Addr = Register::Address<0x4005f014,0xfffffff0,0x00000000,unsigned>;
        ///Shifter Error Flags
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sef{}; 
    }
    namespace FlexioTimstat{    ///<Timer Status Register
        using Addr = Register::Address<0x4005f018,0xfffffff0,0x00000000,unsigned>;
        ///Timer Status Flags
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tsf{}; 
    }
    namespace FlexioShiftsien{    ///<Shifter Status Interrupt Enable
        using Addr = Register::Address<0x4005f020,0xfffffff0,0x00000000,unsigned>;
        ///Shifter Status Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ssie{}; 
    }
    namespace FlexioShifteien{    ///<Shifter Error Interrupt Enable
        using Addr = Register::Address<0x4005f024,0xfffffff0,0x00000000,unsigned>;
        ///Shifter Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seie{}; 
    }
    namespace FlexioTimien{    ///<Timer Interrupt Enable Register
        using Addr = Register::Address<0x4005f028,0xfffffff0,0x00000000,unsigned>;
        ///Timer Status Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> teie{}; 
    }
    namespace FlexioShiftsden{    ///<Shifter Status DMA Enable
        using Addr = Register::Address<0x4005f030,0xfffffff0,0x00000000,unsigned>;
        ///Shifter Status DMA Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ssde{}; 
    }
    namespace FlexioShiftctl0{    ///<Shifter Control N Register
        using Addr = Register::Address<0x4005f080,0xfc7cf878,0x00000000,unsigned>;
        ///Shifter Mode
        enum class SmodVal {
            v000=0x00000000,     ///<Disabled.
            v001=0x00000001,     ///<Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
            v010=0x00000002,     ///<Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
            v100=0x00000004,     ///<Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
            v101=0x00000005,     ///<Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,SmodVal> smod{}; 
        namespace SmodValC{
            constexpr Register::FieldValue<decltype(FlexioShiftctl0::smod)::Type,SmodVal::v000> v000{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl0::smod)::Type,SmodVal::v001> v001{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl0::smod)::Type,SmodVal::v010> v010{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl0::smod)::Type,SmodVal::v100> v100{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl0::smod)::Type,SmodVal::v101> v101{};
        }
        ///Shifter Pin Polarity
        enum class PinpolVal {
            v0=0x00000000,     ///<Pin is active high
            v1=0x00000001,     ///<Pin is active low
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PinpolVal> pinpol{}; 
        namespace PinpolValC{
            constexpr Register::FieldValue<decltype(FlexioShiftctl0::pinpol)::Type,PinpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl0::pinpol)::Type,PinpolVal::v1> v1{};
        }
        ///Shifter Pin Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pinsel{}; 
        ///Shifter Pin Configuration
        enum class PincfgVal {
            v00=0x00000000,     ///<Shifter pin output disabled
            v01=0x00000001,     ///<Shifter pin open drain or bidirectional output enable
            v10=0x00000002,     ///<Shifter pin bidirectional output data
            v11=0x00000003,     ///<Shifter pin output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PincfgVal> pincfg{}; 
        namespace PincfgValC{
            constexpr Register::FieldValue<decltype(FlexioShiftctl0::pincfg)::Type,PincfgVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl0::pincfg)::Type,PincfgVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl0::pincfg)::Type,PincfgVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl0::pincfg)::Type,PincfgVal::v11> v11{};
        }
        ///Timer Polarity
        enum class TimpolVal {
            v0=0x00000000,     ///<Shift on posedge of Shift clock
            v1=0x00000001,     ///<Shift on negedge of Shift clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TimpolVal> timpol{}; 
        namespace TimpolValC{
            constexpr Register::FieldValue<decltype(FlexioShiftctl0::timpol)::Type,TimpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl0::timpol)::Type,TimpolVal::v1> v1{};
        }
        ///Timer Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> timsel{}; 
    }
    namespace FlexioShiftctl1{    ///<Shifter Control N Register
        using Addr = Register::Address<0x4005f084,0xfc7cf878,0x00000000,unsigned>;
        ///Shifter Mode
        enum class SmodVal {
            v000=0x00000000,     ///<Disabled.
            v001=0x00000001,     ///<Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
            v010=0x00000002,     ///<Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
            v100=0x00000004,     ///<Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
            v101=0x00000005,     ///<Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,SmodVal> smod{}; 
        namespace SmodValC{
            constexpr Register::FieldValue<decltype(FlexioShiftctl1::smod)::Type,SmodVal::v000> v000{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl1::smod)::Type,SmodVal::v001> v001{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl1::smod)::Type,SmodVal::v010> v010{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl1::smod)::Type,SmodVal::v100> v100{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl1::smod)::Type,SmodVal::v101> v101{};
        }
        ///Shifter Pin Polarity
        enum class PinpolVal {
            v0=0x00000000,     ///<Pin is active high
            v1=0x00000001,     ///<Pin is active low
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PinpolVal> pinpol{}; 
        namespace PinpolValC{
            constexpr Register::FieldValue<decltype(FlexioShiftctl1::pinpol)::Type,PinpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl1::pinpol)::Type,PinpolVal::v1> v1{};
        }
        ///Shifter Pin Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pinsel{}; 
        ///Shifter Pin Configuration
        enum class PincfgVal {
            v00=0x00000000,     ///<Shifter pin output disabled
            v01=0x00000001,     ///<Shifter pin open drain or bidirectional output enable
            v10=0x00000002,     ///<Shifter pin bidirectional output data
            v11=0x00000003,     ///<Shifter pin output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PincfgVal> pincfg{}; 
        namespace PincfgValC{
            constexpr Register::FieldValue<decltype(FlexioShiftctl1::pincfg)::Type,PincfgVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl1::pincfg)::Type,PincfgVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl1::pincfg)::Type,PincfgVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl1::pincfg)::Type,PincfgVal::v11> v11{};
        }
        ///Timer Polarity
        enum class TimpolVal {
            v0=0x00000000,     ///<Shift on posedge of Shift clock
            v1=0x00000001,     ///<Shift on negedge of Shift clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TimpolVal> timpol{}; 
        namespace TimpolValC{
            constexpr Register::FieldValue<decltype(FlexioShiftctl1::timpol)::Type,TimpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl1::timpol)::Type,TimpolVal::v1> v1{};
        }
        ///Timer Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> timsel{}; 
    }
    namespace FlexioShiftctl2{    ///<Shifter Control N Register
        using Addr = Register::Address<0x4005f088,0xfc7cf878,0x00000000,unsigned>;
        ///Shifter Mode
        enum class SmodVal {
            v000=0x00000000,     ///<Disabled.
            v001=0x00000001,     ///<Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
            v010=0x00000002,     ///<Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
            v100=0x00000004,     ///<Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
            v101=0x00000005,     ///<Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,SmodVal> smod{}; 
        namespace SmodValC{
            constexpr Register::FieldValue<decltype(FlexioShiftctl2::smod)::Type,SmodVal::v000> v000{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl2::smod)::Type,SmodVal::v001> v001{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl2::smod)::Type,SmodVal::v010> v010{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl2::smod)::Type,SmodVal::v100> v100{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl2::smod)::Type,SmodVal::v101> v101{};
        }
        ///Shifter Pin Polarity
        enum class PinpolVal {
            v0=0x00000000,     ///<Pin is active high
            v1=0x00000001,     ///<Pin is active low
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PinpolVal> pinpol{}; 
        namespace PinpolValC{
            constexpr Register::FieldValue<decltype(FlexioShiftctl2::pinpol)::Type,PinpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl2::pinpol)::Type,PinpolVal::v1> v1{};
        }
        ///Shifter Pin Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pinsel{}; 
        ///Shifter Pin Configuration
        enum class PincfgVal {
            v00=0x00000000,     ///<Shifter pin output disabled
            v01=0x00000001,     ///<Shifter pin open drain or bidirectional output enable
            v10=0x00000002,     ///<Shifter pin bidirectional output data
            v11=0x00000003,     ///<Shifter pin output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PincfgVal> pincfg{}; 
        namespace PincfgValC{
            constexpr Register::FieldValue<decltype(FlexioShiftctl2::pincfg)::Type,PincfgVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl2::pincfg)::Type,PincfgVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl2::pincfg)::Type,PincfgVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl2::pincfg)::Type,PincfgVal::v11> v11{};
        }
        ///Timer Polarity
        enum class TimpolVal {
            v0=0x00000000,     ///<Shift on posedge of Shift clock
            v1=0x00000001,     ///<Shift on negedge of Shift clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TimpolVal> timpol{}; 
        namespace TimpolValC{
            constexpr Register::FieldValue<decltype(FlexioShiftctl2::timpol)::Type,TimpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl2::timpol)::Type,TimpolVal::v1> v1{};
        }
        ///Timer Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> timsel{}; 
    }
    namespace FlexioShiftctl3{    ///<Shifter Control N Register
        using Addr = Register::Address<0x4005f08c,0xfc7cf878,0x00000000,unsigned>;
        ///Shifter Mode
        enum class SmodVal {
            v000=0x00000000,     ///<Disabled.
            v001=0x00000001,     ///<Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
            v010=0x00000002,     ///<Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
            v100=0x00000004,     ///<Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
            v101=0x00000005,     ///<Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,SmodVal> smod{}; 
        namespace SmodValC{
            constexpr Register::FieldValue<decltype(FlexioShiftctl3::smod)::Type,SmodVal::v000> v000{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl3::smod)::Type,SmodVal::v001> v001{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl3::smod)::Type,SmodVal::v010> v010{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl3::smod)::Type,SmodVal::v100> v100{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl3::smod)::Type,SmodVal::v101> v101{};
        }
        ///Shifter Pin Polarity
        enum class PinpolVal {
            v0=0x00000000,     ///<Pin is active high
            v1=0x00000001,     ///<Pin is active low
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PinpolVal> pinpol{}; 
        namespace PinpolValC{
            constexpr Register::FieldValue<decltype(FlexioShiftctl3::pinpol)::Type,PinpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl3::pinpol)::Type,PinpolVal::v1> v1{};
        }
        ///Shifter Pin Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pinsel{}; 
        ///Shifter Pin Configuration
        enum class PincfgVal {
            v00=0x00000000,     ///<Shifter pin output disabled
            v01=0x00000001,     ///<Shifter pin open drain or bidirectional output enable
            v10=0x00000002,     ///<Shifter pin bidirectional output data
            v11=0x00000003,     ///<Shifter pin output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PincfgVal> pincfg{}; 
        namespace PincfgValC{
            constexpr Register::FieldValue<decltype(FlexioShiftctl3::pincfg)::Type,PincfgVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl3::pincfg)::Type,PincfgVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl3::pincfg)::Type,PincfgVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl3::pincfg)::Type,PincfgVal::v11> v11{};
        }
        ///Timer Polarity
        enum class TimpolVal {
            v0=0x00000000,     ///<Shift on posedge of Shift clock
            v1=0x00000001,     ///<Shift on negedge of Shift clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TimpolVal> timpol{}; 
        namespace TimpolValC{
            constexpr Register::FieldValue<decltype(FlexioShiftctl3::timpol)::Type,TimpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioShiftctl3::timpol)::Type,TimpolVal::v1> v1{};
        }
        ///Timer Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> timsel{}; 
    }
    namespace FlexioShiftcfg0{    ///<Shifter Configuration N Register
        using Addr = Register::Address<0x4005f100,0xfffffecc,0x00000000,unsigned>;
        ///Shifter Start bit
        enum class SstartVal {
            v00=0x00000000,     ///<Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
            v01=0x00000001,     ///<Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
            v10=0x00000002,     ///<Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
            v11=0x00000003,     ///<Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SstartVal> sstart{}; 
        namespace SstartValC{
            constexpr Register::FieldValue<decltype(FlexioShiftcfg0::sstart)::Type,SstartVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg0::sstart)::Type,SstartVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg0::sstart)::Type,SstartVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg0::sstart)::Type,SstartVal::v11> v11{};
        }
        ///Shifter Stop bit
        enum class SstopVal {
            v00=0x00000000,     ///<Stop bit disabled for transmitter/receiver/match store
            v01=0x00000001,     ///<Reserved for transmitter/receiver/match store
            v10=0x00000002,     ///<Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
            v11=0x00000003,     ///<Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,SstopVal> sstop{}; 
        namespace SstopValC{
            constexpr Register::FieldValue<decltype(FlexioShiftcfg0::sstop)::Type,SstopVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg0::sstop)::Type,SstopVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg0::sstop)::Type,SstopVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg0::sstop)::Type,SstopVal::v11> v11{};
        }
        ///Input Source
        enum class InsrcVal {
            v0=0x00000000,     ///<Pin
            v1=0x00000001,     ///<Shifter N+1 Output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InsrcVal> insrc{}; 
        namespace InsrcValC{
            constexpr Register::FieldValue<decltype(FlexioShiftcfg0::insrc)::Type,InsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg0::insrc)::Type,InsrcVal::v1> v1{};
        }
    }
    namespace FlexioShiftcfg1{    ///<Shifter Configuration N Register
        using Addr = Register::Address<0x4005f104,0xfffffecc,0x00000000,unsigned>;
        ///Shifter Start bit
        enum class SstartVal {
            v00=0x00000000,     ///<Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
            v01=0x00000001,     ///<Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
            v10=0x00000002,     ///<Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
            v11=0x00000003,     ///<Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SstartVal> sstart{}; 
        namespace SstartValC{
            constexpr Register::FieldValue<decltype(FlexioShiftcfg1::sstart)::Type,SstartVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg1::sstart)::Type,SstartVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg1::sstart)::Type,SstartVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg1::sstart)::Type,SstartVal::v11> v11{};
        }
        ///Shifter Stop bit
        enum class SstopVal {
            v00=0x00000000,     ///<Stop bit disabled for transmitter/receiver/match store
            v01=0x00000001,     ///<Reserved for transmitter/receiver/match store
            v10=0x00000002,     ///<Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
            v11=0x00000003,     ///<Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,SstopVal> sstop{}; 
        namespace SstopValC{
            constexpr Register::FieldValue<decltype(FlexioShiftcfg1::sstop)::Type,SstopVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg1::sstop)::Type,SstopVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg1::sstop)::Type,SstopVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg1::sstop)::Type,SstopVal::v11> v11{};
        }
        ///Input Source
        enum class InsrcVal {
            v0=0x00000000,     ///<Pin
            v1=0x00000001,     ///<Shifter N+1 Output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InsrcVal> insrc{}; 
        namespace InsrcValC{
            constexpr Register::FieldValue<decltype(FlexioShiftcfg1::insrc)::Type,InsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg1::insrc)::Type,InsrcVal::v1> v1{};
        }
    }
    namespace FlexioShiftcfg2{    ///<Shifter Configuration N Register
        using Addr = Register::Address<0x4005f108,0xfffffecc,0x00000000,unsigned>;
        ///Shifter Start bit
        enum class SstartVal {
            v00=0x00000000,     ///<Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
            v01=0x00000001,     ///<Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
            v10=0x00000002,     ///<Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
            v11=0x00000003,     ///<Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SstartVal> sstart{}; 
        namespace SstartValC{
            constexpr Register::FieldValue<decltype(FlexioShiftcfg2::sstart)::Type,SstartVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg2::sstart)::Type,SstartVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg2::sstart)::Type,SstartVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg2::sstart)::Type,SstartVal::v11> v11{};
        }
        ///Shifter Stop bit
        enum class SstopVal {
            v00=0x00000000,     ///<Stop bit disabled for transmitter/receiver/match store
            v01=0x00000001,     ///<Reserved for transmitter/receiver/match store
            v10=0x00000002,     ///<Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
            v11=0x00000003,     ///<Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,SstopVal> sstop{}; 
        namespace SstopValC{
            constexpr Register::FieldValue<decltype(FlexioShiftcfg2::sstop)::Type,SstopVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg2::sstop)::Type,SstopVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg2::sstop)::Type,SstopVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg2::sstop)::Type,SstopVal::v11> v11{};
        }
        ///Input Source
        enum class InsrcVal {
            v0=0x00000000,     ///<Pin
            v1=0x00000001,     ///<Shifter N+1 Output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InsrcVal> insrc{}; 
        namespace InsrcValC{
            constexpr Register::FieldValue<decltype(FlexioShiftcfg2::insrc)::Type,InsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg2::insrc)::Type,InsrcVal::v1> v1{};
        }
    }
    namespace FlexioShiftcfg3{    ///<Shifter Configuration N Register
        using Addr = Register::Address<0x4005f10c,0xfffffecc,0x00000000,unsigned>;
        ///Shifter Start bit
        enum class SstartVal {
            v00=0x00000000,     ///<Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
            v01=0x00000001,     ///<Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
            v10=0x00000002,     ///<Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
            v11=0x00000003,     ///<Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SstartVal> sstart{}; 
        namespace SstartValC{
            constexpr Register::FieldValue<decltype(FlexioShiftcfg3::sstart)::Type,SstartVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg3::sstart)::Type,SstartVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg3::sstart)::Type,SstartVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg3::sstart)::Type,SstartVal::v11> v11{};
        }
        ///Shifter Stop bit
        enum class SstopVal {
            v00=0x00000000,     ///<Stop bit disabled for transmitter/receiver/match store
            v01=0x00000001,     ///<Reserved for transmitter/receiver/match store
            v10=0x00000002,     ///<Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
            v11=0x00000003,     ///<Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,SstopVal> sstop{}; 
        namespace SstopValC{
            constexpr Register::FieldValue<decltype(FlexioShiftcfg3::sstop)::Type,SstopVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg3::sstop)::Type,SstopVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg3::sstop)::Type,SstopVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg3::sstop)::Type,SstopVal::v11> v11{};
        }
        ///Input Source
        enum class InsrcVal {
            v0=0x00000000,     ///<Pin
            v1=0x00000001,     ///<Shifter N+1 Output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InsrcVal> insrc{}; 
        namespace InsrcValC{
            constexpr Register::FieldValue<decltype(FlexioShiftcfg3::insrc)::Type,InsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioShiftcfg3::insrc)::Type,InsrcVal::v1> v1{};
        }
    }
    namespace FlexioShiftbuf0{    ///<Shifter Buffer N Register
        using Addr = Register::Address<0x4005f200,0x00000000,0x00000000,unsigned>;
        ///Shift Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbuf{}; 
    }
    namespace FlexioShiftbuf1{    ///<Shifter Buffer N Register
        using Addr = Register::Address<0x4005f204,0x00000000,0x00000000,unsigned>;
        ///Shift Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbuf{}; 
    }
    namespace FlexioShiftbuf2{    ///<Shifter Buffer N Register
        using Addr = Register::Address<0x4005f208,0x00000000,0x00000000,unsigned>;
        ///Shift Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbuf{}; 
    }
    namespace FlexioShiftbuf3{    ///<Shifter Buffer N Register
        using Addr = Register::Address<0x4005f20c,0x00000000,0x00000000,unsigned>;
        ///Shift Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbuf{}; 
    }
    namespace FlexioShiftbufbbs0{    ///<Shifter Buffer N Bit Byte Swapped Register
        using Addr = Register::Address<0x4005f280,0x00000000,0x00000000,unsigned>;
        ///Shift Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbbs{}; 
    }
    namespace FlexioShiftbufbbs1{    ///<Shifter Buffer N Bit Byte Swapped Register
        using Addr = Register::Address<0x4005f284,0x00000000,0x00000000,unsigned>;
        ///Shift Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbbs{}; 
    }
    namespace FlexioShiftbufbbs2{    ///<Shifter Buffer N Bit Byte Swapped Register
        using Addr = Register::Address<0x4005f288,0x00000000,0x00000000,unsigned>;
        ///Shift Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbbs{}; 
    }
    namespace FlexioShiftbufbbs3{    ///<Shifter Buffer N Bit Byte Swapped Register
        using Addr = Register::Address<0x4005f28c,0x00000000,0x00000000,unsigned>;
        ///Shift Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbbs{}; 
    }
    namespace FlexioShiftbufbys0{    ///<Shifter Buffer N Byte Swapped Register
        using Addr = Register::Address<0x4005f300,0x00000000,0x00000000,unsigned>;
        ///Shift Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbys{}; 
    }
    namespace FlexioShiftbufbys1{    ///<Shifter Buffer N Byte Swapped Register
        using Addr = Register::Address<0x4005f304,0x00000000,0x00000000,unsigned>;
        ///Shift Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbys{}; 
    }
    namespace FlexioShiftbufbys2{    ///<Shifter Buffer N Byte Swapped Register
        using Addr = Register::Address<0x4005f308,0x00000000,0x00000000,unsigned>;
        ///Shift Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbys{}; 
    }
    namespace FlexioShiftbufbys3{    ///<Shifter Buffer N Byte Swapped Register
        using Addr = Register::Address<0x4005f30c,0x00000000,0x00000000,unsigned>;
        ///Shift Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbys{}; 
    }
    namespace FlexioShiftbufbis0{    ///<Shifter Buffer N Bit Swapped Register
        using Addr = Register::Address<0x4005f380,0x00000000,0x00000000,unsigned>;
        ///Shift Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbis{}; 
    }
    namespace FlexioShiftbufbis1{    ///<Shifter Buffer N Bit Swapped Register
        using Addr = Register::Address<0x4005f384,0x00000000,0x00000000,unsigned>;
        ///Shift Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbis{}; 
    }
    namespace FlexioShiftbufbis2{    ///<Shifter Buffer N Bit Swapped Register
        using Addr = Register::Address<0x4005f388,0x00000000,0x00000000,unsigned>;
        ///Shift Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbis{}; 
    }
    namespace FlexioShiftbufbis3{    ///<Shifter Buffer N Bit Swapped Register
        using Addr = Register::Address<0x4005f38c,0x00000000,0x00000000,unsigned>;
        ///Shift Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbis{}; 
    }
    namespace FlexioTimctl0{    ///<Timer Control N Register
        using Addr = Register::Address<0x4005f400,0xf03cf87c,0x00000000,unsigned>;
        ///Timer Mode
        enum class TimodVal {
            v00=0x00000000,     ///<Timer Disabled.
            v01=0x00000001,     ///<Dual 8-bit counters baud/bit mode.
            v10=0x00000002,     ///<Dual 8-bit counters PWM mode.
            v11=0x00000003,     ///<Single 16-bit counter mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,TimodVal> timod{}; 
        namespace TimodValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl0::timod)::Type,TimodVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimctl0::timod)::Type,TimodVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimctl0::timod)::Type,TimodVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimctl0::timod)::Type,TimodVal::v11> v11{};
        }
        ///Timer Pin Polarity
        enum class PinpolVal {
            v0=0x00000000,     ///<Pin is active high
            v1=0x00000001,     ///<Pin is active low
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PinpolVal> pinpol{}; 
        namespace PinpolValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl0::pinpol)::Type,PinpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioTimctl0::pinpol)::Type,PinpolVal::v1> v1{};
        }
        ///Timer Pin Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pinsel{}; 
        ///Timer Pin Configuration
        enum class PincfgVal {
            v00=0x00000000,     ///<Timer pin output disabled
            v01=0x00000001,     ///<Timer pin open drain or bidirectional output enable
            v10=0x00000002,     ///<Timer pin bidirectional output data
            v11=0x00000003,     ///<Timer pin output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PincfgVal> pincfg{}; 
        namespace PincfgValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl0::pincfg)::Type,PincfgVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimctl0::pincfg)::Type,PincfgVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimctl0::pincfg)::Type,PincfgVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimctl0::pincfg)::Type,PincfgVal::v11> v11{};
        }
        ///Trigger Source
        enum class TrgsrcVal {
            v0=0x00000000,     ///<External trigger selected
            v1=0x00000001,     ///<Internal trigger selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,TrgsrcVal> trgsrc{}; 
        namespace TrgsrcValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl0::trgsrc)::Type,TrgsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioTimctl0::trgsrc)::Type,TrgsrcVal::v1> v1{};
        }
        ///Trigger Polarity
        enum class TrgpolVal {
            v0=0x00000000,     ///<Trigger active high
            v1=0x00000001,     ///<Trigger active low
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TrgpolVal> trgpol{}; 
        namespace TrgpolValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl0::trgpol)::Type,TrgpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioTimctl0::trgpol)::Type,TrgpolVal::v1> v1{};
        }
        ///Trigger Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trgsel{}; 
    }
    namespace FlexioTimctl1{    ///<Timer Control N Register
        using Addr = Register::Address<0x4005f404,0xf03cf87c,0x00000000,unsigned>;
        ///Timer Mode
        enum class TimodVal {
            v00=0x00000000,     ///<Timer Disabled.
            v01=0x00000001,     ///<Dual 8-bit counters baud/bit mode.
            v10=0x00000002,     ///<Dual 8-bit counters PWM mode.
            v11=0x00000003,     ///<Single 16-bit counter mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,TimodVal> timod{}; 
        namespace TimodValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl1::timod)::Type,TimodVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimctl1::timod)::Type,TimodVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimctl1::timod)::Type,TimodVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimctl1::timod)::Type,TimodVal::v11> v11{};
        }
        ///Timer Pin Polarity
        enum class PinpolVal {
            v0=0x00000000,     ///<Pin is active high
            v1=0x00000001,     ///<Pin is active low
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PinpolVal> pinpol{}; 
        namespace PinpolValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl1::pinpol)::Type,PinpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioTimctl1::pinpol)::Type,PinpolVal::v1> v1{};
        }
        ///Timer Pin Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pinsel{}; 
        ///Timer Pin Configuration
        enum class PincfgVal {
            v00=0x00000000,     ///<Timer pin output disabled
            v01=0x00000001,     ///<Timer pin open drain or bidirectional output enable
            v10=0x00000002,     ///<Timer pin bidirectional output data
            v11=0x00000003,     ///<Timer pin output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PincfgVal> pincfg{}; 
        namespace PincfgValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl1::pincfg)::Type,PincfgVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimctl1::pincfg)::Type,PincfgVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimctl1::pincfg)::Type,PincfgVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimctl1::pincfg)::Type,PincfgVal::v11> v11{};
        }
        ///Trigger Source
        enum class TrgsrcVal {
            v0=0x00000000,     ///<External trigger selected
            v1=0x00000001,     ///<Internal trigger selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,TrgsrcVal> trgsrc{}; 
        namespace TrgsrcValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl1::trgsrc)::Type,TrgsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioTimctl1::trgsrc)::Type,TrgsrcVal::v1> v1{};
        }
        ///Trigger Polarity
        enum class TrgpolVal {
            v0=0x00000000,     ///<Trigger active high
            v1=0x00000001,     ///<Trigger active low
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TrgpolVal> trgpol{}; 
        namespace TrgpolValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl1::trgpol)::Type,TrgpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioTimctl1::trgpol)::Type,TrgpolVal::v1> v1{};
        }
        ///Trigger Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trgsel{}; 
    }
    namespace FlexioTimctl2{    ///<Timer Control N Register
        using Addr = Register::Address<0x4005f408,0xf03cf87c,0x00000000,unsigned>;
        ///Timer Mode
        enum class TimodVal {
            v00=0x00000000,     ///<Timer Disabled.
            v01=0x00000001,     ///<Dual 8-bit counters baud/bit mode.
            v10=0x00000002,     ///<Dual 8-bit counters PWM mode.
            v11=0x00000003,     ///<Single 16-bit counter mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,TimodVal> timod{}; 
        namespace TimodValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl2::timod)::Type,TimodVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimctl2::timod)::Type,TimodVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimctl2::timod)::Type,TimodVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimctl2::timod)::Type,TimodVal::v11> v11{};
        }
        ///Timer Pin Polarity
        enum class PinpolVal {
            v0=0x00000000,     ///<Pin is active high
            v1=0x00000001,     ///<Pin is active low
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PinpolVal> pinpol{}; 
        namespace PinpolValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl2::pinpol)::Type,PinpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioTimctl2::pinpol)::Type,PinpolVal::v1> v1{};
        }
        ///Timer Pin Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pinsel{}; 
        ///Timer Pin Configuration
        enum class PincfgVal {
            v00=0x00000000,     ///<Timer pin output disabled
            v01=0x00000001,     ///<Timer pin open drain or bidirectional output enable
            v10=0x00000002,     ///<Timer pin bidirectional output data
            v11=0x00000003,     ///<Timer pin output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PincfgVal> pincfg{}; 
        namespace PincfgValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl2::pincfg)::Type,PincfgVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimctl2::pincfg)::Type,PincfgVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimctl2::pincfg)::Type,PincfgVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimctl2::pincfg)::Type,PincfgVal::v11> v11{};
        }
        ///Trigger Source
        enum class TrgsrcVal {
            v0=0x00000000,     ///<External trigger selected
            v1=0x00000001,     ///<Internal trigger selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,TrgsrcVal> trgsrc{}; 
        namespace TrgsrcValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl2::trgsrc)::Type,TrgsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioTimctl2::trgsrc)::Type,TrgsrcVal::v1> v1{};
        }
        ///Trigger Polarity
        enum class TrgpolVal {
            v0=0x00000000,     ///<Trigger active high
            v1=0x00000001,     ///<Trigger active low
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TrgpolVal> trgpol{}; 
        namespace TrgpolValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl2::trgpol)::Type,TrgpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioTimctl2::trgpol)::Type,TrgpolVal::v1> v1{};
        }
        ///Trigger Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trgsel{}; 
    }
    namespace FlexioTimctl3{    ///<Timer Control N Register
        using Addr = Register::Address<0x4005f40c,0xf03cf87c,0x00000000,unsigned>;
        ///Timer Mode
        enum class TimodVal {
            v00=0x00000000,     ///<Timer Disabled.
            v01=0x00000001,     ///<Dual 8-bit counters baud/bit mode.
            v10=0x00000002,     ///<Dual 8-bit counters PWM mode.
            v11=0x00000003,     ///<Single 16-bit counter mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,TimodVal> timod{}; 
        namespace TimodValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl3::timod)::Type,TimodVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimctl3::timod)::Type,TimodVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimctl3::timod)::Type,TimodVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimctl3::timod)::Type,TimodVal::v11> v11{};
        }
        ///Timer Pin Polarity
        enum class PinpolVal {
            v0=0x00000000,     ///<Pin is active high
            v1=0x00000001,     ///<Pin is active low
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PinpolVal> pinpol{}; 
        namespace PinpolValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl3::pinpol)::Type,PinpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioTimctl3::pinpol)::Type,PinpolVal::v1> v1{};
        }
        ///Timer Pin Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pinsel{}; 
        ///Timer Pin Configuration
        enum class PincfgVal {
            v00=0x00000000,     ///<Timer pin output disabled
            v01=0x00000001,     ///<Timer pin open drain or bidirectional output enable
            v10=0x00000002,     ///<Timer pin bidirectional output data
            v11=0x00000003,     ///<Timer pin output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PincfgVal> pincfg{}; 
        namespace PincfgValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl3::pincfg)::Type,PincfgVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimctl3::pincfg)::Type,PincfgVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimctl3::pincfg)::Type,PincfgVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimctl3::pincfg)::Type,PincfgVal::v11> v11{};
        }
        ///Trigger Source
        enum class TrgsrcVal {
            v0=0x00000000,     ///<External trigger selected
            v1=0x00000001,     ///<Internal trigger selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,TrgsrcVal> trgsrc{}; 
        namespace TrgsrcValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl3::trgsrc)::Type,TrgsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioTimctl3::trgsrc)::Type,TrgsrcVal::v1> v1{};
        }
        ///Trigger Polarity
        enum class TrgpolVal {
            v0=0x00000000,     ///<Trigger active high
            v1=0x00000001,     ///<Trigger active low
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TrgpolVal> trgpol{}; 
        namespace TrgpolValC{
            constexpr Register::FieldValue<decltype(FlexioTimctl3::trgpol)::Type,TrgpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioTimctl3::trgpol)::Type,TrgpolVal::v1> v1{};
        }
        ///Trigger Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trgsel{}; 
    }
    namespace FlexioTimcfg0{    ///<Timer Configuration N Register
        using Addr = Register::Address<0x4005f480,0xfcc888cd,0x00000000,unsigned>;
        ///Timer Start Bit
        enum class TstartVal {
            v0=0x00000000,     ///<Start bit disabled
            v1=0x00000001,     ///<Start bit enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TstartVal> tstart{}; 
        namespace TstartValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::tstart)::Type,TstartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::tstart)::Type,TstartVal::v1> v1{};
        }
        ///Timer Stop Bit
        enum class TstopVal {
            v00=0x00000000,     ///<Stop bit disabled
            v01=0x00000001,     ///<Stop bit is enabled on timer compare
            v10=0x00000002,     ///<Stop bit is enabled on timer disable
            v11=0x00000003,     ///<Stop bit is enabled on timer compare and timer disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,TstopVal> tstop{}; 
        namespace TstopValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::tstop)::Type,TstopVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::tstop)::Type,TstopVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::tstop)::Type,TstopVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::tstop)::Type,TstopVal::v11> v11{};
        }
        ///Timer Enable
        enum class TimenaVal {
            v000=0x00000000,     ///<Timer always enabled
            v001=0x00000001,     ///<Timer enabled on Timer N-1 enable
            v010=0x00000002,     ///<Timer enabled on Trigger high
            v011=0x00000003,     ///<Timer enabled on Trigger high and Pin high
            v100=0x00000004,     ///<Timer enabled on Pin rising edge
            v101=0x00000005,     ///<Timer enabled on Pin rising edge and Trigger high
            v110=0x00000006,     ///<Timer enabled on Trigger rising edge
            v111=0x00000007,     ///<Timer enabled on Trigger rising or falling edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,TimenaVal> timena{}; 
        namespace TimenaValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timena)::Type,TimenaVal::v000> v000{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timena)::Type,TimenaVal::v001> v001{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timena)::Type,TimenaVal::v010> v010{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timena)::Type,TimenaVal::v011> v011{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timena)::Type,TimenaVal::v100> v100{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timena)::Type,TimenaVal::v101> v101{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timena)::Type,TimenaVal::v110> v110{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timena)::Type,TimenaVal::v111> v111{};
        }
        ///Timer Disable
        enum class TimdisVal {
            v000=0x00000000,     ///<Timer never disabled
            v001=0x00000001,     ///<Timer disabled on Timer N-1 disable
            v010=0x00000002,     ///<Timer disabled on Timer compare
            v011=0x00000003,     ///<Timer disabled on Timer compare and Trigger Low
            v100=0x00000004,     ///<Timer disabled on Pin rising or falling edge
            v101=0x00000005,     ///<Timer disabled on Pin rising or falling edge provided Trigger is high
            v110=0x00000006,     ///<Timer disabled on Trigger falling edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,TimdisVal> timdis{}; 
        namespace TimdisValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timdis)::Type,TimdisVal::v000> v000{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timdis)::Type,TimdisVal::v001> v001{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timdis)::Type,TimdisVal::v010> v010{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timdis)::Type,TimdisVal::v011> v011{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timdis)::Type,TimdisVal::v100> v100{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timdis)::Type,TimdisVal::v101> v101{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timdis)::Type,TimdisVal::v110> v110{};
        }
        ///Timer Reset
        enum class TimrstVal {
            v000=0x00000000,     ///<Timer never reset
            v010=0x00000002,     ///<Timer reset on Timer Pin equal to Timer Output
            v011=0x00000003,     ///<Timer reset on Timer Trigger equal to Timer Output
            v100=0x00000004,     ///<Timer reset on Timer Pin rising edge
            v110=0x00000006,     ///<Timer reset on Trigger rising edge
            v111=0x00000007,     ///<Timer reset on Trigger rising or falling edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,TimrstVal> timrst{}; 
        namespace TimrstValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timrst)::Type,TimrstVal::v000> v000{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timrst)::Type,TimrstVal::v010> v010{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timrst)::Type,TimrstVal::v011> v011{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timrst)::Type,TimrstVal::v100> v100{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timrst)::Type,TimrstVal::v110> v110{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timrst)::Type,TimrstVal::v111> v111{};
        }
        ///Timer Decrement
        enum class TimdecVal {
            v00=0x00000000,     ///<Decrement counter on FlexIO clock, Shift clock equals Timer output.
            v01=0x00000001,     ///<Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
            v10=0x00000002,     ///<Decrement counter on Pin input (both edges), Shift clock equals Pin input.
            v11=0x00000003,     ///<Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TimdecVal> timdec{}; 
        namespace TimdecValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timdec)::Type,TimdecVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timdec)::Type,TimdecVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timdec)::Type,TimdecVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timdec)::Type,TimdecVal::v11> v11{};
        }
        ///Timer Output
        enum class TimoutVal {
            v00=0x00000000,     ///<Timer output is logic one when enabled and is not affected by timer reset
            v01=0x00000001,     ///<Timer output is logic zero when enabled and is not affected by timer reset
            v10=0x00000002,     ///<Timer output is logic one when enabled and on timer reset
            v11=0x00000003,     ///<Timer output is logic zero when enabled and on timer reset
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,TimoutVal> timout{}; 
        namespace TimoutValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timout)::Type,TimoutVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timout)::Type,TimoutVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timout)::Type,TimoutVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg0::timout)::Type,TimoutVal::v11> v11{};
        }
    }
    namespace FlexioTimcfg1{    ///<Timer Configuration N Register
        using Addr = Register::Address<0x4005f484,0xfcc888cd,0x00000000,unsigned>;
        ///Timer Start Bit
        enum class TstartVal {
            v0=0x00000000,     ///<Start bit disabled
            v1=0x00000001,     ///<Start bit enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TstartVal> tstart{}; 
        namespace TstartValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::tstart)::Type,TstartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::tstart)::Type,TstartVal::v1> v1{};
        }
        ///Timer Stop Bit
        enum class TstopVal {
            v00=0x00000000,     ///<Stop bit disabled
            v01=0x00000001,     ///<Stop bit is enabled on timer compare
            v10=0x00000002,     ///<Stop bit is enabled on timer disable
            v11=0x00000003,     ///<Stop bit is enabled on timer compare and timer disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,TstopVal> tstop{}; 
        namespace TstopValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::tstop)::Type,TstopVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::tstop)::Type,TstopVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::tstop)::Type,TstopVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::tstop)::Type,TstopVal::v11> v11{};
        }
        ///Timer Enable
        enum class TimenaVal {
            v000=0x00000000,     ///<Timer always enabled
            v001=0x00000001,     ///<Timer enabled on Timer N-1 enable
            v010=0x00000002,     ///<Timer enabled on Trigger high
            v011=0x00000003,     ///<Timer enabled on Trigger high and Pin high
            v100=0x00000004,     ///<Timer enabled on Pin rising edge
            v101=0x00000005,     ///<Timer enabled on Pin rising edge and Trigger high
            v110=0x00000006,     ///<Timer enabled on Trigger rising edge
            v111=0x00000007,     ///<Timer enabled on Trigger rising or falling edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,TimenaVal> timena{}; 
        namespace TimenaValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timena)::Type,TimenaVal::v000> v000{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timena)::Type,TimenaVal::v001> v001{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timena)::Type,TimenaVal::v010> v010{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timena)::Type,TimenaVal::v011> v011{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timena)::Type,TimenaVal::v100> v100{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timena)::Type,TimenaVal::v101> v101{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timena)::Type,TimenaVal::v110> v110{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timena)::Type,TimenaVal::v111> v111{};
        }
        ///Timer Disable
        enum class TimdisVal {
            v000=0x00000000,     ///<Timer never disabled
            v001=0x00000001,     ///<Timer disabled on Timer N-1 disable
            v010=0x00000002,     ///<Timer disabled on Timer compare
            v011=0x00000003,     ///<Timer disabled on Timer compare and Trigger Low
            v100=0x00000004,     ///<Timer disabled on Pin rising or falling edge
            v101=0x00000005,     ///<Timer disabled on Pin rising or falling edge provided Trigger is high
            v110=0x00000006,     ///<Timer disabled on Trigger falling edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,TimdisVal> timdis{}; 
        namespace TimdisValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timdis)::Type,TimdisVal::v000> v000{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timdis)::Type,TimdisVal::v001> v001{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timdis)::Type,TimdisVal::v010> v010{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timdis)::Type,TimdisVal::v011> v011{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timdis)::Type,TimdisVal::v100> v100{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timdis)::Type,TimdisVal::v101> v101{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timdis)::Type,TimdisVal::v110> v110{};
        }
        ///Timer Reset
        enum class TimrstVal {
            v000=0x00000000,     ///<Timer never reset
            v010=0x00000002,     ///<Timer reset on Timer Pin equal to Timer Output
            v011=0x00000003,     ///<Timer reset on Timer Trigger equal to Timer Output
            v100=0x00000004,     ///<Timer reset on Timer Pin rising edge
            v110=0x00000006,     ///<Timer reset on Trigger rising edge
            v111=0x00000007,     ///<Timer reset on Trigger rising or falling edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,TimrstVal> timrst{}; 
        namespace TimrstValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timrst)::Type,TimrstVal::v000> v000{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timrst)::Type,TimrstVal::v010> v010{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timrst)::Type,TimrstVal::v011> v011{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timrst)::Type,TimrstVal::v100> v100{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timrst)::Type,TimrstVal::v110> v110{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timrst)::Type,TimrstVal::v111> v111{};
        }
        ///Timer Decrement
        enum class TimdecVal {
            v00=0x00000000,     ///<Decrement counter on FlexIO clock, Shift clock equals Timer output.
            v01=0x00000001,     ///<Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
            v10=0x00000002,     ///<Decrement counter on Pin input (both edges), Shift clock equals Pin input.
            v11=0x00000003,     ///<Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TimdecVal> timdec{}; 
        namespace TimdecValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timdec)::Type,TimdecVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timdec)::Type,TimdecVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timdec)::Type,TimdecVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timdec)::Type,TimdecVal::v11> v11{};
        }
        ///Timer Output
        enum class TimoutVal {
            v00=0x00000000,     ///<Timer output is logic one when enabled and is not affected by timer reset
            v01=0x00000001,     ///<Timer output is logic zero when enabled and is not affected by timer reset
            v10=0x00000002,     ///<Timer output is logic one when enabled and on timer reset
            v11=0x00000003,     ///<Timer output is logic zero when enabled and on timer reset
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,TimoutVal> timout{}; 
        namespace TimoutValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timout)::Type,TimoutVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timout)::Type,TimoutVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timout)::Type,TimoutVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg1::timout)::Type,TimoutVal::v11> v11{};
        }
    }
    namespace FlexioTimcfg2{    ///<Timer Configuration N Register
        using Addr = Register::Address<0x4005f488,0xfcc888cd,0x00000000,unsigned>;
        ///Timer Start Bit
        enum class TstartVal {
            v0=0x00000000,     ///<Start bit disabled
            v1=0x00000001,     ///<Start bit enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TstartVal> tstart{}; 
        namespace TstartValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::tstart)::Type,TstartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::tstart)::Type,TstartVal::v1> v1{};
        }
        ///Timer Stop Bit
        enum class TstopVal {
            v00=0x00000000,     ///<Stop bit disabled
            v01=0x00000001,     ///<Stop bit is enabled on timer compare
            v10=0x00000002,     ///<Stop bit is enabled on timer disable
            v11=0x00000003,     ///<Stop bit is enabled on timer compare and timer disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,TstopVal> tstop{}; 
        namespace TstopValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::tstop)::Type,TstopVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::tstop)::Type,TstopVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::tstop)::Type,TstopVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::tstop)::Type,TstopVal::v11> v11{};
        }
        ///Timer Enable
        enum class TimenaVal {
            v000=0x00000000,     ///<Timer always enabled
            v001=0x00000001,     ///<Timer enabled on Timer N-1 enable
            v010=0x00000002,     ///<Timer enabled on Trigger high
            v011=0x00000003,     ///<Timer enabled on Trigger high and Pin high
            v100=0x00000004,     ///<Timer enabled on Pin rising edge
            v101=0x00000005,     ///<Timer enabled on Pin rising edge and Trigger high
            v110=0x00000006,     ///<Timer enabled on Trigger rising edge
            v111=0x00000007,     ///<Timer enabled on Trigger rising or falling edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,TimenaVal> timena{}; 
        namespace TimenaValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timena)::Type,TimenaVal::v000> v000{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timena)::Type,TimenaVal::v001> v001{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timena)::Type,TimenaVal::v010> v010{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timena)::Type,TimenaVal::v011> v011{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timena)::Type,TimenaVal::v100> v100{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timena)::Type,TimenaVal::v101> v101{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timena)::Type,TimenaVal::v110> v110{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timena)::Type,TimenaVal::v111> v111{};
        }
        ///Timer Disable
        enum class TimdisVal {
            v000=0x00000000,     ///<Timer never disabled
            v001=0x00000001,     ///<Timer disabled on Timer N-1 disable
            v010=0x00000002,     ///<Timer disabled on Timer compare
            v011=0x00000003,     ///<Timer disabled on Timer compare and Trigger Low
            v100=0x00000004,     ///<Timer disabled on Pin rising or falling edge
            v101=0x00000005,     ///<Timer disabled on Pin rising or falling edge provided Trigger is high
            v110=0x00000006,     ///<Timer disabled on Trigger falling edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,TimdisVal> timdis{}; 
        namespace TimdisValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timdis)::Type,TimdisVal::v000> v000{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timdis)::Type,TimdisVal::v001> v001{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timdis)::Type,TimdisVal::v010> v010{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timdis)::Type,TimdisVal::v011> v011{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timdis)::Type,TimdisVal::v100> v100{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timdis)::Type,TimdisVal::v101> v101{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timdis)::Type,TimdisVal::v110> v110{};
        }
        ///Timer Reset
        enum class TimrstVal {
            v000=0x00000000,     ///<Timer never reset
            v010=0x00000002,     ///<Timer reset on Timer Pin equal to Timer Output
            v011=0x00000003,     ///<Timer reset on Timer Trigger equal to Timer Output
            v100=0x00000004,     ///<Timer reset on Timer Pin rising edge
            v110=0x00000006,     ///<Timer reset on Trigger rising edge
            v111=0x00000007,     ///<Timer reset on Trigger rising or falling edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,TimrstVal> timrst{}; 
        namespace TimrstValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timrst)::Type,TimrstVal::v000> v000{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timrst)::Type,TimrstVal::v010> v010{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timrst)::Type,TimrstVal::v011> v011{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timrst)::Type,TimrstVal::v100> v100{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timrst)::Type,TimrstVal::v110> v110{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timrst)::Type,TimrstVal::v111> v111{};
        }
        ///Timer Decrement
        enum class TimdecVal {
            v00=0x00000000,     ///<Decrement counter on FlexIO clock, Shift clock equals Timer output.
            v01=0x00000001,     ///<Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
            v10=0x00000002,     ///<Decrement counter on Pin input (both edges), Shift clock equals Pin input.
            v11=0x00000003,     ///<Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TimdecVal> timdec{}; 
        namespace TimdecValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timdec)::Type,TimdecVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timdec)::Type,TimdecVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timdec)::Type,TimdecVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timdec)::Type,TimdecVal::v11> v11{};
        }
        ///Timer Output
        enum class TimoutVal {
            v00=0x00000000,     ///<Timer output is logic one when enabled and is not affected by timer reset
            v01=0x00000001,     ///<Timer output is logic zero when enabled and is not affected by timer reset
            v10=0x00000002,     ///<Timer output is logic one when enabled and on timer reset
            v11=0x00000003,     ///<Timer output is logic zero when enabled and on timer reset
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,TimoutVal> timout{}; 
        namespace TimoutValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timout)::Type,TimoutVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timout)::Type,TimoutVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timout)::Type,TimoutVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg2::timout)::Type,TimoutVal::v11> v11{};
        }
    }
    namespace FlexioTimcfg3{    ///<Timer Configuration N Register
        using Addr = Register::Address<0x4005f48c,0xfcc888cd,0x00000000,unsigned>;
        ///Timer Start Bit
        enum class TstartVal {
            v0=0x00000000,     ///<Start bit disabled
            v1=0x00000001,     ///<Start bit enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TstartVal> tstart{}; 
        namespace TstartValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::tstart)::Type,TstartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::tstart)::Type,TstartVal::v1> v1{};
        }
        ///Timer Stop Bit
        enum class TstopVal {
            v00=0x00000000,     ///<Stop bit disabled
            v01=0x00000001,     ///<Stop bit is enabled on timer compare
            v10=0x00000002,     ///<Stop bit is enabled on timer disable
            v11=0x00000003,     ///<Stop bit is enabled on timer compare and timer disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,TstopVal> tstop{}; 
        namespace TstopValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::tstop)::Type,TstopVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::tstop)::Type,TstopVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::tstop)::Type,TstopVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::tstop)::Type,TstopVal::v11> v11{};
        }
        ///Timer Enable
        enum class TimenaVal {
            v000=0x00000000,     ///<Timer always enabled
            v001=0x00000001,     ///<Timer enabled on Timer N-1 enable
            v010=0x00000002,     ///<Timer enabled on Trigger high
            v011=0x00000003,     ///<Timer enabled on Trigger high and Pin high
            v100=0x00000004,     ///<Timer enabled on Pin rising edge
            v101=0x00000005,     ///<Timer enabled on Pin rising edge and Trigger high
            v110=0x00000006,     ///<Timer enabled on Trigger rising edge
            v111=0x00000007,     ///<Timer enabled on Trigger rising or falling edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,TimenaVal> timena{}; 
        namespace TimenaValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timena)::Type,TimenaVal::v000> v000{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timena)::Type,TimenaVal::v001> v001{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timena)::Type,TimenaVal::v010> v010{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timena)::Type,TimenaVal::v011> v011{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timena)::Type,TimenaVal::v100> v100{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timena)::Type,TimenaVal::v101> v101{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timena)::Type,TimenaVal::v110> v110{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timena)::Type,TimenaVal::v111> v111{};
        }
        ///Timer Disable
        enum class TimdisVal {
            v000=0x00000000,     ///<Timer never disabled
            v001=0x00000001,     ///<Timer disabled on Timer N-1 disable
            v010=0x00000002,     ///<Timer disabled on Timer compare
            v011=0x00000003,     ///<Timer disabled on Timer compare and Trigger Low
            v100=0x00000004,     ///<Timer disabled on Pin rising or falling edge
            v101=0x00000005,     ///<Timer disabled on Pin rising or falling edge provided Trigger is high
            v110=0x00000006,     ///<Timer disabled on Trigger falling edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,TimdisVal> timdis{}; 
        namespace TimdisValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timdis)::Type,TimdisVal::v000> v000{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timdis)::Type,TimdisVal::v001> v001{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timdis)::Type,TimdisVal::v010> v010{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timdis)::Type,TimdisVal::v011> v011{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timdis)::Type,TimdisVal::v100> v100{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timdis)::Type,TimdisVal::v101> v101{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timdis)::Type,TimdisVal::v110> v110{};
        }
        ///Timer Reset
        enum class TimrstVal {
            v000=0x00000000,     ///<Timer never reset
            v010=0x00000002,     ///<Timer reset on Timer Pin equal to Timer Output
            v011=0x00000003,     ///<Timer reset on Timer Trigger equal to Timer Output
            v100=0x00000004,     ///<Timer reset on Timer Pin rising edge
            v110=0x00000006,     ///<Timer reset on Trigger rising edge
            v111=0x00000007,     ///<Timer reset on Trigger rising or falling edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,TimrstVal> timrst{}; 
        namespace TimrstValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timrst)::Type,TimrstVal::v000> v000{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timrst)::Type,TimrstVal::v010> v010{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timrst)::Type,TimrstVal::v011> v011{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timrst)::Type,TimrstVal::v100> v100{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timrst)::Type,TimrstVal::v110> v110{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timrst)::Type,TimrstVal::v111> v111{};
        }
        ///Timer Decrement
        enum class TimdecVal {
            v00=0x00000000,     ///<Decrement counter on FlexIO clock, Shift clock equals Timer output.
            v01=0x00000001,     ///<Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
            v10=0x00000002,     ///<Decrement counter on Pin input (both edges), Shift clock equals Pin input.
            v11=0x00000003,     ///<Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TimdecVal> timdec{}; 
        namespace TimdecValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timdec)::Type,TimdecVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timdec)::Type,TimdecVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timdec)::Type,TimdecVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timdec)::Type,TimdecVal::v11> v11{};
        }
        ///Timer Output
        enum class TimoutVal {
            v00=0x00000000,     ///<Timer output is logic one when enabled and is not affected by timer reset
            v01=0x00000001,     ///<Timer output is logic zero when enabled and is not affected by timer reset
            v10=0x00000002,     ///<Timer output is logic one when enabled and on timer reset
            v11=0x00000003,     ///<Timer output is logic zero when enabled and on timer reset
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,TimoutVal> timout{}; 
        namespace TimoutValC{
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timout)::Type,TimoutVal::v00> v00{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timout)::Type,TimoutVal::v01> v01{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timout)::Type,TimoutVal::v10> v10{};
            constexpr Register::FieldValue<decltype(FlexioTimcfg3::timout)::Type,TimoutVal::v11> v11{};
        }
    }
    namespace FlexioTimcmp0{    ///<Timer Compare N Register
        using Addr = Register::Address<0x4005f500,0xffff0000,0x00000000,unsigned>;
        ///Timer Compare Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp{}; 
    }
    namespace FlexioTimcmp1{    ///<Timer Compare N Register
        using Addr = Register::Address<0x4005f504,0xffff0000,0x00000000,unsigned>;
        ///Timer Compare Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp{}; 
    }
    namespace FlexioTimcmp2{    ///<Timer Compare N Register
        using Addr = Register::Address<0x4005f508,0xffff0000,0x00000000,unsigned>;
        ///Timer Compare Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp{}; 
    }
    namespace FlexioTimcmp3{    ///<Timer Compare N Register
        using Addr = Register::Address<0x4005f50c,0xffff0000,0x00000000,unsigned>;
        ///Timer Compare Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp{}; 
    }
}
