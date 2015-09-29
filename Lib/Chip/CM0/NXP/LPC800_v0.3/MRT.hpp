#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Multi-Rate Timer (MRT)
    namespace Noneintval0{    ///<MRT0 Time interval value register. This value is loaded into the TIMER0 register.
        using Addr = Register::Address<0x40004000,0x7f000000,0,unsigned>;
        ///Time interval load value. This value is loaded into the TIMERn register and the MRTn starts counting down from IVALUE -1. If the timer is idle, writing a non-zero value to this bit field starts the timer immediately.  If the timer is running, writing a zero to this bit field does the following: If LOAD = 1, the timer stops immediately. If LOAD = 0, the timer stops at the end of the time interval.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ivalue{}; 
        ///Determines how the timer interval value IVALUE is loaded into the TIMERn register. This bit is write-only. Reading this bit always returns 0.
        enum class loadVal {
            noForceLoadTheL=0x00000000,     ///<No force load. The load from the INTVALn register to the TIMERn register is processed at the end of the time interval if the repeat mode is selected.
            forceLoadTheIntv=0x00000001,     ///<Force load. The INTVALn interval value IVALUE is immediately loaded into the TIMERn register while TIMERn is running.
        };
        namespace loadValC{
            constexpr MPL::Value<loadVal,loadVal::noForceLoadTheL> noForceLoadTheL{};
            constexpr MPL::Value<loadVal,loadVal::forceLoadTheIntv> forceLoadTheIntv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,loadVal> load{}; 
    }
    namespace Noneintval1{    ///<MRT0 Time interval value register. This value is loaded into the TIMER0 register.
        using Addr = Register::Address<0x40004010,0x7f000000,0,unsigned>;
        ///Time interval load value. This value is loaded into the TIMERn register and the MRTn starts counting down from IVALUE -1. If the timer is idle, writing a non-zero value to this bit field starts the timer immediately.  If the timer is running, writing a zero to this bit field does the following: If LOAD = 1, the timer stops immediately. If LOAD = 0, the timer stops at the end of the time interval.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ivalue{}; 
        ///Determines how the timer interval value IVALUE is loaded into the TIMERn register. This bit is write-only. Reading this bit always returns 0.
        enum class loadVal {
            noForceLoadTheL=0x00000000,     ///<No force load. The load from the INTVALn register to the TIMERn register is processed at the end of the time interval if the repeat mode is selected.
            forceLoadTheIntv=0x00000001,     ///<Force load. The INTVALn interval value IVALUE is immediately loaded into the TIMERn register while TIMERn is running.
        };
        namespace loadValC{
            constexpr MPL::Value<loadVal,loadVal::noForceLoadTheL> noForceLoadTheL{};
            constexpr MPL::Value<loadVal,loadVal::forceLoadTheIntv> forceLoadTheIntv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,loadVal> load{}; 
    }
    namespace Noneintval2{    ///<MRT0 Time interval value register. This value is loaded into the TIMER0 register.
        using Addr = Register::Address<0x40004020,0x7f000000,0,unsigned>;
        ///Time interval load value. This value is loaded into the TIMERn register and the MRTn starts counting down from IVALUE -1. If the timer is idle, writing a non-zero value to this bit field starts the timer immediately.  If the timer is running, writing a zero to this bit field does the following: If LOAD = 1, the timer stops immediately. If LOAD = 0, the timer stops at the end of the time interval.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ivalue{}; 
        ///Determines how the timer interval value IVALUE is loaded into the TIMERn register. This bit is write-only. Reading this bit always returns 0.
        enum class loadVal {
            noForceLoadTheL=0x00000000,     ///<No force load. The load from the INTVALn register to the TIMERn register is processed at the end of the time interval if the repeat mode is selected.
            forceLoadTheIntv=0x00000001,     ///<Force load. The INTVALn interval value IVALUE is immediately loaded into the TIMERn register while TIMERn is running.
        };
        namespace loadValC{
            constexpr MPL::Value<loadVal,loadVal::noForceLoadTheL> noForceLoadTheL{};
            constexpr MPL::Value<loadVal,loadVal::forceLoadTheIntv> forceLoadTheIntv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,loadVal> load{}; 
    }
    namespace Noneintval3{    ///<MRT0 Time interval value register. This value is loaded into the TIMER0 register.
        using Addr = Register::Address<0x40004030,0x7f000000,0,unsigned>;
        ///Time interval load value. This value is loaded into the TIMERn register and the MRTn starts counting down from IVALUE -1. If the timer is idle, writing a non-zero value to this bit field starts the timer immediately.  If the timer is running, writing a zero to this bit field does the following: If LOAD = 1, the timer stops immediately. If LOAD = 0, the timer stops at the end of the time interval.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ivalue{}; 
        ///Determines how the timer interval value IVALUE is loaded into the TIMERn register. This bit is write-only. Reading this bit always returns 0.
        enum class loadVal {
            noForceLoadTheL=0x00000000,     ///<No force load. The load from the INTVALn register to the TIMERn register is processed at the end of the time interval if the repeat mode is selected.
            forceLoadTheIntv=0x00000001,     ///<Force load. The INTVALn interval value IVALUE is immediately loaded into the TIMERn register while TIMERn is running.
        };
        namespace loadValC{
            constexpr MPL::Value<loadVal,loadVal::noForceLoadTheL> noForceLoadTheL{};
            constexpr MPL::Value<loadVal,loadVal::forceLoadTheIntv> forceLoadTheIntv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,loadVal> load{}; 
    }
    namespace Nonetimer0{    ///<MRT0 Timer register. This register reads the value of the down-counter.
        using Addr = Register::Address<0x40004004,0xff000000,0,unsigned>;
        ///Holds the current timer value of the down-counter. The initial value is loaded as IVALUE - 1 from the TIME_INTVALn register either at the end of the time interval if the LOAD bit in TIME_INTVALn is 0 and the timer is in repeat mode or immediately if LOAD = 1. When the timer is in idle state, reading this bit fields returns -1 (0x7FFF FFFF).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
    namespace Nonetimer1{    ///<MRT0 Timer register. This register reads the value of the down-counter.
        using Addr = Register::Address<0x40004014,0xff000000,0,unsigned>;
        ///Holds the current timer value of the down-counter. The initial value is loaded as IVALUE - 1 from the TIME_INTVALn register either at the end of the time interval if the LOAD bit in TIME_INTVALn is 0 and the timer is in repeat mode or immediately if LOAD = 1. When the timer is in idle state, reading this bit fields returns -1 (0x7FFF FFFF).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
    namespace Nonetimer2{    ///<MRT0 Timer register. This register reads the value of the down-counter.
        using Addr = Register::Address<0x40004024,0xff000000,0,unsigned>;
        ///Holds the current timer value of the down-counter. The initial value is loaded as IVALUE - 1 from the TIME_INTVALn register either at the end of the time interval if the LOAD bit in TIME_INTVALn is 0 and the timer is in repeat mode or immediately if LOAD = 1. When the timer is in idle state, reading this bit fields returns -1 (0x7FFF FFFF).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
    namespace Nonetimer3{    ///<MRT0 Timer register. This register reads the value of the down-counter.
        using Addr = Register::Address<0x40004034,0xff000000,0,unsigned>;
        ///Holds the current timer value of the down-counter. The initial value is loaded as IVALUE - 1 from the TIME_INTVALn register either at the end of the time interval if the LOAD bit in TIME_INTVALn is 0 and the timer is in repeat mode or immediately if LOAD = 1. When the timer is in idle state, reading this bit fields returns -1 (0x7FFF FFFF).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
    namespace Nonectrl0{    ///<MRT0 Control register. This register controls the MRT0 modes.
        using Addr = Register::Address<0x40004008,0xfffffff8,0,unsigned>;
        ///Enable the TIMERn interrupt.
        enum class intenVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace intenValC{
            constexpr MPL::Value<intenVal,intenVal::disable> disable{};
            constexpr MPL::Value<intenVal,intenVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intenVal> inten{}; 
        ///Selects timer mode.
        enum class modeVal {
            repeatInterruptMod=0x00000000,     ///<Repeat interrupt mode.
            oneShotInterruptM=0x00000001,     ///<One-shot interrupt mode.
            oneShotBusStallM=0x00000002,     ///<One-shot bus stall mode.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::repeatInterruptMod> repeatInterruptMod{};
            constexpr MPL::Value<modeVal,modeVal::oneShotInterruptM> oneShotInterruptM{};
            constexpr MPL::Value<modeVal,modeVal::oneShotBusStallM> oneShotBusStallM{};
            constexpr MPL::Value<modeVal,modeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,modeVal> mode{}; 
    }
    namespace Nonectrl1{    ///<MRT0 Control register. This register controls the MRT0 modes.
        using Addr = Register::Address<0x40004018,0xfffffff8,0,unsigned>;
        ///Enable the TIMERn interrupt.
        enum class intenVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace intenValC{
            constexpr MPL::Value<intenVal,intenVal::disable> disable{};
            constexpr MPL::Value<intenVal,intenVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intenVal> inten{}; 
        ///Selects timer mode.
        enum class modeVal {
            repeatInterruptMod=0x00000000,     ///<Repeat interrupt mode.
            oneShotInterruptM=0x00000001,     ///<One-shot interrupt mode.
            oneShotBusStallM=0x00000002,     ///<One-shot bus stall mode.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::repeatInterruptMod> repeatInterruptMod{};
            constexpr MPL::Value<modeVal,modeVal::oneShotInterruptM> oneShotInterruptM{};
            constexpr MPL::Value<modeVal,modeVal::oneShotBusStallM> oneShotBusStallM{};
            constexpr MPL::Value<modeVal,modeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,modeVal> mode{}; 
    }
    namespace Nonectrl2{    ///<MRT0 Control register. This register controls the MRT0 modes.
        using Addr = Register::Address<0x40004028,0xfffffff8,0,unsigned>;
        ///Enable the TIMERn interrupt.
        enum class intenVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace intenValC{
            constexpr MPL::Value<intenVal,intenVal::disable> disable{};
            constexpr MPL::Value<intenVal,intenVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intenVal> inten{}; 
        ///Selects timer mode.
        enum class modeVal {
            repeatInterruptMod=0x00000000,     ///<Repeat interrupt mode.
            oneShotInterruptM=0x00000001,     ///<One-shot interrupt mode.
            oneShotBusStallM=0x00000002,     ///<One-shot bus stall mode.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::repeatInterruptMod> repeatInterruptMod{};
            constexpr MPL::Value<modeVal,modeVal::oneShotInterruptM> oneShotInterruptM{};
            constexpr MPL::Value<modeVal,modeVal::oneShotBusStallM> oneShotBusStallM{};
            constexpr MPL::Value<modeVal,modeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,modeVal> mode{}; 
    }
    namespace Nonectrl3{    ///<MRT0 Control register. This register controls the MRT0 modes.
        using Addr = Register::Address<0x40004038,0xfffffff8,0,unsigned>;
        ///Enable the TIMERn interrupt.
        enum class intenVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace intenValC{
            constexpr MPL::Value<intenVal,intenVal::disable> disable{};
            constexpr MPL::Value<intenVal,intenVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intenVal> inten{}; 
        ///Selects timer mode.
        enum class modeVal {
            repeatInterruptMod=0x00000000,     ///<Repeat interrupt mode.
            oneShotInterruptM=0x00000001,     ///<One-shot interrupt mode.
            oneShotBusStallM=0x00000002,     ///<One-shot bus stall mode.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::repeatInterruptMod> repeatInterruptMod{};
            constexpr MPL::Value<modeVal,modeVal::oneShotInterruptM> oneShotInterruptM{};
            constexpr MPL::Value<modeVal,modeVal::oneShotBusStallM> oneShotBusStallM{};
            constexpr MPL::Value<modeVal,modeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,modeVal> mode{}; 
    }
    namespace Nonestat0{    ///<MRT0 Status register.
        using Addr = Register::Address<0x4000400c,0xfffffffc,0,unsigned>;
        ///Monitors the interrupt flag.
        enum class intflagVal {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterruptT=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMERn has reached the end of the time interval. If the INTEN bit in the CONTROLn is also set to 1, the interrupt for timer channel n and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        namespace intflagValC{
            constexpr MPL::Value<intflagVal,intflagVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr MPL::Value<intflagVal,intflagVal::pendingInterruptT> pendingInterruptT{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intflagVal> intflag{}; 
        ///Indicates the state of TIMERn. This bit is read-only.
        enum class runVal {
            idleStateTimernI=0x00000000,     ///<Idle state. TIMERn is stopped.
            runningTimernIsR=0x00000001,     ///<Running. TIMERn is running.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::idleStateTimernI> idleStateTimernI{};
            constexpr MPL::Value<runVal,runVal::runningTimernIsR> runningTimernIsR{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,runVal> run{}; 
    }
    namespace Nonestat1{    ///<MRT0 Status register.
        using Addr = Register::Address<0x4000401c,0xfffffffc,0,unsigned>;
        ///Monitors the interrupt flag.
        enum class intflagVal {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterruptT=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMERn has reached the end of the time interval. If the INTEN bit in the CONTROLn is also set to 1, the interrupt for timer channel n and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        namespace intflagValC{
            constexpr MPL::Value<intflagVal,intflagVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr MPL::Value<intflagVal,intflagVal::pendingInterruptT> pendingInterruptT{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intflagVal> intflag{}; 
        ///Indicates the state of TIMERn. This bit is read-only.
        enum class runVal {
            idleStateTimernI=0x00000000,     ///<Idle state. TIMERn is stopped.
            runningTimernIsR=0x00000001,     ///<Running. TIMERn is running.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::idleStateTimernI> idleStateTimernI{};
            constexpr MPL::Value<runVal,runVal::runningTimernIsR> runningTimernIsR{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,runVal> run{}; 
    }
    namespace Nonestat2{    ///<MRT0 Status register.
        using Addr = Register::Address<0x4000402c,0xfffffffc,0,unsigned>;
        ///Monitors the interrupt flag.
        enum class intflagVal {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterruptT=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMERn has reached the end of the time interval. If the INTEN bit in the CONTROLn is also set to 1, the interrupt for timer channel n and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        namespace intflagValC{
            constexpr MPL::Value<intflagVal,intflagVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr MPL::Value<intflagVal,intflagVal::pendingInterruptT> pendingInterruptT{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intflagVal> intflag{}; 
        ///Indicates the state of TIMERn. This bit is read-only.
        enum class runVal {
            idleStateTimernI=0x00000000,     ///<Idle state. TIMERn is stopped.
            runningTimernIsR=0x00000001,     ///<Running. TIMERn is running.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::idleStateTimernI> idleStateTimernI{};
            constexpr MPL::Value<runVal,runVal::runningTimernIsR> runningTimernIsR{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,runVal> run{}; 
    }
    namespace Nonestat3{    ///<MRT0 Status register.
        using Addr = Register::Address<0x4000403c,0xfffffffc,0,unsigned>;
        ///Monitors the interrupt flag.
        enum class intflagVal {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterruptT=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMERn has reached the end of the time interval. If the INTEN bit in the CONTROLn is also set to 1, the interrupt for timer channel n and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        namespace intflagValC{
            constexpr MPL::Value<intflagVal,intflagVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr MPL::Value<intflagVal,intflagVal::pendingInterruptT> pendingInterruptT{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intflagVal> intflag{}; 
        ///Indicates the state of TIMERn. This bit is read-only.
        enum class runVal {
            idleStateTimernI=0x00000000,     ///<Idle state. TIMERn is stopped.
            runningTimernIsR=0x00000001,     ///<Running. TIMERn is running.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::idleStateTimernI> idleStateTimernI{};
            constexpr MPL::Value<runVal,runVal::runningTimernIsR> runningTimernIsR{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,runVal> run{}; 
    }
    namespace NoneidleCh{    ///<Idle channel register. This register returns the number of the first idle channel.
        using Addr = Register::Address<0x400040f4,0xffffff0f,0,unsigned>;
        ///Idle channel. Reading the CHAN bits, returns the lowest idle timer channel. If all timer channels are running, CHAN = .
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> chan{}; 
    }
    namespace NoneirqFlag{    ///<Global interrupt flag register
        using Addr = Register::Address<0x400040f8,0xfffffff0,0,unsigned>;
        ///Monitors the interrupt flag of TIMER0.
        enum class gflag0Val {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterruptT=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMER0 has reached the end of the time interval. If the INTEN bit in the CONTROL0 register is also set to 1, the interrupt for timer channel 0 and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        namespace gflag0ValC{
            constexpr MPL::Value<gflag0Val,gflag0Val::noPendingInterrupt> noPendingInterrupt{};
            constexpr MPL::Value<gflag0Val,gflag0Val::pendingInterruptT> pendingInterruptT{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,gflag0Val> gflag0{}; 
        ///Monitors the interrupt flag of TIMER1.
        enum class gflag1Val {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterruptT=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMER1 has reached the end of the time interval. If the INTEN bit in the CONTROL1 register is also set to 1, the interrupt for timer channel 1 and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        namespace gflag1ValC{
            constexpr MPL::Value<gflag1Val,gflag1Val::noPendingInterrupt> noPendingInterrupt{};
            constexpr MPL::Value<gflag1Val,gflag1Val::pendingInterruptT> pendingInterruptT{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,gflag1Val> gflag1{}; 
        ///Monitors the interrupt flag of TIMER2.
        enum class gflag2Val {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterruptT=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMER2 has reached the end of the time interval. If the INTEN bit in the CONTROL2 register is also set to 1, the interrupt for timer channel 2 and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        namespace gflag2ValC{
            constexpr MPL::Value<gflag2Val,gflag2Val::noPendingInterrupt> noPendingInterrupt{};
            constexpr MPL::Value<gflag2Val,gflag2Val::pendingInterruptT> pendingInterruptT{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,gflag2Val> gflag2{}; 
        ///Monitors the interrupt flag of TIMER3.
        enum class gflag3Val {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent to no operation.
            pendingInterruptT=0x00000001,     ///<Pending interrupt. The interrupt is pending because TIMER3 has reached the end of the time interval. If the INTEN bit in the CONTROL3 register is also set to 1, the interrupt for timer channel 3 and the global interrupt are raised.  Writing a 1 to this bit clears the interrupt request.
        };
        namespace gflag3ValC{
            constexpr MPL::Value<gflag3Val,gflag3Val::noPendingInterrupt> noPendingInterrupt{};
            constexpr MPL::Value<gflag3Val,gflag3Val::pendingInterruptT> pendingInterruptT{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,gflag3Val> gflag3{}; 
    }
}
