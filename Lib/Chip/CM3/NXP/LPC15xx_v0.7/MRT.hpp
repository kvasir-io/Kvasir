#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Multi-Rate Timer (MRT) 
    namespace Noneintval0{    ///<MRT0 Time interval value register. This value is loaded into the TIMER0 register.
        using Addr = Register::Address<0x400a0000,0x7f000000,0,unsigned>;
        ///Time interval load value. This value is loaded into the TIMERn register and the MRTn starts counting down from IVALUE -1. If the timer is idle, writing a non-zero value to this bit field starts the timer immediately.  If the timer is running, writing a zero to this bit field does the following: If LOAD = 1, the timer stops immediately. If LOAD = 0, the timer stops at the end of the time interval.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ivalue{}; 
        namespace IvalueValC{
        }
        ///Determines how the timer interval value IVALUE -1 is loaded into the TIMERn register. This bit is write-only. Reading this bit always returns 0.
        enum class LoadVal {
            noForceLoad=0x00000000,     ///<No force load. The load from the INTVALn register to the TIMERn register is processed at the end of the time interval if the repeat mode is selected.
            forceLoad=0x00000001,     ///<Force load. The INTVALn interval value IVALUE -1 is immediately loaded into the TIMERn register while TIMERn is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,LoadVal> load{}; 
        namespace LoadValC{
            constexpr Register::FieldValue<decltype(load),LoadVal::noForceLoad> noForceLoad{};
            constexpr Register::FieldValue<decltype(load),LoadVal::forceLoad> forceLoad{};
        }
    }
    namespace Noneintval1{    ///<MRT0 Time interval value register. This value is loaded into the TIMER0 register.
        using Addr = Register::Address<0x400a0010,0x7f000000,0,unsigned>;
        ///Time interval load value. This value is loaded into the TIMERn register and the MRTn starts counting down from IVALUE -1. If the timer is idle, writing a non-zero value to this bit field starts the timer immediately.  If the timer is running, writing a zero to this bit field does the following: If LOAD = 1, the timer stops immediately. If LOAD = 0, the timer stops at the end of the time interval.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ivalue{}; 
        namespace IvalueValC{
        }
        ///Determines how the timer interval value IVALUE -1 is loaded into the TIMERn register. This bit is write-only. Reading this bit always returns 0.
        enum class LoadVal {
            noForceLoad=0x00000000,     ///<No force load. The load from the INTVALn register to the TIMERn register is processed at the end of the time interval if the repeat mode is selected.
            forceLoad=0x00000001,     ///<Force load. The INTVALn interval value IVALUE -1 is immediately loaded into the TIMERn register while TIMERn is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,LoadVal> load{}; 
        namespace LoadValC{
            constexpr Register::FieldValue<decltype(load),LoadVal::noForceLoad> noForceLoad{};
            constexpr Register::FieldValue<decltype(load),LoadVal::forceLoad> forceLoad{};
        }
    }
    namespace Noneintval2{    ///<MRT0 Time interval value register. This value is loaded into the TIMER0 register.
        using Addr = Register::Address<0x400a0020,0x7f000000,0,unsigned>;
        ///Time interval load value. This value is loaded into the TIMERn register and the MRTn starts counting down from IVALUE -1. If the timer is idle, writing a non-zero value to this bit field starts the timer immediately.  If the timer is running, writing a zero to this bit field does the following: If LOAD = 1, the timer stops immediately. If LOAD = 0, the timer stops at the end of the time interval.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ivalue{}; 
        namespace IvalueValC{
        }
        ///Determines how the timer interval value IVALUE -1 is loaded into the TIMERn register. This bit is write-only. Reading this bit always returns 0.
        enum class LoadVal {
            noForceLoad=0x00000000,     ///<No force load. The load from the INTVALn register to the TIMERn register is processed at the end of the time interval if the repeat mode is selected.
            forceLoad=0x00000001,     ///<Force load. The INTVALn interval value IVALUE -1 is immediately loaded into the TIMERn register while TIMERn is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,LoadVal> load{}; 
        namespace LoadValC{
            constexpr Register::FieldValue<decltype(load),LoadVal::noForceLoad> noForceLoad{};
            constexpr Register::FieldValue<decltype(load),LoadVal::forceLoad> forceLoad{};
        }
    }
    namespace Noneintval3{    ///<MRT0 Time interval value register. This value is loaded into the TIMER0 register.
        using Addr = Register::Address<0x400a0030,0x7f000000,0,unsigned>;
        ///Time interval load value. This value is loaded into the TIMERn register and the MRTn starts counting down from IVALUE -1. If the timer is idle, writing a non-zero value to this bit field starts the timer immediately.  If the timer is running, writing a zero to this bit field does the following: If LOAD = 1, the timer stops immediately. If LOAD = 0, the timer stops at the end of the time interval.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ivalue{}; 
        namespace IvalueValC{
        }
        ///Determines how the timer interval value IVALUE -1 is loaded into the TIMERn register. This bit is write-only. Reading this bit always returns 0.
        enum class LoadVal {
            noForceLoad=0x00000000,     ///<No force load. The load from the INTVALn register to the TIMERn register is processed at the end of the time interval if the repeat mode is selected.
            forceLoad=0x00000001,     ///<Force load. The INTVALn interval value IVALUE -1 is immediately loaded into the TIMERn register while TIMERn is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,LoadVal> load{}; 
        namespace LoadValC{
            constexpr Register::FieldValue<decltype(load),LoadVal::noForceLoad> noForceLoad{};
            constexpr Register::FieldValue<decltype(load),LoadVal::forceLoad> forceLoad{};
        }
    }
    namespace Nonetimer0{    ///<MRT0 Timer register. This register reads the value of the down-counter.
        using Addr = Register::Address<0x400a0004,0xff000000,0,unsigned>;
        ///Holds the current timer value of the down-counter. The initial value of the TIMERn register is loaded as IVALUE - 1 from the INTVALn register either at the end of the time interval or immediately in the following cases: INTVALn register is updated in the idle state. INTVALn register is updated with LOAD = 1. When the timer is in idle state, reading this bit fields returns -1 (0x00FF FFFF).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> value{}; 
        namespace ValueValC{
        }
    }
    namespace Nonetimer1{    ///<MRT0 Timer register. This register reads the value of the down-counter.
        using Addr = Register::Address<0x400a0014,0xff000000,0,unsigned>;
        ///Holds the current timer value of the down-counter. The initial value of the TIMERn register is loaded as IVALUE - 1 from the INTVALn register either at the end of the time interval or immediately in the following cases: INTVALn register is updated in the idle state. INTVALn register is updated with LOAD = 1. When the timer is in idle state, reading this bit fields returns -1 (0x00FF FFFF).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> value{}; 
        namespace ValueValC{
        }
    }
    namespace Nonetimer2{    ///<MRT0 Timer register. This register reads the value of the down-counter.
        using Addr = Register::Address<0x400a0024,0xff000000,0,unsigned>;
        ///Holds the current timer value of the down-counter. The initial value of the TIMERn register is loaded as IVALUE - 1 from the INTVALn register either at the end of the time interval or immediately in the following cases: INTVALn register is updated in the idle state. INTVALn register is updated with LOAD = 1. When the timer is in idle state, reading this bit fields returns -1 (0x00FF FFFF).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> value{}; 
        namespace ValueValC{
        }
    }
    namespace Nonetimer3{    ///<MRT0 Timer register. This register reads the value of the down-counter.
        using Addr = Register::Address<0x400a0034,0xff000000,0,unsigned>;
        ///Holds the current timer value of the down-counter. The initial value of the TIMERn register is loaded as IVALUE - 1 from the INTVALn register either at the end of the time interval or immediately in the following cases: INTVALn register is updated in the idle state. INTVALn register is updated with LOAD = 1. When the timer is in idle state, reading this bit fields returns -1 (0x00FF FFFF).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> value{}; 
        namespace ValueValC{
        }
    }
    namespace Nonectrl0{    ///<MRT0 Control register. This register controls the MRT0 modes.
        using Addr = Register::Address<0x400a0008,0xfffffff8,0,unsigned>;
        ///Enable the TIMERn interrupt.
        enum class IntenVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntenVal> inten{}; 
        namespace IntenValC{
            constexpr Register::FieldValue<decltype(inten),IntenVal::disable> disable{};
            constexpr Register::FieldValue<decltype(inten),IntenVal::enable> enable{};
        }
        ///Selects timer mode.
        enum class ModeVal {
            repeatInterruptMod=0x00000000,     ///<Repeat interrupt mode.
            oneShotInterruptM=0x00000001,     ///<One-shot interrupt mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::repeatInterruptMod> repeatInterruptMod{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::oneShotInterruptM> oneShotInterruptM{};
        }
    }
    namespace Nonectrl1{    ///<MRT0 Control register. This register controls the MRT0 modes.
        using Addr = Register::Address<0x400a0018,0xfffffff8,0,unsigned>;
        ///Enable the TIMERn interrupt.
        enum class IntenVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntenVal> inten{}; 
        namespace IntenValC{
            constexpr Register::FieldValue<decltype(inten),IntenVal::disable> disable{};
            constexpr Register::FieldValue<decltype(inten),IntenVal::enable> enable{};
        }
        ///Selects timer mode.
        enum class ModeVal {
            repeatInterruptMod=0x00000000,     ///<Repeat interrupt mode.
            oneShotInterruptM=0x00000001,     ///<One-shot interrupt mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::repeatInterruptMod> repeatInterruptMod{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::oneShotInterruptM> oneShotInterruptM{};
        }
    }
    namespace Nonectrl2{    ///<MRT0 Control register. This register controls the MRT0 modes.
        using Addr = Register::Address<0x400a0028,0xfffffff8,0,unsigned>;
        ///Enable the TIMERn interrupt.
        enum class IntenVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntenVal> inten{}; 
        namespace IntenValC{
            constexpr Register::FieldValue<decltype(inten),IntenVal::disable> disable{};
            constexpr Register::FieldValue<decltype(inten),IntenVal::enable> enable{};
        }
        ///Selects timer mode.
        enum class ModeVal {
            repeatInterruptMod=0x00000000,     ///<Repeat interrupt mode.
            oneShotInterruptM=0x00000001,     ///<One-shot interrupt mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::repeatInterruptMod> repeatInterruptMod{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::oneShotInterruptM> oneShotInterruptM{};
        }
    }
    namespace Nonectrl3{    ///<MRT0 Control register. This register controls the MRT0 modes.
        using Addr = Register::Address<0x400a0038,0xfffffff8,0,unsigned>;
        ///Enable the TIMERn interrupt.
        enum class IntenVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntenVal> inten{}; 
        namespace IntenValC{
            constexpr Register::FieldValue<decltype(inten),IntenVal::disable> disable{};
            constexpr Register::FieldValue<decltype(inten),IntenVal::enable> enable{};
        }
        ///Selects timer mode.
        enum class ModeVal {
            repeatInterruptMod=0x00000000,     ///<Repeat interrupt mode.
            oneShotInterruptM=0x00000001,     ///<One-shot interrupt mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::repeatInterruptMod> repeatInterruptMod{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::oneShotInterruptM> oneShotInterruptM{};
        }
    }
    namespace Nonestat0{    ///<MRT0 Status register.
        using Addr = Register::Address<0x400a000c,0xfffffffc,0,unsigned>;
        ///Monitors the interrupt flag.
        enum class IntflagVal {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterrupt=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMERn has reached the end of the time interval. If the INTEN bit in the CONTROLn is also set to 1, the interrupt for timer channel n and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntflagVal> intflag{}; 
        namespace IntflagValC{
            constexpr Register::FieldValue<decltype(intflag),IntflagVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(intflag),IntflagVal::pendingInterrupt> pendingInterrupt{};
        }
        ///Indicates the state of TIMERn. This bit is read-only.
        enum class RunVal {
            idleState=0x00000000,     ///<Idle state. TIMERn is stopped.
            running=0x00000001,     ///<Running. TIMERn is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run),RunVal::idleState> idleState{};
            constexpr Register::FieldValue<decltype(run),RunVal::running> running{};
        }
    }
    namespace Nonestat1{    ///<MRT0 Status register.
        using Addr = Register::Address<0x400a001c,0xfffffffc,0,unsigned>;
        ///Monitors the interrupt flag.
        enum class IntflagVal {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterrupt=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMERn has reached the end of the time interval. If the INTEN bit in the CONTROLn is also set to 1, the interrupt for timer channel n and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntflagVal> intflag{}; 
        namespace IntflagValC{
            constexpr Register::FieldValue<decltype(intflag),IntflagVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(intflag),IntflagVal::pendingInterrupt> pendingInterrupt{};
        }
        ///Indicates the state of TIMERn. This bit is read-only.
        enum class RunVal {
            idleState=0x00000000,     ///<Idle state. TIMERn is stopped.
            running=0x00000001,     ///<Running. TIMERn is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run),RunVal::idleState> idleState{};
            constexpr Register::FieldValue<decltype(run),RunVal::running> running{};
        }
    }
    namespace Nonestat2{    ///<MRT0 Status register.
        using Addr = Register::Address<0x400a002c,0xfffffffc,0,unsigned>;
        ///Monitors the interrupt flag.
        enum class IntflagVal {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterrupt=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMERn has reached the end of the time interval. If the INTEN bit in the CONTROLn is also set to 1, the interrupt for timer channel n and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntflagVal> intflag{}; 
        namespace IntflagValC{
            constexpr Register::FieldValue<decltype(intflag),IntflagVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(intflag),IntflagVal::pendingInterrupt> pendingInterrupt{};
        }
        ///Indicates the state of TIMERn. This bit is read-only.
        enum class RunVal {
            idleState=0x00000000,     ///<Idle state. TIMERn is stopped.
            running=0x00000001,     ///<Running. TIMERn is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run),RunVal::idleState> idleState{};
            constexpr Register::FieldValue<decltype(run),RunVal::running> running{};
        }
    }
    namespace Nonestat3{    ///<MRT0 Status register.
        using Addr = Register::Address<0x400a003c,0xfffffffc,0,unsigned>;
        ///Monitors the interrupt flag.
        enum class IntflagVal {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterrupt=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMERn has reached the end of the time interval. If the INTEN bit in the CONTROLn is also set to 1, the interrupt for timer channel n and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntflagVal> intflag{}; 
        namespace IntflagValC{
            constexpr Register::FieldValue<decltype(intflag),IntflagVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(intflag),IntflagVal::pendingInterrupt> pendingInterrupt{};
        }
        ///Indicates the state of TIMERn. This bit is read-only.
        enum class RunVal {
            idleState=0x00000000,     ///<Idle state. TIMERn is stopped.
            running=0x00000001,     ///<Running. TIMERn is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run),RunVal::idleState> idleState{};
            constexpr Register::FieldValue<decltype(run),RunVal::running> running{};
        }
    }
    namespace NoneidleCh{    ///<Idle channel register. This register returns the number of the first idle channel.
        using Addr = Register::Address<0x400a00f4,0xffffff0f,0,unsigned>;
        ///Idle channel. Reading the CHAN bits, returns the lowest idle timer channel. If all timer channels are running, CHAN = 4.  To make sure that all outstanding interrupt requests have been serviced, a channel is considered idle only when both the corresponding RUN bit and the interrupt flag are zero in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> chan{}; 
        namespace ChanValC{
        }
    }
    namespace NoneirqFlag{    ///<Global interrupt flag register
        using Addr = Register::Address<0x400a00f8,0xfffffff0,0,unsigned>;
        ///Monitors the interrupt flag of TIMER0.
        enum class Gflag0Val {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterrupt=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMER0 has reached the end of the time interval. If the INTEN bit in the CONTROL0 register is also set to 1, the interrupt for timer channel 0 and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Gflag0Val> gflag0{}; 
        namespace Gflag0ValC{
            constexpr Register::FieldValue<decltype(gflag0),Gflag0Val::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(gflag0),Gflag0Val::pendingInterrupt> pendingInterrupt{};
        }
        ///Monitors the interrupt flag of TIMER1.
        enum class Gflag1Val {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterrupt=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMER1 has reached the end of the time interval. If the INTEN bit in the CONTROL1 register is also set to 1, the interrupt for timer channel 1 and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Gflag1Val> gflag1{}; 
        namespace Gflag1ValC{
            constexpr Register::FieldValue<decltype(gflag1),Gflag1Val::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(gflag1),Gflag1Val::pendingInterrupt> pendingInterrupt{};
        }
        ///Monitors the interrupt flag of TIMER2.
        enum class Gflag2Val {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterrupt=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMER2 has reached the end of the time interval. If the INTEN bit in the CONTROL2 register is also set to 1, the interrupt for timer channel 2 and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Gflag2Val> gflag2{}; 
        namespace Gflag2ValC{
            constexpr Register::FieldValue<decltype(gflag2),Gflag2Val::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(gflag2),Gflag2Val::pendingInterrupt> pendingInterrupt{};
        }
        ///Monitors the interrupt flag of TIMER3.
        enum class Gflag3Val {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterrupt=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMER3 has reached the end of the time interval. If the INTEN bit in the CONTROL3 register is also set to 1, the interrupt for timer channel 3 and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Gflag3Val> gflag3{}; 
        namespace Gflag3ValC{
            constexpr Register::FieldValue<decltype(gflag3),Gflag3Val::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(gflag3),Gflag3Val::pendingInterrupt> pendingInterrupt{};
        }
    }
}
