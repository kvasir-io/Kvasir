#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Quad Timer
    namespace Tmr0Comp1{    ///<Timer Channel Compare Register 1
        using Addr = Register::Address<0x40057000,0xffff0000,0,unsigned>;
        ///Comparison Value 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> comparison1{}; 
        namespace Comparison1ValC{
        }
    }
    namespace Tmr0Comp2{    ///<Timer Channel Compare Register 2
        using Addr = Register::Address<0x40057002,0xffff0000,0,unsigned>;
        ///Comparison Value 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> comparison2{}; 
        namespace Comparison2ValC{
        }
    }
    namespace Tmr0Capt{    ///<Timer Channel Capture Register
        using Addr = Register::Address<0x40057004,0xffff0000,0,unsigned>;
        ///Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capture{}; 
        namespace CaptureValC{
        }
    }
    namespace Tmr0Load{    ///<Timer Channel Load Register
        using Addr = Register::Address<0x40057006,0xffff0000,0,unsigned>;
        ///Timer Load Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> load{}; 
        namespace LoadValC{
        }
    }
    namespace Tmr0Hold{    ///<Timer Channel Hold Register
        using Addr = Register::Address<0x40057008,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hold{}; 
        namespace HoldValC{
        }
    }
    namespace Tmr0Cntr{    ///<Timer Channel Counter Register
        using Addr = Register::Address<0x4005700a,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> counter{}; 
        namespace CounterValC{
        }
    }
    namespace Tmr0Ctrl{    ///<Timer Channel Control Register
        using Addr = Register::Address<0x4005700c,0xffff0000,0,unsigned>;
        ///Output Mode
        enum class OutmodeVal {
            v000=0x00000000,     ///<Asserted while counter is active
            v001=0x00000001,     ///<Clear OFLAG output on successful compare
            v010=0x00000002,     ///<Set OFLAG output on successful compare
            v011=0x00000003,     ///<Toggle OFLAG output on successful compare
            v100=0x00000004,     ///<Toggle OFLAG output using alternating compare registers
            v101=0x00000005,     ///<Set on compare, cleared on secondary source input edge
            v110=0x00000006,     ///<Set on compare, cleared on counter rollover
            v111=0x00000007,     ///<Enable gated clock output while counter is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,OutmodeVal> outmode{}; 
        namespace OutmodeValC{
            constexpr Register::FieldValue<decltype(outmode),OutmodeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(outmode),OutmodeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(outmode),OutmodeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(outmode),OutmodeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(outmode),OutmodeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(outmode),OutmodeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(outmode),OutmodeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(outmode),OutmodeVal::v111> v111{};
        }
        ///Co-Channel Initialization
        enum class CoinitVal {
            v0=0x00000000,     ///<Co-channel counter/timers cannot force a re-initialization of this counter/timer
            v1=0x00000001,     ///<Co-channel counter/timers may force a re-initialization of this counter/timer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CoinitVal> coinit{}; 
        namespace CoinitValC{
            constexpr Register::FieldValue<decltype(coinit),CoinitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(coinit),CoinitVal::v1> v1{};
        }
        ///Count Direction
        enum class DirVal {
            v0=0x00000000,     ///<Count up.
            v1=0x00000001,     ///<Count down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir),DirVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dir),DirVal::v1> v1{};
        }
        ///Count Length
        enum class LengthVal {
            v0=0x00000000,     ///<Roll over.
            v1=0x00000001,     ///<Count until compare, then re-initialize. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, alternating values of COMP1 and COMP2 are used to generate successful comparisons. For example, the counter counts until a COMP1 value is reached, re-initializes, counts until COMP2 value is reached, re-initializes, counts until COMP1 value is reached, and so on.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,LengthVal> length{}; 
        namespace LengthValC{
            constexpr Register::FieldValue<decltype(length),LengthVal::v0> v0{};
            constexpr Register::FieldValue<decltype(length),LengthVal::v1> v1{};
        }
        ///Count Once
        enum class OnceVal {
            v0=0x00000000,     ///<Count repeatedly.
            v1=0x00000001,     ///<Count until compare and then stop. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, the counter re-initializes after reaching the COMP1 value, continues to count to the COMP2 value, and then stops.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,OnceVal> once{}; 
        namespace OnceValC{
            constexpr Register::FieldValue<decltype(once),OnceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(once),OnceVal::v1> v1{};
        }
        ///Secondary Count Source
        enum class ScsVal {
            v00=0x00000000,     ///<Counter 0 input pin
            v01=0x00000001,     ///<Counter 1 input pin
            v10=0x00000002,     ///<Counter 2 input pin
            v11=0x00000003,     ///<Counter 3 input pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,ScsVal> scs{}; 
        namespace ScsValC{
            constexpr Register::FieldValue<decltype(scs),ScsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(scs),ScsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(scs),ScsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(scs),ScsVal::v11> v11{};
        }
        ///Primary Count Source
        enum class PcsVal {
            v0000=0x00000000,     ///<Counter 0 input pin
            v0001=0x00000001,     ///<Counter 1 input pin
            v0010=0x00000002,     ///<Counter 2 input pin
            v0011=0x00000003,     ///<Counter 3 input pin
            v0100=0x00000004,     ///<Counter 0 output
            v0101=0x00000005,     ///<Counter 1 output
            v0110=0x00000006,     ///<Counter 2 output
            v0111=0x00000007,     ///<Counter 3 output
            v1000=0x00000008,     ///<IP bus clock divide by 1 prescaler
            v1001=0x00000009,     ///<IP bus clock divide by 2 prescaler
            v1010=0x0000000a,     ///<IP bus clock divide by 4 prescaler
            v1011=0x0000000b,     ///<IP bus clock divide by 8 prescaler
            v1100=0x0000000c,     ///<IP bus clock divide by 16 prescaler
            v1101=0x0000000d,     ///<IP bus clock divide by 32 prescaler
            v1110=0x0000000e,     ///<IP bus clock divide by 64 prescaler
            v1111=0x0000000f,     ///<IP bus clock divide by 128 prescaler
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,PcsVal> pcs{}; 
        namespace PcsValC{
            constexpr Register::FieldValue<decltype(pcs),PcsVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(pcs),PcsVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(pcs),PcsVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(pcs),PcsVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(pcs),PcsVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(pcs),PcsVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(pcs),PcsVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(pcs),PcsVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(pcs),PcsVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(pcs),PcsVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(pcs),PcsVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(pcs),PcsVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(pcs),PcsVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(pcs),PcsVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(pcs),PcsVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(pcs),PcsVal::v1111> v1111{};
        }
        ///Count Mode
        enum class CmVal {
            v000=0x00000000,     ///<No operation
            v001=0x00000001,     ///<Count rising edges of primary sourceRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1. If the primary count source is IP bus clock divide by 1, only rising edges are counted regardless of the value of SCTRL[IPS].
            v010=0x00000002,     ///<Count rising and falling edges of primary sourceIP bus clock divide by 1 cannot be used as a primary count source in edge count mode.
            v011=0x00000003,     ///<Count rising edges of primary source while secondary input high active
            v100=0x00000004,     ///<Quadrature count mode, uses primary and secondary sources
            v101=0x00000005,     ///<Count rising edges of primary source; secondary source specifies directionRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1.
            v110=0x00000006,     ///<Edge of secondary source triggers primary count until compare
            v111=0x00000007,     ///<Cascaded counter mode (up/down)The primary count source must be set to one of the counter outputs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,CmVal> cm{}; 
        namespace CmValC{
            constexpr Register::FieldValue<decltype(cm),CmVal::v000> v000{};
            constexpr Register::FieldValue<decltype(cm),CmVal::v001> v001{};
            constexpr Register::FieldValue<decltype(cm),CmVal::v010> v010{};
            constexpr Register::FieldValue<decltype(cm),CmVal::v011> v011{};
            constexpr Register::FieldValue<decltype(cm),CmVal::v100> v100{};
            constexpr Register::FieldValue<decltype(cm),CmVal::v101> v101{};
            constexpr Register::FieldValue<decltype(cm),CmVal::v110> v110{};
            constexpr Register::FieldValue<decltype(cm),CmVal::v111> v111{};
        }
    }
    namespace Tmr0Sctrl{    ///<Timer Channel Status and Control Register
        using Addr = Register::Address<0x4005700e,0xffff0000,0,unsigned>;
        ///Output Enable
        enum class OenVal {
            v0=0x00000000,     ///<The external pin is configured as an input.
            v1=0x00000001,     ///<The OFLAG output signal is driven on the external pin. Other timer groups using this external pin as their input see the driven value. The polarity of the signal is determined by OPS.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OenVal> oen{}; 
        namespace OenValC{
            constexpr Register::FieldValue<decltype(oen),OenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(oen),OenVal::v1> v1{};
        }
        ///Output Polarity Select
        enum class OpsVal {
            v0=0x00000000,     ///<True polarity.
            v1=0x00000001,     ///<Inverted polarity.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OpsVal> ops{}; 
        namespace OpsValC{
            constexpr Register::FieldValue<decltype(ops),OpsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ops),OpsVal::v1> v1{};
        }
        ///Force OFLAG Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> force{}; 
        namespace ForceValC{
        }
        ///Forced OFLAG Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> val{}; 
        namespace ValValC{
        }
        ///Enable External OFLAG Force
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eeof{}; 
        namespace EeofValC{
        }
        ///Master Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mstr{}; 
        namespace MstrValC{
        }
        ///Input Capture Mode
        enum class CapturemodeVal {
            v00=0x00000000,     ///<Capture function is disabled
            v01=0x00000001,     ///<Load capture register on rising edge (when IPS=0) or falling edge (when IPS=1) of input
            v10=0x00000002,     ///<Load capture register on falling edge (when IPS=0) or rising edge (when IPS=1) of input
            v11=0x00000003,     ///<Load capture register on both edges of input
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,CapturemodeVal> captureMode{}; 
        namespace CapturemodeValC{
            constexpr Register::FieldValue<decltype(captureMode),CapturemodeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(captureMode),CapturemodeVal::v01> v01{};
            constexpr Register::FieldValue<decltype(captureMode),CapturemodeVal::v10> v10{};
            constexpr Register::FieldValue<decltype(captureMode),CapturemodeVal::v11> v11{};
        }
        ///External Input Signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> input{}; 
        namespace InputValC{
        }
        ///Input Polarity Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ips{}; 
        namespace IpsValC{
        }
        ///Input Edge Flag Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iefie{}; 
        namespace IefieValC{
        }
        ///Input Edge Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ief{}; 
        namespace IefValC{
        }
        ///Timer Overflow Flag Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tofie{}; 
        namespace TofieValC{
        }
        ///Timer Overflow Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tof{}; 
        namespace TofValC{
        }
        ///Timer Compare Flag Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tcfie{}; 
        namespace TcfieValC{
        }
        ///Timer Compare Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tcf{}; 
        namespace TcfValC{
        }
    }
    namespace Tmr0Cmpld1{    ///<Timer Channel Comparator Load Register 1
        using Addr = Register::Address<0x40057010,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> comparatorLoad1{}; 
        namespace Comparatorload1ValC{
        }
    }
    namespace Tmr0Cmpld2{    ///<Timer Channel Comparator Load Register 2
        using Addr = Register::Address<0x40057012,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> comparatorLoad2{}; 
        namespace Comparatorload2ValC{
        }
    }
    namespace Tmr0Csctrl{    ///<Timer Channel Comparator Status and Control Register
        using Addr = Register::Address<0x40057014,0xffff0000,0,unsigned>;
        ///Compare Load Control 1
        enum class Cl1Val {
            v00=0x00000000,     ///<Never preload
            v01=0x00000001,     ///<Load upon successful compare with the value in COMP1
            v10=0x00000002,     ///<Load upon successful compare with the value in COMP2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Cl1Val> cl1{}; 
        namespace Cl1ValC{
            constexpr Register::FieldValue<decltype(cl1),Cl1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(cl1),Cl1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(cl1),Cl1Val::v10> v10{};
        }
        ///Compare Load Control 2
        enum class Cl2Val {
            v00=0x00000000,     ///<Never preload
            v01=0x00000001,     ///<Load upon successful compare with the value in COMP1
            v10=0x00000002,     ///<Load upon successful compare with the value in COMP2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Cl2Val> cl2{}; 
        namespace Cl2ValC{
            constexpr Register::FieldValue<decltype(cl2),Cl2Val::v00> v00{};
            constexpr Register::FieldValue<decltype(cl2),Cl2Val::v01> v01{};
            constexpr Register::FieldValue<decltype(cl2),Cl2Val::v10> v10{};
        }
        ///Timer Compare 1 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcf1{}; 
        namespace Tcf1ValC{
        }
        ///Timer Compare 2 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcf2{}; 
        namespace Tcf2ValC{
        }
        ///Timer Compare 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tcf1en{}; 
        namespace Tcf1enValC{
        }
        ///Timer Compare 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcf2en{}; 
        namespace Tcf2enValC{
        }
        ///Output flag
        enum class OflagVal {
            v0=0x00000000,     ///<The OFLAG signal is low.
            v1=0x00000001,     ///<The OFLAG signal is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,OflagVal> oflag{}; 
        namespace OflagValC{
            constexpr Register::FieldValue<decltype(oflag),OflagVal::v0> v0{};
            constexpr Register::FieldValue<decltype(oflag),OflagVal::v1> v1{};
        }
        ///Counting Direction Indicator
        enum class UpVal {
            v0=0x00000000,     ///<The last count was in the DOWN direction.
            v1=0x00000001,     ///<The last count was in the UP direction.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,UpVal> up{}; 
        namespace UpValC{
            constexpr Register::FieldValue<decltype(up),UpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(up),UpVal::v1> v1{};
        }
        ///Triggered Count Initialization Control
        enum class TciVal {
            v0=0x00000000,     ///<Stop counter upon receiving a second trigger event while still counting from the first trigger event.
            v1=0x00000001,     ///<Reload the counter upon receiving a second trigger event while still counting from the first trigger event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,TciVal> tci{}; 
        namespace TciValC{
            constexpr Register::FieldValue<decltype(tci),TciVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tci),TciVal::v1> v1{};
        }
        ///Reload on Capture
        enum class RocVal {
            v0=0x00000000,     ///<Do not reload the counter on a capture event.
            v1=0x00000001,     ///<Reload the counter on a capture event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,RocVal> roc{}; 
        namespace RocValC{
            constexpr Register::FieldValue<decltype(roc),RocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(roc),RocVal::v1> v1{};
        }
        ///Alternative Load Enable
        enum class AltloadVal {
            v0=0x00000000,     ///<Counter can be re-initialized only with the LOAD register.
            v1=0x00000001,     ///<Counter can be re-initialized with the LOAD or CMPLD2 registers depending on count direction.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,AltloadVal> altLoad{}; 
        namespace AltloadValC{
            constexpr Register::FieldValue<decltype(altLoad),AltloadVal::v0> v0{};
            constexpr Register::FieldValue<decltype(altLoad),AltloadVal::v1> v1{};
        }
        ///Fault Enable
        enum class FaultVal {
            v0=0x00000000,     ///<Fault function disabled.
            v1=0x00000001,     ///<Fault function enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,FaultVal> fault{}; 
        namespace FaultValC{
            constexpr Register::FieldValue<decltype(fault),FaultVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fault),FaultVal::v1> v1{};
        }
        ///Debug Actions Enable
        enum class DbgenVal {
            v00=0x00000000,     ///<Continue with normal operation during debug mode. (default)
            v01=0x00000001,     ///<Halt TMR counter during debug mode.
            v10=0x00000002,     ///<Force TMR output to logic 0 (prior to consideration of SCTRL[OPS]).
            v11=0x00000003,     ///<Both halt counter and force output to 0 during debug mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DbgenVal> dbgEn{}; 
        namespace DbgenValC{
            constexpr Register::FieldValue<decltype(dbgEn),DbgenVal::v00> v00{};
            constexpr Register::FieldValue<decltype(dbgEn),DbgenVal::v01> v01{};
            constexpr Register::FieldValue<decltype(dbgEn),DbgenVal::v10> v10{};
            constexpr Register::FieldValue<decltype(dbgEn),DbgenVal::v11> v11{};
        }
    }
    namespace Tmr0Filt{    ///<Timer Channel Input Filter Register
        using Addr = Register::Address<0x40057016,0xfffff800,0,unsigned>;
        ///Input Filter Sample Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> filtPer{}; 
        namespace FiltperValC{
        }
        ///Input Filter Sample Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> filtCnt{}; 
        namespace FiltcntValC{
        }
    }
    namespace Tmr0Enbl{    ///<Timer Channel Enable Register
        using Addr = Register::Address<0x4005701e,0xfffffff0,0,unsigned>;
        ///Timer Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enbl{}; 
        namespace EnblValC{
        }
    }
}
