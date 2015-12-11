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
        enum class EndacquireVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,EndacquireVal> endAcquire{}; 
        namespace EndacquireValC{
            constexpr Register::FieldValue<decltype(endAcquire)::Type,EndacquireVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endAcquire)::Type,EndacquireVal::enabled> enabled{};
        }
        }
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40003304,0xfffffbfd,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_END event
        enum class EndVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_ACQUIRED event
        enum class AcquiredVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,AcquiredVal> acquired{}; 
        namespace AcquiredValC{
            constexpr Register::FieldValue<decltype(acquired)::Type,AcquiredVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(acquired)::Type,AcquiredVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(acquired)::Type,AcquiredVal::set> set{};
        }
        }
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40003308,0xfffffbfd,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_END event
        enum class EndVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_ACQUIRED event
        enum class AcquiredVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,AcquiredVal> acquired{}; 
        namespace AcquiredValC{
            constexpr Register::FieldValue<decltype(acquired)::Type,AcquiredVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(acquired)::Type,AcquiredVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(acquired)::Type,AcquiredVal::clear> clear{};
        }
        }
    }
    namespace Nonesemstat{    ///<Semaphore status register
        using Addr = Register::Address<0x40003400,0xfffffffc,0,unsigned>;
        ///Semaphore status
        enum class SemstatVal {
            free=0x00000000,     ///<Semaphore is free
            cpu=0x00000001,     ///<Semaphore is assigned to CPU
            spis=0x00000002,     ///<Semaphore is assigned to SPI slave
            cpupending=0x00000003,     ///<Semaphore is assigned to SPI but a handover to the CPU is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SemstatVal> semstat{}; 
        namespace SemstatValC{
            constexpr Register::FieldValue<decltype(semstat)::Type,SemstatVal::free> free{};
            constexpr Register::FieldValue<decltype(semstat)::Type,SemstatVal::cpu> cpu{};
            constexpr Register::FieldValue<decltype(semstat)::Type,SemstatVal::spis> spis{};
            constexpr Register::FieldValue<decltype(semstat)::Type,SemstatVal::cpupending> cpupending{};
        }
        }
    }
    namespace Nonestatus{    ///<Status from last transaction
        using Addr = Register::Address<0x40003440,0xfffffffc,0,unsigned>;
        ///TX buffer over-read detected, and prevented
        enum class OverreadVal {
            notpresent=0x00000000,     ///<Read: error not present
            present=0x00000001,     ///<Read: error present
            clear=0x00000001,     ///<Write: clear error on writing '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OverreadVal> overread{}; 
        namespace OverreadValC{
            constexpr Register::FieldValue<decltype(overread)::Type,OverreadVal::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(overread)::Type,OverreadVal::present> present{};
            constexpr Register::FieldValue<decltype(overread)::Type,OverreadVal::clear> clear{};
        }
        }
        ///RX buffer overflow detected, and prevented
        enum class OverflowVal {
            notpresent=0x00000000,     ///<Read: error not present
            present=0x00000001,     ///<Read: error present
            clear=0x00000001,     ///<Write: clear error on writing '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OverflowVal> overflow{}; 
        namespace OverflowValC{
            constexpr Register::FieldValue<decltype(overflow)::Type,OverflowVal::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(overflow)::Type,OverflowVal::present> present{};
            constexpr Register::FieldValue<decltype(overflow)::Type,OverflowVal::clear> clear{};
        }
        }
    }
    namespace Noneenable{    ///<Enable SPI slave
        using Addr = Register::Address<0x40003500,0xfffffff0,0,unsigned>;
        ///Enable or disable SPI slave
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Noneconfig{    ///<Configuration register
        using Addr = Register::Address<0x40003554,0xfffffff8,0,unsigned>;
        ///Bit order
        enum class OrderVal {
            msbfirst=0x00000000,     ///<Most significant bit shifted out first
            lsbfirst=0x00000001,     ///<Least significant bit shifted out first
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OrderVal> order{}; 
        namespace OrderValC{
            constexpr Register::FieldValue<decltype(order)::Type,OrderVal::msbfirst> msbfirst{};
            constexpr Register::FieldValue<decltype(order)::Type,OrderVal::lsbfirst> lsbfirst{};
        }
        }
        ///Serial clock (SCK) phase
        enum class CphaVal {
            leading=0x00000000,     ///<Sample on leading edge of clock, shift serial data on trailing edge
            trailing=0x00000001,     ///<Sample on trailing edge of clock, shift serial data on leading edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CphaVal> cpha{}; 
        namespace CphaValC{
            constexpr Register::FieldValue<decltype(cpha)::Type,CphaVal::leading> leading{};
            constexpr Register::FieldValue<decltype(cpha)::Type,CphaVal::trailing> trailing{};
        }
        }
        ///Serial clock (SCK) polarity
        enum class CpolVal {
            activehigh=0x00000000,     ///<Active high
            activelow=0x00000001,     ///<Active low
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CpolVal> cpol{}; 
        namespace CpolValC{
            constexpr Register::FieldValue<decltype(cpol)::Type,CpolVal::activehigh> activehigh{};
            constexpr Register::FieldValue<decltype(cpol)::Type,CpolVal::activelow> activelow{};
        }
        }
    }
    namespace Nonedef{    ///<Default character. Character clocked out in case of an ignored transaction.
        using Addr = Register::Address<0x4000355c,0xffffff00,0,unsigned>;
        ///Default character. Character clocked out in case of an ignored transaction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> def{}; 
    }
    namespace Noneorc{    ///<Over-read character
        using Addr = Register::Address<0x400035c0,0xffffff00,0,unsigned>;
        ///Over-read character. Character clocked out after an over-read of the transmit buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> orc{}; 
    }
}
