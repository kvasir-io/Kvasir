#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//SPI slave 1.
    namespace NonetasksAcquire{    ///<Acquire SPI semaphore.
        using Addr = Register::Address<0x40004024,0xffffffff,0,unsigned>;
    }
    namespace NonetasksRelease{    ///<Release SPI semaphore.
        using Addr = Register::Address<0x40004028,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEnd{    ///<Granted transaction completed.
        using Addr = Register::Address<0x40004104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsAcquired{    ///<Semaphore acquired.
        using Addr = Register::Address<0x40004128,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcuts for SPIS.
        using Addr = Register::Address<0x40004200,0xfffffffb,0,unsigned>;
        ///Shortcut between END event and the ACQUIRE task.
        enum class EndacquireVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,EndacquireVal> endAcquire{}; 
        namespace EndacquireValC{
            constexpr Register::FieldValue<decltype(endAcquire)::Type,EndacquireVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endAcquire)::Type,EndacquireVal::enabled> enabled{};
        }
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40004304,0xfffffbfd,0,unsigned>;
        ///Enable interrupt on END event.
        enum class EndVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::set> set{};
        }
        ///Enable interrupt on ACQUIRED event.
        enum class AcquiredVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,AcquiredVal> acquired{}; 
        namespace AcquiredValC{
            constexpr Register::FieldValue<decltype(acquired)::Type,AcquiredVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(acquired)::Type,AcquiredVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(acquired)::Type,AcquiredVal::set> set{};
        }
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40004308,0xfffffbfd,0,unsigned>;
        ///Disable interrupt on END event.
        enum class EndVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::clear> clear{};
        }
        ///Disable interrupt on ACQUIRED event.
        enum class AcquiredVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,AcquiredVal> acquired{}; 
        namespace AcquiredValC{
            constexpr Register::FieldValue<decltype(acquired)::Type,AcquiredVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(acquired)::Type,AcquiredVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(acquired)::Type,AcquiredVal::clear> clear{};
        }
    }
    namespace Nonesemstat{    ///<Semaphore status.
        using Addr = Register::Address<0x40004400,0xfffffffc,0,unsigned>;
        ///Semaphore status.
        enum class SemstatVal {
            free=0x00000000,     ///<Semaphore is free.
            cpu=0x00000001,     ///<Semaphore is assigned to the CPU.
            spis=0x00000002,     ///<Semaphore is assigned to the SPIS.
            cpupending=0x00000003,     ///<Semaphore is assigned to the SPIS, but a handover to the CPU is pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SemstatVal> semstat{}; 
        namespace SemstatValC{
            constexpr Register::FieldValue<decltype(semstat)::Type,SemstatVal::free> free{};
            constexpr Register::FieldValue<decltype(semstat)::Type,SemstatVal::cpu> cpu{};
            constexpr Register::FieldValue<decltype(semstat)::Type,SemstatVal::spis> spis{};
            constexpr Register::FieldValue<decltype(semstat)::Type,SemstatVal::cpupending> cpupending{};
        }
    }
    namespace Nonestatus{    ///<Status from last transaction.
        using Addr = Register::Address<0x40004440,0xfffffffc,0,unsigned>;
        ///TX buffer overread detected, and prevented.
        enum class OverreadVal {
            notpresent=0x00000000,     ///<Error not present.
            present=0x00000001,     ///<Error present.
            clear=0x00000001,     ///<Clear on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OverreadVal> overread{}; 
        namespace OverreadValC{
            constexpr Register::FieldValue<decltype(overread)::Type,OverreadVal::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(overread)::Type,OverreadVal::present> present{};
            constexpr Register::FieldValue<decltype(overread)::Type,OverreadVal::clear> clear{};
        }
        ///RX buffer overflow detected, and prevented.
        enum class OverflowVal {
            notpresent=0x00000000,     ///<Error not present.
            present=0x00000001,     ///<Error present.
            clear=0x00000001,     ///<Clear on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OverflowVal> overflow{}; 
        namespace OverflowValC{
            constexpr Register::FieldValue<decltype(overflow)::Type,OverflowVal::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(overflow)::Type,OverflowVal::present> present{};
            constexpr Register::FieldValue<decltype(overflow)::Type,OverflowVal::clear> clear{};
        }
    }
    namespace Noneenable{    ///<Enable SPIS.
        using Addr = Register::Address<0x40004500,0xfffffff8,0,unsigned>;
        ///Enable or disable SPIS.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Nonepselsck{    ///<Pin select for SCK.
        using Addr = Register::Address<0x40004508,0xffffffff,0,unsigned>;
    }
    namespace Nonepselmiso{    ///<Pin select for MISO.
        using Addr = Register::Address<0x4000450c,0xffffffff,0,unsigned>;
    }
    namespace Nonepselmosi{    ///<Pin select for MOSI.
        using Addr = Register::Address<0x40004510,0xffffffff,0,unsigned>;
    }
    namespace Nonepselcsn{    ///<Pin select for CSN.
        using Addr = Register::Address<0x40004514,0xffffffff,0,unsigned>;
    }
    namespace Nonerxdptr{    ///<RX data pointer.
        using Addr = Register::Address<0x40004534,0xffffffff,0,unsigned>;
    }
    namespace Nonemaxrx{    ///<Maximum number of bytes in the receive buffer.
        using Addr = Register::Address<0x40004538,0xffffff00,0,unsigned>;
        ///Maximum number of bytes in the receive buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> maxrx{}; 
    }
    namespace Noneamountrx{    ///<Number of bytes received in last granted transaction.
        using Addr = Register::Address<0x4000453c,0xffffff00,0,unsigned>;
        ///Number of bytes received in last granted transaction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> amountrx{}; 
    }
    namespace Nonetxdptr{    ///<TX data pointer.
        using Addr = Register::Address<0x40004544,0xffffffff,0,unsigned>;
    }
    namespace Nonemaxtx{    ///<Maximum number of bytes in the transmit buffer.
        using Addr = Register::Address<0x40004548,0xffffff00,0,unsigned>;
        ///Maximum number of bytes in the transmit buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> maxtx{}; 
    }
    namespace Noneamounttx{    ///<Number of bytes transmitted in last granted transaction.
        using Addr = Register::Address<0x4000454c,0xffffff00,0,unsigned>;
        ///Number of bytes transmitted in last granted transaction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> amounttx{}; 
    }
    namespace Noneconfig{    ///<Configuration register.
        using Addr = Register::Address<0x40004554,0xfffffff8,0,unsigned>;
        ///Bit order.
        enum class OrderVal {
            msbfirst=0x00000000,     ///<Most significant bit transmitted out first.
            lsbfirst=0x00000001,     ///<Least significant bit transmitted out first.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OrderVal> order{}; 
        namespace OrderValC{
            constexpr Register::FieldValue<decltype(order)::Type,OrderVal::msbfirst> msbfirst{};
            constexpr Register::FieldValue<decltype(order)::Type,OrderVal::lsbfirst> lsbfirst{};
        }
        ///Serial clock (SCK) phase.
        enum class CphaVal {
            leading=0x00000000,     ///<Sample on leading edge of the clock. Shift serial data on trailing edge.
            trailing=0x00000001,     ///<Sample on trailing edge of the clock. Shift serial data on leading edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CphaVal> cpha{}; 
        namespace CphaValC{
            constexpr Register::FieldValue<decltype(cpha)::Type,CphaVal::leading> leading{};
            constexpr Register::FieldValue<decltype(cpha)::Type,CphaVal::trailing> trailing{};
        }
        ///Serial clock (SCK) polarity.
        enum class CpolVal {
            activehigh=0x00000000,     ///<Active high.
            activelow=0x00000001,     ///<Active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CpolVal> cpol{}; 
        namespace CpolValC{
            constexpr Register::FieldValue<decltype(cpol)::Type,CpolVal::activehigh> activehigh{};
            constexpr Register::FieldValue<decltype(cpol)::Type,CpolVal::activelow> activelow{};
        }
    }
    namespace Nonedef{    ///<Default character.
        using Addr = Register::Address<0x4000455c,0xffffff00,0,unsigned>;
        ///Default character.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> def{}; 
    }
    namespace Noneorc{    ///<Over-read character.
        using Addr = Register::Address<0x400045c0,0xffffff00,0,unsigned>;
        ///Over-read character.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> orc{}; 
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x40004ffc,0xfffffffe,0,unsigned>;
        ///Peripheral power control.
        enum class PowerVal {
            disabled=0x00000000,     ///<Module power disabled.
            enabled=0x00000001,     ///<Module power enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PowerVal> power{}; 
        namespace PowerValC{
            constexpr Register::FieldValue<decltype(power)::Type,PowerVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(power)::Type,PowerVal::enabled> enabled{};
        }
    }
}
