#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Low Power Timer
    namespace LptmrCsr{    ///<Low Power Timer Control Status Register
        using Addr = Register::Address<0x40040000,0xffffff00,0x00000000,unsigned>;
        ///Timer Enable
        enum class TenVal {
            v0=0x00000000,     ///<LPTMR is disabled and internal logic is reset.
            v1=0x00000001,     ///<LPTMR is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TenVal> ten{}; 
        namespace TenValC{
            constexpr Register::FieldValue<decltype(ten)::Type,TenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ten)::Type,TenVal::v1> v1{};
        }
        ///Timer Mode Select
        enum class TmsVal {
            v0=0x00000000,     ///<Time Counter mode.
            v1=0x00000001,     ///<Pulse Counter mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TmsVal> tms{}; 
        namespace TmsValC{
            constexpr Register::FieldValue<decltype(tms)::Type,TmsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tms)::Type,TmsVal::v1> v1{};
        }
        ///Timer Free-Running Counter
        enum class TfcVal {
            v0=0x00000000,     ///<CNR is reset whenever TCF is set.
            v1=0x00000001,     ///<CNR is reset on overflow.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TfcVal> tfc{}; 
        namespace TfcValC{
            constexpr Register::FieldValue<decltype(tfc)::Type,TfcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tfc)::Type,TfcVal::v1> v1{};
        }
        ///Timer Pin Polarity
        enum class TppVal {
            v0=0x00000000,     ///<Pulse Counter input source is active-high, and the CNR will increment on the rising-edge.
            v1=0x00000001,     ///<Pulse Counter input source is active-low, and the CNR will increment on the falling-edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TppVal> tpp{}; 
        namespace TppValC{
            constexpr Register::FieldValue<decltype(tpp)::Type,TppVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tpp)::Type,TppVal::v1> v1{};
        }
        ///Timer Pin Select
        enum class TpsVal {
            v00=0x00000000,     ///<Pulse counter input 0 is selected.
            v01=0x00000001,     ///<Pulse counter input 1 is selected.
            v10=0x00000002,     ///<Pulse counter input 2 is selected.
            v11=0x00000003,     ///<Pulse counter input 3 is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,TpsVal> tps{}; 
        namespace TpsValC{
            constexpr Register::FieldValue<decltype(tps)::Type,TpsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tps)::Type,TpsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tps)::Type,TpsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tps)::Type,TpsVal::v11> v11{};
        }
        ///Timer Interrupt Enable
        enum class TieVal {
            v0=0x00000000,     ///<Timer interrupt disabled.
            v1=0x00000001,     ///<Timer interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TieVal> tie{}; 
        namespace TieValC{
            constexpr Register::FieldValue<decltype(tie)::Type,TieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tie)::Type,TieVal::v1> v1{};
        }
        ///Timer Compare Flag
        enum class TcfVal {
            v0=0x00000000,     ///<The value of CNR is not equal to CMR and increments.
            v1=0x00000001,     ///<The value of CNR is equal to CMR and increments.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TcfVal> tcf{}; 
        namespace TcfValC{
            constexpr Register::FieldValue<decltype(tcf)::Type,TcfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcf)::Type,TcfVal::v1> v1{};
        }
    }
    namespace LptmrPsr{    ///<Low Power Timer Prescale Register
        using Addr = Register::Address<0x40040004,0xffffff80,0x00000000,unsigned>;
        ///Prescaler Clock Select
        enum class PcsVal {
            v00=0x00000000,     ///<Prescaler/glitch filter clock 0 selected.
            v01=0x00000001,     ///<Prescaler/glitch filter clock 1 selected.
            v10=0x00000002,     ///<Prescaler/glitch filter clock 2 selected.
            v11=0x00000003,     ///<Prescaler/glitch filter clock 3 selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PcsVal> pcs{}; 
        namespace PcsValC{
            constexpr Register::FieldValue<decltype(pcs)::Type,PcsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pcs)::Type,PcsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pcs)::Type,PcsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pcs)::Type,PcsVal::v11> v11{};
        }
        ///Prescaler Bypass
        enum class PbypVal {
            v0=0x00000000,     ///<Prescaler/glitch filter is enabled.
            v1=0x00000001,     ///<Prescaler/glitch filter is bypassed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PbypVal> pbyp{}; 
        namespace PbypValC{
            constexpr Register::FieldValue<decltype(pbyp)::Type,PbypVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pbyp)::Type,PbypVal::v1> v1{};
        }
        ///Prescale Value
        enum class PrescaleVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,3),Register::ReadWriteAccess,PrescaleVal> prescale{}; 
        namespace PrescaleValC{
            constexpr Register::FieldValue<decltype(prescale)::Type,PrescaleVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(prescale)::Type,PrescaleVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(prescale)::Type,PrescaleVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(prescale)::Type,PrescaleVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(prescale)::Type,PrescaleVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(prescale)::Type,PrescaleVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(prescale)::Type,PrescaleVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(prescale)::Type,PrescaleVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(prescale)::Type,PrescaleVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(prescale)::Type,PrescaleVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(prescale)::Type,PrescaleVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(prescale)::Type,PrescaleVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(prescale)::Type,PrescaleVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(prescale)::Type,PrescaleVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(prescale)::Type,PrescaleVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(prescale)::Type,PrescaleVal::v1111> v1111{};
        }
    }
    namespace LptmrCmr{    ///<Low Power Timer Compare Register
        using Addr = Register::Address<0x40040008,0xffff0000,0x00000000,unsigned>;
        ///Compare Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace LptmrCnr{    ///<Low Power Timer Counter Register
        using Addr = Register::Address<0x4004000c,0xffff0000,0x00000000,unsigned>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> counter{}; 
    }
}
