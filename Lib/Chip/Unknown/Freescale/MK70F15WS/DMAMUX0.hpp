#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA channel multiplexor
    namespace Dmamux0Chcfg0{    ///<Channel Configuration Register
        using Addr = Register::Address<0x40021000,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in periodic trigger mode.
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
    namespace Dmamux0Chcfg1{    ///<Channel Configuration Register
        using Addr = Register::Address<0x40021001,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in periodic trigger mode.
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
    namespace Dmamux0Chcfg2{    ///<Channel Configuration Register
        using Addr = Register::Address<0x40021002,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in periodic trigger mode.
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
    namespace Dmamux0Chcfg3{    ///<Channel Configuration Register
        using Addr = Register::Address<0x40021003,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in periodic trigger mode.
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
    namespace Dmamux0Chcfg4{    ///<Channel Configuration Register
        using Addr = Register::Address<0x40021004,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in periodic trigger mode.
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
    namespace Dmamux0Chcfg5{    ///<Channel Configuration Register
        using Addr = Register::Address<0x40021005,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in periodic trigger mode.
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
    namespace Dmamux0Chcfg6{    ///<Channel Configuration Register
        using Addr = Register::Address<0x40021006,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in periodic trigger mode.
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
    namespace Dmamux0Chcfg7{    ///<Channel Configuration Register
        using Addr = Register::Address<0x40021007,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in periodic trigger mode.
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
    namespace Dmamux0Chcfg8{    ///<Channel Configuration Register
        using Addr = Register::Address<0x40021008,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in periodic trigger mode.
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
    namespace Dmamux0Chcfg9{    ///<Channel Configuration Register
        using Addr = Register::Address<0x40021009,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in periodic trigger mode.
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
    namespace Dmamux0Chcfg10{    ///<Channel Configuration Register
        using Addr = Register::Address<0x4002100a,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in periodic trigger mode.
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
    namespace Dmamux0Chcfg11{    ///<Channel Configuration Register
        using Addr = Register::Address<0x4002100b,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in periodic trigger mode.
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
    namespace Dmamux0Chcfg12{    ///<Channel Configuration Register
        using Addr = Register::Address<0x4002100c,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in periodic trigger mode.
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
    namespace Dmamux0Chcfg13{    ///<Channel Configuration Register
        using Addr = Register::Address<0x4002100d,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in periodic trigger mode.
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
    namespace Dmamux0Chcfg14{    ///<Channel Configuration Register
        using Addr = Register::Address<0x4002100e,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in periodic trigger mode.
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
    namespace Dmamux0Chcfg15{    ///<Channel Configuration Register
        using Addr = Register::Address<0x4002100f,0xffffff00,0,unsigned char>;
        ///DMA Channel Source (slot)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> source{}; 
        ///DMA Channel Trigger Enable
        enum class trigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in periodic trigger mode.
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
