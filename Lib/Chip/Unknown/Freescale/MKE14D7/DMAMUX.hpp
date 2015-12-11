#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA channel multiplexor
    namespace DmamuxChcfg0{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021000,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg1{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021001,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg2{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021002,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg3{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021003,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg4{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021004,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg5{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021005,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg6{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021006,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg7{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021007,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg8{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021008,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg9{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021009,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg10{    ///<Channel Configuration register
        using Addr = Register::Address<0x4002100a,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg11{    ///<Channel Configuration register
        using Addr = Register::Address<0x4002100b,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg12{    ///<Channel Configuration register
        using Addr = Register::Address<0x4002100c,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg13{    ///<Channel Configuration register
        using Addr = Register::Address<0x4002100d,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
}
