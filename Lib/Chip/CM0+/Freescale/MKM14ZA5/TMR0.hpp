#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Quad Timer
    namespace Tmr0Comp1{    ///<Timer Channel Compare Register 1
        using Addr = Register::Address<0x40057000,0xffff0000,0,unsigned>;
        ///Comparison Value 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> comparison1{}; 
    }
    namespace Tmr0Comp2{    ///<Timer Channel Compare Register 2
        using Addr = Register::Address<0x40057002,0xffff0000,0,unsigned>;
        ///Comparison Value 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> comparison2{}; 
    }
    namespace Tmr0Capt{    ///<Timer Channel Capture Register
        using Addr = Register::Address<0x40057004,0xffff0000,0,unsigned>;
        ///Capture Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capture{}; 
    }
    namespace Tmr0Load{    ///<Timer Channel Load Register
        using Addr = Register::Address<0x40057006,0xffff0000,0,unsigned>;
        ///Timer Load Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> load{}; 
    }
    namespace Tmr0Hold{    ///<Timer Channel Hold Register
        using Addr = Register::Address<0x40057008,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hold{}; 
    }
    namespace Tmr0Cntr{    ///<Timer Channel Counter Register
        using Addr = Register::Address<0x4005700a,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace Tmr0Ctrl{    ///<Timer Channel Control Register
        using Addr = Register::Address<0x4005700c,0xffff0000,0,unsigned>;
        ///Output Mode
        enum class outmodeVal {
            v000=0x00000000,     ///<Asserted while counter is active
            v001=0x00000001,     ///<Clear OFLAG output on successful compare
            v010=0x00000002,     ///<Set OFLAG output on successful compare
            v011=0x00000003,     ///<Toggle OFLAG output on successful compare
            v100=0x00000004,     ///<Toggle OFLAG output using alternating compare registers
            v101=0x00000005,     ///<Set on compare, cleared on secondary source input edge
            v110=0x00000006,     ///<Set on compare, cleared on counter rollover
            v111=0x00000007,     ///<Enable gated clock output while counter is active
        };
        namespace outmodeValC{
            constexpr MPL::Value<outmodeVal,outmodeVal::v000> v000{};
            constexpr MPL::Value<outmodeVal,outmodeVal::v001> v001{};
            constexpr MPL::Value<outmodeVal,outmodeVal::v010> v010{};
            constexpr MPL::Value<outmodeVal,outmodeVal::v011> v011{};
            constexpr MPL::Value<outmodeVal,outmodeVal::v100> v100{};
            constexpr MPL::Value<outmodeVal,outmodeVal::v101> v101{};
            constexpr MPL::Value<outmodeVal,outmodeVal::v110> v110{};
            constexpr MPL::Value<outmodeVal,outmodeVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,outmodeVal> outmode{}; 
        ///Co-Channel Initialization
        enum class coinitVal {
            v0=0x00000000,     ///<Co-channel counter/timers cannot force a re-initialization of this counter/timer
            v1=0x00000001,     ///<Co-channel counter/timers may force a re-initialization of this counter/timer
        };
        namespace coinitValC{
            constexpr MPL::Value<coinitVal,coinitVal::v0> v0{};
            constexpr MPL::Value<coinitVal,coinitVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,coinitVal> coinit{}; 
        ///Count Direction
        enum class dirVal {
            v0=0x00000000,     ///<Count up.
            v1=0x00000001,     ///<Count down.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::v0> v0{};
            constexpr MPL::Value<dirVal,dirVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Count Length
        enum class lengthVal {
            v0=0x00000000,     ///<Roll over.
            v1=0x00000001,     ///<Count until compare, then re-initialize. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, alternating values of COMP1 and COMP2 are used to generate successful comparisons. For example, the counter counts until a COMP1 value is reached, re-initializes, counts until COMP2 value is reached, re-initializes, counts until COMP1 value is reached, and so on.
        };
        namespace lengthValC{
            constexpr MPL::Value<lengthVal,lengthVal::v0> v0{};
            constexpr MPL::Value<lengthVal,lengthVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,lengthVal> length{}; 
        ///Count Once
        enum class onceVal {
            v0=0x00000000,     ///<Count repeatedly.
            v1=0x00000001,     ///<Count until compare and then stop. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, the counter re-initializes after reaching the COMP1 value, continues to count to the COMP2 value, and then stops.
        };
        namespace onceValC{
            constexpr MPL::Value<onceVal,onceVal::v0> v0{};
            constexpr MPL::Value<onceVal,onceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,onceVal> once{}; 
        ///Secondary Count Source
        enum class scsVal {
            v00=0x00000000,     ///<Counter 0 input pin
            v01=0x00000001,     ///<Counter 1 input pin
            v10=0x00000002,     ///<Counter 2 input pin
            v11=0x00000003,     ///<Counter 3 input pin
        };
        namespace scsValC{
            constexpr MPL::Value<scsVal,scsVal::v00> v00{};
            constexpr MPL::Value<scsVal,scsVal::v01> v01{};
            constexpr MPL::Value<scsVal,scsVal::v10> v10{};
            constexpr MPL::Value<scsVal,scsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,scsVal> scs{}; 
        ///Primary Count Source
        enum class pcsVal {
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
        namespace pcsValC{
            constexpr MPL::Value<pcsVal,pcsVal::v0000> v0000{};
            constexpr MPL::Value<pcsVal,pcsVal::v0001> v0001{};
            constexpr MPL::Value<pcsVal,pcsVal::v0010> v0010{};
            constexpr MPL::Value<pcsVal,pcsVal::v0011> v0011{};
            constexpr MPL::Value<pcsVal,pcsVal::v0100> v0100{};
            constexpr MPL::Value<pcsVal,pcsVal::v0101> v0101{};
            constexpr MPL::Value<pcsVal,pcsVal::v0110> v0110{};
            constexpr MPL::Value<pcsVal,pcsVal::v0111> v0111{};
            constexpr MPL::Value<pcsVal,pcsVal::v1000> v1000{};
            constexpr MPL::Value<pcsVal,pcsVal::v1001> v1001{};
            constexpr MPL::Value<pcsVal,pcsVal::v1010> v1010{};
            constexpr MPL::Value<pcsVal,pcsVal::v1011> v1011{};
            constexpr MPL::Value<pcsVal,pcsVal::v1100> v1100{};
            constexpr MPL::Value<pcsVal,pcsVal::v1101> v1101{};
            constexpr MPL::Value<pcsVal,pcsVal::v1110> v1110{};
            constexpr MPL::Value<pcsVal,pcsVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,pcsVal> pcs{}; 
        ///Count Mode
        enum class cmVal {
            v000=0x00000000,     ///<No operation
            v001=0x00000001,     ///<Count rising edges of primary sourceRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1. If the primary count source is IP bus clock divide by 1, only rising edges are counted regardless of the value of SCTRL[IPS].
            v010=0x00000002,     ///<Count rising and falling edges of primary sourceIP bus clock divide by 1 cannot be used as a primary count source in edge count mode.
            v011=0x00000003,     ///<Count rising edges of primary source while secondary input high active
            v100=0x00000004,     ///<Quadrature count mode, uses primary and secondary sources
            v101=0x00000005,     ///<Count rising edges of primary source; secondary source specifies directionRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1.
            v110=0x00000006,     ///<Edge of secondary source triggers primary count until compare
            v111=0x00000007,     ///<Cascaded counter mode (up/down)The primary count source must be set to one of the counter outputs.
        };
        namespace cmValC{
            constexpr MPL::Value<cmVal,cmVal::v000> v000{};
            constexpr MPL::Value<cmVal,cmVal::v001> v001{};
            constexpr MPL::Value<cmVal,cmVal::v010> v010{};
            constexpr MPL::Value<cmVal,cmVal::v011> v011{};
            constexpr MPL::Value<cmVal,cmVal::v100> v100{};
            constexpr MPL::Value<cmVal,cmVal::v101> v101{};
            constexpr MPL::Value<cmVal,cmVal::v110> v110{};
            constexpr MPL::Value<cmVal,cmVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,cmVal> cm{}; 
    }
    namespace Tmr0Sctrl{    ///<Timer Channel Status and Control Register
        using Addr = Register::Address<0x4005700e,0xffff0000,0,unsigned>;
        ///Output Enable
        enum class oenVal {
            v0=0x00000000,     ///<The external pin is configured as an input.
            v1=0x00000001,     ///<The OFLAG output signal is driven on the external pin. Other timer groups using this external pin as their input see the driven value. The polarity of the signal is determined by OPS.
        };
        namespace oenValC{
            constexpr MPL::Value<oenVal,oenVal::v0> v0{};
            constexpr MPL::Value<oenVal,oenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,oenVal> oen{}; 
        ///Output Polarity Select
        enum class opsVal {
            v0=0x00000000,     ///<True polarity.
            v1=0x00000001,     ///<Inverted polarity.
        };
        namespace opsValC{
            constexpr MPL::Value<opsVal,opsVal::v0> v0{};
            constexpr MPL::Value<opsVal,opsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,opsVal> ops{}; 
        ///Force OFLAG Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> force{}; 
        ///Forced OFLAG Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> val{}; 
        ///Enable External OFLAG Force
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eeof{}; 
        ///Master Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mstr{}; 
        ///Input Capture Mode
        enum class captureModeVal {
            v00=0x00000000,     ///<Capture function is disabled
            v01=0x00000001,     ///<Load capture register on rising edge (when IPS=0) or falling edge (when IPS=1) of input
            v10=0x00000002,     ///<Load capture register on falling edge (when IPS=0) or rising edge (when IPS=1) of input
            v11=0x00000003,     ///<Load capture register on both edges of input
        };
        namespace captureModeValC{
            constexpr MPL::Value<captureModeVal,captureModeVal::v00> v00{};
            constexpr MPL::Value<captureModeVal,captureModeVal::v01> v01{};
            constexpr MPL::Value<captureModeVal,captureModeVal::v10> v10{};
            constexpr MPL::Value<captureModeVal,captureModeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,captureModeVal> captureMode{}; 
        ///External Input Signal
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> input{}; 
        ///Input Polarity Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ips{}; 
        ///Input Edge Flag Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iefie{}; 
        ///Input Edge Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ief{}; 
        ///Timer Overflow Flag Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tofie{}; 
        ///Timer Overflow Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tof{}; 
        ///Timer Compare Flag Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tcfie{}; 
        ///Timer Compare Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tcf{}; 
    }
    namespace Tmr0Cmpld1{    ///<Timer Channel Comparator Load Register 1
        using Addr = Register::Address<0x40057010,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> comparatorLoad1{}; 
    }
    namespace Tmr0Cmpld2{    ///<Timer Channel Comparator Load Register 2
        using Addr = Register::Address<0x40057012,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> comparatorLoad2{}; 
    }
    namespace Tmr0Csctrl{    ///<Timer Channel Comparator Status and Control Register
        using Addr = Register::Address<0x40057014,0xffff0000,0,unsigned>;
        ///Compare Load Control 1
        enum class cl1Val {
            v00=0x00000000,     ///<Never preload
            v01=0x00000001,     ///<Load upon successful compare with the value in COMP1
            v10=0x00000002,     ///<Load upon successful compare with the value in COMP2
        };
        namespace cl1ValC{
            constexpr MPL::Value<cl1Val,cl1Val::v00> v00{};
            constexpr MPL::Value<cl1Val,cl1Val::v01> v01{};
            constexpr MPL::Value<cl1Val,cl1Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,cl1Val> cl1{}; 
        ///Compare Load Control 2
        enum class cl2Val {
            v00=0x00000000,     ///<Never preload
            v01=0x00000001,     ///<Load upon successful compare with the value in COMP1
            v10=0x00000002,     ///<Load upon successful compare with the value in COMP2
        };
        namespace cl2ValC{
            constexpr MPL::Value<cl2Val,cl2Val::v00> v00{};
            constexpr MPL::Value<cl2Val,cl2Val::v01> v01{};
            constexpr MPL::Value<cl2Val,cl2Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,cl2Val> cl2{}; 
        ///Timer Compare 1 Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcf1{}; 
        ///Timer Compare 2 Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcf2{}; 
        ///Timer Compare 1 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tcf1en{}; 
        ///Timer Compare 2 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcf2en{}; 
        ///Output flag
        enum class oflagVal {
            v0=0x00000000,     ///<The OFLAG signal is low.
            v1=0x00000001,     ///<The OFLAG signal is high.
        };
        namespace oflagValC{
            constexpr MPL::Value<oflagVal,oflagVal::v0> v0{};
            constexpr MPL::Value<oflagVal,oflagVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,oflagVal> oflag{}; 
        ///Counting Direction Indicator
        enum class upVal {
            v0=0x00000000,     ///<The last count was in the DOWN direction.
            v1=0x00000001,     ///<The last count was in the UP direction.
        };
        namespace upValC{
            constexpr MPL::Value<upVal,upVal::v0> v0{};
            constexpr MPL::Value<upVal,upVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,upVal> up{}; 
        ///Triggered Count Initialization Control
        enum class tciVal {
            v0=0x00000000,     ///<Stop counter upon receiving a second trigger event while still counting from the first trigger event.
            v1=0x00000001,     ///<Reload the counter upon receiving a second trigger event while still counting from the first trigger event.
        };
        namespace tciValC{
            constexpr MPL::Value<tciVal,tciVal::v0> v0{};
            constexpr MPL::Value<tciVal,tciVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,tciVal> tci{}; 
        ///Reload on Capture
        enum class rocVal {
            v0=0x00000000,     ///<Do not reload the counter on a capture event.
            v1=0x00000001,     ///<Reload the counter on a capture event.
        };
        namespace rocValC{
            constexpr MPL::Value<rocVal,rocVal::v0> v0{};
            constexpr MPL::Value<rocVal,rocVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,rocVal> roc{}; 
        ///Alternative Load Enable
        enum class altLoadVal {
            v0=0x00000000,     ///<Counter can be re-initialized only with the LOAD register.
            v1=0x00000001,     ///<Counter can be re-initialized with the LOAD or CMPLD2 registers depending on count direction.
        };
        namespace altLoadValC{
            constexpr MPL::Value<altLoadVal,altLoadVal::v0> v0{};
            constexpr MPL::Value<altLoadVal,altLoadVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,altLoadVal> altLoad{}; 
        ///Fault Enable
        enum class faultVal {
            v0=0x00000000,     ///<Fault function disabled.
            v1=0x00000001,     ///<Fault function enabled.
        };
        namespace faultValC{
            constexpr MPL::Value<faultVal,faultVal::v0> v0{};
            constexpr MPL::Value<faultVal,faultVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,faultVal> fault{}; 
        ///Debug Actions Enable
        enum class dbgEnVal {
            v00=0x00000000,     ///<Continue with normal operation during debug mode. (default)
            v01=0x00000001,     ///<Halt TMR counter during debug mode.
            v10=0x00000002,     ///<Force TMR output to logic 0 (prior to consideration of SCTRL[OPS]).
            v11=0x00000003,     ///<Both halt counter and force output to 0 during debug mode.
        };
        namespace dbgEnValC{
            constexpr MPL::Value<dbgEnVal,dbgEnVal::v00> v00{};
            constexpr MPL::Value<dbgEnVal,dbgEnVal::v01> v01{};
            constexpr MPL::Value<dbgEnVal,dbgEnVal::v10> v10{};
            constexpr MPL::Value<dbgEnVal,dbgEnVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dbgEnVal> dbgEn{}; 
    }
    namespace Tmr0Filt{    ///<Timer Channel Input Filter Register
        using Addr = Register::Address<0x40057016,0xfffff800,0,unsigned>;
        ///Input Filter Sample Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> filtPer{}; 
        ///Input Filter Sample Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> filtCnt{}; 
    }
    namespace Tmr0Enbl{    ///<Timer Channel Enable Register
        using Addr = Register::Address<0x4005701e,0xfffffff0,0,unsigned>;
        ///Timer Channel Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enbl{}; 
    }
}
