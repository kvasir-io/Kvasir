#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//SPI master with easyDMA 1.
    namespace NonetasksStart{    ///<Start SPI transaction.
        using Addr = Register::Address<0x40004010,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop SPI transaction.
        using Addr = Register::Address<0x40004014,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSuspend{    ///<Suspend SPI transaction.
        using Addr = Register::Address<0x4000401c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksResume{    ///<Resume SPI transaction.
        using Addr = Register::Address<0x40004020,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsStopped{    ///<SPI transaction has stopped.
        using Addr = Register::Address<0x40004104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEndrx{    ///<End of RXD buffer reached.
        using Addr = Register::Address<0x40004110,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEndtx{    ///<End of TXD buffer reached.
        using Addr = Register::Address<0x40004120,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsStarted{    ///<Transaction started.
        using Addr = Register::Address<0x4000414c,0xffffffff,0,unsigned>;
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40004304,0xfff7feed,0,unsigned>;
        ///Enable interrupt on STOPPED event.
        enum class stoppedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace stoppedValC{
            constexpr MPL::Value<stoppedVal,stoppedVal::disabled> disabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::enabled> enabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,stoppedVal> stopped{}; 
        ///Enable interrupt on ENDRX event.
        enum class endrxVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace endrxValC{
            constexpr MPL::Value<endrxVal,endrxVal::disabled> disabled{};
            constexpr MPL::Value<endrxVal,endrxVal::enabled> enabled{};
            constexpr MPL::Value<endrxVal,endrxVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,endrxVal> endrx{}; 
        ///Enable interrupt on ENDTX event.
        enum class endtxVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace endtxValC{
            constexpr MPL::Value<endtxVal,endtxVal::disabled> disabled{};
            constexpr MPL::Value<endtxVal,endtxVal::enabled> enabled{};
            constexpr MPL::Value<endtxVal,endtxVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,endtxVal> endtx{}; 
        ///Enable interrupt on STARTED event.
        enum class startedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace startedValC{
            constexpr MPL::Value<startedVal,startedVal::disabled> disabled{};
            constexpr MPL::Value<startedVal,startedVal::enabled> enabled{};
            constexpr MPL::Value<startedVal,startedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,startedVal> started{}; 
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40004308,0xfff7feed,0,unsigned>;
        ///Disable interrupt on STOPPED event.
        enum class stoppedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace stoppedValC{
            constexpr MPL::Value<stoppedVal,stoppedVal::disabled> disabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::enabled> enabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,stoppedVal> stopped{}; 
        ///Disable interrupt on ENDRX event.
        enum class endrxVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace endrxValC{
            constexpr MPL::Value<endrxVal,endrxVal::disabled> disabled{};
            constexpr MPL::Value<endrxVal,endrxVal::enabled> enabled{};
            constexpr MPL::Value<endrxVal,endrxVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,endrxVal> endrx{}; 
        ///Disable interrupt on ENDTX event.
        enum class endtxVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace endtxValC{
            constexpr MPL::Value<endtxVal,endtxVal::disabled> disabled{};
            constexpr MPL::Value<endtxVal,endtxVal::enabled> enabled{};
            constexpr MPL::Value<endtxVal,endtxVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,endtxVal> endtx{}; 
        ///Disable interrupt on STARTED event.
        enum class startedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace startedValC{
            constexpr MPL::Value<startedVal,startedVal::disabled> disabled{};
            constexpr MPL::Value<startedVal,startedVal::enabled> enabled{};
            constexpr MPL::Value<startedVal,startedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,startedVal> started{}; 
    }
    namespace Noneenable{    ///<Enable SPIM.
        using Addr = Register::Address<0x40004500,0xfffffff0,0,unsigned>;
        ///Enable or disable SPIM.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Nonefrequency{    ///<SPI frequency.
        using Addr = Register::Address<0x40004524,0x00000000,0,unsigned>;
        ///SPI master data rate.
        enum class frequencyVal {
            k125=0x02000000,     ///<125 kbps.
            k250=0x04000000,     ///<250 kbps.
            k500=0x08000000,     ///<500 kbps.
            m1=0x10000000,     ///<1 Mbps.
            m2=0x20000000,     ///<2 Mbps.
            m4=0x40000000,     ///<4 Mbps.
            m8=0x80000000,     ///<8 Mbps.
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
        using Addr = Register::Address<0x40004554,0xfffffff8,0,unsigned>;
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
    namespace Noneorc{    ///<Over-read character.
        using Addr = Register::Address<0x400045c0,0xffffff00,0,unsigned>;
        ///Over-read character.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> orc{}; 
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x40004ffc,0xfffffffe,0,unsigned>;
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
