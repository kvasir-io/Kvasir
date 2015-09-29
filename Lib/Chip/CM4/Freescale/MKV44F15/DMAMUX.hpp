#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Direct memory access multiplexer
    namespace DmamuxChcfg0{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021000,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled and ENBL is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMAMux. The DMA has separate channel enables/disables, which should be used to disable or reconfigure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
    namespace DmamuxChcfg1{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021001,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled and ENBL is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMAMux. The DMA has separate channel enables/disables, which should be used to disable or reconfigure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
    namespace DmamuxChcfg2{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021002,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled and ENBL is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMAMux. The DMA has separate channel enables/disables, which should be used to disable or reconfigure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
    namespace DmamuxChcfg3{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021003,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled and ENBL is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMAMux. The DMA has separate channel enables/disables, which should be used to disable or reconfigure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
    namespace DmamuxChcfg4{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021004,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled and ENBL is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMAMux. The DMA has separate channel enables/disables, which should be used to disable or reconfigure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
    namespace DmamuxChcfg5{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021005,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled and ENBL is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMAMux. The DMA has separate channel enables/disables, which should be used to disable or reconfigure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
    namespace DmamuxChcfg6{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021006,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled and ENBL is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMAMux. The DMA has separate channel enables/disables, which should be used to disable or reconfigure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
    namespace DmamuxChcfg7{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021007,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled and ENBL is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMAMux. The DMA has separate channel enables/disables, which should be used to disable or reconfigure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
    namespace DmamuxChcfg8{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021008,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled and ENBL is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMAMux. The DMA has separate channel enables/disables, which should be used to disable or reconfigure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
    namespace DmamuxChcfg9{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021009,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled and ENBL is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMAMux. The DMA has separate channel enables/disables, which should be used to disable or reconfigure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
    namespace DmamuxChcfg10{    ///<Channel Configuration register
        using Addr = Register::Address<0x4002100a,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled and ENBL is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMAMux. The DMA has separate channel enables/disables, which should be used to disable or reconfigure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
    namespace DmamuxChcfg11{    ///<Channel Configuration register
        using Addr = Register::Address<0x4002100b,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled and ENBL is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMAMux. The DMA has separate channel enables/disables, which should be used to disable or reconfigure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
    namespace DmamuxChcfg12{    ///<Channel Configuration register
        using Addr = Register::Address<0x4002100c,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled and ENBL is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMAMux. The DMA has separate channel enables/disables, which should be used to disable or reconfigure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
    namespace DmamuxChcfg13{    ///<Channel Configuration register
        using Addr = Register::Address<0x4002100d,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled and ENBL is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMAMux. The DMA has separate channel enables/disables, which should be used to disable or reconfigure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
    namespace DmamuxChcfg14{    ///<Channel Configuration register
        using Addr = Register::Address<0x4002100e,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled and ENBL is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMAMux. The DMA has separate channel enables/disables, which should be used to disable or reconfigure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
    namespace DmamuxChcfg15{    ///<Channel Configuration register
        using Addr = Register::Address<0x4002100f,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled and ENBL is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMAMux. The DMA has separate channel enables/disables, which should be used to disable or reconfigure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
}
