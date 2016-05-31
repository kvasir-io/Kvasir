#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Lptimer0Control{    ///<Module Control
        using Addr = Register::Address<0x40038000,0x3ef0f00c,0x00000000,unsigned>;
        ///Count Mode. 
        enum class CmdVal {
            free=0x00000000,     ///<The timer is free running mode on the RTCn module clock (RTCnOSC or LFOSCn).
            risingEdge=0x00000001,     ///<The timer is incremented on the rising edges of the selected external trigger (LPTnTx).
            fallingEdge=0x00000002,     ///<The timer is incremented on the falling edges of the selected external trigger (LPTnTx).
            anyEdge=0x00000003,     ///<The timer is incremented on both edges of the selected external trigger (LPTnTx).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::free> free{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::anyEdge> anyEdge{};
        }
        ///External Trigger Source Select. 
        enum class ExtselVal {
            lptnt0=0x00000000,     ///<Select external trigger LPTnT0 (PB3.0).
            lptnt1=0x00000001,     ///<Select external trigger LPTnT1 (PB3.1).
            lptnt2=0x00000002,     ///<Select external trigger LPTnT2 (PB3.2).
            lptnt3=0x00000003,     ///<Select external trigger LPTnT3 (Comparator 0 Output).
            lptnt4=0x00000004,     ///<Select external trigger LPTnT4 (RESERVED).
            lptnt5=0x00000005,     ///<Select external trigger LPTnT5 (RESERVED).
            lptnt6=0x00000006,     ///<Select external trigger LPTnT6 (RESERVED).
            lptnt7=0x00000007,     ///<Select external trigger LPTnT7 (RESERVED).
            lptnt8=0x00000008,     ///<Select external trigger LPTnT8 (RESERVED).
            lptnt9=0x00000009,     ///<Select external trigger LPTnT9 (RESERVED).
            lptnt10=0x0000000a,     ///<Select external trigger LPTnT10 (RESERVED).
            lptnt11=0x0000000b,     ///<Select external trigger LPTnT11 (RESERVED).
            lptnt12=0x0000000c,     ///<Select external trigger LPTnT12 (RESERVED).
            lptnt13=0x0000000d,     ///<Select external trigger LPTnT13 (RESERVED).
            lptnt14=0x0000000e,     ///<Select external trigger LPTnT14 (RESERVED).
            lptnt15=0x0000000f,     ///<Select external trigger LPTnT15 (RESERVED).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,ExtselVal> extsel{}; 
        namespace ExtselValC{
            constexpr Register::FieldValue<decltype(extsel)::Type,ExtselVal::lptnt0> lptnt0{};
            constexpr Register::FieldValue<decltype(extsel)::Type,ExtselVal::lptnt1> lptnt1{};
            constexpr Register::FieldValue<decltype(extsel)::Type,ExtselVal::lptnt2> lptnt2{};
            constexpr Register::FieldValue<decltype(extsel)::Type,ExtselVal::lptnt3> lptnt3{};
            constexpr Register::FieldValue<decltype(extsel)::Type,ExtselVal::lptnt4> lptnt4{};
            constexpr Register::FieldValue<decltype(extsel)::Type,ExtselVal::lptnt5> lptnt5{};
            constexpr Register::FieldValue<decltype(extsel)::Type,ExtselVal::lptnt6> lptnt6{};
            constexpr Register::FieldValue<decltype(extsel)::Type,ExtselVal::lptnt7> lptnt7{};
            constexpr Register::FieldValue<decltype(extsel)::Type,ExtselVal::lptnt8> lptnt8{};
            constexpr Register::FieldValue<decltype(extsel)::Type,ExtselVal::lptnt9> lptnt9{};
            constexpr Register::FieldValue<decltype(extsel)::Type,ExtselVal::lptnt10> lptnt10{};
            constexpr Register::FieldValue<decltype(extsel)::Type,ExtselVal::lptnt11> lptnt11{};
            constexpr Register::FieldValue<decltype(extsel)::Type,ExtselVal::lptnt12> lptnt12{};
            constexpr Register::FieldValue<decltype(extsel)::Type,ExtselVal::lptnt13> lptnt13{};
            constexpr Register::FieldValue<decltype(extsel)::Type,ExtselVal::lptnt14> lptnt14{};
            constexpr Register::FieldValue<decltype(extsel)::Type,ExtselVal::lptnt15> lptnt15{};
        }
        ///Timer Set. 
        enum class TmrsetVal {
            set=0x00000001,     ///<Writing a 1 to TMRSET initiates a copy of the value from the DATA register into the internal timer register. This field is automatically cleared by hardware when the copy is complete and does not need to be cleared by software.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,TmrsetVal> tmrset{}; 
        namespace TmrsetValC{
            constexpr Register::FieldValue<decltype(tmrset)::Type,TmrsetVal::set> set{};
        }
        ///Timer Capture. 
        enum class TmrcapVal {
            set=0x00000001,     ///<Writing a 1 to TMRCAP initiates a read of internal timer register into the DATA register. This field is automatically cleared by hardware when the operation completes and does not need to be cleared by software.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,TmrcapVal> tmrcap{}; 
        namespace TmrcapValC{
            constexpr Register::FieldValue<decltype(tmrcap)::Type,TmrcapVal::set> set{};
        }
        ///Timer Comparator Set. 
        enum class CmpsetVal {
            set=0x00000001,     ///<Writing a 1 to CMPSET initiates a copy of the value in DATA into the internal timer comparator register. This field is automatically cleared by hardware when the copy is complete and does not need to be cleared by software.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,CmpsetVal> cmpset{}; 
        namespace CmpsetValC{
            constexpr Register::FieldValue<decltype(cmpset)::Type,CmpsetVal::set> set{};
        }
        ///Timer Comparator Capture. 
        enum class CmpcapVal {
            set=0x00000001,     ///<Writing a 1 to CMPCAP initiates a read of the internal comparator register into the DATA register. This field is automatically cleared by hardware when the operation completes and does not need to be cleared by software.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,CmpcapVal> cmpcap{}; 
        namespace CmpcapValC{
            constexpr Register::FieldValue<decltype(cmpcap)::Type,CmpcapVal::set> set{};
        }
        ///Timer Overflow Interrupt Enable. 
        enum class OvfienVal {
            disabled=0x00000000,     ///<Disable the timer overflow interrupt.
            enabled=0x00000001,     ///<Enable the timer overflow interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,OvfienVal> ovfien{}; 
        namespace OvfienValC{
            constexpr Register::FieldValue<decltype(ovfien)::Type,OvfienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovfien)::Type,OvfienVal::enabled> enabled{};
        }
        ///Timer Compare Event Interrupt Enable. 
        enum class CmpienVal {
            disabled=0x00000000,     ///<Disable the timer compare event interrupt.
            enabled=0x00000001,     ///<Enable the timer compare event interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,CmpienVal> cmpien{}; 
        namespace CmpienValC{
            constexpr Register::FieldValue<decltype(cmpien)::Type,CmpienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmpien)::Type,CmpienVal::enabled> enabled{};
        }
        ///Timer Overflow Toggle Mode. 
        enum class OvftmdVal {
            disabled=0x00000000,     ///<Timer overflows do not toggle the Low Power Timer output.
            enabled=0x00000001,     ///<Timer overflows toggle the Low Power Timer output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,OvftmdVal> ovftmd{}; 
        namespace OvftmdValC{
            constexpr Register::FieldValue<decltype(ovftmd)::Type,OvftmdVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovftmd)::Type,OvftmdVal::enabled> enabled{};
        }
        ///Timer Compare Event Toggle Mode . 
        enum class CmptmdVal {
            disabled=0x00000000,     ///<Timer compare events do not toggle the Low Power Timer output.
            enabled=0x00000001,     ///<Timer compare events toggle the Low Power Timer output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,CmptmdVal> cmptmd{}; 
        namespace CmptmdValC{
            constexpr Register::FieldValue<decltype(cmptmd)::Type,CmptmdVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmptmd)::Type,CmptmdVal::enabled> enabled{};
        }
        ///Timer Compare Event Reset Enable. 
        enum class CmprstenVal {
            disabled=0x00000000,     ///<Timer compare events do not reset the timer.
            enabled=0x00000001,     ///<Timer compare events reset the timer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,CmprstenVal> cmprsten{}; 
        namespace CmprstenValC{
            constexpr Register::FieldValue<decltype(cmprsten)::Type,CmprstenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmprsten)::Type,CmprstenVal::enabled> enabled{};
        }
        ///Low Power Timer Debug Mode. 
        enum class DbgmdVal {
            run=0x00000000,     ///<The Low Power Timer module will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will cause the Low Power Timer module to halt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DbgmdVal> dbgmd{}; 
        namespace DbgmdValC{
            constexpr Register::FieldValue<decltype(dbgmd)::Type,DbgmdVal::run> run{};
            constexpr Register::FieldValue<decltype(dbgmd)::Type,DbgmdVal::halt> halt{};
        }
        ///Timer Run Control and Compare Threshold Enable. 
        enum class RunVal {
            stop=0x00000000,     ///<Stop the timer and disable the compare threshold.
            start=0x00000001,     ///<Start the timer running and enable the compare threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::stop> stop{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::start> start{};
        }
    }
    namespace Lptimer0Data{    ///<Timer and Comparator Data
        using Addr = Register::Address<0x40038010,0xffff0000,0x00000000,unsigned>;
        ///Timer and Comparator Data. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Lptimer0Status{    ///<Module Status
        using Addr = Register::Address<0x40038020,0xfffffffc,0x00000000,unsigned>;
        ///Timer Overflow Interrupt Flag. 
        enum class OvfiVal {
            notSet=0x00000000,     ///<A timer overflow has not occurred.
            set=0x00000001,     ///<A timer overflow occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OvfiVal> ovfi{}; 
        namespace OvfiValC{
            constexpr Register::FieldValue<decltype(ovfi)::Type,OvfiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ovfi)::Type,OvfiVal::set> set{};
        }
        ///Timer Compare Event Interrupt Flag. 
        enum class CmpiVal {
            notSet=0x00000000,     ///<A timer compare event has not occurred.
            set=0x00000001,     ///<A timer compare event occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CmpiVal> cmpi{}; 
        namespace CmpiValC{
            constexpr Register::FieldValue<decltype(cmpi)::Type,CmpiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cmpi)::Type,CmpiVal::set> set{};
        }
    }
}
