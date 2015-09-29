#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSopt2{    ///<System Options Register 2
        using Addr = Register::Address<0x40032004,0xc3d8000c,0,unsigned>;
        ///no description available
        enum class fllenstop4Val {
            v0=0x00000000,     ///<FLL is disabled in STOP4 mode.
            v1=0x00000001,     ///<FLL is enbled in STOP4 mode.
        };
        namespace fllenstop4ValC{
            constexpr MPL::Value<fllenstop4Val,fllenstop4Val::v0> v0{};
            constexpr MPL::Value<fllenstop4Val,fllenstop4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,fllenstop4Val> fllenstop4{}; 
        ///no description available
        enum class resetifeVal {
            v0=0x00000000,     ///<Filter of Reset pad is disabled.
            v1=0x00000001,     ///<Filter of Reset pad is enabled.
        };
        namespace resetifeValC{
            constexpr MPL::Value<resetifeVal,resetifeVal::v0> v0{};
            constexpr MPL::Value<resetifeVal,resetifeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,resetifeVal> resetife{}; 
        ///no description available
        enum class obepadsela13Val {
            v00=0x00000000,     ///<5 mA drive strength for pad PTA13.
            v01=0x00000001,     ///<5 mA drive strength for pad PTA13.
            v10=0x00000002,     ///<15 mA drive strength for pad PTA13.
            v11=0x00000003,     ///<20 mA drive strength for pad PTA13.
        };
        namespace obepadsela13ValC{
            constexpr MPL::Value<obepadsela13Val,obepadsela13Val::v00> v00{};
            constexpr MPL::Value<obepadsela13Val,obepadsela13Val::v01> v01{};
            constexpr MPL::Value<obepadsela13Val,obepadsela13Val::v10> v10{};
            constexpr MPL::Value<obepadsela13Val,obepadsela13Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,obepadsela13Val> obepadsela13{}; 
        ///no description available
        enum class obepadsela12Val {
            v00=0x00000000,     ///<5 mA drive strength for pad PTA12.
            v01=0x00000001,     ///<5 mA drive strength for pad PTA12.
            v10=0x00000002,     ///<15 mA drive strength for pad PTA12.
            v11=0x00000003,     ///<20 mA drive strength for pad PTA12.
        };
        namespace obepadsela12ValC{
            constexpr MPL::Value<obepadsela12Val,obepadsela12Val::v00> v00{};
            constexpr MPL::Value<obepadsela12Val,obepadsela12Val::v01> v01{};
            constexpr MPL::Value<obepadsela12Val,obepadsela12Val::v10> v10{};
            constexpr MPL::Value<obepadsela12Val,obepadsela12Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,obepadsela12Val> obepadsela12{}; 
        ///no description available
        enum class obepadsela3Val {
            v00=0x00000000,     ///<5 mA drive strength for pad PTA3.
            v01=0x00000001,     ///<5 mA drive strength for pad PTA3.
            v10=0x00000002,     ///<15 mA drive strength for pad PTA3.
            v11=0x00000003,     ///<20 mA drive strength for pad PTA3.
        };
        namespace obepadsela3ValC{
            constexpr MPL::Value<obepadsela3Val,obepadsela3Val::v00> v00{};
            constexpr MPL::Value<obepadsela3Val,obepadsela3Val::v01> v01{};
            constexpr MPL::Value<obepadsela3Val,obepadsela3Val::v10> v10{};
            constexpr MPL::Value<obepadsela3Val,obepadsela3Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,obepadsela3Val> obepadsela3{}; 
        ///no description available
        enum class obepadsela2Val {
            v00=0x00000000,     ///<5 mA drive strength for pad PTA2.
            v01=0x00000001,     ///<5 mA drive strength for pad PTA2.
            v10=0x00000002,     ///<15 mA drive strength for pad PTA2.
            v11=0x00000003,     ///<20 mA drive strength for pad PTA2.
        };
        namespace obepadsela2ValC{
            constexpr MPL::Value<obepadsela2Val,obepadsela2Val::v00> v00{};
            constexpr MPL::Value<obepadsela2Val,obepadsela2Val::v01> v01{};
            constexpr MPL::Value<obepadsela2Val,obepadsela2Val::v10> v10{};
            constexpr MPL::Value<obepadsela2Val,obepadsela2Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,obepadsela2Val> obepadsela2{}; 
        ///no description available
        enum class obepadsele1Val {
            v00=0x00000000,     ///<5 mA drive strength for pad PTE1.
            v01=0x00000001,     ///<5 mA drive strength for pad PTE1.
            v10=0x00000002,     ///<15 mA drive strength for pad PTE1.
            v11=0x00000003,     ///<20 mA drive strength for pad PTE1.
        };
        namespace obepadsele1ValC{
            constexpr MPL::Value<obepadsele1Val,obepadsele1Val::v00> v00{};
            constexpr MPL::Value<obepadsele1Val,obepadsele1Val::v01> v01{};
            constexpr MPL::Value<obepadsele1Val,obepadsele1Val::v10> v10{};
            constexpr MPL::Value<obepadsele1Val,obepadsele1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,obepadsele1Val> obepadsele1{}; 
        ///no description available
        enum class obepadsele0Val {
            v00=0x00000000,     ///<5 mA drive strength for pad PTE0.
            v01=0x00000001,     ///<5 mA drive strength for pad PTE0.
            v10=0x00000002,     ///<15 mA drive strength for pad PTE0.
            v11=0x00000003,     ///<20 mA drive strength for pad PTE0.
        };
        namespace obepadsele0ValC{
            constexpr MPL::Value<obepadsele0Val,obepadsele0Val::v00> v00{};
            constexpr MPL::Value<obepadsele0Val,obepadsele0Val::v01> v01{};
            constexpr MPL::Value<obepadsele0Val,obepadsele0Val::v10> v10{};
            constexpr MPL::Value<obepadsele0Val,obepadsele0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,obepadsele0Val> obepadsele0{}; 
        ///FlexBus security level
        enum class fbslVal {
            v00=0x00000000,     ///<All off-chip accesses (instruction and data) via the FlexBus are disallowed.
            v01=0x00000001,     ///<All off-chip accesses (instruction and data) via the FlexBus are disallowed.
            v10=0x00000002,     ///<Off-chip instruction accesses are disallowed. Data accesses are allowed.
            v11=0x00000003,     ///<Off-chip instruction accesses and data accesses are allowed.
        };
        namespace fbslValC{
            constexpr MPL::Value<fbslVal,fbslVal::v00> v00{};
            constexpr MPL::Value<fbslVal,fbslVal::v01> v01{};
            constexpr MPL::Value<fbslVal,fbslVal::v10> v10{};
            constexpr MPL::Value<fbslVal,fbslVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,fbslVal> fbsl{}; 
        ///Debug trace clock select
        enum class traceclkselVal {
            v0=0x00000000,     ///<ICSOUTCLK
            v1=0x00000001,     ///<Core/system clock
        };
        namespace traceclkselValC{
            constexpr MPL::Value<traceclkselVal,traceclkselVal::v0> v0{};
            constexpr MPL::Value<traceclkselVal,traceclkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,traceclkselVal> traceclksel{}; 
        ///The RAM size in the device.
        enum class ramsizeVal {
            v0=0x00000000,     ///<RAM size is 16 KB in the device. ( 8 KB Upper SRAM. 8 KB Lower SRAM).
            v1=0x00000001,     ///<RAM size is 24 KB in the device. (16 KB Upper SRAM. 8 KB Lower SRAM).
        };
        namespace ramsizeValC{
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v0> v0{};
            constexpr MPL::Value<ramsizeVal,ramsizeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ramsizeVal> ramsize{}; 
        ///The flash size of the device.
        enum class fsizeVal {
            v00=0x00000000,     ///<128 KB
            v01=0x00000001,     ///<192 KB
            v10=0x00000002,     ///<256 KB
            v11=0x00000003,     ///<256KB
        };
        namespace fsizeValC{
            constexpr MPL::Value<fsizeVal,fsizeVal::v00> v00{};
            constexpr MPL::Value<fsizeVal,fsizeVal::v01> v01{};
            constexpr MPL::Value<fsizeVal,fsizeVal::v10> v10{};
            constexpr MPL::Value<fsizeVal,fsizeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,fsizeVal> fsize{}; 
        ///no description available
        enum class tsienVal {
            v0=0x00000000,     ///<TSI is not available in the device.
            v1=0x00000001,     ///<TSI is available in the device.
        };
        namespace tsienValC{
            constexpr MPL::Value<tsienVal,tsienVal::v0> v0{};
            constexpr MPL::Value<tsienVal,tsienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,tsienVal> tsien{}; 
        ///no description available
        enum class maxclkVal {
            v0=0x00000000,     ///<Maximum clock in the system is 36 MHz
            v1=0x00000001,     ///<Maximum clock in the system is 72 MHz.
        };
        namespace maxclkValC{
            constexpr MPL::Value<maxclkVal,maxclkVal::v0> v0{};
            constexpr MPL::Value<maxclkVal,maxclkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,maxclkVal> maxclk{}; 
    }
    namespace SimSopt3{    ///<System Options Register 3
        using Addr = Register::Address<0x40032008,0xfff00000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ftm0Pdb{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ftm1Pdb{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> ftm2Pdb{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ftm3Pdb{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ftmSync0{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ftmSync1{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ftmSync2{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ftmSync3{}; 
    }
    namespace SimSopt4{    ///<System Options Register 4
        using Addr = Register::Address<0x4003200c,0xf00f0ff0,0,unsigned>;
        ///FTM0 Fault 0 Select
        enum class ftm0flt0Val {
            v0=0x00000000,     ///<FTM0_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        namespace ftm0flt0ValC{
            constexpr MPL::Value<ftm0flt0Val,ftm0flt0Val::v0> v0{};
            constexpr MPL::Value<ftm0flt0Val,ftm0flt0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ftm0flt0Val> ftm0flt0{}; 
        ///FTM0 Fault 1 Select
        enum class ftm0flt1Val {
            v0=0x00000000,     ///<FTM0_FLT1 pin
            v1=0x00000001,     ///<CMP1 out
        };
        namespace ftm0flt1ValC{
            constexpr MPL::Value<ftm0flt1Val,ftm0flt1Val::v0> v0{};
            constexpr MPL::Value<ftm0flt1Val,ftm0flt1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ftm0flt1Val> ftm0flt1{}; 
        ///FTM0 Fault 2 Select
        enum class ftm0flt2Val {
            v0=0x00000000,     ///<FTM0_FLT2 pin
            v1=0x00000001,     ///<CMP2 out
        };
        namespace ftm0flt2ValC{
            constexpr MPL::Value<ftm0flt2Val,ftm0flt2Val::v0> v0{};
            constexpr MPL::Value<ftm0flt2Val,ftm0flt2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ftm0flt2Val> ftm0flt2{}; 
        ///FTM0 Fault 3 Select
        enum class ftm0flt3Val {
            v0=0x00000000,     ///<FTM0_FLT3 pin
            v1=0x00000001,     ///<CMP3 out
        };
        namespace ftm0flt3ValC{
            constexpr MPL::Value<ftm0flt3Val,ftm0flt3Val::v0> v0{};
            constexpr MPL::Value<ftm0flt3Val,ftm0flt3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ftm0flt3Val> ftm0flt3{}; 
        ///FTM3 Fault 0 Select
        enum class ftm3flt0Val {
            v0=0x00000000,     ///<FTM3_FLT0 pin
            v1=0x00000001,     ///<CMP0 out
        };
        namespace ftm3flt0ValC{
            constexpr MPL::Value<ftm3flt0Val,ftm3flt0Val::v0> v0{};
            constexpr MPL::Value<ftm3flt0Val,ftm3flt0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ftm3flt0Val> ftm3flt0{}; 
        ///FTM3 Fault 1 Select
        enum class ftm3flt1Val {
            v0=0x00000000,     ///<FTM3_FLT1 pin
            v1=0x00000001,     ///<CMP1 out
        };
        namespace ftm3flt1ValC{
            constexpr MPL::Value<ftm3flt1Val,ftm3flt1Val::v0> v0{};
            constexpr MPL::Value<ftm3flt1Val,ftm3flt1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ftm3flt1Val> ftm3flt1{}; 
        ///FTM3 Fault 2 Select
        enum class ftm3flt2Val {
            v0=0x00000000,     ///<FTM3_FLT2 pin
            v1=0x00000001,     ///<CMP2 out
        };
        namespace ftm3flt2ValC{
            constexpr MPL::Value<ftm3flt2Val,ftm3flt2Val::v0> v0{};
            constexpr MPL::Value<ftm3flt2Val,ftm3flt2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ftm3flt2Val> ftm3flt2{}; 
        ///FTM3 Fault 3 Select
        enum class ftm3flt3Val {
            v0=0x00000000,     ///<FTM3_FLT3 pin
            v1=0x00000001,     ///<CMP3 out
        };
        namespace ftm3flt3ValC{
            constexpr MPL::Value<ftm3flt3Val,ftm3flt3Val::v0> v0{};
            constexpr MPL::Value<ftm3flt3Val,ftm3flt3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ftm3flt3Val> ftm3flt3{}; 
        ///FTM1 channel 0 input capture source select
        enum class ftm1ch0srcVal {
            v00=0x00000000,     ///<FTM1_CH0 signal
            v01=0x00000001,     ///<CMP0 output
            v10=0x00000002,     ///<CMP1 output
            v11=0x00000003,     ///<CMP2 output
        };
        namespace ftm1ch0srcValC{
            constexpr MPL::Value<ftm1ch0srcVal,ftm1ch0srcVal::v00> v00{};
            constexpr MPL::Value<ftm1ch0srcVal,ftm1ch0srcVal::v01> v01{};
            constexpr MPL::Value<ftm1ch0srcVal,ftm1ch0srcVal::v10> v10{};
            constexpr MPL::Value<ftm1ch0srcVal,ftm1ch0srcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,ftm1ch0srcVal> ftm1ch0src{}; 
        ///FTM2 channel 0 input capture source select
        enum class ftm2ch0srcVal {
            v00=0x00000000,     ///<FTM2_CH0 signal
            v01=0x00000001,     ///<CMP1 output
            v10=0x00000002,     ///<CMP2 output
            v11=0x00000003,     ///<CMP3 output
        };
        namespace ftm2ch0srcValC{
            constexpr MPL::Value<ftm2ch0srcVal,ftm2ch0srcVal::v00> v00{};
            constexpr MPL::Value<ftm2ch0srcVal,ftm2ch0srcVal::v01> v01{};
            constexpr MPL::Value<ftm2ch0srcVal,ftm2ch0srcVal::v10> v10{};
            constexpr MPL::Value<ftm2ch0srcVal,ftm2ch0srcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,ftm2ch0srcVal> ftm2ch0src{}; 
        ///FlexTimer 0 External Clock Pin Select
        enum class ftm0clkselVal {
            v0=0x00000000,     ///<FTM_CLK0 pin
            v1=0x00000001,     ///<FTM_CLK1 pin
        };
        namespace ftm0clkselValC{
            constexpr MPL::Value<ftm0clkselVal,ftm0clkselVal::v0> v0{};
            constexpr MPL::Value<ftm0clkselVal,ftm0clkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ftm0clkselVal> ftm0clksel{}; 
        ///FTM1 External Clock Pin Select
        enum class ftm1clkselVal {
            v0=0x00000000,     ///<FTM_CLK0 pin
            v1=0x00000001,     ///<FTM_CLK1 pin
        };
        namespace ftm1clkselValC{
            constexpr MPL::Value<ftm1clkselVal,ftm1clkselVal::v0> v0{};
            constexpr MPL::Value<ftm1clkselVal,ftm1clkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ftm1clkselVal> ftm1clksel{}; 
        ///FlexTimer 2 External Clock Pin Select
        enum class ftm2clkselVal {
            v0=0x00000000,     ///<FTM2 external clock driven by FTM_CLK0 pin.
            v1=0x00000001,     ///<FTM2 external clock driven by FTM_CLK1 pin.
        };
        namespace ftm2clkselValC{
            constexpr MPL::Value<ftm2clkselVal,ftm2clkselVal::v0> v0{};
            constexpr MPL::Value<ftm2clkselVal,ftm2clkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ftm2clkselVal> ftm2clksel{}; 
        ///FlexTimer 3 External Clock Pin Select
        enum class ftm3clkselVal {
            v0=0x00000000,     ///<FTM3 external clock driven by FTM_CLK0 pin.
            v1=0x00000001,     ///<FTM3 external clock driven by FTM_CLK1 pin.
        };
        namespace ftm3clkselValC{
            constexpr MPL::Value<ftm3clkselVal,ftm3clkselVal::v0> v0{};
            constexpr MPL::Value<ftm3clkselVal,ftm3clkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ftm3clkselVal> ftm3clksel{}; 
    }
    namespace SimSopt5{    ///<System Options Register 5
        using Addr = Register::Address<0x40032010,0xffffff00,0,unsigned>;
        ///UART 0 transmit data source select
        enum class uart0txsrcVal {
            v00=0x00000000,     ///<UART0_TX pin
            v01=0x00000001,     ///<UART0_TX pin modulated with FTM1 channel 0 output
            v10=0x00000002,     ///<UART0_TX pin modulated with FTM2 channel 0 output
            v11=0x00000003,     ///<Reserved
        };
        namespace uart0txsrcValC{
            constexpr MPL::Value<uart0txsrcVal,uart0txsrcVal::v00> v00{};
            constexpr MPL::Value<uart0txsrcVal,uart0txsrcVal::v01> v01{};
            constexpr MPL::Value<uart0txsrcVal,uart0txsrcVal::v10> v10{};
            constexpr MPL::Value<uart0txsrcVal,uart0txsrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,uart0txsrcVal> uart0txsrc{}; 
        ///UART 0 receive data source select
        enum class uart0rxsrcVal {
            v00=0x00000000,     ///<UART0_RX pin
            v01=0x00000001,     ///<CMP0
            v10=0x00000002,     ///<CMP1
            v11=0x00000003,     ///<Reserved
        };
        namespace uart0rxsrcValC{
            constexpr MPL::Value<uart0rxsrcVal,uart0rxsrcVal::v00> v00{};
            constexpr MPL::Value<uart0rxsrcVal,uart0rxsrcVal::v01> v01{};
            constexpr MPL::Value<uart0rxsrcVal,uart0rxsrcVal::v10> v10{};
            constexpr MPL::Value<uart0rxsrcVal,uart0rxsrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,uart0rxsrcVal> uart0rxsrc{}; 
        ///UART 1 transmit data source select
        enum class uart1txsrcVal {
            v00=0x00000000,     ///<UART1_TX pin
            v01=0x00000001,     ///<UART1_TX pin modulated with FTM1 channel 0 output
            v10=0x00000002,     ///<UART1_TX pin modulated with FTM2 channel 0 output
            v11=0x00000003,     ///<Reserved
        };
        namespace uart1txsrcValC{
            constexpr MPL::Value<uart1txsrcVal,uart1txsrcVal::v00> v00{};
            constexpr MPL::Value<uart1txsrcVal,uart1txsrcVal::v01> v01{};
            constexpr MPL::Value<uart1txsrcVal,uart1txsrcVal::v10> v10{};
            constexpr MPL::Value<uart1txsrcVal,uart1txsrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,uart1txsrcVal> uart1txsrc{}; 
        ///UART 1 receive data source select
        enum class uart1rxsrcVal {
            v00=0x00000000,     ///<UART1_RX pin
            v01=0x00000001,     ///<CMP0
            v10=0x00000002,     ///<CMP1
            v11=0x00000003,     ///<Reserved
        };
        namespace uart1rxsrcValC{
            constexpr MPL::Value<uart1rxsrcVal,uart1rxsrcVal::v00> v00{};
            constexpr MPL::Value<uart1rxsrcVal,uart1rxsrcVal::v01> v01{};
            constexpr MPL::Value<uart1rxsrcVal,uart1rxsrcVal::v10> v10{};
            constexpr MPL::Value<uart1rxsrcVal,uart1rxsrcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,uart1rxsrcVal> uart1rxsrc{}; 
    }
    namespace SimSopt6{    ///<System Options Register 6
        using Addr = Register::Address<0x40032014,0xffffff08,0,unsigned>;
        ///no description available
        enum class clkdivVal {
            v000=0x00000000,     ///<Divided by 1.
            v001=0x00000001,     ///<Divided by 2.
            v010=0x00000002,     ///<Divided by 4.
            v011=0x00000003,     ///<Divided by 8.
            v100=0x00000004,     ///<Divided by 16.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::v000> v000{};
            constexpr MPL::Value<clkdivVal,clkdivVal::v001> v001{};
            constexpr MPL::Value<clkdivVal,clkdivVal::v010> v010{};
            constexpr MPL::Value<clkdivVal,clkdivVal::v011> v011{};
            constexpr MPL::Value<clkdivVal,clkdivVal::v100> v100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
        ///Clock source select
        enum class clkosVal {
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
        namespace clkosValC{
            constexpr MPL::Value<clkosVal,clkosVal::v0000> v0000{};
            constexpr MPL::Value<clkosVal,clkosVal::v0001> v0001{};
            constexpr MPL::Value<clkosVal,clkosVal::v0010> v0010{};
            constexpr MPL::Value<clkosVal,clkosVal::v0011> v0011{};
            constexpr MPL::Value<clkosVal,clkosVal::v0100> v0100{};
            constexpr MPL::Value<clkosVal,clkosVal::v0101> v0101{};
            constexpr MPL::Value<clkosVal,clkosVal::v0110> v0110{};
            constexpr MPL::Value<clkosVal,clkosVal::v0111> v0111{};
            constexpr MPL::Value<clkosVal,clkosVal::v1000> v1000{};
            constexpr MPL::Value<clkosVal,clkosVal::v1001> v1001{};
            constexpr MPL::Value<clkosVal,clkosVal::v1010> v1010{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,clkosVal> clkos{}; 
    }
    namespace SimSopt7{    ///<System Options Register 7
        using Addr = Register::Address<0x40032018,0x0f000000,0,unsigned>;
        ///ADC0 trigger select
        enum class adc0trgselVal {
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
        namespace adc0trgselValC{
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0000> v0000{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0001> v0001{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0010> v0010{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0011> v0011{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0100> v0100{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0101> v0101{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0110> v0110{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v0111> v0111{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1000> v1000{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1001> v1001{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1010> v1010{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1011> v1011{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1100> v1100{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1101> v1101{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1110> v1110{};
            constexpr MPL::Value<adc0trgselVal,adc0trgselVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,adc0trgselVal> adc0trgsel{}; 
        ///ADC1 trigger select
        enum class adc1trgselVal {
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
        namespace adc1trgselValC{
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0000> v0000{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0001> v0001{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0010> v0010{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0011> v0011{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0100> v0100{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0101> v0101{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0110> v0110{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v0111> v0111{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1000> v1000{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1001> v1001{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1010> v1010{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1011> v1011{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1100> v1100{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1101> v1101{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1110> v1110{};
            constexpr MPL::Value<adc1trgselVal,adc1trgselVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,adc1trgselVal> adc1trgsel{}; 
        ///ADC2 trigger select
        enum class adc2trgselVal {
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
        namespace adc2trgselValC{
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v0000> v0000{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v0001> v0001{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v0010> v0010{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v0011> v0011{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v0100> v0100{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v0101> v0101{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v0110> v0110{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v0111> v0111{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v1000> v1000{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v1001> v1001{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v1010> v1010{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v1011> v1011{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v1100> v1100{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v1101> v1101{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v1110> v1110{};
            constexpr MPL::Value<adc2trgselVal,adc2trgselVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,adc2trgselVal> adc2trgsel{}; 
        ///ADC3 trigger select
        enum class adc3trgselVal {
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
        namespace adc3trgselValC{
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v0000> v0000{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v0001> v0001{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v0010> v0010{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v0011> v0011{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v0100> v0100{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v0101> v0101{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v0110> v0110{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v0111> v0111{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v1000> v1000{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v1001> v1001{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v1010> v1010{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v1011> v1011{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v1100> v1100{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v1101> v1101{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v1110> v1110{};
            constexpr MPL::Value<adc3trgselVal,adc3trgselVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,adc3trgselVal> adc3trgsel{}; 
        ///CMP0 windows select
        enum class cmp0wsVal {
            v00=0x00000000,     ///<PDB0.
            v01=0x00000001,     ///<PDB1.
            v10=0x00000002,     ///<PDB2.
            v11=0x00000003,     ///<PDB3.
        };
        namespace cmp0wsValC{
            constexpr MPL::Value<cmp0wsVal,cmp0wsVal::v00> v00{};
            constexpr MPL::Value<cmp0wsVal,cmp0wsVal::v01> v01{};
            constexpr MPL::Value<cmp0wsVal,cmp0wsVal::v10> v10{};
            constexpr MPL::Value<cmp0wsVal,cmp0wsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,cmp0wsVal> cmp0ws{}; 
        ///CMP1 windows select
        enum class cmp1wsVal {
            v00=0x00000000,     ///<PDB0.
            v01=0x00000001,     ///<PDB1.
            v10=0x00000002,     ///<PDB2.
            v11=0x00000003,     ///<PDB3.
        };
        namespace cmp1wsValC{
            constexpr MPL::Value<cmp1wsVal,cmp1wsVal::v00> v00{};
            constexpr MPL::Value<cmp1wsVal,cmp1wsVal::v01> v01{};
            constexpr MPL::Value<cmp1wsVal,cmp1wsVal::v10> v10{};
            constexpr MPL::Value<cmp1wsVal,cmp1wsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,cmp1wsVal> cmp1ws{}; 
        ///CMP2 windows select
        enum class cmp2wsVal {
            v00=0x00000000,     ///<PDB0.
            v01=0x00000001,     ///<PDB1.
            v10=0x00000002,     ///<PDB2.
            v11=0x00000003,     ///<PDB3.
        };
        namespace cmp2wsValC{
            constexpr MPL::Value<cmp2wsVal,cmp2wsVal::v00> v00{};
            constexpr MPL::Value<cmp2wsVal,cmp2wsVal::v01> v01{};
            constexpr MPL::Value<cmp2wsVal,cmp2wsVal::v10> v10{};
            constexpr MPL::Value<cmp2wsVal,cmp2wsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,cmp2wsVal> cmp2ws{}; 
        ///CMP3 windows select
        enum class cmp3wsVal {
            v00=0x00000000,     ///<PDB0.
            v01=0x00000001,     ///<PDB1.
            v10=0x00000002,     ///<PDB2.
            v11=0x00000003,     ///<PDB3.
        };
        namespace cmp3wsValC{
            constexpr MPL::Value<cmp3wsVal,cmp3wsVal::v00> v00{};
            constexpr MPL::Value<cmp3wsVal,cmp3wsVal::v01> v01{};
            constexpr MPL::Value<cmp3wsVal,cmp3wsVal::v10> v10{};
            constexpr MPL::Value<cmp3wsVal,cmp3wsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,cmp3wsVal> cmp3ws{}; 
        ///ADC0 alternate trigger enable
        enum class adc0alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC0.
            v1=0x00000001,     ///<Alternate trigger selected for ADC0.
        };
        namespace adc0alttrgenValC{
            constexpr MPL::Value<adc0alttrgenVal,adc0alttrgenVal::v0> v0{};
            constexpr MPL::Value<adc0alttrgenVal,adc0alttrgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,adc0alttrgenVal> adc0alttrgen{}; 
        ///ADC1 alternate trigger enable
        enum class adc1alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC1.
            v1=0x00000001,     ///<Alternate trigger selected for ADC1.
        };
        namespace adc1alttrgenValC{
            constexpr MPL::Value<adc1alttrgenVal,adc1alttrgenVal::v0> v0{};
            constexpr MPL::Value<adc1alttrgenVal,adc1alttrgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,adc1alttrgenVal> adc1alttrgen{}; 
        ///ADC2 alternate trigger enable
        enum class adc2alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC2
            v1=0x00000001,     ///<Alternate trigger selected for ADC2 as defined by ADC2TRGSEL.
        };
        namespace adc2alttrgenValC{
            constexpr MPL::Value<adc2alttrgenVal,adc2alttrgenVal::v0> v0{};
            constexpr MPL::Value<adc2alttrgenVal,adc2alttrgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,adc2alttrgenVal> adc2alttrgen{}; 
        ///ADC3 alternate trigger enable
        enum class adc3alttrgenVal {
            v0=0x00000000,     ///<PDB trigger selected for ADC3
            v1=0x00000001,     ///<Alternate trigger selected for ADC3 as defined by ADC3TRGSEL.
        };
        namespace adc3alttrgenValC{
            constexpr MPL::Value<adc3alttrgenVal,adc3alttrgenVal::v0> v0{};
            constexpr MPL::Value<adc3alttrgenVal,adc3alttrgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,adc3alttrgenVal> adc3alttrgen{}; 
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x40032024,0xffff0fc0,0,unsigned>;
        ///Pincount identification
        enum class boidVal {
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
        namespace boidValC{
            constexpr MPL::Value<boidVal,boidVal::v0000> v0000{};
            constexpr MPL::Value<boidVal,boidVal::v0001> v0001{};
            constexpr MPL::Value<boidVal,boidVal::v0010> v0010{};
            constexpr MPL::Value<boidVal,boidVal::v0011> v0011{};
            constexpr MPL::Value<boidVal,boidVal::v0100> v0100{};
            constexpr MPL::Value<boidVal,boidVal::v0101> v0101{};
            constexpr MPL::Value<boidVal,boidVal::v0110> v0110{};
            constexpr MPL::Value<boidVal,boidVal::v0111> v0111{};
            constexpr MPL::Value<boidVal,boidVal::v1000> v1000{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,boidVal> boid{}; 
        ///Device family identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> dieid{}; 
        ///Device revision number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> revid{}; 
    }
    namespace SimScgc5{    ///<System Clock Gating Control Register 5
        using Addr = Register::Address<0x40032038,0xfff02079,0,unsigned>;
        ///EWM Clock Gate Control
        enum class ewmVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace ewmValC{
            constexpr MPL::Value<ewmVal,ewmVal::v0> v0{};
            constexpr MPL::Value<ewmVal,ewmVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ewmVal> ewm{}; 
        ///CMT Clock Gate Control
        enum class cmtVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace cmtValC{
            constexpr MPL::Value<cmtVal,cmtVal::v0> v0{};
            constexpr MPL::Value<cmtVal,cmtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cmtVal> cmt{}; 
        ///IIC0 Clock Gate Control
        enum class iic0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace iic0ValC{
            constexpr MPL::Value<iic0Val,iic0Val::v0> v0{};
            constexpr MPL::Value<iic0Val,iic0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,iic0Val> iic0{}; 
        ///IIC1 Clock Gate Control
        enum class iic1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace iic1ValC{
            constexpr MPL::Value<iic1Val,iic1Val::v0> v0{};
            constexpr MPL::Value<iic1Val,iic1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,iic1Val> iic1{}; 
        ///UART0 Clock Gate Control
        enum class uart0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace uart0ValC{
            constexpr MPL::Value<uart0Val,uart0Val::v0> v0{};
            constexpr MPL::Value<uart0Val,uart0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,uart0Val> uart0{}; 
        ///UART1 Clock Gate Control
        enum class uart1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace uart1ValC{
            constexpr MPL::Value<uart1Val,uart1Val::v0> v0{};
            constexpr MPL::Value<uart1Val,uart1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,uart1Val> uart1{}; 
        ///UART2 Clock Gate Control
        enum class uart2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace uart2ValC{
            constexpr MPL::Value<uart2Val,uart2Val::v0> v0{};
            constexpr MPL::Value<uart2Val,uart2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,uart2Val> uart2{}; 
        ///UART3 Clock Gate Control
        enum class uart3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace uart3ValC{
            constexpr MPL::Value<uart3Val,uart3Val::v0> v0{};
            constexpr MPL::Value<uart3Val,uart3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,uart3Val> uart3{}; 
        ///SPI0 Clock Gate Control
        enum class spi0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace spi0ValC{
            constexpr MPL::Value<spi0Val,spi0Val::v0> v0{};
            constexpr MPL::Value<spi0Val,spi0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,spi0Val> spi0{}; 
        ///SPI1 Clock Gate Control
        enum class spi1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace spi1ValC{
            constexpr MPL::Value<spi1Val,spi1Val::v0> v0{};
            constexpr MPL::Value<spi1Val,spi1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,spi1Val> spi1{}; 
        ///ACMP0 Clock Gate Control
        enum class acmp0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace acmp0ValC{
            constexpr MPL::Value<acmp0Val,acmp0Val::v0> v0{};
            constexpr MPL::Value<acmp0Val,acmp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,acmp0Val> acmp0{}; 
        ///ACMP1 Clock Gate Control
        enum class acmp1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace acmp1ValC{
            constexpr MPL::Value<acmp1Val,acmp1Val::v0> v0{};
            constexpr MPL::Value<acmp1Val,acmp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,acmp1Val> acmp1{}; 
        ///ACMP2 Clock Gate Control
        enum class acmp2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace acmp2ValC{
            constexpr MPL::Value<acmp2Val,acmp2Val::v0> v0{};
            constexpr MPL::Value<acmp2Val,acmp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,acmp2Val> acmp2{}; 
        ///ACMP3 Clock Gate Control
        enum class acmp3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace acmp3ValC{
            constexpr MPL::Value<acmp3Val,acmp3Val::v0> v0{};
            constexpr MPL::Value<acmp3Val,acmp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,acmp3Val> acmp3{}; 
    }
    namespace SimScgc6{    ///<System Clock Gating Control Register 6
        using Addr = Register::Address<0x4003203c,0x8706c005,0,unsigned>;
        ///DMAMUX Clock Gate Control
        enum class dmamuxVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace dmamuxValC{
            constexpr MPL::Value<dmamuxVal,dmamuxVal::v0> v0{};
            constexpr MPL::Value<dmamuxVal,dmamuxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dmamuxVal> dmamux{}; 
        ///PIT Clock Gate Control
        enum class pitVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace pitValC{
            constexpr MPL::Value<pitVal,pitVal::v0> v0{};
            constexpr MPL::Value<pitVal,pitVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pitVal> pit{}; 
        ///CRC Clock Gate Control
        enum class crcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace crcValC{
            constexpr MPL::Value<crcVal,crcVal::v0> v0{};
            constexpr MPL::Value<crcVal,crcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,crcVal> crc{}; 
        ///PDB0 Clock Gate Control
        enum class pdb0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace pdb0ValC{
            constexpr MPL::Value<pdb0Val,pdb0Val::v0> v0{};
            constexpr MPL::Value<pdb0Val,pdb0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pdb0Val> pdb0{}; 
        ///PDB1 Clock Gate Control
        enum class pdb1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace pdb1ValC{
            constexpr MPL::Value<pdb1Val,pdb1Val::v0> v0{};
            constexpr MPL::Value<pdb1Val,pdb1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pdb1Val> pdb1{}; 
        ///PDB2 Clock Gate Control
        enum class pdb2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace pdb2ValC{
            constexpr MPL::Value<pdb2Val,pdb2Val::v0> v0{};
            constexpr MPL::Value<pdb2Val,pdb2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pdb2Val> pdb2{}; 
        ///PDB3 Clock Gate Control
        enum class pdb3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace pdb3ValC{
            constexpr MPL::Value<pdb3Val,pdb3Val::v0> v0{};
            constexpr MPL::Value<pdb3Val,pdb3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,pdb3Val> pdb3{}; 
        ///FTM0 Clock Gate Control
        enum class ftm0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace ftm0ValC{
            constexpr MPL::Value<ftm0Val,ftm0Val::v0> v0{};
            constexpr MPL::Value<ftm0Val,ftm0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ftm0Val> ftm0{}; 
        ///FTM1 Clock Gate Control
        enum class ftm1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace ftm1ValC{
            constexpr MPL::Value<ftm1Val,ftm1Val::v0> v0{};
            constexpr MPL::Value<ftm1Val,ftm1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ftm1Val> ftm1{}; 
        ///FTM2 Clock Gate Control
        enum class ftm2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace ftm2ValC{
            constexpr MPL::Value<ftm2Val,ftm2Val::v0> v0{};
            constexpr MPL::Value<ftm2Val,ftm2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ftm2Val> ftm2{}; 
        ///FTM3 Clock Gate Control
        enum class ftm3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace ftm3ValC{
            constexpr MPL::Value<ftm3Val,ftm3Val::v0> v0{};
            constexpr MPL::Value<ftm3Val,ftm3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ftm3Val> ftm3{}; 
        ///RTC Clock Gate Control
        enum class rtcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace rtcValC{
            constexpr MPL::Value<rtcVal,rtcVal::v0> v0{};
            constexpr MPL::Value<rtcVal,rtcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,rtcVal> rtc{}; 
        ///TSI Clock Gate Control
        enum class tsiVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace tsiValC{
            constexpr MPL::Value<tsiVal,tsiVal::v0> v0{};
            constexpr MPL::Value<tsiVal,tsiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tsiVal> tsi{}; 
        ///Port A Clock Gate Control
        enum class portaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace portaValC{
            constexpr MPL::Value<portaVal,portaVal::v0> v0{};
            constexpr MPL::Value<portaVal,portaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,portaVal> porta{}; 
        ///Port B Clock Gate Control
        enum class portbVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace portbValC{
            constexpr MPL::Value<portbVal,portbVal::v0> v0{};
            constexpr MPL::Value<portbVal,portbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,portbVal> portb{}; 
        ///Port C Clock Gate Control
        enum class portcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace portcValC{
            constexpr MPL::Value<portcVal,portcVal::v0> v0{};
            constexpr MPL::Value<portcVal,portcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,portcVal> portc{}; 
        ///Port D Clock Gate Control
        enum class portdVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace portdValC{
            constexpr MPL::Value<portdVal,portdVal::v0> v0{};
            constexpr MPL::Value<portdVal,portdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,portdVal> portd{}; 
        ///Port E Clock Gate Control
        enum class porteVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace porteValC{
            constexpr MPL::Value<porteVal,porteVal::v0> v0{};
            constexpr MPL::Value<porteVal,porteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,porteVal> porte{}; 
        ///ADC0 Clock Gate Control
        enum class adc0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace adc0ValC{
            constexpr MPL::Value<adc0Val,adc0Val::v0> v0{};
            constexpr MPL::Value<adc0Val,adc0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,adc0Val> adc0{}; 
        ///ADC1 Clock Gate Control
        enum class adc1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace adc1ValC{
            constexpr MPL::Value<adc1Val,adc1Val::v0> v0{};
            constexpr MPL::Value<adc1Val,adc1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,adc1Val> adc1{}; 
        ///ADC2 Clock Gate Control
        enum class adc2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace adc2ValC{
            constexpr MPL::Value<adc2Val,adc2Val::v0> v0{};
            constexpr MPL::Value<adc2Val,adc2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,adc2Val> adc2{}; 
        ///ADC3 Clock Gate Control
        enum class adc3Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace adc3ValC{
            constexpr MPL::Value<adc3Val,adc3Val::v0> v0{};
            constexpr MPL::Value<adc3Val,adc3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,adc3Val> adc3{}; 
    }
    namespace SimScgc7{    ///<System Clock Gating Control Register 7
        using Addr = Register::Address<0x40032040,0xfffffff0,0,unsigned>;
        ///FlexBus Clock Gate Control
        enum class flexbusVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace flexbusValC{
            constexpr MPL::Value<flexbusVal,flexbusVal::v0> v0{};
            constexpr MPL::Value<flexbusVal,flexbusVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,flexbusVal> flexbus{}; 
        ///DMA Clock Gate Control
        enum class dmaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace dmaValC{
            constexpr MPL::Value<dmaVal,dmaVal::v0> v0{};
            constexpr MPL::Value<dmaVal,dmaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dmaVal> dma{}; 
        ///MPU Clock Gate Control
        enum class mpuVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace mpuValC{
            constexpr MPL::Value<mpuVal,mpuVal::v0> v0{};
            constexpr MPL::Value<mpuVal,mpuVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,mpuVal> mpu{}; 
        ///IEVT Clock Gate Control
        enum class ievtVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        namespace ievtValC{
            constexpr MPL::Value<ievtVal,ievtVal::v0> v0{};
            constexpr MPL::Value<ievtVal,ievtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ievtVal> ievt{}; 
    }
    namespace SimClkdiv1{    ///<System Clock Divider Register 1
        using Addr = Register::Address<0x40032044,0xcccccfff,0,unsigned>;
        ///Clock 5 output divider value
        enum class outdiv5Val {
            v00=0x00000000,     ///<ICSOUT divided by 1.
            v01=0x00000001,     ///<ICSOUT divided by 2.
            v10=0x00000002,     ///<Reserved.
            v11=0x00000003,     ///<ICSOUT divided by 4.
        };
        namespace outdiv5ValC{
            constexpr MPL::Value<outdiv5Val,outdiv5Val::v00> v00{};
            constexpr MPL::Value<outdiv5Val,outdiv5Val::v01> v01{};
            constexpr MPL::Value<outdiv5Val,outdiv5Val::v10> v10{};
            constexpr MPL::Value<outdiv5Val,outdiv5Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,outdiv5Val> outdiv5{}; 
        ///Clock 4 output divider value
        enum class outdiv4Val {
            v00=0x00000000,     ///<ICSOUT divided by 2.
            v01=0x00000001,     ///<ICSOUT divided by 4.
            v10=0x00000002,     ///<Reserved.
            v11=0x00000003,     ///<ICSOUT divided by 8.
        };
        namespace outdiv4ValC{
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v00> v00{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v01> v01{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v10> v10{};
            constexpr MPL::Value<outdiv4Val,outdiv4Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,outdiv4Val> outdiv4{}; 
        ///Clock 3 output divider value
        enum class outdiv3Val {
            v00=0x00000000,     ///<ICSOUT divided by 4, it is valid only when Maxclk = 36 MHz.
            v01=0x00000001,     ///<ICSOUT divided by 8.
            v10=0x00000002,     ///<Reserved.
            v11=0x00000003,     ///<ICSOUT divided by 16, it is valid only when Maxclk = 36 MHz.
        };
        namespace outdiv3ValC{
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v00> v00{};
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v01> v01{};
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v10> v10{};
            constexpr MPL::Value<outdiv3Val,outdiv3Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,outdiv3Val> outdiv3{}; 
        ///Clock 2 output divider value
        enum class outdiv2Val {
            v00=0x00000000,     ///<ICSOUT divided by 2.
            v01=0x00000001,     ///<ICSOUT divided by 4.
            v10=0x00000002,     ///<Reserved.
            v11=0x00000003,     ///<ICSOUT divided by 8.
        };
        namespace outdiv2ValC{
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v00> v00{};
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v01> v01{};
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v10> v10{};
            constexpr MPL::Value<outdiv2Val,outdiv2Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,outdiv2Val> outdiv2{}; 
        ///Clock 1 output divider value
        enum class outdiv1Val {
            v00=0x00000000,     ///<ICSOUT Divided by 1.
            v01=0x00000001,     ///<ICSOUT Divided by 2.
            v10=0x00000002,     ///<Reserved.
            v11=0x00000003,     ///<ICSOUT Divided by 4.
        };
        namespace outdiv1ValC{
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v00> v00{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v01> v01{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v10> v10{};
            constexpr MPL::Value<outdiv1Val,outdiv1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,outdiv1Val> outdiv1{}; 
    }
    namespace SimUidh{    ///<Unique Identification Register High
        using Addr = Register::Address<0x40032054,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
    }
    namespace SimUidmh{    ///<Unique Identification Register Mid-High
        using Addr = Register::Address<0x40032058,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
    }
    namespace SimUidml{    ///<Unique Identification Register Mid Low
        using Addr = Register::Address<0x4003205c,0x00000000,0,unsigned>;
        ///Unique Identification (bits [63:32]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
    }
    namespace SimUidl{    ///<Unique Identification Register Low
        using Addr = Register::Address<0x40032060,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
    }
}
