#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial Peripheral Interface 0
    namespace NoneeventsReady{    ///<TXD byte sent and RXD byte received
        using Addr = Register::Address<0x40003108,0xffffffff,0,unsigned>;
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40003304,0xfffffffb,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_READY event
        enum class readyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace readyValC{
            constexpr MPL::Value<readyVal,readyVal::disabled> disabled{};
            constexpr MPL::Value<readyVal,readyVal::enabled> enabled{};
            constexpr MPL::Value<readyVal,readyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,readyVal> ready{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40003308,0xfffffffb,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_READY event
        enum class readyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace readyValC{
            constexpr MPL::Value<readyVal,readyVal::disabled> disabled{};
            constexpr MPL::Value<readyVal,readyVal::enabled> enabled{};
            constexpr MPL::Value<readyVal,readyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,readyVal> ready{}; 
    }
    namespace Noneenable{    ///<Enable SPI
        using Addr = Register::Address<0x40003500,0xfffffff0,0,unsigned>;
        ///Enable or disable SPI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Nonerxd{    ///<RXD register
        using Addr = Register::Address<0x40003518,0xffffff00,0,unsigned>;
        ///RX data received. Double buffered
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxd{}; 
    }
    namespace Nonetxd{    ///<TXD register
        using Addr = Register::Address<0x4000351c,0xffffff00,0,unsigned>;
        ///TX data to send. Double buffered
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txd{}; 
    }
    namespace Nonefrequency{    ///<SPI frequency
        using Addr = Register::Address<0x40003524,0x00000000,0,unsigned>;
        ///SPI master data rate
        enum class frequencyVal {
            k125=0x02000000,     ///<125 kbps
            k250=0x04000000,     ///<250 kbps
            k500=0x08000000,     ///<500 kbps
            m1=0x10000000,     ///<1 Mbps
            m2=0x20000000,     ///<2 Mbps
            m4=0x40000000,     ///<4 Mbps
            m8=0x80000000,     ///<8 Mbps
        };
        namespace frequencyValC{
            constexpr MPL::Value<frequencyVal,frequencyVal::k125> k125{};
            constexpr MPL::Value<frequencyVal,frequencyVal::k250> k250{};
            constexpr MPL::Value<frequencyVal,frequencyVal::k500> k500{};
            constexpr MPL::Value<frequencyVal,frequencyVal::m1> m1{};
            constexpr MPL::Value<frequencyVal,frequencyVal::m2> m2{};
            constexpr MPL::Value<frequencyVal,frequencyVal::m4> m4{};
            constexpr MPL::Value<frequencyVal,frequencyVal::m8> m8{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,frequencyVal> frequency{}; 
    }
    namespace Noneconfig{    ///<Configuration register
        using Addr = Register::Address<0x40003554,0xfffffff8,0,unsigned>;
        ///Bit order
        enum class orderVal {
            msbfirst=0x00000000,     ///<Most significant bit shifted out first
            lsbfirst=0x00000001,     ///<Least significant bit shifted out first
        };
        namespace orderValC{
            constexpr MPL::Value<orderVal,orderVal::msbfirst> msbfirst{};
            constexpr MPL::Value<orderVal,orderVal::lsbfirst> lsbfirst{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,orderVal> order{}; 
        ///Serial clock (SCK) phase
        enum class cphaVal {
            leading=0x00000000,     ///<Sample on leading edge of clock, shift serial data on trailing edge
            trailing=0x00000001,     ///<Sample on trailing edge of clock, shift serial data on leading edge
        };
        namespace cphaValC{
            constexpr MPL::Value<cphaVal,cphaVal::leading> leading{};
            constexpr MPL::Value<cphaVal,cphaVal::trailing> trailing{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,cphaVal> cpha{}; 
        ///Serial clock (SCK) polarity
        enum class cpolVal {
            activehigh=0x00000000,     ///<Active high
            activelow=0x00000001,     ///<Active low
        };
        namespace cpolValC{
            constexpr MPL::Value<cpolVal,cpolVal::activehigh> activehigh{};
            constexpr MPL::Value<cpolVal,cpolVal::activelow> activelow{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cpolVal> cpol{}; 
    }
}
