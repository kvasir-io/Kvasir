#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Noneconfig{    ///<Configuration
        using Addr = Register::Address<0x4004d000,0xb0c08002,0,unsigned>;
        ///Module Enable. 
        enum class LcdenVal {
            disabled=0x00000000,     ///<Disable the LCD module.
            enabled=0x00000001,     ///<Enable the LCD module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LcdenVal> lcden{}; 
        namespace LcdenValC{
            constexpr Register::FieldValue<decltype(lcden)::Type,LcdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lcden)::Type,LcdenVal::enabled> enabled{};
        }
        ///Charge Pump Full Power Drive Mode Enable. 
        enum class CpfpdenVal {
            disabled=0x00000000,     ///<Disable the LCD charge pump's full power drive mode. The charge pump draws less power but operates with reduced output current capabilities.
            enabled=0x00000001,     ///<Enable the LCD charge pump's full output drive mode. The charge pump operates at full power.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CpfpdenVal> cpfpden{}; 
        namespace CpfpdenValC{
            constexpr Register::FieldValue<decltype(cpfpden)::Type,CpfpdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpfpden)::Type,CpfpdenVal::enabled> enabled{};
        }
        ///LCD Missing Clock Detector Enable. 
        enum class McdenVal {
            disabled=0x00000000,     ///<Disable the dedicated LCD missing clock detector.
            enabled=0x00000001,     ///<Enable the dedicated LCD missing clock detector.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,McdenVal> mcden{}; 
        namespace McdenValC{
            constexpr Register::FieldValue<decltype(mcden)::Type,McdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mcden)::Type,McdenVal::enabled> enabled{};
        }
        ///RTC Clock Request Enable. 
        enum class RtccenVal {
            disabled=0x00000000,     ///<The LCD module does not require the RTC clock.
            enabled=0x00000001,     ///<The LCD module requires an active and valid RTC clock (RTC0TCLK).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RtccenVal> rtccen{}; 
        namespace RtccenValC{
            constexpr Register::FieldValue<decltype(rtccen)::Type,RtccenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtccen)::Type,RtccenVal::enabled> enabled{};
        }
        ///Bias Enable. 
        enum class BiasenVal {
            disabled=0x00000000,     ///<Disable the LCD bias current.
            enabled=0x00000001,     ///<Enable the LCD bias current.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BiasenVal> biasen{}; 
        namespace BiasenValC{
            constexpr Register::FieldValue<decltype(biasen)::Type,BiasenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(biasen)::Type,BiasenVal::enabled> enabled{};
        }
        ///DCDC Bias Output Enable. 
        enum class DcdcbiasenVal {
            disabled=0x00000000,     ///<Disable the secondary bias current output.
            enabled=0x00000001,     ///<Enable the secondary bias current output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DcdcbiasenVal> dcdcbiasen{}; 
        namespace DcdcbiasenValC{
            constexpr Register::FieldValue<decltype(dcdcbiasen)::Type,DcdcbiasenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dcdcbiasen)::Type,DcdcbiasenVal::enabled> enabled{};
        }
        ///DCDC Bias Standy Enable. 
        enum class DcdcstdbyenVal {
            disabled=0x00000000,     ///<The DCDC bias is enabled in Power Mode 8.
            enabled=0x00000001,     ///<The DCDC bias is disabled in Power Mode 8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DcdcstdbyenVal> dcdcstdbyen{}; 
        namespace DcdcstdbyenValC{
            constexpr Register::FieldValue<decltype(dcdcstdbyen)::Type,DcdcstdbyenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dcdcstdbyen)::Type,DcdcstdbyenVal::enabled> enabled{};
        }
        ///Charge Pump Bypass Enable. 
        enum class CpbenVal {
            disabled=0x00000000,     ///<The LCD charge pump generates the VLCD voltage.
            enabled=0x00000001,     ///<Bypass the LCD charge pump and connect VLCD directly to VBAT.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CpbenVal> cpben{}; 
        namespace CpbenValC{
            constexpr Register::FieldValue<decltype(cpben)::Type,CpbenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpben)::Type,CpbenVal::enabled> enabled{};
        }
        ///High Contrast Voltage Low-Power Mode Enable. 
        enum class HcvlpmenVal {
            disabled=0x00000000,     ///<Disable the high contrast voltage low-power mode.
            enabled=0x00000001,     ///<Enable the high contrast voltage low-power mode. This mode reduces power consumption whenVLCD is higher than VBAT.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,HcvlpmenVal> hcvlpmen{}; 
        namespace HcvlpmenValC{
            constexpr Register::FieldValue<decltype(hcvlpmen)::Type,HcvlpmenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hcvlpmen)::Type,HcvlpmenVal::enabled> enabled{};
        }
        ///VBAT Monitor Low Power Enable. 
        enum class VbmlpenVal {
            disabled=0x00000000,     ///<Disable the LCD VBAT Monitor low power mode.
            enabled=0x00000001,     ///<Enable the LCD VBAT Monitor low power mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,VbmlpenVal> vbmlpen{}; 
        namespace VbmlpenValC{
            constexpr Register::FieldValue<decltype(vbmlpen)::Type,VbmlpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vbmlpen)::Type,VbmlpenVal::enabled> enabled{};
        }
        ///Charge Pump Oscillator Low Power Enable. 
        enum class CpolpenVal {
            disabled=0x00000000,     ///<Disable the charge pump oscillator low power mode.
            enabled=0x00000001,     ///<Enable the charge pump oscillator low power mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,CpolpenVal> cpolpen{}; 
        namespace CpolpenValC{
            constexpr Register::FieldValue<decltype(cpolpen)::Type,CpolpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpolpen)::Type,CpolpenVal::enabled> enabled{};
        }
        ///Comparator Buffer Low Power Enable. 
        enum class CmpblpenVal {
            disabled=0x00000000,     ///<Disable the comparator buffer low power mode.
            enabled=0x00000001,     ///<Enable the comparator buffer low power mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CmpblpenVal> cmpblpen{}; 
        namespace CmpblpenValC{
            constexpr Register::FieldValue<decltype(cmpblpen)::Type,CmpblpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmpblpen)::Type,CmpblpenVal::enabled> enabled{};
        }
        ///Bias Switching Enable. 
        enum class BiassenVal {
            disabled=0x00000000,     ///<Disable bias switching.
            enabled=0x00000001,     ///<Enable bias switching.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,BiassenVal> biassen{}; 
        namespace BiassenValC{
            constexpr Register::FieldValue<decltype(biassen)::Type,BiassenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(biassen)::Type,BiassenVal::enabled> enabled{};
        }
        ///Reference Bandgap Switching Enable. 
        enum class RbgsenVal {
            disabled=0x00000000,     ///<Disable reference bandgap switching mode.
            enabled=0x00000001,     ///<Disable reference bandgap switching mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,RbgsenVal> rbgsen{}; 
        namespace RbgsenValC{
            constexpr Register::FieldValue<decltype(rbgsen)::Type,RbgsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rbgsen)::Type,RbgsenVal::enabled> enabled{};
        }
        ///Charge Pump Auto-Contrast Enable. 
        enum class CpacenVal {
            disabled=0x00000000,     ///<VLCD continues to track VBAT when VBAT drops below the programmed VLCD value.
            enabled=0x00000001,     ///<The module automatically enables the charge pump and maintains the VLCD voltage when VBAT drops below the programmed VBAT monitor level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,CpacenVal> cpacen{}; 
        namespace CpacenValC{
            constexpr Register::FieldValue<decltype(cpacen)::Type,CpacenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpacen)::Type,CpacenVal::enabled> enabled{};
        }
        ///Force Bias Continuous Mode Enable. 
        enum class FbiascenVal {
            disabled=0x00000000,     ///<The bias operates as configured.
            enabled=0x00000001,     ///<Force the bias to operate in continuous mode. The bias will cleanly transition from its configuration settings to continuous mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,FbiascenVal> fbiascen{}; 
        namespace FbiascenValC{
            constexpr Register::FieldValue<decltype(fbiascen)::Type,FbiascenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fbiascen)::Type,FbiascenVal::enabled> enabled{};
        }
        ///Bias to Bandgap Switching Cycle Ratio. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> biasbgr{}; 
        ///High Contrast Voltage Comparator Bypass Enable. 
        enum class HcvcbypenVal {
            disabled=0x00000000,     ///<Hardware enables the high contrast voltage comparator as needed.
            enabled=0x00000001,     ///<High contrast voltage comparator in bypass mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,HcvcbypenVal> hcvcbypen{}; 
        namespace HcvcbypenValC{
            constexpr Register::FieldValue<decltype(hcvcbypen)::Type,HcvcbypenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hcvcbypen)::Type,HcvcbypenVal::enabled> enabled{};
        }
        ///High Contrast Voltage Comparator Force On Enable. 
        enum class HcvcfoenVal {
            disabled=0x00000000,     ///<Hardware enables the high contrast voltage comparator as needed.
            enabled=0x00000001,     ///<High contrast voltage comparator force on enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,HcvcfoenVal> hcvcfoen{}; 
        namespace HcvcfoenValC{
            constexpr Register::FieldValue<decltype(hcvcfoen)::Type,HcvcfoenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hcvcfoen)::Type,HcvcfoenVal::enabled> enabled{};
        }
        ///High Contrast Voltage Comparator Hysteresis. 
        enum class HcvchmdVal {
            low=0x00000000,     ///<Set the high contrast voltage comparator to low hysteresis mode.
            high=0x00000001,     ///<Set the high contrast voltage comparator to high hysteresis mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,HcvchmdVal> hcvchmd{}; 
        namespace HcvchmdValC{
            constexpr Register::FieldValue<decltype(hcvchmd)::Type,HcvchmdVal::low> low{};
            constexpr Register::FieldValue<decltype(hcvchmd)::Type,HcvchmdVal::high> high{};
        }
        ///High Contrast Voltage Comparator Bias. 
        enum class HcvcbmdVal {
            low=0x00000000,     ///<Set the high contrast voltage comparator to low bias mode.
            high=0x00000001,     ///<Set the high contrast voltage comparator to high bias mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,HcvcbmdVal> hcvcbmd{}; 
        namespace HcvcbmdValC{
            constexpr Register::FieldValue<decltype(hcvcbmd)::Type,HcvcbmdVal::low> low{};
            constexpr Register::FieldValue<decltype(hcvcbmd)::Type,HcvcbmdVal::high> high{};
        }
        ///Charge Pump Supply Mode. 
        enum class CpsmdVal {
            external=0x00000000,     ///<Select the external supply for the charge pump.
            vlcd=0x00000001,     ///<Select VLCD as the supply for the charge pump.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,CpsmdVal> cpsmd{}; 
        namespace CpsmdValC{
            constexpr Register::FieldValue<decltype(cpsmd)::Type,CpsmdVal::external> external{};
            constexpr Register::FieldValue<decltype(cpsmd)::Type,CpsmdVal::vlcd> vlcd{};
        }
    }
    namespace Noneclkcontrol{    ///<Clock Control
        using Addr = Register::Address<0x4004d020,0xcffffc00,0,unsigned>;
        ///Clock Divider. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///RTC Input Clock Divider. 
        enum class RtcclkdivVal {
            divideBy1=0x00000000,     ///<None
            divideBy2=0x00000001,     ///<None
            divideBy4=0x00000002,     ///<None
            divideBy8=0x00000003,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,RtcclkdivVal> rtcclkdiv{}; 
        namespace RtcclkdivValC{
            constexpr Register::FieldValue<decltype(rtcclkdiv)::Type,RtcclkdivVal::divideBy1> divideBy1{};
            constexpr Register::FieldValue<decltype(rtcclkdiv)::Type,RtcclkdivVal::divideBy2> divideBy2{};
            constexpr Register::FieldValue<decltype(rtcclkdiv)::Type,RtcclkdivVal::divideBy4> divideBy4{};
            constexpr Register::FieldValue<decltype(rtcclkdiv)::Type,RtcclkdivVal::divideBy8> divideBy8{};
        }
    }
    namespace Noneblkcontrol{    ///<Blinking Control
        using Addr = Register::Address<0x4004d030,0xfffff000,0,unsigned>;
        ///Hardware Blinking Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blkmask{}; 
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
            constexpr Register::FieldValue<decltype(blkrexp)::Type,BlkrexpVal::divideBy2> divideBy2{};
            constexpr Register::FieldValue<decltype(blkrexp)::Type,BlkrexpVal::divideBy4> divideBy4{};
            constexpr Register::FieldValue<decltype(blkrexp)::Type,BlkrexpVal::divideBy8> divideBy8{};
            constexpr Register::FieldValue<decltype(blkrexp)::Type,BlkrexpVal::divideBy16> divideBy16{};
            constexpr Register::FieldValue<decltype(blkrexp)::Type,BlkrexpVal::divideBy32> divideBy32{};
            constexpr Register::FieldValue<decltype(blkrexp)::Type,BlkrexpVal::divideBy64> divideBy64{};
            constexpr Register::FieldValue<decltype(blkrexp)::Type,BlkrexpVal::divideBy128> divideBy128{};
            constexpr Register::FieldValue<decltype(blkrexp)::Type,BlkrexpVal::divideBy256> divideBy256{};
            constexpr Register::FieldValue<decltype(blkrexp)::Type,BlkrexpVal::divideBy512> divideBy512{};
            constexpr Register::FieldValue<decltype(blkrexp)::Type,BlkrexpVal::divideBy1024> divideBy1024{};
            constexpr Register::FieldValue<decltype(blkrexp)::Type,BlkrexpVal::divideBy2048> divideBy2048{};
            constexpr Register::FieldValue<decltype(blkrexp)::Type,BlkrexpVal::divideBy4096> divideBy4096{};
        }
    }
    namespace Nonesegcontrol{    ///<Segment Control
        using Addr = Register::Address<0x4004d040,0xfffffe08,0,unsigned>;
        ///Hardware Bias Mode. 
        enum class BiasmdVal {
            oneThird=0x00000000,     ///<Select 1/3 bias.
            oneHalf=0x00000001,     ///<Select 1/2 bias.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BiasmdVal> biasmd{}; 
        namespace BiasmdValC{
            constexpr Register::FieldValue<decltype(biasmd)::Type,BiasmdVal::oneThird> oneThird{};
            constexpr Register::FieldValue<decltype(biasmd)::Type,BiasmdVal::oneHalf> oneHalf{};
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
            constexpr Register::FieldValue<decltype(segmd)::Type,SegmdVal::static_> static_{};
            constexpr Register::FieldValue<decltype(segmd)::Type,SegmdVal::v2Mux> v2Mux{};
            constexpr Register::FieldValue<decltype(segmd)::Type,SegmdVal::v3Mux> v3Mux{};
            constexpr Register::FieldValue<decltype(segmd)::Type,SegmdVal::v4Mux> v4Mux{};
        }
        ///Segment Blank Enable. 
        enum class BlankenVal {
            disabled=0x00000000,     ///<Operate segments normally.
            enabled=0x00000001,     ///<Ground the segment pins regardless of the current LCD control state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BlankenVal> blanken{}; 
        namespace BlankenValC{
            constexpr Register::FieldValue<decltype(blanken)::Type,BlankenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(blanken)::Type,BlankenVal::enabled> enabled{};
        }
        ///Reset Phase Enable. 
        enum class RphenVal {
            disabled=0x00000000,     ///<Hardware switches the LCD segment and common pin controls directly from one state to another.
            enabled=0x00000001,     ///<Hardware switches the LCD segment and common pin controls to intermediate states for several RTC clock cycles before switching to the next state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RphenVal> rphen{}; 
        namespace RphenValC{
            constexpr Register::FieldValue<decltype(rphen)::Type,RphenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rphen)::Type,RphenVal::enabled> enabled{};
        }
        ///Reset Phase Mode. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> rphmd{}; 
    }
    namespace Nonectrstcontrol{    ///<Contrast Control
        using Addr = Register::Address<0x4004d060,0xdffeffe0,0,unsigned>;
        ///Contrast Voltage. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ctrst{}; 
        ///Contrast Busy Flag. 
        enum class CtrstbfVal {
            notSet=0x00000000,     ///<An update of the internal contrast registers is not in progress.
            set=0x00000001,     ///<The internal contrast registers are busy updating.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,CtrstbfVal> ctrstbf{}; 
        namespace CtrstbfValC{
            constexpr Register::FieldValue<decltype(ctrstbf)::Type,CtrstbfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ctrstbf)::Type,CtrstbfVal::set> set{};
        }
        ///Charge Pump Capacitor Divider Enable. 
        enum class CpcdenVal {
            disabled=0x00000000,     ///<Disable the charge pump capacitor divider.
            enabled=0x00000001,     ///<Enable the charge pump capacitor divider.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,CpcdenVal> cpcden{}; 
        namespace CpcdenValC{
            constexpr Register::FieldValue<decltype(cpcden)::Type,CpcdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpcden)::Type,CpcdenVal::enabled> enabled{};
        }
    }
    namespace Nonevbmcontrol{    ///<VBAT Monitor Control
        using Addr = Register::Address<0x4004d070,0x1e3effe0,0,unsigned>;
        ///VBAT Monitor Threshold. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> vbmth{}; 
        ///VBAT Monitor Busy Flag. 
        enum class VbmbfVal {
            notSet=0x00000000,     ///<An update of the internal VBAT monitor registers is not in progress.
            set=0x00000001,     ///<The internal VBAT monitor registers are busy updating.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,VbmbfVal> vbmbf{}; 
        namespace VbmbfValC{
            constexpr Register::FieldValue<decltype(vbmbf)::Type,VbmbfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(vbmbf)::Type,VbmbfVal::set> set{};
        }
        ///VBAT Monitor Clock Divider. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,22),Register::ReadWriteAccess,unsigned> vbmclkdiv{}; 
        ///VBAT Monitor Capacitor Divider Enable. 
        enum class VbmcdenVal {
            disabled=0x00000000,     ///<Disable the VBAT monitor capacitor divider.
            enabled=0x00000001,     ///<Enable the VBAT monitor capacitor divider.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,VbmcdenVal> vbmcden{}; 
        namespace VbmcdenValC{
            constexpr Register::FieldValue<decltype(vbmcden)::Type,VbmcdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vbmcden)::Type,VbmcdenVal::enabled> enabled{};
        }
        ///VBAT Monitor Offset Enable. 
        enum class VbmoenVal {
            disabled=0x00000000,     ///<The VBAT monitor threshold set by the VBMTH field functions as an absolute threshold value for the VBAT monitor.
            enabled=0x00000001,     ///<The VBAT monitor threshold set by the VBMTH field functions as an offset to the LCD contrast value set by CTRSTMD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,VbmoenVal> vbmoen{}; 
        namespace VbmoenValC{
            constexpr Register::FieldValue<decltype(vbmoen)::Type,VbmoenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vbmoen)::Type,VbmoenVal::enabled> enabled{};
        }
        ///VBAT Monitor Enable. 
        enum class VbmenVal {
            disabled=0x00000000,     ///<Disable the VBAT monitor.
            enabled=0x00000001,     ///<Enable the VBAT monitor.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,VbmenVal> vbmen{}; 
        namespace VbmenValC{
            constexpr Register::FieldValue<decltype(vbmen)::Type,VbmenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vbmen)::Type,VbmenVal::enabled> enabled{};
        }
    }
    namespace Nonesegmask0{    ///<Segment Mask 0
        using Addr = Register::Address<0x4004d080,0x00000000,0,unsigned>;
        ///Segment Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> segen{}; 
    }
    namespace Nonesegmask1{    ///<Segment Mask 1
        using Addr = Register::Address<0x4004d090,0xffffff00,0,unsigned>;
        ///Segment Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> segen{}; 
    }
    namespace Nonesegdata0{    ///<Segment Data 0
        using Addr = Register::Address<0x4004d0a0,0x00000000,0,unsigned>;
        ///Segment LCDn.0 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> segdata0{}; 
    }
    namespace Nonesegdata1{    ///<Segment Data 1
        using Addr = Register::Address<0x4004d0b0,0x00000000,0,unsigned>;
        ///Segment LCDn.8 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> segdata1{}; 
    }
    namespace Nonesegdata2{    ///<Segment Data 2
        using Addr = Register::Address<0x4004d0c0,0x00000000,0,unsigned>;
        ///Segment LCDn.16 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> segdata2{}; 
    }
    namespace Nonesegdata3{    ///<Segment Data 3
        using Addr = Register::Address<0x4004d0d0,0x00000000,0,unsigned>;
        ///Segment LCDn.24 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> segdata3{}; 
    }
    namespace Nonesegdata4{    ///<Segment Data 4
        using Addr = Register::Address<0x4004d0e0,0x00000000,0,unsigned>;
        ///Segment LCDn.32 Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> segdata4{}; 
    }
}
