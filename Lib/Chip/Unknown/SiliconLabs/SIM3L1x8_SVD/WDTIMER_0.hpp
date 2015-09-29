#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40030000,0xfffffffc,0,unsigned>;
        ///Early Warning Interrupt Enable. 
        enum class ewienVal {
            disabled=0x00000000,     ///<Disable the early warning interrupt (EWI).
            enabled=0x00000001,     ///<Enable the early warning interrupt (EWI).
        };
        namespace ewienValC{
            constexpr MPL::Value<ewienVal,ewienVal::disabled> disabled{};
            constexpr MPL::Value<ewienVal,ewienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ewienVal> ewien{}; 
        ///Watchdog Timer Debug Mode. 
        enum class dbgmdVal {
            run=0x00000000,     ///<The WDTIMER module will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will cause the WDTIMER module to halt.
        };
        namespace dbgmdValC{
            constexpr MPL::Value<dbgmdVal,dbgmdVal::run> run{};
            constexpr MPL::Value<dbgmdVal,dbgmdVal::halt> halt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dbgmdVal> dbgmd{}; 
    }
    namespace Nonestatus{    ///<Module Status
        using Addr = Register::Address<0x40030010,0xffffffe0,0,unsigned>;
        ///Key Status. 
        enum class keystsVal {
            idle=0x00000000,     ///<No keys have been processed by the interface.
            ready=0x00000001,     ///<The attention key has been received and the module is awaiting a command.
        };
        namespace keystsValC{
            constexpr MPL::Value<keystsVal,keystsVal::idle> idle{};
            constexpr MPL::Value<keystsVal,keystsVal::ready> ready{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,keystsVal> keysts{}; 
        ///Register Access Status. 
        enum class privstsVal {
            readOnly=0x00000000,     ///<The watchdog timer registers are currently read-only.
            readWrite=0x00000001,     ///<A write transaction can be performed on the module registers.
        };
        namespace privstsValC{
            constexpr MPL::Value<privstsVal,privstsVal::readOnly> readOnly{};
            constexpr MPL::Value<privstsVal,privstsVal::readWrite> readWrite{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,privstsVal> privsts{}; 
        ///Early Warning Interrupt Flag. 
        enum class ewiVal {
            notSet=0x00000000,     ///<Read: An early warning match did not occur. Write: Clear the early warning interrupt.
            set=0x00000001,     ///<Read: An early warning match occurred and the interrupt is pending. Write: Force a watchdog timer early warning interrupt to occur.
        };
        namespace ewiValC{
            constexpr MPL::Value<ewiVal,ewiVal::notSet> notSet{};
            constexpr MPL::Value<ewiVal,ewiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ewiVal> ewi{}; 
        ///Reset Threshold Flag. 
        enum class rthfVal {
            lt=0x00000000,     ///<The counter is currently less than the reset threshold (RTH) value.
            gte=0x00000001,     ///<The counter is currently greater than or equal to the reset threshold (RTH) value.
        };
        namespace rthfValC{
            constexpr MPL::Value<rthfVal,rthfVal::lt> lt{};
            constexpr MPL::Value<rthfVal,rthfVal::gte> gte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rthfVal> rthf{}; 
        ///Watchdog Timer Threshold Update Status. 
        enum class updstsVal {
            idle=0x00000000,     ///<An update completed or is not pending. The EWTH and RTH fields can be written.
            updating=0x00000001,     ///<An update of the threshold register is occurring. The EWTH and RTH fields should not be modified until hardware clears UPDSTS to 0.
        };
        namespace updstsValC{
            constexpr MPL::Value<updstsVal,updstsVal::idle> idle{};
            constexpr MPL::Value<updstsVal,updstsVal::updating> updating{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,updstsVal> updsts{}; 
    }
    namespace Nonethreshold{    ///<Threshold Values
        using Addr = Register::Address<0x40030020,0x00000000,0,unsigned>;
        ///Early Warning Threshold. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ewth{}; 
        ///Reset Threshold. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> rth{}; 
    }
    namespace Nonewdtkey{    ///<Module Key
        using Addr = Register::Address<0x40030030,0xffffff00,0,unsigned>;
        ///Watchdog Timer Key. 
        enum class keyVal {
            attn=0x000000a5,     ///<Attention key to start the command sequence.
            reset=0x000000cc,     ///<Reset the watchdog timer.
            disable=0x000000dd,     ///<Disable the watchdog timer.
            start=0x000000ee,     ///<Start the watchdog timer.
            write=0x000000f1,     ///<Allow one write access to the module registers.
            lock=0x000000ff,     ///<Lock the module from any other writes until the next system reset.
        };
        namespace keyValC{
            constexpr MPL::Value<keyVal,keyVal::attn> attn{};
            constexpr MPL::Value<keyVal,keyVal::reset> reset{};
            constexpr MPL::Value<keyVal,keyVal::disable> disable{};
            constexpr MPL::Value<keyVal,keyVal::start> start{};
            constexpr MPL::Value<keyVal,keyVal::write> write{};
            constexpr MPL::Value<keyVal,keyVal::lock> lock{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,keyVal> key{}; 
    }
}
