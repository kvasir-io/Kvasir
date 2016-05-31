#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System Integration Module
    namespace SimSopt2{    ///<System Options Register 2
        using Addr = Register::Address<0x40032004,0x00000000,0x00000000,unsigned>;
        ///no description available
        enum class Fllenstop4Val {
            v0=0x00000000,     ///<FLL is disabled in STOP4 mode.
            v1=0x00000001,     ///<FLL is enbled in STOP4 mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Fllenstop4Val> fllenstop4{}; 
        namespace Fllenstop4ValC{
            constexpr Register::FieldValue<decltype(fllenstop4)::Type,Fllenstop4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(fllenstop4)::Type,Fllenstop4Val::v1> v1{};
        }
        ///no description available
        enum class ResetifeVal {
            v0=0x00000000,     ///<Filter of Reset pad is disabled.
            v1=0x00000001,     ///<Filter of Reset pad is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ResetifeVal> resetife{}; 
        namespace ResetifeValC{
            constexpr Register::FieldValue<decltype(resetife)::Type,ResetifeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(resetife)::Type,ResetifeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        enum class Obepadsela13Val {
            v00=0x00000000,     ///<5 mA drive strength for pad PTA13.
            v01=0x00000001,     ///<5 mA drive strength for pad PTA13.
            v10=0x00000002,     ///<15 mA drive strength for pad PTA13.
            v11=0x00000003,     ///<20 mA drive strength for pad PTA13.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Obepadsela13Val> obepadsela13{}; 
        namespace Obepadsela13ValC{
            constexpr Register::FieldValue<decltype(obepadsela13)::Type,Obepadsela13Val::v00> v00{};
            constexpr Register::FieldValue<decltype(obepadsela13)::Type,Obepadsela13Val::v01> v01{};
            constexpr Register::FieldValue<decltype(obepadsela13)::Type,Obepadsela13Val::v10> v10{};
            constexpr Register::FieldValue<decltype(obepadsela13)::Type,Obepadsela13Val::v11> v11{};
        }
        ///no description available
        enum class Obepadsela12Val {
            v00=0x00000000,     ///<5 mA drive strength for pad PTA12.
            v01=0x00000001,     ///<5 mA drive strength for pad PTA12.
            v10=0x00000002,     ///<15 mA drive strength for pad PTA12.
            v11=0x00000003,     ///<20 mA drive strength for pad PTA12.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Obepadsela12Val> obepadsela12{}; 
        namespace Obepadsela12ValC{
            constexpr Register::FieldValue<decltype(obepadsela12)::Type,Obepadsela12Val::v00> v00{};
            constexpr Register::FieldValue<decltype(obepadsela12)::Type,Obepadsela12Val::v01> v01{};
            constexpr Register::FieldValue<decltype(obepadsela12)::Type,Obepadsela12Val::v10> v10{};
            constexpr Register::FieldValue<decltype(obepadsela12)::Type,Obepadsela12Val::v11> v11{};
        }
        ///no description available
        enum class Obepadsela3Val {
            v00=0x00000000,     ///<5 mA drive strength for pad PTA3.
            v01=0x00000001,     ///<5 mA drive strength for pad PTA3.
            v10=0x00000002,     ///<15 mA drive strength for pad PTA3.
            v11=0x00000003,     ///<20 mA drive strength for pad PTA3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Obepadsela3Val> obepadsela3{}; 
        namespace Obepadsela3ValC{
            constexpr Register::FieldValue<decltype(obepadsela3)::Type,Obepadsela3Val::v00> v00{};
            constexpr Register::FieldValue<decltype(obepadsela3)::Type,Obepadsela3Val::v01> v01{};
            constexpr Register::FieldValue<decltype(obepadsela3)::Type,Obepadsela3Val::v10> v10{};
            constexpr Register::FieldValue<decltype(obepadsela3)::Type,Obepadsela3Val::v11> v11{};
        }
        ///no description available
        enum class Obepadsela2Val {
            v00=0x00000000,     ///<5 mA drive strength for pad PTA2.
            v01=0x00000001,     ///<5 mA drive strength for pad PTA2.
            v10=0x00000002,     ///<15 mA drive strength for pad PTA2.
            v11=0x00000003,     ///<20 mA drive strength for pad PTA2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Obepadsela2Val> obepadsela2{}; 
        namespace Obepadsela2ValC{
            constexpr Register::FieldValue<decltype(obepadsela2)::Type,Obepadsela2Val::v00> v00{};
            constexpr Register::FieldValue<decltype(obepadsela2)::Type,Obepadsela2Val::v01> v01{};
            constexpr Register::FieldValue<decltype(obepadsela2)::Type,Obepadsela2Val::v10> v10{};
            constexpr Register::FieldValue<decltype(obepadsela2)::Type,Obepadsela2Val::v11> v11{};
        }
        ///no description available
        enum class Obepadsele1Val {
            v00=0x00000000,     ///<5 mA drive strength for pad PTE1.
            v01=0x00000001,     ///<5 mA drive strength for pad PTE1.
            v10=0x00000002,     ///<15 mA drive strength for pad PTE1.
            v11=0x00000003,     ///<20 mA drive strength for pad PTE1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Obepadsele1Val> obepadsele1{}; 
        namespace Obepadsele1ValC{
            constexpr Register::FieldValue<decltype(obepadsele1)::Type,Obepadsele1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(obepadsele1)::Type,Obepadsele1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(obepadsele1)::Type,Obepadsele1Val::v10> v10{};
            constexpr Register::FieldValue<decltype(obepadsele1)::Type,Obepadsele1Val::v11> v11{};
        }
        ///no description available
        enum class Obepadsele0Val {
            v00=0x00000000,     ///<5 mA drive strength for pad PTE0.
            v01=0x00000001,     ///<5 mA drive strength for pad PTE0.
            v10=0x00000002,     ///<15 mA drive strength for pad PTE0.
            v11=0x00000003,     ///<20 mA drive strength for pad PTE0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Obepadsele0Val> obepadsele0{}; 
        namespace Obepadsele0ValC{
            constexpr Register::FieldValue<decltype(obepadsele0)::Type,Obepadsele0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(obepadsele0)::Type,Obepadsele0Val::v01> v01{};
            constexpr Register::FieldValue<decltype(obepadsele0)::Type,Obepadsele0Val::v10> v10{};
            constexpr Register::FieldValue<decltype(obepadsele0)::Type,Obepadsele0Val::v11> v11{};
        }
        ///FlexBus security level
        enum class FbslVal {
            v00=0x00000000,     ///<All off-chip accesses (instruction and data) via the FlexBus are disallowed.
            v01=0x00000001,     ///<All off-chip accesses (instruction and data) via the FlexBus are disallowed.
            v10=0x00000002,     ///<Off-chip instruction accesses are disallowed. Data accesses are allowed.
            v11=0x00000003,     ///<Off-chip instruction accesses and data accesses are allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,FbslVal> fbsl{}; 
        namespace FbslValC{
            constexpr Register::FieldValue<decltype(fbsl)::Type,FbslVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fbsl)::Type,FbslVal::v01> v01{};
            constexpr Register::FieldValue<decltype(fbsl)::Type,FbslVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fbsl)::Type,FbslVal::v11> v11{};
        }
        ///Debug trace clock select
        enum class TraceclkselVal {
            v0=0x00000000,     ///<ICSOUTCLK
            v1=0x00000001,     ///<Core/system clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,TraceclkselVal> traceclksel{}; 
        namespace TraceclkselValC{
            constexpr Register::FieldValue<decltype(traceclksel)::Type,TraceclkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(traceclksel)::Type,TraceclkselVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///The RAM size in the device.
        enum class RamsizeVal {
            v0=0x00000000,     ///<RAM size is 16 KB in the device. ( 8 KB Upper SRAM. 8 KB Lower SRAM).
            v1=0x00000001,     ///<RAM size is 24 KB in the device. (16 KB Upper SRAM. 8 KB Lower SRAM).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,RamsizeVal> ramsize{}; 
        namespace RamsizeValC{
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ramsize)::Type,RamsizeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///The flash size of the device.
        enum class FsizeVal {
            v00=0x00000000,     ///<128 KB
            v01=0x00000001,     ///<192 KB
            v10=0x00000002,     ///<256 KB
            v11=0x00000003,     ///<256KB
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FsizeVal> fsize{}; 
        namespace FsizeValC{
            constexpr Register::FieldValue<decltype(fsize)::Type,FsizeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fsize)::Type,FsizeVal::v01> v01{};
            constexpr Register::FieldValue<decltype(fsize)::Type,FsizeVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fsize)::Type,FsizeVal::v11> v11{};
        }
        ///no description available
        enum class TsienVal {
            v0=0x00000000,     ///<TSI is not available in the device.
            v1=0x00000001,     ///<TSI is available in the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TsienVal> tsien{}; 
        namespace TsienValC{
            constexpr Register::FieldValue<decltype(tsien)::Type,TsienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsien)::Type,TsienVal::v1> v1{};
        }
        ///no description available
        enum class MaxclkVal {
            v0=0x00000000,     ///<Maximum clock in the system is 36 MHz
            v1=0x00000001,     ///<Maximum clock in the system is 72 MHz.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,MaxclkVal> maxclk{}; 
        namespace MaxclkValC{
            constexpr Register::FieldValue<decltype(maxclk)::Type,MaxclkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(maxclk)::Type,MaxclkVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace SimSopt3{    ///<System Options Register 3
        using Addr = Register::Address<0x40032008,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ftm0Pdb{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ftm1Pdb{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> ftm2Pdb{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ftm3Pdb{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ftmSync0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ftmSync1{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ftmSync2{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ftmSync3{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace SimSopt4{    ///<System Options Register 4
        using Addr = Register::Address<0x4003200c,0x00000000,0x00000000,unsigned>;
        ///FTM0 Fault 0 Select
        enum class Ftm0flt0Val {
            v0=0x00000000,     ///<FTM0_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ftm0flt0Val> ftm0flt0{}; 
        namespace Ftm0flt0ValC{
            constexpr Register::FieldValue<decltype(ftm0flt0)::Type,Ftm0flt0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0flt0)::Type,Ftm0flt0Val::v1> v1{};
        }
        ///FTM0 Fault 1 Select
        enum class Ftm0flt1Val {
            v0=0x00000000,     ///<FTM0_FLT1 pin
            v1=0x00000001,     ///<CMP1 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ftm0flt1Val> ftm0flt1{}; 
        namespace Ftm0flt1ValC{
            constexpr Register::FieldValue<decltype(ftm0flt1)::Type,Ftm0flt1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0flt1)::Type,Ftm0flt1Val::v1> v1{};
        }
        ///FTM0 Fault 2 Select
        enum class Ftm0flt2Val {
            v0=0x00000000,     ///<FTM0_FLT2 pin
            v1=0x00000001,     ///<CMP2 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ftm0flt2Val> ftm0flt2{}; 
        namespace Ftm0flt2ValC{
            constexpr Register::FieldValue<decltype(ftm0flt2)::Type,Ftm0flt2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0flt2)::Type,Ftm0flt2Val::v1> v1{};
        }
        ///FTM0 Fault 3 Select
        enum class Ftm0flt3Val {
            v0=0x00000000,     ///<FTM0_FLT3 pin
            v1=0x00000001,     ///<CMP3 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ftm0flt3Val> ftm0flt3{}; 
        namespace Ftm0flt3ValC{
            constexpr Register::FieldValue<decltype(ftm0flt3)::Type,Ftm0flt3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0flt3)::Type,Ftm0flt3Val::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///FTM3 Fault 0 Select
        enum class Ftm3flt0Val {
            v0=0x00000000,     ///<FTM3_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ftm3flt0Val> ftm3flt0{}; 
        namespace Ftm3flt0ValC{
            constexpr Register::FieldValue<decltype(ftm3flt0)::Type,Ftm3flt0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3flt0)::Type,Ftm3flt0Val::v1> v1{};
        }
        ///FTM3 Fault 1 Select
        enum class Ftm3flt1Val {
            v0=0x00000000,     ///<FTM3_FLT1 pin
            v1=0x00000001,     ///<CMP1 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ftm3flt1Val> ftm3flt1{}; 
        namespace Ftm3flt1ValC{
            constexpr Register::FieldValue<decltype(ftm3flt1)::Type,Ftm3flt1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3flt1)::Type,Ftm3flt1Val::v1> v1{};
        }
        ///FTM3 Fault 2 Select
        enum class Ftm3flt2Val {
            v0=0x00000000,     ///<FTM3_FLT2 pin
            v1=0x00000001,     ///<CMP2 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ftm3flt2Val> ftm3flt2{}; 
        namespace Ftm3flt2ValC{
            constexpr Register::FieldValue<decltype(ftm3flt2)::Type,Ftm3flt2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3flt2)::Type,Ftm3flt2Val::v1> v1{};
        }
        ///FTM3 Fault 3 Select
        enum class Ftm3flt3Val {
            v0=0x00000000,     ///<FTM3_FLT3 pin
            v1=0x00000001,     ///<CMP3 out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ftm3flt3Val> ftm3flt3{}; 
        namespace Ftm3flt3ValC{
            constexpr Register::FieldValue<decltype(ftm3flt3)::Type,Ftm3flt3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3flt3)::Type,Ftm3flt3Val::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///FTM1 channel 0 input capture source select
        enum class Ftm1ch0srcVal {
            v00=0x00000000,     ///<FTM1_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
            v11=0x00000003,     ///<CMP2 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Ftm1ch0srcVal> ftm1ch0src{}; 
        namespace Ftm1ch0srcValC{
            constexpr Register::FieldValue<decltype(ftm1ch0src)::Type,Ftm1ch0srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm1ch0src)::Type,Ftm1ch0srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm1ch0src)::Type,Ftm1ch0srcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ftm1ch0src)::Type,Ftm1ch0srcVal::v11> v11{};
        }
        ///FTM2 channel 0 input capture source select
        enum class Ftm2ch0srcVal {
            v00=0x00000000,     ///<FTM2_CH0 signal
            v01=0x00000001,     ///<CMP1 output
            v10=0x00000002,     ///<CMP2 output
            v11=0x00000003,     ///<CMP3 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,Ftm2ch0srcVal> ftm2ch0src{}; 
        namespace Ftm2ch0srcValC{
            constexpr Register::FieldValue<decltype(ftm2ch0src)::Type,Ftm2ch0srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftm2ch0src)::Type,Ftm2ch0srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftm2ch0src)::Type,Ftm2ch0srcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ftm2ch0src)::Type,Ftm2ch0srcVal::v11> v11{};
        }
        ///FlexTimer 0 External Clock Pin Select
        enum class Ftm0clkselVal {
            v0=0x00000000,     ///<FTM_CLK0 pin
            v1=0x00000001,     ///<FTM_CLK1 pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ftm0clkselVal> ftm0clksel{}; 
        namespace Ftm0clkselValC{
            constexpr Register::FieldValue<decltype(ftm0clksel)::Type,Ftm0clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0clksel)::Type,Ftm0clkselVal::v1> v1{};
        }
        ///FTM1 External Clock Pin Select
        enum class Ftm1clkselVal {
            v0=0x00000000,     ///<FTM_CLK0 pin
            v1=0x00000001,     ///<FTM_CLK1 pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ftm1clkselVal> ftm1clksel{}; 
        namespace Ftm1clkselValC{
            constexpr Register::FieldValue<decltype(ftm1clksel)::Type,Ftm1clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1clksel)::Type,Ftm1clkselVal::v1> v1{};
        }
        ///FlexTimer 2 External Clock Pin Select
        enum class Ftm2clkselVal {
            v0=0x00000000,     ///<FTM2 external clock driven by FTM_CLK0 pin.
            v1=0x00000001,     ///<FTM2 external clock driven by FTM_CLK1 pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ftm2clkselVal> ftm2clksel{}; 
        namespace Ftm2clkselValC{
            constexpr Register::FieldValue<decltype(ftm2clksel)::Type,Ftm2clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2clksel)::Type,Ftm2clkselVal::v1> v1{};
        }
        ///FlexTimer 3 External Clock Pin Select
        enum class Ftm3clkselVal {
            v0=0x00000000,     ///<FTM3 external clock driven by FTM_CLK0 pin.
            v1=0x00000001,     ///<FTM3 external clock driven by FTM_CLK1 pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ftm3clkselVal> ftm3clksel{}; 
        namespace Ftm3clkselValC{
            constexpr Register::FieldValue<decltype(ftm3clksel)::Type,Ftm3clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3clksel)::Type,Ftm3clkselVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace SimSopt5{    ///<System Options Register 5
        using Addr = Register::Address<0x40032010,0x00000000,0x00000000,unsigned>;
        ///UART 0 transmit data source select
        enum class Uart0txsrcVal {
            v00=0x00000000,     ///<UART0_TX pin
            v01=0x00000001,     ///<UART0_TX pin modulated with FTM1 channel 0 output
            v10=0x00000002,     ///<UART0_TX pin modulated with FTM2 channel 0 output
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Uart0txsrcVal> uart0txsrc{}; 
        namespace Uart0txsrcValC{
            constexpr Register::FieldValue<decltype(uart0txsrc)::Type,Uart0txsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(uart0txsrc)::Type,Uart0txsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(uart0txsrc)::Type,Uart0txsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(uart0txsrc)::Type,Uart0txsrcVal::v11> v11{};
        }
        ///UART 0 receive data source select
        enum class Uart0rxsrcVal {
            v00=0x00000000,     ///<UART0_RX pin
            v01=0x00000001,     ///<CMP0
            v10=0x00000002,     ///<CMP1
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Uart0rxsrcVal> uart0rxsrc{}; 
        namespace Uart0rxsrcValC{
            constexpr Register::FieldValue<decltype(uart0rxsrc)::Type,Uart0rxsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(uart0rxsrc)::Type,Uart0rxsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(uart0rxsrc)::Type,Uart0rxsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(uart0rxsrc)::Type,Uart0rxsrcVal::v11> v11{};
        }
        ///UART 1 transmit data source select
        enum class Uart1txsrcVal {
            v00=0x00000000,     ///<UART1_TX pin
            v01=0x00000001,     ///<UART1_TX pin modulated with FTM1 channel 0 output
            v10=0x00000002,     ///<UART1_TX pin modulated with FTM2 channel 0 output
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Uart1txsrcVal> uart1txsrc{}; 
        namespace Uart1txsrcValC{
            constexpr Register::FieldValue<decltype(uart1txsrc)::Type,Uart1txsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(uart1txsrc)::Type,Uart1txsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(uart1txsrc)::Type,Uart1txsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(uart1txsrc)::Type,Uart1txsrcVal::v11> v11{};
        }
        ///UART 1 receive data source select
        enum class Uart1rxsrcVal {
            v00=0x00000000,     ///<UART1_RX pin
            v01=0x00000001,     ///<CMP0
            v10=0x00000002,     ///<CMP1
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Uart1rxsrcVal> uart1rxsrc{}; 
        namespace Uart1rxsrcValC{
            constexpr Register::FieldValue<decltype(uart1rxsrc)::Type,Uart1rxsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(uart1rxsrc)::Type,Uart1rxsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(uart1rxsrc)::Type,Uart1rxsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(uart1rxsrc)::Type,Uart1rxsrcVal::v11> v11{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace SimSopt6{    ///<System Options Register 6
        using Addr = Register::Address<0x40032014,0x00000000,0x00000000,unsigned>;
        ///no description available
        enum class ClkdivVal {
            v000=0x00000000,     ///<Divided by 1.
            v001=0x00000001,     ///<Divided by 2.
            v010=0x00000002,     ///<Divided by 4.
            v011=0x00000003,     ///<Divided by 8.
            v100=0x00000004,     ///<Divided by 16.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::v000> v000{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::v001> v001{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::v010> v010{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::v011> v011{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::v100> v100{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Clock source select
        enum class ClkosVal {
            v0000=0x00000000,     ///<bus_clk
            v0001=0x00000001,     ///<flash_clk
            v0010=0x00000002,     ///<ICSIRCLK
            v0011=0x00000003,     ///<ICSFFCLK
            v0100=0x00000004,     ///<ICSOUT
            v0101=0x00000005,     ///<ICSDCLK
            v0110=0x00000006,     ///<ICSLCLK
            v0111=0x00000007,     ///<OSCOUT
            v1000=0x00000008,     ///<LPOCLK
            v1001=0x00000009,     ///<flex_bus clock
            v1010=0x0000000a,     ///<platform_clk
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,ClkosVal> clkos{}; 
        namespace ClkosValC{
            constexpr Register::FieldValue<decltype(clkos)::Type,ClkosVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(clkos)::Type,ClkosVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(clkos)::Type,ClkosVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(clkos)::Type,ClkosVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(clkos)::Type,ClkosVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(clkos)::Type,ClkosVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(clkos)::Type,ClkosVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(clkos)::Type,ClkosVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(clkos)::Type,ClkosVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(clkos)::Type,ClkosVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(clkos)::Type,ClkosVal::v1010> v1010{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace SimSopt7{    ///<System Options Register 7
        using Addr = Register::Address<0x40032018,0x00000000,0x00000000,unsigned>;
        ///ADC0 trigger select
        enum class Adc0trgselVal {
            v0000=0x00000000,     ///<PDB external trigger pin input (PDB0_EXTRG)
            v0001=0x00000001,     ///<High speed comparator 0 output
            v0010=0x00000002,     ///<High speed comparator 1 output
            v0011=0x00000003,     ///<High speed comparator 2 output
            v0100=0x00000004,     ///<PIT trigger 0
            v0101=0x00000005,     ///<PIT trigger 1
            v0110=0x00000006,     ///<PIT trigger 2
            v0111=0x00000007,     ///<PIT trigger 3
            v1000=0x00000008,     ///<FTM0 trigger
            v1001=0x00000009,     ///<FTM1 trigger
            v1010=0x0000000a,     ///<FTM2 trigger
            v1011=0x0000000b,     ///<FTM3 trigger
            v1100=0x0000000c,     ///<High speed comparator 3 output
            v1101=0x0000000d,     ///<RTC interrupt
            v1110=0x0000000e,     ///<Unused
            v1111=0x0000000f,     ///<Unused
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,Adc0trgselVal> adc0trgsel{}; 
        namespace Adc0trgselValC{
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(adc0trgsel)::Type,Adc0trgselVal::v1111> v1111{};
        }
        ///ADC1 trigger select
        enum class Adc1trgselVal {
            v0000=0x00000000,     ///<PDB external trigger pin input (PDB0_EXTRG)
            v0001=0x00000001,     ///<High speed comparator 0 output
            v0010=0x00000002,     ///<High speed comparator 1 output
            v0011=0x00000003,     ///<High speed comparator 2 output
            v0100=0x00000004,     ///<PIT trigger 0
            v0101=0x00000005,     ///<PIT trigger 1
            v0110=0x00000006,     ///<PIT trigger 2
            v0111=0x00000007,     ///<PIT trigger 3
            v1000=0x00000008,     ///<FTM0 trigger
            v1001=0x00000009,     ///<FTM1 trigger
            v1010=0x0000000a,     ///<FTM2 trigger
            v1011=0x0000000b,     ///<FTM3 trigger
            v1100=0x0000000c,     ///<High speed comparator 3 output
            v1101=0x0000000d,     ///<RTC interrupt
            v1110=0x0000000e,     ///<Unused
            v1111=0x0000000f,     ///<Unused
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,Adc1trgselVal> adc1trgsel{}; 
        namespace Adc1trgselValC{
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(adc1trgsel)::Type,Adc1trgselVal::v1111> v1111{};
        }
        ///ADC2 trigger select
        enum class Adc2trgselVal {
            v0000=0x00000000,     ///<PDB external trigger pin input (PDB0_EXTRG)
            v0001=0x00000001,     ///<High speed comparator 0 output
            v0010=0x00000002,     ///<High speed comparator 1 output
            v0011=0x00000003,     ///<High speed comparator 2 output
            v0100=0x00000004,     ///<PIT trigger 0
            v0101=0x00000005,     ///<PIT trigger 1
            v0110=0x00000006,     ///<PIT trigger 2
            v0111=0x00000007,     ///<PIT trigger 3
            v1000=0x00000008,     ///<FTM0 trigger
            v1001=0x00000009,     ///<FTM1 trigger
            v1010=0x0000000a,     ///<FTM2 trigger
            v1011=0x0000000b,     ///<FTM3 trigger
            v1100=0x0000000c,     ///<High speed comparator 3 output
            v1101=0x0000000d,     ///<RTC interrupt
            v1110=0x0000000e,     ///<Unused
            v1111=0x0000000f,     ///<Unused
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,Adc2trgselVal> adc2trgsel{}; 
        namespace Adc2trgselValC{
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(adc2trgsel)::Type,Adc2trgselVal::v1111> v1111{};
        }
        ///ADC3 trigger select
        enum class Adc3trgselVal {
            v0000=0x00000000,     ///<PDB external trigger pin input (PDB0_EXTRG)
            v0001=0x00000001,     ///<High speed comparator 0 output
            v0010=0x00000002,     ///<High speed comparator 1 output
            v0011=0x00000003,     ///<High speed comparator 2 output
            v0100=0x00000004,     ///<PIT trigger 0
            v0101=0x00000005,     ///<PIT trigger 1
            v0110=0x00000006,     ///<PIT trigger 2
            v0111=0x00000007,     ///<PIT trigger 3
            v1000=0x00000008,     ///<FTM0 trigger
            v1001=0x00000009,     ///<FTM1 trigger
            v1010=0x0000000a,     ///<FTM2 trigger
            v1011=0x0000000b,     ///<FTM3 trigger
            v1100=0x0000000c,     ///<High speed comparator 3 output
            v1101=0x0000000d,     ///<RTC interrupt
            v1110=0x0000000e,     ///<Unused
            v1111=0x0000000f,     ///<Unused
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,Adc3trgselVal> adc3trgsel{}; 
        namespace Adc3trgselValC{
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(adc3trgsel)::Type,Adc3trgselVal::v1111> v1111{};
        }
        ///CMP0 windows select
        enum class Cmp0wsVal {
            v00=0x00000000,     ///<PDB0.
            v01=0x00000001,     ///<PDB1.
            v10=0x00000002,     ///<PDB2.
            v11=0x00000003,     ///<PDB3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Cmp0wsVal> cmp0ws{}; 
        namespace Cmp0wsValC{
            constexpr Register::FieldValue<decltype(cmp0ws)::Type,Cmp0wsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(cmp0ws)::Type,Cmp0wsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(cmp0ws)::Type,Cmp0wsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(cmp0ws)::Type,Cmp0wsVal::v11> v11{};
        }
        ///CMP1 windows select
        enum class Cmp1wsVal {
            v00=0x00000000,     ///<PDB0.
            v01=0x00000001,     ///<PDB1.
            v10=0x00000002,     ///<PDB2.
            v11=0x00000003,     ///<PDB3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Cmp1wsVal> cmp1ws{}; 
        namespace Cmp1wsValC{
            constexpr Register::FieldValue<decltype(cmp1ws)::Type,Cmp1wsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(cmp1ws)::Type,Cmp1wsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(cmp1ws)::Type,Cmp1wsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(cmp1ws)::Type,Cmp1wsVal::v11> v11{};
        }
        ///CMP2 windows select
        enum class Cmp2wsVal {
            v00=0x00000000,     ///<PDB0.
            v01=0x00000001,     ///<PDB1.
            v10=0x00000002,     ///<PDB2.
            v11=0x00000003,     ///<PDB3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Cmp2wsVal> cmp2ws{}; 
        namespace Cmp2wsValC{
            constexpr Register::FieldValue<decltype(cmp2ws)::Type,Cmp2wsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(cmp2ws)::Type,Cmp2wsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(cmp2ws)::Type,Cmp2wsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(cmp2ws)::Type,Cmp2wsVal::v11> v11{};
        }
        ///CMP3 windows select
        enum class Cmp3wsVal {
            v00=0x00000000,     ///<PDB0.
            v01=0x00000001,     ///<PDB1.
            v10=0x00000002,     ///<PDB2.
            v11=0x00000003,     ///<PDB3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,Cmp3wsVal> cmp3ws{}; 
        namespace Cmp3wsValC{
            constexpr Register::FieldValue<decltype(cmp3ws)::Type,Cmp3wsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(cmp3ws)::Type,Cmp3wsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(cmp3ws)::Type,Cmp3wsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(cmp3ws)::Type,Cmp3wsVal::v11> v11{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///ADC0 alternate trigger enable
        enum class Adc0alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC0.
            v1=0x00000001,     ///<Alternate trigger selected for ADC0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Adc0alttrgenVal> adc0alttrgen{}; 
        namespace Adc0alttrgenValC{
            constexpr Register::FieldValue<decltype(adc0alttrgen)::Type,Adc0alttrgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc0alttrgen)::Type,Adc0alttrgenVal::v1> v1{};
        }
        ///ADC1 alternate trigger enable
        enum class Adc1alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC1.
            v1=0x00000001,     ///<Alternate trigger selected for ADC1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Adc1alttrgenVal> adc1alttrgen{}; 
        namespace Adc1alttrgenValC{
            constexpr Register::FieldValue<decltype(adc1alttrgen)::Type,Adc1alttrgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc1alttrgen)::Type,Adc1alttrgenVal::v1> v1{};
        }
        ///ADC2 alternate trigger enable
        enum class Adc2alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC2
            v1=0x00000001,     ///<Alternate trigger selected for ADC2 as defined by ADC2TRGSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Adc2alttrgenVal> adc2alttrgen{}; 
        namespace Adc2alttrgenValC{
            constexpr Register::FieldValue<decltype(adc2alttrgen)::Type,Adc2alttrgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc2alttrgen)::Type,Adc2alttrgenVal::v1> v1{};
        }
        ///ADC3 alternate trigger enable
        enum class Adc3alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC3
            v1=0x00000001,     ///<Alternate trigger selected for ADC3 as defined by ADC3TRGSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Adc3alttrgenVal> adc3alttrgen{}; 
        namespace Adc3alttrgenValC{
            constexpr Register::FieldValue<decltype(adc3alttrgen)::Type,Adc3alttrgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc3alttrgen)::Type,Adc3alttrgenVal::v1> v1{};
        }
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x40032024,0x00000000,0x00000000,unsigned>;
        ///Pincount identification
        enum class BoidVal {
            v0000=0x00000000,     ///<Reserved
            v0001=0x00000001,     ///<Reserved
            v0010=0x00000002,     ///<Reserved
            v0011=0x00000003,     ///<Reserved
            v0100=0x00000004,     ///<44-pin
            v0101=0x00000005,     ///<64-pin
            v0110=0x00000006,     ///<80-pin
            v0111=0x00000007,     ///<Reserved
            v1000=0x00000008,     ///<100-pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BoidVal> boid{}; 
        namespace BoidValC{
            constexpr Register::FieldValue<decltype(boid)::Type,BoidVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(boid)::Type,BoidVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(boid)::Type,BoidVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(boid)::Type,BoidVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(boid)::Type,BoidVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(boid)::Type,BoidVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(boid)::Type,BoidVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(boid)::Type,BoidVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(boid)::Type,BoidVal::v1000> v1000{};
        }
        ///Device family identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dieid{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Device revision number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> revid{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace SimScgc5{    ///<System Clock Gating Control Register 5
        using Addr = Register::Address<0x40032038,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///EWM Clock Gate Control
        enum class EwmVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EwmVal> ewm{}; 
        namespace EwmValC{
            constexpr Register::FieldValue<decltype(ewm)::Type,EwmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ewm)::Type,EwmVal::v1> v1{};
        }
        ///CMT Clock Gate Control
        enum class CmtVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CmtVal> cmt{}; 
        namespace CmtValC{
            constexpr Register::FieldValue<decltype(cmt)::Type,CmtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmt)::Type,CmtVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///IIC0 Clock Gate Control
        enum class Iic0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Iic0Val> iic0{}; 
        namespace Iic0ValC{
            constexpr Register::FieldValue<decltype(iic0)::Type,Iic0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(iic0)::Type,Iic0Val::v1> v1{};
        }
        ///IIC1 Clock Gate Control
        enum class Iic1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Iic1Val> iic1{}; 
        namespace Iic1ValC{
            constexpr Register::FieldValue<decltype(iic1)::Type,Iic1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(iic1)::Type,Iic1Val::v1> v1{};
        }
        ///UART0 Clock Gate Control
        enum class Uart0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Uart0Val> uart0{}; 
        namespace Uart0ValC{
            constexpr Register::FieldValue<decltype(uart0)::Type,Uart0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart0)::Type,Uart0Val::v1> v1{};
        }
        ///UART1 Clock Gate Control
        enum class Uart1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Uart1Val> uart1{}; 
        namespace Uart1ValC{
            constexpr Register::FieldValue<decltype(uart1)::Type,Uart1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart1)::Type,Uart1Val::v1> v1{};
        }
        ///UART2 Clock Gate Control
        enum class Uart2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Uart2Val> uart2{}; 
        namespace Uart2ValC{
            constexpr Register::FieldValue<decltype(uart2)::Type,Uart2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart2)::Type,Uart2Val::v1> v1{};
        }
        ///UART3 Clock Gate Control
        enum class Uart3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Uart3Val> uart3{}; 
        namespace Uart3ValC{
            constexpr Register::FieldValue<decltype(uart3)::Type,Uart3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart3)::Type,Uart3Val::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///SPI0 Clock Gate Control
        enum class Spi0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Spi0Val> spi0{}; 
        namespace Spi0ValC{
            constexpr Register::FieldValue<decltype(spi0)::Type,Spi0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(spi0)::Type,Spi0Val::v1> v1{};
        }
        ///SPI1 Clock Gate Control
        enum class Spi1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Spi1Val> spi1{}; 
        namespace Spi1ValC{
            constexpr Register::FieldValue<decltype(spi1)::Type,Spi1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(spi1)::Type,Spi1Val::v1> v1{};
        }
        ///ACMP0 Clock Gate Control
        enum class Acmp0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Acmp0Val> acmp0{}; 
        namespace Acmp0ValC{
            constexpr Register::FieldValue<decltype(acmp0)::Type,Acmp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(acmp0)::Type,Acmp0Val::v1> v1{};
        }
        ///ACMP1 Clock Gate Control
        enum class Acmp1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Acmp1Val> acmp1{}; 
        namespace Acmp1ValC{
            constexpr Register::FieldValue<decltype(acmp1)::Type,Acmp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(acmp1)::Type,Acmp1Val::v1> v1{};
        }
        ///ACMP2 Clock Gate Control
        enum class Acmp2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Acmp2Val> acmp2{}; 
        namespace Acmp2ValC{
            constexpr Register::FieldValue<decltype(acmp2)::Type,Acmp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(acmp2)::Type,Acmp2Val::v1> v1{};
        }
        ///ACMP3 Clock Gate Control
        enum class Acmp3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Acmp3Val> acmp3{}; 
        namespace Acmp3ValC{
            constexpr Register::FieldValue<decltype(acmp3)::Type,Acmp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(acmp3)::Type,Acmp3Val::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace SimScgc6{    ///<System Clock Gating Control Register 6
        using Addr = Register::Address<0x4003203c,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///DMAMUX Clock Gate Control
        enum class DmamuxVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DmamuxVal> dmamux{}; 
        namespace DmamuxValC{
            constexpr Register::FieldValue<decltype(dmamux)::Type,DmamuxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmamux)::Type,DmamuxVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///PIT Clock Gate Control
        enum class PitVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PitVal> pit{}; 
        namespace PitValC{
            constexpr Register::FieldValue<decltype(pit)::Type,PitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pit)::Type,PitVal::v1> v1{};
        }
        ///CRC Clock Gate Control
        enum class CrcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CrcVal> crc{}; 
        namespace CrcValC{
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::v1> v1{};
        }
        ///PDB0 Clock Gate Control
        enum class Pdb0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pdb0Val> pdb0{}; 
        namespace Pdb0ValC{
            constexpr Register::FieldValue<decltype(pdb0)::Type,Pdb0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pdb0)::Type,Pdb0Val::v1> v1{};
        }
        ///PDB1 Clock Gate Control
        enum class Pdb1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pdb1Val> pdb1{}; 
        namespace Pdb1ValC{
            constexpr Register::FieldValue<decltype(pdb1)::Type,Pdb1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pdb1)::Type,Pdb1Val::v1> v1{};
        }
        ///PDB2 Clock Gate Control
        enum class Pdb2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pdb2Val> pdb2{}; 
        namespace Pdb2ValC{
            constexpr Register::FieldValue<decltype(pdb2)::Type,Pdb2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pdb2)::Type,Pdb2Val::v1> v1{};
        }
        ///PDB3 Clock Gate Control
        enum class Pdb3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Pdb3Val> pdb3{}; 
        namespace Pdb3ValC{
            constexpr Register::FieldValue<decltype(pdb3)::Type,Pdb3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pdb3)::Type,Pdb3Val::v1> v1{};
        }
        ///FTM0 Clock Gate Control
        enum class Ftm0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ftm0Val> ftm0{}; 
        namespace Ftm0ValC{
            constexpr Register::FieldValue<decltype(ftm0)::Type,Ftm0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm0)::Type,Ftm0Val::v1> v1{};
        }
        ///FTM1 Clock Gate Control
        enum class Ftm1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ftm1Val> ftm1{}; 
        namespace Ftm1ValC{
            constexpr Register::FieldValue<decltype(ftm1)::Type,Ftm1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm1)::Type,Ftm1Val::v1> v1{};
        }
        ///FTM2 Clock Gate Control
        enum class Ftm2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ftm2Val> ftm2{}; 
        namespace Ftm2ValC{
            constexpr Register::FieldValue<decltype(ftm2)::Type,Ftm2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm2)::Type,Ftm2Val::v1> v1{};
        }
        ///FTM3 Clock Gate Control
        enum class Ftm3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ftm3Val> ftm3{}; 
        namespace Ftm3ValC{
            constexpr Register::FieldValue<decltype(ftm3)::Type,Ftm3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ftm3)::Type,Ftm3Val::v1> v1{};
        }
        ///RTC Clock Gate Control
        enum class RtcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,RtcVal> rtc{}; 
        namespace RtcValC{
            constexpr Register::FieldValue<decltype(rtc)::Type,RtcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rtc)::Type,RtcVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///TSI Clock Gate Control
        enum class TsiVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TsiVal> tsi{}; 
        namespace TsiValC{
            constexpr Register::FieldValue<decltype(tsi)::Type,TsiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsi)::Type,TsiVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Port A Clock Gate Control
        enum class PortaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,PortaVal> porta{}; 
        namespace PortaValC{
            constexpr Register::FieldValue<decltype(porta)::Type,PortaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(porta)::Type,PortaVal::v1> v1{};
        }
        ///Port B Clock Gate Control
        enum class PortbVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,PortbVal> portb{}; 
        namespace PortbValC{
            constexpr Register::FieldValue<decltype(portb)::Type,PortbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portb)::Type,PortbVal::v1> v1{};
        }
        ///Port C Clock Gate Control
        enum class PortcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,PortcVal> portc{}; 
        namespace PortcValC{
            constexpr Register::FieldValue<decltype(portc)::Type,PortcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portc)::Type,PortcVal::v1> v1{};
        }
        ///Port D Clock Gate Control
        enum class PortdVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,PortdVal> portd{}; 
        namespace PortdValC{
            constexpr Register::FieldValue<decltype(portd)::Type,PortdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portd)::Type,PortdVal::v1> v1{};
        }
        ///Port E Clock Gate Control
        enum class PorteVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,PorteVal> porte{}; 
        namespace PorteValC{
            constexpr Register::FieldValue<decltype(porte)::Type,PorteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(porte)::Type,PorteVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///ADC0 Clock Gate Control
        enum class Adc0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Adc0Val> adc0{}; 
        namespace Adc0ValC{
            constexpr Register::FieldValue<decltype(adc0)::Type,Adc0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adc0)::Type,Adc0Val::v1> v1{};
        }
        ///ADC1 Clock Gate Control
        enum class Adc1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Adc1Val> adc1{}; 
        namespace Adc1ValC{
            constexpr Register::FieldValue<decltype(adc1)::Type,Adc1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adc1)::Type,Adc1Val::v1> v1{};
        }
        ///ADC2 Clock Gate Control
        enum class Adc2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Adc2Val> adc2{}; 
        namespace Adc2ValC{
            constexpr Register::FieldValue<decltype(adc2)::Type,Adc2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adc2)::Type,Adc2Val::v1> v1{};
        }
        ///ADC3 Clock Gate Control
        enum class Adc3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Adc3Val> adc3{}; 
        namespace Adc3ValC{
            constexpr Register::FieldValue<decltype(adc3)::Type,Adc3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adc3)::Type,Adc3Val::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace SimScgc7{    ///<System Clock Gating Control Register 7
        using Addr = Register::Address<0x40032040,0x00000000,0x00000000,unsigned>;
        ///FlexBus Clock Gate Control
        enum class FlexbusVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FlexbusVal> flexbus{}; 
        namespace FlexbusValC{
            constexpr Register::FieldValue<decltype(flexbus)::Type,FlexbusVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flexbus)::Type,FlexbusVal::v1> v1{};
        }
        ///DMA Clock Gate Control
        enum class DmaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DmaVal> dma{}; 
        namespace DmaValC{
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::v1> v1{};
        }
        ///MPU Clock Gate Control
        enum class MpuVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,MpuVal> mpu{}; 
        namespace MpuValC{
            constexpr Register::FieldValue<decltype(mpu)::Type,MpuVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mpu)::Type,MpuVal::v1> v1{};
        }
        ///IEVT Clock Gate Control
        enum class IevtVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,IevtVal> ievt{}; 
        namespace IevtValC{
            constexpr Register::FieldValue<decltype(ievt)::Type,IevtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ievt)::Type,IevtVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace SimClkdiv1{    ///<System Clock Divider Register 1
        using Addr = Register::Address<0x40032044,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Clock 5 output divider value
        enum class Outdiv5Val {
            v00=0x00000000,     ///<ICSOUT divided by 1.
            v01=0x00000001,     ///<ICSOUT divided by 2.
            v10=0x00000002,     ///<Reserved.
            v11=0x00000003,     ///<ICSOUT divided by 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Outdiv5Val> outdiv5{}; 
        namespace Outdiv5ValC{
            constexpr Register::FieldValue<decltype(outdiv5)::Type,Outdiv5Val::v00> v00{};
            constexpr Register::FieldValue<decltype(outdiv5)::Type,Outdiv5Val::v01> v01{};
            constexpr Register::FieldValue<decltype(outdiv5)::Type,Outdiv5Val::v10> v10{};
            constexpr Register::FieldValue<decltype(outdiv5)::Type,Outdiv5Val::v11> v11{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Clock 4 output divider value
        enum class Outdiv4Val {
            v00=0x00000000,     ///<ICSOUT divided by 2.
            v01=0x00000001,     ///<ICSOUT divided by 4.
            v10=0x00000002,     ///<Reserved.
            v11=0x00000003,     ///<ICSOUT divided by 8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Outdiv4Val> outdiv4{}; 
        namespace Outdiv4ValC{
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v00> v00{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v01> v01{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v10> v10{};
            constexpr Register::FieldValue<decltype(outdiv4)::Type,Outdiv4Val::v11> v11{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Clock 3 output divider value
        enum class Outdiv3Val {
            v00=0x00000000,     ///<ICSOUT divided by 4, it is valid only when Maxclk = 36 MHz.
            v01=0x00000001,     ///<ICSOUT divided by 8.
            v10=0x00000002,     ///<Reserved.
            v11=0x00000003,     ///<ICSOUT divided by 16, it is valid only when Maxclk = 36 MHz.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Outdiv3Val> outdiv3{}; 
        namespace Outdiv3ValC{
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v00> v00{};
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v01> v01{};
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v10> v10{};
            constexpr Register::FieldValue<decltype(outdiv3)::Type,Outdiv3Val::v11> v11{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Clock 2 output divider value
        enum class Outdiv2Val {
            v00=0x00000000,     ///<ICSOUT divided by 2.
            v01=0x00000001,     ///<ICSOUT divided by 4.
            v10=0x00000002,     ///<Reserved.
            v11=0x00000003,     ///<ICSOUT divided by 8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Outdiv2Val> outdiv2{}; 
        namespace Outdiv2ValC{
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v00> v00{};
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v01> v01{};
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v10> v10{};
            constexpr Register::FieldValue<decltype(outdiv2)::Type,Outdiv2Val::v11> v11{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Clock 1 output divider value
        enum class Outdiv1Val {
            v00=0x00000000,     ///<ICSOUT Divided by 1.
            v01=0x00000001,     ///<ICSOUT Divided by 2.
            v10=0x00000002,     ///<Reserved.
            v11=0x00000003,     ///<ICSOUT Divided by 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,Outdiv1Val> outdiv1{}; 
        namespace Outdiv1ValC{
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v10> v10{};
            constexpr Register::FieldValue<decltype(outdiv1)::Type,Outdiv1Val::v11> v11{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace SimUidh{    ///<Unique Identification Register High
        using Addr = Register::Address<0x40032054,0x00000000,0x00000000,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uid{}; 
    }
    namespace SimUidmh{    ///<Unique Identification Register Mid-High
        using Addr = Register::Address<0x40032058,0x00000000,0x00000000,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uid{}; 
    }
    namespace SimUidml{    ///<Unique Identification Register Mid Low
        using Addr = Register::Address<0x4003205c,0x00000000,0x00000000,unsigned>;
        ///Unique Identification (bits [63:32]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uid{}; 
    }
    namespace SimUidl{    ///<Unique Identification Register Low
        using Addr = Register::Address<0x40032060,0x00000000,0x00000000,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uid{}; 
    }
}
