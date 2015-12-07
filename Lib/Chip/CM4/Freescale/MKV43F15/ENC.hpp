#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Quadrature Decoder
    namespace EncCtrl{    ///<Control Register
        using Addr = Register::Address<0x40055000,0xffff0000,0,unsigned>;
        ///Compare Interrupt Enable
        enum class CmpieVal {
            v0=0x00000000,     ///<Compare interrupt is disabled
            v1=0x00000001,     ///<Compare interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CmpieVal> cmpie{}; 
        namespace CmpieValC{
            constexpr Register::FieldValue<decltype(cmpie),CmpieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmpie),CmpieVal::v1> v1{};
        }
        ///Compare Interrupt Request
        enum class CmpirqVal {
            v0=0x00000000,     ///<No match has occurred
            v1=0x00000001,     ///<COMP match has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CmpirqVal> cmpirq{}; 
        namespace CmpirqValC{
            constexpr Register::FieldValue<decltype(cmpirq),CmpirqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmpirq),CmpirqVal::v1> v1{};
        }
        ///Watchdog Enable
        enum class WdeVal {
            v0=0x00000000,     ///<Watchdog timer is disabled
            v1=0x00000001,     ///<Watchdog timer is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WdeVal> wde{}; 
        namespace WdeValC{
            constexpr Register::FieldValue<decltype(wde),WdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wde),WdeVal::v1> v1{};
        }
        ///Watchdog Timeout Interrupt Enable
        enum class DieVal {
            v0=0x00000000,     ///<Watchdog timer interrupt is disabled
            v1=0x00000001,     ///<Watchdog timer interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DieVal> die{}; 
        namespace DieValC{
            constexpr Register::FieldValue<decltype(die),DieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(die),DieVal::v1> v1{};
        }
        ///Watchdog Timeout Interrupt Request
        enum class DirqVal {
            v0=0x00000000,     ///<No interrupt has occurred
            v1=0x00000001,     ///<Watchdog timeout interrupt has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DirqVal> dirq{}; 
        namespace DirqValC{
            constexpr Register::FieldValue<decltype(dirq),DirqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dirq),DirqVal::v1> v1{};
        }
        ///Use Negative Edge of INDEX Pulse
        enum class XneVal {
            v0=0x00000000,     ///<Use positive transition edge of INDEX pulse
            v1=0x00000001,     ///<Use negative transition edge of INDEX pulse
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,XneVal> xne{}; 
        namespace XneValC{
            constexpr Register::FieldValue<decltype(xne),XneVal::v0> v0{};
            constexpr Register::FieldValue<decltype(xne),XneVal::v1> v1{};
        }
        ///INDEX Triggered Initialization of Position Counters UPOS and LPOS
        enum class XipVal {
            v0=0x00000000,     ///<No action
            v1=0x00000001,     ///<INDEX pulse initializes the position counter
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,XipVal> xip{}; 
        namespace XipValC{
            constexpr Register::FieldValue<decltype(xip),XipVal::v0> v0{};
            constexpr Register::FieldValue<decltype(xip),XipVal::v1> v1{};
        }
        ///INDEX Pulse Interrupt Enable
        enum class XieVal {
            v0=0x00000000,     ///<INDEX pulse interrupt is disabled
            v1=0x00000001,     ///<INDEX pulse interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,XieVal> xie{}; 
        namespace XieValC{
            constexpr Register::FieldValue<decltype(xie),XieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(xie),XieVal::v1> v1{};
        }
        ///INDEX Pulse Interrupt Request
        enum class XirqVal {
            v0=0x00000000,     ///<No interrupt has occurred
            v1=0x00000001,     ///<INDEX pulse interrupt has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,XirqVal> xirq{}; 
        namespace XirqValC{
            constexpr Register::FieldValue<decltype(xirq),XirqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(xirq),XirqVal::v1> v1{};
        }
        ///Enable Signal Phase Count Mode
        enum class Ph1Val {
            v0=0x00000000,     ///<Use standard quadrature decoder where PHASEA and PHASEB represent a two phase quadrature signal.
            v1=0x00000001,     ///<Bypass the quadrature decoder. A positive transition of the PHASEA input generates a count signal. The PHASEB input and the REV bit control the counter direction. If CTRL[REV] = 0, PHASEB = 0, then count up If CTRL[REV] = 0, PHASEB = 1, then count down If CTRL[REV] = 1, PHASEB = 0, then count down If CTRL[REV] = 1, PHASEB = 1, then count up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ph1Val> ph1{}; 
        namespace Ph1ValC{
            constexpr Register::FieldValue<decltype(ph1),Ph1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ph1),Ph1Val::v1> v1{};
        }
        ///Enable Reverse Direction Counting
        enum class RevVal {
            v0=0x00000000,     ///<Count normally
            v1=0x00000001,     ///<Count in the reverse direction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RevVal> rev{}; 
        namespace RevValC{
            constexpr Register::FieldValue<decltype(rev),RevVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rev),RevVal::v1> v1{};
        }
        ///Software Triggered Initialization of Position Counters UPOS and LPOS
        enum class SwipVal {
            v0=0x00000000,     ///<No action
            v1=0x00000001,     ///<Initialize position counter
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,SwipVal> swip{}; 
        namespace SwipValC{
            constexpr Register::FieldValue<decltype(swip),SwipVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swip),SwipVal::v1> v1{};
        }
        ///Use Negative Edge of HOME Input
        enum class HneVal {
            v0=0x00000000,     ///<Use positive going edge-to-trigger initialization of position counters UPOS and LPOS
            v1=0x00000001,     ///<Use negative going edge-to-trigger initialization of position counters UPOS and LPOS
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,HneVal> hne{}; 
        namespace HneValC{
            constexpr Register::FieldValue<decltype(hne),HneVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hne),HneVal::v1> v1{};
        }
        ///Enable HOME to Initialize Position Counters UPOS and LPOS
        enum class HipVal {
            v0=0x00000000,     ///<No action
            v1=0x00000001,     ///<HOME signal initializes the position counter
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,HipVal> hip{}; 
        namespace HipValC{
            constexpr Register::FieldValue<decltype(hip),HipVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hip),HipVal::v1> v1{};
        }
        ///HOME Interrupt Enable
        enum class HieVal {
            v0=0x00000000,     ///<Disable HOME interrupts
            v1=0x00000001,     ///<Enable HOME interrupts
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,HieVal> hie{}; 
        namespace HieValC{
            constexpr Register::FieldValue<decltype(hie),HieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hie),HieVal::v1> v1{};
        }
        ///HOME Signal Transition Interrupt Request
        enum class HirqVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<HOME signal transition interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,HirqVal> hirq{}; 
        namespace HirqValC{
            constexpr Register::FieldValue<decltype(hirq),HirqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hirq),HirqVal::v1> v1{};
        }
    }
    namespace EncFilt{    ///<Input Filter Register
        using Addr = Register::Address<0x40055002,0xfffff800,0,unsigned>;
        ///Input Filter Sample Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> filtPer{}; 
        namespace FiltperValC{
        }
        ///Input Filter Sample Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> filtCnt{}; 
        namespace FiltcntValC{
        }
    }
    namespace EncWtr{    ///<Watchdog Timeout Register
        using Addr = Register::Address<0x40055004,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdog{}; 
        namespace WdogValC{
        }
    }
    namespace EncPosd{    ///<Position Difference Counter Register
        using Addr = Register::Address<0x40055006,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> posd{}; 
        namespace PosdValC{
        }
    }
    namespace EncPosdh{    ///<Position Difference Hold Register
        using Addr = Register::Address<0x40055008,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> posdh{}; 
        namespace PosdhValC{
        }
    }
    namespace EncRev{    ///<Revolution Counter Register
        using Addr = Register::Address<0x4005500a,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rev{}; 
        namespace RevValC{
        }
    }
    namespace EncRevh{    ///<Revolution Hold Register
        using Addr = Register::Address<0x4005500c,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> revh{}; 
        namespace RevhValC{
        }
    }
    namespace EncUpos{    ///<Upper Position Counter Register
        using Addr = Register::Address<0x4005500e,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
    }
    namespace EncLpos{    ///<Lower Position Counter Register
        using Addr = Register::Address<0x40055010,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
    }
    namespace EncUposh{    ///<Upper Position Hold Register
        using Addr = Register::Address<0x40055012,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> posh{}; 
        namespace PoshValC{
        }
    }
    namespace EncLposh{    ///<Lower Position Hold Register
        using Addr = Register::Address<0x40055014,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> posh{}; 
        namespace PoshValC{
        }
    }
    namespace EncUinit{    ///<Upper Initialization Register
        using Addr = Register::Address<0x40055016,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> init{}; 
        namespace InitValC{
        }
    }
    namespace EncLinit{    ///<Lower Initialization Register
        using Addr = Register::Address<0x40055018,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> init{}; 
        namespace InitValC{
        }
    }
    namespace EncImr{    ///<Input Monitor Register
        using Addr = Register::Address<0x4005501a,0xffffff00,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> home{}; 
        namespace HomeValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> index{}; 
        namespace IndexValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> phb{}; 
        namespace PhbValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pha{}; 
        namespace PhaValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fhom{}; 
        namespace FhomValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> find{}; 
        namespace FindValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fphb{}; 
        namespace FphbValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fpha{}; 
        namespace FphaValC{
        }
    }
    namespace EncTst{    ///<Test Register
        using Addr = Register::Address<0x4005501c,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> testCount{}; 
        namespace TestcountValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> testPeriod{}; 
        namespace TestperiodValC{
        }
        ///Quadrature Decoder Negative Signal
        enum class QdnVal {
            v0=0x00000000,     ///<Leaves quadrature decoder signal in a positive direction
            v1=0x00000001,     ///<Generates a negative quadrature decoder signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,QdnVal> qdn{}; 
        namespace QdnValC{
            constexpr Register::FieldValue<decltype(qdn),QdnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(qdn),QdnVal::v1> v1{};
        }
        ///Test Counter Enable
        enum class TceVal {
            v0=0x00000000,     ///<Test count is not enabled
            v1=0x00000001,     ///<Test count is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,TceVal> tce{}; 
        namespace TceValC{
            constexpr Register::FieldValue<decltype(tce),TceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tce),TceVal::v1> v1{};
        }
        ///Test Mode Enable
        enum class TenVal {
            v0=0x00000000,     ///<Test module is not enabled
            v1=0x00000001,     ///<Test module is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,TenVal> ten{}; 
        namespace TenValC{
            constexpr Register::FieldValue<decltype(ten),TenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ten),TenVal::v1> v1{};
        }
    }
    namespace EncCtrl2{    ///<Control 2 Register
        using Addr = Register::Address<0x4005501e,0xfffff000,0,unsigned>;
        ///Update Hold Registers
        enum class UpdhldVal {
            v0=0x00000000,     ///<Disable updates of hold registers on rising edge of TRIGGER
            v1=0x00000001,     ///<Enable updates of hold registers on rising edge of TRIGGER
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UpdhldVal> updhld{}; 
        namespace UpdhldValC{
            constexpr Register::FieldValue<decltype(updhld),UpdhldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(updhld),UpdhldVal::v1> v1{};
        }
        ///Update Position Registers
        enum class UpdposVal {
            v0=0x00000000,     ///<No action for POSD, REV, UPOS and LPOS on rising edge of TRIGGER
            v1=0x00000001,     ///<Clear POSD, REV, UPOS and LPOS on rising edge of TRIGGER
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,UpdposVal> updpos{}; 
        namespace UpdposValC{
            constexpr Register::FieldValue<decltype(updpos),UpdposVal::v0> v0{};
            constexpr Register::FieldValue<decltype(updpos),UpdposVal::v1> v1{};
        }
        ///Enable Modulo Counting
        enum class ModVal {
            v0=0x00000000,     ///<Disable modulo counting
            v1=0x00000001,     ///<Enable modulo counting
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ModVal> mod{}; 
        namespace ModValC{
            constexpr Register::FieldValue<decltype(mod),ModVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mod),ModVal::v1> v1{};
        }
        ///Count Direction Flag
        enum class DirVal {
            v0=0x00000000,     ///<Last count was in the down direction
            v1=0x00000001,     ///<Last count was in the up direction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir),DirVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dir),DirVal::v1> v1{};
        }
        ///Roll-under Interrupt Enable
        enum class RuieVal {
            v0=0x00000000,     ///<Roll-under interrupt is disabled
            v1=0x00000001,     ///<Roll-under interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RuieVal> ruie{}; 
        namespace RuieValC{
            constexpr Register::FieldValue<decltype(ruie),RuieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ruie),RuieVal::v1> v1{};
        }
        ///Roll-under Interrupt Request
        enum class RuirqVal {
            v0=0x00000000,     ///<No roll-under has occurred
            v1=0x00000001,     ///<Roll-under has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RuirqVal> ruirq{}; 
        namespace RuirqValC{
            constexpr Register::FieldValue<decltype(ruirq),RuirqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ruirq),RuirqVal::v1> v1{};
        }
        ///Roll-over Interrupt Enable
        enum class RoieVal {
            v0=0x00000000,     ///<Roll-over interrupt is disabled
            v1=0x00000001,     ///<Roll-over interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RoieVal> roie{}; 
        namespace RoieValC{
            constexpr Register::FieldValue<decltype(roie),RoieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(roie),RoieVal::v1> v1{};
        }
        ///Roll-over Interrupt Request
        enum class RoirqVal {
            v0=0x00000000,     ///<No roll-over has occurred
            v1=0x00000001,     ///<Roll-over has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RoirqVal> roirq{}; 
        namespace RoirqValC{
            constexpr Register::FieldValue<decltype(roirq),RoirqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(roirq),RoirqVal::v1> v1{};
        }
        ///Revolution Counter Modulus Enable
        enum class RevmodVal {
            v0=0x00000000,     ///<Use INDEX pulse to increment/decrement revolution counter (REV).
            v1=0x00000001,     ///<Use modulus counting roll-over/under to increment/decrement revolution counter (REV).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,RevmodVal> revmod{}; 
        namespace RevmodValC{
            constexpr Register::FieldValue<decltype(revmod),RevmodVal::v0> v0{};
            constexpr Register::FieldValue<decltype(revmod),RevmodVal::v1> v1{};
        }
        ///Output Control
        enum class OutctlVal {
            v0=0x00000000,     ///<POSMATCH pulses when a match occurs between the position counters (POS) and the compare value (COMP).
            v1=0x00000001,     ///<POSMATCH pulses when the UPOS, LPOS, REV, or POSD registers are read.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,OutctlVal> outctl{}; 
        namespace OutctlValC{
            constexpr Register::FieldValue<decltype(outctl),OutctlVal::v0> v0{};
            constexpr Register::FieldValue<decltype(outctl),OutctlVal::v1> v1{};
        }
        ///Simultaneous PHASEA and PHASEB Change Interrupt Enable
        enum class SabieVal {
            v0=0x00000000,     ///<Simultaneous PHASEA and PHASEB change interrupt disabled.
            v1=0x00000001,     ///<Simultaneous PHASEA and PHASEB change interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,SabieVal> sabie{}; 
        namespace SabieValC{
            constexpr Register::FieldValue<decltype(sabie),SabieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sabie),SabieVal::v1> v1{};
        }
        ///Simultaneous PHASEA and PHASEB Change Interrupt Request
        enum class SabirqVal {
            v0=0x00000000,     ///<No simultaneous change of PHASEA and PHASEB has occurred.
            v1=0x00000001,     ///<A simultaneous change of PHASEA and PHASEB has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,SabirqVal> sabirq{}; 
        namespace SabirqValC{
            constexpr Register::FieldValue<decltype(sabirq),SabirqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sabirq),SabirqVal::v1> v1{};
        }
    }
    namespace EncUmod{    ///<Upper Modulus Register
        using Addr = Register::Address<0x40055020,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
        namespace ModValC{
        }
    }
    namespace EncLmod{    ///<Lower Modulus Register
        using Addr = Register::Address<0x40055022,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
        namespace ModValC{
        }
    }
    namespace EncUcomp{    ///<Upper Position Compare Register
        using Addr = Register::Address<0x40055024,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> comp{}; 
        namespace CompValC{
        }
    }
    namespace EncLcomp{    ///<Lower Position Compare Register
        using Addr = Register::Address<0x40055026,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> comp{}; 
        namespace CompValC{
        }
    }
}
