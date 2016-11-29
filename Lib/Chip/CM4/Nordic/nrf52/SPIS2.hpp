#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//SPI Slave 2
    namespace Spis2TasksAcquire{    ///<Acquire SPI semaphore
        using Addr = Register::Address<0x40023024,0xffffffff,0x00000000,unsigned>;
    }
    namespace Spis2TasksRelease{    ///<Release SPI semaphore, enabling the SPI slave to acquire it
        using Addr = Register::Address<0x40023028,0xffffffff,0x00000000,unsigned>;
    }
    namespace Spis2EventsEnd{    ///<Granted transaction completed
        using Addr = Register::Address<0x40023104,0xffffffff,0x00000000,unsigned>;
    }
    namespace Spis2EventsAcquired{    ///<Semaphore acquired
        using Addr = Register::Address<0x40023128,0xffffffff,0x00000000,unsigned>;
    }
    namespace Spis2Shorts{    ///<Shortcut register
        using Addr = Register::Address<0x40023200,0xfffffffb,0x00000000,unsigned>;
        ///Shortcut between EVENTS_END event and TASKS_ACQUIRE task
        enum class EndacquireVal : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,EndacquireVal> endAcquire{}; 
        namespace EndacquireValC{
            constexpr Register::FieldValue<decltype(endAcquire)::Type,EndacquireVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endAcquire)::Type,EndacquireVal::enabled> enabled{};
        }
    }
    namespace Spis2Intenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40023304,0xfffffbfd,0x00000000,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_END event
        enum class EndVal : unsigned {
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
        ///Write '1' to Enable interrupt on EVENTS_ACQUIRED event
        enum class AcquiredVal : unsigned {
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
    namespace Spis2Intenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40023308,0xfffffbfd,0x00000000,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_END event
        enum class EndVal : unsigned {
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
        ///Write '1' to Clear interrupt on EVENTS_ACQUIRED event
        enum class AcquiredVal : unsigned {
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
    namespace Spis2Semstat{    ///<Semaphore status register
        using Addr = Register::Address<0x40023400,0xfffffffc,0x00000000,unsigned>;
        ///Semaphore status
        enum class SemstatVal : unsigned {
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
    namespace Spis2Status{    ///<Status from last transaction
        using Addr = Register::Address<0x40023440,0xfffffffc,0x00000000,unsigned>;
        ///TX buffer over-read detected, and prevented
        enum class OverreadVal : unsigned {
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
        ///RX buffer overflow detected, and prevented
        enum class OverflowVal : unsigned {
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
    namespace Spis2Enable{    ///<Enable SPI slave
        using Addr = Register::Address<0x40023500,0xfffffff0,0x00000000,unsigned>;
        ///Enable or disable SPI slave
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Spis2Config{    ///<Configuration register
        using Addr = Register::Address<0x40023554,0xfffffff8,0x00000000,unsigned>;
        ///Bit order
        enum class OrderVal : unsigned {
            msbfirst=0x00000000,     ///<Most significant bit shifted out first
            lsbfirst=0x00000001,     ///<Least significant bit shifted out first
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OrderVal> order{}; 
        namespace OrderValC{
            constexpr Register::FieldValue<decltype(order)::Type,OrderVal::msbfirst> msbfirst{};
            constexpr Register::FieldValue<decltype(order)::Type,OrderVal::lsbfirst> lsbfirst{};
        }
        ///Serial clock (SCK) phase
        enum class CphaVal : unsigned {
            leading=0x00000000,     ///<Sample on leading edge of clock, shift serial data on trailing edge
            trailing=0x00000001,     ///<Sample on trailing edge of clock, shift serial data on leading edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CphaVal> cpha{}; 
        namespace CphaValC{
            constexpr Register::FieldValue<decltype(cpha)::Type,CphaVal::leading> leading{};
            constexpr Register::FieldValue<decltype(cpha)::Type,CphaVal::trailing> trailing{};
        }
        ///Serial clock (SCK) polarity
        enum class CpolVal : unsigned {
            activehigh=0x00000000,     ///<Active high
            activelow=0x00000001,     ///<Active low
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CpolVal> cpol{}; 
        namespace CpolValC{
            constexpr Register::FieldValue<decltype(cpol)::Type,CpolVal::activehigh> activehigh{};
            constexpr Register::FieldValue<decltype(cpol)::Type,CpolVal::activelow> activelow{};
        }
    }
    namespace Spis2Def{    ///<Default character. Character clocked out in case of an ignored transaction.
        using Addr = Register::Address<0x4002355c,0xffffff00,0x00000000,unsigned>;
        ///Default character. Character clocked out in case of an ignored transaction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> def{}; 
    }
    namespace Spis2Orc{    ///<Over-read character
        using Addr = Register::Address<0x400235c0,0xffffff00,0x00000000,unsigned>;
        ///Over-read character. Character clocked out after an over-read of the transmit buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> orc{}; 
    }
}
