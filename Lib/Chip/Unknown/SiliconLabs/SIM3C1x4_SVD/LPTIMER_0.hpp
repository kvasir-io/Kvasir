#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40038000,0x3ef0f00c,0,unsigned>;
        ///Count Mode. 
        enum class cmdVal {
            free=0x00000000,     ///<The timer is free running mode on the RTCn module clock (RTCnOSC or LFOSCn).
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
            set=0x00000001,     ///<Writing a 1 to TMRSET initiates a copy of the value from the DATA register into the internal timer register. This field is automatically cleared by hardware when the copy is complete and does not need to be cleared by software.
        };
        namespace tmrsetValC{
            constexpr MPL::Value<tmrsetVal,tmrsetVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tmrsetVal> tmrset{}; 
        ///Timer Capture. 
        enum class tmrcapVal {
            set=0x00000001,     ///<Writing a 1 to TMRCAP initiates a read of internal timer register into the DATA register. This field is automatically cleared by hardware when the operation completes and does not need to be cleared by software.
        };
        namespace tmrcapValC{
            constexpr MPL::Value<tmrcapVal,tmrcapVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,tmrcapVal> tmrcap{}; 
        ///Timer Comparator Set. 
        enum class cmpsetVal {
            set=0x00000001,     ///<Writing a 1 to CMPSET initiates a copy of the value in DATA into the internal timer comparator register. This field is automatically cleared by hardware when the copy is complete and does not need to be cleared by software.
        };
        namespace cmpsetValC{
            constexpr MPL::Value<cmpsetVal,cmpsetVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,cmpsetVal> cmpset{}; 
        ///Timer Comparator Capture. 
        enum class cmpcapVal {
            set=0x00000001,     ///<Writing a 1 to CMPCAP initiates a read of the internal comparator register into the DATA register. This field is automatically cleared by hardware when the operation completes and does not need to be cleared by software.
        };
        namespace cmpcapValC{
            constexpr MPL::Value<cmpcapVal,cmpcapVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,cmpcapVal> cmpcap{}; 
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
        ///Timer Compare Event Interrupt Enable. 
        enum class cmpienVal {
            disabled=0x00000000,     ///<Disable the timer compare event interrupt.
            enabled=0x00000001,     ///<Enable the timer compare event interrupt.
        };
        namespace cmpienValC{
            constexpr MPL::Value<cmpienVal,cmpienVal::disabled> disabled{};
            constexpr MPL::Value<cmpienVal,cmpienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,cmpienVal> cmpien{}; 
        ///Timer Overflow Toggle Mode. 
        enum class ovftmdVal {
            disabled=0x00000000,     ///<Timer overflows do not toggle the Low Power Timer output.
            enabled=0x00000001,     ///<Timer overflows toggle the Low Power Timer output.
        };
        namespace ovftmdValC{
            constexpr MPL::Value<ovftmdVal,ovftmdVal::disabled> disabled{};
            constexpr MPL::Value<ovftmdVal,ovftmdVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ovftmdVal> ovftmd{}; 
        ///Timer Compare Event Toggle Mode . 
        enum class cmptmdVal {
            disabled=0x00000000,     ///<Timer compare events do not toggle the Low Power Timer output.
            enabled=0x00000001,     ///<Timer compare events toggle the Low Power Timer output.
        };
        namespace cmptmdValC{
            constexpr MPL::Value<cmptmdVal,cmptmdVal::disabled> disabled{};
            constexpr MPL::Value<cmptmdVal,cmptmdVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,cmptmdVal> cmptmd{}; 
        ///Timer Compare Event Reset Enable. 
        enum class cmprstenVal {
            disabled=0x00000000,     ///<Timer compare events do not reset the timer.
            enabled=0x00000001,     ///<Timer compare events reset the timer.
        };
        namespace cmprstenValC{
            constexpr MPL::Value<cmprstenVal,cmprstenVal::disabled> disabled{};
            constexpr MPL::Value<cmprstenVal,cmprstenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,cmprstenVal> cmprsten{}; 
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
    namespace Nonedata{    ///<Timer and Comparator Data
        using Addr = Register::Address<0x40038010,0xffff0000,0,unsigned>;
        ///Timer and Comparator Data. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonestatus{    ///<Module Status
        using Addr = Register::Address<0x40038020,0xfffffffc,0,unsigned>;
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
        ///Timer Compare Event Interrupt Flag. 
        enum class cmpiVal {
            notSet=0x00000000,     ///<A timer compare event has not occurred.
            set=0x00000001,     ///<A timer compare event occurred.
        };
        namespace cmpiValC{
            constexpr MPL::Value<cmpiVal,cmpiVal::notSet> notSet{};
            constexpr MPL::Value<cmpiVal,cmpiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,cmpiVal> cmpi{}; 
    }
}
