#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//FlexTimer Module
    namespace Ftm1Sc{    ///<Status And Control
        using Addr = Register::Address<0x4002a000,0xffffff00,0,unsigned>;
        ///Prescale Factor Selection
        enum class PsVal {
            v000=0x00000000,     ///<Divide by 1
            v001=0x00000001,     ///<Divide by 2
            v010=0x00000002,     ///<Divide by 4
            v011=0x00000003,     ///<Divide by 8
            v100=0x00000004,     ///<Divide by 16
            v101=0x00000005,     ///<Divide by 32
            v110=0x00000006,     ///<Divide by 64
            v111=0x00000007,     ///<Divide by 128
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v111> v111{};
        }
        ///Clock Source Selection
        enum class ClksVal {
            v00=0x00000000,     ///<No clock selected. This in effect disables the FTM counter.
            v01=0x00000001,     ///<System clock
            v10=0x00000002,     ///<Fixed frequency clock
            v11=0x00000003,     ///<External clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksVal> clks{}; 
        namespace ClksValC{
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v00> v00{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v01> v01{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v10> v10{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v11> v11{};
        }
        ///Center-Aligned PWM Select
        enum class CpwmsVal {
            v0=0x00000000,     ///<FTM counter operates in Up Counting mode.
            v1=0x00000001,     ///<FTM counter operates in Up-Down Counting mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,CpwmsVal> cpwms{}; 
        namespace CpwmsValC{
            constexpr Register::FieldValue<decltype(cpwms)::Type,CpwmsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpwms)::Type,CpwmsVal::v1> v1{};
        }
        ///Timer Overflow Interrupt Enable
        enum class ToieVal {
            v0=0x00000000,     ///<Disable TOF interrupts. Use software polling.
            v1=0x00000001,     ///<Enable TOF interrupts. An interrupt is generated when TOF equals one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ToieVal> toie{}; 
        namespace ToieValC{
            constexpr Register::FieldValue<decltype(toie)::Type,ToieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(toie)::Type,ToieVal::v1> v1{};
        }
        ///Timer Overflow Flag
        enum class TofVal {
            v0=0x00000000,     ///<FTM counter has not overflowed.
            v1=0x00000001,     ///<FTM counter has overflowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TofVal> tof{}; 
        namespace TofValC{
            constexpr Register::FieldValue<decltype(tof)::Type,TofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tof)::Type,TofVal::v1> v1{};
        }
    }
    namespace Ftm1Cnt{    ///<Counter
        using Addr = Register::Address<0x4002a004,0xffff0000,0,unsigned>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Ftm1Mod{    ///<Modulo
        using Addr = Register::Address<0x4002a008,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
    }
    namespace Ftm1C0sc{    ///<Channel (n) Status And Control
        using Addr = Register::Address<0x4002a00c,0xffffff02,0,unsigned>;
        ///DMA Enable
        enum class DmaVal {
            v0=0x00000000,     ///<Disable DMA transfers.
            v1=0x00000001,     ///<Enable DMA transfers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DmaVal> dma{}; 
        namespace DmaValC{
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::v1> v1{};
        }
        ///Edge or Level Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> elsa{}; 
        ///Edge or Level Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> elsb{}; 
        ///Channel Mode Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msa{}; 
        ///Channel Mode Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msb{}; 
        ///Channel Interrupt Enable
        enum class ChieVal {
            v0=0x00000000,     ///<Disable channel interrupts. Use software polling.
            v1=0x00000001,     ///<Enable channel interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ChieVal> chie{}; 
        namespace ChieValC{
            constexpr Register::FieldValue<decltype(chie)::Type,ChieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(chie)::Type,ChieVal::v1> v1{};
        }
        ///Channel Flag
        enum class ChfVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ChfVal> chf{}; 
        namespace ChfValC{
            constexpr Register::FieldValue<decltype(chf)::Type,ChfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(chf)::Type,ChfVal::v1> v1{};
        }
    }
    namespace Ftm1C1sc{    ///<Channel (n) Status And Control
        using Addr = Register::Address<0x4002a014,0xffffff02,0,unsigned>;
        ///DMA Enable
        enum class DmaVal {
            v0=0x00000000,     ///<Disable DMA transfers.
            v1=0x00000001,     ///<Enable DMA transfers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DmaVal> dma{}; 
        namespace DmaValC{
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::v1> v1{};
        }
        ///Edge or Level Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> elsa{}; 
        ///Edge or Level Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> elsb{}; 
        ///Channel Mode Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msa{}; 
        ///Channel Mode Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msb{}; 
        ///Channel Interrupt Enable
        enum class ChieVal {
            v0=0x00000000,     ///<Disable channel interrupts. Use software polling.
            v1=0x00000001,     ///<Enable channel interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ChieVal> chie{}; 
        namespace ChieValC{
            constexpr Register::FieldValue<decltype(chie)::Type,ChieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(chie)::Type,ChieVal::v1> v1{};
        }
        ///Channel Flag
        enum class ChfVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ChfVal> chf{}; 
        namespace ChfValC{
            constexpr Register::FieldValue<decltype(chf)::Type,ChfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(chf)::Type,ChfVal::v1> v1{};
        }
    }
    namespace Ftm1C0v{    ///<Channel (n) Value
        using Addr = Register::Address<0x4002a010,0xffff0000,0,unsigned>;
        ///Channel Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace Ftm1C1v{    ///<Channel (n) Value
        using Addr = Register::Address<0x4002a018,0xffff0000,0,unsigned>;
        ///Channel Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace Ftm1Cntin{    ///<Counter Initial Value
        using Addr = Register::Address<0x4002a04c,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> init{}; 
    }
    namespace Ftm1Status{    ///<Capture And Compare Status
        using Addr = Register::Address<0x4002a050,0xffffff00,0,unsigned>;
        ///Channel 0 Flag
        enum class Ch0fVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0fVal> ch0f{}; 
        namespace Ch0fValC{
            constexpr Register::FieldValue<decltype(ch0f)::Type,Ch0fVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch0f)::Type,Ch0fVal::v1> v1{};
        }
        ///Channel 1 Flag
        enum class Ch1fVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1fVal> ch1f{}; 
        namespace Ch1fValC{
            constexpr Register::FieldValue<decltype(ch1f)::Type,Ch1fVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch1f)::Type,Ch1fVal::v1> v1{};
        }
        ///Channel 2 Flag
        enum class Ch2fVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2fVal> ch2f{}; 
        namespace Ch2fValC{
            constexpr Register::FieldValue<decltype(ch2f)::Type,Ch2fVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch2f)::Type,Ch2fVal::v1> v1{};
        }
        ///Channel 3 Flag
        enum class Ch3fVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3fVal> ch3f{}; 
        namespace Ch3fValC{
            constexpr Register::FieldValue<decltype(ch3f)::Type,Ch3fVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch3f)::Type,Ch3fVal::v1> v1{};
        }
        ///Channel 4 Flag
        enum class Ch4fVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4fVal> ch4f{}; 
        namespace Ch4fValC{
            constexpr Register::FieldValue<decltype(ch4f)::Type,Ch4fVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch4f)::Type,Ch4fVal::v1> v1{};
        }
        ///Channel 5 Flag
        enum class Ch5fVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5fVal> ch5f{}; 
        namespace Ch5fValC{
            constexpr Register::FieldValue<decltype(ch5f)::Type,Ch5fVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch5f)::Type,Ch5fVal::v1> v1{};
        }
        ///Channel 6 Flag
        enum class Ch6fVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6fVal> ch6f{}; 
        namespace Ch6fValC{
            constexpr Register::FieldValue<decltype(ch6f)::Type,Ch6fVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch6f)::Type,Ch6fVal::v1> v1{};
        }
        ///Channel 7 Flag
        enum class Ch7fVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7fVal> ch7f{}; 
        namespace Ch7fValC{
            constexpr Register::FieldValue<decltype(ch7f)::Type,Ch7fVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch7f)::Type,Ch7fVal::v1> v1{};
        }
    }
    namespace Ftm1Mode{    ///<Features Mode Selection
        using Addr = Register::Address<0x4002a054,0xffffff00,0,unsigned>;
        ///FTM Enable
        enum class FtmenVal {
            v0=0x00000000,     ///<Only the TPM-compatible registers (first set of registers) can be used without any restriction. Do not use the FTM-specific registers.
            v1=0x00000001,     ///<All registers including the FTM-specific registers (second set of registers) are available for use with no restrictions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FtmenVal> ftmen{}; 
        namespace FtmenValC{
            constexpr Register::FieldValue<decltype(ftmen)::Type,FtmenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftmen)::Type,FtmenVal::v1> v1{};
        }
        ///Initialize The Channels Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> init{}; 
        ///Write Protection Disable
        enum class WpdisVal {
            v0=0x00000000,     ///<Write protection is enabled.
            v1=0x00000001,     ///<Write protection is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WpdisVal> wpdis{}; 
        namespace WpdisValC{
            constexpr Register::FieldValue<decltype(wpdis)::Type,WpdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wpdis)::Type,WpdisVal::v1> v1{};
        }
        ///PWM Synchronization Mode
        enum class PwmsyncVal {
            v0=0x00000000,     ///<No restrictions. Software and hardware triggers can be used by MOD, CnV, OUTMASK, and FTM counter synchronization.
            v1=0x00000001,     ///<Software trigger can only be used by MOD and CnV synchronization, and hardware triggers can only be used by OUTMASK and FTM counter synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PwmsyncVal> pwmsync{}; 
        namespace PwmsyncValC{
            constexpr Register::FieldValue<decltype(pwmsync)::Type,PwmsyncVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pwmsync)::Type,PwmsyncVal::v1> v1{};
        }
        ///Capture Test Mode Enable
        enum class CaptestVal {
            v0=0x00000000,     ///<Capture test mode is disabled.
            v1=0x00000001,     ///<Capture test mode is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CaptestVal> captest{}; 
        namespace CaptestValC{
            constexpr Register::FieldValue<decltype(captest)::Type,CaptestVal::v0> v0{};
            constexpr Register::FieldValue<decltype(captest)::Type,CaptestVal::v1> v1{};
        }
        ///Fault Control Mode
        enum class FaultmVal {
            v00=0x00000000,     ///<Fault control is disabled for all channels.
            v01=0x00000001,     ///<Fault control is enabled for even channels only (channels 0, 2, 4, and 6), and the selected mode is the manual fault clearing.
            v10=0x00000002,     ///<Fault control is enabled for all channels, and the selected mode is the manual fault clearing.
            v11=0x00000003,     ///<Fault control is enabled for all channels, and the selected mode is the automatic fault clearing.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,FaultmVal> faultm{}; 
        namespace FaultmValC{
            constexpr Register::FieldValue<decltype(faultm)::Type,FaultmVal::v00> v00{};
            constexpr Register::FieldValue<decltype(faultm)::Type,FaultmVal::v01> v01{};
            constexpr Register::FieldValue<decltype(faultm)::Type,FaultmVal::v10> v10{};
            constexpr Register::FieldValue<decltype(faultm)::Type,FaultmVal::v11> v11{};
        }
        ///Fault Interrupt Enable
        enum class FaultieVal {
            v0=0x00000000,     ///<Fault control interrupt is disabled.
            v1=0x00000001,     ///<Fault control interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,FaultieVal> faultie{}; 
        namespace FaultieValC{
            constexpr Register::FieldValue<decltype(faultie)::Type,FaultieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(faultie)::Type,FaultieVal::v1> v1{};
        }
    }
    namespace Ftm1Sync{    ///<Synchronization
        using Addr = Register::Address<0x4002a058,0xffffff00,0,unsigned>;
        ///Minimum Loading Point Enable
        enum class CntminVal {
            v0=0x00000000,     ///<The minimum loading point is disabled.
            v1=0x00000001,     ///<The minimum loading point is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CntminVal> cntmin{}; 
        namespace CntminValC{
            constexpr Register::FieldValue<decltype(cntmin)::Type,CntminVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cntmin)::Type,CntminVal::v1> v1{};
        }
        ///Maximum Loading Point Enable
        enum class CntmaxVal {
            v0=0x00000000,     ///<The maximum loading point is disabled.
            v1=0x00000001,     ///<The maximum loading point is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CntmaxVal> cntmax{}; 
        namespace CntmaxValC{
            constexpr Register::FieldValue<decltype(cntmax)::Type,CntmaxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cntmax)::Type,CntmaxVal::v1> v1{};
        }
        ///FTM Counter Reinitialization By Synchronization (FTM counter synchronization)
        enum class ReinitVal {
            v0=0x00000000,     ///<FTM counter continues to count normally.
            v1=0x00000001,     ///<FTM counter is updated with its initial value when the selected trigger is detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ReinitVal> reinit{}; 
        namespace ReinitValC{
            constexpr Register::FieldValue<decltype(reinit)::Type,ReinitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(reinit)::Type,ReinitVal::v1> v1{};
        }
        ///Output Mask Synchronization
        enum class SynchomVal {
            v0=0x00000000,     ///<OUTMASK register is updated with the value of its buffer in all rising edges of the system clock.
            v1=0x00000001,     ///<OUTMASK register is updated with the value of its buffer only by the PWM synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SynchomVal> synchom{}; 
        namespace SynchomValC{
            constexpr Register::FieldValue<decltype(synchom)::Type,SynchomVal::v0> v0{};
            constexpr Register::FieldValue<decltype(synchom)::Type,SynchomVal::v1> v1{};
        }
        ///PWM Synchronization Hardware Trigger 0
        enum class Trig0Val {
            v0=0x00000000,     ///<Trigger is disabled.
            v1=0x00000001,     ///<Trigger is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Trig0Val> trig0{}; 
        namespace Trig0ValC{
            constexpr Register::FieldValue<decltype(trig0)::Type,Trig0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(trig0)::Type,Trig0Val::v1> v1{};
        }
        ///PWM Synchronization Hardware Trigger 1
        enum class Trig1Val {
            v0=0x00000000,     ///<Trigger is disabled.
            v1=0x00000001,     ///<Trigger is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Trig1Val> trig1{}; 
        namespace Trig1ValC{
            constexpr Register::FieldValue<decltype(trig1)::Type,Trig1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(trig1)::Type,Trig1Val::v1> v1{};
        }
        ///PWM Synchronization Hardware Trigger 2
        enum class Trig2Val {
            v0=0x00000000,     ///<Trigger is disabled.
            v1=0x00000001,     ///<Trigger is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Trig2Val> trig2{}; 
        namespace Trig2ValC{
            constexpr Register::FieldValue<decltype(trig2)::Type,Trig2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(trig2)::Type,Trig2Val::v1> v1{};
        }
        ///PWM Synchronization Software Trigger
        enum class SwsyncVal {
            v0=0x00000000,     ///<Software trigger is not selected.
            v1=0x00000001,     ///<Software trigger is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SwsyncVal> swsync{}; 
        namespace SwsyncValC{
            constexpr Register::FieldValue<decltype(swsync)::Type,SwsyncVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swsync)::Type,SwsyncVal::v1> v1{};
        }
    }
    namespace Ftm1Outinit{    ///<Initial State For Channels Output
        using Addr = Register::Address<0x4002a05c,0xffffff00,0,unsigned>;
        ///Channel 0 Output Initialization Value
        enum class Ch0oiVal {
            v0=0x00000000,     ///<The initialization value is 0.
            v1=0x00000001,     ///<The initialization value is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0oiVal> ch0oi{}; 
        namespace Ch0oiValC{
            constexpr Register::FieldValue<decltype(ch0oi)::Type,Ch0oiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch0oi)::Type,Ch0oiVal::v1> v1{};
        }
        ///Channel 1 Output Initialization Value
        enum class Ch1oiVal {
            v0=0x00000000,     ///<The initialization value is 0.
            v1=0x00000001,     ///<The initialization value is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1oiVal> ch1oi{}; 
        namespace Ch1oiValC{
            constexpr Register::FieldValue<decltype(ch1oi)::Type,Ch1oiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch1oi)::Type,Ch1oiVal::v1> v1{};
        }
        ///Channel 2 Output Initialization Value
        enum class Ch2oiVal {
            v0=0x00000000,     ///<The initialization value is 0.
            v1=0x00000001,     ///<The initialization value is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2oiVal> ch2oi{}; 
        namespace Ch2oiValC{
            constexpr Register::FieldValue<decltype(ch2oi)::Type,Ch2oiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch2oi)::Type,Ch2oiVal::v1> v1{};
        }
        ///Channel 3 Output Initialization Value
        enum class Ch3oiVal {
            v0=0x00000000,     ///<The initialization value is 0.
            v1=0x00000001,     ///<The initialization value is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3oiVal> ch3oi{}; 
        namespace Ch3oiValC{
            constexpr Register::FieldValue<decltype(ch3oi)::Type,Ch3oiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch3oi)::Type,Ch3oiVal::v1> v1{};
        }
        ///Channel 4 Output Initialization Value
        enum class Ch4oiVal {
            v0=0x00000000,     ///<The initialization value is 0.
            v1=0x00000001,     ///<The initialization value is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4oiVal> ch4oi{}; 
        namespace Ch4oiValC{
            constexpr Register::FieldValue<decltype(ch4oi)::Type,Ch4oiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch4oi)::Type,Ch4oiVal::v1> v1{};
        }
        ///Channel 5 Output Initialization Value
        enum class Ch5oiVal {
            v0=0x00000000,     ///<The initialization value is 0.
            v1=0x00000001,     ///<The initialization value is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5oiVal> ch5oi{}; 
        namespace Ch5oiValC{
            constexpr Register::FieldValue<decltype(ch5oi)::Type,Ch5oiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch5oi)::Type,Ch5oiVal::v1> v1{};
        }
        ///Channel 6 Output Initialization Value
        enum class Ch6oiVal {
            v0=0x00000000,     ///<The initialization value is 0.
            v1=0x00000001,     ///<The initialization value is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6oiVal> ch6oi{}; 
        namespace Ch6oiValC{
            constexpr Register::FieldValue<decltype(ch6oi)::Type,Ch6oiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch6oi)::Type,Ch6oiVal::v1> v1{};
        }
        ///Channel 7 Output Initialization Value
        enum class Ch7oiVal {
            v0=0x00000000,     ///<The initialization value is 0.
            v1=0x00000001,     ///<The initialization value is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7oiVal> ch7oi{}; 
        namespace Ch7oiValC{
            constexpr Register::FieldValue<decltype(ch7oi)::Type,Ch7oiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch7oi)::Type,Ch7oiVal::v1> v1{};
        }
    }
    namespace Ftm1Outmask{    ///<Output Mask
        using Addr = Register::Address<0x4002a060,0xffffff00,0,unsigned>;
        ///Channel 0 Output Mask
        enum class Ch0omVal {
            v0=0x00000000,     ///<Channel output is not masked. It continues to operate normally.
            v1=0x00000001,     ///<Channel output is masked. It is forced to its inactive state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0omVal> ch0om{}; 
        namespace Ch0omValC{
            constexpr Register::FieldValue<decltype(ch0om)::Type,Ch0omVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch0om)::Type,Ch0omVal::v1> v1{};
        }
        ///Channel 1 Output Mask
        enum class Ch1omVal {
            v0=0x00000000,     ///<Channel output is not masked. It continues to operate normally.
            v1=0x00000001,     ///<Channel output is masked. It is forced to its inactive state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1omVal> ch1om{}; 
        namespace Ch1omValC{
            constexpr Register::FieldValue<decltype(ch1om)::Type,Ch1omVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch1om)::Type,Ch1omVal::v1> v1{};
        }
        ///Channel 2 Output Mask
        enum class Ch2omVal {
            v0=0x00000000,     ///<Channel output is not masked. It continues to operate normally.
            v1=0x00000001,     ///<Channel output is masked. It is forced to its inactive state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2omVal> ch2om{}; 
        namespace Ch2omValC{
            constexpr Register::FieldValue<decltype(ch2om)::Type,Ch2omVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch2om)::Type,Ch2omVal::v1> v1{};
        }
        ///Channel 3 Output Mask
        enum class Ch3omVal {
            v0=0x00000000,     ///<Channel output is not masked. It continues to operate normally.
            v1=0x00000001,     ///<Channel output is masked. It is forced to its inactive state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3omVal> ch3om{}; 
        namespace Ch3omValC{
            constexpr Register::FieldValue<decltype(ch3om)::Type,Ch3omVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch3om)::Type,Ch3omVal::v1> v1{};
        }
        ///Channel 4 Output Mask
        enum class Ch4omVal {
            v0=0x00000000,     ///<Channel output is not masked. It continues to operate normally.
            v1=0x00000001,     ///<Channel output is masked. It is forced to its inactive state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4omVal> ch4om{}; 
        namespace Ch4omValC{
            constexpr Register::FieldValue<decltype(ch4om)::Type,Ch4omVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch4om)::Type,Ch4omVal::v1> v1{};
        }
        ///Channel 5 Output Mask
        enum class Ch5omVal {
            v0=0x00000000,     ///<Channel output is not masked. It continues to operate normally.
            v1=0x00000001,     ///<Channel output is masked. It is forced to its inactive state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5omVal> ch5om{}; 
        namespace Ch5omValC{
            constexpr Register::FieldValue<decltype(ch5om)::Type,Ch5omVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch5om)::Type,Ch5omVal::v1> v1{};
        }
        ///Channel 6 Output Mask
        enum class Ch6omVal {
            v0=0x00000000,     ///<Channel output is not masked. It continues to operate normally.
            v1=0x00000001,     ///<Channel output is masked. It is forced to its inactive state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6omVal> ch6om{}; 
        namespace Ch6omValC{
            constexpr Register::FieldValue<decltype(ch6om)::Type,Ch6omVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch6om)::Type,Ch6omVal::v1> v1{};
        }
        ///Channel 7 Output Mask
        enum class Ch7omVal {
            v0=0x00000000,     ///<Channel output is not masked. It continues to operate normally.
            v1=0x00000001,     ///<Channel output is masked. It is forced to its inactive state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7omVal> ch7om{}; 
        namespace Ch7omValC{
            constexpr Register::FieldValue<decltype(ch7om)::Type,Ch7omVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch7om)::Type,Ch7omVal::v1> v1{};
        }
    }
    namespace Ftm1Combine{    ///<Function For Linked Channels
        using Addr = Register::Address<0x4002a064,0x80808080,0,unsigned>;
        ///Combine Channels For n = 0
        enum class Combine0Val {
            v0=0x00000000,     ///<Channels (n) and (n+1) are independent.
            v1=0x00000001,     ///<Channels (n) and (n+1) are combined.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Combine0Val> combine0{}; 
        namespace Combine0ValC{
            constexpr Register::FieldValue<decltype(combine0)::Type,Combine0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(combine0)::Type,Combine0Val::v1> v1{};
        }
        ///Complement Of Channel (n) For n = 0
        enum class Comp0Val {
            v0=0x00000000,     ///<The channel (n+1) output is the same as the channel (n) output.
            v1=0x00000001,     ///<The channel (n+1) output is the complement of the channel (n) output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Comp0Val> comp0{}; 
        namespace Comp0ValC{
            constexpr Register::FieldValue<decltype(comp0)::Type,Comp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(comp0)::Type,Comp0Val::v1> v1{};
        }
        ///Dual Edge Capture Mode Enable For n = 0
        enum class Decapen0Val {
            v0=0x00000000,     ///<The Dual Edge Capture mode in this pair of channels is disabled.
            v1=0x00000001,     ///<The Dual Edge Capture mode in this pair of channels is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Decapen0Val> decapen0{}; 
        namespace Decapen0ValC{
            constexpr Register::FieldValue<decltype(decapen0)::Type,Decapen0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(decapen0)::Type,Decapen0Val::v1> v1{};
        }
        ///Dual Edge Capture Mode Captures For n = 0
        enum class Decap0Val {
            v0=0x00000000,     ///<The dual edge captures are inactive.
            v1=0x00000001,     ///<The dual edge captures are active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Decap0Val> decap0{}; 
        namespace Decap0ValC{
            constexpr Register::FieldValue<decltype(decap0)::Type,Decap0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(decap0)::Type,Decap0Val::v1> v1{};
        }
        ///Deadtime Enable For n = 0
        enum class Dten0Val {
            v0=0x00000000,     ///<The deadtime insertion in this pair of channels is disabled.
            v1=0x00000001,     ///<The deadtime insertion in this pair of channels is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Dten0Val> dten0{}; 
        namespace Dten0ValC{
            constexpr Register::FieldValue<decltype(dten0)::Type,Dten0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dten0)::Type,Dten0Val::v1> v1{};
        }
        ///Synchronization Enable For n = 0
        enum class Syncen0Val {
            v0=0x00000000,     ///<The PWM synchronization in this pair of channels is disabled.
            v1=0x00000001,     ///<The PWM synchronization in this pair of channels is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Syncen0Val> syncen0{}; 
        namespace Syncen0ValC{
            constexpr Register::FieldValue<decltype(syncen0)::Type,Syncen0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(syncen0)::Type,Syncen0Val::v1> v1{};
        }
        ///Fault Control Enable For n = 0
        enum class Faulten0Val {
            v0=0x00000000,     ///<The fault control in this pair of channels is disabled.
            v1=0x00000001,     ///<The fault control in this pair of channels is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Faulten0Val> faulten0{}; 
        namespace Faulten0ValC{
            constexpr Register::FieldValue<decltype(faulten0)::Type,Faulten0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(faulten0)::Type,Faulten0Val::v1> v1{};
        }
        ///Combine Channels For n = 2
        enum class Combine1Val {
            v0=0x00000000,     ///<Channels (n) and (n+1) are independent.
            v1=0x00000001,     ///<Channels (n) and (n+1) are combined.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Combine1Val> combine1{}; 
        namespace Combine1ValC{
            constexpr Register::FieldValue<decltype(combine1)::Type,Combine1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(combine1)::Type,Combine1Val::v1> v1{};
        }
        ///Complement Of Channel (n) For n = 2
        enum class Comp1Val {
            v0=0x00000000,     ///<The channel (n+1) output is the same as the channel (n) output.
            v1=0x00000001,     ///<The channel (n+1) output is the complement of the channel (n) output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Comp1Val> comp1{}; 
        namespace Comp1ValC{
            constexpr Register::FieldValue<decltype(comp1)::Type,Comp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(comp1)::Type,Comp1Val::v1> v1{};
        }
        ///Dual Edge Capture Mode Enable For n = 2
        enum class Decapen1Val {
            v0=0x00000000,     ///<The Dual Edge Capture mode in this pair of channels is disabled.
            v1=0x00000001,     ///<The Dual Edge Capture mode in this pair of channels is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Decapen1Val> decapen1{}; 
        namespace Decapen1ValC{
            constexpr Register::FieldValue<decltype(decapen1)::Type,Decapen1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(decapen1)::Type,Decapen1Val::v1> v1{};
        }
        ///Dual Edge Capture Mode Captures For n = 2
        enum class Decap1Val {
            v0=0x00000000,     ///<The dual edge captures are inactive.
            v1=0x00000001,     ///<The dual edge captures are active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Decap1Val> decap1{}; 
        namespace Decap1ValC{
            constexpr Register::FieldValue<decltype(decap1)::Type,Decap1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(decap1)::Type,Decap1Val::v1> v1{};
        }
        ///Deadtime Enable For n = 2
        enum class Dten1Val {
            v0=0x00000000,     ///<The deadtime insertion in this pair of channels is disabled.
            v1=0x00000001,     ///<The deadtime insertion in this pair of channels is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Dten1Val> dten1{}; 
        namespace Dten1ValC{
            constexpr Register::FieldValue<decltype(dten1)::Type,Dten1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dten1)::Type,Dten1Val::v1> v1{};
        }
        ///Synchronization Enable For n = 2
        enum class Syncen1Val {
            v0=0x00000000,     ///<The PWM synchronization in this pair of channels is disabled.
            v1=0x00000001,     ///<The PWM synchronization in this pair of channels is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Syncen1Val> syncen1{}; 
        namespace Syncen1ValC{
            constexpr Register::FieldValue<decltype(syncen1)::Type,Syncen1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(syncen1)::Type,Syncen1Val::v1> v1{};
        }
        ///Fault Control Enable For n = 2
        enum class Faulten1Val {
            v0=0x00000000,     ///<The fault control in this pair of channels is disabled.
            v1=0x00000001,     ///<The fault control in this pair of channels is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Faulten1Val> faulten1{}; 
        namespace Faulten1ValC{
            constexpr Register::FieldValue<decltype(faulten1)::Type,Faulten1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(faulten1)::Type,Faulten1Val::v1> v1{};
        }
        ///Combine Channels For n = 4
        enum class Combine2Val {
            v0=0x00000000,     ///<Channels (n) and (n+1) are independent.
            v1=0x00000001,     ///<Channels (n) and (n+1) are combined.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Combine2Val> combine2{}; 
        namespace Combine2ValC{
            constexpr Register::FieldValue<decltype(combine2)::Type,Combine2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(combine2)::Type,Combine2Val::v1> v1{};
        }
        ///Complement Of Channel (n) For n = 4
        enum class Comp2Val {
            v0=0x00000000,     ///<The channel (n+1) output is the same as the channel (n) output.
            v1=0x00000001,     ///<The channel (n+1) output is the complement of the channel (n) output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Comp2Val> comp2{}; 
        namespace Comp2ValC{
            constexpr Register::FieldValue<decltype(comp2)::Type,Comp2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(comp2)::Type,Comp2Val::v1> v1{};
        }
        ///Dual Edge Capture Mode Enable For n = 4
        enum class Decapen2Val {
            v0=0x00000000,     ///<The Dual Edge Capture mode in this pair of channels is disabled.
            v1=0x00000001,     ///<The Dual Edge Capture mode in this pair of channels is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Decapen2Val> decapen2{}; 
        namespace Decapen2ValC{
            constexpr Register::FieldValue<decltype(decapen2)::Type,Decapen2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(decapen2)::Type,Decapen2Val::v1> v1{};
        }
        ///Dual Edge Capture Mode Captures For n = 4
        enum class Decap2Val {
            v0=0x00000000,     ///<The dual edge captures are inactive.
            v1=0x00000001,     ///<The dual edge captures are active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Decap2Val> decap2{}; 
        namespace Decap2ValC{
            constexpr Register::FieldValue<decltype(decap2)::Type,Decap2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(decap2)::Type,Decap2Val::v1> v1{};
        }
        ///Deadtime Enable For n = 4
        enum class Dten2Val {
            v0=0x00000000,     ///<The deadtime insertion in this pair of channels is disabled.
            v1=0x00000001,     ///<The deadtime insertion in this pair of channels is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Dten2Val> dten2{}; 
        namespace Dten2ValC{
            constexpr Register::FieldValue<decltype(dten2)::Type,Dten2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dten2)::Type,Dten2Val::v1> v1{};
        }
        ///Synchronization Enable For n = 4
        enum class Syncen2Val {
            v0=0x00000000,     ///<The PWM synchronization in this pair of channels is disabled.
            v1=0x00000001,     ///<The PWM synchronization in this pair of channels is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Syncen2Val> syncen2{}; 
        namespace Syncen2ValC{
            constexpr Register::FieldValue<decltype(syncen2)::Type,Syncen2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(syncen2)::Type,Syncen2Val::v1> v1{};
        }
        ///Fault Control Enable For n = 4
        enum class Faulten2Val {
            v0=0x00000000,     ///<The fault control in this pair of channels is disabled.
            v1=0x00000001,     ///<The fault control in this pair of channels is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Faulten2Val> faulten2{}; 
        namespace Faulten2ValC{
            constexpr Register::FieldValue<decltype(faulten2)::Type,Faulten2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(faulten2)::Type,Faulten2Val::v1> v1{};
        }
        ///Combine Channels For n = 6
        enum class Combine3Val {
            v0=0x00000000,     ///<Channels (n) and (n+1) are independent.
            v1=0x00000001,     ///<Channels (n) and (n+1) are combined.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Combine3Val> combine3{}; 
        namespace Combine3ValC{
            constexpr Register::FieldValue<decltype(combine3)::Type,Combine3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(combine3)::Type,Combine3Val::v1> v1{};
        }
        ///Complement Of Channel (n) for n = 6
        enum class Comp3Val {
            v0=0x00000000,     ///<The channel (n+1) output is the same as the channel (n) output.
            v1=0x00000001,     ///<The channel (n+1) output is the complement of the channel (n) output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Comp3Val> comp3{}; 
        namespace Comp3ValC{
            constexpr Register::FieldValue<decltype(comp3)::Type,Comp3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(comp3)::Type,Comp3Val::v1> v1{};
        }
        ///Dual Edge Capture Mode Enable For n = 6
        enum class Decapen3Val {
            v0=0x00000000,     ///<The Dual Edge Capture mode in this pair of channels is disabled.
            v1=0x00000001,     ///<The Dual Edge Capture mode in this pair of channels is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Decapen3Val> decapen3{}; 
        namespace Decapen3ValC{
            constexpr Register::FieldValue<decltype(decapen3)::Type,Decapen3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(decapen3)::Type,Decapen3Val::v1> v1{};
        }
        ///Dual Edge Capture Mode Captures For n = 6
        enum class Decap3Val {
            v0=0x00000000,     ///<The dual edge captures are inactive.
            v1=0x00000001,     ///<The dual edge captures are active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Decap3Val> decap3{}; 
        namespace Decap3ValC{
            constexpr Register::FieldValue<decltype(decap3)::Type,Decap3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(decap3)::Type,Decap3Val::v1> v1{};
        }
        ///Deadtime Enable For n = 6
        enum class Dten3Val {
            v0=0x00000000,     ///<The deadtime insertion in this pair of channels is disabled.
            v1=0x00000001,     ///<The deadtime insertion in this pair of channels is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Dten3Val> dten3{}; 
        namespace Dten3ValC{
            constexpr Register::FieldValue<decltype(dten3)::Type,Dten3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dten3)::Type,Dten3Val::v1> v1{};
        }
        ///Synchronization Enable For n = 6
        enum class Syncen3Val {
            v0=0x00000000,     ///<The PWM synchronization in this pair of channels is disabled.
            v1=0x00000001,     ///<The PWM synchronization in this pair of channels is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Syncen3Val> syncen3{}; 
        namespace Syncen3ValC{
            constexpr Register::FieldValue<decltype(syncen3)::Type,Syncen3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(syncen3)::Type,Syncen3Val::v1> v1{};
        }
        ///Fault Control Enable For n = 6
        enum class Faulten3Val {
            v0=0x00000000,     ///<The fault control in this pair of channels is disabled.
            v1=0x00000001,     ///<The fault control in this pair of channels is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Faulten3Val> faulten3{}; 
        namespace Faulten3ValC{
            constexpr Register::FieldValue<decltype(faulten3)::Type,Faulten3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(faulten3)::Type,Faulten3Val::v1> v1{};
        }
    }
    namespace Ftm1Deadtime{    ///<Deadtime Insertion Control
        using Addr = Register::Address<0x4002a068,0xffffff00,0,unsigned>;
        ///Deadtime Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> dtval{}; 
        ///Deadtime Prescaler Value
        enum class DtpsVal {
            v0x=0x00000000,     ///<Divide the system clock by 1.
            v10=0x00000002,     ///<Divide the system clock by 4.
            v11=0x00000003,     ///<Divide the system clock by 16.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,DtpsVal> dtps{}; 
        namespace DtpsValC{
            constexpr Register::FieldValue<decltype(dtps)::Type,DtpsVal::v0x> v0x{};
            constexpr Register::FieldValue<decltype(dtps)::Type,DtpsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(dtps)::Type,DtpsVal::v11> v11{};
        }
    }
    namespace Ftm1Exttrig{    ///<FTM External Trigger
        using Addr = Register::Address<0x4002a06c,0xffffff00,0,unsigned>;
        ///Channel 2 Trigger Enable
        enum class Ch2trigVal {
            v0=0x00000000,     ///<The generation of the channel trigger is disabled.
            v1=0x00000001,     ///<The generation of the channel trigger is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch2trigVal> ch2trig{}; 
        namespace Ch2trigValC{
            constexpr Register::FieldValue<decltype(ch2trig)::Type,Ch2trigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch2trig)::Type,Ch2trigVal::v1> v1{};
        }
        ///Channel 3 Trigger Enable
        enum class Ch3trigVal {
            v0=0x00000000,     ///<The generation of the channel trigger is disabled.
            v1=0x00000001,     ///<The generation of the channel trigger is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch3trigVal> ch3trig{}; 
        namespace Ch3trigValC{
            constexpr Register::FieldValue<decltype(ch3trig)::Type,Ch3trigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch3trig)::Type,Ch3trigVal::v1> v1{};
        }
        ///Channel 4 Trigger Enable
        enum class Ch4trigVal {
            v0=0x00000000,     ///<The generation of the channel trigger is disabled.
            v1=0x00000001,     ///<The generation of the channel trigger is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch4trigVal> ch4trig{}; 
        namespace Ch4trigValC{
            constexpr Register::FieldValue<decltype(ch4trig)::Type,Ch4trigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch4trig)::Type,Ch4trigVal::v1> v1{};
        }
        ///Channel 5 Trigger Enable
        enum class Ch5trigVal {
            v0=0x00000000,     ///<The generation of the channel trigger is disabled.
            v1=0x00000001,     ///<The generation of the channel trigger is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch5trigVal> ch5trig{}; 
        namespace Ch5trigValC{
            constexpr Register::FieldValue<decltype(ch5trig)::Type,Ch5trigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch5trig)::Type,Ch5trigVal::v1> v1{};
        }
        ///Channel 0 Trigger Enable
        enum class Ch0trigVal {
            v0=0x00000000,     ///<The generation of the channel trigger is disabled.
            v1=0x00000001,     ///<The generation of the channel trigger is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch0trigVal> ch0trig{}; 
        namespace Ch0trigValC{
            constexpr Register::FieldValue<decltype(ch0trig)::Type,Ch0trigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch0trig)::Type,Ch0trigVal::v1> v1{};
        }
        ///Channel 1 Trigger Enable
        enum class Ch1trigVal {
            v0=0x00000000,     ///<The generation of the channel trigger is disabled.
            v1=0x00000001,     ///<The generation of the channel trigger is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch1trigVal> ch1trig{}; 
        namespace Ch1trigValC{
            constexpr Register::FieldValue<decltype(ch1trig)::Type,Ch1trigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch1trig)::Type,Ch1trigVal::v1> v1{};
        }
        ///Initialization Trigger Enable
        enum class InittrigenVal {
            v0=0x00000000,     ///<The generation of initialization trigger is disabled.
            v1=0x00000001,     ///<The generation of initialization trigger is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InittrigenVal> inittrigen{}; 
        namespace InittrigenValC{
            constexpr Register::FieldValue<decltype(inittrigen)::Type,InittrigenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inittrigen)::Type,InittrigenVal::v1> v1{};
        }
        ///Channel Trigger Flag
        enum class TrigfVal {
            v0=0x00000000,     ///<No channel trigger was generated.
            v1=0x00000001,     ///<A channel trigger was generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TrigfVal> trigf{}; 
        namespace TrigfValC{
            constexpr Register::FieldValue<decltype(trigf)::Type,TrigfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trigf)::Type,TrigfVal::v1> v1{};
        }
    }
    namespace Ftm1Pol{    ///<Channels Polarity
        using Addr = Register::Address<0x4002a070,0xffffff00,0,unsigned>;
        ///Channel 0 Polarity
        enum class Pol0Val {
            v0=0x00000000,     ///<The channel polarity is active high.
            v1=0x00000001,     ///<The channel polarity is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pol0Val> pol0{}; 
        namespace Pol0ValC{
            constexpr Register::FieldValue<decltype(pol0)::Type,Pol0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pol0)::Type,Pol0Val::v1> v1{};
        }
        ///Channel 1 Polarity
        enum class Pol1Val {
            v0=0x00000000,     ///<The channel polarity is active high.
            v1=0x00000001,     ///<The channel polarity is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pol1Val> pol1{}; 
        namespace Pol1ValC{
            constexpr Register::FieldValue<decltype(pol1)::Type,Pol1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pol1)::Type,Pol1Val::v1> v1{};
        }
        ///Channel 2 Polarity
        enum class Pol2Val {
            v0=0x00000000,     ///<The channel polarity is active high.
            v1=0x00000001,     ///<The channel polarity is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pol2Val> pol2{}; 
        namespace Pol2ValC{
            constexpr Register::FieldValue<decltype(pol2)::Type,Pol2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pol2)::Type,Pol2Val::v1> v1{};
        }
        ///Channel 3 Polarity
        enum class Pol3Val {
            v0=0x00000000,     ///<The channel polarity is active high.
            v1=0x00000001,     ///<The channel polarity is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pol3Val> pol3{}; 
        namespace Pol3ValC{
            constexpr Register::FieldValue<decltype(pol3)::Type,Pol3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pol3)::Type,Pol3Val::v1> v1{};
        }
        ///Channel 4 Polarity
        enum class Pol4Val {
            v0=0x00000000,     ///<The channel polarity is active high.
            v1=0x00000001,     ///<The channel polarity is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pol4Val> pol4{}; 
        namespace Pol4ValC{
            constexpr Register::FieldValue<decltype(pol4)::Type,Pol4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pol4)::Type,Pol4Val::v1> v1{};
        }
        ///Channel 5 Polarity
        enum class Pol5Val {
            v0=0x00000000,     ///<The channel polarity is active high.
            v1=0x00000001,     ///<The channel polarity is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pol5Val> pol5{}; 
        namespace Pol5ValC{
            constexpr Register::FieldValue<decltype(pol5)::Type,Pol5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pol5)::Type,Pol5Val::v1> v1{};
        }
        ///Channel 6 Polarity
        enum class Pol6Val {
            v0=0x00000000,     ///<The channel polarity is active high.
            v1=0x00000001,     ///<The channel polarity is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pol6Val> pol6{}; 
        namespace Pol6ValC{
            constexpr Register::FieldValue<decltype(pol6)::Type,Pol6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pol6)::Type,Pol6Val::v1> v1{};
        }
        ///Channel 7 Polarity
        enum class Pol7Val {
            v0=0x00000000,     ///<The channel polarity is active high.
            v1=0x00000001,     ///<The channel polarity is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pol7Val> pol7{}; 
        namespace Pol7ValC{
            constexpr Register::FieldValue<decltype(pol7)::Type,Pol7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pol7)::Type,Pol7Val::v1> v1{};
        }
    }
    namespace Ftm1Fms{    ///<Fault Mode Status
        using Addr = Register::Address<0x4002a074,0xffffff10,0,unsigned>;
        ///Fault Detection Flag 0
        enum class Faultf0Val {
            v0=0x00000000,     ///<No fault condition was detected at the fault input.
            v1=0x00000001,     ///<A fault condition was detected at the fault input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Faultf0Val> faultf0{}; 
        namespace Faultf0ValC{
            constexpr Register::FieldValue<decltype(faultf0)::Type,Faultf0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(faultf0)::Type,Faultf0Val::v1> v1{};
        }
        ///Fault Detection Flag 1
        enum class Faultf1Val {
            v0=0x00000000,     ///<No fault condition was detected at the fault input.
            v1=0x00000001,     ///<A fault condition was detected at the fault input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Faultf1Val> faultf1{}; 
        namespace Faultf1ValC{
            constexpr Register::FieldValue<decltype(faultf1)::Type,Faultf1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(faultf1)::Type,Faultf1Val::v1> v1{};
        }
        ///Fault Detection Flag 2
        enum class Faultf2Val {
            v0=0x00000000,     ///<No fault condition was detected at the fault input.
            v1=0x00000001,     ///<A fault condition was detected at the fault input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Faultf2Val> faultf2{}; 
        namespace Faultf2ValC{
            constexpr Register::FieldValue<decltype(faultf2)::Type,Faultf2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(faultf2)::Type,Faultf2Val::v1> v1{};
        }
        ///Fault Detection Flag 3
        enum class Faultf3Val {
            v0=0x00000000,     ///<No fault condition was detected at the fault input.
            v1=0x00000001,     ///<A fault condition was detected at the fault input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Faultf3Val> faultf3{}; 
        namespace Faultf3ValC{
            constexpr Register::FieldValue<decltype(faultf3)::Type,Faultf3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(faultf3)::Type,Faultf3Val::v1> v1{};
        }
        ///Fault Inputs
        enum class FaultinVal {
            v0=0x00000000,     ///<The logic OR of the enabled fault inputs is 0.
            v1=0x00000001,     ///<The logic OR of the enabled fault inputs is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,FaultinVal> faultin{}; 
        namespace FaultinValC{
            constexpr Register::FieldValue<decltype(faultin)::Type,FaultinVal::v0> v0{};
            constexpr Register::FieldValue<decltype(faultin)::Type,FaultinVal::v1> v1{};
        }
        ///Write Protection Enable
        enum class WpenVal {
            v0=0x00000000,     ///<Write protection is disabled. Write protected bits can be written.
            v1=0x00000001,     ///<Write protection is enabled. Write protected bits cannot be written.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WpenVal> wpen{}; 
        namespace WpenValC{
            constexpr Register::FieldValue<decltype(wpen)::Type,WpenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wpen)::Type,WpenVal::v1> v1{};
        }
        ///Fault Detection Flag
        enum class FaultfVal {
            v0=0x00000000,     ///<No fault condition was detected.
            v1=0x00000001,     ///<A fault condition was detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,FaultfVal> faultf{}; 
        namespace FaultfValC{
            constexpr Register::FieldValue<decltype(faultf)::Type,FaultfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(faultf)::Type,FaultfVal::v1> v1{};
        }
    }
    namespace Ftm1Filter{    ///<Input Capture Filter Control
        using Addr = Register::Address<0x4002a078,0xffff0000,0,unsigned>;
        ///Channel 0 Input Filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ch0fval{}; 
        ///Channel 1 Input Filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ch1fval{}; 
        ///Channel 2 Input Filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> ch2fval{}; 
        ///Channel 3 Input Filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ch3fval{}; 
    }
    namespace Ftm1Fltctrl{    ///<Fault Control
        using Addr = Register::Address<0x4002a07c,0xfffff000,0,unsigned>;
        ///Fault Input 0 Enable
        enum class Fault0enVal {
            v0=0x00000000,     ///<Fault input is disabled.
            v1=0x00000001,     ///<Fault input is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Fault0enVal> fault0en{}; 
        namespace Fault0enValC{
            constexpr Register::FieldValue<decltype(fault0en)::Type,Fault0enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fault0en)::Type,Fault0enVal::v1> v1{};
        }
        ///Fault Input 1 Enable
        enum class Fault1enVal {
            v0=0x00000000,     ///<Fault input is disabled.
            v1=0x00000001,     ///<Fault input is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Fault1enVal> fault1en{}; 
        namespace Fault1enValC{
            constexpr Register::FieldValue<decltype(fault1en)::Type,Fault1enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fault1en)::Type,Fault1enVal::v1> v1{};
        }
        ///Fault Input 2 Enable
        enum class Fault2enVal {
            v0=0x00000000,     ///<Fault input is disabled.
            v1=0x00000001,     ///<Fault input is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Fault2enVal> fault2en{}; 
        namespace Fault2enValC{
            constexpr Register::FieldValue<decltype(fault2en)::Type,Fault2enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fault2en)::Type,Fault2enVal::v1> v1{};
        }
        ///Fault Input 3 Enable
        enum class Fault3enVal {
            v0=0x00000000,     ///<Fault input is disabled.
            v1=0x00000001,     ///<Fault input is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Fault3enVal> fault3en{}; 
        namespace Fault3enValC{
            constexpr Register::FieldValue<decltype(fault3en)::Type,Fault3enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fault3en)::Type,Fault3enVal::v1> v1{};
        }
        ///Fault Input 0 Filter Enable
        enum class Ffltr0enVal {
            v0=0x00000000,     ///<Fault input filter is disabled.
            v1=0x00000001,     ///<Fault input filter is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ffltr0enVal> ffltr0en{}; 
        namespace Ffltr0enValC{
            constexpr Register::FieldValue<decltype(ffltr0en)::Type,Ffltr0enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ffltr0en)::Type,Ffltr0enVal::v1> v1{};
        }
        ///Fault Input 1 Filter Enable
        enum class Ffltr1enVal {
            v0=0x00000000,     ///<Fault input filter is disabled.
            v1=0x00000001,     ///<Fault input filter is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ffltr1enVal> ffltr1en{}; 
        namespace Ffltr1enValC{
            constexpr Register::FieldValue<decltype(ffltr1en)::Type,Ffltr1enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ffltr1en)::Type,Ffltr1enVal::v1> v1{};
        }
        ///Fault Input 2 Filter Enable
        enum class Ffltr2enVal {
            v0=0x00000000,     ///<Fault input filter is disabled.
            v1=0x00000001,     ///<Fault input filter is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ffltr2enVal> ffltr2en{}; 
        namespace Ffltr2enValC{
            constexpr Register::FieldValue<decltype(ffltr2en)::Type,Ffltr2enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ffltr2en)::Type,Ffltr2enVal::v1> v1{};
        }
        ///Fault Input 3 Filter Enable
        enum class Ffltr3enVal {
            v0=0x00000000,     ///<Fault input filter is disabled.
            v1=0x00000001,     ///<Fault input filter is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ffltr3enVal> ffltr3en{}; 
        namespace Ffltr3enValC{
            constexpr Register::FieldValue<decltype(ffltr3en)::Type,Ffltr3enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ffltr3en)::Type,Ffltr3enVal::v1> v1{};
        }
        ///Fault Input Filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> ffval{}; 
    }
    namespace Ftm1Qdctrl{    ///<Quadrature Decoder Control And Status
        using Addr = Register::Address<0x4002a080,0xffffff00,0,unsigned>;
        ///Quadrature Decoder Mode Enable
        enum class QuadenVal {
            v0=0x00000000,     ///<Quadrature Decoder mode is disabled.
            v1=0x00000001,     ///<Quadrature Decoder mode is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,QuadenVal> quaden{}; 
        namespace QuadenValC{
            constexpr Register::FieldValue<decltype(quaden)::Type,QuadenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(quaden)::Type,QuadenVal::v1> v1{};
        }
        ///Timer Overflow Direction In Quadrature Decoder Mode
        enum class TofdirVal {
            v0=0x00000000,     ///<TOF bit was set on the bottom of counting. There was an FTM counter decrement and FTM counter changes from its minimum value (CNTIN register) to its maximum value (MOD register).
            v1=0x00000001,     ///<TOF bit was set on the top of counting. There was an FTM counter increment and FTM counter changes from its maximum value (MOD register) to its minimum value (CNTIN register).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TofdirVal> tofdir{}; 
        namespace TofdirValC{
            constexpr Register::FieldValue<decltype(tofdir)::Type,TofdirVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tofdir)::Type,TofdirVal::v1> v1{};
        }
        ///FTM Counter Direction In Quadrature Decoder Mode
        enum class QuadirVal {
            v0=0x00000000,     ///<Counting direction is decreasing (FTM counter decrement).
            v1=0x00000001,     ///<Counting direction is increasing (FTM counter increment).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,QuadirVal> quadir{}; 
        namespace QuadirValC{
            constexpr Register::FieldValue<decltype(quadir)::Type,QuadirVal::v0> v0{};
            constexpr Register::FieldValue<decltype(quadir)::Type,QuadirVal::v1> v1{};
        }
        ///Quadrature Decoder Mode
        enum class QuadmodeVal {
            v0=0x00000000,     ///<Phase A and phase B encoding mode.
            v1=0x00000001,     ///<Count and direction encoding mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,QuadmodeVal> quadmode{}; 
        namespace QuadmodeValC{
            constexpr Register::FieldValue<decltype(quadmode)::Type,QuadmodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(quadmode)::Type,QuadmodeVal::v1> v1{};
        }
        ///Phase B Input Polarity
        enum class PhbpolVal {
            v0=0x00000000,     ///<Normal polarity. Phase B input signal is not inverted before identifying the rising and falling edges of this signal.
            v1=0x00000001,     ///<Inverted polarity. Phase B input signal is inverted before identifying the rising and falling edges of this signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PhbpolVal> phbpol{}; 
        namespace PhbpolValC{
            constexpr Register::FieldValue<decltype(phbpol)::Type,PhbpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(phbpol)::Type,PhbpolVal::v1> v1{};
        }
        ///Phase A Input Polarity
        enum class PhapolVal {
            v0=0x00000000,     ///<Normal polarity. Phase A input signal is not inverted before identifying the rising and falling edges of this signal.
            v1=0x00000001,     ///<Inverted polarity. Phase A input signal is inverted before identifying the rising and falling edges of this signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,PhapolVal> phapol{}; 
        namespace PhapolValC{
            constexpr Register::FieldValue<decltype(phapol)::Type,PhapolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(phapol)::Type,PhapolVal::v1> v1{};
        }
        ///Phase B Input Filter Enable
        enum class PhbfltrenVal {
            v0=0x00000000,     ///<Phase B input filter is disabled.
            v1=0x00000001,     ///<Phase B input filter is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PhbfltrenVal> phbfltren{}; 
        namespace PhbfltrenValC{
            constexpr Register::FieldValue<decltype(phbfltren)::Type,PhbfltrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(phbfltren)::Type,PhbfltrenVal::v1> v1{};
        }
        ///Phase A Input Filter Enable
        enum class PhafltrenVal {
            v0=0x00000000,     ///<Phase A input filter is disabled.
            v1=0x00000001,     ///<Phase A input filter is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PhafltrenVal> phafltren{}; 
        namespace PhafltrenValC{
            constexpr Register::FieldValue<decltype(phafltren)::Type,PhafltrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(phafltren)::Type,PhafltrenVal::v1> v1{};
        }
    }
    namespace Ftm1Conf{    ///<Configuration
        using Addr = Register::Address<0x4002a084,0xfffff920,0,unsigned>;
        ///TOF Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> numtof{}; 
        ///BDM Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> bdmmode{}; 
        ///Global Time Base Enable
        enum class GtbeenVal {
            v0=0x00000000,     ///<Use of an external global time base is disabled.
            v1=0x00000001,     ///<Use of an external global time base is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,GtbeenVal> gtbeen{}; 
        namespace GtbeenValC{
            constexpr Register::FieldValue<decltype(gtbeen)::Type,GtbeenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gtbeen)::Type,GtbeenVal::v1> v1{};
        }
        ///Global Time Base Output
        enum class GtbeoutVal {
            v0=0x00000000,     ///<A global time base signal generation is disabled.
            v1=0x00000001,     ///<A global time base signal generation is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,GtbeoutVal> gtbeout{}; 
        namespace GtbeoutValC{
            constexpr Register::FieldValue<decltype(gtbeout)::Type,GtbeoutVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gtbeout)::Type,GtbeoutVal::v1> v1{};
        }
    }
    namespace Ftm1Fltpol{    ///<FTM Fault Input Polarity
        using Addr = Register::Address<0x4002a088,0xfffffff0,0,unsigned>;
        ///Fault Input 0 Polarity
        enum class Flt0polVal {
            v0=0x00000000,     ///<The fault input polarity is active high. A one at the fault input indicates a fault.
            v1=0x00000001,     ///<The fault input polarity is active low. A zero at the fault input indicates a fault.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Flt0polVal> flt0pol{}; 
        namespace Flt0polValC{
            constexpr Register::FieldValue<decltype(flt0pol)::Type,Flt0polVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flt0pol)::Type,Flt0polVal::v1> v1{};
        }
        ///Fault Input 1 Polarity
        enum class Flt1polVal {
            v0=0x00000000,     ///<The fault input polarity is active high. A one at the fault input indicates a fault.
            v1=0x00000001,     ///<The fault input polarity is active low. A zero at the fault input indicates a fault.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Flt1polVal> flt1pol{}; 
        namespace Flt1polValC{
            constexpr Register::FieldValue<decltype(flt1pol)::Type,Flt1polVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flt1pol)::Type,Flt1polVal::v1> v1{};
        }
        ///Fault Input 2 Polarity
        enum class Flt2polVal {
            v0=0x00000000,     ///<The fault input polarity is active high. A one at the fault input indicates a fault.
            v1=0x00000001,     ///<The fault input polarity is active low. A zero at the fault input indicates a fault.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Flt2polVal> flt2pol{}; 
        namespace Flt2polValC{
            constexpr Register::FieldValue<decltype(flt2pol)::Type,Flt2polVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flt2pol)::Type,Flt2polVal::v1> v1{};
        }
        ///Fault Input 3 Polarity
        enum class Flt3polVal {
            v0=0x00000000,     ///<The fault input polarity is active high. A one at the fault input indicates a fault.
            v1=0x00000001,     ///<The fault input polarity is active low. A zero at the fault input indicates a fault.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Flt3polVal> flt3pol{}; 
        namespace Flt3polValC{
            constexpr Register::FieldValue<decltype(flt3pol)::Type,Flt3polVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flt3pol)::Type,Flt3polVal::v1> v1{};
        }
    }
    namespace Ftm1Synconf{    ///<Synchronization Configuration
        using Addr = Register::Address<0x4002a08c,0xffe0e04a,0,unsigned>;
        ///Hardware Trigger Mode
        enum class HwtrigmodeVal {
            v0=0x00000000,     ///<FTM clears the TRIGj bit when the hardware trigger j is detected.
            v1=0x00000001,     ///<FTM does not clear the TRIGj bit when the hardware trigger j is detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,HwtrigmodeVal> hwtrigmode{}; 
        namespace HwtrigmodeValC{
            constexpr Register::FieldValue<decltype(hwtrigmode)::Type,HwtrigmodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hwtrigmode)::Type,HwtrigmodeVal::v1> v1{};
        }
        ///CNTIN Register Synchronization
        enum class CntincVal {
            v0=0x00000000,     ///<CNTIN register is updated with its buffer value at all rising edges of system clock.
            v1=0x00000001,     ///<CNTIN register is updated with its buffer value by the PWM synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CntincVal> cntinc{}; 
        namespace CntincValC{
            constexpr Register::FieldValue<decltype(cntinc)::Type,CntincVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cntinc)::Type,CntincVal::v1> v1{};
        }
        ///INVCTRL Register Synchronization
        enum class InvcVal {
            v0=0x00000000,     ///<INVCTRL register is updated with its buffer value at all rising edges of system clock.
            v1=0x00000001,     ///<INVCTRL register is updated with its buffer value by the PWM synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,InvcVal> invc{}; 
        namespace InvcValC{
            constexpr Register::FieldValue<decltype(invc)::Type,InvcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(invc)::Type,InvcVal::v1> v1{};
        }
        ///SWOCTRL Register Synchronization
        enum class SwocVal {
            v0=0x00000000,     ///<SWOCTRL register is updated with its buffer value at all rising edges of system clock.
            v1=0x00000001,     ///<SWOCTRL register is updated with its buffer value by the PWM synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SwocVal> swoc{}; 
        namespace SwocValC{
            constexpr Register::FieldValue<decltype(swoc)::Type,SwocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swoc)::Type,SwocVal::v1> v1{};
        }
        ///Synchronization Mode
        enum class SyncmodeVal {
            v0=0x00000000,     ///<Legacy PWM synchronization is selected.
            v1=0x00000001,     ///<Enhanced PWM synchronization is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SyncmodeVal> syncmode{}; 
        namespace SyncmodeValC{
            constexpr Register::FieldValue<decltype(syncmode)::Type,SyncmodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(syncmode)::Type,SyncmodeVal::v1> v1{};
        }
        ///no description available
        enum class SwrstcntVal {
            v0=0x00000000,     ///<The software trigger does not activate the FTM counter synchronization.
            v1=0x00000001,     ///<The software trigger activates the FTM counter synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SwrstcntVal> swrstcnt{}; 
        namespace SwrstcntValC{
            constexpr Register::FieldValue<decltype(swrstcnt)::Type,SwrstcntVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swrstcnt)::Type,SwrstcntVal::v1> v1{};
        }
        ///no description available
        enum class SwwrbufVal {
            v0=0x00000000,     ///<The software trigger does not activate MOD, CNTIN, and CV registers synchronization.
            v1=0x00000001,     ///<The software trigger activates MOD, CNTIN, and CV registers synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SwwrbufVal> swwrbuf{}; 
        namespace SwwrbufValC{
            constexpr Register::FieldValue<decltype(swwrbuf)::Type,SwwrbufVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swwrbuf)::Type,SwwrbufVal::v1> v1{};
        }
        ///no description available
        enum class SwomVal {
            v0=0x00000000,     ///<The software trigger does not activate the OUTMASK register synchronization.
            v1=0x00000001,     ///<The software trigger activates the OUTMASK register synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,SwomVal> swom{}; 
        namespace SwomValC{
            constexpr Register::FieldValue<decltype(swom)::Type,SwomVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swom)::Type,SwomVal::v1> v1{};
        }
        ///no description available
        enum class SwinvcVal {
            v0=0x00000000,     ///<The software trigger does not activate the INVCTRL register synchronization.
            v1=0x00000001,     ///<The software trigger activates the INVCTRL register synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,SwinvcVal> swinvc{}; 
        namespace SwinvcValC{
            constexpr Register::FieldValue<decltype(swinvc)::Type,SwinvcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swinvc)::Type,SwinvcVal::v1> v1{};
        }
        ///no description available
        enum class SwsocVal {
            v0=0x00000000,     ///<The software trigger does not activate the SWOCTRL register synchronization.
            v1=0x00000001,     ///<The software trigger activates the SWOCTRL register synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,SwsocVal> swsoc{}; 
        namespace SwsocValC{
            constexpr Register::FieldValue<decltype(swsoc)::Type,SwsocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swsoc)::Type,SwsocVal::v1> v1{};
        }
        ///no description available
        enum class HwrstcntVal {
            v0=0x00000000,     ///<A hardware trigger does not activate the FTM counter synchronization.
            v1=0x00000001,     ///<A hardware trigger activates the FTM counter synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,HwrstcntVal> hwrstcnt{}; 
        namespace HwrstcntValC{
            constexpr Register::FieldValue<decltype(hwrstcnt)::Type,HwrstcntVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hwrstcnt)::Type,HwrstcntVal::v1> v1{};
        }
        ///no description available
        enum class HwwrbufVal {
            v0=0x00000000,     ///<A hardware trigger does not activate MOD, CNTIN, and CV registers synchronization.
            v1=0x00000001,     ///<A hardware trigger activates MOD, CNTIN, and CV registers synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,HwwrbufVal> hwwrbuf{}; 
        namespace HwwrbufValC{
            constexpr Register::FieldValue<decltype(hwwrbuf)::Type,HwwrbufVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hwwrbuf)::Type,HwwrbufVal::v1> v1{};
        }
        ///no description available
        enum class HwomVal {
            v0=0x00000000,     ///<A hardware trigger does not activate the OUTMASK register synchronization.
            v1=0x00000001,     ///<A hardware trigger activates the OUTMASK register synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,HwomVal> hwom{}; 
        namespace HwomValC{
            constexpr Register::FieldValue<decltype(hwom)::Type,HwomVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hwom)::Type,HwomVal::v1> v1{};
        }
        ///no description available
        enum class HwinvcVal {
            v0=0x00000000,     ///<A hardware trigger does not activate the INVCTRL register synchronization.
            v1=0x00000001,     ///<A hardware trigger activates the INVCTRL register synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,HwinvcVal> hwinvc{}; 
        namespace HwinvcValC{
            constexpr Register::FieldValue<decltype(hwinvc)::Type,HwinvcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hwinvc)::Type,HwinvcVal::v1> v1{};
        }
        ///no description available
        enum class HwsocVal {
            v0=0x00000000,     ///<A hardware trigger does not activate the SWOCTRL register synchronization.
            v1=0x00000001,     ///<A hardware trigger activates the SWOCTRL register synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,HwsocVal> hwsoc{}; 
        namespace HwsocValC{
            constexpr Register::FieldValue<decltype(hwsoc)::Type,HwsocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hwsoc)::Type,HwsocVal::v1> v1{};
        }
    }
    namespace Ftm1Invctrl{    ///<FTM Inverting Control
        using Addr = Register::Address<0x4002a090,0xfffffff0,0,unsigned>;
        ///Pair Channels 0 Inverting Enable
        enum class Inv0enVal {
            v0=0x00000000,     ///<Inverting is disabled.
            v1=0x00000001,     ///<Inverting is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Inv0enVal> inv0en{}; 
        namespace Inv0enValC{
            constexpr Register::FieldValue<decltype(inv0en)::Type,Inv0enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inv0en)::Type,Inv0enVal::v1> v1{};
        }
        ///Pair Channels 1 Inverting Enable
        enum class Inv1enVal {
            v0=0x00000000,     ///<Inverting is disabled.
            v1=0x00000001,     ///<Inverting is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Inv1enVal> inv1en{}; 
        namespace Inv1enValC{
            constexpr Register::FieldValue<decltype(inv1en)::Type,Inv1enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inv1en)::Type,Inv1enVal::v1> v1{};
        }
        ///Pair Channels 2 Inverting Enable
        enum class Inv2enVal {
            v0=0x00000000,     ///<Inverting is disabled.
            v1=0x00000001,     ///<Inverting is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Inv2enVal> inv2en{}; 
        namespace Inv2enValC{
            constexpr Register::FieldValue<decltype(inv2en)::Type,Inv2enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inv2en)::Type,Inv2enVal::v1> v1{};
        }
        ///Pair Channels 3 Inverting Enable
        enum class Inv3enVal {
            v0=0x00000000,     ///<Inverting is disabled.
            v1=0x00000001,     ///<Inverting is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Inv3enVal> inv3en{}; 
        namespace Inv3enValC{
            constexpr Register::FieldValue<decltype(inv3en)::Type,Inv3enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inv3en)::Type,Inv3enVal::v1> v1{};
        }
    }
    namespace Ftm1Swoctrl{    ///<FTM Software Output Control
        using Addr = Register::Address<0x4002a094,0xffff0000,0,unsigned>;
        ///Channel 0 Software Output Control Enable
        enum class Ch0ocVal {
            v0=0x00000000,     ///<The channel output is not affected by software output control.
            v1=0x00000001,     ///<The channel output is affected by software output control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0ocVal> ch0oc{}; 
        namespace Ch0ocValC{
            constexpr Register::FieldValue<decltype(ch0oc)::Type,Ch0ocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch0oc)::Type,Ch0ocVal::v1> v1{};
        }
        ///Channel 1 Software Output Control Enable
        enum class Ch1ocVal {
            v0=0x00000000,     ///<The channel output is not affected by software output control.
            v1=0x00000001,     ///<The channel output is affected by software output control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1ocVal> ch1oc{}; 
        namespace Ch1ocValC{
            constexpr Register::FieldValue<decltype(ch1oc)::Type,Ch1ocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch1oc)::Type,Ch1ocVal::v1> v1{};
        }
        ///Channel 2 Software Output Control Enable
        enum class Ch2ocVal {
            v0=0x00000000,     ///<The channel output is not affected by software output control.
            v1=0x00000001,     ///<The channel output is affected by software output control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2ocVal> ch2oc{}; 
        namespace Ch2ocValC{
            constexpr Register::FieldValue<decltype(ch2oc)::Type,Ch2ocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch2oc)::Type,Ch2ocVal::v1> v1{};
        }
        ///Channel 3 Software Output Control Enable
        enum class Ch3ocVal {
            v0=0x00000000,     ///<The channel output is not affected by software output control.
            v1=0x00000001,     ///<The channel output is affected by software output control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3ocVal> ch3oc{}; 
        namespace Ch3ocValC{
            constexpr Register::FieldValue<decltype(ch3oc)::Type,Ch3ocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch3oc)::Type,Ch3ocVal::v1> v1{};
        }
        ///Channel 4 Software Output Control Enable
        enum class Ch4ocVal {
            v0=0x00000000,     ///<The channel output is not affected by software output control.
            v1=0x00000001,     ///<The channel output is affected by software output control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4ocVal> ch4oc{}; 
        namespace Ch4ocValC{
            constexpr Register::FieldValue<decltype(ch4oc)::Type,Ch4ocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch4oc)::Type,Ch4ocVal::v1> v1{};
        }
        ///Channel 5 Software Output Control Enable
        enum class Ch5ocVal {
            v0=0x00000000,     ///<The channel output is not affected by software output control.
            v1=0x00000001,     ///<The channel output is affected by software output control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5ocVal> ch5oc{}; 
        namespace Ch5ocValC{
            constexpr Register::FieldValue<decltype(ch5oc)::Type,Ch5ocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch5oc)::Type,Ch5ocVal::v1> v1{};
        }
        ///Channel 6 Software Output Control Enable
        enum class Ch6ocVal {
            v0=0x00000000,     ///<The channel output is not affected by software output control.
            v1=0x00000001,     ///<The channel output is affected by software output control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6ocVal> ch6oc{}; 
        namespace Ch6ocValC{
            constexpr Register::FieldValue<decltype(ch6oc)::Type,Ch6ocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch6oc)::Type,Ch6ocVal::v1> v1{};
        }
        ///Channel 7 Software Output Control Enable
        enum class Ch7ocVal {
            v0=0x00000000,     ///<The channel output is not affected by software output control.
            v1=0x00000001,     ///<The channel output is affected by software output control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7ocVal> ch7oc{}; 
        namespace Ch7ocValC{
            constexpr Register::FieldValue<decltype(ch7oc)::Type,Ch7ocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch7oc)::Type,Ch7ocVal::v1> v1{};
        }
        ///Channel 0 Software Output Control Value
        enum class Ch0ocvVal {
            v0=0x00000000,     ///<The software output control forces 0 to the channel output.
            v1=0x00000001,     ///<The software output control forces 1 to the channel output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch0ocvVal> ch0ocv{}; 
        namespace Ch0ocvValC{
            constexpr Register::FieldValue<decltype(ch0ocv)::Type,Ch0ocvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch0ocv)::Type,Ch0ocvVal::v1> v1{};
        }
        ///Channel 1 Software Output Control Value
        enum class Ch1ocvVal {
            v0=0x00000000,     ///<The software output control forces 0 to the channel output.
            v1=0x00000001,     ///<The software output control forces 1 to the channel output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch1ocvVal> ch1ocv{}; 
        namespace Ch1ocvValC{
            constexpr Register::FieldValue<decltype(ch1ocv)::Type,Ch1ocvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch1ocv)::Type,Ch1ocvVal::v1> v1{};
        }
        ///Channel 2 Software Output Control Value
        enum class Ch2ocvVal {
            v0=0x00000000,     ///<The software output control forces 0 to the channel output.
            v1=0x00000001,     ///<The software output control forces 1 to the channel output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch2ocvVal> ch2ocv{}; 
        namespace Ch2ocvValC{
            constexpr Register::FieldValue<decltype(ch2ocv)::Type,Ch2ocvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch2ocv)::Type,Ch2ocvVal::v1> v1{};
        }
        ///Channel 3 Software Output Control Value
        enum class Ch3ocvVal {
            v0=0x00000000,     ///<The software output control forces 0 to the channel output.
            v1=0x00000001,     ///<The software output control forces 1 to the channel output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch3ocvVal> ch3ocv{}; 
        namespace Ch3ocvValC{
            constexpr Register::FieldValue<decltype(ch3ocv)::Type,Ch3ocvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch3ocv)::Type,Ch3ocvVal::v1> v1{};
        }
        ///Channel 4 Software Output Control Value
        enum class Ch4ocvVal {
            v0=0x00000000,     ///<The software output control forces 0 to the channel output.
            v1=0x00000001,     ///<The software output control forces 1 to the channel output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch4ocvVal> ch4ocv{}; 
        namespace Ch4ocvValC{
            constexpr Register::FieldValue<decltype(ch4ocv)::Type,Ch4ocvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch4ocv)::Type,Ch4ocvVal::v1> v1{};
        }
        ///Channel 5 Software Output Control Value
        enum class Ch5ocvVal {
            v0=0x00000000,     ///<The software output control forces 0 to the channel output.
            v1=0x00000001,     ///<The software output control forces 1 to the channel output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch5ocvVal> ch5ocv{}; 
        namespace Ch5ocvValC{
            constexpr Register::FieldValue<decltype(ch5ocv)::Type,Ch5ocvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch5ocv)::Type,Ch5ocvVal::v1> v1{};
        }
        ///Channel 6 Software Output Control Value
        enum class Ch6ocvVal {
            v0=0x00000000,     ///<The software output control forces 0 to the channel output.
            v1=0x00000001,     ///<The software output control forces 1 to the channel output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch6ocvVal> ch6ocv{}; 
        namespace Ch6ocvValC{
            constexpr Register::FieldValue<decltype(ch6ocv)::Type,Ch6ocvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch6ocv)::Type,Ch6ocvVal::v1> v1{};
        }
        ///Channel 7 Software Output Control Value
        enum class Ch7ocvVal {
            v0=0x00000000,     ///<The software output control forces 0 to the channel output.
            v1=0x00000001,     ///<The software output control forces 1 to the channel output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch7ocvVal> ch7ocv{}; 
        namespace Ch7ocvValC{
            constexpr Register::FieldValue<decltype(ch7ocv)::Type,Ch7ocvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch7ocv)::Type,Ch7ocvVal::v1> v1{};
        }
    }
    namespace Ftm1Pwmload{    ///<FTM PWM Load
        using Addr = Register::Address<0x4002a098,0xfffffd00,0,unsigned>;
        ///Channel 0 Select
        enum class Ch0selVal {
            v0=0x00000000,     ///<Do not include the channel in the matching process.
            v1=0x00000001,     ///<Include the channel in the matching process.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0selVal> ch0sel{}; 
        namespace Ch0selValC{
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::v1> v1{};
        }
        ///Channel 1 Select
        enum class Ch1selVal {
            v0=0x00000000,     ///<Do not include the channel in the matching process.
            v1=0x00000001,     ///<Include the channel in the matching process.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1selVal> ch1sel{}; 
        namespace Ch1selValC{
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::v1> v1{};
        }
        ///Channel 2 Select
        enum class Ch2selVal {
            v0=0x00000000,     ///<Do not include the channel in the matching process.
            v1=0x00000001,     ///<Include the channel in the matching process.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2selVal> ch2sel{}; 
        namespace Ch2selValC{
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::v1> v1{};
        }
        ///Channel 3 Select
        enum class Ch3selVal {
            v0=0x00000000,     ///<Do not include the channel in the matching process.
            v1=0x00000001,     ///<Include the channel in the matching process.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3selVal> ch3sel{}; 
        namespace Ch3selValC{
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::v1> v1{};
        }
        ///Channel 4 Select
        enum class Ch4selVal {
            v0=0x00000000,     ///<Do not include the channel in the matching process.
            v1=0x00000001,     ///<Include the channel in the matching process.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4selVal> ch4sel{}; 
        namespace Ch4selValC{
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::v1> v1{};
        }
        ///Channel 5 Select
        enum class Ch5selVal {
            v0=0x00000000,     ///<Do not include the channel in the matching process.
            v1=0x00000001,     ///<Include the channel in the matching process.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5selVal> ch5sel{}; 
        namespace Ch5selValC{
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::v1> v1{};
        }
        ///Channel 6 Select
        enum class Ch6selVal {
            v0=0x00000000,     ///<Do not include the channel in the matching process.
            v1=0x00000001,     ///<Include the channel in the matching process.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6selVal> ch6sel{}; 
        namespace Ch6selValC{
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::v1> v1{};
        }
        ///Channel 7 Select
        enum class Ch7selVal {
            v0=0x00000000,     ///<Do not include the channel in the matching process.
            v1=0x00000001,     ///<Include the channel in the matching process.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7selVal> ch7sel{}; 
        namespace Ch7selValC{
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::v1> v1{};
        }
        ///Load Enable
        enum class LdokVal {
            v0=0x00000000,     ///<Loading updated values is disabled.
            v1=0x00000001,     ///<Loading updated values is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,LdokVal> ldok{}; 
        namespace LdokValC{
            constexpr Register::FieldValue<decltype(ldok)::Type,LdokVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ldok)::Type,LdokVal::v1> v1{};
        }
    }
}
