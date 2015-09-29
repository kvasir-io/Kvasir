#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//SPI master 0.
    namespace NoneeventsReady{    ///<TXD byte sent and RXD byte received.
        using Addr = Register::Address<0x40003108,0xffffffff,0,unsigned>;
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40003304,0xfffffffb,0,unsigned>;
        ///Enable interrupt on READY event.
        enum class readyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace readyValC{
            constexpr MPL::Value<readyVal,readyVal::disabled> disabled{};
            constexpr MPL::Value<readyVal,readyVal::enabled> enabled{};
            constexpr MPL::Value<readyVal,readyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,readyVal> ready{}; 
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40003308,0xfffffffb,0,unsigned>;
        ///Disable interrupt on READY event.
        enum class readyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace readyValC{
            constexpr MPL::Value<readyVal,readyVal::disabled> disabled{};
            constexpr MPL::Value<readyVal,readyVal::enabled> enabled{};
            constexpr MPL::Value<readyVal,readyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,readyVal> ready{}; 
    }
    namespace Noneenable{    ///<Enable SPI.
        using Addr = Register::Address<0x40003500,0xfffffff8,0,unsigned>;
        ///Enable or disable SPI.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Nonepselsck{    ///<Pin select for SCK.
        using Addr = Register::Address<0x40003508,0xffffffff,0,unsigned>;
    }
    namespace Nonepselmosi{    ///<Pin select for MOSI.
        using Addr = Register::Address<0x4000350c,0xffffffff,0,unsigned>;
    }
    namespace Nonepselmiso{    ///<Pin select for MISO.
        using Addr = Register::Address<0x40003510,0xffffffff,0,unsigned>;
    }
    namespace Nonerxd{    ///<RX data.
        using Addr = Register::Address<0x40003518,0xffffff00,0,unsigned>;
        ///RX data from last transfer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxd{}; 
    }
    namespace Nonetxd{    ///<TX data.
        using Addr = Register::Address<0x4000351c,0xffffff00,0,unsigned>;
        ///TX data for next transfer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txd{}; 
    }
    namespace Nonefrequency{    ///<SPI frequency
        using Addr = Register::Address<0x40003524,0x00000000,0,unsigned>;
        ///SPI data rate.
        enum class frequencyVal {
            k125=0x02000000,     ///<125kbps.
            k250=0x04000000,     ///<250kbps.
            k500=0x08000000,     ///<500kbps.
            m1=0x10000000,     ///<1Mbps.
            m2=0x20000000,     ///<2Mbps.
            m4=0x40000000,     ///<4Mbps.
            m8=0x80000000,     ///<8Mbps.
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
    namespace Noneconfig{    ///<Configuration register.
        using Addr = Register::Address<0x40003554,0xfffffff8,0,unsigned>;
        ///Bit order.
        enum class orderVal {
            msbfirst=0x00000000,     ///<Most significant bit transmitted out first.
            lsbfirst=0x00000001,     ///<Least significant bit transmitted out first.
        };
        namespace orderValC{
            constexpr MPL::Value<orderVal,orderVal::msbfirst> msbfirst{};
            constexpr MPL::Value<orderVal,orderVal::lsbfirst> lsbfirst{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,orderVal> order{}; 
        ///Serial clock (SCK) phase.
        enum class cphaVal {
            leading=0x00000000,     ///<Sample on leading edge of the clock. Shift serial data on trailing edge.
            trailing=0x00000001,     ///<Sample on trailing edge of the clock. Shift serial data on leading edge.
        };
        namespace cphaValC{
            constexpr MPL::Value<cphaVal,cphaVal::leading> leading{};
            constexpr MPL::Value<cphaVal,cphaVal::trailing> trailing{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,cphaVal> cpha{}; 
        ///Serial clock (SCK) polarity.
        enum class cpolVal {
            activehigh=0x00000000,     ///<Active high.
            activelow=0x00000001,     ///<Active low.
        };
        namespace cpolValC{
            constexpr MPL::Value<cpolVal,cpolVal::activehigh> activehigh{};
            constexpr MPL::Value<cpolVal,cpolVal::activelow> activelow{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cpolVal> cpol{}; 
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x40003ffc,0xfffffffe,0,unsigned>;
        ///Peripheral power control.
        enum class powerVal {
            disabled=0x00000000,     ///<Module power disabled.
            enabled=0x00000001,     ///<Module power enabled.
        };
        namespace powerValC{
            constexpr MPL::Value<powerVal,powerVal::disabled> disabled{};
            constexpr MPL::Value<powerVal,powerVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,powerVal> power{}; 
    }
}
