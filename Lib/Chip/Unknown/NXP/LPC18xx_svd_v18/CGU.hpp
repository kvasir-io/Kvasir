#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10462 Chapter title=LPC18xx Clock Generation Unit (CGU) Modification date=6/1/2011 Major revision=0 Minor revision=1 
    namespace NonefreqMon{    ///<Frequency monitor register
        using Addr = Register::Address<0x40050014,0xe0000000,0,unsigned>;
        ///9-bit reference clock-counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rcnt{}; 
        namespace RcntValC{
        }
        ///14-bit selected clock-counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,9),Register::ReadWriteAccess,unsigned> fcnt{}; 
        namespace FcntValC{
        }
        ///Measure frequency
        enum class MeasVal {
            rcntAndFcntDisabl=0x00000000,     ///<RCNT and FCNT disabled
            frequencyCountersS=0x00000001,     ///<Frequency counters started
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,MeasVal> meas{}; 
        namespace MeasValC{
            constexpr Register::FieldValue<decltype(meas),MeasVal::rcntAndFcntDisabl> rcntAndFcntDisabl{};
            constexpr Register::FieldValue<decltype(meas),MeasVal::frequencyCountersS> frequencyCountersS{};
        }
        ///Clock-source selection for the clock to be measured. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillatorD=0x00000000,     ///<32 kHz oscillator (default)
            irc=0x00000001,     ///<IRC
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0Usb=0x00000007,     ///<PLL0 (USB)
            pll0Audio=0x00000008,     ///<PLL0 (audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillatorD> v32KhzOscillatorD{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::irc> irc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0Usb> pll0Usb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0Audio> pll0Audio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NonextalOscCtrl{    ///<Crystal oscillator control register
        using Addr = Register::Address<0x40050018,0xfffffff8,0,unsigned>;
        ///Oscillator-pad enable. Do not change the BYPASS and ENABLE bits in one write-action: this will result in unstable device operation!
        enum class EnableVal {
            enable=0x00000000,     ///<Enable
            powerDownDefault=0x00000001,     ///<Power-down (default)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable),EnableVal::enable> enable{};
            constexpr Register::FieldValue<decltype(enable),EnableVal::powerDownDefault> powerDownDefault{};
        }
        ///Configure crystal operation or external-clock input pin XTAL1. Do not change the BYPASS and ENABLE bits in one write-action: this will result in unstable device operation!
        enum class BypassVal {
            operationWithCryst=0x00000000,     ///<Operation with crystal connected (default).
            bypassModeUseThi=0x00000001,     ///<Bypass mode. Use this mode when an external clock source is used instead of a crystal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BypassVal> bypass{}; 
        namespace BypassValC{
            constexpr Register::FieldValue<decltype(bypass),BypassVal::operationWithCryst> operationWithCryst{};
            constexpr Register::FieldValue<decltype(bypass),BypassVal::bypassModeUseThi> bypassModeUseThi{};
        }
        ///Select frequency range
        enum class HfVal {
            oscillatorLowFrequ=0x00000000,     ///<Oscillator low-frequency mode (crystal or external clock source 1 to 20 MHz). Between 15 MHz to 20 MHz, the state of the HF bit is don't care.
            oscillatorHighFreq=0x00000001,     ///<Oscillator high-frequency mode; crystal or external clock source 15 to 25 MHz. Between 15 MHz to 20 MHz, the state of the HF bit is don't care (default)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,HfVal> hf{}; 
        namespace HfValC{
            constexpr Register::FieldValue<decltype(hf),HfVal::oscillatorLowFrequ> oscillatorLowFrequ{};
            constexpr Register::FieldValue<decltype(hf),HfVal::oscillatorHighFreq> oscillatorHighFreq{};
        }
    }
    namespace Nonepll0usbStat{    ///<PLL0 (USB) status register
        using Addr = Register::Address<0x4005001c,0xfffffffc,0,unsigned>;
        ///PLL0 lock indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lock{}; 
        namespace LockValC{
        }
        ///PLL0 free running indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fr{}; 
        namespace FrValC{
        }
    }
    namespace Nonepll0usbCtrl{    ///<PLL0 (USB) control register
        using Addr = Register::Address<0x40050020,0xe0fff7a0,0,unsigned>;
        ///PLL0 power down
        enum class PdVal {
            pll0Enabled=0x00000000,     ///<PLL0 enabled
            pll0PoweredDown=0x00000001,     ///<PLL0 powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::pll0Enabled> pll0Enabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::pll0PoweredDown> pll0PoweredDown{};
        }
        ///Input clock bypass control
        enum class BypassVal {
            ccoClockSentToPo=0x00000000,     ///<CCO clock sent to post-dividers. Use this in normal operation.
            pll0InputClockSen=0x00000001,     ///<PLL0 input clock sent to post-dividers (default).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BypassVal> bypass{}; 
        namespace BypassValC{
            constexpr Register::FieldValue<decltype(bypass),BypassVal::ccoClockSentToPo> ccoClockSentToPo{};
            constexpr Register::FieldValue<decltype(bypass),BypassVal::pll0InputClockSen> pll0InputClockSen{};
        }
        ///PLL0 direct input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> directi{}; 
        namespace DirectiValC{
        }
        ///PLL0 direct output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> directo{}; 
        namespace DirectoValC{
        }
        ///PLL0 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clken{}; 
        namespace ClkenValC{
        }
        ///Free running mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frm{}; 
        namespace FrmValC{
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace Nonepll0usbMdiv{    ///<PLL0 (USB) M-divider register
        using Addr = Register::Address<0x40050024,0x00000000,0,unsigned>;
        ///Decoded M-divider coefficient value. Select values for the M-divider between 1 and 131071.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> mdec{}; 
        namespace MdecValC{
        }
        ///Bandwidth select P value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,17),Register::ReadWriteAccess,unsigned> selp{}; 
        namespace SelpValC{
        }
        ///Bandwidth select I value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,22),Register::ReadWriteAccess,unsigned> seli{}; 
        namespace SeliValC{
        }
        ///Bandwidth select R value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> selr{}; 
        namespace SelrValC{
        }
    }
    namespace Nonepll0usbNpDiv{    ///<PLL0 (USB) N/P-divider register
        using Addr = Register::Address<0x40050028,0xffc00f80,0,unsigned>;
        ///Decoded P-divider coefficient value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pdec{}; 
        namespace PdecValC{
        }
        ///Decoded N-divider coefficient value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,12),Register::ReadWriteAccess,unsigned> ndec{}; 
        namespace NdecValC{
        }
    }
    namespace Nonepll0audioStat{    ///<PLL0 (audio) status register
        using Addr = Register::Address<0x4005002c,0xfffffffc,0,unsigned>;
        ///PLL0 lock indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lock{}; 
        namespace LockValC{
        }
        ///PLL0 free running indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fr{}; 
        namespace FrValC{
        }
    }
    namespace Nonepll0audioCtrl{    ///<PLL0 (audio) control register
        using Addr = Register::Address<0x40050030,0xe0ff87a0,0,unsigned>;
        ///PLL0 power down
        enum class PdVal {
            pll0Enabled=0x00000000,     ///<PLL0 enabled
            pll0PoweredDown=0x00000001,     ///<PLL0 powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::pll0Enabled> pll0Enabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::pll0PoweredDown> pll0PoweredDown{};
        }
        ///Input clock bypass control
        enum class BypassVal {
            ccoClockSentToPo=0x00000000,     ///<CCO clock sent to post-dividers. Use this in normal operation.
            pll0InputClockSen=0x00000001,     ///<PLL0 input clock sent to post-dividers (default).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BypassVal> bypass{}; 
        namespace BypassValC{
            constexpr Register::FieldValue<decltype(bypass),BypassVal::ccoClockSentToPo> ccoClockSentToPo{};
            constexpr Register::FieldValue<decltype(bypass),BypassVal::pll0InputClockSen> pll0InputClockSen{};
        }
        ///PLL0 direct input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> directi{}; 
        namespace DirectiValC{
        }
        ///PLL0 direct output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> directo{}; 
        namespace DirectoValC{
        }
        ///PLL0 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clken{}; 
        namespace ClkenValC{
        }
        ///Free running mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frm{}; 
        namespace FrmValC{
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Fractional PLL word write request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pllfraqReq{}; 
        namespace PllfraqreqValC{
        }
        ///SD modulator bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> selExt{}; 
        namespace SelextValC{
        }
        ///SD modulator power-down
        enum class ModpdVal {
            sdModulatorEnabled=0x00000000,     ///<SD modulator enabled
            sdModulatorPowered=0x00000001,     ///<SD modulator powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ModpdVal> modPd{}; 
        namespace ModpdValC{
            constexpr Register::FieldValue<decltype(modPd),ModpdVal::sdModulatorEnabled> sdModulatorEnabled{};
            constexpr Register::FieldValue<decltype(modPd),ModpdVal::sdModulatorPowered> sdModulatorPowered{};
        }
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace Nonepll0audioMdiv{    ///<PLL0 (audio) M-divider register
        using Addr = Register::Address<0x40050034,0xfffe0000,0,unsigned>;
        ///Decoded M-divider coefficient value. Select values for the M-divider between 1 and 131071.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> mdec{}; 
        namespace MdecValC{
        }
    }
    namespace Nonepll0audioNpDiv{    ///<PLL0 (audio) N/P-divider register
        using Addr = Register::Address<0x40050038,0xffc00f80,0,unsigned>;
        ///Decoded P-divider coefficient value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pdec{}; 
        namespace PdecValC{
        }
        ///Decoded N-divider coefficient value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,12),Register::ReadWriteAccess,unsigned> ndec{}; 
        namespace NdecValC{
        }
    }
    namespace Nonepll0audioFrac{    ///<PLL0 (audio)
        using Addr = Register::Address<0x4005003c,0xffc00000,0,unsigned>;
        ///PLL fractional divider control word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,0),Register::ReadWriteAccess,unsigned> pllfractCtrl{}; 
        namespace PllfractctrlValC{
        }
    }
    namespace Nonepll1Stat{    ///<PLL1 status register
        using Addr = Register::Address<0x40050040,0xfffffffe,0,unsigned>;
        ///PLL1 lock indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lock{}; 
        namespace LockValC{
        }
    }
    namespace Nonepll1Ctrl{    ///<PLL1 control register
        using Addr = Register::Address<0x40050044,0xe000c43c,0,unsigned>;
        ///PLL1 power down
        enum class PdVal {
            pll1Enabled=0x00000000,     ///<PLL1 enabled
            pll1PoweredDown=0x00000001,     ///<PLL1 powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::pll1Enabled> pll1Enabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::pll1PoweredDown> pll1PoweredDown{};
        }
        ///Input clock bypass control
        enum class BypassVal {
            ccoClockSentToPo=0x00000000,     ///<CCO clock sent to post-dividers. Use for normal operation.
            pll1InputClockSen=0x00000001,     ///<PLL1 input clock sent to post-dividers (default).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BypassVal> bypass{}; 
        namespace BypassValC{
            constexpr Register::FieldValue<decltype(bypass),BypassVal::ccoClockSentToPo> ccoClockSentToPo{};
            constexpr Register::FieldValue<decltype(bypass),BypassVal::pll1InputClockSen> pll1InputClockSen{};
        }
        ///PLL feedback select (see Figure 88 "PLL1 block diagram").
        enum class FbselVal {
            ccoOutputIsUsedA=0x00000000,     ///<CCO output is used as feedback divider input clock.
            pllOutputClockCl=0x00000001,     ///<PLL output clock (clkout) is used as feedback divider input clock. Use for normal operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,FbselVal> fbsel{}; 
        namespace FbselValC{
            constexpr Register::FieldValue<decltype(fbsel),FbselVal::ccoOutputIsUsedA> ccoOutputIsUsedA{};
            constexpr Register::FieldValue<decltype(fbsel),FbselVal::pllOutputClockCl> pllOutputClockCl{};
        }
        ///PLL direct CCO output
        enum class DirectVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DirectVal> direct{}; 
        namespace DirectValC{
            constexpr Register::FieldValue<decltype(direct),DirectVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(direct),DirectVal::enabled> enabled{};
        }
        ///Post-divider division ratio. The value applied is 2xP.
        enum class PselVal {
            v1=0x00000000,     ///<1
            v2Default=0x00000001,     ///<2 (default)
            v4=0x00000002,     ///<4
            v8=0x00000003,     ///<8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PselVal> psel{}; 
        namespace PselValC{
            constexpr Register::FieldValue<decltype(psel),PselVal::v1> v1{};
            constexpr Register::FieldValue<decltype(psel),PselVal::v2Default> v2Default{};
            constexpr Register::FieldValue<decltype(psel),PselVal::v4> v4{};
            constexpr Register::FieldValue<decltype(psel),PselVal::v8> v8{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Pre-divider division ratio
        enum class NselVal {
            v1=0x00000000,     ///<1
            v2=0x00000001,     ///<2
            v3Default=0x00000002,     ///<3 (default)
            v4=0x00000003,     ///<4
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NselVal> nsel{}; 
        namespace NselValC{
            constexpr Register::FieldValue<decltype(nsel),NselVal::v1> v1{};
            constexpr Register::FieldValue<decltype(nsel),NselVal::v2> v2{};
            constexpr Register::FieldValue<decltype(nsel),NselVal::v3Default> v3Default{};
            constexpr Register::FieldValue<decltype(nsel),NselVal::v4> v4{};
        }
        ///Feedback-divider division ratio (M) 00000000 = 1 00000001 = 2  ... 11111111 = 256
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> msel{}; 
        namespace MselValC{
        }
        ///Clock-source selection.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<crystal oscillator
            pll0=0x00000007,     ///<PLL0
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0> pll0{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NoneidivaCtrl{    ///<Integer divider A control register
        using Addr = Register::Address<0x40050048,0xe0fff7f2,0,unsigned>;
        ///Integer divider A power down
        enum class PdVal {
            idivaEnabledDefau=0x00000000,     ///<IDIVA enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::idivaEnabledDefau> idivaEnabledDefau{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Integer divider A divider values (1/(IDIV + 1))
        enum class IdivVal {
            v1Default=0x00000000,     ///<1 (default)
            v2=0x00000001,     ///<2
            v3=0x00000002,     ///<3
            v4=0x00000003,     ///<4
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,IdivVal> idiv{}; 
        namespace IdivValC{
            constexpr Register::FieldValue<decltype(idiv),IdivVal::v1Default> v1Default{};
            constexpr Register::FieldValue<decltype(idiv),IdivVal::v2> v2{};
            constexpr Register::FieldValue<decltype(idiv),IdivVal::v3> v3{};
            constexpr Register::FieldValue<decltype(idiv),IdivVal::v4> v4{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForUsb> pll0ForUsb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
        }
    }
    namespace NoneidivbCtrl{    ///<Integer divider B control register
        using Addr = Register::Address<0x4005004c,0xe0fff7c2,0,unsigned>;
        ///Integer divider power down
        enum class PdVal {
            idivEnabledDefaul=0x00000000,     ///<IDIV enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::idivEnabledDefaul> idivEnabledDefaul{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Integer divider B, C, D divider values (1/(IDIV + 1)) 0000 = 1 (default) 0001 = 2  ... 1111 = 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> idiv{}; 
        namespace IdivValC{
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock-source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0audio> pll0audio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
        }
    }
    namespace NoneidivcCtrl{    ///<Integer divider C control register
        using Addr = Register::Address<0x40050050,0xe0fff7c2,0,unsigned>;
        ///Integer divider power down
        enum class PdVal {
            idivEnabledDefaul=0x00000000,     ///<IDIV enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::idivEnabledDefaul> idivEnabledDefaul{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Integer divider B, C, D divider values (1/(IDIV + 1)) 0000 = 1 (default) 0001 = 2  ... 1111 = 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> idiv{}; 
        namespace IdivValC{
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock-source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0audio> pll0audio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
        }
    }
    namespace NoneidivdCtrl{    ///<Integer divider D control register
        using Addr = Register::Address<0x40050054,0xe0fff7c2,0,unsigned>;
        ///Integer divider power down
        enum class PdVal {
            idivEnabledDefaul=0x00000000,     ///<IDIV enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::idivEnabledDefaul> idivEnabledDefaul{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Integer divider B, C, D divider values (1/(IDIV + 1)) 0000 = 1 (default) 0001 = 2  ... 1111 = 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> idiv{}; 
        namespace IdivValC{
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock-source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0audio> pll0audio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
        }
    }
    namespace NoneidiveCtrl{    ///<Integer divider E control register
        using Addr = Register::Address<0x40050058,0xe0fff402,0,unsigned>;
        ///Integer divider power down
        enum class PdVal {
            idivEnabledDefaul=0x00000000,     ///<IDIV enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::idivEnabledDefaul> idivEnabledDefaul{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Integer divider E divider values (1/(IDIV + 1)) 00000000 = 1 (default) 00000001 = 2  ... 111111111 = 256
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,2),Register::ReadWriteAccess,unsigned> idiv{}; 
        namespace IdivValC{
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock-source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
        }
    }
    namespace NonebaseSafeClk{    ///<Output stage 0 control register for base clock BASE_SAFE_CLK
        using Addr = Register::Address<0x4005005c,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock source selection. All other values are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> clkSel{}; 
        namespace ClkselValC{
        }
    }
    namespace NonebaseUsb0Clk{    ///<Output stage 1 control register for base clock BASE_USB0_CLK
        using Addr = Register::Address<0x40050060,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock-source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> clkSel{}; 
        namespace ClkselValC{
        }
    }
    namespace NonebaseUsb1Clk{    ///<Output stage 3 control register for base clock BASE_USB1_CLK
        using Addr = Register::Address<0x40050068,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForUsb> pll0ForUsb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NonebaseM3Clk{    ///<Output stage BASE_M3_CLK control register
        using Addr = Register::Address<0x4005006c,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NonebaseSpifiClk{    ///<Output stage BASE_SPIFI_CLK control register
        using Addr = Register::Address<0x40050070,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NonebasePhyRxClk{    ///<Output stage BASE_PHY_RX_CLK control register
        using Addr = Register::Address<0x40050078,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NonebasePhyTxClk{    ///<Output stage BASE_PHY_TX_CLK control register
        using Addr = Register::Address<0x4005007c,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NonebaseApb1Clk{    ///<Output stage BASE_APB1_CLK control register
        using Addr = Register::Address<0x40050080,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NonebaseApb3Clk{    ///<Output stage BASE_APB3_CLK control register
        using Addr = Register::Address<0x40050084,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NonebaseLcdClk{    ///<Output stage BASE_LCD_CLK control register
        using Addr = Register::Address<0x40050088,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NonebaseSdioClk{    ///<Output stage BASE_SDIO_CLK control register
        using Addr = Register::Address<0x40050090,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NonebaseSsp0Clk{    ///<Output stage BASE_SSP0_CLK control register
        using Addr = Register::Address<0x40050094,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NonebaseSsp1Clk{    ///<Output stage BASE_SSP1_CLK control register
        using Addr = Register::Address<0x40050098,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NonebaseUart0Clk{    ///<Output stage BASE_UART0_CLK control register
        using Addr = Register::Address<0x4005009c,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NonebaseUart1Clk{    ///<Output stage BASE_UART1_CLK control register
        using Addr = Register::Address<0x400500a0,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NonebaseUart2Clk{    ///<Output stage BASE_UART2_CLK control register
        using Addr = Register::Address<0x400500a4,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NonebaseUart3Clk{    ///<Output stage BASE_UART3_CLK control register
        using Addr = Register::Address<0x400500a8,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NonebaseOutClk{    ///<Output stage 20 control register for base clock BASE_OUT_CLK
        using Addr = Register::Address<0x400500ac,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock-source selection.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForUsb> pll0ForUsb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NonebaseApllClk{    ///<Output stage 25 control register for base clock BASE_APLL_CLK
        using Addr = Register::Address<0x400500c0,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock-source selection.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NonebaseCguOut0Clk{    ///<Output stage 25 control register for base clock BASE_CGU_OUT0_CLK
        using Addr = Register::Address<0x400500c4,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock-source selection.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
    namespace NonebaseCguOut1Clk{    ///<Output stage 25 control register for base clock BASE_CGU_OUT1_CLK
        using Addr = Register::Address<0x400500c8,0xe0fff7fe,0,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::powerDown> powerDown{};
        }
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock),AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Clock-source selection.
        enum class ClkselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel),ClkselVal::idive> idive{};
        }
    }
}
