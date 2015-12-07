#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Noneconfig{    ///<Configuration
        using Addr = Register::Address<0x4004d000,0xb0fc8002,0,unsigned>;
        ///Module Enable. 
        enum class LcdenVal {
            disabled=0x00000000,     ///<Disable the LCD module.
            enabled=0x00000001,     ///<Enable the LCD module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LcdenVal> lcden{}; 
        namespace LcdenValC{
            constexpr Register::FieldValue<decltype(lcden),LcdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lcden),LcdenVal::enabled> enabled{};
        }
        ///Charge Pump Full Power Drive Mode Enable. 
        enum class CpfpdenVal {
            disabled=0x00000000,     ///<Disable the LCD charge pump's full power drive mode. The charge pump draws less power but operates with reduced output current capabilities.
            enabled=0x00000001,     ///<Enable the LCD charge pump's full output drive mode. The charge pump operates at full power.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CpfpdenVal> cpfpden{}; 
        namespace CpfpdenValC{
            constexpr Register::FieldValue<decltype(cpfpden),CpfpdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpfpden),CpfpdenVal::enabled> enabled{};
        }
        ///LCD Missing Clock Detector Enable. 
        enum class McdenVal {
            disabled=0x00000000,     ///<Disable the dedicated LCD missing clock detector.
            enabled=0x00000001,     ///<Enable the dedicated LCD missing clock detector.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,McdenVal> mcden{}; 
        namespace McdenValC{
            constexpr Register::FieldValue<decltype(mcden),McdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mcden),McdenVal::enabled> enabled{};
        }
        ///RTC Clock Request Enable. 
        enum class RtccenVal {
            disabled=0x00000000,     ///<The LCD module does not require the RTC clock.
            enabled=0x00000001,     ///<The LCD module requires an active and valid RTC clock (RTC0TCLK).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RtccenVal> rtccen{}; 
        namespace RtccenValC{
            constexpr Register::FieldValue<decltype(rtccen),RtccenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtccen),RtccenVal::enabled> enabled{};
        }
        ///Bias Enable. 
        enum class BiasenVal {
            disabled=0x00000000,     ///<Disable the LCD bias current.
            enabled=0x00000001,     ///<Enable the LCD bias current.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BiasenVal> biasen{}; 
        namespace BiasenValC{
            constexpr Register::FieldValue<decltype(biasen),BiasenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(biasen),BiasenVal::enabled> enabled{};
        }
        ///DCDC Bias Output Enable. 
        enum class DcdcbiasenVal {
            disabled=0x00000000,     ///<Disable the secondary bias current output.
            enabled=0x00000001,     ///<Enable the secondary bias current output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DcdcbiasenVal> dcdcbiasen{}; 
        namespace DcdcbiasenValC{
            constexpr Register::FieldValue<decltype(dcdcbiasen),DcdcbiasenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dcdcbiasen),DcdcbiasenVal::enabled> enabled{};
        }
        ///DCDC Bias Standby Enable. 
        enum class DcdcstdbyenVal {
            disabled=0x00000000,     ///<The DCDC bias is enabled in Power Mode 8.
            enabled=0x00000001,     ///<The DCDC bias is disabled in Power Mode 8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DcdcstdbyenVal> dcdcstdbyen{}; 
        namespace DcdcstdbyenValC{
            constexpr Register::FieldValue<decltype(dcdcstdbyen),DcdcstdbyenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dcdcstdbyen),DcdcstdbyenVal::enabled> enabled{};
        }
        ///Charge Pump Bypass Enable. 
        enum class CpbenVal {
            disabled=0x00000000,     ///<The LCD charge pump generates the VLCD voltage.
            enabled=0x00000001,     ///<Bypass the LCD charge pump and connect VLCD directly to VBAT.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CpbenVal> cpben{}; 
        namespace CpbenValC{
            constexpr Register::FieldValue<decltype(cpben),CpbenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpben),CpbenVal::enabled> enabled{};
        }
        ///High-Contrast-Voltage Low-Power Mode Enable. 
        enum class HcvlpmenVal {
            disabled=0x00000000,     ///<Disable the high-contrast-voltage low-power mode.
            enabled=0x00000001,     ///<Enable the high-contrast-voltage low-power mode. This mode reduces power consumption when VLCD is higher than VBAT.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,HcvlpmenVal> hcvlpmen{}; 
        namespace HcvlpmenValC{
            constexpr Register::FieldValue<decltype(hcvlpmen),HcvlpmenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hcvlpmen),HcvlpmenVal::enabled> enabled{};
        }
        ///VBAT Monitor Low Power Enable. 
        enum class VbmlpenVal {
            disabled=0x00000000,     ///<Disable the LCD VBAT Monitor low power mode.
            enabled=0x00000001,     ///<Enable the LCD VBAT Monitor low power mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,VbmlpenVal> vbmlpen{}; 
        namespace VbmlpenValC{
            constexpr Register::FieldValue<decltype(vbmlpen),VbmlpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vbmlpen),VbmlpenVal::enabled> enabled{};
        }
        ///Charge-Pump Oscillator Low-Power Enable. 
        enum class CpolpenVal {
            disabled=0x00000000,     ///<Disable the charge-pump oscillator low-power mode.
            enabled=0x00000001,     ///<Enable the charge-pump oscillator low-power mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,CpolpenVal> cpolpen{}; 
        namespace CpolpenValC{
            constexpr Register::FieldValue<decltype(cpolpen),CpolpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpolpen),CpolpenVal::enabled> enabled{};
        }
        ///Comparator Buffer Low-Power Enable. 
        enum class CmpblpenVal {
            disabled=0x00000000,     ///<Disable the comparator buffer low-power mode.
            enabled=0x00000001,     ///<Enable the comparator buffer low-power mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CmpblpenVal> cmpblpen{}; 
        namespace CmpblpenValC{
            constexpr Register::FieldValue<decltype(cmpblpen),CmpblpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmpblpen),CmpblpenVal::enabled> enabled{};
        }
        ///Bias Switching Enable. 
        enum class BiassenVal {
            disabled=0x00000000,     ///<Disable bias switching.
            enabled=0x00000001,     ///<Enable bias switching.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,BiassenVal> biassen{}; 
        namespace BiassenValC{
            constexpr Register::FieldValue<decltype(biassen),BiassenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(biassen),BiassenVal::enabled> enabled{};
        }
        ///Reference Band Gap Switching Enable. 
        enum class RbgsenVal {
            disabled=0x00000000,     ///<Disable reference band gap switching mode.
            enabled=0x00000001,     ///<Enable reference band gap switching mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,RbgsenVal> rbgsen{}; 
        namespace RbgsenValC{
            constexpr Register::FieldValue<decltype(rbgsen),RbgsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rbgsen),RbgsenVal::enabled> enabled{};
        }
        ///Charge-Pump Auto-Contrast Enable. 
        enum class CpacenVal {
            disabled=0x00000000,     ///<VLCD continues to track VBAT when VBAT drops below the programmed VLCD value.
            enabled=0x00000001,     ///<The module automatically enables the charge pump and maintains the VLCD voltage when VBAT drops below the programmed VBAT monitor level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,CpacenVal> cpacen{}; 
        namespace CpacenValC{
            constexpr Register::FieldValue<decltype(cpacen),CpacenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpacen),CpacenVal::enabled> enabled{};
        }
        ///Force Bias Continuous Mode Enable. 
        enum class FbiascenVal {
            disabled=0x00000000,     ///<The bias operates as configured.
            enabled=0x00000001,     ///<Force the bias to operate in continuous mode. The bias will cleanly transition from its configuration settings to continuous mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,FbiascenVal> fbiascen{}; 
        namespace FbiascenValC{
            constexpr Register::FieldValue<decltype(fbiascen),FbiascenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fbiascen),FbiascenVal::enabled> enabled{};
        }
        ///High-Contrast-Voltage Comparator Bypass Enable. 
        enum class HcvcbypenVal {
            disabled=0x00000000,     ///<Hardware enables the high-contrast-voltage comparator as needed.
            enabled=0x00000001,     ///<High-contrast-voltage comparator in bypass mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,HcvcbypenVal> hcvcbypen{}; 
        namespace HcvcbypenValC{
            constexpr Register::FieldValue<decltype(hcvcbypen),HcvcbypenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hcvcbypen),HcvcbypenVal::enabled> enabled{};
        }
        ///High-Contrast-Voltage Comparator Force On Enable. 
        enum class HcvcfoenVal {
            disabled=0x00000000,     ///<Hardware enables the high-contrast-voltage comparator as needed.
            enabled=0x00000001,     ///<High-contrast-voltage comparator force on enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,HcvcfoenVal> hcvcfoen{}; 
        namespace HcvcfoenValC{
            constexpr Register::FieldValue<decltype(hcvcfoen),HcvcfoenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hcvcfoen),HcvcfoenVal::enabled> enabled{};
        }
        ///High-Contrast-Voltage Comparator Hysteresis. 
        enum class HcvchmdVal {
            high=0x00000000,     ///<Set the high-contrast-voltage comparator to high-hysteresis mode. This is the recommended setting.
            low=0x00000001,     ///<Set the high-contrast-voltage comparator to low-hysteresis mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,HcvchmdVal> hcvchmd{}; 
        namespace HcvchmdValC{
            constexpr Register::FieldValue<decltype(hcvchmd),HcvchmdVal::high> high{};
            constexpr Register::FieldValue<decltype(hcvchmd),HcvchmdVal::low> low{};
        }
        ///High-Contrast-Voltage Comparator Bias. 
        enum class HcvcbmdVal {
            high=0x00000000,     ///<Set the high-contrast-voltage comparator to high bias mode.
            low=0x00000001,     ///<Set the high-contrast-voltage comparator to low-bias mode. This is the recommended setting.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,HcvcbmdVal> hcvcbmd{}; 
        namespace HcvcbmdValC{
            constexpr Register::FieldValue<decltype(hcvcbmd),HcvcbmdVal::high> high{};
            constexpr Register::FieldValue<decltype(hcvcbmd),HcvcbmdVal::low> low{};
        }
        ///High-Contrast-Voltage Comparator Status. 
        enum class CpcsVal {
            vbat=0x00000000,     ///<VBAT is greater than VLCD. 
            vlcd=0x00000001,     ///<VLCD is greater than VBAT.   
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,CpcsVal> cpcs{}; 
        namespace CpcsValC{
            constexpr Register::FieldValue<decltype(cpcs),CpcsVal::vbat> vbat{};
            constexpr Register::FieldValue<decltype(cpcs),CpcsVal::vlcd> vlcd{};
        }
    }
    namespace Noneclkcontrol{    ///<Clock Control
        using Addr = Register::Address<0x4004d020,0xcffffc00,0,unsigned>;
        ///Clock Divider. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        namespace ClkdivValC{
        }
        ///RTC Input Clock Divider. 
        enum class RtcclkdivVal {
            divideBy1=0x00000000,     ///<None
            divideBy2=0x00000001,     ///<None
            divideBy4=0x00000002,     ///<None
            divideBy8=0x00000003,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,RtcclkdivVal> rtcclkdiv{}; 
        namespace RtcclkdivValC{
            constexpr Register::FieldValue<decltype(rtcclkdiv),RtcclkdivVal::divideBy1> divideBy1{};
            constexpr Register::FieldValue<decltype(rtcclkdiv),RtcclkdivVal::divideBy2> divideBy2{};
            constexpr Register::FieldValue<decltype(rtcclkdiv),RtcclkdivVal::divideBy4> divideBy4{};
            constexpr Register::FieldValue<decltype(rtcclkdiv),RtcclkdivVal::divideBy8> divideBy8{};
        }
    }
    namespace Noneblkcontrol{    ///<Blinking Control
        using Addr = Register::Address<0x4004d030,0xfffff000,0,unsigned>;
        ///Hardware Blinking Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blkmask{}; 
        namespace BlkmaskValC{
        }
        ///Hardware Blinking Rate Divider Exponent. 
        enum class BlkrexpVal {
            divideBy2=0x00000002,     ///<Set blink rate divider to divide by 2.
            divideBy4=0x00000003,     ///<Set blink rate divider to divide by 4.
            divideBy8=0x00000004,     ///<Set blink rate divider to divide by 8.
            divideBy16=0x00000005,     ///<Set blink rate divider to divide by 16.
            divideBy32=0x00000006,     ///<Set blink rate divider to divide by 32.
            divideBy64=0x00000007,     ///<Set blink rate divider to divide by 64.
            divideBy128=0x00000008,     ///<Set blink rate divider to divide by 128.
            divideBy256=0x00000009,     ///<Set blink rate divider to divide by 256.
            divideBy512=0x0000000a,     ///<Set blink rate divider to divide by 512.
            divideBy1024=0x0000000b,     ///<Set blink rate divider to divide by 1024.
            divideBy2048=0x0000000c,     ///<Set blink rate divider to divide by 2048.
            divideBy4096=0x0000000d,     ///<Set blink rate divider to divide by 4096.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,BlkrexpVal> blkrexp{}; 
        namespace BlkrexpValC{
            constexpr Register::FieldValue<decltype(blkrexp),BlkrexpVal::divideBy2> divideBy2{};
            constexpr Register::FieldValue<decltype(blkrexp),BlkrexpVal::divideBy4> divideBy4{};
            constexpr Register::FieldValue<decltype(blkrexp),BlkrexpVal::divideBy8> divideBy8{};
            constexpr Register::FieldValue<decltype(blkrexp),BlkrexpVal::divideBy16> divideBy16{};
            constexpr Register::FieldValue<decltype(blkrexp),BlkrexpVal::divideBy32> divideBy32{};
            constexpr Register::FieldValue<decltype(blkrexp),BlkrexpVal::divideBy64> divideBy64{};
            constexpr Register::FieldValue<decltype(blkrexp),BlkrexpVal::divideBy128> divideBy128{};
            constexpr Register::FieldValue<decltype(blkrexp),BlkrexpVal::divideBy256> divideBy256{};
            constexpr Register::FieldValue<decltype(blkrexp),BlkrexpVal::divideBy512> divideBy512{};
            constexpr Register::FieldValue<decltype(blkrexp),BlkrexpVal::divideBy1024> divideBy1024{};
            constexpr Register::FieldValue<decltype(blkrexp),BlkrexpVal::divideBy2048> divideBy2048{};
            constexpr Register::FieldValue<decltype(blkrexp),BlkrexpVal::divideBy4096> divideBy4096{};
        }
    }
    namespace Nonesegcontrol{    ///<Segment Control
        using Addr = Register::Address<0x4004d040,0xfffffe08,0,unsigned>;
        ///Hardware Bias Mode. 
        enum class BiasmdVal {
            oneThird=0x00000000,     ///<Select 1/3 bias. Use for three-mux segment mode and four-mux segment mode.
            oneHalf=0x00000001,     ///<Select 1/2 bias. Use for two-mux segment mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BiasmdVal> biasmd{}; 
        namespace BiasmdValC{
            constexpr Register::FieldValue<decltype(biasmd),BiasmdVal::oneThird> oneThird{};
            constexpr Register::FieldValue<decltype(biasmd),BiasmdVal::oneHalf> oneHalf{};
        }
        ///Segment Mode. 
        enum class SegmdVal {
            static_=0x00000000,     ///<Select static segment mode with one common COMn.0 used.
            v2Mux=0x00000001,     ///<Select two-mux segment mode with two commons (COMn.0 and COMn.1) used.
            v3Mux=0x00000002,     ///<Select three-mux segment mode with three commons (COMn.0, COMn.1, COMn.2) used.
            v4Mux=0x00000003,     ///<Select four-mux segment mode with four commons (COMn.0, COMn.1, COMn.2 and COMn.3) used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,SegmdVal> segmd{}; 
        namespace SegmdValC{
            constexpr Register::FieldValue<decltype(segmd),SegmdVal::static_> static_{};
            constexpr Register::FieldValue<decltype(segmd),SegmdVal::v2Mux> v2Mux{};
            constexpr Register::FieldValue<decltype(segmd),SegmdVal::v3Mux> v3Mux{};
            constexpr Register::FieldValue<decltype(segmd),SegmdVal::v4Mux> v4Mux{};
        }
        ///Segment Blank Enable. 
        enum class BlankenVal {
            disabled=0x00000000,     ///<Operate segments normally.
            enabled=0x00000001,     ///<Blank the LCD by disabling all LCD segment and common pins.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BlankenVal> blanken{}; 
        namespace BlankenValC{
            constexpr Register::FieldValue<decltype(blanken),BlankenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(blanken),BlankenVal::enabled> enabled{};
        }
        ///Reset Phase Enable. 
        enum class RphenVal {
            disabled=0x00000000,     ///<Hardware switches the LCD segment and common pin controls directly from one state to another.
            enabled=0x00000001,     ///<Hardware switches the LCD segment and common pin controls to intermediate states for several RTC clock cycles before switching to the next state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RphenVal> rphen{}; 
        namespace RphenValC{
            constexpr Register::FieldValue<decltype(rphen),RphenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rphen),RphenVal::enabled> enabled{};
        }
        ///Reset Phase Mode. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> rphmd{}; 
        namespace RphmdValC{
        }
    }
    namespace Nonectrstcontrol{    ///<Contrast Control
        using Addr = Register::Address<0x4004d060,0xdffeffe0,0,unsigned>;
        ///Contrast Voltage. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ctrst{}; 
        namespace CtrstValC{
        }
        ///Contrast Busy Flag. 
        enum class CtrstbfVal {
            notSet=0x00000000,     ///<An update of the internal contrast registers is not in progress.
            set=0x00000001,     ///<The internal contrast registers are busy updating.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,CtrstbfVal> ctrstbf{}; 
        namespace CtrstbfValC{
            constexpr Register::FieldValue<decltype(ctrstbf),CtrstbfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ctrstbf),CtrstbfVal::set> set{};
        }
        ///Charge Pump Capacitor Divider Enable. 
        enum class CpcdenVal {
            disabled=0x00000000,     ///<Disable the charge pump capacitor divider.
            enabled=0x00000001,     ///<Enable the charge pump capacitor divider.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,CpcdenVal> cpcden{}; 
        namespace CpcdenValC{
            constexpr Register::FieldValue<decltype(cpcden),CpcdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpcden),CpcdenVal::enabled> enabled{};
        }
    }
    namespace Nonevbmcontrol{    ///<VBAT Monitor Control
        using Addr = Register::Address<0x4004d070,0x1e3effe0,0,unsigned>;
        ///VBAT Monitor Threshold. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> vbmth{}; 
        namespace VbmthValC{
        }
        ///VBAT Monitor Busy Flag. 
        enum class VbmbfVal {
            notSet=0x00000000,     ///<An update of the internal VBAT monitor registers is not in progress.
            set=0x00000001,     ///<The internal VBAT monitor registers are busy updating.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,VbmbfVal> vbmbf{}; 
        namespace VbmbfValC{
            constexpr Register::FieldValue<decltype(vbmbf),VbmbfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(vbmbf),VbmbfVal::set> set{};
        }
        ///VBAT Monitor Clock Divider. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,22),Register::ReadWriteAccess,unsigned> vbmclkdiv{}; 
        namespace VbmclkdivValC{
        }
        ///VBAT Monitor Capacitor Divider Enable. 
        enum class VbmcdenVal {
            disabled=0x00000000,     ///<Disable the VBAT monitor capacitor divider.
            enabled=0x00000001,     ///<Enable the VBAT monitor capacitor divider.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,VbmcdenVal> vbmcden{}; 
        namespace VbmcdenValC{
            constexpr Register::FieldValue<decltype(vbmcden),VbmcdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vbmcden),VbmcdenVal::enabled> enabled{};
        }
        ///VBAT Monitor Offset Enable. 
        enum class VbmoenVal {
            disabled=0x00000000,     ///<The VBAT monitor threshold set by the VBMTH field functions as an absolute threshold value for the VBAT monitor.
            enabled=0x00000001,     ///<The VBAT monitor threshold set by the VBMTH field functions as an offset to the LCD contrast value set by CTRSTMD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,VbmoenVal> vbmoen{}; 
        namespace VbmoenValC{
            constexpr Register::FieldValue<decltype(vbmoen),VbmoenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vbmoen),VbmoenVal::enabled> enabled{};
        }
        ///VBAT Monitor Enable. 
        enum class VbmenVal {
            disabled=0x00000000,     ///<Disable the VBAT monitor.
            enabled=0x00000001,     ///<Enable the VBAT monitor.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,VbmenVal> vbmen{}; 
        namespace VbmenValC{
            constexpr Register::FieldValue<decltype(vbmen),VbmenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vbmen),VbmenVal::enabled> enabled{};
        }
    }
    namespace Nonesegmask0{    ///<Segment Mask 0
        using Addr = Register::Address<0x4004d080,0x00000000,0,unsigned>;
        ///Segment Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> segen{}; 
        namespace SegenValC{
        }
    }
    namespace Nonesegmask1{    ///<Segment Mask 1
        using Addr = Register::Address<0x4004d090,0xffffff00,0,unsigned>;
        ///Segment Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> segen{}; 
        namespace SegenValC{
        }
    }
    namespace Nonesegdata0{    ///<Segment Data 0
        using Addr = Register::Address<0x4004d0a0,0x00000000,0,unsigned>;
        ///Segment LCDn.0 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> segpin0{}; 
        namespace Segpin0ValC{
        }
        ///Segment LCDn.1 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> segpin1{}; 
        namespace Segpin1ValC{
        }
        ///Segment LCDn.2 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> segpin2{}; 
        namespace Segpin2ValC{
        }
        ///Segment LCDn.3 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> segpin3{}; 
        namespace Segpin3ValC{
        }
        ///Segment LCDn.4 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> segpin4{}; 
        namespace Segpin4ValC{
        }
        ///Segment LCDn.5 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> segpin5{}; 
        namespace Segpin5ValC{
        }
        ///Segment LCDn.6 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> segpin6{}; 
        namespace Segpin6ValC{
        }
        ///Segment LCDn.7 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> segpin7{}; 
        namespace Segpin7ValC{
        }
    }
    namespace Nonesegdata1{    ///<Segment Data 1
        using Addr = Register::Address<0x4004d0b0,0x00000000,0,unsigned>;
        ///Segment LCDn.8 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> segpin8{}; 
        namespace Segpin8ValC{
        }
        ///Segment LCDn.9 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> segpin9{}; 
        namespace Segpin9ValC{
        }
        ///Segment LCDn.10 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> segpin10{}; 
        namespace Segpin10ValC{
        }
        ///Segment LCDn.11 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> segpin11{}; 
        namespace Segpin11ValC{
        }
        ///Segment LCDn.12 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> segpin12{}; 
        namespace Segpin12ValC{
        }
        ///Segment LCDn.13 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> segpin13{}; 
        namespace Segpin13ValC{
        }
        ///Segment LCDn.14 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> segpin14{}; 
        namespace Segpin14ValC{
        }
        ///Segment LCDn.15 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> segpin15{}; 
        namespace Segpin15ValC{
        }
    }
    namespace Nonesegdata2{    ///<Segment Data 2
        using Addr = Register::Address<0x4004d0c0,0x00000000,0,unsigned>;
        ///Segment LCDn.16 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> segpin16{}; 
        namespace Segpin16ValC{
        }
        ///Segment LCDn.17 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> segpin17{}; 
        namespace Segpin17ValC{
        }
        ///Segment LCDn.18 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> segpin18{}; 
        namespace Segpin18ValC{
        }
        ///Segment LCDn.19 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> segpin19{}; 
        namespace Segpin19ValC{
        }
        ///Segment LCDn.20 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> segpin20{}; 
        namespace Segpin20ValC{
        }
        ///Segment LCDn.21 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> segpin21{}; 
        namespace Segpin21ValC{
        }
        ///Segment LCDn.22 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> segpin22{}; 
        namespace Segpin22ValC{
        }
        ///Segment LCDn.23 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> segpin23{}; 
        namespace Segpin23ValC{
        }
    }
    namespace Nonesegdata3{    ///<Segment Data 3
        using Addr = Register::Address<0x4004d0d0,0x00000000,0,unsigned>;
        ///Segment LCDn.24 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> segpin24{}; 
        namespace Segpin24ValC{
        }
        ///Segment LCDn.25 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> segpin25{}; 
        namespace Segpin25ValC{
        }
        ///Segment LCDn.26 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> segpin26{}; 
        namespace Segpin26ValC{
        }
        ///Segment LCDn.27 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> segpin27{}; 
        namespace Segpin27ValC{
        }
        ///Segment LCDn.28 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> segpin28{}; 
        namespace Segpin28ValC{
        }
        ///Segment LCDn.29 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> segpin29{}; 
        namespace Segpin29ValC{
        }
        ///Segment LCDn.30 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> segpin30{}; 
        namespace Segpin30ValC{
        }
        ///Segment LCDn.31 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> segpin31{}; 
        namespace Segpin31ValC{
        }
    }
    namespace Nonesegdata4{    ///<Segment Data 4
        using Addr = Register::Address<0x4004d0e0,0x00000000,0,unsigned>;
        ///Segment LCDn.32 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> segpin32{}; 
        namespace Segpin32ValC{
        }
        ///Segment LCDn.33 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> segpin33{}; 
        namespace Segpin33ValC{
        }
        ///Segment LCDn.34 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> segpin34{}; 
        namespace Segpin34ValC{
        }
        ///Segment LCDn.35 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> segpin35{}; 
        namespace Segpin35ValC{
        }
        ///Segment LCDn.36 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> segpin36{}; 
        namespace Segpin36ValC{
        }
        ///Segment LCDn.37 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> segpin37{}; 
        namespace Segpin37ValC{
        }
        ///Segment LCDn.38 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> segpin38{}; 
        namespace Segpin38ValC{
        }
        ///Segment LCDn.39 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> segpin39{}; 
        namespace Segpin39ValC{
        }
    }
}
