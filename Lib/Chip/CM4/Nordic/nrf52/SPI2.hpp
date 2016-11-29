#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Serial Peripheral Interface 2
    namespace Spi2EventsReady{    ///<TXD byte sent and RXD byte received
        using Addr = Register::Address<0x40023108,0xffffffff,0x00000000,unsigned>;
    }
    namespace Spi2Intenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40023304,0xfffffffb,0x00000000,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_READY event
        enum class ReadyVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ReadyVal> ready{}; 
        namespace ReadyValC{
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::set> set{};
        }
    }
    namespace Spi2Intenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40023308,0xfffffffb,0x00000000,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_READY event
        enum class ReadyVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ReadyVal> ready{}; 
        namespace ReadyValC{
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::clear> clear{};
        }
    }
    namespace Spi2Enable{    ///<Enable SPI
        using Addr = Register::Address<0x40023500,0xfffffff0,0x00000000,unsigned>;
        ///Enable or disable SPI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Spi2Rxd{    ///<RXD register
        using Addr = Register::Address<0x40023518,0xffffff00,0x00000000,unsigned>;
        ///RX data received. Double buffered
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxd{}; 
    }
    namespace Spi2Txd{    ///<TXD register
        using Addr = Register::Address<0x4002351c,0xffffff00,0x00000000,unsigned>;
        ///TX data to send. Double buffered
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txd{}; 
    }
    namespace Spi2Frequency{    ///<SPI frequency
        using Addr = Register::Address<0x40023524,0x00000000,0x00000000,unsigned>;
        ///SPI master data rate
        enum class FrequencyVal : unsigned {
            k125=0x02000000,     ///<125 kbps
            k250=0x04000000,     ///<250 kbps
            k500=0x08000000,     ///<500 kbps
            m1=0x10000000,     ///<1 Mbps
            m2=0x20000000,     ///<2 Mbps
            m4=0x40000000,     ///<4 Mbps
            m8=0x80000000,     ///<8 Mbps
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,FrequencyVal> frequency{}; 
        namespace FrequencyValC{
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::k125> k125{};
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::k250> k250{};
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::k500> k500{};
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::m1> m1{};
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::m2> m2{};
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::m4> m4{};
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::m8> m8{};
        }
    }
    namespace Spi2Config{    ///<Configuration register
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
}
