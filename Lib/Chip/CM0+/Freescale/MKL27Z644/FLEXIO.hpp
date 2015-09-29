#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//The FLEXIO Memory Map/Register Definition can be found here.
    namespace FlexioVerid{    ///<Version ID Register
        using Addr = Register::Address<0x4005f000,0x00000000,0,unsigned>;
        ///Feature Specification Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> feature{}; 
        ///Minor Version Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> minor{}; 
        ///Major Version Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> major{}; 
    }
    namespace FlexioParam{    ///<Parameter Register
        using Addr = Register::Address<0x4005f004,0x00000000,0,unsigned>;
        ///Shifter Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> shifter{}; 
        ///Timer Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> timer{}; 
        ///Pin Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pin{}; 
        ///Trigger Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> trigger{}; 
    }
    namespace FlexioCtrl{    ///<FlexIO Control Register
        using Addr = Register::Address<0x4005f008,0x3ffffff8,0,unsigned>;
        ///FlexIO Enable
        enum class flexenVal {
            v0=0x00000000,     ///<FlexIO module is disabled.
            v1=0x00000001,     ///<FlexIO module is enabled.
        };
        namespace flexenValC{
            constexpr MPL::Value<flexenVal,flexenVal::v0> v0{};
            constexpr MPL::Value<flexenVal,flexenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,flexenVal> flexen{}; 
        ///Software Reset
        enum class swrstVal {
            v0=0x00000000,     ///<Software reset is disabled
            v1=0x00000001,     ///<Software reset is enabled, all FlexIO registers except the Control Register are reset.
        };
        namespace swrstValC{
            constexpr MPL::Value<swrstVal,swrstVal::v0> v0{};
            constexpr MPL::Value<swrstVal,swrstVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,swrstVal> swrst{}; 
        ///Fast Access
        enum class fastaccVal {
            v0=0x00000000,     ///<Configures for normal register accesses to FlexIO
            v1=0x00000001,     ///<Configures for fast register accesses to FlexIO
        };
        namespace fastaccValC{
            constexpr MPL::Value<fastaccVal,fastaccVal::v0> v0{};
            constexpr MPL::Value<fastaccVal,fastaccVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,fastaccVal> fastacc{}; 
        ///Debug Enable
        enum class dbgeVal {
            v0=0x00000000,     ///<FlexIO is disabled in debug modes.
            v1=0x00000001,     ///<FlexIO is enabled in debug modes
        };
        namespace dbgeValC{
            constexpr MPL::Value<dbgeVal,dbgeVal::v0> v0{};
            constexpr MPL::Value<dbgeVal,dbgeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dbgeVal> dbge{}; 
        ///Doze Enable
        enum class dozenVal {
            v0=0x00000000,     ///<FlexIO enabled in Doze modes.
            v1=0x00000001,     ///<FlexIO disabled in Doze modes.
        };
        namespace dozenValC{
            constexpr MPL::Value<dozenVal,dozenVal::v0> v0{};
            constexpr MPL::Value<dozenVal,dozenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,dozenVal> dozen{}; 
    }
    namespace FlexioShiftstat{    ///<Shifter Status Register
        using Addr = Register::Address<0x4005f010,0xfffffff0,0,unsigned>;
        ///Shifter Status Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ssf{}; 
    }
    namespace FlexioShifterr{    ///<Shifter Error Register
        using Addr = Register::Address<0x4005f014,0xfffffff0,0,unsigned>;
        ///Shifter Error Flags
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sef{}; 
    }
    namespace FlexioTimstat{    ///<Timer Status Register
        using Addr = Register::Address<0x4005f018,0xfffffff0,0,unsigned>;
        ///Timer Status Flags
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tsf{}; 
    }
    namespace FlexioShiftsien{    ///<Shifter Status Interrupt Enable
        using Addr = Register::Address<0x4005f020,0xfffffff0,0,unsigned>;
        ///Shifter Status Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ssie{}; 
    }
    namespace FlexioShifteien{    ///<Shifter Error Interrupt Enable
        using Addr = Register::Address<0x4005f024,0xfffffff0,0,unsigned>;
        ///Shifter Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seie{}; 
    }
    namespace FlexioTimien{    ///<Timer Interrupt Enable Register
        using Addr = Register::Address<0x4005f028,0xfffffff0,0,unsigned>;
        ///Timer Status Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> teie{}; 
    }
    namespace FlexioShiftsden{    ///<Shifter Status DMA Enable
        using Addr = Register::Address<0x4005f030,0xfffffff0,0,unsigned>;
        ///Shifter Status DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ssde{}; 
    }
    namespace FlexioShiftctl0{    ///<Shifter Control N Register
        using Addr = Register::Address<0x4005f080,0xfc7cf878,0,unsigned>;
        ///Shifter Mode
        enum class smodVal {
            v000=0x00000000,     ///<Disabled.
            v001=0x00000001,     ///<Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
            v010=0x00000002,     ///<Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
            v100=0x00000004,     ///<Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
            v101=0x00000005,     ///<Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
        };
        namespace smodValC{
            constexpr MPL::Value<smodVal,smodVal::v000> v000{};
            constexpr MPL::Value<smodVal,smodVal::v001> v001{};
            constexpr MPL::Value<smodVal,smodVal::v010> v010{};
            constexpr MPL::Value<smodVal,smodVal::v100> v100{};
            constexpr MPL::Value<smodVal,smodVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,smodVal> smod{}; 
        ///Shifter Pin Polarity
        enum class pinpolVal {
            v0=0x00000000,     ///<Pin is active high
            v1=0x00000001,     ///<Pin is active low
        };
        namespace pinpolValC{
            constexpr MPL::Value<pinpolVal,pinpolVal::v0> v0{};
            constexpr MPL::Value<pinpolVal,pinpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pinpolVal> pinpol{}; 
        ///Shifter Pin Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pinsel{}; 
        ///Shifter Pin Configuration
        enum class pincfgVal {
            v00=0x00000000,     ///<Shifter pin output disabled
            v01=0x00000001,     ///<Shifter pin open drain or bidirectional output enable
            v10=0x00000002,     ///<Shifter pin bidirectional output data
            v11=0x00000003,     ///<Shifter pin output
        };
        namespace pincfgValC{
            constexpr MPL::Value<pincfgVal,pincfgVal::v00> v00{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v01> v01{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v10> v10{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,pincfgVal> pincfg{}; 
        ///Timer Polarity
        enum class timpolVal {
            v0=0x00000000,     ///<Shift on posedge of Shift clock
            v1=0x00000001,     ///<Shift on negedge of Shift clock
        };
        namespace timpolValC{
            constexpr MPL::Value<timpolVal,timpolVal::v0> v0{};
            constexpr MPL::Value<timpolVal,timpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,timpolVal> timpol{}; 
        ///Timer Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> timsel{}; 
    }
    namespace FlexioShiftctl1{    ///<Shifter Control N Register
        using Addr = Register::Address<0x4005f084,0xfc7cf878,0,unsigned>;
        ///Shifter Mode
        enum class smodVal {
            v000=0x00000000,     ///<Disabled.
            v001=0x00000001,     ///<Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
            v010=0x00000002,     ///<Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
            v100=0x00000004,     ///<Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
            v101=0x00000005,     ///<Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
        };
        namespace smodValC{
            constexpr MPL::Value<smodVal,smodVal::v000> v000{};
            constexpr MPL::Value<smodVal,smodVal::v001> v001{};
            constexpr MPL::Value<smodVal,smodVal::v010> v010{};
            constexpr MPL::Value<smodVal,smodVal::v100> v100{};
            constexpr MPL::Value<smodVal,smodVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,smodVal> smod{}; 
        ///Shifter Pin Polarity
        enum class pinpolVal {
            v0=0x00000000,     ///<Pin is active high
            v1=0x00000001,     ///<Pin is active low
        };
        namespace pinpolValC{
            constexpr MPL::Value<pinpolVal,pinpolVal::v0> v0{};
            constexpr MPL::Value<pinpolVal,pinpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pinpolVal> pinpol{}; 
        ///Shifter Pin Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pinsel{}; 
        ///Shifter Pin Configuration
        enum class pincfgVal {
            v00=0x00000000,     ///<Shifter pin output disabled
            v01=0x00000001,     ///<Shifter pin open drain or bidirectional output enable
            v10=0x00000002,     ///<Shifter pin bidirectional output data
            v11=0x00000003,     ///<Shifter pin output
        };
        namespace pincfgValC{
            constexpr MPL::Value<pincfgVal,pincfgVal::v00> v00{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v01> v01{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v10> v10{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,pincfgVal> pincfg{}; 
        ///Timer Polarity
        enum class timpolVal {
            v0=0x00000000,     ///<Shift on posedge of Shift clock
            v1=0x00000001,     ///<Shift on negedge of Shift clock
        };
        namespace timpolValC{
            constexpr MPL::Value<timpolVal,timpolVal::v0> v0{};
            constexpr MPL::Value<timpolVal,timpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,timpolVal> timpol{}; 
        ///Timer Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> timsel{}; 
    }
    namespace FlexioShiftctl2{    ///<Shifter Control N Register
        using Addr = Register::Address<0x4005f088,0xfc7cf878,0,unsigned>;
        ///Shifter Mode
        enum class smodVal {
            v000=0x00000000,     ///<Disabled.
            v001=0x00000001,     ///<Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
            v010=0x00000002,     ///<Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
            v100=0x00000004,     ///<Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
            v101=0x00000005,     ///<Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
        };
        namespace smodValC{
            constexpr MPL::Value<smodVal,smodVal::v000> v000{};
            constexpr MPL::Value<smodVal,smodVal::v001> v001{};
            constexpr MPL::Value<smodVal,smodVal::v010> v010{};
            constexpr MPL::Value<smodVal,smodVal::v100> v100{};
            constexpr MPL::Value<smodVal,smodVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,smodVal> smod{}; 
        ///Shifter Pin Polarity
        enum class pinpolVal {
            v0=0x00000000,     ///<Pin is active high
            v1=0x00000001,     ///<Pin is active low
        };
        namespace pinpolValC{
            constexpr MPL::Value<pinpolVal,pinpolVal::v0> v0{};
            constexpr MPL::Value<pinpolVal,pinpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pinpolVal> pinpol{}; 
        ///Shifter Pin Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pinsel{}; 
        ///Shifter Pin Configuration
        enum class pincfgVal {
            v00=0x00000000,     ///<Shifter pin output disabled
            v01=0x00000001,     ///<Shifter pin open drain or bidirectional output enable
            v10=0x00000002,     ///<Shifter pin bidirectional output data
            v11=0x00000003,     ///<Shifter pin output
        };
        namespace pincfgValC{
            constexpr MPL::Value<pincfgVal,pincfgVal::v00> v00{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v01> v01{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v10> v10{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,pincfgVal> pincfg{}; 
        ///Timer Polarity
        enum class timpolVal {
            v0=0x00000000,     ///<Shift on posedge of Shift clock
            v1=0x00000001,     ///<Shift on negedge of Shift clock
        };
        namespace timpolValC{
            constexpr MPL::Value<timpolVal,timpolVal::v0> v0{};
            constexpr MPL::Value<timpolVal,timpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,timpolVal> timpol{}; 
        ///Timer Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> timsel{}; 
    }
    namespace FlexioShiftctl3{    ///<Shifter Control N Register
        using Addr = Register::Address<0x4005f08c,0xfc7cf878,0,unsigned>;
        ///Shifter Mode
        enum class smodVal {
            v000=0x00000000,     ///<Disabled.
            v001=0x00000001,     ///<Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
            v010=0x00000002,     ///<Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
            v100=0x00000004,     ///<Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
            v101=0x00000005,     ///<Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
        };
        namespace smodValC{
            constexpr MPL::Value<smodVal,smodVal::v000> v000{};
            constexpr MPL::Value<smodVal,smodVal::v001> v001{};
            constexpr MPL::Value<smodVal,smodVal::v010> v010{};
            constexpr MPL::Value<smodVal,smodVal::v100> v100{};
            constexpr MPL::Value<smodVal,smodVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,smodVal> smod{}; 
        ///Shifter Pin Polarity
        enum class pinpolVal {
            v0=0x00000000,     ///<Pin is active high
            v1=0x00000001,     ///<Pin is active low
        };
        namespace pinpolValC{
            constexpr MPL::Value<pinpolVal,pinpolVal::v0> v0{};
            constexpr MPL::Value<pinpolVal,pinpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pinpolVal> pinpol{}; 
        ///Shifter Pin Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pinsel{}; 
        ///Shifter Pin Configuration
        enum class pincfgVal {
            v00=0x00000000,     ///<Shifter pin output disabled
            v01=0x00000001,     ///<Shifter pin open drain or bidirectional output enable
            v10=0x00000002,     ///<Shifter pin bidirectional output data
            v11=0x00000003,     ///<Shifter pin output
        };
        namespace pincfgValC{
            constexpr MPL::Value<pincfgVal,pincfgVal::v00> v00{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v01> v01{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v10> v10{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,pincfgVal> pincfg{}; 
        ///Timer Polarity
        enum class timpolVal {
            v0=0x00000000,     ///<Shift on posedge of Shift clock
            v1=0x00000001,     ///<Shift on negedge of Shift clock
        };
        namespace timpolValC{
            constexpr MPL::Value<timpolVal,timpolVal::v0> v0{};
            constexpr MPL::Value<timpolVal,timpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,timpolVal> timpol{}; 
        ///Timer Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> timsel{}; 
    }
    namespace FlexioShiftcfg0{    ///<Shifter Configuration N Register
        using Addr = Register::Address<0x4005f100,0xfffffecc,0,unsigned>;
        ///Shifter Start bit
        enum class sstartVal {
            v00=0x00000000,     ///<Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
            v01=0x00000001,     ///<Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
            v10=0x00000002,     ///<Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
            v11=0x00000003,     ///<Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
        };
        namespace sstartValC{
            constexpr MPL::Value<sstartVal,sstartVal::v00> v00{};
            constexpr MPL::Value<sstartVal,sstartVal::v01> v01{};
            constexpr MPL::Value<sstartVal,sstartVal::v10> v10{};
            constexpr MPL::Value<sstartVal,sstartVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sstartVal> sstart{}; 
        ///Shifter Stop bit
        enum class sstopVal {
            v00=0x00000000,     ///<Stop bit disabled for transmitter/receiver/match store
            v01=0x00000001,     ///<Reserved for transmitter/receiver/match store
            v10=0x00000002,     ///<Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
            v11=0x00000003,     ///<Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
        };
        namespace sstopValC{
            constexpr MPL::Value<sstopVal,sstopVal::v00> v00{};
            constexpr MPL::Value<sstopVal,sstopVal::v01> v01{};
            constexpr MPL::Value<sstopVal,sstopVal::v10> v10{};
            constexpr MPL::Value<sstopVal,sstopVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,sstopVal> sstop{}; 
        ///Input Source
        enum class insrcVal {
            v0=0x00000000,     ///<Pin
            v1=0x00000001,     ///<Shifter N+1 Output
        };
        namespace insrcValC{
            constexpr MPL::Value<insrcVal,insrcVal::v0> v0{};
            constexpr MPL::Value<insrcVal,insrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,insrcVal> insrc{}; 
    }
    namespace FlexioShiftcfg1{    ///<Shifter Configuration N Register
        using Addr = Register::Address<0x4005f104,0xfffffecc,0,unsigned>;
        ///Shifter Start bit
        enum class sstartVal {
            v00=0x00000000,     ///<Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
            v01=0x00000001,     ///<Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
            v10=0x00000002,     ///<Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
            v11=0x00000003,     ///<Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
        };
        namespace sstartValC{
            constexpr MPL::Value<sstartVal,sstartVal::v00> v00{};
            constexpr MPL::Value<sstartVal,sstartVal::v01> v01{};
            constexpr MPL::Value<sstartVal,sstartVal::v10> v10{};
            constexpr MPL::Value<sstartVal,sstartVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sstartVal> sstart{}; 
        ///Shifter Stop bit
        enum class sstopVal {
            v00=0x00000000,     ///<Stop bit disabled for transmitter/receiver/match store
            v01=0x00000001,     ///<Reserved for transmitter/receiver/match store
            v10=0x00000002,     ///<Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
            v11=0x00000003,     ///<Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
        };
        namespace sstopValC{
            constexpr MPL::Value<sstopVal,sstopVal::v00> v00{};
            constexpr MPL::Value<sstopVal,sstopVal::v01> v01{};
            constexpr MPL::Value<sstopVal,sstopVal::v10> v10{};
            constexpr MPL::Value<sstopVal,sstopVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,sstopVal> sstop{}; 
        ///Input Source
        enum class insrcVal {
            v0=0x00000000,     ///<Pin
            v1=0x00000001,     ///<Shifter N+1 Output
        };
        namespace insrcValC{
            constexpr MPL::Value<insrcVal,insrcVal::v0> v0{};
            constexpr MPL::Value<insrcVal,insrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,insrcVal> insrc{}; 
    }
    namespace FlexioShiftcfg2{    ///<Shifter Configuration N Register
        using Addr = Register::Address<0x4005f108,0xfffffecc,0,unsigned>;
        ///Shifter Start bit
        enum class sstartVal {
            v00=0x00000000,     ///<Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
            v01=0x00000001,     ///<Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
            v10=0x00000002,     ///<Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
            v11=0x00000003,     ///<Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
        };
        namespace sstartValC{
            constexpr MPL::Value<sstartVal,sstartVal::v00> v00{};
            constexpr MPL::Value<sstartVal,sstartVal::v01> v01{};
            constexpr MPL::Value<sstartVal,sstartVal::v10> v10{};
            constexpr MPL::Value<sstartVal,sstartVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sstartVal> sstart{}; 
        ///Shifter Stop bit
        enum class sstopVal {
            v00=0x00000000,     ///<Stop bit disabled for transmitter/receiver/match store
            v01=0x00000001,     ///<Reserved for transmitter/receiver/match store
            v10=0x00000002,     ///<Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
            v11=0x00000003,     ///<Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
        };
        namespace sstopValC{
            constexpr MPL::Value<sstopVal,sstopVal::v00> v00{};
            constexpr MPL::Value<sstopVal,sstopVal::v01> v01{};
            constexpr MPL::Value<sstopVal,sstopVal::v10> v10{};
            constexpr MPL::Value<sstopVal,sstopVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,sstopVal> sstop{}; 
        ///Input Source
        enum class insrcVal {
            v0=0x00000000,     ///<Pin
            v1=0x00000001,     ///<Shifter N+1 Output
        };
        namespace insrcValC{
            constexpr MPL::Value<insrcVal,insrcVal::v0> v0{};
            constexpr MPL::Value<insrcVal,insrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,insrcVal> insrc{}; 
    }
    namespace FlexioShiftcfg3{    ///<Shifter Configuration N Register
        using Addr = Register::Address<0x4005f10c,0xfffffecc,0,unsigned>;
        ///Shifter Start bit
        enum class sstartVal {
            v00=0x00000000,     ///<Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
            v01=0x00000001,     ///<Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
            v10=0x00000002,     ///<Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
            v11=0x00000003,     ///<Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
        };
        namespace sstartValC{
            constexpr MPL::Value<sstartVal,sstartVal::v00> v00{};
            constexpr MPL::Value<sstartVal,sstartVal::v01> v01{};
            constexpr MPL::Value<sstartVal,sstartVal::v10> v10{};
            constexpr MPL::Value<sstartVal,sstartVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sstartVal> sstart{}; 
        ///Shifter Stop bit
        enum class sstopVal {
            v00=0x00000000,     ///<Stop bit disabled for transmitter/receiver/match store
            v01=0x00000001,     ///<Reserved for transmitter/receiver/match store
            v10=0x00000002,     ///<Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
            v11=0x00000003,     ///<Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
        };
        namespace sstopValC{
            constexpr MPL::Value<sstopVal,sstopVal::v00> v00{};
            constexpr MPL::Value<sstopVal,sstopVal::v01> v01{};
            constexpr MPL::Value<sstopVal,sstopVal::v10> v10{};
            constexpr MPL::Value<sstopVal,sstopVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,sstopVal> sstop{}; 
        ///Input Source
        enum class insrcVal {
            v0=0x00000000,     ///<Pin
            v1=0x00000001,     ///<Shifter N+1 Output
        };
        namespace insrcValC{
            constexpr MPL::Value<insrcVal,insrcVal::v0> v0{};
            constexpr MPL::Value<insrcVal,insrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,insrcVal> insrc{}; 
    }
    namespace FlexioShiftbuf0{    ///<Shifter Buffer N Register
        using Addr = Register::Address<0x4005f200,0x00000000,0,unsigned>;
        ///Shift Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbuf{}; 
    }
    namespace FlexioShiftbuf1{    ///<Shifter Buffer N Register
        using Addr = Register::Address<0x4005f204,0x00000000,0,unsigned>;
        ///Shift Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbuf{}; 
    }
    namespace FlexioShiftbuf2{    ///<Shifter Buffer N Register
        using Addr = Register::Address<0x4005f208,0x00000000,0,unsigned>;
        ///Shift Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbuf{}; 
    }
    namespace FlexioShiftbuf3{    ///<Shifter Buffer N Register
        using Addr = Register::Address<0x4005f20c,0x00000000,0,unsigned>;
        ///Shift Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbuf{}; 
    }
    namespace FlexioShiftbufbis0{    ///<Shifter Buffer N Bit Swapped Register
        using Addr = Register::Address<0x4005f280,0x00000000,0,unsigned>;
        ///Shift Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbis{}; 
    }
    namespace FlexioShiftbufbis1{    ///<Shifter Buffer N Bit Swapped Register
        using Addr = Register::Address<0x4005f284,0x00000000,0,unsigned>;
        ///Shift Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbis{}; 
    }
    namespace FlexioShiftbufbis2{    ///<Shifter Buffer N Bit Swapped Register
        using Addr = Register::Address<0x4005f288,0x00000000,0,unsigned>;
        ///Shift Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbis{}; 
    }
    namespace FlexioShiftbufbis3{    ///<Shifter Buffer N Bit Swapped Register
        using Addr = Register::Address<0x4005f28c,0x00000000,0,unsigned>;
        ///Shift Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbis{}; 
    }
    namespace FlexioShiftbufbys0{    ///<Shifter Buffer N Byte Swapped Register
        using Addr = Register::Address<0x4005f300,0x00000000,0,unsigned>;
        ///Shift Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbys{}; 
    }
    namespace FlexioShiftbufbys1{    ///<Shifter Buffer N Byte Swapped Register
        using Addr = Register::Address<0x4005f304,0x00000000,0,unsigned>;
        ///Shift Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbys{}; 
    }
    namespace FlexioShiftbufbys2{    ///<Shifter Buffer N Byte Swapped Register
        using Addr = Register::Address<0x4005f308,0x00000000,0,unsigned>;
        ///Shift Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbys{}; 
    }
    namespace FlexioShiftbufbys3{    ///<Shifter Buffer N Byte Swapped Register
        using Addr = Register::Address<0x4005f30c,0x00000000,0,unsigned>;
        ///Shift Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbys{}; 
    }
    namespace FlexioShiftbufbbs0{    ///<Shifter Buffer N Bit Byte Swapped Register
        using Addr = Register::Address<0x4005f380,0x00000000,0,unsigned>;
        ///Shift Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbbs{}; 
    }
    namespace FlexioShiftbufbbs1{    ///<Shifter Buffer N Bit Byte Swapped Register
        using Addr = Register::Address<0x4005f384,0x00000000,0,unsigned>;
        ///Shift Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbbs{}; 
    }
    namespace FlexioShiftbufbbs2{    ///<Shifter Buffer N Bit Byte Swapped Register
        using Addr = Register::Address<0x4005f388,0x00000000,0,unsigned>;
        ///Shift Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbbs{}; 
    }
    namespace FlexioShiftbufbbs3{    ///<Shifter Buffer N Bit Byte Swapped Register
        using Addr = Register::Address<0x4005f38c,0x00000000,0,unsigned>;
        ///Shift Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> shiftbufbbs{}; 
    }
    namespace FlexioTimctl0{    ///<Timer Control N Register
        using Addr = Register::Address<0x4005f400,0xf03cf87c,0,unsigned>;
        ///Timer Mode
        enum class timodVal {
            v00=0x00000000,     ///<Timer Disabled.
            v01=0x00000001,     ///<Dual 8-bit counters baud/bit mode.
            v10=0x00000002,     ///<Dual 8-bit counters PWM mode.
            v11=0x00000003,     ///<Single 16-bit counter mode.
        };
        namespace timodValC{
            constexpr MPL::Value<timodVal,timodVal::v00> v00{};
            constexpr MPL::Value<timodVal,timodVal::v01> v01{};
            constexpr MPL::Value<timodVal,timodVal::v10> v10{};
            constexpr MPL::Value<timodVal,timodVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,timodVal> timod{}; 
        ///Timer Pin Polarity
        enum class pinpolVal {
            v0=0x00000000,     ///<Pin is active high
            v1=0x00000001,     ///<Pin is active low
        };
        namespace pinpolValC{
            constexpr MPL::Value<pinpolVal,pinpolVal::v0> v0{};
            constexpr MPL::Value<pinpolVal,pinpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pinpolVal> pinpol{}; 
        ///Timer Pin Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pinsel{}; 
        ///Timer Pin Configuration
        enum class pincfgVal {
            v00=0x00000000,     ///<Timer pin output disabled
            v01=0x00000001,     ///<Timer pin open drain or bidirectional output enable
            v10=0x00000002,     ///<Timer pin bidirectional output data
            v11=0x00000003,     ///<Timer pin output
        };
        namespace pincfgValC{
            constexpr MPL::Value<pincfgVal,pincfgVal::v00> v00{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v01> v01{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v10> v10{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,pincfgVal> pincfg{}; 
        ///Trigger Source
        enum class trgsrcVal {
            v0=0x00000000,     ///<External trigger selected
            v1=0x00000001,     ///<Internal trigger selected
        };
        namespace trgsrcValC{
            constexpr MPL::Value<trgsrcVal,trgsrcVal::v0> v0{};
            constexpr MPL::Value<trgsrcVal,trgsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,trgsrcVal> trgsrc{}; 
        ///Trigger Polarity
        enum class trgpolVal {
            v0=0x00000000,     ///<Trigger active high
            v1=0x00000001,     ///<Trigger active low
        };
        namespace trgpolValC{
            constexpr MPL::Value<trgpolVal,trgpolVal::v0> v0{};
            constexpr MPL::Value<trgpolVal,trgpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,trgpolVal> trgpol{}; 
        ///Trigger Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trgsel{}; 
    }
    namespace FlexioTimctl1{    ///<Timer Control N Register
        using Addr = Register::Address<0x4005f404,0xf03cf87c,0,unsigned>;
        ///Timer Mode
        enum class timodVal {
            v00=0x00000000,     ///<Timer Disabled.
            v01=0x00000001,     ///<Dual 8-bit counters baud/bit mode.
            v10=0x00000002,     ///<Dual 8-bit counters PWM mode.
            v11=0x00000003,     ///<Single 16-bit counter mode.
        };
        namespace timodValC{
            constexpr MPL::Value<timodVal,timodVal::v00> v00{};
            constexpr MPL::Value<timodVal,timodVal::v01> v01{};
            constexpr MPL::Value<timodVal,timodVal::v10> v10{};
            constexpr MPL::Value<timodVal,timodVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,timodVal> timod{}; 
        ///Timer Pin Polarity
        enum class pinpolVal {
            v0=0x00000000,     ///<Pin is active high
            v1=0x00000001,     ///<Pin is active low
        };
        namespace pinpolValC{
            constexpr MPL::Value<pinpolVal,pinpolVal::v0> v0{};
            constexpr MPL::Value<pinpolVal,pinpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pinpolVal> pinpol{}; 
        ///Timer Pin Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pinsel{}; 
        ///Timer Pin Configuration
        enum class pincfgVal {
            v00=0x00000000,     ///<Timer pin output disabled
            v01=0x00000001,     ///<Timer pin open drain or bidirectional output enable
            v10=0x00000002,     ///<Timer pin bidirectional output data
            v11=0x00000003,     ///<Timer pin output
        };
        namespace pincfgValC{
            constexpr MPL::Value<pincfgVal,pincfgVal::v00> v00{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v01> v01{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v10> v10{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,pincfgVal> pincfg{}; 
        ///Trigger Source
        enum class trgsrcVal {
            v0=0x00000000,     ///<External trigger selected
            v1=0x00000001,     ///<Internal trigger selected
        };
        namespace trgsrcValC{
            constexpr MPL::Value<trgsrcVal,trgsrcVal::v0> v0{};
            constexpr MPL::Value<trgsrcVal,trgsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,trgsrcVal> trgsrc{}; 
        ///Trigger Polarity
        enum class trgpolVal {
            v0=0x00000000,     ///<Trigger active high
            v1=0x00000001,     ///<Trigger active low
        };
        namespace trgpolValC{
            constexpr MPL::Value<trgpolVal,trgpolVal::v0> v0{};
            constexpr MPL::Value<trgpolVal,trgpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,trgpolVal> trgpol{}; 
        ///Trigger Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trgsel{}; 
    }
    namespace FlexioTimctl2{    ///<Timer Control N Register
        using Addr = Register::Address<0x4005f408,0xf03cf87c,0,unsigned>;
        ///Timer Mode
        enum class timodVal {
            v00=0x00000000,     ///<Timer Disabled.
            v01=0x00000001,     ///<Dual 8-bit counters baud/bit mode.
            v10=0x00000002,     ///<Dual 8-bit counters PWM mode.
            v11=0x00000003,     ///<Single 16-bit counter mode.
        };
        namespace timodValC{
            constexpr MPL::Value<timodVal,timodVal::v00> v00{};
            constexpr MPL::Value<timodVal,timodVal::v01> v01{};
            constexpr MPL::Value<timodVal,timodVal::v10> v10{};
            constexpr MPL::Value<timodVal,timodVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,timodVal> timod{}; 
        ///Timer Pin Polarity
        enum class pinpolVal {
            v0=0x00000000,     ///<Pin is active high
            v1=0x00000001,     ///<Pin is active low
        };
        namespace pinpolValC{
            constexpr MPL::Value<pinpolVal,pinpolVal::v0> v0{};
            constexpr MPL::Value<pinpolVal,pinpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pinpolVal> pinpol{}; 
        ///Timer Pin Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pinsel{}; 
        ///Timer Pin Configuration
        enum class pincfgVal {
            v00=0x00000000,     ///<Timer pin output disabled
            v01=0x00000001,     ///<Timer pin open drain or bidirectional output enable
            v10=0x00000002,     ///<Timer pin bidirectional output data
            v11=0x00000003,     ///<Timer pin output
        };
        namespace pincfgValC{
            constexpr MPL::Value<pincfgVal,pincfgVal::v00> v00{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v01> v01{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v10> v10{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,pincfgVal> pincfg{}; 
        ///Trigger Source
        enum class trgsrcVal {
            v0=0x00000000,     ///<External trigger selected
            v1=0x00000001,     ///<Internal trigger selected
        };
        namespace trgsrcValC{
            constexpr MPL::Value<trgsrcVal,trgsrcVal::v0> v0{};
            constexpr MPL::Value<trgsrcVal,trgsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,trgsrcVal> trgsrc{}; 
        ///Trigger Polarity
        enum class trgpolVal {
            v0=0x00000000,     ///<Trigger active high
            v1=0x00000001,     ///<Trigger active low
        };
        namespace trgpolValC{
            constexpr MPL::Value<trgpolVal,trgpolVal::v0> v0{};
            constexpr MPL::Value<trgpolVal,trgpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,trgpolVal> trgpol{}; 
        ///Trigger Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trgsel{}; 
    }
    namespace FlexioTimctl3{    ///<Timer Control N Register
        using Addr = Register::Address<0x4005f40c,0xf03cf87c,0,unsigned>;
        ///Timer Mode
        enum class timodVal {
            v00=0x00000000,     ///<Timer Disabled.
            v01=0x00000001,     ///<Dual 8-bit counters baud/bit mode.
            v10=0x00000002,     ///<Dual 8-bit counters PWM mode.
            v11=0x00000003,     ///<Single 16-bit counter mode.
        };
        namespace timodValC{
            constexpr MPL::Value<timodVal,timodVal::v00> v00{};
            constexpr MPL::Value<timodVal,timodVal::v01> v01{};
            constexpr MPL::Value<timodVal,timodVal::v10> v10{};
            constexpr MPL::Value<timodVal,timodVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,timodVal> timod{}; 
        ///Timer Pin Polarity
        enum class pinpolVal {
            v0=0x00000000,     ///<Pin is active high
            v1=0x00000001,     ///<Pin is active low
        };
        namespace pinpolValC{
            constexpr MPL::Value<pinpolVal,pinpolVal::v0> v0{};
            constexpr MPL::Value<pinpolVal,pinpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pinpolVal> pinpol{}; 
        ///Timer Pin Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pinsel{}; 
        ///Timer Pin Configuration
        enum class pincfgVal {
            v00=0x00000000,     ///<Timer pin output disabled
            v01=0x00000001,     ///<Timer pin open drain or bidirectional output enable
            v10=0x00000002,     ///<Timer pin bidirectional output data
            v11=0x00000003,     ///<Timer pin output
        };
        namespace pincfgValC{
            constexpr MPL::Value<pincfgVal,pincfgVal::v00> v00{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v01> v01{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v10> v10{};
            constexpr MPL::Value<pincfgVal,pincfgVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,pincfgVal> pincfg{}; 
        ///Trigger Source
        enum class trgsrcVal {
            v0=0x00000000,     ///<External trigger selected
            v1=0x00000001,     ///<Internal trigger selected
        };
        namespace trgsrcValC{
            constexpr MPL::Value<trgsrcVal,trgsrcVal::v0> v0{};
            constexpr MPL::Value<trgsrcVal,trgsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,trgsrcVal> trgsrc{}; 
        ///Trigger Polarity
        enum class trgpolVal {
            v0=0x00000000,     ///<Trigger active high
            v1=0x00000001,     ///<Trigger active low
        };
        namespace trgpolValC{
            constexpr MPL::Value<trgpolVal,trgpolVal::v0> v0{};
            constexpr MPL::Value<trgpolVal,trgpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,trgpolVal> trgpol{}; 
        ///Trigger Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trgsel{}; 
    }
    namespace FlexioTimcfg0{    ///<Timer Configuration N Register
        using Addr = Register::Address<0x4005f480,0xfcc888cd,0,unsigned>;
        ///Timer Start Bit
        enum class tstartVal {
            v0=0x00000000,     ///<Start bit disabled
            v1=0x00000001,     ///<Start bit enabled
        };
        namespace tstartValC{
            constexpr MPL::Value<tstartVal,tstartVal::v0> v0{};
            constexpr MPL::Value<tstartVal,tstartVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tstartVal> tstart{}; 
        ///Timer Stop Bit
        enum class tstopVal {
            v00=0x00000000,     ///<Stop bit disabled
            v01=0x00000001,     ///<Stop bit is enabled on timer compare
            v10=0x00000002,     ///<Stop bit is enabled on timer disable
            v11=0x00000003,     ///<Stop bit is enabled on timer compare and timer disable
        };
        namespace tstopValC{
            constexpr MPL::Value<tstopVal,tstopVal::v00> v00{};
            constexpr MPL::Value<tstopVal,tstopVal::v01> v01{};
            constexpr MPL::Value<tstopVal,tstopVal::v10> v10{};
            constexpr MPL::Value<tstopVal,tstopVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,tstopVal> tstop{}; 
        ///Timer Enable
        enum class timenaVal {
            v000=0x00000000,     ///<Timer always enabled
            v001=0x00000001,     ///<Timer enabled on Timer N-1 enable
            v010=0x00000002,     ///<Timer enabled on Trigger high
            v011=0x00000003,     ///<Timer enabled on Trigger high and Pin high
            v100=0x00000004,     ///<Timer enabled on Pin rising edge
            v101=0x00000005,     ///<Timer enabled on Pin rising edge and Trigger high
            v110=0x00000006,     ///<Timer enabled on Trigger rising edge
            v111=0x00000007,     ///<Timer enabled on Trigger rising or falling edge
        };
        namespace timenaValC{
            constexpr MPL::Value<timenaVal,timenaVal::v000> v000{};
            constexpr MPL::Value<timenaVal,timenaVal::v001> v001{};
            constexpr MPL::Value<timenaVal,timenaVal::v010> v010{};
            constexpr MPL::Value<timenaVal,timenaVal::v011> v011{};
            constexpr MPL::Value<timenaVal,timenaVal::v100> v100{};
            constexpr MPL::Value<timenaVal,timenaVal::v101> v101{};
            constexpr MPL::Value<timenaVal,timenaVal::v110> v110{};
            constexpr MPL::Value<timenaVal,timenaVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,timenaVal> timena{}; 
        ///Timer Disable
        enum class timdisVal {
            v000=0x00000000,     ///<Timer never disabled
            v001=0x00000001,     ///<Timer disabled on Timer N-1 disable
            v010=0x00000002,     ///<Timer disabled on Timer compare
            v011=0x00000003,     ///<Timer disabled on Timer compare and Trigger Low
            v100=0x00000004,     ///<Timer disabled on Pin rising or falling edge
            v101=0x00000005,     ///<Timer disabled on Pin rising or falling edge provided Trigger is high
            v110=0x00000006,     ///<Timer disabled on Trigger falling edge
        };
        namespace timdisValC{
            constexpr MPL::Value<timdisVal,timdisVal::v000> v000{};
            constexpr MPL::Value<timdisVal,timdisVal::v001> v001{};
            constexpr MPL::Value<timdisVal,timdisVal::v010> v010{};
            constexpr MPL::Value<timdisVal,timdisVal::v011> v011{};
            constexpr MPL::Value<timdisVal,timdisVal::v100> v100{};
            constexpr MPL::Value<timdisVal,timdisVal::v101> v101{};
            constexpr MPL::Value<timdisVal,timdisVal::v110> v110{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,timdisVal> timdis{}; 
        ///Timer Reset
        enum class timrstVal {
            v000=0x00000000,     ///<Timer never reset
            v010=0x00000002,     ///<Timer reset on Timer Pin equal to Timer Output
            v011=0x00000003,     ///<Timer reset on Timer Trigger equal to Timer Output
            v100=0x00000004,     ///<Timer reset on Timer Pin rising edge
            v110=0x00000006,     ///<Timer reset on Trigger rising edge
            v111=0x00000007,     ///<Timer reset on Trigger rising or falling edge
        };
        namespace timrstValC{
            constexpr MPL::Value<timrstVal,timrstVal::v000> v000{};
            constexpr MPL::Value<timrstVal,timrstVal::v010> v010{};
            constexpr MPL::Value<timrstVal,timrstVal::v011> v011{};
            constexpr MPL::Value<timrstVal,timrstVal::v100> v100{};
            constexpr MPL::Value<timrstVal,timrstVal::v110> v110{};
            constexpr MPL::Value<timrstVal,timrstVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,timrstVal> timrst{}; 
        ///Timer Decrement
        enum class timdecVal {
            v00=0x00000000,     ///<Decrement counter on FlexIO clock, Shift clock equals Timer output.
            v01=0x00000001,     ///<Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
            v10=0x00000002,     ///<Decrement counter on Pin input (both edges), Shift clock equals Pin input.
            v11=0x00000003,     ///<Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
        };
        namespace timdecValC{
            constexpr MPL::Value<timdecVal,timdecVal::v00> v00{};
            constexpr MPL::Value<timdecVal,timdecVal::v01> v01{};
            constexpr MPL::Value<timdecVal,timdecVal::v10> v10{};
            constexpr MPL::Value<timdecVal,timdecVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,timdecVal> timdec{}; 
        ///Timer Output
        enum class timoutVal {
            v00=0x00000000,     ///<Timer output is logic one when enabled and is not affected by timer reset
            v01=0x00000001,     ///<Timer output is logic zero when enabled and is not affected by timer reset
            v10=0x00000002,     ///<Timer output is logic one when enabled and on timer reset
            v11=0x00000003,     ///<Timer output is logic zero when enabled and on timer reset
        };
        namespace timoutValC{
            constexpr MPL::Value<timoutVal,timoutVal::v00> v00{};
            constexpr MPL::Value<timoutVal,timoutVal::v01> v01{};
            constexpr MPL::Value<timoutVal,timoutVal::v10> v10{};
            constexpr MPL::Value<timoutVal,timoutVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,timoutVal> timout{}; 
    }
    namespace FlexioTimcfg1{    ///<Timer Configuration N Register
        using Addr = Register::Address<0x4005f484,0xfcc888cd,0,unsigned>;
        ///Timer Start Bit
        enum class tstartVal {
            v0=0x00000000,     ///<Start bit disabled
            v1=0x00000001,     ///<Start bit enabled
        };
        namespace tstartValC{
            constexpr MPL::Value<tstartVal,tstartVal::v0> v0{};
            constexpr MPL::Value<tstartVal,tstartVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tstartVal> tstart{}; 
        ///Timer Stop Bit
        enum class tstopVal {
            v00=0x00000000,     ///<Stop bit disabled
            v01=0x00000001,     ///<Stop bit is enabled on timer compare
            v10=0x00000002,     ///<Stop bit is enabled on timer disable
            v11=0x00000003,     ///<Stop bit is enabled on timer compare and timer disable
        };
        namespace tstopValC{
            constexpr MPL::Value<tstopVal,tstopVal::v00> v00{};
            constexpr MPL::Value<tstopVal,tstopVal::v01> v01{};
            constexpr MPL::Value<tstopVal,tstopVal::v10> v10{};
            constexpr MPL::Value<tstopVal,tstopVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,tstopVal> tstop{}; 
        ///Timer Enable
        enum class timenaVal {
            v000=0x00000000,     ///<Timer always enabled
            v001=0x00000001,     ///<Timer enabled on Timer N-1 enable
            v010=0x00000002,     ///<Timer enabled on Trigger high
            v011=0x00000003,     ///<Timer enabled on Trigger high and Pin high
            v100=0x00000004,     ///<Timer enabled on Pin rising edge
            v101=0x00000005,     ///<Timer enabled on Pin rising edge and Trigger high
            v110=0x00000006,     ///<Timer enabled on Trigger rising edge
            v111=0x00000007,     ///<Timer enabled on Trigger rising or falling edge
        };
        namespace timenaValC{
            constexpr MPL::Value<timenaVal,timenaVal::v000> v000{};
            constexpr MPL::Value<timenaVal,timenaVal::v001> v001{};
            constexpr MPL::Value<timenaVal,timenaVal::v010> v010{};
            constexpr MPL::Value<timenaVal,timenaVal::v011> v011{};
            constexpr MPL::Value<timenaVal,timenaVal::v100> v100{};
            constexpr MPL::Value<timenaVal,timenaVal::v101> v101{};
            constexpr MPL::Value<timenaVal,timenaVal::v110> v110{};
            constexpr MPL::Value<timenaVal,timenaVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,timenaVal> timena{}; 
        ///Timer Disable
        enum class timdisVal {
            v000=0x00000000,     ///<Timer never disabled
            v001=0x00000001,     ///<Timer disabled on Timer N-1 disable
            v010=0x00000002,     ///<Timer disabled on Timer compare
            v011=0x00000003,     ///<Timer disabled on Timer compare and Trigger Low
            v100=0x00000004,     ///<Timer disabled on Pin rising or falling edge
            v101=0x00000005,     ///<Timer disabled on Pin rising or falling edge provided Trigger is high
            v110=0x00000006,     ///<Timer disabled on Trigger falling edge
        };
        namespace timdisValC{
            constexpr MPL::Value<timdisVal,timdisVal::v000> v000{};
            constexpr MPL::Value<timdisVal,timdisVal::v001> v001{};
            constexpr MPL::Value<timdisVal,timdisVal::v010> v010{};
            constexpr MPL::Value<timdisVal,timdisVal::v011> v011{};
            constexpr MPL::Value<timdisVal,timdisVal::v100> v100{};
            constexpr MPL::Value<timdisVal,timdisVal::v101> v101{};
            constexpr MPL::Value<timdisVal,timdisVal::v110> v110{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,timdisVal> timdis{}; 
        ///Timer Reset
        enum class timrstVal {
            v000=0x00000000,     ///<Timer never reset
            v010=0x00000002,     ///<Timer reset on Timer Pin equal to Timer Output
            v011=0x00000003,     ///<Timer reset on Timer Trigger equal to Timer Output
            v100=0x00000004,     ///<Timer reset on Timer Pin rising edge
            v110=0x00000006,     ///<Timer reset on Trigger rising edge
            v111=0x00000007,     ///<Timer reset on Trigger rising or falling edge
        };
        namespace timrstValC{
            constexpr MPL::Value<timrstVal,timrstVal::v000> v000{};
            constexpr MPL::Value<timrstVal,timrstVal::v010> v010{};
            constexpr MPL::Value<timrstVal,timrstVal::v011> v011{};
            constexpr MPL::Value<timrstVal,timrstVal::v100> v100{};
            constexpr MPL::Value<timrstVal,timrstVal::v110> v110{};
            constexpr MPL::Value<timrstVal,timrstVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,timrstVal> timrst{}; 
        ///Timer Decrement
        enum class timdecVal {
            v00=0x00000000,     ///<Decrement counter on FlexIO clock, Shift clock equals Timer output.
            v01=0x00000001,     ///<Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
            v10=0x00000002,     ///<Decrement counter on Pin input (both edges), Shift clock equals Pin input.
            v11=0x00000003,     ///<Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
        };
        namespace timdecValC{
            constexpr MPL::Value<timdecVal,timdecVal::v00> v00{};
            constexpr MPL::Value<timdecVal,timdecVal::v01> v01{};
            constexpr MPL::Value<timdecVal,timdecVal::v10> v10{};
            constexpr MPL::Value<timdecVal,timdecVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,timdecVal> timdec{}; 
        ///Timer Output
        enum class timoutVal {
            v00=0x00000000,     ///<Timer output is logic one when enabled and is not affected by timer reset
            v01=0x00000001,     ///<Timer output is logic zero when enabled and is not affected by timer reset
            v10=0x00000002,     ///<Timer output is logic one when enabled and on timer reset
            v11=0x00000003,     ///<Timer output is logic zero when enabled and on timer reset
        };
        namespace timoutValC{
            constexpr MPL::Value<timoutVal,timoutVal::v00> v00{};
            constexpr MPL::Value<timoutVal,timoutVal::v01> v01{};
            constexpr MPL::Value<timoutVal,timoutVal::v10> v10{};
            constexpr MPL::Value<timoutVal,timoutVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,timoutVal> timout{}; 
    }
    namespace FlexioTimcfg2{    ///<Timer Configuration N Register
        using Addr = Register::Address<0x4005f488,0xfcc888cd,0,unsigned>;
        ///Timer Start Bit
        enum class tstartVal {
            v0=0x00000000,     ///<Start bit disabled
            v1=0x00000001,     ///<Start bit enabled
        };
        namespace tstartValC{
            constexpr MPL::Value<tstartVal,tstartVal::v0> v0{};
            constexpr MPL::Value<tstartVal,tstartVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tstartVal> tstart{}; 
        ///Timer Stop Bit
        enum class tstopVal {
            v00=0x00000000,     ///<Stop bit disabled
            v01=0x00000001,     ///<Stop bit is enabled on timer compare
            v10=0x00000002,     ///<Stop bit is enabled on timer disable
            v11=0x00000003,     ///<Stop bit is enabled on timer compare and timer disable
        };
        namespace tstopValC{
            constexpr MPL::Value<tstopVal,tstopVal::v00> v00{};
            constexpr MPL::Value<tstopVal,tstopVal::v01> v01{};
            constexpr MPL::Value<tstopVal,tstopVal::v10> v10{};
            constexpr MPL::Value<tstopVal,tstopVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,tstopVal> tstop{}; 
        ///Timer Enable
        enum class timenaVal {
            v000=0x00000000,     ///<Timer always enabled
            v001=0x00000001,     ///<Timer enabled on Timer N-1 enable
            v010=0x00000002,     ///<Timer enabled on Trigger high
            v011=0x00000003,     ///<Timer enabled on Trigger high and Pin high
            v100=0x00000004,     ///<Timer enabled on Pin rising edge
            v101=0x00000005,     ///<Timer enabled on Pin rising edge and Trigger high
            v110=0x00000006,     ///<Timer enabled on Trigger rising edge
            v111=0x00000007,     ///<Timer enabled on Trigger rising or falling edge
        };
        namespace timenaValC{
            constexpr MPL::Value<timenaVal,timenaVal::v000> v000{};
            constexpr MPL::Value<timenaVal,timenaVal::v001> v001{};
            constexpr MPL::Value<timenaVal,timenaVal::v010> v010{};
            constexpr MPL::Value<timenaVal,timenaVal::v011> v011{};
            constexpr MPL::Value<timenaVal,timenaVal::v100> v100{};
            constexpr MPL::Value<timenaVal,timenaVal::v101> v101{};
            constexpr MPL::Value<timenaVal,timenaVal::v110> v110{};
            constexpr MPL::Value<timenaVal,timenaVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,timenaVal> timena{}; 
        ///Timer Disable
        enum class timdisVal {
            v000=0x00000000,     ///<Timer never disabled
            v001=0x00000001,     ///<Timer disabled on Timer N-1 disable
            v010=0x00000002,     ///<Timer disabled on Timer compare
            v011=0x00000003,     ///<Timer disabled on Timer compare and Trigger Low
            v100=0x00000004,     ///<Timer disabled on Pin rising or falling edge
            v101=0x00000005,     ///<Timer disabled on Pin rising or falling edge provided Trigger is high
            v110=0x00000006,     ///<Timer disabled on Trigger falling edge
        };
        namespace timdisValC{
            constexpr MPL::Value<timdisVal,timdisVal::v000> v000{};
            constexpr MPL::Value<timdisVal,timdisVal::v001> v001{};
            constexpr MPL::Value<timdisVal,timdisVal::v010> v010{};
            constexpr MPL::Value<timdisVal,timdisVal::v011> v011{};
            constexpr MPL::Value<timdisVal,timdisVal::v100> v100{};
            constexpr MPL::Value<timdisVal,timdisVal::v101> v101{};
            constexpr MPL::Value<timdisVal,timdisVal::v110> v110{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,timdisVal> timdis{}; 
        ///Timer Reset
        enum class timrstVal {
            v000=0x00000000,     ///<Timer never reset
            v010=0x00000002,     ///<Timer reset on Timer Pin equal to Timer Output
            v011=0x00000003,     ///<Timer reset on Timer Trigger equal to Timer Output
            v100=0x00000004,     ///<Timer reset on Timer Pin rising edge
            v110=0x00000006,     ///<Timer reset on Trigger rising edge
            v111=0x00000007,     ///<Timer reset on Trigger rising or falling edge
        };
        namespace timrstValC{
            constexpr MPL::Value<timrstVal,timrstVal::v000> v000{};
            constexpr MPL::Value<timrstVal,timrstVal::v010> v010{};
            constexpr MPL::Value<timrstVal,timrstVal::v011> v011{};
            constexpr MPL::Value<timrstVal,timrstVal::v100> v100{};
            constexpr MPL::Value<timrstVal,timrstVal::v110> v110{};
            constexpr MPL::Value<timrstVal,timrstVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,timrstVal> timrst{}; 
        ///Timer Decrement
        enum class timdecVal {
            v00=0x00000000,     ///<Decrement counter on FlexIO clock, Shift clock equals Timer output.
            v01=0x00000001,     ///<Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
            v10=0x00000002,     ///<Decrement counter on Pin input (both edges), Shift clock equals Pin input.
            v11=0x00000003,     ///<Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
        };
        namespace timdecValC{
            constexpr MPL::Value<timdecVal,timdecVal::v00> v00{};
            constexpr MPL::Value<timdecVal,timdecVal::v01> v01{};
            constexpr MPL::Value<timdecVal,timdecVal::v10> v10{};
            constexpr MPL::Value<timdecVal,timdecVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,timdecVal> timdec{}; 
        ///Timer Output
        enum class timoutVal {
            v00=0x00000000,     ///<Timer output is logic one when enabled and is not affected by timer reset
            v01=0x00000001,     ///<Timer output is logic zero when enabled and is not affected by timer reset
            v10=0x00000002,     ///<Timer output is logic one when enabled and on timer reset
            v11=0x00000003,     ///<Timer output is logic zero when enabled and on timer reset
        };
        namespace timoutValC{
            constexpr MPL::Value<timoutVal,timoutVal::v00> v00{};
            constexpr MPL::Value<timoutVal,timoutVal::v01> v01{};
            constexpr MPL::Value<timoutVal,timoutVal::v10> v10{};
            constexpr MPL::Value<timoutVal,timoutVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,timoutVal> timout{}; 
    }
    namespace FlexioTimcfg3{    ///<Timer Configuration N Register
        using Addr = Register::Address<0x4005f48c,0xfcc888cd,0,unsigned>;
        ///Timer Start Bit
        enum class tstartVal {
            v0=0x00000000,     ///<Start bit disabled
            v1=0x00000001,     ///<Start bit enabled
        };
        namespace tstartValC{
            constexpr MPL::Value<tstartVal,tstartVal::v0> v0{};
            constexpr MPL::Value<tstartVal,tstartVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tstartVal> tstart{}; 
        ///Timer Stop Bit
        enum class tstopVal {
            v00=0x00000000,     ///<Stop bit disabled
            v01=0x00000001,     ///<Stop bit is enabled on timer compare
            v10=0x00000002,     ///<Stop bit is enabled on timer disable
            v11=0x00000003,     ///<Stop bit is enabled on timer compare and timer disable
        };
        namespace tstopValC{
            constexpr MPL::Value<tstopVal,tstopVal::v00> v00{};
            constexpr MPL::Value<tstopVal,tstopVal::v01> v01{};
            constexpr MPL::Value<tstopVal,tstopVal::v10> v10{};
            constexpr MPL::Value<tstopVal,tstopVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,tstopVal> tstop{}; 
        ///Timer Enable
        enum class timenaVal {
            v000=0x00000000,     ///<Timer always enabled
            v001=0x00000001,     ///<Timer enabled on Timer N-1 enable
            v010=0x00000002,     ///<Timer enabled on Trigger high
            v011=0x00000003,     ///<Timer enabled on Trigger high and Pin high
            v100=0x00000004,     ///<Timer enabled on Pin rising edge
            v101=0x00000005,     ///<Timer enabled on Pin rising edge and Trigger high
            v110=0x00000006,     ///<Timer enabled on Trigger rising edge
            v111=0x00000007,     ///<Timer enabled on Trigger rising or falling edge
        };
        namespace timenaValC{
            constexpr MPL::Value<timenaVal,timenaVal::v000> v000{};
            constexpr MPL::Value<timenaVal,timenaVal::v001> v001{};
            constexpr MPL::Value<timenaVal,timenaVal::v010> v010{};
            constexpr MPL::Value<timenaVal,timenaVal::v011> v011{};
            constexpr MPL::Value<timenaVal,timenaVal::v100> v100{};
            constexpr MPL::Value<timenaVal,timenaVal::v101> v101{};
            constexpr MPL::Value<timenaVal,timenaVal::v110> v110{};
            constexpr MPL::Value<timenaVal,timenaVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,timenaVal> timena{}; 
        ///Timer Disable
        enum class timdisVal {
            v000=0x00000000,     ///<Timer never disabled
            v001=0x00000001,     ///<Timer disabled on Timer N-1 disable
            v010=0x00000002,     ///<Timer disabled on Timer compare
            v011=0x00000003,     ///<Timer disabled on Timer compare and Trigger Low
            v100=0x00000004,     ///<Timer disabled on Pin rising or falling edge
            v101=0x00000005,     ///<Timer disabled on Pin rising or falling edge provided Trigger is high
            v110=0x00000006,     ///<Timer disabled on Trigger falling edge
        };
        namespace timdisValC{
            constexpr MPL::Value<timdisVal,timdisVal::v000> v000{};
            constexpr MPL::Value<timdisVal,timdisVal::v001> v001{};
            constexpr MPL::Value<timdisVal,timdisVal::v010> v010{};
            constexpr MPL::Value<timdisVal,timdisVal::v011> v011{};
            constexpr MPL::Value<timdisVal,timdisVal::v100> v100{};
            constexpr MPL::Value<timdisVal,timdisVal::v101> v101{};
            constexpr MPL::Value<timdisVal,timdisVal::v110> v110{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,timdisVal> timdis{}; 
        ///Timer Reset
        enum class timrstVal {
            v000=0x00000000,     ///<Timer never reset
            v010=0x00000002,     ///<Timer reset on Timer Pin equal to Timer Output
            v011=0x00000003,     ///<Timer reset on Timer Trigger equal to Timer Output
            v100=0x00000004,     ///<Timer reset on Timer Pin rising edge
            v110=0x00000006,     ///<Timer reset on Trigger rising edge
            v111=0x00000007,     ///<Timer reset on Trigger rising or falling edge
        };
        namespace timrstValC{
            constexpr MPL::Value<timrstVal,timrstVal::v000> v000{};
            constexpr MPL::Value<timrstVal,timrstVal::v010> v010{};
            constexpr MPL::Value<timrstVal,timrstVal::v011> v011{};
            constexpr MPL::Value<timrstVal,timrstVal::v100> v100{};
            constexpr MPL::Value<timrstVal,timrstVal::v110> v110{};
            constexpr MPL::Value<timrstVal,timrstVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,timrstVal> timrst{}; 
        ///Timer Decrement
        enum class timdecVal {
            v00=0x00000000,     ///<Decrement counter on FlexIO clock, Shift clock equals Timer output.
            v01=0x00000001,     ///<Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
            v10=0x00000002,     ///<Decrement counter on Pin input (both edges), Shift clock equals Pin input.
            v11=0x00000003,     ///<Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
        };
        namespace timdecValC{
            constexpr MPL::Value<timdecVal,timdecVal::v00> v00{};
            constexpr MPL::Value<timdecVal,timdecVal::v01> v01{};
            constexpr MPL::Value<timdecVal,timdecVal::v10> v10{};
            constexpr MPL::Value<timdecVal,timdecVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,timdecVal> timdec{}; 
        ///Timer Output
        enum class timoutVal {
            v00=0x00000000,     ///<Timer output is logic one when enabled and is not affected by timer reset
            v01=0x00000001,     ///<Timer output is logic zero when enabled and is not affected by timer reset
            v10=0x00000002,     ///<Timer output is logic one when enabled and on timer reset
            v11=0x00000003,     ///<Timer output is logic zero when enabled and on timer reset
        };
        namespace timoutValC{
            constexpr MPL::Value<timoutVal,timoutVal::v00> v00{};
            constexpr MPL::Value<timoutVal,timoutVal::v01> v01{};
            constexpr MPL::Value<timoutVal,timoutVal::v10> v10{};
            constexpr MPL::Value<timoutVal,timoutVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,timoutVal> timout{}; 
    }
    namespace FlexioTimcmp0{    ///<Timer Compare N Register
        using Addr = Register::Address<0x4005f500,0xffff0000,0,unsigned>;
        ///Timer Compare Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp{}; 
    }
    namespace FlexioTimcmp1{    ///<Timer Compare N Register
        using Addr = Register::Address<0x4005f504,0xffff0000,0,unsigned>;
        ///Timer Compare Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp{}; 
    }
    namespace FlexioTimcmp2{    ///<Timer Compare N Register
        using Addr = Register::Address<0x4005f508,0xffff0000,0,unsigned>;
        ///Timer Compare Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp{}; 
    }
    namespace FlexioTimcmp3{    ///<Timer Compare N Register
        using Addr = Register::Address<0x4005f50c,0xffff0000,0,unsigned>;
        ///Timer Compare Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp{}; 
    }
}
