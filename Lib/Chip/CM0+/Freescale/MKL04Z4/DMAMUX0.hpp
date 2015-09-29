#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA channel multiplexor
    namespace Dmamux0Chcfg0{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021000,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
    namespace Dmamux0Chcfg1{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021001,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
    namespace Dmamux0Chcfg2{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021002,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
    namespace Dmamux0Chcfg3{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021003,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::v0> v0{};
            constexpr MPL::Value<trigVal,trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigVal> trig{}; 
        ///DMA Channel Enable
        enum class enblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        namespace enblValC{
            constexpr MPL::Value<enblVal,enblVal::v0> v0{};
            constexpr MPL::Value<enblVal,enblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enblVal> enbl{}; 
    }
}
