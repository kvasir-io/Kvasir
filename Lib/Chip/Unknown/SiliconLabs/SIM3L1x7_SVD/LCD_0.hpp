#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Noneconfig{    ///<Configuration
        using Addr = Register::Address<0x4004d000,0xb0fc8002,0,unsigned>;
        ///Module Enable. 
        enum class lcdenVal {
            disabled=0x00000000,     ///<Disable the LCD module.
            enabled=0x00000001,     ///<Enable the LCD module.
        };
        namespace lcdenValC{
            constexpr MPL::Value<lcdenVal,lcdenVal::disabled> disabled{};
            constexpr MPL::Value<lcdenVal,lcdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lcdenVal> lcden{}; 
        ///Charge Pump Full Power Drive Mode Enable. 
        enum class cpfpdenVal {
            disabled=0x00000000,     ///<Disable the LCD charge pump's full power drive mode. The charge pump draws less power but operates with reduced output current capabilities.
            enabled=0x00000001,     ///<Enable the LCD charge pump's full output drive mode. The charge pump operates at full power.
        };
        namespace cpfpdenValC{
            constexpr MPL::Value<cpfpdenVal,cpfpdenVal::disabled> disabled{};
            constexpr MPL::Value<cpfpdenVal,cpfpdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cpfpdenVal> cpfpden{}; 
        ///LCD Missing Clock Detector Enable. 
        enum class mcdenVal {
            disabled=0x00000000,     ///<Disable the dedicated LCD missing clock detector.
            enabled=0x00000001,     ///<Enable the dedicated LCD missing clock detector.
        };
        namespace mcdenValC{
            constexpr MPL::Value<mcdenVal,mcdenVal::disabled> disabled{};
            constexpr MPL::Value<mcdenVal,mcdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,mcdenVal> mcden{}; 
        ///RTC Clock Request Enable. 
        enum class rtccenVal {
            disabled=0x00000000,     ///<The LCD module does not require the RTC clock.
            enabled=0x00000001,     ///<The LCD module requires an active and valid RTC clock (RTC0TCLK).
        };
        namespace rtccenValC{
            constexpr MPL::Value<rtccenVal,rtccenVal::disabled> disabled{};
            constexpr MPL::Value<rtccenVal,rtccenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rtccenVal> rtccen{}; 
        ///Bias Enable. 
        enum class biasenVal {
            disabled=0x00000000,     ///<Disable the LCD bias current.
            enabled=0x00000001,     ///<Enable the LCD bias current.
        };
        namespace biasenValC{
            constexpr MPL::Value<biasenVal,biasenVal::disabled> disabled{};
            constexpr MPL::Value<biasenVal,biasenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,biasenVal> biasen{}; 
        ///DCDC Bias Output Enable. 
        enum class dcdcbiasenVal {
            disabled=0x00000000,     ///<Disable the secondary bias current output.
            enabled=0x00000001,     ///<Enable the secondary bias current output.
        };
        namespace dcdcbiasenValC{
            constexpr MPL::Value<dcdcbiasenVal,dcdcbiasenVal::disabled> disabled{};
            constexpr MPL::Value<dcdcbiasenVal,dcdcbiasenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dcdcbiasenVal> dcdcbiasen{}; 
        ///DCDC Bias Standby Enable. 
        enum class dcdcstdbyenVal {
            disabled=0x00000000,     ///<The DCDC bias is enabled in Power Mode 8.
            enabled=0x00000001,     ///<The DCDC bias is disabled in Power Mode 8.
        };
        namespace dcdcstdbyenValC{
            constexpr MPL::Value<dcdcstdbyenVal,dcdcstdbyenVal::disabled> disabled{};
            constexpr MPL::Value<dcdcstdbyenVal,dcdcstdbyenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,dcdcstdbyenVal> dcdcstdbyen{}; 
        ///Charge Pump Bypass Enable. 
        enum class cpbenVal {
            disabled=0x00000000,     ///<The LCD charge pump generates the VLCD voltage.
            enabled=0x00000001,     ///<Bypass the LCD charge pump and connect VLCD directly to VBAT.
        };
        namespace cpbenValC{
            constexpr MPL::Value<cpbenVal,cpbenVal::disabled> disabled{};
            constexpr MPL::Value<cpbenVal,cpbenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,cpbenVal> cpben{}; 
        ///High-Contrast-Voltage Low-Power Mode Enable. 
        enum class hcvlpmenVal {
            disabled=0x00000000,     ///<Disable the high-contrast-voltage low-power mode.
            enabled=0x00000001,     ///<Enable the high-contrast-voltage low-power mode. This mode reduces power consumption when VLCD is higher than VBAT.
        };
        namespace hcvlpmenValC{
            constexpr MPL::Value<hcvlpmenVal,hcvlpmenVal::disabled> disabled{};
            constexpr MPL::Value<hcvlpmenVal,hcvlpmenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,hcvlpmenVal> hcvlpmen{}; 
        ///VBAT Monitor Low Power Enable. 
        enum class vbmlpenVal {
            disabled=0x00000000,     ///<Disable the LCD VBAT Monitor low power mode.
            enabled=0x00000001,     ///<Enable the LCD VBAT Monitor low power mode.
        };
        namespace vbmlpenValC{
            constexpr MPL::Value<vbmlpenVal,vbmlpenVal::disabled> disabled{};
            constexpr MPL::Value<vbmlpenVal,vbmlpenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,vbmlpenVal> vbmlpen{}; 
        ///Charge-Pump Oscillator Low-Power Enable. 
        enum class cpolpenVal {
            disabled=0x00000000,     ///<Disable the charge-pump oscillator low-power mode.
            enabled=0x00000001,     ///<Enable the charge-pump oscillator low-power mode.
        };
        namespace cpolpenValC{
            constexpr MPL::Value<cpolpenVal,cpolpenVal::disabled> disabled{};
            constexpr MPL::Value<cpolpenVal,cpolpenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,cpolpenVal> cpolpen{}; 
        ///Comparator Buffer Low-Power Enable. 
        enum class cmpblpenVal {
            disabled=0x00000000,     ///<Disable the comparator buffer low-power mode.
            enabled=0x00000001,     ///<Enable the comparator buffer low-power mode.
        };
        namespace cmpblpenValC{
            constexpr MPL::Value<cmpblpenVal,cmpblpenVal::disabled> disabled{};
            constexpr MPL::Value<cmpblpenVal,cmpblpenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,cmpblpenVal> cmpblpen{}; 
        ///Bias Switching Enable. 
        enum class biassenVal {
            disabled=0x00000000,     ///<Disable bias switching.
            enabled=0x00000001,     ///<Enable bias switching.
        };
        namespace biassenValC{
            constexpr MPL::Value<biassenVal,biassenVal::disabled> disabled{};
            constexpr MPL::Value<biassenVal,biassenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,biassenVal> biassen{}; 
        ///Reference Band Gap Switching Enable. 
        enum class rbgsenVal {
            disabled=0x00000000,     ///<Disable reference band gap switching mode.
            enabled=0x00000001,     ///<Enable reference band gap switching mode.
        };
        namespace rbgsenValC{
            constexpr MPL::Value<rbgsenVal,rbgsenVal::disabled> disabled{};
            constexpr MPL::Value<rbgsenVal,rbgsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,rbgsenVal> rbgsen{}; 
        ///Charge-Pump Auto-Contrast Enable. 
        enum class cpacenVal {
            disabled=0x00000000,     ///<VLCD continues to track VBAT when VBAT drops below the programmed VLCD value.
            enabled=0x00000001,     ///<The module automatically enables the charge pump and maintains the VLCD voltage when VBAT drops below the programmed VBAT monitor level.
        };
        namespace cpacenValC{
            constexpr MPL::Value<cpacenVal,cpacenVal::disabled> disabled{};
            constexpr MPL::Value<cpacenVal,cpacenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,cpacenVal> cpacen{}; 
        ///Force Bias Continuous Mode Enable. 
        enum class fbiascenVal {
            disabled=0x00000000,     ///<The bias operates as configured.
            enabled=0x00000001,     ///<Force the bias to operate in continuous mode. The bias will cleanly transition from its configuration settings to continuous mode.
        };
        namespace fbiascenValC{
            constexpr MPL::Value<fbiascenVal,fbiascenVal::disabled> disabled{};
            constexpr MPL::Value<fbiascenVal,fbiascenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,fbiascenVal> fbiascen{}; 
        ///High-Contrast-Voltage Comparator Bypass Enable. 
        enum class hcvcbypenVal {
            disabled=0x00000000,     ///<Hardware enables the high-contrast-voltage comparator as needed.
            enabled=0x00000001,     ///<High-contrast-voltage comparator in bypass mode.
        };
        namespace hcvcbypenValC{
            constexpr MPL::Value<hcvcbypenVal,hcvcbypenVal::disabled> disabled{};
            constexpr MPL::Value<hcvcbypenVal,hcvcbypenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,hcvcbypenVal> hcvcbypen{}; 
        ///High-Contrast-Voltage Comparator Force On Enable. 
        enum class hcvcfoenVal {
            disabled=0x00000000,     ///<Hardware enables the high-contrast-voltage comparator as needed.
            enabled=0x00000001,     ///<High-contrast-voltage comparator force on enabled.
        };
        namespace hcvcfoenValC{
            constexpr MPL::Value<hcvcfoenVal,hcvcfoenVal::disabled> disabled{};
            constexpr MPL::Value<hcvcfoenVal,hcvcfoenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,hcvcfoenVal> hcvcfoen{}; 
        ///High-Contrast-Voltage Comparator Hysteresis. 
        enum class hcvchmdVal {
            high=0x00000000,     ///<Set the high-contrast-voltage comparator to high-hysteresis mode. This is the recommended setting.
            low=0x00000001,     ///<Set the high-contrast-voltage comparator to low-hysteresis mode.
        };
        namespace hcvchmdValC{
            constexpr MPL::Value<hcvchmdVal,hcvchmdVal::high> high{};
            constexpr MPL::Value<hcvchmdVal,hcvchmdVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,hcvchmdVal> hcvchmd{}; 
        ///High-Contrast-Voltage Comparator Bias. 
        enum class hcvcbmdVal {
            high=0x00000000,     ///<Set the high-contrast-voltage comparator to high bias mode.
            low=0x00000001,     ///<Set the high-contrast-voltage comparator to low-bias mode. This is the recommended setting.
        };
        namespace hcvcbmdValC{
            constexpr MPL::Value<hcvcbmdVal,hcvcbmdVal::high> high{};
            constexpr MPL::Value<hcvcbmdVal,hcvcbmdVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,hcvcbmdVal> hcvcbmd{}; 
        ///High-Contrast-Voltage Comparator Status. 
        enum class cpcsVal {
            vbat=0x00000000,     ///<VBAT is greater than VLCD. 
            vlcd=0x00000001,     ///<VLCD is greater than VBAT.   
        };
        namespace cpcsValC{
            constexpr MPL::Value<cpcsVal,cpcsVal::vbat> vbat{};
            constexpr MPL::Value<cpcsVal,cpcsVal::vlcd> vlcd{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,cpcsVal> cpcs{}; 
    }
    namespace Noneclkcontrol{    ///<Clock Control
        using Addr = Register::Address<0x4004d020,0xcffffc00,0,unsigned>;
        ///Clock Divider. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///RTC Input Clock Divider. 
        enum class rtcclkdivVal {
            divideBy1=0x00000000,     ///<None
            divideBy2=0x00000001,     ///<None
            divideBy4=0x00000002,     ///<None
            divideBy8=0x00000003,     ///<None
        };
        namespace rtcclkdivValC{
            constexpr MPL::Value<rtcclkdivVal,rtcclkdivVal::divideBy1> divideBy1{};
            constexpr MPL::Value<rtcclkdivVal,rtcclkdivVal::divideBy2> divideBy2{};
            constexpr MPL::Value<rtcclkdivVal,rtcclkdivVal::divideBy4> divideBy4{};
            constexpr MPL::Value<rtcclkdivVal,rtcclkdivVal::divideBy8> divideBy8{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,rtcclkdivVal> rtcclkdiv{}; 
    }
    namespace Noneblkcontrol{    ///<Blinking Control
        using Addr = Register::Address<0x4004d030,0xfffff000,0,unsigned>;
        ///Hardware Blinking Enable. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blkmask{}; 
        ///Hardware Blinking Rate Divider Exponent. 
        enum class blkrexpVal {
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
        namespace blkrexpValC{
            constexpr MPL::Value<blkrexpVal,blkrexpVal::divideBy2> divideBy2{};
            constexpr MPL::Value<blkrexpVal,blkrexpVal::divideBy4> divideBy4{};
            constexpr MPL::Value<blkrexpVal,blkrexpVal::divideBy8> divideBy8{};
            constexpr MPL::Value<blkrexpVal,blkrexpVal::divideBy16> divideBy16{};
            constexpr MPL::Value<blkrexpVal,blkrexpVal::divideBy32> divideBy32{};
            constexpr MPL::Value<blkrexpVal,blkrexpVal::divideBy64> divideBy64{};
            constexpr MPL::Value<blkrexpVal,blkrexpVal::divideBy128> divideBy128{};
            constexpr MPL::Value<blkrexpVal,blkrexpVal::divideBy256> divideBy256{};
            constexpr MPL::Value<blkrexpVal,blkrexpVal::divideBy512> divideBy512{};
            constexpr MPL::Value<blkrexpVal,blkrexpVal::divideBy1024> divideBy1024{};
            constexpr MPL::Value<blkrexpVal,blkrexpVal::divideBy2048> divideBy2048{};
            constexpr MPL::Value<blkrexpVal,blkrexpVal::divideBy4096> divideBy4096{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,blkrexpVal> blkrexp{}; 
    }
    namespace Nonesegcontrol{    ///<Segment Control
        using Addr = Register::Address<0x4004d040,0xfffffe08,0,unsigned>;
        ///Hardware Bias Mode. 
        enum class biasmdVal {
            oneThird=0x00000000,     ///<Select 1/3 bias. Use for three-mux segment mode and four-mux segment mode.
            oneHalf=0x00000001,     ///<Select 1/2 bias. Use for two-mux segment mode.
        };
        namespace biasmdValC{
            constexpr MPL::Value<biasmdVal,biasmdVal::oneThird> oneThird{};
            constexpr MPL::Value<biasmdVal,biasmdVal::oneHalf> oneHalf{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,biasmdVal> biasmd{}; 
        ///Segment Mode. 
        enum class segmdVal {
            static_=0x00000000,     ///<Select static segment mode with one common COMn.0 used.
            v2Mux=0x00000001,     ///<Select two-mux segment mode with two commons (COMn.0 and COMn.1) used.
            v3Mux=0x00000002,     ///<Select three-mux segment mode with three commons (COMn.0, COMn.1, COMn.2) used.
            v4Mux=0x00000003,     ///<Select four-mux segment mode with four commons (COMn.0, COMn.1, COMn.2 and COMn.3) used.
        };
        namespace segmdValC{
            constexpr MPL::Value<segmdVal,segmdVal::static_> static_{};
            constexpr MPL::Value<segmdVal,segmdVal::v2Mux> v2Mux{};
            constexpr MPL::Value<segmdVal,segmdVal::v3Mux> v3Mux{};
            constexpr MPL::Value<segmdVal,segmdVal::v4Mux> v4Mux{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,segmdVal> segmd{}; 
        ///Segment Blank Enable. 
        enum class blankenVal {
            disabled=0x00000000,     ///<Operate segments normally.
            enabled=0x00000001,     ///<Blank the LCD by disabling all LCD segment and common pins.
        };
        namespace blankenValC{
            constexpr MPL::Value<blankenVal,blankenVal::disabled> disabled{};
            constexpr MPL::Value<blankenVal,blankenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,blankenVal> blanken{}; 
        ///Reset Phase Enable. 
        enum class rphenVal {
            disabled=0x00000000,     ///<Hardware switches the LCD segment and common pin controls directly from one state to another.
            enabled=0x00000001,     ///<Hardware switches the LCD segment and common pin controls to intermediate states for several RTC clock cycles before switching to the next state.
        };
        namespace rphenValC{
            constexpr MPL::Value<rphenVal,rphenVal::disabled> disabled{};
            constexpr MPL::Value<rphenVal,rphenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rphenVal> rphen{}; 
        ///Reset Phase Mode. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> rphmd{}; 
    }
    namespace Nonectrstcontrol{    ///<Contrast Control
        using Addr = Register::Address<0x4004d060,0xdffeffe0,0,unsigned>;
        ///Contrast Voltage. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ctrst{}; 
        ///Contrast Busy Flag. 
        enum class ctrstbfVal {
            notSet=0x00000000,     ///<An update of the internal contrast registers is not in progress.
            set=0x00000001,     ///<The internal contrast registers are busy updating.
        };
        namespace ctrstbfValC{
            constexpr MPL::Value<ctrstbfVal,ctrstbfVal::notSet> notSet{};
            constexpr MPL::Value<ctrstbfVal,ctrstbfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ctrstbfVal> ctrstbf{}; 
        ///Charge Pump Capacitor Divider Enable. 
        enum class cpcdenVal {
            disabled=0x00000000,     ///<Disable the charge pump capacitor divider.
            enabled=0x00000001,     ///<Enable the charge pump capacitor divider.
        };
        namespace cpcdenValC{
            constexpr MPL::Value<cpcdenVal,cpcdenVal::disabled> disabled{};
            constexpr MPL::Value<cpcdenVal,cpcdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,cpcdenVal> cpcden{}; 
    }
    namespace Nonevbmcontrol{    ///<VBAT Monitor Control
        using Addr = Register::Address<0x4004d070,0x1e3effe0,0,unsigned>;
        ///VBAT Monitor Threshold. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> vbmth{}; 
        ///VBAT Monitor Busy Flag. 
        enum class vbmbfVal {
            notSet=0x00000000,     ///<An update of the internal VBAT monitor registers is not in progress.
            set=0x00000001,     ///<The internal VBAT monitor registers are busy updating.
        };
        namespace vbmbfValC{
            constexpr MPL::Value<vbmbfVal,vbmbfVal::notSet> notSet{};
            constexpr MPL::Value<vbmbfVal,vbmbfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,vbmbfVal> vbmbf{}; 
        ///VBAT Monitor Clock Divider. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,22),Register::ReadWriteAccess,unsigned> vbmclkdiv{}; 
        ///VBAT Monitor Capacitor Divider Enable. 
        enum class vbmcdenVal {
            disabled=0x00000000,     ///<Disable the VBAT monitor capacitor divider.
            enabled=0x00000001,     ///<Enable the VBAT monitor capacitor divider.
        };
        namespace vbmcdenValC{
            constexpr MPL::Value<vbmcdenVal,vbmcdenVal::disabled> disabled{};
            constexpr MPL::Value<vbmcdenVal,vbmcdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,vbmcdenVal> vbmcden{}; 
        ///VBAT Monitor Offset Enable. 
        enum class vbmoenVal {
            disabled=0x00000000,     ///<The VBAT monitor threshold set by the VBMTH field functions as an absolute threshold value for the VBAT monitor.
            enabled=0x00000001,     ///<The VBAT monitor threshold set by the VBMTH field functions as an offset to the LCD contrast value set by CTRSTMD.
        };
        namespace vbmoenValC{
            constexpr MPL::Value<vbmoenVal,vbmoenVal::disabled> disabled{};
            constexpr MPL::Value<vbmoenVal,vbmoenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,vbmoenVal> vbmoen{}; 
        ///VBAT Monitor Enable. 
        enum class vbmenVal {
            disabled=0x00000000,     ///<Disable the VBAT monitor.
            enabled=0x00000001,     ///<Enable the VBAT monitor.
        };
        namespace vbmenValC{
            constexpr MPL::Value<vbmenVal,vbmenVal::disabled> disabled{};
            constexpr MPL::Value<vbmenVal,vbmenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,vbmenVal> vbmen{}; 
    }
    namespace Nonesegmask0{    ///<Segment Mask 0
        using Addr = Register::Address<0x4004d080,0x00000000,0,unsigned>;
        ///Segment Enable. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> segen{}; 
    }
    namespace Nonesegmask1{    ///<Segment Mask 1
        using Addr = Register::Address<0x4004d090,0xffffff00,0,unsigned>;
        ///Segment Enable. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> segen{}; 
    }
    namespace Nonesegdata0{    ///<Segment Data 0
        using Addr = Register::Address<0x4004d0a0,0x00000000,0,unsigned>;
        ///Segment LCDn.0 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> segpin0{}; 
        ///Segment LCDn.1 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> segpin1{}; 
        ///Segment LCDn.2 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> segpin2{}; 
        ///Segment LCDn.3 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> segpin3{}; 
        ///Segment LCDn.4 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> segpin4{}; 
        ///Segment LCDn.5 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> segpin5{}; 
        ///Segment LCDn.6 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> segpin6{}; 
        ///Segment LCDn.7 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> segpin7{}; 
    }
    namespace Nonesegdata1{    ///<Segment Data 1
        using Addr = Register::Address<0x4004d0b0,0x00000000,0,unsigned>;
        ///Segment LCDn.8 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> segpin8{}; 
        ///Segment LCDn.9 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> segpin9{}; 
        ///Segment LCDn.10 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> segpin10{}; 
        ///Segment LCDn.11 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> segpin11{}; 
        ///Segment LCDn.12 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> segpin12{}; 
        ///Segment LCDn.13 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> segpin13{}; 
        ///Segment LCDn.14 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> segpin14{}; 
        ///Segment LCDn.15 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> segpin15{}; 
    }
    namespace Nonesegdata2{    ///<Segment Data 2
        using Addr = Register::Address<0x4004d0c0,0x00000000,0,unsigned>;
        ///Segment LCDn.16 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> segpin16{}; 
        ///Segment LCDn.17 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> segpin17{}; 
        ///Segment LCDn.18 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> segpin18{}; 
        ///Segment LCDn.19 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> segpin19{}; 
        ///Segment LCDn.20 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> segpin20{}; 
        ///Segment LCDn.21 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> segpin21{}; 
        ///Segment LCDn.22 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> segpin22{}; 
        ///Segment LCDn.23 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> segpin23{}; 
    }
    namespace Nonesegdata3{    ///<Segment Data 3
        using Addr = Register::Address<0x4004d0d0,0x00000000,0,unsigned>;
        ///Segment LCDn.24 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> segpin24{}; 
        ///Segment LCDn.25 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> segpin25{}; 
        ///Segment LCDn.26 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> segpin26{}; 
        ///Segment LCDn.27 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> segpin27{}; 
        ///Segment LCDn.28 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> segpin28{}; 
        ///Segment LCDn.29 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> segpin29{}; 
        ///Segment LCDn.30 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> segpin30{}; 
        ///Segment LCDn.31 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> segpin31{}; 
    }
    namespace Nonesegdata4{    ///<Segment Data 4
        using Addr = Register::Address<0x4004d0e0,0x00000000,0,unsigned>;
        ///Segment LCDn.32 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> segpin32{}; 
        ///Segment LCDn.33 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> segpin33{}; 
        ///Segment LCDn.34 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> segpin34{}; 
        ///Segment LCDn.35 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> segpin35{}; 
        ///Segment LCDn.36 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> segpin36{}; 
        ///Segment LCDn.37 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> segpin37{}; 
        ///Segment LCDn.38 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> segpin38{}; 
        ///Segment LCDn.39 Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> segpin39{}; 
    }
}
