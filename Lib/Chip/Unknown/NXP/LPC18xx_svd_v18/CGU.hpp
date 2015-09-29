#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10462 Chapter title=LPC18xx Clock Generation Unit (CGU) Modification date=6/1/2011 Major revision=0 Minor revision=1 
    namespace NonefreqMon{    ///<Frequency monitor register
        using Addr = Register::Address<0x40050014,0xe0000000,0,unsigned>;
        ///9-bit reference clock-counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rcnt{}; 
        ///14-bit selected clock-counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,9),Register::ReadWriteAccess,unsigned> fcnt{}; 
        ///Measure frequency
        enum class measVal {
            rcntAndFcntDisabl=0x00000000,     ///<RCNT and FCNT disabled
            frequencyCountersS=0x00000001,     ///<Frequency counters started
        };
        namespace measValC{
            constexpr MPL::Value<measVal,measVal::rcntAndFcntDisabl> rcntAndFcntDisabl{};
            constexpr MPL::Value<measVal,measVal::frequencyCountersS> frequencyCountersS{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,measVal> meas{}; 
        ///Clock-source selection for the clock to be measured. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillatorD=0x00000000,     ///<32 kHz oscillator (default)
            irc=0x00000001,     ///<IRC
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            reserved=0x00000005,     ///<Reserved
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0Usb=0x00000007,     ///<PLL0 (USB)
            pll0Audio=0x00000008,     ///<PLL0 (audio)
            pll1=0x00000009,     ///<PLL1
            reserved=0x0000000a,     ///<Reserved
            reserved=0x0000000b,     ///<Reserved
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillatorD> v32KhzOscillatorD{};
            constexpr MPL::Value<clkSelVal,clkSelVal::irc> irc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::reserved> reserved{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0Usb> pll0Usb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0Audio> pll0Audio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::reserved> reserved{};
            constexpr MPL::Value<clkSelVal,clkSelVal::reserved> reserved{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonextalOscCtrl{    ///<Crystal oscillator control register
        using Addr = Register::Address<0x40050018,0xfffffff8,0,unsigned>;
        ///Oscillator-pad enable. Do not change the BYPASS and ENABLE bits in one write-action: this will result in unstable device operation!
        enum class enableVal {
            enable=0x00000000,     ///<Enable
            powerDownDefault=0x00000001,     ///<Power-down (default)
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::enable> enable{};
            constexpr MPL::Value<enableVal,enableVal::powerDownDefault> powerDownDefault{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enableVal> enable{}; 
        ///Configure crystal operation or external-clock input pin XTAL1. Do not change the BYPASS and ENABLE bits in one write-action: this will result in unstable device operation!
        enum class bypassVal {
            operationWithCryst=0x00000000,     ///<Operation with crystal connected (default).
            bypassModeUseThi=0x00000001,     ///<Bypass mode. Use this mode when an external clock source is used instead of a crystal.
        };
        namespace bypassValC{
            constexpr MPL::Value<bypassVal,bypassVal::operationWithCryst> operationWithCryst{};
            constexpr MPL::Value<bypassVal,bypassVal::bypassModeUseThi> bypassModeUseThi{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bypassVal> bypass{}; 
        ///Select frequency range
        enum class hfVal {
            oscillatorLowFrequ=0x00000000,     ///<Oscillator low-frequency mode (crystal or external clock source 1 to 20 MHz). Between 15 MHz to 20 MHz, the state of the HF bit is don't care.
            oscillatorHighFreq=0x00000001,     ///<Oscillator high-frequency mode; crystal or external clock source 15 to 25 MHz. Between 15 MHz to 20 MHz, the state of the HF bit is don't care (default)
        };
        namespace hfValC{
            constexpr MPL::Value<hfVal,hfVal::oscillatorLowFrequ> oscillatorLowFrequ{};
            constexpr MPL::Value<hfVal,hfVal::oscillatorHighFreq> oscillatorHighFreq{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,hfVal> hf{}; 
    }
    namespace Nonepll0usbStat{    ///<PLL0 (USB) status register
        using Addr = Register::Address<0x4005001c,0xfffffffc,0,unsigned>;
        ///PLL0 lock indicator
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lock{}; 
        ///PLL0 free running indicator
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fr{}; 
    }
    namespace Nonepll0usbCtrl{    ///<PLL0 (USB) control register
        using Addr = Register::Address<0x40050020,0xe0fff7a0,0,unsigned>;
        ///PLL0 power down
        enum class pdVal {
            pll0Enabled=0x00000000,     ///<PLL0 enabled
            pll0PoweredDown=0x00000001,     ///<PLL0 powered down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::pll0Enabled> pll0Enabled{};
            constexpr MPL::Value<pdVal,pdVal::pll0PoweredDown> pll0PoweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Input clock bypass control
        enum class bypassVal {
            ccoClockSentToPo=0x00000000,     ///<CCO clock sent to post-dividers. Use this in normal operation.
            pll0InputClockSen=0x00000001,     ///<PLL0 input clock sent to post-dividers (default).
        };
        namespace bypassValC{
            constexpr MPL::Value<bypassVal,bypassVal::ccoClockSentToPo> ccoClockSentToPo{};
            constexpr MPL::Value<bypassVal,bypassVal::pll0InputClockSen> pll0InputClockSen{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bypassVal> bypass{}; 
        ///PLL0 direct input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> directi{}; 
        ///PLL0 direct output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> directo{}; 
        ///PLL0 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clken{}; 
        ///Free running mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frm{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace Nonepll0usbMdiv{    ///<PLL0 (USB) M-divider register
        using Addr = Register::Address<0x40050024,0x00000000,0,unsigned>;
        ///Decoded M-divider coefficient value. Select values for the M-divider between 1 and 131071.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> mdec{}; 
        ///Bandwidth select P value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,17),Register::ReadWriteAccess,unsigned> selp{}; 
        ///Bandwidth select I value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,22),Register::ReadWriteAccess,unsigned> seli{}; 
        ///Bandwidth select R value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> selr{}; 
    }
    namespace Nonepll0usbNpDiv{    ///<PLL0 (USB) N/P-divider register
        using Addr = Register::Address<0x40050028,0xffc00f80,0,unsigned>;
        ///Decoded P-divider coefficient value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pdec{}; 
        ///Decoded N-divider coefficient value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,12),Register::ReadWriteAccess,unsigned> ndec{}; 
    }
    namespace Nonepll0audioStat{    ///<PLL0 (audio) status register
        using Addr = Register::Address<0x4005002c,0xfffffffc,0,unsigned>;
        ///PLL0 lock indicator
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lock{}; 
        ///PLL0 free running indicator
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fr{}; 
    }
    namespace Nonepll0audioCtrl{    ///<PLL0 (audio) control register
        using Addr = Register::Address<0x40050030,0xe0ff87a0,0,unsigned>;
        ///PLL0 power down
        enum class pdVal {
            pll0Enabled=0x00000000,     ///<PLL0 enabled
            pll0PoweredDown=0x00000001,     ///<PLL0 powered down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::pll0Enabled> pll0Enabled{};
            constexpr MPL::Value<pdVal,pdVal::pll0PoweredDown> pll0PoweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Input clock bypass control
        enum class bypassVal {
            ccoClockSentToPo=0x00000000,     ///<CCO clock sent to post-dividers. Use this in normal operation.
            pll0InputClockSen=0x00000001,     ///<PLL0 input clock sent to post-dividers (default).
        };
        namespace bypassValC{
            constexpr MPL::Value<bypassVal,bypassVal::ccoClockSentToPo> ccoClockSentToPo{};
            constexpr MPL::Value<bypassVal,bypassVal::pll0InputClockSen> pll0InputClockSen{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bypassVal> bypass{}; 
        ///PLL0 direct input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> directi{}; 
        ///PLL0 direct output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> directo{}; 
        ///PLL0 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clken{}; 
        ///Free running mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frm{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Fractional PLL word write request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pllfraqReq{}; 
        ///SD modulator bypass
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> selExt{}; 
        ///SD modulator power-down
        enum class modPdVal {
            sdModulatorEnabled=0x00000000,     ///<SD modulator enabled
            sdModulatorPowered=0x00000001,     ///<SD modulator powered down
        };
        namespace modPdValC{
            constexpr MPL::Value<modPdVal,modPdVal::sdModulatorEnabled> sdModulatorEnabled{};
            constexpr MPL::Value<modPdVal,modPdVal::sdModulatorPowered> sdModulatorPowered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,modPdVal> modPd{}; 
        ///Clock source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace Nonepll0audioMdiv{    ///<PLL0 (audio) M-divider register
        using Addr = Register::Address<0x40050034,0xfffe0000,0,unsigned>;
        ///Decoded M-divider coefficient value. Select values for the M-divider between 1 and 131071.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> mdec{}; 
    }
    namespace Nonepll0audioNpDiv{    ///<PLL0 (audio) N/P-divider register
        using Addr = Register::Address<0x40050038,0xffc00f80,0,unsigned>;
        ///Decoded P-divider coefficient value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pdec{}; 
        ///Decoded N-divider coefficient value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,12),Register::ReadWriteAccess,unsigned> ndec{}; 
    }
    namespace Nonepll0audioFrac{    ///<PLL0 (audio)
        using Addr = Register::Address<0x4005003c,0xffc00000,0,unsigned>;
        ///PLL fractional divider control word
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,0),Register::ReadWriteAccess,unsigned> pllfractCtrl{}; 
    }
    namespace Nonepll1Stat{    ///<PLL1 status register
        using Addr = Register::Address<0x40050040,0xfffffffe,0,unsigned>;
        ///PLL1 lock indicator
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace Nonepll1Ctrl{    ///<PLL1 control register
        using Addr = Register::Address<0x40050044,0xe000c43c,0,unsigned>;
        ///PLL1 power down
        enum class pdVal {
            pll1Enabled=0x00000000,     ///<PLL1 enabled
            pll1PoweredDown=0x00000001,     ///<PLL1 powered down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::pll1Enabled> pll1Enabled{};
            constexpr MPL::Value<pdVal,pdVal::pll1PoweredDown> pll1PoweredDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Input clock bypass control
        enum class bypassVal {
            ccoClockSentToPo=0x00000000,     ///<CCO clock sent to post-dividers. Use for normal operation.
            pll1InputClockSen=0x00000001,     ///<PLL1 input clock sent to post-dividers (default).
        };
        namespace bypassValC{
            constexpr MPL::Value<bypassVal,bypassVal::ccoClockSentToPo> ccoClockSentToPo{};
            constexpr MPL::Value<bypassVal,bypassVal::pll1InputClockSen> pll1InputClockSen{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bypassVal> bypass{}; 
        ///PLL feedback select (see Figure 88 "PLL1 block diagram").
        enum class fbselVal {
            ccoOutputIsUsedA=0x00000000,     ///<CCO output is used as feedback divider input clock.
            pllOutputClockCl=0x00000001,     ///<PLL output clock (clkout) is used as feedback divider input clock. Use for normal operation.
        };
        namespace fbselValC{
            constexpr MPL::Value<fbselVal,fbselVal::ccoOutputIsUsedA> ccoOutputIsUsedA{};
            constexpr MPL::Value<fbselVal,fbselVal::pllOutputClockCl> pllOutputClockCl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,fbselVal> fbsel{}; 
        ///PLL direct CCO output
        enum class directVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace directValC{
            constexpr MPL::Value<directVal,directVal::disabled> disabled{};
            constexpr MPL::Value<directVal,directVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,directVal> direct{}; 
        ///Post-divider division ratio. The value applied is 2xP.
        enum class pselVal {
            v1=0x00000000,     ///<1
            v2Default=0x00000001,     ///<2 (default)
            v4=0x00000002,     ///<4
            v8=0x00000003,     ///<8
        };
        namespace pselValC{
            constexpr MPL::Value<pselVal,pselVal::v1> v1{};
            constexpr MPL::Value<pselVal,pselVal::v2Default> v2Default{};
            constexpr MPL::Value<pselVal,pselVal::v4> v4{};
            constexpr MPL::Value<pselVal,pselVal::v8> v8{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,pselVal> psel{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Pre-divider division ratio
        enum class nselVal {
            v1=0x00000000,     ///<1
            v2=0x00000001,     ///<2
            v3Default=0x00000002,     ///<3 (default)
            v4=0x00000003,     ///<4
        };
        namespace nselValC{
            constexpr MPL::Value<nselVal,nselVal::v1> v1{};
            constexpr MPL::Value<nselVal,nselVal::v2> v2{};
            constexpr MPL::Value<nselVal,nselVal::v3Default> v3Default{};
            constexpr MPL::Value<nselVal,nselVal::v4> v4{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,nselVal> nsel{}; 
        ///Feedback-divider division ratio (M) 00000000 = 1 00000001 = 2  ... 11111111 = 256
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> msel{}; 
        ///Clock-source selection.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            reserved=0x00000005,     ///<Reserved
            crystalOscillator=0x00000006,     ///<crystal oscillator
            pll0=0x00000007,     ///<PLL0
            reserved=0x00000008,     ///<Reserved
            reserved=0x00000009,     ///<Reserved
            reserved=0x0000000a,     ///<Reserved
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::reserved> reserved{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0> pll0{};
            constexpr MPL::Value<clkSelVal,clkSelVal::reserved> reserved{};
            constexpr MPL::Value<clkSelVal,clkSelVal::reserved> reserved{};
            constexpr MPL::Value<clkSelVal,clkSelVal::reserved> reserved{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NoneidivaCtrl{    ///<Integer divider A control register
        using Addr = Register::Address<0x40050048,0xe0fff7f2,0,unsigned>;
        ///Integer divider A power down
        enum class pdVal {
            idivaEnabledDefau=0x00000000,     ///<IDIVA enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::idivaEnabledDefau> idivaEnabledDefau{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Integer divider A divider values (1/(IDIV + 1))
        enum class idivVal {
            v1Default=0x00000000,     ///<1 (default)
            v2=0x00000001,     ///<2
            v3=0x00000002,     ///<3
            v4=0x00000003,     ///<4
        };
        namespace idivValC{
            constexpr MPL::Value<idivVal,idivVal::v1Default> v1Default{};
            constexpr MPL::Value<idivVal,idivVal::v2> v2{};
            constexpr MPL::Value<idivVal,idivVal::v3> v3{};
            constexpr MPL::Value<idivVal,idivVal::v4> v4{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,idivVal> idiv{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForUsb=0x00000007,     ///<PLL0 (for USB)
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForUsb> pll0ForUsb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NoneidivbCtrl{    ///<Integer divider B control register
        using Addr = Register::Address<0x4005004c,0xe0fff7c2,0,unsigned>;
        ///Integer divider power down
        enum class pdVal {
            idivEnabledDefaul=0x00000000,     ///<IDIV enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::idivEnabledDefaul> idivEnabledDefaul{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Integer divider B, C, D divider values (1/(IDIV + 1)) 0000 = 1 (default) 0001 = 2  ... 1111 = 16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> idiv{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock-source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0audio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0audio> pll0audio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NoneidivcCtrl{    ///<Integer divider C control register
        using Addr = Register::Address<0x40050050,0xe0fff7c2,0,unsigned>;
        ///Integer divider power down
        enum class pdVal {
            idivEnabledDefaul=0x00000000,     ///<IDIV enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::idivEnabledDefaul> idivEnabledDefaul{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Integer divider B, C, D divider values (1/(IDIV + 1)) 0000 = 1 (default) 0001 = 2  ... 1111 = 16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> idiv{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock-source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0audio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0audio> pll0audio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NoneidivdCtrl{    ///<Integer divider D control register
        using Addr = Register::Address<0x40050054,0xe0fff7c2,0,unsigned>;
        ///Integer divider power down
        enum class pdVal {
            idivEnabledDefaul=0x00000000,     ///<IDIV enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::idivEnabledDefaul> idivEnabledDefaul{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Integer divider B, C, D divider values (1/(IDIV + 1)) 0000 = 1 (default) 0001 = 2  ... 1111 = 16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> idiv{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock-source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0audio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0audio> pll0audio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NoneidiveCtrl{    ///<Integer divider E control register
        using Addr = Register::Address<0x40050058,0xe0fff402,0,unsigned>;
        ///Integer divider power down
        enum class pdVal {
            idivEnabledDefaul=0x00000000,     ///<IDIV enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::idivEnabledDefaul> idivEnabledDefaul{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Integer divider E divider values (1/(IDIV + 1)) 00000000 = 1 (default) 00000001 = 2  ... 111111111 = 256
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,2),Register::ReadWriteAccess,unsigned> idiv{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock-source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonebaseSafeClk{    ///<Output stage 0 control register for base clock BASE_SAFE_CLK
        using Addr = Register::Address<0x4005005c,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock source selection. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> clkSel{}; 
    }
    namespace NonebaseUsb0Clk{    ///<Output stage 1 control register for base clock BASE_USB0_CLK
        using Addr = Register::Address<0x40050060,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock-source selection.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> clkSel{}; 
    }
    namespace NonebaseUsb1Clk{    ///<Output stage 3 control register for base clock BASE_USB1_CLK
        using Addr = Register::Address<0x40050068,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForUsb=0x00000007,     ///<PLL0 (for USB)
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForUsb> pll0ForUsb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonebaseM3Clk{    ///<Output stage BASE_M3_CLK control register
        using Addr = Register::Address<0x4005006c,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonebaseSpifiClk{    ///<Output stage BASE_SPIFI_CLK control register
        using Addr = Register::Address<0x40050070,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonebasePhyRxClk{    ///<Output stage BASE_PHY_RX_CLK control register
        using Addr = Register::Address<0x40050078,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonebasePhyTxClk{    ///<Output stage BASE_PHY_TX_CLK control register
        using Addr = Register::Address<0x4005007c,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonebaseApb1Clk{    ///<Output stage BASE_APB1_CLK control register
        using Addr = Register::Address<0x40050080,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonebaseApb3Clk{    ///<Output stage BASE_APB3_CLK control register
        using Addr = Register::Address<0x40050084,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonebaseLcdClk{    ///<Output stage BASE_LCD_CLK control register
        using Addr = Register::Address<0x40050088,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonebaseSdioClk{    ///<Output stage BASE_SDIO_CLK control register
        using Addr = Register::Address<0x40050090,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonebaseSsp0Clk{    ///<Output stage BASE_SSP0_CLK control register
        using Addr = Register::Address<0x40050094,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonebaseSsp1Clk{    ///<Output stage BASE_SSP1_CLK control register
        using Addr = Register::Address<0x40050098,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonebaseUart0Clk{    ///<Output stage BASE_UART0_CLK control register
        using Addr = Register::Address<0x4005009c,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonebaseUart1Clk{    ///<Output stage BASE_UART1_CLK control register
        using Addr = Register::Address<0x400500a0,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonebaseUart2Clk{    ///<Output stage BASE_UART2_CLK control register
        using Addr = Register::Address<0x400500a4,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonebaseUart3Clk{    ///<Output stage BASE_UART3_CLK control register
        using Addr = Register::Address<0x400500a8,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock source selection. All other values are reserved.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonebaseOutClk{    ///<Output stage 20 control register for base clock BASE_OUT_CLK
        using Addr = Register::Address<0x400500ac,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock-source selection.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            reserved=0x00000005,     ///<Reserved
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForUsb=0x00000007,     ///<PLL0 (for USB)
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::reserved> reserved{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForUsb> pll0ForUsb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonebaseApllClk{    ///<Output stage 25 control register for base clock BASE_APLL_CLK
        using Addr = Register::Address<0x400500c0,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock-source selection.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            reserved=0x00000005,     ///<Reserved
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            reserved=0x00000007,     ///<Reserved
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::reserved> reserved{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::reserved> reserved{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonebaseCguOut0Clk{    ///<Output stage 25 control register for base clock BASE_CGU_OUT0_CLK
        using Addr = Register::Address<0x400500c4,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock-source selection.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            reserved=0x00000005,     ///<Reserved
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            reserved=0x00000007,     ///<Reserved
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::reserved> reserved{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::reserved> reserved{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
    namespace NonebaseCguOut1Clk{    ///<Output stage 25 control register for base clock BASE_CGU_OUT1_CLK
        using Addr = Register::Address<0x400500c8,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class pdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::outputStageEnabled> outputStageEnabled{};
            constexpr MPL::Value<pdVal,pdVal::powerDown> powerDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Block clock automatically during frequency change
        enum class autoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        namespace autoblockValC{
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr MPL::Value<autoblockVal,autoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,autoblockVal> autoblock{}; 
        ///Clock-source selection.
        enum class clkSelVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            reserved=0x00000005,     ///<Reserved
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            reserved=0x00000007,     ///<Reserved
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::ircDefault> ircDefault{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetRxClk> enetRxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<clkSelVal,clkSelVal::gpClkin> gpClkin{};
            constexpr MPL::Value<clkSelVal,clkSelVal::reserved> reserved{};
            constexpr MPL::Value<clkSelVal,clkSelVal::crystalOscillator> crystalOscillator{};
            constexpr MPL::Value<clkSelVal,clkSelVal::reserved> reserved{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll0ForAudio> pll0ForAudio{};
            constexpr MPL::Value<clkSelVal,clkSelVal::pll1> pll1{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idiva> idiva{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivb> idivb{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivc> idivc{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idivd> idivd{};
            constexpr MPL::Value<clkSelVal,clkSelVal::idive> idive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
    }
}
