#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Operational Amplifier
    namespace Opamp0C0{    ///<Control Register 0
        using Addr = Register::Address<0x400f5000,0xffffff3c,0,unsigned char>;
        ///OPAMP Mode Select
        enum class modeVal {
            v00=0x00000000,     ///<Buffer
            v10=0x00000002,     ///<General purpose
            v01=0x00000001,     ///<Inverting PGA
            v11=0x00000003,     ///<Non-inverting PGA
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::v00> v00{};
            constexpr MPL::Value<modeVal,modeVal::v10> v10{};
            constexpr MPL::Value<modeVal,modeVal::v01> v01{};
            constexpr MPL::Value<modeVal,modeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Low-Power Mode Enable
        enum class lpenVal {
            v0=0x00000000,     ///<High-speed mode selected. In this mode, OPAMP has faster slew rate and unity gain bandwidth performance with higher current consumption.
            v1=0x00000001,     ///<Low-power mode selected. In this mode, OPAMP has lower current consumption with slower slew rate and unity gain bandwidth performance.
        };
        namespace lpenValC{
            constexpr MPL::Value<lpenVal,lpenVal::v0> v0{};
            constexpr MPL::Value<lpenVal,lpenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,lpenVal> lpen{}; 
        ///OPAMP Enable
        enum class enVal {
            v0=0x00000000,     ///<OPAMP is disabled and not powered
            v1=0x00000001,     ///<OPAMP is enabled and powered
        };
        namespace enValC{
            constexpr MPL::Value<enVal,enVal::v0> v0{};
            constexpr MPL::Value<enVal,enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enVal> en{}; 
    }
    namespace Opamp0C1{    ///<Control Register 1
        using Addr = Register::Address<0x400f5001,0xffffffe0,0,unsigned char>;
        ///Gains Selector
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ampri{}; 
        ///Gains Selector
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> amprf{}; 
    }
    namespace Opamp0C2{    ///<Control Register 2
        using Addr = Register::Address<0x400f5002,0xffffff88,0,unsigned char>;
        ///Amplifier Negative Input Terminal Selector.
        enum class ampnselVal {
            v000=0x00000000,     ///<Negative input 0
            v001=0x00000001,     ///<Negative input 1
            v010=0x00000002,     ///<Negative input 2
            v011=0x00000003,     ///<Negative input 3
            v100=0x00000004,     ///<Negative input 4
            v101=0x00000005,     ///<Negative input 5
            v110=0x00000006,     ///<Negative input 6
            v111=0x00000007,     ///<Negative input 7
        };
        namespace ampnselValC{
            constexpr MPL::Value<ampnselVal,ampnselVal::v000> v000{};
            constexpr MPL::Value<ampnselVal,ampnselVal::v001> v001{};
            constexpr MPL::Value<ampnselVal,ampnselVal::v010> v010{};
            constexpr MPL::Value<ampnselVal,ampnselVal::v011> v011{};
            constexpr MPL::Value<ampnselVal,ampnselVal::v100> v100{};
            constexpr MPL::Value<ampnselVal,ampnselVal::v101> v101{};
            constexpr MPL::Value<ampnselVal,ampnselVal::v110> v110{};
            constexpr MPL::Value<ampnselVal,ampnselVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ampnselVal> ampnsel{}; 
        ///Amplifier Positive Input Terminal Selector
        enum class amppselVal {
            v000=0x00000000,     ///<Positive input 0
            v001=0x00000001,     ///<Positive input 1
            v010=0x00000002,     ///<Positive input 2
            v011=0x00000003,     ///<Positive input 3
            v100=0x00000004,     ///<Positive input 4
            v101=0x00000005,     ///<Positive input 5
            v110=0x00000006,     ///<Positive input 6
            v111=0x00000007,     ///<Positive input 7
        };
        namespace amppselValC{
            constexpr MPL::Value<amppselVal,amppselVal::v000> v000{};
            constexpr MPL::Value<amppselVal,amppselVal::v001> v001{};
            constexpr MPL::Value<amppselVal,amppselVal::v010> v010{};
            constexpr MPL::Value<amppselVal,amppselVal::v011> v011{};
            constexpr MPL::Value<amppselVal,amppselVal::v100> v100{};
            constexpr MPL::Value<amppselVal,amppselVal::v101> v101{};
            constexpr MPL::Value<amppselVal,amppselVal::v110> v110{};
            constexpr MPL::Value<amppselVal,amppselVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,amppselVal> amppsel{}; 
    }
}
