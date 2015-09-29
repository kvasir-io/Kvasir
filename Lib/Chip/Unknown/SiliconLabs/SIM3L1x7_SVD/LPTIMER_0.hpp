#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40038000,0x1c80c00c,0,unsigned>;
        ///Count Mode. 
        enum class cmdVal {
            free=0x00000000,     ///<The timer is free running mode on the RTC timer clock (RTC0TCLK).
            risingEdge=0x00000001,     ///<The timer is incremented on the rising edges of the selected external trigger (LPTnTx).
            fallingEdge=0x00000002,     ///<The timer is incremented on the falling edges of the selected external trigger (LPTnTx).
            anyEdge=0x00000003,     ///<The timer is incremented on both edges of the selected external trigger (LPTnTx).
        };
        namespace cmdValC{
            constexpr MPL::Value<cmdVal,cmdVal::free> free{};
            constexpr MPL::Value<cmdVal,cmdVal::risingEdge> risingEdge{};
            constexpr MPL::Value<cmdVal,cmdVal::fallingEdge> fallingEdge{};
            constexpr MPL::Value<cmdVal,cmdVal::anyEdge> anyEdge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,cmdVal> cmd{}; 
        ///External Trigger Source Select. 
        enum class extselVal {
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
        namespace extselValC{
            constexpr MPL::Value<extselVal,extselVal::lptnt0> lptnt0{};
            constexpr MPL::Value<extselVal,extselVal::lptnt1> lptnt1{};
            constexpr MPL::Value<extselVal,extselVal::lptnt2> lptnt2{};
            constexpr MPL::Value<extselVal,extselVal::lptnt3> lptnt3{};
            constexpr MPL::Value<extselVal,extselVal::lptnt4> lptnt4{};
            constexpr MPL::Value<extselVal,extselVal::lptnt5> lptnt5{};
            constexpr MPL::Value<extselVal,extselVal::lptnt6> lptnt6{};
            constexpr MPL::Value<extselVal,extselVal::lptnt7> lptnt7{};
            constexpr MPL::Value<extselVal,extselVal::lptnt8> lptnt8{};
            constexpr MPL::Value<extselVal,extselVal::lptnt9> lptnt9{};
            constexpr MPL::Value<extselVal,extselVal::lptnt10> lptnt10{};
            constexpr MPL::Value<extselVal,extselVal::lptnt11> lptnt11{};
            constexpr MPL::Value<extselVal,extselVal::lptnt12> lptnt12{};
            constexpr MPL::Value<extselVal,extselVal::lptnt13> lptnt13{};
            constexpr MPL::Value<extselVal,extselVal::lptnt14> lptnt14{};
            constexpr MPL::Value<extselVal,extselVal::lptnt15> lptnt15{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,extselVal> extsel{}; 
        ///Timer Set. 
        enum class tmrsetVal {
            set=0x00000001,     ///<Writing a 1 to TMRSET initiates a copy of the value from the COUNT register into the internal timer register. This field is automatically cleared by hardware when the copy is complete and does not need to be cleared by software.
        };
        namespace tmrsetValC{
            constexpr MPL::Value<tmrsetVal,tmrsetVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tmrsetVal> tmrset{}; 
        ///Timer Capture. 
        enum class tmrcapVal {
            set=0x00000001,     ///<Writing a 1 to TMRCAP initiates a read of internal timer register into the COUNT register. This field is automatically cleared by hardware when the operation completes and does not need to be cleared by software.
        };
        namespace tmrcapValC{
            constexpr MPL::Value<tmrcapVal,tmrcapVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,tmrcapVal> tmrcap{}; 
        ///High Speed Timer Access Mode Enable. 
        enum class hsmdenVal {
            disabled=0x00000000,     ///<Disable high speed timer access mode.
            enabled=0x00000001,     ///<Enable high speed timer access mode.
        };
        namespace hsmdenValC{
            constexpr MPL::Value<hsmdenVal,hsmdenVal::disabled> disabled{};
            constexpr MPL::Value<hsmdenVal,hsmdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,hsmdenVal> hsmden{}; 
        ///Timer Compare 0 Threshold Enable. 
        enum class cmp0enVal {
            disabled=0x00000000,     ///<None
            enabled=0x00000001,     ///<None
        };
        namespace cmp0enValC{
            constexpr MPL::Value<cmp0enVal,cmp0enVal::disabled> disabled{};
            constexpr MPL::Value<cmp0enVal,cmp0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,cmp0enVal> cmp0en{}; 
        ///Timer Compare 1 Threshold Enable. 
        enum class cmp1enVal {
            disabled=0x00000000,     ///<None
            enabled=0x00000001,     ///<None
        };
        namespace cmp1enValC{
            constexpr MPL::Value<cmp1enVal,cmp1enVal::disabled> disabled{};
            constexpr MPL::Value<cmp1enVal,cmp1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,cmp1enVal> cmp1en{}; 
        ///Output Enable. 
        enum class outenVal {
            disabled=0x00000000,     ///<Disable the LPTIMER0 output.
            enabled=0x00000001,     ///<Enable the LPTIMER0 output.
        };
        namespace outenValC{
            constexpr MPL::Value<outenVal,outenVal::disabled> disabled{};
            constexpr MPL::Value<outenVal,outenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,outenVal> outen{}; 
        ///Timer Overflow Interrupt Enable. 
        enum class ovfienVal {
            disabled=0x00000000,     ///<Disable the timer overflow interrupt.
            enabled=0x00000001,     ///<Enable the timer overflow interrupt.
        };
        namespace ovfienValC{
            constexpr MPL::Value<ovfienVal,ovfienVal::disabled> disabled{};
            constexpr MPL::Value<ovfienVal,ovfienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ovfienVal> ovfien{}; 
        ///Timer Compare 0 Event Interrupt Enable. 
        enum class cmp0ienVal {
            disabled=0x00000000,     ///<Disable the timer compare 0 event interrupt.
            enabled=0x00000001,     ///<Enable the timer compare 0 event interrupt.
        };
        namespace cmp0ienValC{
            constexpr MPL::Value<cmp0ienVal,cmp0ienVal::disabled> disabled{};
            constexpr MPL::Value<cmp0ienVal,cmp0ienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,cmp0ienVal> cmp0ien{}; 
        ///Timer Overflow Output Enable. 
        enum class ovfoenVal {
            disabled=0x00000000,     ///<Timer overflows do not modify the Low Power Timer output.
            enabled=0x00000001,     ///<Timer overflows set the Low Power Timer output to 1.
        };
        namespace ovfoenValC{
            constexpr MPL::Value<ovfoenVal,ovfoenVal::disabled> disabled{};
            constexpr MPL::Value<ovfoenVal,ovfoenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ovfoenVal> ovfoen{}; 
        ///Timer Compare 0 Event Output Enable. 
        enum class cmp0oenVal {
            disabled=0x00000000,     ///<Timer compare 0 events do not modify the Low Power Timer output.
            enabled=0x00000001,     ///<Timer compare 0 events clear the Low Power Timer output to 0.
        };
        namespace cmp0oenValC{
            constexpr MPL::Value<cmp0oenVal,cmp0oenVal::disabled> disabled{};
            constexpr MPL::Value<cmp0oenVal,cmp0oenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,cmp0oenVal> cmp0oen{}; 
        ///Timer Compare 1 Event Interrupt Enable. 
        enum class cmp1ienVal {
            disabled=0x00000000,     ///<Disable the timer compare 1 event interrupt.
            enabled=0x00000001,     ///<Enable the timer compare 1 event interrupt.
        };
        namespace cmp1ienValC{
            constexpr MPL::Value<cmp1ienVal,cmp1ienVal::disabled> disabled{};
            constexpr MPL::Value<cmp1ienVal,cmp1ienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,cmp1ienVal> cmp1ien{}; 
        ///Timer Compare 1 Event Output Enable. 
        enum class cmp1oenVal {
            disabled=0x00000000,     ///<Timer compare 1 events do not modify the Low Power Timer output.
            enabled=0x00000001,     ///<Timer compare 1 events set the Low Power Timer output to 1.
        };
        namespace cmp1oenValC{
            constexpr MPL::Value<cmp1oenVal,cmp1oenVal::disabled> disabled{};
            constexpr MPL::Value<cmp1oenVal,cmp1oenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,cmp1oenVal> cmp1oen{}; 
        ///Output Inversion Enable. 
        enum class outinvenVal {
            disabled=0x00000000,     ///<Do not invert the LPTIMER0 output.
            enabled=0x00000001,     ///<Invert the LPTIMER0 output.
        };
        namespace outinvenValC{
            constexpr MPL::Value<outinvenVal,outinvenVal::disabled> disabled{};
            constexpr MPL::Value<outinvenVal,outinvenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,outinvenVal> outinven{}; 
        ///Timer Compare 0 Event Reset Enable. 
        enum class cmp0rstenVal {
            disabled=0x00000000,     ///<Timer compare 0 events do not reset the timer.
            enabled=0x00000001,     ///<Timer compare 0 events reset the timer.
        };
        namespace cmp0rstenValC{
            constexpr MPL::Value<cmp0rstenVal,cmp0rstenVal::disabled> disabled{};
            constexpr MPL::Value<cmp0rstenVal,cmp0rstenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,cmp0rstenVal> cmp0rsten{}; 
        ///Timer Compare 1 Event Reset Enable. 
        enum class cmp1rstenVal {
            disabled=0x00000000,     ///<Timer compare 1 events do not reset the timer.
            enabled=0x00000001,     ///<Timer compare 1 events reset the timer.
        };
        namespace cmp1rstenValC{
            constexpr MPL::Value<cmp1rstenVal,cmp1rstenVal::disabled> disabled{};
            constexpr MPL::Value<cmp1rstenVal,cmp1rstenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,cmp1rstenVal> cmp1rsten{}; 
        ///Low Power Timer Module Clock Enable. 
        enum class mclkenVal {
            disabled=0x00000000,     ///<Disable the clock to the Low Power Timer module.
            enabled=0x00000001,     ///<Enable the clock to the Low Power Timer module.
        };
        namespace mclkenValC{
            constexpr MPL::Value<mclkenVal,mclkenVal::disabled> disabled{};
            constexpr MPL::Value<mclkenVal,mclkenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,mclkenVal> mclken{}; 
        ///Low Power Timer Debug Mode. 
        enum class dbgmdVal {
            run=0x00000000,     ///<The Low Power Timer module will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will cause the Low Power Timer module to halt.
        };
        namespace dbgmdValC{
            constexpr MPL::Value<dbgmdVal,dbgmdVal::run> run{};
            constexpr MPL::Value<dbgmdVal,dbgmdVal::halt> halt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dbgmdVal> dbgmd{}; 
        ///Timer Run Control and Compare Threshold Enable. 
        enum class runVal {
            stop=0x00000000,     ///<Stop the timer and disable the compare threshold.
            start=0x00000001,     ///<Start the timer running and enable the compare threshold.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::stop> stop{};
            constexpr MPL::Value<runVal,runVal::start> start{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,runVal> run{}; 
    }
    namespace Nonecount{    ///<Timer Value
        using Addr = Register::Address<0x40038010,0xffff0000,0,unsigned>;
        ///Timer Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timer{}; 
    }
    namespace Nonethreshold{    ///<Threshold Values
        using Addr = Register::Address<0x40038020,0x00000000,0,unsigned>;
        ///Timer Compare 0 Threshold Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> compare0{}; 
        ///Timer Compare 1 Threshold Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> compare1{}; 
    }
    namespace Nonestatus{    ///<Module Status
        using Addr = Register::Address<0x40038030,0xfffffff8,0,unsigned>;
        ///Timer Overflow Interrupt Flag. 
        enum class ovfiVal {
            notSet=0x00000000,     ///<A timer overflow has not occurred.
            set=0x00000001,     ///<A timer overflow occurred.
        };
        namespace ovfiValC{
            constexpr MPL::Value<ovfiVal,ovfiVal::notSet> notSet{};
            constexpr MPL::Value<ovfiVal,ovfiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ovfiVal> ovfi{}; 
        ///Timer Compare 0 Event Interrupt Flag. 
        enum class cmp0iVal {
            notSet=0x00000000,     ///<A timer compare 0 event has not occurred.
            set=0x00000001,     ///<A timer compare 0 event occurred.
        };
        namespace cmp0iValC{
            constexpr MPL::Value<cmp0iVal,cmp0iVal::notSet> notSet{};
            constexpr MPL::Value<cmp0iVal,cmp0iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,cmp0iVal> cmp0i{}; 
        ///Timer Compare 1 Event Interrupt Flag. 
        enum class cmp1iVal {
            notSet=0x00000000,     ///<A timer compare 1 event has not occurred.
            set=0x00000001,     ///<A timer compare 1 event occurred.
        };
        namespace cmp1iValC{
            constexpr MPL::Value<cmp1iVal,cmp1iVal::notSet> notSet{};
            constexpr MPL::Value<cmp1iVal,cmp1iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cmp1iVal> cmp1i{}; 
    }
}
