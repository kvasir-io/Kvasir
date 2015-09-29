#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA channel multiplexor
    namespace DmamuxChcfg0{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021000,0xffffff40,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
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
        using Addr = Register::Address<0x40021001,0xffffff40,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
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
        using Addr = Register::Address<0x40021002,0xffffff40,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
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
        using Addr = Register::Address<0x40021003,0xffffff40,0,unsigned char>;
        ///DMA Channel Source (Slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
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
