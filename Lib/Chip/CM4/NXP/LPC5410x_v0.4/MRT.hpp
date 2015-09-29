#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Multi-Rate Timer
    namespace Noneintval0{    ///<MRTn Time interval value register. This value is loaded into the
						TIMER0 register.
        using Addr = Register::Address<0x40074000,0x7f000000,0,unsigned>;
        ///Time interval load value. This value is loaded into the
								TIMERn register and the MRT channel n starts counting down from
								IVALUE -1. If the timer is idle, writing a non-zero value to this
								bit field starts the timer immediately. If the timer is running,
								writing a zero to this bit field does the following: If LOAD = 1,
								the timer stops immediately. If LOAD = 0, the timer stops at the end
								of the time interval.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ivalue{}; 
        ///Determines how the timer interval value IVALUE -1 is loaded
								into the TIMERn register. This bit is write-only. Reading this bit
								always returns 0.
        enum class loadVal {
            noForceLoad=0x00000000,     ///<No force load. The load from the INTVALn register
										to the TIMERn register is processed at the end of the time
										interval if the repeat mode is selected.
            forceLoad=0x00000001,     ///<Force load. The INTVALn interval value IVALUE -1 is
										immediately loaded into the TIMERn register while TIMERn is
										running.
        };
        namespace loadValC{
            constexpr MPL::Value<loadVal,loadVal::noForceLoad> noForceLoad{};
            constexpr MPL::Value<loadVal,loadVal::forceLoad> forceLoad{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,loadVal> load{}; 
    }
    namespace Noneintval1{    ///<MRTn Time interval value register. This value is loaded into the
						TIMER0 register.
        using Addr = Register::Address<0x40074010,0x7f000000,0,unsigned>;
        ///Time interval load value. This value is loaded into the
								TIMERn register and the MRT channel n starts counting down from
								IVALUE -1. If the timer is idle, writing a non-zero value to this
								bit field starts the timer immediately. If the timer is running,
								writing a zero to this bit field does the following: If LOAD = 1,
								the timer stops immediately. If LOAD = 0, the timer stops at the end
								of the time interval.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ivalue{}; 
        ///Determines how the timer interval value IVALUE -1 is loaded
								into the TIMERn register. This bit is write-only. Reading this bit
								always returns 0.
        enum class loadVal {
            noForceLoad=0x00000000,     ///<No force load. The load from the INTVALn register
										to the TIMERn register is processed at the end of the time
										interval if the repeat mode is selected.
            forceLoad=0x00000001,     ///<Force load. The INTVALn interval value IVALUE -1 is
										immediately loaded into the TIMERn register while TIMERn is
										running.
        };
        namespace loadValC{
            constexpr MPL::Value<loadVal,loadVal::noForceLoad> noForceLoad{};
            constexpr MPL::Value<loadVal,loadVal::forceLoad> forceLoad{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,loadVal> load{}; 
    }
    namespace Noneintval2{    ///<MRTn Time interval value register. This value is loaded into the
						TIMER0 register.
        using Addr = Register::Address<0x40074020,0x7f000000,0,unsigned>;
        ///Time interval load value. This value is loaded into the
								TIMERn register and the MRT channel n starts counting down from
								IVALUE -1. If the timer is idle, writing a non-zero value to this
								bit field starts the timer immediately. If the timer is running,
								writing a zero to this bit field does the following: If LOAD = 1,
								the timer stops immediately. If LOAD = 0, the timer stops at the end
								of the time interval.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ivalue{}; 
        ///Determines how the timer interval value IVALUE -1 is loaded
								into the TIMERn register. This bit is write-only. Reading this bit
								always returns 0.
        enum class loadVal {
            noForceLoad=0x00000000,     ///<No force load. The load from the INTVALn register
										to the TIMERn register is processed at the end of the time
										interval if the repeat mode is selected.
            forceLoad=0x00000001,     ///<Force load. The INTVALn interval value IVALUE -1 is
										immediately loaded into the TIMERn register while TIMERn is
										running.
        };
        namespace loadValC{
            constexpr MPL::Value<loadVal,loadVal::noForceLoad> noForceLoad{};
            constexpr MPL::Value<loadVal,loadVal::forceLoad> forceLoad{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,loadVal> load{}; 
    }
    namespace Noneintval3{    ///<MRTn Time interval value register. This value is loaded into the
						TIMER0 register.
        using Addr = Register::Address<0x40074030,0x7f000000,0,unsigned>;
        ///Time interval load value. This value is loaded into the
								TIMERn register and the MRT channel n starts counting down from
								IVALUE -1. If the timer is idle, writing a non-zero value to this
								bit field starts the timer immediately. If the timer is running,
								writing a zero to this bit field does the following: If LOAD = 1,
								the timer stops immediately. If LOAD = 0, the timer stops at the end
								of the time interval.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ivalue{}; 
        ///Determines how the timer interval value IVALUE -1 is loaded
								into the TIMERn register. This bit is write-only. Reading this bit
								always returns 0.
        enum class loadVal {
            noForceLoad=0x00000000,     ///<No force load. The load from the INTVALn register
										to the TIMERn register is processed at the end of the time
										interval if the repeat mode is selected.
            forceLoad=0x00000001,     ///<Force load. The INTVALn interval value IVALUE -1 is
										immediately loaded into the TIMERn register while TIMERn is
										running.
        };
        namespace loadValC{
            constexpr MPL::Value<loadVal,loadVal::noForceLoad> noForceLoad{};
            constexpr MPL::Value<loadVal,loadVal::forceLoad> forceLoad{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,loadVal> load{}; 
    }
    namespace Nonetimer0{    ///<MRTn Timer register. This register reads the value of the
						down-counter.
        using Addr = Register::Address<0x40074004,0xff000000,0,unsigned>;
        ///Holds the current timer value of the down-counter. The
								initial value of the TIMERn register is loaded as IVALUE - 1 from
								the INTVALn register either at the end of the time interval or
								immediately in the following cases: INTVALn register is updated in
								the idle state. INTVALn register is updated with LOAD = 1. When the
								timer is in idle state, reading this bit fields returns -1 (0x00FF
								FFFF).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
    namespace Nonetimer1{    ///<MRTn Timer register. This register reads the value of the
						down-counter.
        using Addr = Register::Address<0x40074014,0xff000000,0,unsigned>;
        ///Holds the current timer value of the down-counter. The
								initial value of the TIMERn register is loaded as IVALUE - 1 from
								the INTVALn register either at the end of the time interval or
								immediately in the following cases: INTVALn register is updated in
								the idle state. INTVALn register is updated with LOAD = 1. When the
								timer is in idle state, reading this bit fields returns -1 (0x00FF
								FFFF).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
    namespace Nonetimer2{    ///<MRTn Timer register. This register reads the value of the
						down-counter.
        using Addr = Register::Address<0x40074024,0xff000000,0,unsigned>;
        ///Holds the current timer value of the down-counter. The
								initial value of the TIMERn register is loaded as IVALUE - 1 from
								the INTVALn register either at the end of the time interval or
								immediately in the following cases: INTVALn register is updated in
								the idle state. INTVALn register is updated with LOAD = 1. When the
								timer is in idle state, reading this bit fields returns -1 (0x00FF
								FFFF).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
    namespace Nonetimer3{    ///<MRTn Timer register. This register reads the value of the
						down-counter.
        using Addr = Register::Address<0x40074034,0xff000000,0,unsigned>;
        ///Holds the current timer value of the down-counter. The
								initial value of the TIMERn register is loaded as IVALUE - 1 from
								the INTVALn register either at the end of the time interval or
								immediately in the following cases: INTVALn register is updated in
								the idle state. INTVALn register is updated with LOAD = 1. When the
								timer is in idle state, reading this bit fields returns -1 (0x00FF
								FFFF).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
    namespace Nonectrl0{    ///<MRTn Control register. This register controls the MRTn
						modes.
        using Addr = Register::Address<0x40074008,0xfffffff8,0,unsigned>;
        ///Enable the TIMERn interrupt.
        enum class intenVal {
            disabled=0x00000000,     ///<TIMERn interrupt is disabled.
            enabled=0x00000001,     ///<TIMERn interrupt is enabled.
        };
        namespace intenValC{
            constexpr MPL::Value<intenVal,intenVal::disabled> disabled{};
            constexpr MPL::Value<intenVal,intenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intenVal> inten{}; 
        ///Selects timer mode.
        enum class modeVal {
            repeatInterruptMod=0x00000000,     ///<Repeat interrupt mode.
            oneShotInterruptM=0x00000001,     ///<One-shot interrupt mode.
            oneShotStallMode=0x00000002,     ///<One-shot stall mode.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::repeatInterruptMod> repeatInterruptMod{};
            constexpr MPL::Value<modeVal,modeVal::oneShotInterruptM> oneShotInterruptM{};
            constexpr MPL::Value<modeVal,modeVal::oneShotStallMode> oneShotStallMode{};
            constexpr MPL::Value<modeVal,modeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,modeVal> mode{}; 
    }
    namespace Nonectrl1{    ///<MRTn Control register. This register controls the MRTn
						modes.
        using Addr = Register::Address<0x40074018,0xfffffff8,0,unsigned>;
        ///Enable the TIMERn interrupt.
        enum class intenVal {
            disabled=0x00000000,     ///<TIMERn interrupt is disabled.
            enabled=0x00000001,     ///<TIMERn interrupt is enabled.
        };
        namespace intenValC{
            constexpr MPL::Value<intenVal,intenVal::disabled> disabled{};
            constexpr MPL::Value<intenVal,intenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intenVal> inten{}; 
        ///Selects timer mode.
        enum class modeVal {
            repeatInterruptMod=0x00000000,     ///<Repeat interrupt mode.
            oneShotInterruptM=0x00000001,     ///<One-shot interrupt mode.
            oneShotStallMode=0x00000002,     ///<One-shot stall mode.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::repeatInterruptMod> repeatInterruptMod{};
            constexpr MPL::Value<modeVal,modeVal::oneShotInterruptM> oneShotInterruptM{};
            constexpr MPL::Value<modeVal,modeVal::oneShotStallMode> oneShotStallMode{};
            constexpr MPL::Value<modeVal,modeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,modeVal> mode{}; 
    }
    namespace Nonectrl2{    ///<MRTn Control register. This register controls the MRTn
						modes.
        using Addr = Register::Address<0x40074028,0xfffffff8,0,unsigned>;
        ///Enable the TIMERn interrupt.
        enum class intenVal {
            disabled=0x00000000,     ///<TIMERn interrupt is disabled.
            enabled=0x00000001,     ///<TIMERn interrupt is enabled.
        };
        namespace intenValC{
            constexpr MPL::Value<intenVal,intenVal::disabled> disabled{};
            constexpr MPL::Value<intenVal,intenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intenVal> inten{}; 
        ///Selects timer mode.
        enum class modeVal {
            repeatInterruptMod=0x00000000,     ///<Repeat interrupt mode.
            oneShotInterruptM=0x00000001,     ///<One-shot interrupt mode.
            oneShotStallMode=0x00000002,     ///<One-shot stall mode.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::repeatInterruptMod> repeatInterruptMod{};
            constexpr MPL::Value<modeVal,modeVal::oneShotInterruptM> oneShotInterruptM{};
            constexpr MPL::Value<modeVal,modeVal::oneShotStallMode> oneShotStallMode{};
            constexpr MPL::Value<modeVal,modeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,modeVal> mode{}; 
    }
    namespace Nonectrl3{    ///<MRTn Control register. This register controls the MRTn
						modes.
        using Addr = Register::Address<0x40074038,0xfffffff8,0,unsigned>;
        ///Enable the TIMERn interrupt.
        enum class intenVal {
            disabled=0x00000000,     ///<TIMERn interrupt is disabled.
            enabled=0x00000001,     ///<TIMERn interrupt is enabled.
        };
        namespace intenValC{
            constexpr MPL::Value<intenVal,intenVal::disabled> disabled{};
            constexpr MPL::Value<intenVal,intenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intenVal> inten{}; 
        ///Selects timer mode.
        enum class modeVal {
            repeatInterruptMod=0x00000000,     ///<Repeat interrupt mode.
            oneShotInterruptM=0x00000001,     ///<One-shot interrupt mode.
            oneShotStallMode=0x00000002,     ///<One-shot stall mode.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::repeatInterruptMod> repeatInterruptMod{};
            constexpr MPL::Value<modeVal,modeVal::oneShotInterruptM> oneShotInterruptM{};
            constexpr MPL::Value<modeVal,modeVal::oneShotStallMode> oneShotStallMode{};
            constexpr MPL::Value<modeVal,modeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,modeVal> mode{}; 
    }
    namespace Nonestat0{    ///<MRTn Status register.
        using Addr = Register::Address<0x4007400c,0xfffffff8,0,unsigned>;
        ///Monitors the interrupt flag.
        enum class intflagVal {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent
										to no operation.
            pendingInterrupt=0x00000001,     ///<Pending interrupt. The interrupt is pending because
										TIMERn has reached the end of the time interval. If the
										INTEN bit in the CONTROLn is also set to 1, the interrupt
										for timer channel n and the global interrupt are raised.
										Writing a 1 to this bit clears the interrupt
										request.
        };
        namespace intflagValC{
            constexpr MPL::Value<intflagVal,intflagVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr MPL::Value<intflagVal,intflagVal::pendingInterrupt> pendingInterrupt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intflagVal> intflag{}; 
        ///Indicates the state of TIMERn. This bit is
								read-only.
        enum class runVal {
            idleState=0x00000000,     ///<Idle state. TIMERn is stopped.
            running=0x00000001,     ///<Running. TIMERn is running.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::idleState> idleState{};
            constexpr MPL::Value<runVal,runVal::running> running{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,runVal> run{}; 
        ///Channel In Use flag. Operating details depend on the
								MULTITASK bit in the MODCFG register, and affects the use of
								IDLE_CH. 
        enum class inuseVal {
            no=0x00000000,     ///<This channel is not in use.
            yes=0x00000001,     ///<This channel is in use.
        };
        namespace inuseValC{
            constexpr MPL::Value<inuseVal,inuseVal::no> no{};
            constexpr MPL::Value<inuseVal,inuseVal::yes> yes{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inuseVal> inuse{}; 
    }
    namespace Nonestat1{    ///<MRTn Status register.
        using Addr = Register::Address<0x4007401c,0xfffffff8,0,unsigned>;
        ///Monitors the interrupt flag.
        enum class intflagVal {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent
										to no operation.
            pendingInterrupt=0x00000001,     ///<Pending interrupt. The interrupt is pending because
										TIMERn has reached the end of the time interval. If the
										INTEN bit in the CONTROLn is also set to 1, the interrupt
										for timer channel n and the global interrupt are raised.
										Writing a 1 to this bit clears the interrupt
										request.
        };
        namespace intflagValC{
            constexpr MPL::Value<intflagVal,intflagVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr MPL::Value<intflagVal,intflagVal::pendingInterrupt> pendingInterrupt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intflagVal> intflag{}; 
        ///Indicates the state of TIMERn. This bit is
								read-only.
        enum class runVal {
            idleState=0x00000000,     ///<Idle state. TIMERn is stopped.
            running=0x00000001,     ///<Running. TIMERn is running.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::idleState> idleState{};
            constexpr MPL::Value<runVal,runVal::running> running{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,runVal> run{}; 
        ///Channel In Use flag. Operating details depend on the
								MULTITASK bit in the MODCFG register, and affects the use of
								IDLE_CH. 
        enum class inuseVal {
            no=0x00000000,     ///<This channel is not in use.
            yes=0x00000001,     ///<This channel is in use.
        };
        namespace inuseValC{
            constexpr MPL::Value<inuseVal,inuseVal::no> no{};
            constexpr MPL::Value<inuseVal,inuseVal::yes> yes{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inuseVal> inuse{}; 
    }
    namespace Nonestat2{    ///<MRTn Status register.
        using Addr = Register::Address<0x4007402c,0xfffffff8,0,unsigned>;
        ///Monitors the interrupt flag.
        enum class intflagVal {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent
										to no operation.
            pendingInterrupt=0x00000001,     ///<Pending interrupt. The interrupt is pending because
										TIMERn has reached the end of the time interval. If the
										INTEN bit in the CONTROLn is also set to 1, the interrupt
										for timer channel n and the global interrupt are raised.
										Writing a 1 to this bit clears the interrupt
										request.
        };
        namespace intflagValC{
            constexpr MPL::Value<intflagVal,intflagVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr MPL::Value<intflagVal,intflagVal::pendingInterrupt> pendingInterrupt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intflagVal> intflag{}; 
        ///Indicates the state of TIMERn. This bit is
								read-only.
        enum class runVal {
            idleState=0x00000000,     ///<Idle state. TIMERn is stopped.
            running=0x00000001,     ///<Running. TIMERn is running.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::idleState> idleState{};
            constexpr MPL::Value<runVal,runVal::running> running{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,runVal> run{}; 
        ///Channel In Use flag. Operating details depend on the
								MULTITASK bit in the MODCFG register, and affects the use of
								IDLE_CH. 
        enum class inuseVal {
            no=0x00000000,     ///<This channel is not in use.
            yes=0x00000001,     ///<This channel is in use.
        };
        namespace inuseValC{
            constexpr MPL::Value<inuseVal,inuseVal::no> no{};
            constexpr MPL::Value<inuseVal,inuseVal::yes> yes{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inuseVal> inuse{}; 
    }
    namespace Nonestat3{    ///<MRTn Status register.
        using Addr = Register::Address<0x4007403c,0xfffffff8,0,unsigned>;
        ///Monitors the interrupt flag.
        enum class intflagVal {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent
										to no operation.
            pendingInterrupt=0x00000001,     ///<Pending interrupt. The interrupt is pending because
										TIMERn has reached the end of the time interval. If the
										INTEN bit in the CONTROLn is also set to 1, the interrupt
										for timer channel n and the global interrupt are raised.
										Writing a 1 to this bit clears the interrupt
										request.
        };
        namespace intflagValC{
            constexpr MPL::Value<intflagVal,intflagVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr MPL::Value<intflagVal,intflagVal::pendingInterrupt> pendingInterrupt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intflagVal> intflag{}; 
        ///Indicates the state of TIMERn. This bit is
								read-only.
        enum class runVal {
            idleState=0x00000000,     ///<Idle state. TIMERn is stopped.
            running=0x00000001,     ///<Running. TIMERn is running.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::idleState> idleState{};
            constexpr MPL::Value<runVal,runVal::running> running{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,runVal> run{}; 
        ///Channel In Use flag. Operating details depend on the
								MULTITASK bit in the MODCFG register, and affects the use of
								IDLE_CH. 
        enum class inuseVal {
            no=0x00000000,     ///<This channel is not in use.
            yes=0x00000001,     ///<This channel is in use.
        };
        namespace inuseValC{
            constexpr MPL::Value<inuseVal,inuseVal::no> no{};
            constexpr MPL::Value<inuseVal,inuseVal::yes> yes{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inuseVal> inuse{}; 
    }
    namespace Nonemodcfg{    ///<Module Configuration register. This register provides information
						about this particular MRT instance, and allows choosing an overall mode for
						the idle channel feature.
        using Addr = Register::Address<0x400740f0,0x7ffffe00,0,unsigned>;
        ///Identifies the number of channels in this
								MRT.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> noc{}; 
        ///Identifies the number of timer bits in this
								MRT.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,4),Register::ReadWriteAccess,unsigned> nob{}; 
        ///Selects the operating mode for the INUSE flags and the
								IDLE_CH register. See Idle channel register (IDLE_CH) for
								details.
        enum class multitaskVal {
            hardwareStatusMode=0x00000000,     ///<Hardware status mode. In this mode, the INUSE(n)
										flags for all channels are reset.
            multiTaskMode=0x00000001,     ///<Multi-task mode.
        };
        namespace multitaskValC{
            constexpr MPL::Value<multitaskVal,multitaskVal::hardwareStatusMode> hardwareStatusMode{};
            constexpr MPL::Value<multitaskVal,multitaskVal::multiTaskMode> multiTaskMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,multitaskVal> multitask{}; 
    }
    namespace NoneidleCh{    ///<Idle channel register. This register returns the number of the
						first idle channel.
        using Addr = Register::Address<0x400740f4,0xffffff0f,0,unsigned>;
        ///Idle channel. Reading the CHAN bits, returns the lowest
								idle timer channel. The number is positioned such that it can be
								used as an offset from the MRT base address in order to access the
								registers for the allocated channel. If all timer channels are
								running, CHAN = 0xF. See text above for more details.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> chan{}; 
    }
    namespace NoneirqFlag{    ///<Global interrupt flag register
        using Addr = Register::Address<0x400740f8,0xfffffff0,0,unsigned>;
        ///Monitors the interrupt flag of TIMER0.
        enum class gflag0Val {
            noPendingInterrupt=0x00000000,     ///<No pending interrupt. Writing a zero is equivalent
										to no operation.
            pendingInterrupt=0x00000001,     ///<Pending interrupt. The interrupt is pending because
										TIMER0 has reached the end of the time interval. If the
										INTEN bit in the CONTROL0 register is also set to 1, the
										interrupt for timer channel 0 and the global interrupt are
										raised. Writing a 1 to this bit clears the interrupt
										request.
        };
        namespace gflag0ValC{
            constexpr MPL::Value<gflag0Val,gflag0Val::noPendingInterrupt> noPendingInterrupt{};
            constexpr MPL::Value<gflag0Val,gflag0Val::pendingInterrupt> pendingInterrupt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,gflag0Val> gflag0{}; 
        ///Monitors the interrupt flag of TIMER1. See description of
								channel 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gflag1{}; 
        ///Monitors the interrupt flag of TIMER2. See description of
								channel 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gflag2{}; 
        ///Monitors the interrupt flag of TIMER3. See description of
								channel 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gflag3{}; 
    }
}
