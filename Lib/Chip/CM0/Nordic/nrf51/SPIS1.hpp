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
        enum class endAcquireVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace endAcquireValC{
            constexpr MPL::Value<endAcquireVal,endAcquireVal::disabled> disabled{};
            constexpr MPL::Value<endAcquireVal,endAcquireVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,endAcquireVal> endAcquire{}; 
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40004304,0xfffffbfd,0,unsigned>;
        ///Enable interrupt on END event.
        enum class endVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace endValC{
            constexpr MPL::Value<endVal,endVal::disabled> disabled{};
            constexpr MPL::Value<endVal,endVal::enabled> enabled{};
            constexpr MPL::Value<endVal,endVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,endVal> end{}; 
        ///Enable interrupt on ACQUIRED event.
        enum class acquiredVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace acquiredValC{
            constexpr MPL::Value<acquiredVal,acquiredVal::disabled> disabled{};
            constexpr MPL::Value<acquiredVal,acquiredVal::enabled> enabled{};
            constexpr MPL::Value<acquiredVal,acquiredVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,acquiredVal> acquired{}; 
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40004308,0xfffffbfd,0,unsigned>;
        ///Disable interrupt on END event.
        enum class endVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace endValC{
            constexpr MPL::Value<endVal,endVal::disabled> disabled{};
            constexpr MPL::Value<endVal,endVal::enabled> enabled{};
            constexpr MPL::Value<endVal,endVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,endVal> end{}; 
        ///Disable interrupt on ACQUIRED event.
        enum class acquiredVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace acquiredValC{
            constexpr MPL::Value<acquiredVal,acquiredVal::disabled> disabled{};
            constexpr MPL::Value<acquiredVal,acquiredVal::enabled> enabled{};
            constexpr MPL::Value<acquiredVal,acquiredVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,acquiredVal> acquired{}; 
    }
    namespace Nonesemstat{    ///<Semaphore status.
        using Addr = Register::Address<0x40004400,0xfffffffc,0,unsigned>;
        ///Semaphore status.
        enum class semstatVal {
            free=0x00000000,     ///<Semaphore is free.
            cpu=0x00000001,     ///<Semaphore is assigned to the CPU.
            spis=0x00000002,     ///<Semaphore is assigned to the SPIS.
            cpupending=0x00000003,     ///<Semaphore is assigned to the SPIS, but a handover to the CPU is pending.
        };
        namespace semstatValC{
            constexpr MPL::Value<semstatVal,semstatVal::free> free{};
            constexpr MPL::Value<semstatVal,semstatVal::cpu> cpu{};
            constexpr MPL::Value<semstatVal,semstatVal::spis> spis{};
            constexpr MPL::Value<semstatVal,semstatVal::cpupending> cpupending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,semstatVal> semstat{}; 
    }
    namespace Nonestatus{    ///<Status from last transaction.
        using Addr = Register::Address<0x40004440,0xfffffffc,0,unsigned>;
        ///TX buffer overread detected, and prevented.
        enum class overreadVal {
            notpresent=0x00000000,     ///<Error not present.
            present=0x00000001,     ///<Error present.
            clear=0x00000001,     ///<Clear on write.
        };
        namespace overreadValC{
            constexpr MPL::Value<overreadVal,overreadVal::notpresent> notpresent{};
            constexpr MPL::Value<overreadVal,overreadVal::present> present{};
            constexpr MPL::Value<overreadVal,overreadVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,overreadVal> overread{}; 
        ///RX buffer overflow detected, and prevented.
        enum class overflowVal {
            notpresent=0x00000000,     ///<Error not present.
            present=0x00000001,     ///<Error present.
            clear=0x00000001,     ///<Clear on write.
        };
        namespace overflowValC{
            constexpr MPL::Value<overflowVal,overflowVal::notpresent> notpresent{};
            constexpr MPL::Value<overflowVal,overflowVal::present> present{};
            constexpr MPL::Value<overflowVal,overflowVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,overflowVal> overflow{}; 
    }
    namespace Noneenable{    ///<Enable SPIS.
        using Addr = Register::Address<0x40004500,0xfffffff8,0,unsigned>;
        ///Enable or disable SPIS.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> enable{}; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> maxrx{}; 
    }
    namespace Noneamountrx{    ///<Number of bytes received in last granted transaction.
        using Addr = Register::Address<0x4000453c,0xffffff00,0,unsigned>;
        ///Number of bytes received in last granted transaction.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> amountrx{}; 
    }
    namespace Nonetxdptr{    ///<TX data pointer.
        using Addr = Register::Address<0x40004544,0xffffffff,0,unsigned>;
    }
    namespace Nonemaxtx{    ///<Maximum number of bytes in the transmit buffer.
        using Addr = Register::Address<0x40004548,0xffffff00,0,unsigned>;
        ///Maximum number of bytes in the transmit buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> maxtx{}; 
    }
    namespace Noneamounttx{    ///<Number of bytes transmitted in last granted transaction.
        using Addr = Register::Address<0x4000454c,0xffffff00,0,unsigned>;
        ///Number of bytes transmitted in last granted transaction.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> amounttx{}; 
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
    namespace Nonedef{    ///<Default character.
        using Addr = Register::Address<0x4000455c,0xffffff00,0,unsigned>;
        ///Default character.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> def{}; 
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
