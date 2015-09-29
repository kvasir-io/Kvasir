#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//This section describes the ADC registers.
    namespace AfeCh0Cfr{    ///<Channel0 Configuration Register
        using Addr = Register::Address<0x40030000,0x1ec581ff,0,unsigned>;
        ///Hardware Trigger Select
        enum class hwTrgVal {
            v0=0x00000000,     ///<Software trigger select
            v1=0x00000001,     ///<Hardware trigger select
        };
        namespace hwTrgValC{
            constexpr MPL::Value<hwTrgVal,hwTrgVal::v0> v0{};
            constexpr MPL::Value<hwTrgVal,hwTrgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,hwTrgVal> hwTrg{}; 
        ///Decimator Clock Input Select
        enum class decClkInpSelVal {
            v0=0x00000000,     ///<On the chip modulator clock will be used
            v1=0x00000001,     ///<External clock will be used.
        };
        namespace decClkInpSelValC{
            constexpr MPL::Value<decClkInpSelVal,decClkInpSelVal::v0> v0{};
            constexpr MPL::Value<decClkInpSelVal,decClkInpSelVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,decClkInpSelVal> decClkInpSel{}; 
        ///Decimator Clock Edge Select
        enum class decClkEdgeSelVal {
            v0=0x00000000,     ///<Posedge will be used.
            v1=0x00000001,     ///<Negedge will be used.
        };
        namespace decClkEdgeSelValC{
            constexpr MPL::Value<decClkEdgeSelVal,decClkEdgeSelVal::v0> v0{};
            constexpr MPL::Value<decClkEdgeSelVal,decClkEdgeSelVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,decClkEdgeSelVal> decClkEdgeSel{}; 
        ///Continuous Conversion/Single Conversion Mode Select
        enum class ccVal {
            v0=0x00000000,     ///<One conversion following a triggering event
            v1=0x00000001,     ///<Continuous conversions following a triggering event.
        };
        namespace ccValC{
            constexpr MPL::Value<ccVal,ccVal::v0> v0{};
            constexpr MPL::Value<ccVal,ccVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ccVal> cc{}; 
        ///Decimation Filter enable
        enum class decEnVal {
            v0=0x00000000,     ///<Decimation filter is disabled.
            v1=0x00000001,     ///<Decimation filter is enabled.
        };
        namespace decEnValC{
            constexpr MPL::Value<decEnVal,decEnVal::v0> v0{};
            constexpr MPL::Value<decEnVal,decEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,decEnVal> decEn{}; 
        ///Sigma Delta Modulator enable
        enum class sdModEnVal {
            v0=0x00000000,     ///<SD ADC1 is disabled
            v1=0x00000001,     ///<SD ADC1 is enabled
        };
        namespace sdModEnValC{
            constexpr MPL::Value<sdModEnVal,sdModEnVal::v0> v0{};
            constexpr MPL::Value<sdModEnVal,sdModEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sdModEnVal> sdModEn{}; 
        ///AFE Channel0 bypass mode
        enum class bypModeVal {
            v0=0x00000000,     ///<Normal mode
            v1=0x00000001,     ///<Bypass mode where ADC and PGA of channel0 are disabled.
        };
        namespace bypModeValC{
            constexpr MPL::Value<bypModeVal,bypModeVal::v0> v0{};
            constexpr MPL::Value<bypModeVal,bypModeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,bypModeVal> bypMode{}; 
        ///PGA Gain Select
        enum class pgaGainSelVal {
            v001=0x00000001,     ///<1x (default)
            v010=0x00000002,     ///<2x
            v011=0x00000003,     ///<4x
            v100=0x00000004,     ///<8x
            v101=0x00000005,     ///<16x
            v110=0x00000006,     ///<32x
        };
        namespace pgaGainSelValC{
            constexpr MPL::Value<pgaGainSelVal,pgaGainSelVal::v001> v001{};
            constexpr MPL::Value<pgaGainSelVal,pgaGainSelVal::v010> v010{};
            constexpr MPL::Value<pgaGainSelVal,pgaGainSelVal::v011> v011{};
            constexpr MPL::Value<pgaGainSelVal,pgaGainSelVal::v100> v100{};
            constexpr MPL::Value<pgaGainSelVal,pgaGainSelVal::v101> v101{};
            constexpr MPL::Value<pgaGainSelVal,pgaGainSelVal::v110> v110{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,pgaGainSelVal> pgaGainSel{}; 
        ///PGA enable
        enum class pgaEnVal {
            v0=0x00000000,     ///<PGA disabled
            v1=0x00000001,     ///<PGA enabled
        };
        namespace pgaEnValC{
            constexpr MPL::Value<pgaEnVal,pgaEnVal::v0> v0{};
            constexpr MPL::Value<pgaEnVal,pgaEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,pgaEnVal> pgaEn{}; 
        ///Decimator OverSampling Ratio select
        enum class decOsrVal {
            v000=0x00000000,     ///<64
            v001=0x00000001,     ///<128
            v010=0x00000002,     ///<256
            v011=0x00000003,     ///<512
            v100=0x00000004,     ///<1024
            v101=0x00000005,     ///<2048
        };
        namespace decOsrValC{
            constexpr MPL::Value<decOsrVal,decOsrVal::v000> v000{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v001> v001{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v010> v010{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v011> v011{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v100> v100{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,decOsrVal> decOsr{}; 
    }
    namespace AfeCh1Cfr{    ///<Channel1 Configuration Register
        using Addr = Register::Address<0x40030004,0x1ec581ff,0,unsigned>;
        ///Hardware Trigger Select
        enum class hwTrgVal {
            v0=0x00000000,     ///<Software trigger select
            v1=0x00000001,     ///<Hardware trigger select
        };
        namespace hwTrgValC{
            constexpr MPL::Value<hwTrgVal,hwTrgVal::v0> v0{};
            constexpr MPL::Value<hwTrgVal,hwTrgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,hwTrgVal> hwTrg{}; 
        ///Decimator Clock Input Select
        enum class decClkInpSelVal {
            v0=0x00000000,     ///<On the chip modulator clock will be used
            v1=0x00000001,     ///<External clock will be used.
        };
        namespace decClkInpSelValC{
            constexpr MPL::Value<decClkInpSelVal,decClkInpSelVal::v0> v0{};
            constexpr MPL::Value<decClkInpSelVal,decClkInpSelVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,decClkInpSelVal> decClkInpSel{}; 
        ///Decimator Clock Edge Select
        enum class decClkEdgeSelVal {
            v0=0x00000000,     ///<Posedge will be used.
            v1=0x00000001,     ///<Negedge will be used.
        };
        namespace decClkEdgeSelValC{
            constexpr MPL::Value<decClkEdgeSelVal,decClkEdgeSelVal::v0> v0{};
            constexpr MPL::Value<decClkEdgeSelVal,decClkEdgeSelVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,decClkEdgeSelVal> decClkEdgeSel{}; 
        ///Continuous Conversion/Single Conversion Mode Select
        enum class ccVal {
            v0=0x00000000,     ///<One conversion following a triggering event
            v1=0x00000001,     ///<Continuous conversions following a triggering event.
        };
        namespace ccValC{
            constexpr MPL::Value<ccVal,ccVal::v0> v0{};
            constexpr MPL::Value<ccVal,ccVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ccVal> cc{}; 
        ///Decimation Filter enable
        enum class decEnVal {
            v0=0x00000000,     ///<Decimation filter is disabled.
            v1=0x00000001,     ///<Decimation filter is enabled.
        };
        namespace decEnValC{
            constexpr MPL::Value<decEnVal,decEnVal::v0> v0{};
            constexpr MPL::Value<decEnVal,decEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,decEnVal> decEn{}; 
        ///Sigma Delta Modulator enable
        enum class sdModEnVal {
            v0=0x00000000,     ///<SD ADC1 is disabled
            v1=0x00000001,     ///<SD ADC1 is enabled
        };
        namespace sdModEnValC{
            constexpr MPL::Value<sdModEnVal,sdModEnVal::v0> v0{};
            constexpr MPL::Value<sdModEnVal,sdModEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sdModEnVal> sdModEn{}; 
        ///AFE Channel1 bypass mode
        enum class bypModeVal {
            v0=0x00000000,     ///<Normal mode
            v1=0x00000001,     ///<Bypass mode where ADC and PGA of channel1 are disabled.
        };
        namespace bypModeValC{
            constexpr MPL::Value<bypModeVal,bypModeVal::v0> v0{};
            constexpr MPL::Value<bypModeVal,bypModeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,bypModeVal> bypMode{}; 
        ///PGA Gain Select
        enum class pgaGainSelVal {
            v001=0x00000001,     ///<1x (default)
            v010=0x00000002,     ///<2x
            v011=0x00000003,     ///<4x
            v100=0x00000004,     ///<8x
            v101=0x00000005,     ///<16x
            v110=0x00000006,     ///<32x
        };
        namespace pgaGainSelValC{
            constexpr MPL::Value<pgaGainSelVal,pgaGainSelVal::v001> v001{};
            constexpr MPL::Value<pgaGainSelVal,pgaGainSelVal::v010> v010{};
            constexpr MPL::Value<pgaGainSelVal,pgaGainSelVal::v011> v011{};
            constexpr MPL::Value<pgaGainSelVal,pgaGainSelVal::v100> v100{};
            constexpr MPL::Value<pgaGainSelVal,pgaGainSelVal::v101> v101{};
            constexpr MPL::Value<pgaGainSelVal,pgaGainSelVal::v110> v110{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,pgaGainSelVal> pgaGainSel{}; 
        ///PGA enable
        enum class pgaEnVal {
            v0=0x00000000,     ///<PGA disabled
            v1=0x00000001,     ///<PGA enabled
        };
        namespace pgaEnValC{
            constexpr MPL::Value<pgaEnVal,pgaEnVal::v0> v0{};
            constexpr MPL::Value<pgaEnVal,pgaEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,pgaEnVal> pgaEn{}; 
        ///Decimator OverSampling Ratio select
        enum class decOsrVal {
            v000=0x00000000,     ///<64
            v001=0x00000001,     ///<128
            v010=0x00000002,     ///<256
            v011=0x00000003,     ///<512
            v100=0x00000004,     ///<1024
            v101=0x00000005,     ///<2048
        };
        namespace decOsrValC{
            constexpr MPL::Value<decOsrVal,decOsrVal::v000> v000{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v001> v001{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v010> v010{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v011> v011{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v100> v100{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,decOsrVal> decOsr{}; 
    }
    namespace AfeCh2Cfr{    ///<Channel2 Configuration Register
        using Addr = Register::Address<0x40030008,0x1ffd81ff,0,unsigned>;
        ///Hardware Trigger Select
        enum class hwTrgVal {
            v0=0x00000000,     ///<Software trigger select
            v1=0x00000001,     ///<Hardware trigger select
        };
        namespace hwTrgValC{
            constexpr MPL::Value<hwTrgVal,hwTrgVal::v0> v0{};
            constexpr MPL::Value<hwTrgVal,hwTrgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,hwTrgVal> hwTrg{}; 
        ///Decimator Clock Input Select
        enum class decClkInpSelVal {
            v0=0x00000000,     ///<On the chip modulator clock will be used.
            v1=0x00000001,     ///<External clock will be used.
        };
        namespace decClkInpSelValC{
            constexpr MPL::Value<decClkInpSelVal,decClkInpSelVal::v0> v0{};
            constexpr MPL::Value<decClkInpSelVal,decClkInpSelVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,decClkInpSelVal> decClkInpSel{}; 
        ///Decimator Clock Edge Select
        enum class decClkEdgeSelVal {
            v0=0x00000000,     ///<Posedge will be used.
            v1=0x00000001,     ///<Negedge will be used.
        };
        namespace decClkEdgeSelValC{
            constexpr MPL::Value<decClkEdgeSelVal,decClkEdgeSelVal::v0> v0{};
            constexpr MPL::Value<decClkEdgeSelVal,decClkEdgeSelVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,decClkEdgeSelVal> decClkEdgeSel{}; 
        ///Continuous Conversion/Single Conversion Mode Select
        enum class ccVal {
            v0=0x00000000,     ///<One conversion following a triggering event
            v1=0x00000001,     ///<Continuous conversions following a triggering event.
        };
        namespace ccValC{
            constexpr MPL::Value<ccVal,ccVal::v0> v0{};
            constexpr MPL::Value<ccVal,ccVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ccVal> cc{}; 
        ///Decimation Filter enable
        enum class decEnVal {
            v0=0x00000000,     ///<Decimation filter is disabled.
            v1=0x00000001,     ///<Decimation filter is enabled.
        };
        namespace decEnValC{
            constexpr MPL::Value<decEnVal,decEnVal::v0> v0{};
            constexpr MPL::Value<decEnVal,decEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,decEnVal> decEn{}; 
        ///Sigma Delta Modulator enable
        enum class sdModEnVal {
            v0=0x00000000,     ///<SD ADC3 is disabled
            v1=0x00000001,     ///<SD ADC3 is enabled
        };
        namespace sdModEnValC{
            constexpr MPL::Value<sdModEnVal,sdModEnVal::v0> v0{};
            constexpr MPL::Value<sdModEnVal,sdModEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sdModEnVal> sdModEn{}; 
        ///AFE Channel2 bypass mode
        enum class bypModeVal {
            v0=0x00000000,     ///<Normal mode
            v1=0x00000001,     ///<Bypass mode where ADC and PGA of channel2 are disabled.
        };
        namespace bypModeValC{
            constexpr MPL::Value<bypModeVal,bypModeVal::v0> v0{};
            constexpr MPL::Value<bypModeVal,bypModeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,bypModeVal> bypMode{}; 
        ///Decimator OverSampling Ratio select
        enum class decOsrVal {
            v000=0x00000000,     ///<64
            v001=0x00000001,     ///<128
            v010=0x00000002,     ///<256
            v011=0x00000003,     ///<512
            v100=0x00000004,     ///<1024
            v101=0x00000005,     ///<2048
        };
        namespace decOsrValC{
            constexpr MPL::Value<decOsrVal,decOsrVal::v000> v000{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v001> v001{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v010> v010{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v011> v011{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v100> v100{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,decOsrVal> decOsr{}; 
    }
    namespace AfeCh3Cfr{    ///<Channel3 Configuration Register
        using Addr = Register::Address<0x4003000c,0x1ffd81ff,0,unsigned>;
        ///Hardware Trigger Select
        enum class hwTrgVal {
            v0=0x00000000,     ///<Software trigger select
            v1=0x00000001,     ///<Hardware trigger select
        };
        namespace hwTrgValC{
            constexpr MPL::Value<hwTrgVal,hwTrgVal::v0> v0{};
            constexpr MPL::Value<hwTrgVal,hwTrgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,hwTrgVal> hwTrg{}; 
        ///Decimator Clock Input Select
        enum class decClkInpSelVal {
            v0=0x00000000,     ///<On the chip modulator clock will be used.
            v1=0x00000001,     ///<External clock will be used.
        };
        namespace decClkInpSelValC{
            constexpr MPL::Value<decClkInpSelVal,decClkInpSelVal::v0> v0{};
            constexpr MPL::Value<decClkInpSelVal,decClkInpSelVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,decClkInpSelVal> decClkInpSel{}; 
        ///Decimator Clock Edge Select
        enum class decClkEdgeSelVal {
            v0=0x00000000,     ///<Posedge will be used.
            v1=0x00000001,     ///<Negedge will be used.
        };
        namespace decClkEdgeSelValC{
            constexpr MPL::Value<decClkEdgeSelVal,decClkEdgeSelVal::v0> v0{};
            constexpr MPL::Value<decClkEdgeSelVal,decClkEdgeSelVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,decClkEdgeSelVal> decClkEdgeSel{}; 
        ///Continuous Conversion/Single Conversion Mode Select
        enum class ccVal {
            v0=0x00000000,     ///<One conversion following a triggering event
            v1=0x00000001,     ///<Continuous conversions following a triggering event.
        };
        namespace ccValC{
            constexpr MPL::Value<ccVal,ccVal::v0> v0{};
            constexpr MPL::Value<ccVal,ccVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ccVal> cc{}; 
        ///Decimation Filter enable
        enum class decEnVal {
            v0=0x00000000,     ///<Decimation filter is disabled.
            v1=0x00000001,     ///<Decimation filter is enabled.
        };
        namespace decEnValC{
            constexpr MPL::Value<decEnVal,decEnVal::v0> v0{};
            constexpr MPL::Value<decEnVal,decEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,decEnVal> decEn{}; 
        ///Sigma Delta Modulator enable
        enum class sdModEnVal {
            v0=0x00000000,     ///<SD ADC3 is disabled
            v1=0x00000001,     ///<SD ADC3 is enabled
        };
        namespace sdModEnValC{
            constexpr MPL::Value<sdModEnVal,sdModEnVal::v0> v0{};
            constexpr MPL::Value<sdModEnVal,sdModEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sdModEnVal> sdModEn{}; 
        ///AFE Channel3 bypass mode
        enum class bypModeVal {
            v0=0x00000000,     ///<Normal mode
            v1=0x00000001,     ///<Bypass mode where ADC and PGA of channel3 are disabled.
        };
        namespace bypModeValC{
            constexpr MPL::Value<bypModeVal,bypModeVal::v0> v0{};
            constexpr MPL::Value<bypModeVal,bypModeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,bypModeVal> bypMode{}; 
        ///Decimator OverSampling Ratio select
        enum class decOsrVal {
            v000=0x00000000,     ///<64
            v001=0x00000001,     ///<128
            v010=0x00000002,     ///<256
            v011=0x00000003,     ///<512
            v100=0x00000004,     ///<1024
            v101=0x00000005,     ///<2048
        };
        namespace decOsrValC{
            constexpr MPL::Value<decOsrVal,decOsrVal::v000> v000{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v001> v001{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v010> v010{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v011> v011{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v100> v100{};
            constexpr MPL::Value<decOsrVal,decOsrVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,decOsrVal> decOsr{}; 
    }
    namespace AfeCr{    ///<Control Register
        using Addr = Register::Address<0x40030018,0x059b01ff,0,unsigned>;
        ///Start up count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,9),Register::ReadWriteAccess,unsigned> strtupCnt{}; 
        ///Result Format
        enum class resultFormatVal {
            v0=0x00000000,     ///<Left justified 2's complement 32-bit : SVVVVVVVVVVVVVVVVVVVVVVV00000000 where (S= sign bit , V=valid result value, 0=zero)
            v1=0x00000001,     ///<Right justified 2's complement 32-bit : SSSSSSSSSVVVVVVVVVVVVVVVVVVVVVVV where (S= sign bit , V= valid result value, 0= zero)
        };
        namespace resultFormatValC{
            constexpr MPL::Value<resultFormatVal,resultFormatVal::v0> v0{};
            constexpr MPL::Value<resultFormatVal,resultFormatVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,resultFormatVal> resultFormat{}; 
        ///Delay OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dlyOk{}; 
        ///Software Reset
        enum class rstBVal {
            v0=0x00000000,     ///<All ADCs, PGAs and Decimation filters are disabled. Clock Configuration bits will be reset.
            v1=0x00000001,     ///<.= All ADCs, PGAs and Decimation filters are enabled.
        };
        namespace rstBValC{
            constexpr MPL::Value<rstBVal,rstBVal::v0> v0{};
            constexpr MPL::Value<rstBVal,rstBVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,rstBVal> rstB{}; 
        ///Low power Mode enable
        enum class lpmEnVal {
            v0=0x00000000,     ///<AFE will be in normal mode
            v1=0x00000001,     ///<AFE will be in low power mode. Setting this bit reduce the current consumption of ADC and Buffer Amplifier , the max modulator clock frequency is below 1Mhz.
        };
        namespace lpmEnValC{
            constexpr MPL::Value<lpmEnVal,lpmEnVal::v0> v0{};
            constexpr MPL::Value<lpmEnVal,lpmEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,lpmEnVal> lpmEn{}; 
        ///Software Trigger3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> softTrg3{}; 
        ///Software Trigger2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> softTrg2{}; 
        ///Software Trigger1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> softTrg1{}; 
        ///Software Trigger0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> softTrg0{}; 
        ///AFE Master Enable
        enum class mstrEnVal {
            v0=0x00000000,     ///<All ADCs are disabled.
            v1=0x00000001,     ///<All ADCs and filters will get simultaneously enabled .
        };
        namespace mstrEnValC{
            constexpr MPL::Value<mstrEnVal,mstrEnVal::v0> v0{};
            constexpr MPL::Value<mstrEnVal,mstrEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,mstrEnVal> mstrEn{}; 
    }
    namespace AfeCkr{    ///<Clock Configuration Register
        using Addr = Register::Address<0x4003001c,0x0f9fffff,0,unsigned>;
        ///Clock Source Select
        enum class clsVal {
            v00=0x00000000,     ///<mod_clk0
            v01=0x00000001,     ///<mod_clk1
            v10=0x00000002,     ///<mod_clk2
            v11=0x00000003,     ///<mod_clk3
        };
        namespace clsValC{
            constexpr MPL::Value<clsVal,clsVal::v00> v00{};
            constexpr MPL::Value<clsVal,clsVal::v01> v01{};
            constexpr MPL::Value<clsVal,clsVal::v10> v10{};
            constexpr MPL::Value<clsVal,clsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,clsVal> cls{}; 
        ///Clock Divider Select
        enum class divVal {
            v0000=0x00000000,     ///<divide by 1
            v0001=0x00000001,     ///<divide by 2 (default)
            v0010=0x00000002,     ///<divide by 4
            v0011=0x00000003,     ///<divide by 8
            v0100=0x00000004,     ///<divide by 16
            v0101=0x00000005,     ///<divide by 32
            v0110=0x00000006,     ///<divide by 64
            v0111=0x00000007,     ///<divide by 128
            v1xxx=0x00000008,     ///<divide by 256
        };
        namespace divValC{
            constexpr MPL::Value<divVal,divVal::v0000> v0000{};
            constexpr MPL::Value<divVal,divVal::v0001> v0001{};
            constexpr MPL::Value<divVal,divVal::v0010> v0010{};
            constexpr MPL::Value<divVal,divVal::v0011> v0011{};
            constexpr MPL::Value<divVal,divVal::v0100> v0100{};
            constexpr MPL::Value<divVal,divVal::v0101> v0101{};
            constexpr MPL::Value<divVal,divVal::v0110> v0110{};
            constexpr MPL::Value<divVal,divVal::v0111> v0111{};
            constexpr MPL::Value<divVal,divVal::v1xxx> v1xxx{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,divVal> div{}; 
    }
    namespace AfeDi{    ///<DMA and Interrupt Register
        using Addr = Register::Address<0x40030020,0x087fffff,0,unsigned>;
        ///Interrupt Enable 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> inten3{}; 
        ///Interrupt Enable 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> inten2{}; 
        ///Interrupt Enable 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> inten1{}; 
        ///Interrupt Enable 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> inten0{}; 
        ///DMA Enable3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dmaen3{}; 
        ///DMA Enable2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dmaen2{}; 
        ///DMA Enable1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dmaen1{}; 
        ///DMA Enable0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dmaen0{}; 
    }
    namespace AfeCh0Dr{    ///<Channel0 Delay Register
        using Addr = Register::Address<0x4003002c,0xfffff800,0,unsigned>;
        ///Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace AfeCh1Dr{    ///<Channel1 Delay Register
        using Addr = Register::Address<0x40030030,0xfffff800,0,unsigned>;
        ///Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace AfeCh2Dr{    ///<Channel2 Delay Register
        using Addr = Register::Address<0x40030034,0xfffff800,0,unsigned>;
        ///Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace AfeCh3Dr{    ///<Channel3 Delay Register
        using Addr = Register::Address<0x40030038,0xfffff800,0,unsigned>;
        ///Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace AfeCh0Rr{    ///<Channel0 Result Register
        using Addr = Register::Address<0x40030044,0x00000000,0,unsigned>;
        ///Sample Data Result
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> sdr{}; 
        ///Sign Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> signBits{}; 
    }
    namespace AfeCh1Rr{    ///<Channel1 Result Register
        using Addr = Register::Address<0x40030048,0x00000000,0,unsigned>;
        ///Sample Data Result
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> sdr{}; 
        ///Sign Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> signBits{}; 
    }
    namespace AfeCh2Rr{    ///<Channel2 Result Register
        using Addr = Register::Address<0x4003004c,0x00000000,0,unsigned>;
        ///Sample Data result
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> sdr{}; 
        ///Sign Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> signBits{}; 
    }
    namespace AfeCh3Rr{    ///<Channel3 Result Register
        using Addr = Register::Address<0x40030050,0x00000000,0,unsigned>;
        ///Sample Data result
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> sdr{}; 
        ///Sign Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> signBits{}; 
    }
    namespace AfeSr{    ///<Status Register
        using Addr = Register::Address<0x4003005c,0x0e10ffff,0,unsigned>;
        ///AFE Ready4
        enum class rdy3Val {
            v0=0x00000000,     ///<AFE Channel3 is disabled or has not completed its start up period
            v1=0x00000001,     ///<AFE Channel3 is ready to initiate conversions.
        };
        namespace rdy3ValC{
            constexpr MPL::Value<rdy3Val,rdy3Val::v0> v0{};
            constexpr MPL::Value<rdy3Val,rdy3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,rdy3Val> rdy3{}; 
        ///AFE Ready3
        enum class rdy2Val {
            v0=0x00000000,     ///<AFE Channel2 is disabled or has not completed its start up period
            v1=0x00000001,     ///<AFE Channel2 is ready to initiate conversions.
        };
        namespace rdy2ValC{
            constexpr MPL::Value<rdy2Val,rdy2Val::v0> v0{};
            constexpr MPL::Value<rdy2Val,rdy2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,rdy2Val> rdy2{}; 
        ///AFE Ready2
        enum class rdy1Val {
            v0=0x00000000,     ///<AFE Channel1 is disabled or has not completed its start up period
            v1=0x00000001,     ///<AFE Channel1 is ready to initiate conversions.
        };
        namespace rdy1ValC{
            constexpr MPL::Value<rdy1Val,rdy1Val::v0> v0{};
            constexpr MPL::Value<rdy1Val,rdy1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,rdy1Val> rdy1{}; 
        ///AFE Ready1
        enum class rdy0Val {
            v0=0x00000000,     ///<AFE Channel0 is disabled or has not completed its start up period
            v1=0x00000001,     ///<AFE Channel0 is ready to initiate conversions.
        };
        namespace rdy0ValC{
            constexpr MPL::Value<rdy0Val,rdy0Val::v0> v0{};
            constexpr MPL::Value<rdy0Val,rdy0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,rdy0Val> rdy0{}; 
        ///Overflow Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ovr3{}; 
        ///Overflow Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ovr2{}; 
        ///Overflow Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ovr1{}; 
        ///Overflow Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ovr0{}; 
        ///Conversion Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> coc3{}; 
        ///Conversion Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> coc2{}; 
        ///Conversion Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> coc1{}; 
        ///Conversion Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> coc0{}; 
    }
}
