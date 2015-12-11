#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Inter-IC Sound
    namespace NonetasksStart{    ///<Starts continuous I<sup>2</sup>S transfer. Also starts MCK generator when this is enabled.
        using Addr = Register::Address<0x40025000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stops I<sup>2</sup>S transfer. Also stops MCK generator. Triggering this task will cause the STOPPED event to be generated.
        using Addr = Register::Address<0x40025004,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsRxptrupd{    ///<The RXD.PTR register has been copied to internal double-buffers. When the I2S module is started and RX is enabled, this event will be generated for every RXTXD.MAXCNT words that are received on the SDIN pin.
        using Addr = Register::Address<0x40025104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsStopped{    ///<I<sup>2</sup>S transfer stopped.
        using Addr = Register::Address<0x40025108,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsTxptrupd{    ///<The TDX.PTR register has been copied to internal double-buffers. When the I2S module is started and TX is enabled, this event will be generated for every RXTXD.MAXCNT words that are sent on the SDOUT pin.
        using Addr = Register::Address<0x40025114,0xffffffff,0,unsigned>;
    }
    namespace Noneinten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x40025300,0xffffffd9,0,unsigned>;
        ///Enable or disable interrupt on EVENTS_RXPTRUPD event
        enum class RxptrupdVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RxptrupdVal> rxptrupd{}; 
        namespace RxptrupdValC{
            constexpr Register::FieldValue<decltype(rxptrupd)::Type,RxptrupdVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxptrupd)::Type,RxptrupdVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_STOPPED event
        enum class StoppedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_TXPTRUPD event
        enum class TxptrupdVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TxptrupdVal> txptrupd{}; 
        namespace TxptrupdValC{
            constexpr Register::FieldValue<decltype(txptrupd)::Type,TxptrupdVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txptrupd)::Type,TxptrupdVal::enabled> enabled{};
        }
        }
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40025304,0xffffffd9,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_RXPTRUPD event
        enum class RxptrupdVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RxptrupdVal> rxptrupd{}; 
        namespace RxptrupdValC{
            constexpr Register::FieldValue<decltype(rxptrupd)::Type,RxptrupdVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxptrupd)::Type,RxptrupdVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxptrupd)::Type,RxptrupdVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_STOPPED event
        enum class StoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_TXPTRUPD event
        enum class TxptrupdVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TxptrupdVal> txptrupd{}; 
        namespace TxptrupdValC{
            constexpr Register::FieldValue<decltype(txptrupd)::Type,TxptrupdVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txptrupd)::Type,TxptrupdVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txptrupd)::Type,TxptrupdVal::set> set{};
        }
        }
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40025308,0xffffffd9,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_RXPTRUPD event
        enum class RxptrupdVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RxptrupdVal> rxptrupd{}; 
        namespace RxptrupdValC{
            constexpr Register::FieldValue<decltype(rxptrupd)::Type,RxptrupdVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxptrupd)::Type,RxptrupdVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxptrupd)::Type,RxptrupdVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_STOPPED event
        enum class StoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_TXPTRUPD event
        enum class TxptrupdVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TxptrupdVal> txptrupd{}; 
        namespace TxptrupdValC{
            constexpr Register::FieldValue<decltype(txptrupd)::Type,TxptrupdVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txptrupd)::Type,TxptrupdVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txptrupd)::Type,TxptrupdVal::clear> clear{};
        }
        }
    }
    namespace Noneenable{    ///<Enable I<sup>2</sup>S module.
        using Addr = Register::Address<0x40025500,0xfffffffe,0,unsigned>;
        ///Enable I<sup>2</sup>S module.
        enum class EnableVal {
            disable=0x00000000,     ///<Disabl
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::disable> disable{};
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::enable> enable{};
        }
        }
    }
}
