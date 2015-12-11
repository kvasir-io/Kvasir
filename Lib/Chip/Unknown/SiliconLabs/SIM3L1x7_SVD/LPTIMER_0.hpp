#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40038000,0x1c80c00c,0,unsigned>;
        ///Count Mode. 
        enum class CmdVal {
            free=0x00000000,     ///<The timer is free running mode on the RTC timer clock (RTC0TCLK).
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
            lptnt0=0x00000000,     ///<Select external trigger LPTnT0.
            lptnt1=0x00000001,     ///<Select external trigger LPTnT1.
            lptnt2=0x00000002,     ///<Select external trigger LPTnT2.
            lptnt3=0x00000003,     ///<Select external trigger LPTnT3.
            lptnt4=0x00000004,     ///<Select external trigger LPTnT4.
            lptnt5=0x00000005,     ///<Select external trigger LPTnT5.
            lptnt6=0x00000006,     ///<Select external trigger LPTnT6.
            lptnt7=0x00000007,     ///<Select external trigger LPTnT7.
            lptnt8=0x00000008,     ///<Select external trigger LPTnT8.
            lptnt9=0x00000009,     ///<Select external trigger LPTnT9.
            lptnt10=0x0000000a,     ///<Select external trigger LPTnT10.
            lptnt11=0x0000000b,     ///<Select external trigger LPTnT11.
            lptnt12=0x0000000c,     ///<Select external trigger LPTnT12.
            lptnt13=0x0000000d,     ///<Select external trigger LPTnT13.
            lptnt14=0x0000000e,     ///<Select external trigger LPTnT14.
            lptnt15=0x0000000f,     ///<Select external trigger LPTnT15.
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
            set=0x00000001,     ///<Writing a 1 to TMRSET initiates a copy of the value from the COUNT register into the internal timer register. This field is automatically cleared by hardware when the copy is complete and does not need to be cleared by software.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,TmrsetVal> tmrset{}; 
        namespace TmrsetValC{
            constexpr Register::FieldValue<decltype(tmrset)::Type,TmrsetVal::set> set{};
        }
        ///Timer Capture. 
        enum class TmrcapVal {
            set=0x00000001,     ///<Writing a 1 to TMRCAP initiates a read of internal timer register into the COUNT register. This field is automatically cleared by hardware when the operation completes and does not need to be cleared by software.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,TmrcapVal> tmrcap{}; 
        namespace TmrcapValC{
            constexpr Register::FieldValue<decltype(tmrcap)::Type,TmrcapVal::set> set{};
        }
        ///High Speed Timer Access Mode Enable. 
        enum class HsmdenVal {
            disabled=0x00000000,     ///<Disable high speed timer access mode.
            enabled=0x00000001,     ///<Enable high speed timer access mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,HsmdenVal> hsmden{}; 
        namespace HsmdenValC{
            constexpr Register::FieldValue<decltype(hsmden)::Type,HsmdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hsmden)::Type,HsmdenVal::enabled> enabled{};
        }
        ///Timer Compare 0 Threshold Enable. 
        enum class Cmp0enVal {
            disabled=0x00000000,     ///<None
            enabled=0x00000001,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Cmp0enVal> cmp0en{}; 
        namespace Cmp0enValC{
            constexpr Register::FieldValue<decltype(cmp0en)::Type,Cmp0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0en)::Type,Cmp0enVal::enabled> enabled{};
        }
        ///Timer Compare 1 Threshold Enable. 
        enum class Cmp1enVal {
            disabled=0x00000000,     ///<None
            enabled=0x00000001,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Cmp1enVal> cmp1en{}; 
        namespace Cmp1enValC{
            constexpr Register::FieldValue<decltype(cmp1en)::Type,Cmp1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp1en)::Type,Cmp1enVal::enabled> enabled{};
        }
        ///Output Enable. 
        enum class OutenVal {
            disabled=0x00000000,     ///<Disable the LPTIMER0 output.
            enabled=0x00000001,     ///<Enable the LPTIMER0 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,OutenVal> outen{}; 
        namespace OutenValC{
            constexpr Register::FieldValue<decltype(outen)::Type,OutenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(outen)::Type,OutenVal::enabled> enabled{};
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
        ///Timer Compare 0 Event Interrupt Enable. 
        enum class Cmp0ienVal {
            disabled=0x00000000,     ///<Disable the timer compare 0 event interrupt.
            enabled=0x00000001,     ///<Enable the timer compare 0 event interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Cmp0ienVal> cmp0ien{}; 
        namespace Cmp0ienValC{
            constexpr Register::FieldValue<decltype(cmp0ien)::Type,Cmp0ienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0ien)::Type,Cmp0ienVal::enabled> enabled{};
        }
        ///Timer Overflow Output Enable. 
        enum class OvfoenVal {
            disabled=0x00000000,     ///<Timer overflows do not modify the Low Power Timer output.
            enabled=0x00000001,     ///<Timer overflows set the Low Power Timer output to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,OvfoenVal> ovfoen{}; 
        namespace OvfoenValC{
            constexpr Register::FieldValue<decltype(ovfoen)::Type,OvfoenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovfoen)::Type,OvfoenVal::enabled> enabled{};
        }
        ///Timer Compare 0 Event Output Enable. 
        enum class Cmp0oenVal {
            disabled=0x00000000,     ///<Timer compare 0 events do not modify the Low Power Timer output.
            enabled=0x00000001,     ///<Timer compare 0 events clear the Low Power Timer output to 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Cmp0oenVal> cmp0oen{}; 
        namespace Cmp0oenValC{
            constexpr Register::FieldValue<decltype(cmp0oen)::Type,Cmp0oenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0oen)::Type,Cmp0oenVal::enabled> enabled{};
        }
        ///Timer Compare 1 Event Interrupt Enable. 
        enum class Cmp1ienVal {
            disabled=0x00000000,     ///<Disable the timer compare 1 event interrupt.
            enabled=0x00000001,     ///<Enable the timer compare 1 event interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Cmp1ienVal> cmp1ien{}; 
        namespace Cmp1ienValC{
            constexpr Register::FieldValue<decltype(cmp1ien)::Type,Cmp1ienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp1ien)::Type,Cmp1ienVal::enabled> enabled{};
        }
        ///Timer Compare 1 Event Output Enable. 
        enum class Cmp1oenVal {
            disabled=0x00000000,     ///<Timer compare 1 events do not modify the Low Power Timer output.
            enabled=0x00000001,     ///<Timer compare 1 events set the Low Power Timer output to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Cmp1oenVal> cmp1oen{}; 
        namespace Cmp1oenValC{
            constexpr Register::FieldValue<decltype(cmp1oen)::Type,Cmp1oenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp1oen)::Type,Cmp1oenVal::enabled> enabled{};
        }
        ///Output Inversion Enable. 
        enum class OutinvenVal {
            disabled=0x00000000,     ///<Do not invert the LPTIMER0 output.
            enabled=0x00000001,     ///<Invert the LPTIMER0 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,OutinvenVal> outinven{}; 
        namespace OutinvenValC{
            constexpr Register::FieldValue<decltype(outinven)::Type,OutinvenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(outinven)::Type,OutinvenVal::enabled> enabled{};
        }
        ///Timer Compare 0 Event Reset Enable. 
        enum class Cmp0rstenVal {
            disabled=0x00000000,     ///<Timer compare 0 events do not reset the timer.
            enabled=0x00000001,     ///<Timer compare 0 events reset the timer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Cmp0rstenVal> cmp0rsten{}; 
        namespace Cmp0rstenValC{
            constexpr Register::FieldValue<decltype(cmp0rsten)::Type,Cmp0rstenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0rsten)::Type,Cmp0rstenVal::enabled> enabled{};
        }
        ///Timer Compare 1 Event Reset Enable. 
        enum class Cmp1rstenVal {
            disabled=0x00000000,     ///<Timer compare 1 events do not reset the timer.
            enabled=0x00000001,     ///<Timer compare 1 events reset the timer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Cmp1rstenVal> cmp1rsten{}; 
        namespace Cmp1rstenValC{
            constexpr Register::FieldValue<decltype(cmp1rsten)::Type,Cmp1rstenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp1rsten)::Type,Cmp1rstenVal::enabled> enabled{};
        }
        ///Low Power Timer Module Clock Enable. 
        enum class MclkenVal {
            disabled=0x00000000,     ///<Disable the clock to the Low Power Timer module.
            enabled=0x00000001,     ///<Enable the clock to the Low Power Timer module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,MclkenVal> mclken{}; 
        namespace MclkenValC{
            constexpr Register::FieldValue<decltype(mclken)::Type,MclkenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mclken)::Type,MclkenVal::enabled> enabled{};
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
    namespace Nonecount{    ///<Timer Value
        using Addr = Register::Address<0x40038010,0xffff0000,0,unsigned>;
        ///Timer Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timer{}; 
    }
    namespace Nonethreshold{    ///<Threshold Values
        using Addr = Register::Address<0x40038020,0x00000000,0,unsigned>;
        ///Timer Compare 0 Threshold Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> compare0{}; 
        ///Timer Compare 1 Threshold Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> compare1{}; 
    }
    namespace Nonestatus{    ///<Module Status
        using Addr = Register::Address<0x40038030,0xfffffff8,0,unsigned>;
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
        ///Timer Compare 0 Event Interrupt Flag. 
        enum class Cmp0iVal {
            notSet=0x00000000,     ///<A timer compare 0 event has not occurred.
            set=0x00000001,     ///<A timer compare 0 event occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Cmp0iVal> cmp0i{}; 
        namespace Cmp0iValC{
            constexpr Register::FieldValue<decltype(cmp0i)::Type,Cmp0iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cmp0i)::Type,Cmp0iVal::set> set{};
        }
        ///Timer Compare 1 Event Interrupt Flag. 
        enum class Cmp1iVal {
            notSet=0x00000000,     ///<A timer compare 1 event has not occurred.
            set=0x00000001,     ///<A timer compare 1 event occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Cmp1iVal> cmp1i{}; 
        namespace Cmp1iValC{
            constexpr Register::FieldValue<decltype(cmp1i)::Type,Cmp1iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cmp1i)::Type,Cmp1iVal::set> set{};
        }
    }
}
