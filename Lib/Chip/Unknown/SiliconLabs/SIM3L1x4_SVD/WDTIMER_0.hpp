#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40030000,0xfffffffc,0,unsigned>;
        ///Early Warning Interrupt Enable. 
        enum class EwienVal {
            disabled=0x00000000,     ///<Disable the early warning interrupt (EWI).
            enabled=0x00000001,     ///<Enable the early warning interrupt (EWI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EwienVal> ewien{}; 
        namespace EwienValC{
            constexpr Register::FieldValue<decltype(ewien),EwienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ewien),EwienVal::enabled> enabled{};
        }
        ///Watchdog Timer Debug Mode. 
        enum class DbgmdVal {
            run=0x00000000,     ///<The WDTIMER module will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will cause the WDTIMER module to halt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DbgmdVal> dbgmd{}; 
        namespace DbgmdValC{
            constexpr Register::FieldValue<decltype(dbgmd),DbgmdVal::run> run{};
            constexpr Register::FieldValue<decltype(dbgmd),DbgmdVal::halt> halt{};
        }
    }
    namespace Nonestatus{    ///<Module Status
        using Addr = Register::Address<0x40030010,0xffffffe0,0,unsigned>;
        ///Key Status. 
        enum class KeystsVal {
            idle=0x00000000,     ///<No keys have been processed by the interface.
            ready=0x00000001,     ///<The attention key has been received and the module is awaiting a command.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,KeystsVal> keysts{}; 
        namespace KeystsValC{
            constexpr Register::FieldValue<decltype(keysts),KeystsVal::idle> idle{};
            constexpr Register::FieldValue<decltype(keysts),KeystsVal::ready> ready{};
        }
        ///Register Access Status. 
        enum class PrivstsVal {
            readOnly=0x00000000,     ///<The watchdog timer registers are currently read-only.
            readWrite=0x00000001,     ///<A write transaction can be performed on the module registers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PrivstsVal> privsts{}; 
        namespace PrivstsValC{
            constexpr Register::FieldValue<decltype(privsts),PrivstsVal::readOnly> readOnly{};
            constexpr Register::FieldValue<decltype(privsts),PrivstsVal::readWrite> readWrite{};
        }
        ///Early Warning Interrupt Flag. 
        enum class EwiVal {
            notSet=0x00000000,     ///<Read: An early warning match did not occur. Write: Clear the early warning interrupt.
            set=0x00000001,     ///<Read: An early warning match occurred and the interrupt is pending. Write: Force a watchdog timer early warning interrupt to occur.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,EwiVal> ewi{}; 
        namespace EwiValC{
            constexpr Register::FieldValue<decltype(ewi),EwiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ewi),EwiVal::set> set{};
        }
        ///Reset Threshold Flag. 
        enum class RthfVal {
            lt=0x00000000,     ///<The counter is currently less than the reset threshold (RTH) value.
            gte=0x00000001,     ///<The counter is currently greater than or equal to the reset threshold (RTH) value.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RthfVal> rthf{}; 
        namespace RthfValC{
            constexpr Register::FieldValue<decltype(rthf),RthfVal::lt> lt{};
            constexpr Register::FieldValue<decltype(rthf),RthfVal::gte> gte{};
        }
        ///Watchdog Timer Threshold Update Status. 
        enum class UpdstsVal {
            idle=0x00000000,     ///<An update completed or is not pending. The EWTH and RTH fields can be written.
            updating=0x00000001,     ///<An update of the threshold register is occurring. The EWTH and RTH fields should not be modified until hardware clears UPDSTS to 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,UpdstsVal> updsts{}; 
        namespace UpdstsValC{
            constexpr Register::FieldValue<decltype(updsts),UpdstsVal::idle> idle{};
            constexpr Register::FieldValue<decltype(updsts),UpdstsVal::updating> updating{};
        }
    }
    namespace Nonethreshold{    ///<Threshold Values
        using Addr = Register::Address<0x40030020,0x00000000,0,unsigned>;
        ///Early Warning Threshold. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ewth{}; 
        namespace EwthValC{
        }
        ///Reset Threshold. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> rth{}; 
        namespace RthValC{
        }
    }
    namespace Nonewdtkey{    ///<Module Key
        using Addr = Register::Address<0x40030030,0xffffff00,0,unsigned>;
        ///Watchdog Timer Key. 
        enum class KeyVal {
            attn=0x000000a5,     ///<Attention key to start the command sequence.
            reset=0x000000cc,     ///<Reset the watchdog timer.
            disable=0x000000dd,     ///<Disable the watchdog timer.
            start=0x000000ee,     ///<Start the watchdog timer.
            write=0x000000f1,     ///<Allow one write access to the module registers.
            lock=0x000000ff,     ///<Lock the module from any other writes until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,KeyVal> key{}; 
        namespace KeyValC{
            constexpr Register::FieldValue<decltype(key),KeyVal::attn> attn{};
            constexpr Register::FieldValue<decltype(key),KeyVal::reset> reset{};
            constexpr Register::FieldValue<decltype(key),KeyVal::disable> disable{};
            constexpr Register::FieldValue<decltype(key),KeyVal::start> start{};
            constexpr Register::FieldValue<decltype(key),KeyVal::write> write{};
            constexpr Register::FieldValue<decltype(key),KeyVal::lock> lock{};
        }
    }
}
