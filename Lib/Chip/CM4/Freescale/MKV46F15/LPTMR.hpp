#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Low Power Timer
    namespace LptmrCsr{    ///<Low Power Timer Control Status Register
        using Addr = Register::Address<0x40040000,0xffffff00,0,unsigned>;
        ///Timer Enable
        enum class tenVal {
            v0=0x00000000,     ///<LPTMR is disabled and internal logic is reset.
            v1=0x00000001,     ///<LPTMR is enabled.
        };
        namespace tenValC{
            constexpr MPL::Value<tenVal,tenVal::v0> v0{};
            constexpr MPL::Value<tenVal,tenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tenVal> ten{}; 
        ///Timer Mode Select
        enum class tmsVal {
            v0=0x00000000,     ///<Time Counter mode.
            v1=0x00000001,     ///<Pulse Counter mode.
        };
        namespace tmsValC{
            constexpr MPL::Value<tmsVal,tmsVal::v0> v0{};
            constexpr MPL::Value<tmsVal,tmsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tmsVal> tms{}; 
        ///Timer Free-Running Counter
        enum class tfcVal {
            v0=0x00000000,     ///<CNR is reset whenever TCF is set.
            v1=0x00000001,     ///<CNR is reset on overflow.
        };
        namespace tfcValC{
            constexpr MPL::Value<tfcVal,tfcVal::v0> v0{};
            constexpr MPL::Value<tfcVal,tfcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,tfcVal> tfc{}; 
        ///Timer Pin Polarity
        enum class tppVal {
            v0=0x00000000,     ///<Pulse Counter input source is active-high, and the CNR will increment on the rising-edge.
            v1=0x00000001,     ///<Pulse Counter input source is active-low, and the CNR will increment on the falling-edge.
        };
        namespace tppValC{
            constexpr MPL::Value<tppVal,tppVal::v0> v0{};
            constexpr MPL::Value<tppVal,tppVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,tppVal> tpp{}; 
        ///Timer Pin Select
        enum class tpsVal {
            v00=0x00000000,     ///<Pulse counter input 0 is selected.
            v01=0x00000001,     ///<Pulse counter input 1 is selected.
            v10=0x00000002,     ///<Pulse counter input 2 is selected.
            v11=0x00000003,     ///<Pulse counter input 3 is selected.
        };
        namespace tpsValC{
            constexpr MPL::Value<tpsVal,tpsVal::v00> v00{};
            constexpr MPL::Value<tpsVal,tpsVal::v01> v01{};
            constexpr MPL::Value<tpsVal,tpsVal::v10> v10{};
            constexpr MPL::Value<tpsVal,tpsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,tpsVal> tps{}; 
        ///Timer Interrupt Enable
        enum class tieVal {
            v0=0x00000000,     ///<Timer interrupt disabled.
            v1=0x00000001,     ///<Timer interrupt enabled.
        };
        namespace tieValC{
            constexpr MPL::Value<tieVal,tieVal::v0> v0{};
            constexpr MPL::Value<tieVal,tieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,tieVal> tie{}; 
        ///Timer Compare Flag
        enum class tcfVal {
            v0=0x00000000,     ///<The value of CNR is not equal to CMR and increments.
            v1=0x00000001,     ///<The value of CNR is equal to CMR and increments.
        };
        namespace tcfValC{
            constexpr MPL::Value<tcfVal,tcfVal::v0> v0{};
            constexpr MPL::Value<tcfVal,tcfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tcfVal> tcf{}; 
    }
    namespace LptmrPsr{    ///<Low Power Timer Prescale Register
        using Addr = Register::Address<0x40040004,0xffffff80,0,unsigned>;
        ///Prescaler Clock Select
        enum class pcsVal {
            v00=0x00000000,     ///<Prescaler/glitch filter clock 0 selected.
            v01=0x00000001,     ///<Prescaler/glitch filter clock 1 selected.
            v10=0x00000002,     ///<Prescaler/glitch filter clock 2 selected.
            v11=0x00000003,     ///<Prescaler/glitch filter clock 3 selected.
        };
        namespace pcsValC{
            constexpr MPL::Value<pcsVal,pcsVal::v00> v00{};
            constexpr MPL::Value<pcsVal,pcsVal::v01> v01{};
            constexpr MPL::Value<pcsVal,pcsVal::v10> v10{};
            constexpr MPL::Value<pcsVal,pcsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pcsVal> pcs{}; 
        ///Prescaler Bypass
        enum class pbypVal {
            v0=0x00000000,     ///<Prescaler/glitch filter is enabled.
            v1=0x00000001,     ///<Prescaler/glitch filter is bypassed.
        };
        namespace pbypValC{
            constexpr MPL::Value<pbypVal,pbypVal::v0> v0{};
            constexpr MPL::Value<pbypVal,pbypVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pbypVal> pbyp{}; 
        ///Prescale Value
        enum class prescaleVal {
            v0000=0x00000000,     ///<Prescaler divides the prescaler clock by 2; glitch filter does not support this configuration.
            v0001=0x00000001,     ///<Prescaler divides the prescaler clock by 4; glitch filter recognizes change on input pin after 2 rising clock edges.
            v0010=0x00000002,     ///<Prescaler divides the prescaler clock by 8; glitch filter recognizes change on input pin after 4 rising clock edges.
            v0011=0x00000003,     ///<Prescaler divides the prescaler clock by 16; glitch filter recognizes change on input pin after 8 rising clock edges.
            v0100=0x00000004,     ///<Prescaler divides the prescaler clock by 32; glitch filter recognizes change on input pin after 16 rising clock edges.
            v0101=0x00000005,     ///<Prescaler divides the prescaler clock by 64; glitch filter recognizes change on input pin after 32 rising clock edges.
            v0110=0x00000006,     ///<Prescaler divides the prescaler clock by 128; glitch filter recognizes change on input pin after 64 rising clock edges.
            v0111=0x00000007,     ///<Prescaler divides the prescaler clock by 256; glitch filter recognizes change on input pin after 128 rising clock edges.
            v1000=0x00000008,     ///<Prescaler divides the prescaler clock by 512; glitch filter recognizes change on input pin after 256 rising clock edges.
            v1001=0x00000009,     ///<Prescaler divides the prescaler clock by 1024; glitch filter recognizes change on input pin after 512 rising clock edges.
            v1010=0x0000000a,     ///<Prescaler divides the prescaler clock by 2048; glitch filter recognizes change on input pin after 1024 rising clock edges.
            v1011=0x0000000b,     ///<Prescaler divides the prescaler clock by 4096; glitch filter recognizes change on input pin after 2048 rising clock edges.
            v1100=0x0000000c,     ///<Prescaler divides the prescaler clock by 8192; glitch filter recognizes change on input pin after 4096 rising clock edges.
            v1101=0x0000000d,     ///<Prescaler divides the prescaler clock by 16,384; glitch filter recognizes change on input pin after 8192 rising clock edges.
            v1110=0x0000000e,     ///<Prescaler divides the prescaler clock by 32,768; glitch filter recognizes change on input pin after 16,384 rising clock edges.
            v1111=0x0000000f,     ///<Prescaler divides the prescaler clock by 65,536; glitch filter recognizes change on input pin after 32,768 rising clock edges.
        };
        namespace prescaleValC{
            constexpr MPL::Value<prescaleVal,prescaleVal::v0000> v0000{};
            constexpr MPL::Value<prescaleVal,prescaleVal::v0001> v0001{};
            constexpr MPL::Value<prescaleVal,prescaleVal::v0010> v0010{};
            constexpr MPL::Value<prescaleVal,prescaleVal::v0011> v0011{};
            constexpr MPL::Value<prescaleVal,prescaleVal::v0100> v0100{};
            constexpr MPL::Value<prescaleVal,prescaleVal::v0101> v0101{};
            constexpr MPL::Value<prescaleVal,prescaleVal::v0110> v0110{};
            constexpr MPL::Value<prescaleVal,prescaleVal::v0111> v0111{};
            constexpr MPL::Value<prescaleVal,prescaleVal::v1000> v1000{};
            constexpr MPL::Value<prescaleVal,prescaleVal::v1001> v1001{};
            constexpr MPL::Value<prescaleVal,prescaleVal::v1010> v1010{};
            constexpr MPL::Value<prescaleVal,prescaleVal::v1011> v1011{};
            constexpr MPL::Value<prescaleVal,prescaleVal::v1100> v1100{};
            constexpr MPL::Value<prescaleVal,prescaleVal::v1101> v1101{};
            constexpr MPL::Value<prescaleVal,prescaleVal::v1110> v1110{};
            constexpr MPL::Value<prescaleVal,prescaleVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,3),Register::ReadWriteAccess,prescaleVal> prescale{}; 
    }
    namespace LptmrCmr{    ///<Low Power Timer Compare Register
        using Addr = Register::Address<0x40040008,0xffff0000,0,unsigned>;
        ///Compare Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace LptmrCnr{    ///<Low Power Timer Counter Register
        using Addr = Register::Address<0x4004000c,0xffff0000,0,unsigned>;
        ///Counter Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> counter{}; 
    }
}
