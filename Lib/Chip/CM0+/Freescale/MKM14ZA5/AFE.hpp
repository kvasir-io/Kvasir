#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//This section describes the ADC registers.
    namespace AfeCh0Cfr{    ///<Channel0 Configuration Register
        using Addr = Register::Address<0x40030000,0x1ec581ff,0,unsigned>;
        ///Hardware Trigger Select
        enum class HwtrgVal {
            v0=0x00000000,     ///<Software trigger select
            v1=0x00000001,     ///<Hardware trigger select
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,HwtrgVal> hwTrg{}; 
        namespace HwtrgValC{
            constexpr Register::FieldValue<decltype(hwTrg),HwtrgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hwTrg),HwtrgVal::v1> v1{};
        }
        ///Decimator Clock Input Select
        enum class DecclkinpselVal {
            v0=0x00000000,     ///<On the chip modulator clock will be used
            v1=0x00000001,     ///<External clock will be used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,DecclkinpselVal> decClkInpSel{}; 
        namespace DecclkinpselValC{
            constexpr Register::FieldValue<decltype(decClkInpSel),DecclkinpselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(decClkInpSel),DecclkinpselVal::v1> v1{};
        }
        ///Decimator Clock Edge Select
        enum class DecclkedgeselVal {
            v0=0x00000000,     ///<Posedge will be used.
            v1=0x00000001,     ///<Negedge will be used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,DecclkedgeselVal> decClkEdgeSel{}; 
        namespace DecclkedgeselValC{
            constexpr Register::FieldValue<decltype(decClkEdgeSel),DecclkedgeselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(decClkEdgeSel),DecclkedgeselVal::v1> v1{};
        }
        ///Continuous Conversion/Single Conversion Mode Select
        enum class CcVal {
            v0=0x00000000,     ///<One conversion following a triggering event
            v1=0x00000001,     ///<Continuous conversions following a triggering event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CcVal> cc{}; 
        namespace CcValC{
            constexpr Register::FieldValue<decltype(cc),CcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cc),CcVal::v1> v1{};
        }
        ///Decimation Filter enable
        enum class DecenVal {
            v0=0x00000000,     ///<Decimation filter is disabled.
            v1=0x00000001,     ///<Decimation filter is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,DecenVal> decEn{}; 
        namespace DecenValC{
            constexpr Register::FieldValue<decltype(decEn),DecenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(decEn),DecenVal::v1> v1{};
        }
        ///Sigma Delta Modulator enable
        enum class SdmodenVal {
            v0=0x00000000,     ///<SD ADC1 is disabled
            v1=0x00000001,     ///<SD ADC1 is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SdmodenVal> sdModEn{}; 
        namespace SdmodenValC{
            constexpr Register::FieldValue<decltype(sdModEn),SdmodenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sdModEn),SdmodenVal::v1> v1{};
        }
        ///AFE Channel0 bypass mode
        enum class BypmodeVal {
            v0=0x00000000,     ///<Normal mode
            v1=0x00000001,     ///<Bypass mode where ADC and PGA of channel0 are disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,BypmodeVal> bypMode{}; 
        namespace BypmodeValC{
            constexpr Register::FieldValue<decltype(bypMode),BypmodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bypMode),BypmodeVal::v1> v1{};
        }
        ///PGA Gain Select
        enum class PgagainselVal {
            v001=0x00000001,     ///<1x (default)
            v010=0x00000002,     ///<2x
            v011=0x00000003,     ///<4x
            v100=0x00000004,     ///<8x
            v101=0x00000005,     ///<16x
            v110=0x00000006,     ///<32x
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,PgagainselVal> pgaGainSel{}; 
        namespace PgagainselValC{
            constexpr Register::FieldValue<decltype(pgaGainSel),PgagainselVal::v001> v001{};
            constexpr Register::FieldValue<decltype(pgaGainSel),PgagainselVal::v010> v010{};
            constexpr Register::FieldValue<decltype(pgaGainSel),PgagainselVal::v011> v011{};
            constexpr Register::FieldValue<decltype(pgaGainSel),PgagainselVal::v100> v100{};
            constexpr Register::FieldValue<decltype(pgaGainSel),PgagainselVal::v101> v101{};
            constexpr Register::FieldValue<decltype(pgaGainSel),PgagainselVal::v110> v110{};
        }
        ///PGA enable
        enum class PgaenVal {
            v0=0x00000000,     ///<PGA disabled
            v1=0x00000001,     ///<PGA enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,PgaenVal> pgaEn{}; 
        namespace PgaenValC{
            constexpr Register::FieldValue<decltype(pgaEn),PgaenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pgaEn),PgaenVal::v1> v1{};
        }
        ///Decimator OverSampling Ratio select
        enum class DecosrVal {
            v000=0x00000000,     ///<64
            v001=0x00000001,     ///<128
            v010=0x00000002,     ///<256
            v011=0x00000003,     ///<512
            v100=0x00000004,     ///<1024
            v101=0x00000005,     ///<2048
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,DecosrVal> decOsr{}; 
        namespace DecosrValC{
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v000> v000{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v001> v001{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v010> v010{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v011> v011{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v100> v100{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v101> v101{};
        }
    }
    namespace AfeCh1Cfr{    ///<Channel1 Configuration Register
        using Addr = Register::Address<0x40030004,0x1ec581ff,0,unsigned>;
        ///Hardware Trigger Select
        enum class HwtrgVal {
            v0=0x00000000,     ///<Software trigger select
            v1=0x00000001,     ///<Hardware trigger select
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,HwtrgVal> hwTrg{}; 
        namespace HwtrgValC{
            constexpr Register::FieldValue<decltype(hwTrg),HwtrgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hwTrg),HwtrgVal::v1> v1{};
        }
        ///Decimator Clock Input Select
        enum class DecclkinpselVal {
            v0=0x00000000,     ///<On the chip modulator clock will be used
            v1=0x00000001,     ///<External clock will be used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,DecclkinpselVal> decClkInpSel{}; 
        namespace DecclkinpselValC{
            constexpr Register::FieldValue<decltype(decClkInpSel),DecclkinpselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(decClkInpSel),DecclkinpselVal::v1> v1{};
        }
        ///Decimator Clock Edge Select
        enum class DecclkedgeselVal {
            v0=0x00000000,     ///<Posedge will be used.
            v1=0x00000001,     ///<Negedge will be used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,DecclkedgeselVal> decClkEdgeSel{}; 
        namespace DecclkedgeselValC{
            constexpr Register::FieldValue<decltype(decClkEdgeSel),DecclkedgeselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(decClkEdgeSel),DecclkedgeselVal::v1> v1{};
        }
        ///Continuous Conversion/Single Conversion Mode Select
        enum class CcVal {
            v0=0x00000000,     ///<One conversion following a triggering event
            v1=0x00000001,     ///<Continuous conversions following a triggering event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CcVal> cc{}; 
        namespace CcValC{
            constexpr Register::FieldValue<decltype(cc),CcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cc),CcVal::v1> v1{};
        }
        ///Decimation Filter enable
        enum class DecenVal {
            v0=0x00000000,     ///<Decimation filter is disabled.
            v1=0x00000001,     ///<Decimation filter is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,DecenVal> decEn{}; 
        namespace DecenValC{
            constexpr Register::FieldValue<decltype(decEn),DecenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(decEn),DecenVal::v1> v1{};
        }
        ///Sigma Delta Modulator enable
        enum class SdmodenVal {
            v0=0x00000000,     ///<SD ADC1 is disabled
            v1=0x00000001,     ///<SD ADC1 is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SdmodenVal> sdModEn{}; 
        namespace SdmodenValC{
            constexpr Register::FieldValue<decltype(sdModEn),SdmodenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sdModEn),SdmodenVal::v1> v1{};
        }
        ///AFE Channel1 bypass mode
        enum class BypmodeVal {
            v0=0x00000000,     ///<Normal mode
            v1=0x00000001,     ///<Bypass mode where ADC and PGA of channel1 are disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,BypmodeVal> bypMode{}; 
        namespace BypmodeValC{
            constexpr Register::FieldValue<decltype(bypMode),BypmodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bypMode),BypmodeVal::v1> v1{};
        }
        ///PGA Gain Select
        enum class PgagainselVal {
            v001=0x00000001,     ///<1x (default)
            v010=0x00000002,     ///<2x
            v011=0x00000003,     ///<4x
            v100=0x00000004,     ///<8x
            v101=0x00000005,     ///<16x
            v110=0x00000006,     ///<32x
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,PgagainselVal> pgaGainSel{}; 
        namespace PgagainselValC{
            constexpr Register::FieldValue<decltype(pgaGainSel),PgagainselVal::v001> v001{};
            constexpr Register::FieldValue<decltype(pgaGainSel),PgagainselVal::v010> v010{};
            constexpr Register::FieldValue<decltype(pgaGainSel),PgagainselVal::v011> v011{};
            constexpr Register::FieldValue<decltype(pgaGainSel),PgagainselVal::v100> v100{};
            constexpr Register::FieldValue<decltype(pgaGainSel),PgagainselVal::v101> v101{};
            constexpr Register::FieldValue<decltype(pgaGainSel),PgagainselVal::v110> v110{};
        }
        ///PGA enable
        enum class PgaenVal {
            v0=0x00000000,     ///<PGA disabled
            v1=0x00000001,     ///<PGA enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,PgaenVal> pgaEn{}; 
        namespace PgaenValC{
            constexpr Register::FieldValue<decltype(pgaEn),PgaenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pgaEn),PgaenVal::v1> v1{};
        }
        ///Decimator OverSampling Ratio select
        enum class DecosrVal {
            v000=0x00000000,     ///<64
            v001=0x00000001,     ///<128
            v010=0x00000002,     ///<256
            v011=0x00000003,     ///<512
            v100=0x00000004,     ///<1024
            v101=0x00000005,     ///<2048
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,DecosrVal> decOsr{}; 
        namespace DecosrValC{
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v000> v000{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v001> v001{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v010> v010{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v011> v011{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v100> v100{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v101> v101{};
        }
    }
    namespace AfeCh2Cfr{    ///<Channel2 Configuration Register
        using Addr = Register::Address<0x40030008,0x1ffd81ff,0,unsigned>;
        ///Hardware Trigger Select
        enum class HwtrgVal {
            v0=0x00000000,     ///<Software trigger select
            v1=0x00000001,     ///<Hardware trigger select
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,HwtrgVal> hwTrg{}; 
        namespace HwtrgValC{
            constexpr Register::FieldValue<decltype(hwTrg),HwtrgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hwTrg),HwtrgVal::v1> v1{};
        }
        ///Decimator Clock Input Select
        enum class DecclkinpselVal {
            v0=0x00000000,     ///<On the chip modulator clock will be used.
            v1=0x00000001,     ///<External clock will be used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,DecclkinpselVal> decClkInpSel{}; 
        namespace DecclkinpselValC{
            constexpr Register::FieldValue<decltype(decClkInpSel),DecclkinpselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(decClkInpSel),DecclkinpselVal::v1> v1{};
        }
        ///Decimator Clock Edge Select
        enum class DecclkedgeselVal {
            v0=0x00000000,     ///<Posedge will be used.
            v1=0x00000001,     ///<Negedge will be used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,DecclkedgeselVal> decClkEdgeSel{}; 
        namespace DecclkedgeselValC{
            constexpr Register::FieldValue<decltype(decClkEdgeSel),DecclkedgeselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(decClkEdgeSel),DecclkedgeselVal::v1> v1{};
        }
        ///Continuous Conversion/Single Conversion Mode Select
        enum class CcVal {
            v0=0x00000000,     ///<One conversion following a triggering event
            v1=0x00000001,     ///<Continuous conversions following a triggering event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CcVal> cc{}; 
        namespace CcValC{
            constexpr Register::FieldValue<decltype(cc),CcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cc),CcVal::v1> v1{};
        }
        ///Decimation Filter enable
        enum class DecenVal {
            v0=0x00000000,     ///<Decimation filter is disabled.
            v1=0x00000001,     ///<Decimation filter is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,DecenVal> decEn{}; 
        namespace DecenValC{
            constexpr Register::FieldValue<decltype(decEn),DecenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(decEn),DecenVal::v1> v1{};
        }
        ///Sigma Delta Modulator enable
        enum class SdmodenVal {
            v0=0x00000000,     ///<SD ADC3 is disabled
            v1=0x00000001,     ///<SD ADC3 is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SdmodenVal> sdModEn{}; 
        namespace SdmodenValC{
            constexpr Register::FieldValue<decltype(sdModEn),SdmodenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sdModEn),SdmodenVal::v1> v1{};
        }
        ///AFE Channel2 bypass mode
        enum class BypmodeVal {
            v0=0x00000000,     ///<Normal mode
            v1=0x00000001,     ///<Bypass mode where ADC and PGA of channel2 are disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,BypmodeVal> bypMode{}; 
        namespace BypmodeValC{
            constexpr Register::FieldValue<decltype(bypMode),BypmodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bypMode),BypmodeVal::v1> v1{};
        }
        ///Decimator OverSampling Ratio select
        enum class DecosrVal {
            v000=0x00000000,     ///<64
            v001=0x00000001,     ///<128
            v010=0x00000002,     ///<256
            v011=0x00000003,     ///<512
            v100=0x00000004,     ///<1024
            v101=0x00000005,     ///<2048
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,DecosrVal> decOsr{}; 
        namespace DecosrValC{
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v000> v000{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v001> v001{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v010> v010{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v011> v011{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v100> v100{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v101> v101{};
        }
    }
    namespace AfeCh3Cfr{    ///<Channel3 Configuration Register
        using Addr = Register::Address<0x4003000c,0x1ffd81ff,0,unsigned>;
        ///Hardware Trigger Select
        enum class HwtrgVal {
            v0=0x00000000,     ///<Software trigger select
            v1=0x00000001,     ///<Hardware trigger select
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,HwtrgVal> hwTrg{}; 
        namespace HwtrgValC{
            constexpr Register::FieldValue<decltype(hwTrg),HwtrgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hwTrg),HwtrgVal::v1> v1{};
        }
        ///Decimator Clock Input Select
        enum class DecclkinpselVal {
            v0=0x00000000,     ///<On the chip modulator clock will be used.
            v1=0x00000001,     ///<External clock will be used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,DecclkinpselVal> decClkInpSel{}; 
        namespace DecclkinpselValC{
            constexpr Register::FieldValue<decltype(decClkInpSel),DecclkinpselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(decClkInpSel),DecclkinpselVal::v1> v1{};
        }
        ///Decimator Clock Edge Select
        enum class DecclkedgeselVal {
            v0=0x00000000,     ///<Posedge will be used.
            v1=0x00000001,     ///<Negedge will be used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,DecclkedgeselVal> decClkEdgeSel{}; 
        namespace DecclkedgeselValC{
            constexpr Register::FieldValue<decltype(decClkEdgeSel),DecclkedgeselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(decClkEdgeSel),DecclkedgeselVal::v1> v1{};
        }
        ///Continuous Conversion/Single Conversion Mode Select
        enum class CcVal {
            v0=0x00000000,     ///<One conversion following a triggering event
            v1=0x00000001,     ///<Continuous conversions following a triggering event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CcVal> cc{}; 
        namespace CcValC{
            constexpr Register::FieldValue<decltype(cc),CcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cc),CcVal::v1> v1{};
        }
        ///Decimation Filter enable
        enum class DecenVal {
            v0=0x00000000,     ///<Decimation filter is disabled.
            v1=0x00000001,     ///<Decimation filter is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,DecenVal> decEn{}; 
        namespace DecenValC{
            constexpr Register::FieldValue<decltype(decEn),DecenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(decEn),DecenVal::v1> v1{};
        }
        ///Sigma Delta Modulator enable
        enum class SdmodenVal {
            v0=0x00000000,     ///<SD ADC3 is disabled
            v1=0x00000001,     ///<SD ADC3 is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SdmodenVal> sdModEn{}; 
        namespace SdmodenValC{
            constexpr Register::FieldValue<decltype(sdModEn),SdmodenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sdModEn),SdmodenVal::v1> v1{};
        }
        ///AFE Channel3 bypass mode
        enum class BypmodeVal {
            v0=0x00000000,     ///<Normal mode
            v1=0x00000001,     ///<Bypass mode where ADC and PGA of channel3 are disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,BypmodeVal> bypMode{}; 
        namespace BypmodeValC{
            constexpr Register::FieldValue<decltype(bypMode),BypmodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bypMode),BypmodeVal::v1> v1{};
        }
        ///Decimator OverSampling Ratio select
        enum class DecosrVal {
            v000=0x00000000,     ///<64
            v001=0x00000001,     ///<128
            v010=0x00000002,     ///<256
            v011=0x00000003,     ///<512
            v100=0x00000004,     ///<1024
            v101=0x00000005,     ///<2048
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,DecosrVal> decOsr{}; 
        namespace DecosrValC{
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v000> v000{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v001> v001{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v010> v010{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v011> v011{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v100> v100{};
            constexpr Register::FieldValue<decltype(decOsr),DecosrVal::v101> v101{};
        }
    }
    namespace AfeCr{    ///<Control Register
        using Addr = Register::Address<0x40030018,0x059b01ff,0,unsigned>;
        ///Start up count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,9),Register::ReadWriteAccess,unsigned> strtupCnt{}; 
        namespace StrtupcntValC{
        }
        ///Result Format
        enum class ResultformatVal {
            v0=0x00000000,     ///<Left justified 2's complement 32-bit : SVVVVVVVVVVVVVVVVVVVVVVV00000000 where (S= sign bit , V=valid result value, 0=zero)
            v1=0x00000001,     ///<Right justified 2's complement 32-bit : SSSSSSSSSVVVVVVVVVVVVVVVVVVVVVVV where (S= sign bit , V= valid result value, 0= zero)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ResultformatVal> resultFormat{}; 
        namespace ResultformatValC{
            constexpr Register::FieldValue<decltype(resultFormat),ResultformatVal::v0> v0{};
            constexpr Register::FieldValue<decltype(resultFormat),ResultformatVal::v1> v1{};
        }
        ///Delay OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dlyOk{}; 
        namespace DlyokValC{
        }
        ///Software Reset
        enum class RstbVal {
            v0=0x00000000,     ///<All ADCs, PGAs and Decimation filters are disabled. Clock Configuration bits will be reset.
            v1=0x00000001,     ///<.= All ADCs, PGAs and Decimation filters are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,RstbVal> rstB{}; 
        namespace RstbValC{
            constexpr Register::FieldValue<decltype(rstB),RstbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rstB),RstbVal::v1> v1{};
        }
        ///Low power Mode enable
        enum class LpmenVal {
            v0=0x00000000,     ///<AFE will be in normal mode
            v1=0x00000001,     ///<AFE will be in low power mode. Setting this bit reduce the current consumption of ADC and Buffer Amplifier , the max modulator clock frequency is below 1Mhz.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,LpmenVal> lpmEn{}; 
        namespace LpmenValC{
            constexpr Register::FieldValue<decltype(lpmEn),LpmenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lpmEn),LpmenVal::v1> v1{};
        }
        ///Software Trigger3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> softTrg3{}; 
        namespace Softtrg3ValC{
        }
        ///Software Trigger2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> softTrg2{}; 
        namespace Softtrg2ValC{
        }
        ///Software Trigger1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> softTrg1{}; 
        namespace Softtrg1ValC{
        }
        ///Software Trigger0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> softTrg0{}; 
        namespace Softtrg0ValC{
        }
        ///AFE Master Enable
        enum class MstrenVal {
            v0=0x00000000,     ///<All ADCs are disabled.
            v1=0x00000001,     ///<All ADCs and filters will get simultaneously enabled .
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,MstrenVal> mstrEn{}; 
        namespace MstrenValC{
            constexpr Register::FieldValue<decltype(mstrEn),MstrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mstrEn),MstrenVal::v1> v1{};
        }
    }
    namespace AfeCkr{    ///<Clock Configuration Register
        using Addr = Register::Address<0x4003001c,0x0f9fffff,0,unsigned>;
        ///Clock Source Select
        enum class ClsVal {
            v00=0x00000000,     ///<mod_clk0
            v01=0x00000001,     ///<mod_clk1
            v10=0x00000002,     ///<mod_clk2
            v11=0x00000003,     ///<mod_clk3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,ClsVal> cls{}; 
        namespace ClsValC{
            constexpr Register::FieldValue<decltype(cls),ClsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(cls),ClsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(cls),ClsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(cls),ClsVal::v11> v11{};
        }
        ///Clock Divider Select
        enum class DivVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,DivVal> div{}; 
        namespace DivValC{
            constexpr Register::FieldValue<decltype(div),DivVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(div),DivVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(div),DivVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(div),DivVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(div),DivVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(div),DivVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(div),DivVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(div),DivVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(div),DivVal::v1xxx> v1xxx{};
        }
    }
    namespace AfeDi{    ///<DMA and Interrupt Register
        using Addr = Register::Address<0x40030020,0x087fffff,0,unsigned>;
        ///Interrupt Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> inten3{}; 
        namespace Inten3ValC{
        }
        ///Interrupt Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> inten2{}; 
        namespace Inten2ValC{
        }
        ///Interrupt Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> inten1{}; 
        namespace Inten1ValC{
        }
        ///Interrupt Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> inten0{}; 
        namespace Inten0ValC{
        }
        ///DMA Enable3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dmaen3{}; 
        namespace Dmaen3ValC{
        }
        ///DMA Enable2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dmaen2{}; 
        namespace Dmaen2ValC{
        }
        ///DMA Enable1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dmaen1{}; 
        namespace Dmaen1ValC{
        }
        ///DMA Enable0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dmaen0{}; 
        namespace Dmaen0ValC{
        }
    }
    namespace AfeCh0Dr{    ///<Channel0 Delay Register
        using Addr = Register::Address<0x4003002c,0xfffff800,0,unsigned>;
        ///Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> dly{}; 
        namespace DlyValC{
        }
    }
    namespace AfeCh1Dr{    ///<Channel1 Delay Register
        using Addr = Register::Address<0x40030030,0xfffff800,0,unsigned>;
        ///Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> dly{}; 
        namespace DlyValC{
        }
    }
    namespace AfeCh2Dr{    ///<Channel2 Delay Register
        using Addr = Register::Address<0x40030034,0xfffff800,0,unsigned>;
        ///Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> dly{}; 
        namespace DlyValC{
        }
    }
    namespace AfeCh3Dr{    ///<Channel3 Delay Register
        using Addr = Register::Address<0x40030038,0xfffff800,0,unsigned>;
        ///Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> dly{}; 
        namespace DlyValC{
        }
    }
    namespace AfeCh0Rr{    ///<Channel0 Result Register
        using Addr = Register::Address<0x40030044,0x00000000,0,unsigned>;
        ///Sample Data Result
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> sdr{}; 
        namespace SdrValC{
        }
        ///Sign Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> signBits{}; 
        namespace SignbitsValC{
        }
    }
    namespace AfeCh1Rr{    ///<Channel1 Result Register
        using Addr = Register::Address<0x40030048,0x00000000,0,unsigned>;
        ///Sample Data Result
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> sdr{}; 
        namespace SdrValC{
        }
        ///Sign Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> signBits{}; 
        namespace SignbitsValC{
        }
    }
    namespace AfeCh2Rr{    ///<Channel2 Result Register
        using Addr = Register::Address<0x4003004c,0x00000000,0,unsigned>;
        ///Sample Data result
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> sdr{}; 
        namespace SdrValC{
        }
        ///Sign Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> signBits{}; 
        namespace SignbitsValC{
        }
    }
    namespace AfeCh3Rr{    ///<Channel3 Result Register
        using Addr = Register::Address<0x40030050,0x00000000,0,unsigned>;
        ///Sample Data result
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> sdr{}; 
        namespace SdrValC{
        }
        ///Sign Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> signBits{}; 
        namespace SignbitsValC{
        }
    }
    namespace AfeSr{    ///<Status Register
        using Addr = Register::Address<0x4003005c,0x0e10ffff,0,unsigned>;
        ///AFE Ready4
        enum class Rdy3Val {
            v0=0x00000000,     ///<AFE Channel3 is disabled or has not completed its start up period
            v1=0x00000001,     ///<AFE Channel3 is ready to initiate conversions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Rdy3Val> rdy3{}; 
        namespace Rdy3ValC{
            constexpr Register::FieldValue<decltype(rdy3),Rdy3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rdy3),Rdy3Val::v1> v1{};
        }
        ///AFE Ready3
        enum class Rdy2Val {
            v0=0x00000000,     ///<AFE Channel2 is disabled or has not completed its start up period
            v1=0x00000001,     ///<AFE Channel2 is ready to initiate conversions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Rdy2Val> rdy2{}; 
        namespace Rdy2ValC{
            constexpr Register::FieldValue<decltype(rdy2),Rdy2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rdy2),Rdy2Val::v1> v1{};
        }
        ///AFE Ready2
        enum class Rdy1Val {
            v0=0x00000000,     ///<AFE Channel1 is disabled or has not completed its start up period
            v1=0x00000001,     ///<AFE Channel1 is ready to initiate conversions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Rdy1Val> rdy1{}; 
        namespace Rdy1ValC{
            constexpr Register::FieldValue<decltype(rdy1),Rdy1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rdy1),Rdy1Val::v1> v1{};
        }
        ///AFE Ready1
        enum class Rdy0Val {
            v0=0x00000000,     ///<AFE Channel0 is disabled or has not completed its start up period
            v1=0x00000001,     ///<AFE Channel0 is ready to initiate conversions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Rdy0Val> rdy0{}; 
        namespace Rdy0ValC{
            constexpr Register::FieldValue<decltype(rdy0),Rdy0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rdy0),Rdy0Val::v1> v1{};
        }
        ///Overflow Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ovr3{}; 
        namespace Ovr3ValC{
        }
        ///Overflow Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ovr2{}; 
        namespace Ovr2ValC{
        }
        ///Overflow Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ovr1{}; 
        namespace Ovr1ValC{
        }
        ///Overflow Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ovr0{}; 
        namespace Ovr0ValC{
        }
        ///Conversion Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> coc3{}; 
        namespace Coc3ValC{
        }
        ///Conversion Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> coc2{}; 
        namespace Coc2ValC{
        }
        ///Conversion Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> coc1{}; 
        namespace Coc1ValC{
        }
        ///Conversion Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> coc0{}; 
        namespace Coc0ValC{
        }
    }
}
