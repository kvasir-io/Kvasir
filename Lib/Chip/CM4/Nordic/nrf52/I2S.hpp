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
        enum class rxptrupdVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace rxptrupdValC{
            constexpr MPL::Value<rxptrupdVal,rxptrupdVal::disabled> disabled{};
            constexpr MPL::Value<rxptrupdVal,rxptrupdVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rxptrupdVal> rxptrupd{}; 
        ///Enable or disable interrupt on EVENTS_STOPPED event
        enum class stoppedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace stoppedValC{
            constexpr MPL::Value<stoppedVal,stoppedVal::disabled> disabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,stoppedVal> stopped{}; 
        ///Enable or disable interrupt on EVENTS_TXPTRUPD event
        enum class txptrupdVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace txptrupdValC{
            constexpr MPL::Value<txptrupdVal,txptrupdVal::disabled> disabled{};
            constexpr MPL::Value<txptrupdVal,txptrupdVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,txptrupdVal> txptrupd{}; 
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40025304,0xffffffd9,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_RXPTRUPD event
        enum class rxptrupdVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace rxptrupdValC{
            constexpr MPL::Value<rxptrupdVal,rxptrupdVal::disabled> disabled{};
            constexpr MPL::Value<rxptrupdVal,rxptrupdVal::enabled> enabled{};
            constexpr MPL::Value<rxptrupdVal,rxptrupdVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rxptrupdVal> rxptrupd{}; 
        ///Write '1' to Enable interrupt on EVENTS_STOPPED event
        enum class stoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace stoppedValC{
            constexpr MPL::Value<stoppedVal,stoppedVal::disabled> disabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::enabled> enabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,stoppedVal> stopped{}; 
        ///Write '1' to Enable interrupt on EVENTS_TXPTRUPD event
        enum class txptrupdVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace txptrupdValC{
            constexpr MPL::Value<txptrupdVal,txptrupdVal::disabled> disabled{};
            constexpr MPL::Value<txptrupdVal,txptrupdVal::enabled> enabled{};
            constexpr MPL::Value<txptrupdVal,txptrupdVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,txptrupdVal> txptrupd{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40025308,0xffffffd9,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_RXPTRUPD event
        enum class rxptrupdVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace rxptrupdValC{
            constexpr MPL::Value<rxptrupdVal,rxptrupdVal::disabled> disabled{};
            constexpr MPL::Value<rxptrupdVal,rxptrupdVal::enabled> enabled{};
            constexpr MPL::Value<rxptrupdVal,rxptrupdVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rxptrupdVal> rxptrupd{}; 
        ///Write '1' to Clear interrupt on EVENTS_STOPPED event
        enum class stoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace stoppedValC{
            constexpr MPL::Value<stoppedVal,stoppedVal::disabled> disabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::enabled> enabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,stoppedVal> stopped{}; 
        ///Write '1' to Clear interrupt on EVENTS_TXPTRUPD event
        enum class txptrupdVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace txptrupdValC{
            constexpr MPL::Value<txptrupdVal,txptrupdVal::disabled> disabled{};
            constexpr MPL::Value<txptrupdVal,txptrupdVal::enabled> enabled{};
            constexpr MPL::Value<txptrupdVal,txptrupdVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,txptrupdVal> txptrupd{}; 
    }
    namespace Noneenable{    ///<Enable I<sup>2</sup>S module.
        using Addr = Register::Address<0x40025500,0xfffffffe,0,unsigned>;
        ///Enable I<sup>2</sup>S module.
        enum class enableVal {
            disable=0x00000000,     ///<Disabl
            enable=0x00000001,     ///<Enable
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::disable> disable{};
            constexpr MPL::Value<enableVal,enableVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enableVal> enable{}; 
    }
}
