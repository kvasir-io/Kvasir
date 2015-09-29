#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//SPI Slave 0
    namespace NonetasksAcquire{    ///<Acquire SPI semaphore
        using Addr = Register::Address<0x40003024,0xffffffff,0,unsigned>;
    }
    namespace NonetasksRelease{    ///<Release SPI semaphore, enabling the SPI slave to acquire it
        using Addr = Register::Address<0x40003028,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEnd{    ///<Granted transaction completed
        using Addr = Register::Address<0x40003104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsAcquired{    ///<Semaphore acquired
        using Addr = Register::Address<0x40003128,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcut register
        using Addr = Register::Address<0x40003200,0xfffffffb,0,unsigned>;
        ///Shortcut between EVENTS_END event and TASKS_ACQUIRE task
        enum class endAcquireVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace endAcquireValC{
            constexpr MPL::Value<endAcquireVal,endAcquireVal::disabled> disabled{};
            constexpr MPL::Value<endAcquireVal,endAcquireVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,endAcquireVal> endAcquire{}; 
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40003304,0xfffffbfd,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_END event
        enum class endVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace endValC{
            constexpr MPL::Value<endVal,endVal::disabled> disabled{};
            constexpr MPL::Value<endVal,endVal::enabled> enabled{};
            constexpr MPL::Value<endVal,endVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,endVal> end{}; 
        ///Write '1' to Enable interrupt on EVENTS_ACQUIRED event
        enum class acquiredVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace acquiredValC{
            constexpr MPL::Value<acquiredVal,acquiredVal::disabled> disabled{};
            constexpr MPL::Value<acquiredVal,acquiredVal::enabled> enabled{};
            constexpr MPL::Value<acquiredVal,acquiredVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,acquiredVal> acquired{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40003308,0xfffffbfd,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_END event
        enum class endVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace endValC{
            constexpr MPL::Value<endVal,endVal::disabled> disabled{};
            constexpr MPL::Value<endVal,endVal::enabled> enabled{};
            constexpr MPL::Value<endVal,endVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,endVal> end{}; 
        ///Write '1' to Clear interrupt on EVENTS_ACQUIRED event
        enum class acquiredVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace acquiredValC{
            constexpr MPL::Value<acquiredVal,acquiredVal::disabled> disabled{};
            constexpr MPL::Value<acquiredVal,acquiredVal::enabled> enabled{};
            constexpr MPL::Value<acquiredVal,acquiredVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,acquiredVal> acquired{}; 
    }
    namespace Nonesemstat{    ///<Semaphore status register
        using Addr = Register::Address<0x40003400,0xfffffffc,0,unsigned>;
        ///Semaphore status
        enum class semstatVal {
            free=0x00000000,     ///<Semaphore is free
            cpu=0x00000001,     ///<Semaphore is assigned to CPU
            spis=0x00000002,     ///<Semaphore is assigned to SPI slave
            cpupending=0x00000003,     ///<Semaphore is assigned to SPI but a handover to the CPU is pending
        };
        namespace semstatValC{
            constexpr MPL::Value<semstatVal,semstatVal::free> free{};
            constexpr MPL::Value<semstatVal,semstatVal::cpu> cpu{};
            constexpr MPL::Value<semstatVal,semstatVal::spis> spis{};
            constexpr MPL::Value<semstatVal,semstatVal::cpupending> cpupending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,semstatVal> semstat{}; 
    }
    namespace Nonestatus{    ///<Status from last transaction
        using Addr = Register::Address<0x40003440,0xfffffffc,0,unsigned>;
        ///TX buffer over-read detected, and prevented
        enum class overreadVal {
            notpresent=0x00000000,     ///<Read: error not present
            present=0x00000001,     ///<Read: error present
            clear=0x00000001,     ///<Write: clear error on writing '1'
        };
        namespace overreadValC{
            constexpr MPL::Value<overreadVal,overreadVal::notpresent> notpresent{};
            constexpr MPL::Value<overreadVal,overreadVal::present> present{};
            constexpr MPL::Value<overreadVal,overreadVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,overreadVal> overread{}; 
        ///RX buffer overflow detected, and prevented
        enum class overflowVal {
            notpresent=0x00000000,     ///<Read: error not present
            present=0x00000001,     ///<Read: error present
            clear=0x00000001,     ///<Write: clear error on writing '1'
        };
        namespace overflowValC{
            constexpr MPL::Value<overflowVal,overflowVal::notpresent> notpresent{};
            constexpr MPL::Value<overflowVal,overflowVal::present> present{};
            constexpr MPL::Value<overflowVal,overflowVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,overflowVal> overflow{}; 
    }
    namespace Noneenable{    ///<Enable SPI slave
        using Addr = Register::Address<0x40003500,0xfffffff0,0,unsigned>;
        ///Enable or disable SPI slave
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
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
    namespace Nonedef{    ///<Default character. Character clocked out in case of an ignored transaction.
        using Addr = Register::Address<0x4000355c,0xffffff00,0,unsigned>;
        ///Default character. Character clocked out in case of an ignored transaction.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> def{}; 
    }
    namespace Noneorc{    ///<Over-read character
        using Addr = Register::Address<0x400035c0,0xffffff00,0,unsigned>;
        ///Over-read character. Character clocked out after an over-read of the transmit buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> orc{}; 
    }
}
