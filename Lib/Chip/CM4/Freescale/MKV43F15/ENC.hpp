#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Quadrature Decoder
    namespace EncCtrl{    ///<Control Register
        using Addr = Register::Address<0x40055000,0xffff0000,0x00000000,unsigned>;
        ///Compare Interrupt Enable
        enum class CmpieVal {
            v0=0x00000000,     ///<Compare interrupt is disabled
            v1=0x00000001,     ///<Compare interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CmpieVal> cmpie{}; 
        namespace CmpieValC{
            constexpr Register::FieldValue<decltype(cmpie)::Type,CmpieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmpie)::Type,CmpieVal::v1> v1{};
        }
        ///Compare Interrupt Request
        enum class CmpirqVal {
            v0=0x00000000,     ///<No match has occurred
            v1=0x00000001,     ///<COMP match has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CmpirqVal> cmpirq{}; 
        namespace CmpirqValC{
            constexpr Register::FieldValue<decltype(cmpirq)::Type,CmpirqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmpirq)::Type,CmpirqVal::v1> v1{};
        }
        ///Watchdog Enable
        enum class WdeVal {
            v0=0x00000000,     ///<Watchdog timer is disabled
            v1=0x00000001,     ///<Watchdog timer is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WdeVal> wde{}; 
        namespace WdeValC{
            constexpr Register::FieldValue<decltype(wde)::Type,WdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wde)::Type,WdeVal::v1> v1{};
        }
        ///Watchdog Timeout Interrupt Enable
        enum class DieVal {
            v0=0x00000000,     ///<Watchdog timer interrupt is disabled
            v1=0x00000001,     ///<Watchdog timer interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DieVal> die{}; 
        namespace DieValC{
            constexpr Register::FieldValue<decltype(die)::Type,DieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(die)::Type,DieVal::v1> v1{};
        }
        ///Watchdog Timeout Interrupt Request
        enum class DirqVal {
            v0=0x00000000,     ///<No interrupt has occurred
            v1=0x00000001,     ///<Watchdog timeout interrupt has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DirqVal> dirq{}; 
        namespace DirqValC{
            constexpr Register::FieldValue<decltype(dirq)::Type,DirqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dirq)::Type,DirqVal::v1> v1{};
        }
        ///Use Negative Edge of INDEX Pulse
        enum class XneVal {
            v0=0x00000000,     ///<Use positive transition edge of INDEX pulse
            v1=0x00000001,     ///<Use negative transition edge of INDEX pulse
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,XneVal> xne{}; 
        namespace XneValC{
            constexpr Register::FieldValue<decltype(xne)::Type,XneVal::v0> v0{};
            constexpr Register::FieldValue<decltype(xne)::Type,XneVal::v1> v1{};
        }
        ///INDEX Triggered Initialization of Position Counters UPOS and LPOS
        enum class XipVal {
            v0=0x00000000,     ///<No action
            v1=0x00000001,     ///<INDEX pulse initializes the position counter
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,XipVal> xip{}; 
        namespace XipValC{
            constexpr Register::FieldValue<decltype(xip)::Type,XipVal::v0> v0{};
            constexpr Register::FieldValue<decltype(xip)::Type,XipVal::v1> v1{};
        }
        ///INDEX Pulse Interrupt Enable
        enum class XieVal {
            v0=0x00000000,     ///<INDEX pulse interrupt is disabled
            v1=0x00000001,     ///<INDEX pulse interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,XieVal> xie{}; 
        namespace XieValC{
            constexpr Register::FieldValue<decltype(xie)::Type,XieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(xie)::Type,XieVal::v1> v1{};
        }
        ///INDEX Pulse Interrupt Request
        enum class XirqVal {
            v0=0x00000000,     ///<No interrupt has occurred
            v1=0x00000001,     ///<INDEX pulse interrupt has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,XirqVal> xirq{}; 
        namespace XirqValC{
            constexpr Register::FieldValue<decltype(xirq)::Type,XirqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(xirq)::Type,XirqVal::v1> v1{};
        }
        ///Enable Signal Phase Count Mode
        enum class Ph1Val {
            v0=0x00000000,     ///<Use standard quadrature decoder where PHASEA and PHASEB represent a two phase quadrature signal.
            v1=0x00000001,     ///<Bypass the quadrature decoder. A positive transition of the PHASEA input generates a count signal. The PHASEB input and the REV bit control the counter direction. If CTRL[REV] = 0, PHASEB = 0, then count up If CTRL[REV] = 0, PHASEB = 1, then count down If CTRL[REV] = 1, PHASEB = 0, then count down If CTRL[REV] = 1, PHASEB = 1, then count up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ph1Val> ph1{}; 
        namespace Ph1ValC{
            constexpr Register::FieldValue<decltype(ph1)::Type,Ph1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ph1)::Type,Ph1Val::v1> v1{};
        }
        ///Enable Reverse Direction Counting
        enum class RevVal {
            v0=0x00000000,     ///<Count normally
            v1=0x00000001,     ///<Count in the reverse direction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RevVal> rev{}; 
        namespace RevValC{
            constexpr Register::FieldValue<decltype(rev)::Type,RevVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rev)::Type,RevVal::v1> v1{};
        }
        ///Software Triggered Initialization of Position Counters UPOS and LPOS
        enum class SwipVal {
            v0=0x00000000,     ///<No action
            v1=0x00000001,     ///<Initialize position counter
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SwipVal> swip{}; 
        namespace SwipValC{
            constexpr Register::FieldValue<decltype(swip)::Type,SwipVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swip)::Type,SwipVal::v1> v1{};
        }
        ///Use Negative Edge of HOME Input
        enum class HneVal {
            v0=0x00000000,     ///<Use positive going edge-to-trigger initialization of position counters UPOS and LPOS
            v1=0x00000001,     ///<Use negative going edge-to-trigger initialization of position counters UPOS and LPOS
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,HneVal> hne{}; 
        namespace HneValC{
            constexpr Register::FieldValue<decltype(hne)::Type,HneVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hne)::Type,HneVal::v1> v1{};
        }
        ///Enable HOME to Initialize Position Counters UPOS and LPOS
        enum class HipVal {
            v0=0x00000000,     ///<No action
            v1=0x00000001,     ///<HOME signal initializes the position counter
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,HipVal> hip{}; 
        namespace HipValC{
            constexpr Register::FieldValue<decltype(hip)::Type,HipVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hip)::Type,HipVal::v1> v1{};
        }
        ///HOME Interrupt Enable
        enum class HieVal {
            v0=0x00000000,     ///<Disable HOME interrupts
            v1=0x00000001,     ///<Enable HOME interrupts
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,HieVal> hie{}; 
        namespace HieValC{
            constexpr Register::FieldValue<decltype(hie)::Type,HieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hie)::Type,HieVal::v1> v1{};
        }
        ///HOME Signal Transition Interrupt Request
        enum class HirqVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<HOME signal transition interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,HirqVal> hirq{}; 
        namespace HirqValC{
            constexpr Register::FieldValue<decltype(hirq)::Type,HirqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hirq)::Type,HirqVal::v1> v1{};
        }
    }
    namespace EncFilt{    ///<Input Filter Register
        using Addr = Register::Address<0x40055002,0xfffff800,0x00000000,unsigned>;
        ///Input Filter Sample Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> filtPer{}; 
        ///Input Filter Sample Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> filtCnt{}; 
    }
    namespace EncWtr{    ///<Watchdog Timeout Register
        using Addr = Register::Address<0x40055004,0xffff0000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdog{}; 
    }
    namespace EncPosd{    ///<Position Difference Counter Register
        using Addr = Register::Address<0x40055006,0xffff0000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> posd{}; 
    }
    namespace EncPosdh{    ///<Position Difference Hold Register
        using Addr = Register::Address<0x40055008,0xffff0000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> posdh{}; 
    }
    namespace EncRev{    ///<Revolution Counter Register
        using Addr = Register::Address<0x4005500a,0xffff0000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rev{}; 
    }
    namespace EncRevh{    ///<Revolution Hold Register
        using Addr = Register::Address<0x4005500c,0xffff0000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> revh{}; 
    }
    namespace EncUpos{    ///<Upper Position Counter Register
        using Addr = Register::Address<0x4005500e,0xffff0000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pos{}; 
    }
    namespace EncLpos{    ///<Lower Position Counter Register
        using Addr = Register::Address<0x40055010,0xffff0000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pos{}; 
    }
    namespace EncUposh{    ///<Upper Position Hold Register
        using Addr = Register::Address<0x40055012,0xffff0000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> posh{}; 
    }
    namespace EncLposh{    ///<Lower Position Hold Register
        using Addr = Register::Address<0x40055014,0xffff0000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> posh{}; 
    }
    namespace EncUinit{    ///<Upper Initialization Register
        using Addr = Register::Address<0x40055016,0xffff0000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> init{}; 
    }
    namespace EncLinit{    ///<Lower Initialization Register
        using Addr = Register::Address<0x40055018,0xffff0000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> init{}; 
    }
    namespace EncImr{    ///<Input Monitor Register
        using Addr = Register::Address<0x4005501a,0xffffff00,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> home{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> index{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> phb{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pha{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fhom{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> find{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fphb{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fpha{}; 
    }
    namespace EncTst{    ///<Test Register
        using Addr = Register::Address<0x4005501c,0xffff0000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> testCount{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> testPeriod{}; 
        ///Quadrature Decoder Negative Signal
        enum class QdnVal {
            v0=0x00000000,     ///<Leaves quadrature decoder signal in a positive direction
            v1=0x00000001,     ///<Generates a negative quadrature decoder signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,QdnVal> qdn{}; 
        namespace QdnValC{
            constexpr Register::FieldValue<decltype(qdn)::Type,QdnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(qdn)::Type,QdnVal::v1> v1{};
        }
        ///Test Counter Enable
        enum class TceVal {
            v0=0x00000000,     ///<Test count is not enabled
            v1=0x00000001,     ///<Test count is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,TceVal> tce{}; 
        namespace TceValC{
            constexpr Register::FieldValue<decltype(tce)::Type,TceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tce)::Type,TceVal::v1> v1{};
        }
        ///Test Mode Enable
        enum class TenVal {
            v0=0x00000000,     ///<Test module is not enabled
            v1=0x00000001,     ///<Test module is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,TenVal> ten{}; 
        namespace TenValC{
            constexpr Register::FieldValue<decltype(ten)::Type,TenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ten)::Type,TenVal::v1> v1{};
        }
    }
    namespace EncCtrl2{    ///<Control 2 Register
        using Addr = Register::Address<0x4005501e,0xfffff000,0x00000000,unsigned>;
        ///Update Hold Registers
        enum class UpdhldVal {
            v0=0x00000000,     ///<Disable updates of hold registers on rising edge of TRIGGER
            v1=0x00000001,     ///<Enable updates of hold registers on rising edge of TRIGGER
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UpdhldVal> updhld{}; 
        namespace UpdhldValC{
            constexpr Register::FieldValue<decltype(updhld)::Type,UpdhldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(updhld)::Type,UpdhldVal::v1> v1{};
        }
        ///Update Position Registers
        enum class UpdposVal {
            v0=0x00000000,     ///<No action for POSD, REV, UPOS and LPOS on rising edge of TRIGGER
            v1=0x00000001,     ///<Clear POSD, REV, UPOS and LPOS on rising edge of TRIGGER
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,UpdposVal> updpos{}; 
        namespace UpdposValC{
            constexpr Register::FieldValue<decltype(updpos)::Type,UpdposVal::v0> v0{};
            constexpr Register::FieldValue<decltype(updpos)::Type,UpdposVal::v1> v1{};
        }
        ///Enable Modulo Counting
        enum class ModVal {
            v0=0x00000000,     ///<Disable modulo counting
            v1=0x00000001,     ///<Enable modulo counting
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ModVal> mod{}; 
        namespace ModValC{
            constexpr Register::FieldValue<decltype(mod)::Type,ModVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mod)::Type,ModVal::v1> v1{};
        }
        ///Count Direction Flag
        enum class DirVal {
            v0=0x00000000,     ///<Last count was in the down direction
            v1=0x00000001,     ///<Last count was in the up direction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::v1> v1{};
        }
        ///Roll-under Interrupt Enable
        enum class RuieVal {
            v0=0x00000000,     ///<Roll-under interrupt is disabled
            v1=0x00000001,     ///<Roll-under interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RuieVal> ruie{}; 
        namespace RuieValC{
            constexpr Register::FieldValue<decltype(ruie)::Type,RuieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ruie)::Type,RuieVal::v1> v1{};
        }
        ///Roll-under Interrupt Request
        enum class RuirqVal {
            v0=0x00000000,     ///<No roll-under has occurred
            v1=0x00000001,     ///<Roll-under has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RuirqVal> ruirq{}; 
        namespace RuirqValC{
            constexpr Register::FieldValue<decltype(ruirq)::Type,RuirqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ruirq)::Type,RuirqVal::v1> v1{};
        }
        ///Roll-over Interrupt Enable
        enum class RoieVal {
            v0=0x00000000,     ///<Roll-over interrupt is disabled
            v1=0x00000001,     ///<Roll-over interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RoieVal> roie{}; 
        namespace RoieValC{
            constexpr Register::FieldValue<decltype(roie)::Type,RoieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(roie)::Type,RoieVal::v1> v1{};
        }
        ///Roll-over Interrupt Request
        enum class RoirqVal {
            v0=0x00000000,     ///<No roll-over has occurred
            v1=0x00000001,     ///<Roll-over has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RoirqVal> roirq{}; 
        namespace RoirqValC{
            constexpr Register::FieldValue<decltype(roirq)::Type,RoirqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(roirq)::Type,RoirqVal::v1> v1{};
        }
        ///Revolution Counter Modulus Enable
        enum class RevmodVal {
            v0=0x00000000,     ///<Use INDEX pulse to increment/decrement revolution counter (REV).
            v1=0x00000001,     ///<Use modulus counting roll-over/under to increment/decrement revolution counter (REV).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,RevmodVal> revmod{}; 
        namespace RevmodValC{
            constexpr Register::FieldValue<decltype(revmod)::Type,RevmodVal::v0> v0{};
            constexpr Register::FieldValue<decltype(revmod)::Type,RevmodVal::v1> v1{};
        }
        ///Output Control
        enum class OutctlVal {
            v0=0x00000000,     ///<POSMATCH pulses when a match occurs between the position counters (POS) and the compare value (COMP).
            v1=0x00000001,     ///<POSMATCH pulses when the UPOS, LPOS, REV, or POSD registers are read.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,OutctlVal> outctl{}; 
        namespace OutctlValC{
            constexpr Register::FieldValue<decltype(outctl)::Type,OutctlVal::v0> v0{};
            constexpr Register::FieldValue<decltype(outctl)::Type,OutctlVal::v1> v1{};
        }
        ///Simultaneous PHASEA and PHASEB Change Interrupt Enable
        enum class SabieVal {
            v0=0x00000000,     ///<Simultaneous PHASEA and PHASEB change interrupt disabled.
            v1=0x00000001,     ///<Simultaneous PHASEA and PHASEB change interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,SabieVal> sabie{}; 
        namespace SabieValC{
            constexpr Register::FieldValue<decltype(sabie)::Type,SabieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sabie)::Type,SabieVal::v1> v1{};
        }
        ///Simultaneous PHASEA and PHASEB Change Interrupt Request
        enum class SabirqVal {
            v0=0x00000000,     ///<No simultaneous change of PHASEA and PHASEB has occurred.
            v1=0x00000001,     ///<A simultaneous change of PHASEA and PHASEB has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,SabirqVal> sabirq{}; 
        namespace SabirqValC{
            constexpr Register::FieldValue<decltype(sabirq)::Type,SabirqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sabirq)::Type,SabirqVal::v1> v1{};
        }
    }
    namespace EncUmod{    ///<Upper Modulus Register
        using Addr = Register::Address<0x40055020,0xffff0000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
    }
    namespace EncLmod{    ///<Lower Modulus Register
        using Addr = Register::Address<0x40055022,0xffff0000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
    }
    namespace EncUcomp{    ///<Upper Position Compare Register
        using Addr = Register::Address<0x40055024,0xffff0000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> comp{}; 
    }
    namespace EncLcomp{    ///<Lower Position Compare Register
        using Addr = Register::Address<0x40055026,0xffff0000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> comp{}; 
    }
}
