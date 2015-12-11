#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Multi-Rate Timer (MRT)
    namespace Noneintval0{    ///<MRT0 Time interval value register. This value is loaded into the TIMER0 register.
        using Addr = Register::Address<0x40004000,0x7f000000,0,unsigned>;
        ///Time interval load value. This value is loaded into the TIMERn register and the MRTn starts counting down from IVALUE -1. If the timer is idle, writing a non-zero value to this bit field starts the timer immediately.  If the timer is running, writing a zero to this bit field does the following: If LOAD = 1, the timer stops immediately. If LOAD = 0, the timer stops at the end of the time interval.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ivalue{}; 
        ///Determines how the timer interval value IVALUE is loaded into the TIMERn register. This bit is write-only. Reading this bit always returns 0.
        enum class LoadVal {
            noForceLoadTheL=0x00000000,     ///<No force load. The load from the INTVALn register to the TIMERn register is processed at the end of the time interval if the repeat mode is selected.
            forceLoadTheIntv=0x00000001,     ///<Force load. The INTVALn interval value IVALUE is immediately loaded into the TIMERn register while TIMERn is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,LoadVal> load{}; 
        namespace LoadValC{
            constexpr Register::FieldValue<decltype(load)::Type,LoadVal::noForceLoadTheL> noForceLoadTheL{};
            constexpr Register::FieldValue<decltype(load)::Type,LoadVal::forceLoadTheIntv> forceLoadTheIntv{};
        }
        }
    }
    namespace Noneintval1{    ///<MRT0 Time interval value register. This value is loaded into the TIMER0 register.
        using Addr = Register::Address<0x40004010,0x7f000000,0,unsigned>;
        ///Time interval load value. This value is loaded into the TIMERn register and the MRTn starts counting down from IVALUE -1. If the timer is idle, writing a non-zero value to this bit field starts the timer immediately.  If the timer is running, writing a zero to this bit field does the following: If LOAD = 1, the timer stops immediately. If LOAD = 0, the timer stops at the end of the time interval.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ivalue{}; 
        ///Determines how the timer interval value IVALUE is loaded into the TIMERn register. This bit is write-only. Reading this bit always returns 0.
        enum class LoadVal {
            noForceLoadTheL=0x00000000,     ///<No force load. The load from the INTVALn register to the TIMERn register is processed at the end of the time interval if the repeat mode is selected.
            forceLoadTheIntv=0x00000001,     ///<Force load. The INTVALn interval value IVALUE is immediately loaded into the TIMERn register while TIMERn is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,LoadVal> load{}; 
        namespace LoadValC{
            constexpr Register::FieldValue<decltype(load)::Type,LoadVal::noForceLoadTheL> noForceLoadTheL{};
            constexpr Register::FieldValue<decltype(load)::Type,LoadVal::forceLoadTheIntv> forceLoadTheIntv{};
        }
        }
    }
    namespace Noneintval2{    ///<MRT0 Time interval value register. This value is loaded into the TIMER0 register.
        using Addr = Register::Address<0x40004020,0x7f000000,0,unsigned>;
        ///Time interval load value. This value is loaded into the TIMERn register and the MRTn starts counting down from IVALUE -1. If the timer is idle, writing a non-zero value to this bit field starts the timer immediately.  If the timer is running, writing a zero to this bit field does the following: If LOAD = 1, the timer stops immediately. If LOAD = 0, the timer stops at the end of the time interval.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ivalue{}; 
        ///Determines how the timer interval value IVALUE is loaded into the TIMERn register. This bit is write-only. Reading this bit always returns 0.
        enum class LoadVal {
            noForceLoadTheL=0x00000000,     ///<No force load. The load from the INTVALn register to the TIMERn register is processed at the end of the time interval if the repeat mode is selected.
            forceLoadTheIntv=0x00000001,     ///<Force load. The INTVALn interval value IVALUE is immediately loaded into the TIMERn register while TIMERn is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,LoadVal> load{}; 
        namespace LoadValC{
            constexpr Register::FieldValue<decltype(load)::Type,LoadVal::noForceLoadTheL> noForceLoadTheL{};
            constexpr Register::FieldValue<decltype(load)::Type,LoadVal::forceLoadTheIntv> forceLoadTheIntv{};
        }
        }
    }
    namespace Noneintval3{    ///<MRT0 Time interval value register. This value is loaded into the TIMER0 register.
        using Addr = Register::Address<0x40004030,0x7f000000,0,unsigned>;
        ///Time interval load value. This value is loaded into the TIMERn register and the MRTn starts counting down from IVALUE -1. If the timer is idle, writing a non-zero value to this bit field starts the timer immediately.  If the timer is running, writing a zero to this bit field does the following: If LOAD = 1, the timer stops immediately. If LOAD = 0, the timer stops at the end of the time interval.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ivalue{}; 
        ///Determines how the timer interval value IVALUE is loaded into the TIMERn register. This bit is write-only. Reading this bit always returns 0.
        enum class LoadVal {
            noForceLoadTheL=0x00000000,     ///<No force load. The load from the INTVALn register to the TIMERn register is processed at the end of the time interval if the repeat mode is selected.
            forceLoadTheIntv=0x00000001,     ///<Force load. The INTVALn interval value IVALUE is immediately loaded into the TIMERn register while TIMERn is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,LoadVal> load{}; 
        namespace LoadValC{
            constexpr Register::FieldValue<decltype(load)::Type,LoadVal::noForceLoadTheL> noForceLoadTheL{};
            constexpr Register::FieldValue<decltype(load)::Type,LoadVal::forceLoadTheIntv> forceLoadTheIntv{};
        }
        }
    }
    namespace Nonetimer0{    ///<MRT0 Timer register. This register reads the value of the down-counter.
        using Addr = Register::Address<0x40004004,0xff000000,0,unsigned>;
        ///Holds the current timer value of the down-counter. The initial value is loaded as IVALUE - 1 from the TIME_INTVALn register either at the end of the time interval if the LOAD bit in TIME_INTVALn is 0 and the timer is in repeat mode or immediately if LOAD = 1. When the timer is in idle state, reading this bit fields returns -1 (0x7FFF FFFF).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
    namespace Nonetimer1{    ///<MRT0 Timer register. This register reads the value of the down-counter.
        using Addr = Register::Address<0x40004014,0xff000000,0,unsigned>;
        ///Holds the current timer value of the down-counter. The initial value is loaded as IVALUE - 1 from the TIME_INTVALn register either at the end of the time interval if the LOAD bit in TIME_INTVALn is 0 and the timer is in repeat mode or immediately if LOAD = 1. When the timer is in idle state, reading this bit fields returns -1 (0x7FFF FFFF).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
    namespace Nonetimer2{    ///<MRT0 Timer register. This register reads the value of the down-counter.
        using Addr = Register::Address<0x40004024,0xff000000,0,unsigned>;
        ///Holds the current timer value of the down-counter. The initial value is loaded as IVALUE - 1 from the TIME_INTVALn register either at the end of the time interval if the LOAD bit in TIME_INTVALn is 0 and the timer is in repeat mode or immediately if LOAD = 1. When the timer is in idle state, reading this bit fields returns -1 (0x7FFF FFFF).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
    namespace Nonetimer3{    ///<MRT0 Timer register. This register reads the value of the down-counter.
        using Addr = Register::Address<0x40004034,0xff000000,0,unsigned>;
        ///Holds the current timer value of the down-counter. The initial value is loaded as IVALUE - 1 from the TIME_INTVALn register either at the end of the time interval if the LOAD bit in TIME_INTVALn is 0 and the timer is in repeat mode or immediately if LOAD = 1. When the timer is in idle state, reading this bit fields returns -1 (0x7FFF FFFF).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
    namespace Nonectrl0{    ///<MRT0 Control register. This register controls the MRT0 modes.
        using Addr = Register::Address<0x40004008,0xfffffff8,0,unsigned>;
        ///Enable the TIMERn interrupt.
        enum class IntenVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntenVal> inten{}; 
        namespace IntenValC{
            constexpr Register::FieldValue<decltype(inten)::Type,IntenVal::disable> disable{};
            constexpr Register::FieldValue<decltype(inten)::Type,IntenVal::enable> enable{};
        }
        }
        ///Selects timer mode.
        enum class ModeVal {
            repeatInterruptMod=0x00000000,     ///<Repeat interrupt mode.
            oneShotInterruptM=0x00000001,     ///<One-shot interrupt mode.
            oneShotBusStallM=0x00000002,     ///<One-shot bus stall mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeatInterruptMod> repeatInterruptMod{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::oneShotInterruptM> oneShotInterruptM{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::oneShotBusStallM> oneShotBusStallM{};
        }
        }
    }
    namespace Nonectrl1{    ///<MRT0 Control register. This register controls the MRT0 modes.
        using Addr = Register::Address<0x40004018,0xfffffff8,0,unsigned>;
        ///Enable the TIMERn interrupt.
        enum class IntenVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntenVal> inten{}; 
        namespace IntenValC{
            constexpr Register::FieldValue<decltype(inten)::Type,IntenVal::disable> disable{};
            constexpr Register::FieldValue<decltype(inten)::Type,IntenVal::enable> enable{};
        }
        }
        ///Selects timer mode.
        enum class ModeVal {
            repeatInterruptMod=0x00000000,     ///<Repeat interrupt mode.
            oneShotInterruptM=0x00000001,     ///<One-shot interrupt mode.
            oneShotBusStallM=0x00000002,     ///<One-shot bus stall mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeatInterruptMod> repeatInterruptMod{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::oneShotInterruptM> oneShotInterruptM{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::oneShotBusStallM> oneShotBusStallM{};
        }
        }
    }
    namespace Nonectrl2{    ///<MRT0 Control register. This register controls the MRT0 modes.
        using Addr = Register::Address<0x40004028,0xfffffff8,0,unsigned>;
        ///Enable the TIMERn interrupt.
        enum class IntenVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntenVal> inten{}; 
        namespace IntenValC{
            constexpr Register::FieldValue<decltype(inten)::Type,IntenVal::disable> disable{};
            constexpr Register::FieldValue<decltype(inten)::Type,IntenVal::enable> enable{};
        }
        }
        ///Selects timer mode.
        enum class ModeVal {
            repeatInterruptMod=0x00000000,     ///<Repeat interrupt mode.
            oneShotInterruptM=0x00000001,     ///<One-shot interrupt mode.
            oneShotBusStallM=0x00000002,     ///<One-shot bus stall mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeatInterruptMod> repeatInterruptMod{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::oneShotInterruptM> oneShotInterruptM{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::oneShotBusStallM> oneShotBusStallM{};
        }
        }
    }
    namespace Nonectrl3{    ///<MRT0 Control register. This register controls the MRT0 modes.
        using Addr = Register::Address<0x40004038,0xfffffff8,0,unsigned>;
        ///Enable the TIMERn interrupt.
        enum class IntenVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntenVal> inten{}; 
        namespace IntenValC{
            constexpr Register::FieldValue<decltype(inten)::Type,IntenVal::disable> disable{};
            constexpr Register::FieldValue<decltype(inten)::Type,IntenVal::enable> enable{};
        }
        }
        ///Selects timer mode.
        enum class ModeVal {
            repeatInterruptMod=0x00000000,     ///<Repeat interrupt mode.
            oneShotInterruptM=0x00000001,     ///<One-shot interrupt mode.
            oneShotBusStallM=0x00000002,     ///<One-shot bus stall mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeatInterruptMod> repeatInterruptMod{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::oneShotInterruptM> oneShotInterruptM{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::oneShotBusStallM> oneShotBusStallM{};
        }
        }
    }
    namespace Nonestat0{    ///<MRT0 Status register.
        using Addr = Register::Address<0x4000400c,0xfffffffc,0,unsigned>;
        ///Monitors the interrupt flag.
        enum class IntflagVal {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterruptT=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMERn has reached the end of the time interval. If the INTEN bit in the CONTROLn is also set to 1, the interrupt for timer channel n and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntflagVal> intflag{}; 
        namespace IntflagValC{
            constexpr Register::FieldValue<decltype(intflag)::Type,IntflagVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(intflag)::Type,IntflagVal::pendingInterruptT> pendingInterruptT{};
        }
        }
        ///Indicates the state of TIMERn. This bit is read-only.
        enum class RunVal {
            idleStateTimernI=0x00000000,     ///<Idle state. TIMERn is stopped.
            runningTimernIsR=0x00000001,     ///<Running. TIMERn is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::idleStateTimernI> idleStateTimernI{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::runningTimernIsR> runningTimernIsR{};
        }
        }
    }
    namespace Nonestat1{    ///<MRT0 Status register.
        using Addr = Register::Address<0x4000401c,0xfffffffc,0,unsigned>;
        ///Monitors the interrupt flag.
        enum class IntflagVal {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterruptT=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMERn has reached the end of the time interval. If the INTEN bit in the CONTROLn is also set to 1, the interrupt for timer channel n and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntflagVal> intflag{}; 
        namespace IntflagValC{
            constexpr Register::FieldValue<decltype(intflag)::Type,IntflagVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(intflag)::Type,IntflagVal::pendingInterruptT> pendingInterruptT{};
        }
        }
        ///Indicates the state of TIMERn. This bit is read-only.
        enum class RunVal {
            idleStateTimernI=0x00000000,     ///<Idle state. TIMERn is stopped.
            runningTimernIsR=0x00000001,     ///<Running. TIMERn is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::idleStateTimernI> idleStateTimernI{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::runningTimernIsR> runningTimernIsR{};
        }
        }
    }
    namespace Nonestat2{    ///<MRT0 Status register.
        using Addr = Register::Address<0x4000402c,0xfffffffc,0,unsigned>;
        ///Monitors the interrupt flag.
        enum class IntflagVal {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterruptT=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMERn has reached the end of the time interval. If the INTEN bit in the CONTROLn is also set to 1, the interrupt for timer channel n and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntflagVal> intflag{}; 
        namespace IntflagValC{
            constexpr Register::FieldValue<decltype(intflag)::Type,IntflagVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(intflag)::Type,IntflagVal::pendingInterruptT> pendingInterruptT{};
        }
        }
        ///Indicates the state of TIMERn. This bit is read-only.
        enum class RunVal {
            idleStateTimernI=0x00000000,     ///<Idle state. TIMERn is stopped.
            runningTimernIsR=0x00000001,     ///<Running. TIMERn is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::idleStateTimernI> idleStateTimernI{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::runningTimernIsR> runningTimernIsR{};
        }
        }
    }
    namespace Nonestat3{    ///<MRT0 Status register.
        using Addr = Register::Address<0x4000403c,0xfffffffc,0,unsigned>;
        ///Monitors the interrupt flag.
        enum class IntflagVal {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterruptT=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMERn has reached the end of the time interval. If the INTEN bit in the CONTROLn is also set to 1, the interrupt for timer channel n and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntflagVal> intflag{}; 
        namespace IntflagValC{
            constexpr Register::FieldValue<decltype(intflag)::Type,IntflagVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(intflag)::Type,IntflagVal::pendingInterruptT> pendingInterruptT{};
        }
        }
        ///Indicates the state of TIMERn. This bit is read-only.
        enum class RunVal {
            idleStateTimernI=0x00000000,     ///<Idle state. TIMERn is stopped.
            runningTimernIsR=0x00000001,     ///<Running. TIMERn is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::idleStateTimernI> idleStateTimernI{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::runningTimernIsR> runningTimernIsR{};
        }
        }
    }
    namespace NoneidleCh{    ///<Idle channel register. This register returns the number of the first idle channel.
        using Addr = Register::Address<0x400040f4,0xffffff0f,0,unsigned>;
        ///Idle channel. Reading the CHAN bits, returns the lowest idle timer channel. If all timer channels are running, CHAN = .
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> chan{}; 
    }
    namespace NoneirqFlag{    ///<Global interrupt flag register
        using Addr = Register::Address<0x400040f8,0xfffffff0,0,unsigned>;
        ///Monitors the interrupt flag of TIMER0.
        enum class Gflag0Val {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterruptT=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMER0 has reached the end of the time interval. If the INTEN bit in the CONTROL0 register is also set to 1, the interrupt for timer channel 0 and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Gflag0Val> gflag0{}; 
        namespace Gflag0ValC{
            constexpr Register::FieldValue<decltype(gflag0)::Type,Gflag0Val::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(gflag0)::Type,Gflag0Val::pendingInterruptT> pendingInterruptT{};
        }
        }
        ///Monitors the interrupt flag of TIMER1.
        enum class Gflag1Val {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterruptT=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMER1 has reached the end of the time interval. If the INTEN bit in the CONTROL1 register is also set to 1, the interrupt for timer channel 1 and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Gflag1Val> gflag1{}; 
        namespace Gflag1ValC{
            constexpr Register::FieldValue<decltype(gflag1)::Type,Gflag1Val::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(gflag1)::Type,Gflag1Val::pendingInterruptT> pendingInterruptT{};
        }
        }
        ///Monitors the interrupt flag of TIMER2.
        enum class Gflag2Val {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterruptT=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMER2 has reached the end of the time interval. If the INTEN bit in the CONTROL2 register is also set to 1, the interrupt for timer channel 2 and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Gflag2Val> gflag2{}; 
        namespace Gflag2ValC{
            constexpr Register::FieldValue<decltype(gflag2)::Type,Gflag2Val::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(gflag2)::Type,Gflag2Val::pendingInterruptT> pendingInterruptT{};
        }
        }
        ///Monitors the interrupt flag of TIMER3.
        enum class Gflag3Val {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterruptT=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMER3 has reached the end of the time interval. If the INTEN bit in the CONTROL3 register is also set to 1, the interrupt for timer channel 3 and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Gflag3Val> gflag3{}; 
        namespace Gflag3ValC{
            constexpr Register::FieldValue<decltype(gflag3)::Type,Gflag3Val::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(gflag3)::Type,Gflag3Val::pendingInterruptT> pendingInterruptT{};
        }
        }
    }
}
