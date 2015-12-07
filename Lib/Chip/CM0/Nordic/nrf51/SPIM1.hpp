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
        enum class StoppedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped),StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped),StoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(stopped),StoppedVal::set> set{};
        }
        ///Enable interrupt on ENDRX event.
        enum class EndrxVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EndrxVal> endrx{}; 
        namespace EndrxValC{
            constexpr Register::FieldValue<decltype(endrx),EndrxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endrx),EndrxVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endrx),EndrxVal::set> set{};
        }
        ///Enable interrupt on ENDTX event.
        enum class EndtxVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EndtxVal> endtx{}; 
        namespace EndtxValC{
            constexpr Register::FieldValue<decltype(endtx),EndtxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endtx),EndtxVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endtx),EndtxVal::set> set{};
        }
        ///Enable interrupt on STARTED event.
        enum class StartedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,StartedVal> started{}; 
        namespace StartedValC{
            constexpr Register::FieldValue<decltype(started),StartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(started),StartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(started),StartedVal::set> set{};
        }
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40004308,0xfff7feed,0,unsigned>;
        ///Disable interrupt on STOPPED event.
        enum class StoppedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped),StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped),StoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(stopped),StoppedVal::clear> clear{};
        }
        ///Disable interrupt on ENDRX event.
        enum class EndrxVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EndrxVal> endrx{}; 
        namespace EndrxValC{
            constexpr Register::FieldValue<decltype(endrx),EndrxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endrx),EndrxVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endrx),EndrxVal::clear> clear{};
        }
        ///Disable interrupt on ENDTX event.
        enum class EndtxVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EndtxVal> endtx{}; 
        namespace EndtxValC{
            constexpr Register::FieldValue<decltype(endtx),EndtxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endtx),EndtxVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endtx),EndtxVal::clear> clear{};
        }
        ///Disable interrupt on STARTED event.
        enum class StartedVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,StartedVal> started{}; 
        namespace StartedValC{
            constexpr Register::FieldValue<decltype(started),StartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(started),StartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(started),StartedVal::clear> clear{};
        }
    }
    namespace Noneenable{    ///<Enable SPIM.
        using Addr = Register::Address<0x40004500,0xfffffff0,0,unsigned>;
        ///Enable or disable SPIM.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
    }
    namespace Nonefrequency{    ///<SPI frequency.
        using Addr = Register::Address<0x40004524,0x00000000,0,unsigned>;
        ///SPI master data rate.
        enum class FrequencyVal {
            k125=0x02000000,     ///<125 kbps.
            k250=0x04000000,     ///<250 kbps.
            k500=0x08000000,     ///<500 kbps.
            m1=0x10000000,     ///<1 Mbps.
            m2=0x20000000,     ///<2 Mbps.
            m4=0x40000000,     ///<4 Mbps.
            m8=0x80000000,     ///<8 Mbps.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,FrequencyVal> frequency{}; 
        namespace FrequencyValC{
            constexpr Register::FieldValue<decltype(frequency),FrequencyVal::k125> k125{};
            constexpr Register::FieldValue<decltype(frequency),FrequencyVal::k250> k250{};
            constexpr Register::FieldValue<decltype(frequency),FrequencyVal::k500> k500{};
            constexpr Register::FieldValue<decltype(frequency),FrequencyVal::m1> m1{};
            constexpr Register::FieldValue<decltype(frequency),FrequencyVal::m2> m2{};
            constexpr Register::FieldValue<decltype(frequency),FrequencyVal::m4> m4{};
            constexpr Register::FieldValue<decltype(frequency),FrequencyVal::m8> m8{};
        }
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
            constexpr Register::FieldValue<decltype(order),OrderVal::msbfirst> msbfirst{};
            constexpr Register::FieldValue<decltype(order),OrderVal::lsbfirst> lsbfirst{};
        }
        ///Serial clock (SCK) phase.
        enum class CphaVal {
            leading=0x00000000,     ///<Sample on leading edge of the clock. Shift serial data on trailing edge.
            trailing=0x00000001,     ///<Sample on trailing edge of the clock. Shift serial data on leading edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CphaVal> cpha{}; 
        namespace CphaValC{
            constexpr Register::FieldValue<decltype(cpha),CphaVal::leading> leading{};
            constexpr Register::FieldValue<decltype(cpha),CphaVal::trailing> trailing{};
        }
        ///Serial clock (SCK) polarity.
        enum class CpolVal {
            activehigh=0x00000000,     ///<Active high.
            activelow=0x00000001,     ///<Active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CpolVal> cpol{}; 
        namespace CpolValC{
            constexpr Register::FieldValue<decltype(cpol),CpolVal::activehigh> activehigh{};
            constexpr Register::FieldValue<decltype(cpol),CpolVal::activelow> activelow{};
        }
    }
    namespace Noneorc{    ///<Over-read character.
        using Addr = Register::Address<0x400045c0,0xffffff00,0,unsigned>;
        ///Over-read character.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> orc{}; 
        namespace OrcValC{
        }
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
            constexpr Register::FieldValue<decltype(power),PowerVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(power),PowerVal::enabled> enabled{};
        }
    }
}
