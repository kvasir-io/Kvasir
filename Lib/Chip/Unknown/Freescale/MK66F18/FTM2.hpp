#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//FlexTimer Module
    namespace Ftm2Sc{    ///<Status And Control
        using Addr = Register::Address<0x4003a000,0xffffff00,0,unsigned>;
        ///Prescale Factor Selection
        enum class psVal {
            v000=0x00000000,     ///<Divide by 1
            v001=0x00000001,     ///<Divide by 2
            v010=0x00000002,     ///<Divide by 4
            v011=0x00000003,     ///<Divide by 8
            v100=0x00000004,     ///<Divide by 16
            v101=0x00000005,     ///<Divide by 32
            v110=0x00000006,     ///<Divide by 64
            v111=0x00000007,     ///<Divide by 128
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v000> v000{};
            constexpr MPL::Value<psVal,psVal::v001> v001{};
            constexpr MPL::Value<psVal,psVal::v010> v010{};
            constexpr MPL::Value<psVal,psVal::v011> v011{};
            constexpr MPL::Value<psVal,psVal::v100> v100{};
            constexpr MPL::Value<psVal,psVal::v101> v101{};
            constexpr MPL::Value<psVal,psVal::v110> v110{};
            constexpr MPL::Value<psVal,psVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Clock Source Selection
        enum class clksVal {
            v00=0x00000000,     ///<No clock selected. This in effect disables the FTM counter.
            v01=0x00000001,     ///<System clock
            v10=0x00000002,     ///<Fixed frequency clock
            v11=0x00000003,     ///<External clock
        };
        namespace clksValC{
            constexpr MPL::Value<clksVal,clksVal::v00> v00{};
            constexpr MPL::Value<clksVal,clksVal::v01> v01{};
            constexpr MPL::Value<clksVal,clksVal::v10> v10{};
            constexpr MPL::Value<clksVal,clksVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,clksVal> clks{}; 
        ///Center-Aligned PWM Select
        enum class cpwmsVal {
            v0=0x00000000,     ///<FTM counter operates in Up Counting mode.
            v1=0x00000001,     ///<FTM counter operates in Up-Down Counting mode.
        };
        namespace cpwmsValC{
            constexpr MPL::Value<cpwmsVal,cpwmsVal::v0> v0{};
            constexpr MPL::Value<cpwmsVal,cpwmsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,cpwmsVal> cpwms{}; 
        ///Timer Overflow Interrupt Enable
        enum class toieVal {
            v0=0x00000000,     ///<Disable TOF interrupts. Use software polling.
            v1=0x00000001,     ///<Enable TOF interrupts. An interrupt is generated when TOF equals one.
        };
        namespace toieValC{
            constexpr MPL::Value<toieVal,toieVal::v0> v0{};
            constexpr MPL::Value<toieVal,toieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,toieVal> toie{}; 
        ///Timer Overflow Flag
        enum class tofVal {
            v0=0x00000000,     ///<FTM counter has not overflowed.
            v1=0x00000001,     ///<FTM counter has overflowed.
        };
        namespace tofValC{
            constexpr MPL::Value<tofVal,tofVal::v0> v0{};
            constexpr MPL::Value<tofVal,tofVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tofVal> tof{}; 
    }
    namespace Ftm2Cnt{    ///<Counter
        using Addr = Register::Address<0x4003a004,0xffff0000,0,unsigned>;
        ///Counter Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Ftm2Mod{    ///<Modulo
        using Addr = Register::Address<0x4003a008,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
    }
    namespace Ftm2C0sc{    ///<Channel (n) Status And Control
        using Addr = Register::Address<0x4003a00c,0xffffff02,0,unsigned>;
        ///DMA Enable
        enum class dmaVal {
            v0=0x00000000,     ///<Disable DMA transfers.
            v1=0x00000001,     ///<Enable DMA transfers.
        };
        namespace dmaValC{
            constexpr MPL::Value<dmaVal,dmaVal::v0> v0{};
            constexpr MPL::Value<dmaVal,dmaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dmaVal> dma{}; 
        ///Edge or Level Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> elsa{}; 
        ///Edge or Level Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> elsb{}; 
        ///Channel Mode Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msa{}; 
        ///Channel Mode Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msb{}; 
        ///Channel Interrupt Enable
        enum class chieVal {
            v0=0x00000000,     ///<Disable channel interrupts. Use software polling.
            v1=0x00000001,     ///<Enable channel interrupts.
        };
        namespace chieValC{
            constexpr MPL::Value<chieVal,chieVal::v0> v0{};
            constexpr MPL::Value<chieVal,chieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,chieVal> chie{}; 
        ///Channel Flag
        enum class chfVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        namespace chfValC{
            constexpr MPL::Value<chfVal,chfVal::v0> v0{};
            constexpr MPL::Value<chfVal,chfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,chfVal> chf{}; 
    }
    namespace Ftm2C1sc{    ///<Channel (n) Status And Control
        using Addr = Register::Address<0x4003a014,0xffffff02,0,unsigned>;
        ///DMA Enable
        enum class dmaVal {
            v0=0x00000000,     ///<Disable DMA transfers.
            v1=0x00000001,     ///<Enable DMA transfers.
        };
        namespace dmaValC{
            constexpr MPL::Value<dmaVal,dmaVal::v0> v0{};
            constexpr MPL::Value<dmaVal,dmaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dmaVal> dma{}; 
        ///Edge or Level Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> elsa{}; 
        ///Edge or Level Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> elsb{}; 
        ///Channel Mode Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msa{}; 
        ///Channel Mode Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msb{}; 
        ///Channel Interrupt Enable
        enum class chieVal {
            v0=0x00000000,     ///<Disable channel interrupts. Use software polling.
            v1=0x00000001,     ///<Enable channel interrupts.
        };
        namespace chieValC{
            constexpr MPL::Value<chieVal,chieVal::v0> v0{};
            constexpr MPL::Value<chieVal,chieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,chieVal> chie{}; 
        ///Channel Flag
        enum class chfVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        namespace chfValC{
            constexpr MPL::Value<chfVal,chfVal::v0> v0{};
            constexpr MPL::Value<chfVal,chfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,chfVal> chf{}; 
    }
    namespace Ftm2C0v{    ///<Channel (n) Value
        using Addr = Register::Address<0x4003a010,0xffff0000,0,unsigned>;
        ///Channel Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace Ftm2C1v{    ///<Channel (n) Value
        using Addr = Register::Address<0x4003a018,0xffff0000,0,unsigned>;
        ///Channel Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace Ftm2Cntin{    ///<Counter Initial Value
        using Addr = Register::Address<0x4003a04c,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> init{}; 
    }
    namespace Ftm2Status{    ///<Capture And Compare Status
        using Addr = Register::Address<0x4003a050,0xffffff00,0,unsigned>;
        ///Channel 0 Flag
        enum class ch0fVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        namespace ch0fValC{
            constexpr MPL::Value<ch0fVal,ch0fVal::v0> v0{};
            constexpr MPL::Value<ch0fVal,ch0fVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0fVal> ch0f{}; 
        ///Channel 1 Flag
        enum class ch1fVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        namespace ch1fValC{
            constexpr MPL::Value<ch1fVal,ch1fVal::v0> v0{};
            constexpr MPL::Value<ch1fVal,ch1fVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1fVal> ch1f{}; 
        ///Channel 2 Flag
        enum class ch2fVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        namespace ch2fValC{
            constexpr MPL::Value<ch2fVal,ch2fVal::v0> v0{};
            constexpr MPL::Value<ch2fVal,ch2fVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2fVal> ch2f{}; 
        ///Channel 3 Flag
        enum class ch3fVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        namespace ch3fValC{
            constexpr MPL::Value<ch3fVal,ch3fVal::v0> v0{};
            constexpr MPL::Value<ch3fVal,ch3fVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3fVal> ch3f{}; 
        ///Channel 4 Flag
        enum class ch4fVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        namespace ch4fValC{
            constexpr MPL::Value<ch4fVal,ch4fVal::v0> v0{};
            constexpr MPL::Value<ch4fVal,ch4fVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4fVal> ch4f{}; 
        ///Channel 5 Flag
        enum class ch5fVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        namespace ch5fValC{
            constexpr MPL::Value<ch5fVal,ch5fVal::v0> v0{};
            constexpr MPL::Value<ch5fVal,ch5fVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5fVal> ch5f{}; 
        ///Channel 6 Flag
        enum class ch6fVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        namespace ch6fValC{
            constexpr MPL::Value<ch6fVal,ch6fVal::v0> v0{};
            constexpr MPL::Value<ch6fVal,ch6fVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6fVal> ch6f{}; 
        ///Channel 7 Flag
        enum class ch7fVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        namespace ch7fValC{
            constexpr MPL::Value<ch7fVal,ch7fVal::v0> v0{};
            constexpr MPL::Value<ch7fVal,ch7fVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7fVal> ch7f{}; 
    }
    namespace Ftm2Mode{    ///<Features Mode Selection
        using Addr = Register::Address<0x4003a054,0xffffff00,0,unsigned>;
        ///FTM Enable
        enum class ftmenVal {
            v0=0x00000000,     ///<Only the TPM-compatible registers (first set of registers) can be used without any restriction. Do not use the FTM-specific registers.
            v1=0x00000001,     ///<All registers including the FTM-specific registers (second set of registers) are available for use with no restrictions.
        };
        namespace ftmenValC{
            constexpr MPL::Value<ftmenVal,ftmenVal::v0> v0{};
            constexpr MPL::Value<ftmenVal,ftmenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ftmenVal> ftmen{}; 
        ///Initialize The Channels Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> init{}; 
        ///Write Protection Disable
        enum class wpdisVal {
            v0=0x00000000,     ///<Write protection is enabled.
            v1=0x00000001,     ///<Write protection is disabled.
        };
        namespace wpdisValC{
            constexpr MPL::Value<wpdisVal,wpdisVal::v0> v0{};
            constexpr MPL::Value<wpdisVal,wpdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wpdisVal> wpdis{}; 
        ///PWM Synchronization Mode
        enum class pwmsyncVal {
            v0=0x00000000,     ///<No restrictions. Software and hardware triggers can be used by MOD, CnV, OUTMASK, and FTM counter synchronization.
            v1=0x00000001,     ///<Software trigger can only be used by MOD and CnV synchronization, and hardware triggers can only be used by OUTMASK and FTM counter synchronization.
        };
        namespace pwmsyncValC{
            constexpr MPL::Value<pwmsyncVal,pwmsyncVal::v0> v0{};
            constexpr MPL::Value<pwmsyncVal,pwmsyncVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pwmsyncVal> pwmsync{}; 
        ///Capture Test Mode Enable
        enum class captestVal {
            v0=0x00000000,     ///<Capture test mode is disabled.
            v1=0x00000001,     ///<Capture test mode is enabled.
        };
        namespace captestValC{
            constexpr MPL::Value<captestVal,captestVal::v0> v0{};
            constexpr MPL::Value<captestVal,captestVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,captestVal> captest{}; 
        ///Fault Control Mode
        enum class faultmVal {
            v00=0x00000000,     ///<Fault control is disabled for all channels.
            v01=0x00000001,     ///<Fault control is enabled for even channels only (channels 0, 2, 4, and 6), and the selected mode is the manual fault clearing.
            v10=0x00000002,     ///<Fault control is enabled for all channels, and the selected mode is the manual fault clearing.
            v11=0x00000003,     ///<Fault control is enabled for all channels, and the selected mode is the automatic fault clearing.
        };
        namespace faultmValC{
            constexpr MPL::Value<faultmVal,faultmVal::v00> v00{};
            constexpr MPL::Value<faultmVal,faultmVal::v01> v01{};
            constexpr MPL::Value<faultmVal,faultmVal::v10> v10{};
            constexpr MPL::Value<faultmVal,faultmVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,faultmVal> faultm{}; 
        ///Fault Interrupt Enable
        enum class faultieVal {
            v0=0x00000000,     ///<Fault control interrupt is disabled.
            v1=0x00000001,     ///<Fault control interrupt is enabled.
        };
        namespace faultieValC{
            constexpr MPL::Value<faultieVal,faultieVal::v0> v0{};
            constexpr MPL::Value<faultieVal,faultieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,faultieVal> faultie{}; 
    }
    namespace Ftm2Sync{    ///<Synchronization
        using Addr = Register::Address<0x4003a058,0xffffff00,0,unsigned>;
        ///Minimum Loading Point Enable
        enum class cntminVal {
            v0=0x00000000,     ///<The minimum loading point is disabled.
            v1=0x00000001,     ///<The minimum loading point is enabled.
        };
        namespace cntminValC{
            constexpr MPL::Value<cntminVal,cntminVal::v0> v0{};
            constexpr MPL::Value<cntminVal,cntminVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cntminVal> cntmin{}; 
        ///Maximum Loading Point Enable
        enum class cntmaxVal {
            v0=0x00000000,     ///<The maximum loading point is disabled.
            v1=0x00000001,     ///<The maximum loading point is enabled.
        };
        namespace cntmaxValC{
            constexpr MPL::Value<cntmaxVal,cntmaxVal::v0> v0{};
            constexpr MPL::Value<cntmaxVal,cntmaxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,cntmaxVal> cntmax{}; 
        ///FTM Counter Reinitialization By Synchronization (FTM counter synchronization)
        enum class reinitVal {
            v0=0x00000000,     ///<FTM counter continues to count normally.
            v1=0x00000001,     ///<FTM counter is updated with its initial value when the selected trigger is detected.
        };
        namespace reinitValC{
            constexpr MPL::Value<reinitVal,reinitVal::v0> v0{};
            constexpr MPL::Value<reinitVal,reinitVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,reinitVal> reinit{}; 
        ///Output Mask Synchronization
        enum class synchomVal {
            v0=0x00000000,     ///<OUTMASK register is updated with the value of its buffer in all rising edges of the system clock.
            v1=0x00000001,     ///<OUTMASK register is updated with the value of its buffer only by the PWM synchronization.
        };
        namespace synchomValC{
            constexpr MPL::Value<synchomVal,synchomVal::v0> v0{};
            constexpr MPL::Value<synchomVal,synchomVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,synchomVal> synchom{}; 
        ///PWM Synchronization Hardware Trigger 0
        enum class trig0Val {
            v0=0x00000000,     ///<Trigger is disabled.
            v1=0x00000001,     ///<Trigger is enabled.
        };
        namespace trig0ValC{
            constexpr MPL::Value<trig0Val,trig0Val::v0> v0{};
            constexpr MPL::Value<trig0Val,trig0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,trig0Val> trig0{}; 
        ///PWM Synchronization Hardware Trigger 1
        enum class trig1Val {
            v0=0x00000000,     ///<Trigger is disabled.
            v1=0x00000001,     ///<Trigger is enabled.
        };
        namespace trig1ValC{
            constexpr MPL::Value<trig1Val,trig1Val::v0> v0{};
            constexpr MPL::Value<trig1Val,trig1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trig1Val> trig1{}; 
        ///PWM Synchronization Hardware Trigger 2
        enum class trig2Val {
            v0=0x00000000,     ///<Trigger is disabled.
            v1=0x00000001,     ///<Trigger is enabled.
        };
        namespace trig2ValC{
            constexpr MPL::Value<trig2Val,trig2Val::v0> v0{};
            constexpr MPL::Value<trig2Val,trig2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trig2Val> trig2{}; 
        ///PWM Synchronization Software Trigger
        enum class swsyncVal {
            v0=0x00000000,     ///<Software trigger is not selected.
            v1=0x00000001,     ///<Software trigger is selected.
        };
        namespace swsyncValC{
            constexpr MPL::Value<swsyncVal,swsyncVal::v0> v0{};
            constexpr MPL::Value<swsyncVal,swsyncVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,swsyncVal> swsync{}; 
    }
    namespace Ftm2Outinit{    ///<Initial State For Channels Output
        using Addr = Register::Address<0x4003a05c,0xffffff00,0,unsigned>;
        ///Channel 0 Output Initialization Value
        enum class ch0oiVal {
            v0=0x00000000,     ///<The initialization value is 0.
            v1=0x00000001,     ///<The initialization value is 1.
        };
        namespace ch0oiValC{
            constexpr MPL::Value<ch0oiVal,ch0oiVal::v0> v0{};
            constexpr MPL::Value<ch0oiVal,ch0oiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0oiVal> ch0oi{}; 
        ///Channel 1 Output Initialization Value
        enum class ch1oiVal {
            v0=0x00000000,     ///<The initialization value is 0.
            v1=0x00000001,     ///<The initialization value is 1.
        };
        namespace ch1oiValC{
            constexpr MPL::Value<ch1oiVal,ch1oiVal::v0> v0{};
            constexpr MPL::Value<ch1oiVal,ch1oiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1oiVal> ch1oi{}; 
        ///Channel 2 Output Initialization Value
        enum class ch2oiVal {
            v0=0x00000000,     ///<The initialization value is 0.
            v1=0x00000001,     ///<The initialization value is 1.
        };
        namespace ch2oiValC{
            constexpr MPL::Value<ch2oiVal,ch2oiVal::v0> v0{};
            constexpr MPL::Value<ch2oiVal,ch2oiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2oiVal> ch2oi{}; 
        ///Channel 3 Output Initialization Value
        enum class ch3oiVal {
            v0=0x00000000,     ///<The initialization value is 0.
            v1=0x00000001,     ///<The initialization value is 1.
        };
        namespace ch3oiValC{
            constexpr MPL::Value<ch3oiVal,ch3oiVal::v0> v0{};
            constexpr MPL::Value<ch3oiVal,ch3oiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3oiVal> ch3oi{}; 
        ///Channel 4 Output Initialization Value
        enum class ch4oiVal {
            v0=0x00000000,     ///<The initialization value is 0.
            v1=0x00000001,     ///<The initialization value is 1.
        };
        namespace ch4oiValC{
            constexpr MPL::Value<ch4oiVal,ch4oiVal::v0> v0{};
            constexpr MPL::Value<ch4oiVal,ch4oiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4oiVal> ch4oi{}; 
        ///Channel 5 Output Initialization Value
        enum class ch5oiVal {
            v0=0x00000000,     ///<The initialization value is 0.
            v1=0x00000001,     ///<The initialization value is 1.
        };
        namespace ch5oiValC{
            constexpr MPL::Value<ch5oiVal,ch5oiVal::v0> v0{};
            constexpr MPL::Value<ch5oiVal,ch5oiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5oiVal> ch5oi{}; 
        ///Channel 6 Output Initialization Value
        enum class ch6oiVal {
            v0=0x00000000,     ///<The initialization value is 0.
            v1=0x00000001,     ///<The initialization value is 1.
        };
        namespace ch6oiValC{
            constexpr MPL::Value<ch6oiVal,ch6oiVal::v0> v0{};
            constexpr MPL::Value<ch6oiVal,ch6oiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6oiVal> ch6oi{}; 
        ///Channel 7 Output Initialization Value
        enum class ch7oiVal {
            v0=0x00000000,     ///<The initialization value is 0.
            v1=0x00000001,     ///<The initialization value is 1.
        };
        namespace ch7oiValC{
            constexpr MPL::Value<ch7oiVal,ch7oiVal::v0> v0{};
            constexpr MPL::Value<ch7oiVal,ch7oiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7oiVal> ch7oi{}; 
    }
    namespace Ftm2Outmask{    ///<Output Mask
        using Addr = Register::Address<0x4003a060,0xffffff00,0,unsigned>;
        ///Channel 0 Output Mask
        enum class ch0omVal {
            v0=0x00000000,     ///<Channel output is not masked. It continues to operate normally.
            v1=0x00000001,     ///<Channel output is masked. It is forced to its inactive state.
        };
        namespace ch0omValC{
            constexpr MPL::Value<ch0omVal,ch0omVal::v0> v0{};
            constexpr MPL::Value<ch0omVal,ch0omVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0omVal> ch0om{}; 
        ///Channel 1 Output Mask
        enum class ch1omVal {
            v0=0x00000000,     ///<Channel output is not masked. It continues to operate normally.
            v1=0x00000001,     ///<Channel output is masked. It is forced to its inactive state.
        };
        namespace ch1omValC{
            constexpr MPL::Value<ch1omVal,ch1omVal::v0> v0{};
            constexpr MPL::Value<ch1omVal,ch1omVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1omVal> ch1om{}; 
        ///Channel 2 Output Mask
        enum class ch2omVal {
            v0=0x00000000,     ///<Channel output is not masked. It continues to operate normally.
            v1=0x00000001,     ///<Channel output is masked. It is forced to its inactive state.
        };
        namespace ch2omValC{
            constexpr MPL::Value<ch2omVal,ch2omVal::v0> v0{};
            constexpr MPL::Value<ch2omVal,ch2omVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2omVal> ch2om{}; 
        ///Channel 3 Output Mask
        enum class ch3omVal {
            v0=0x00000000,     ///<Channel output is not masked. It continues to operate normally.
            v1=0x00000001,     ///<Channel output is masked. It is forced to its inactive state.
        };
        namespace ch3omValC{
            constexpr MPL::Value<ch3omVal,ch3omVal::v0> v0{};
            constexpr MPL::Value<ch3omVal,ch3omVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3omVal> ch3om{}; 
        ///Channel 4 Output Mask
        enum class ch4omVal {
            v0=0x00000000,     ///<Channel output is not masked. It continues to operate normally.
            v1=0x00000001,     ///<Channel output is masked. It is forced to its inactive state.
        };
        namespace ch4omValC{
            constexpr MPL::Value<ch4omVal,ch4omVal::v0> v0{};
            constexpr MPL::Value<ch4omVal,ch4omVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4omVal> ch4om{}; 
        ///Channel 5 Output Mask
        enum class ch5omVal {
            v0=0x00000000,     ///<Channel output is not masked. It continues to operate normally.
            v1=0x00000001,     ///<Channel output is masked. It is forced to its inactive state.
        };
        namespace ch5omValC{
            constexpr MPL::Value<ch5omVal,ch5omVal::v0> v0{};
            constexpr MPL::Value<ch5omVal,ch5omVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5omVal> ch5om{}; 
        ///Channel 6 Output Mask
        enum class ch6omVal {
            v0=0x00000000,     ///<Channel output is not masked. It continues to operate normally.
            v1=0x00000001,     ///<Channel output is masked. It is forced to its inactive state.
        };
        namespace ch6omValC{
            constexpr MPL::Value<ch6omVal,ch6omVal::v0> v0{};
            constexpr MPL::Value<ch6omVal,ch6omVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6omVal> ch6om{}; 
        ///Channel 7 Output Mask
        enum class ch7omVal {
            v0=0x00000000,     ///<Channel output is not masked. It continues to operate normally.
            v1=0x00000001,     ///<Channel output is masked. It is forced to its inactive state.
        };
        namespace ch7omValC{
            constexpr MPL::Value<ch7omVal,ch7omVal::v0> v0{};
            constexpr MPL::Value<ch7omVal,ch7omVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7omVal> ch7om{}; 
    }
    namespace Ftm2Combine{    ///<Function For Linked Channels
        using Addr = Register::Address<0x4003a064,0x80808080,0,unsigned>;
        ///Combine Channels For n = 0
        enum class combine0Val {
            v0=0x00000000,     ///<Channels (n) and (n+1) are independent.
            v1=0x00000001,     ///<Channels (n) and (n+1) are combined.
        };
        namespace combine0ValC{
            constexpr MPL::Value<combine0Val,combine0Val::v0> v0{};
            constexpr MPL::Value<combine0Val,combine0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,combine0Val> combine0{}; 
        ///Complement Of Channel (n) For n = 0
        enum class comp0Val {
            v0=0x00000000,     ///<The channel (n+1) output is the same as the channel (n) output.
            v1=0x00000001,     ///<The channel (n+1) output is the complement of the channel (n) output.
        };
        namespace comp0ValC{
            constexpr MPL::Value<comp0Val,comp0Val::v0> v0{};
            constexpr MPL::Value<comp0Val,comp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,comp0Val> comp0{}; 
        ///Dual Edge Capture Mode Enable For n = 0
        enum class decapen0Val {
            v0=0x00000000,     ///<The Dual Edge Capture mode in this pair of channels is disabled.
            v1=0x00000001,     ///<The Dual Edge Capture mode in this pair of channels is enabled.
        };
        namespace decapen0ValC{
            constexpr MPL::Value<decapen0Val,decapen0Val::v0> v0{};
            constexpr MPL::Value<decapen0Val,decapen0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,decapen0Val> decapen0{}; 
        ///Dual Edge Capture Mode Captures For n = 0
        enum class decap0Val {
            v0=0x00000000,     ///<The dual edge captures are inactive.
            v1=0x00000001,     ///<The dual edge captures are active.
        };
        namespace decap0ValC{
            constexpr MPL::Value<decap0Val,decap0Val::v0> v0{};
            constexpr MPL::Value<decap0Val,decap0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,decap0Val> decap0{}; 
        ///Deadtime Enable For n = 0
        enum class dten0Val {
            v0=0x00000000,     ///<The deadtime insertion in this pair of channels is disabled.
            v1=0x00000001,     ///<The deadtime insertion in this pair of channels is enabled.
        };
        namespace dten0ValC{
            constexpr MPL::Value<dten0Val,dten0Val::v0> v0{};
            constexpr MPL::Value<dten0Val,dten0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,dten0Val> dten0{}; 
        ///Synchronization Enable For n = 0
        enum class syncen0Val {
            v0=0x00000000,     ///<The PWM synchronization in this pair of channels is disabled.
            v1=0x00000001,     ///<The PWM synchronization in this pair of channels is enabled.
        };
        namespace syncen0ValC{
            constexpr MPL::Value<syncen0Val,syncen0Val::v0> v0{};
            constexpr MPL::Value<syncen0Val,syncen0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,syncen0Val> syncen0{}; 
        ///Fault Control Enable For n = 0
        enum class faulten0Val {
            v0=0x00000000,     ///<The fault control in this pair of channels is disabled.
            v1=0x00000001,     ///<The fault control in this pair of channels is enabled.
        };
        namespace faulten0ValC{
            constexpr MPL::Value<faulten0Val,faulten0Val::v0> v0{};
            constexpr MPL::Value<faulten0Val,faulten0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,faulten0Val> faulten0{}; 
        ///Combine Channels For n = 2
        enum class combine1Val {
            v0=0x00000000,     ///<Channels (n) and (n+1) are independent.
            v1=0x00000001,     ///<Channels (n) and (n+1) are combined.
        };
        namespace combine1ValC{
            constexpr MPL::Value<combine1Val,combine1Val::v0> v0{};
            constexpr MPL::Value<combine1Val,combine1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,combine1Val> combine1{}; 
        ///Complement Of Channel (n) For n = 2
        enum class comp1Val {
            v0=0x00000000,     ///<The channel (n+1) output is the same as the channel (n) output.
            v1=0x00000001,     ///<The channel (n+1) output is the complement of the channel (n) output.
        };
        namespace comp1ValC{
            constexpr MPL::Value<comp1Val,comp1Val::v0> v0{};
            constexpr MPL::Value<comp1Val,comp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,comp1Val> comp1{}; 
        ///Dual Edge Capture Mode Enable For n = 2
        enum class decapen1Val {
            v0=0x00000000,     ///<The Dual Edge Capture mode in this pair of channels is disabled.
            v1=0x00000001,     ///<The Dual Edge Capture mode in this pair of channels is enabled.
        };
        namespace decapen1ValC{
            constexpr MPL::Value<decapen1Val,decapen1Val::v0> v0{};
            constexpr MPL::Value<decapen1Val,decapen1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,decapen1Val> decapen1{}; 
        ///Dual Edge Capture Mode Captures For n = 2
        enum class decap1Val {
            v0=0x00000000,     ///<The dual edge captures are inactive.
            v1=0x00000001,     ///<The dual edge captures are active.
        };
        namespace decap1ValC{
            constexpr MPL::Value<decap1Val,decap1Val::v0> v0{};
            constexpr MPL::Value<decap1Val,decap1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,decap1Val> decap1{}; 
        ///Deadtime Enable For n = 2
        enum class dten1Val {
            v0=0x00000000,     ///<The deadtime insertion in this pair of channels is disabled.
            v1=0x00000001,     ///<The deadtime insertion in this pair of channels is enabled.
        };
        namespace dten1ValC{
            constexpr MPL::Value<dten1Val,dten1Val::v0> v0{};
            constexpr MPL::Value<dten1Val,dten1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dten1Val> dten1{}; 
        ///Synchronization Enable For n = 2
        enum class syncen1Val {
            v0=0x00000000,     ///<The PWM synchronization in this pair of channels is disabled.
            v1=0x00000001,     ///<The PWM synchronization in this pair of channels is enabled.
        };
        namespace syncen1ValC{
            constexpr MPL::Value<syncen1Val,syncen1Val::v0> v0{};
            constexpr MPL::Value<syncen1Val,syncen1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,syncen1Val> syncen1{}; 
        ///Fault Control Enable For n = 2
        enum class faulten1Val {
            v0=0x00000000,     ///<The fault control in this pair of channels is disabled.
            v1=0x00000001,     ///<The fault control in this pair of channels is enabled.
        };
        namespace faulten1ValC{
            constexpr MPL::Value<faulten1Val,faulten1Val::v0> v0{};
            constexpr MPL::Value<faulten1Val,faulten1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,faulten1Val> faulten1{}; 
        ///Combine Channels For n = 4
        enum class combine2Val {
            v0=0x00000000,     ///<Channels (n) and (n+1) are independent.
            v1=0x00000001,     ///<Channels (n) and (n+1) are combined.
        };
        namespace combine2ValC{
            constexpr MPL::Value<combine2Val,combine2Val::v0> v0{};
            constexpr MPL::Value<combine2Val,combine2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,combine2Val> combine2{}; 
        ///Complement Of Channel (n) For n = 4
        enum class comp2Val {
            v0=0x00000000,     ///<The channel (n+1) output is the same as the channel (n) output.
            v1=0x00000001,     ///<The channel (n+1) output is the complement of the channel (n) output.
        };
        namespace comp2ValC{
            constexpr MPL::Value<comp2Val,comp2Val::v0> v0{};
            constexpr MPL::Value<comp2Val,comp2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,comp2Val> comp2{}; 
        ///Dual Edge Capture Mode Enable For n = 4
        enum class decapen2Val {
            v0=0x00000000,     ///<The Dual Edge Capture mode in this pair of channels is disabled.
            v1=0x00000001,     ///<The Dual Edge Capture mode in this pair of channels is enabled.
        };
        namespace decapen2ValC{
            constexpr MPL::Value<decapen2Val,decapen2Val::v0> v0{};
            constexpr MPL::Value<decapen2Val,decapen2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,decapen2Val> decapen2{}; 
        ///Dual Edge Capture Mode Captures For n = 4
        enum class decap2Val {
            v0=0x00000000,     ///<The dual edge captures are inactive.
            v1=0x00000001,     ///<The dual edge captures are active.
        };
        namespace decap2ValC{
            constexpr MPL::Value<decap2Val,decap2Val::v0> v0{};
            constexpr MPL::Value<decap2Val,decap2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,decap2Val> decap2{}; 
        ///Deadtime Enable For n = 4
        enum class dten2Val {
            v0=0x00000000,     ///<The deadtime insertion in this pair of channels is disabled.
            v1=0x00000001,     ///<The deadtime insertion in this pair of channels is enabled.
        };
        namespace dten2ValC{
            constexpr MPL::Value<dten2Val,dten2Val::v0> v0{};
            constexpr MPL::Value<dten2Val,dten2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,dten2Val> dten2{}; 
        ///Synchronization Enable For n = 4
        enum class syncen2Val {
            v0=0x00000000,     ///<The PWM synchronization in this pair of channels is disabled.
            v1=0x00000001,     ///<The PWM synchronization in this pair of channels is enabled.
        };
        namespace syncen2ValC{
            constexpr MPL::Value<syncen2Val,syncen2Val::v0> v0{};
            constexpr MPL::Value<syncen2Val,syncen2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,syncen2Val> syncen2{}; 
        ///Fault Control Enable For n = 4
        enum class faulten2Val {
            v0=0x00000000,     ///<The fault control in this pair of channels is disabled.
            v1=0x00000001,     ///<The fault control in this pair of channels is enabled.
        };
        namespace faulten2ValC{
            constexpr MPL::Value<faulten2Val,faulten2Val::v0> v0{};
            constexpr MPL::Value<faulten2Val,faulten2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,faulten2Val> faulten2{}; 
        ///Combine Channels For n = 6
        enum class combine3Val {
            v0=0x00000000,     ///<Channels (n) and (n+1) are independent.
            v1=0x00000001,     ///<Channels (n) and (n+1) are combined.
        };
        namespace combine3ValC{
            constexpr MPL::Value<combine3Val,combine3Val::v0> v0{};
            constexpr MPL::Value<combine3Val,combine3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,combine3Val> combine3{}; 
        ///Complement Of Channel (n) for n = 6
        enum class comp3Val {
            v0=0x00000000,     ///<The channel (n+1) output is the same as the channel (n) output.
            v1=0x00000001,     ///<The channel (n+1) output is the complement of the channel (n) output.
        };
        namespace comp3ValC{
            constexpr MPL::Value<comp3Val,comp3Val::v0> v0{};
            constexpr MPL::Value<comp3Val,comp3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,comp3Val> comp3{}; 
        ///Dual Edge Capture Mode Enable For n = 6
        enum class decapen3Val {
            v0=0x00000000,     ///<The Dual Edge Capture mode in this pair of channels is disabled.
            v1=0x00000001,     ///<The Dual Edge Capture mode in this pair of channels is enabled.
        };
        namespace decapen3ValC{
            constexpr MPL::Value<decapen3Val,decapen3Val::v0> v0{};
            constexpr MPL::Value<decapen3Val,decapen3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,decapen3Val> decapen3{}; 
        ///Dual Edge Capture Mode Captures For n = 6
        enum class decap3Val {
            v0=0x00000000,     ///<The dual edge captures are inactive.
            v1=0x00000001,     ///<The dual edge captures are active.
        };
        namespace decap3ValC{
            constexpr MPL::Value<decap3Val,decap3Val::v0> v0{};
            constexpr MPL::Value<decap3Val,decap3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,decap3Val> decap3{}; 
        ///Deadtime Enable For n = 6
        enum class dten3Val {
            v0=0x00000000,     ///<The deadtime insertion in this pair of channels is disabled.
            v1=0x00000001,     ///<The deadtime insertion in this pair of channels is enabled.
        };
        namespace dten3ValC{
            constexpr MPL::Value<dten3Val,dten3Val::v0> v0{};
            constexpr MPL::Value<dten3Val,dten3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,dten3Val> dten3{}; 
        ///Synchronization Enable For n = 6
        enum class syncen3Val {
            v0=0x00000000,     ///<The PWM synchronization in this pair of channels is disabled.
            v1=0x00000001,     ///<The PWM synchronization in this pair of channels is enabled.
        };
        namespace syncen3ValC{
            constexpr MPL::Value<syncen3Val,syncen3Val::v0> v0{};
            constexpr MPL::Value<syncen3Val,syncen3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,syncen3Val> syncen3{}; 
        ///Fault Control Enable For n = 6
        enum class faulten3Val {
            v0=0x00000000,     ///<The fault control in this pair of channels is disabled.
            v1=0x00000001,     ///<The fault control in this pair of channels is enabled.
        };
        namespace faulten3ValC{
            constexpr MPL::Value<faulten3Val,faulten3Val::v0> v0{};
            constexpr MPL::Value<faulten3Val,faulten3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,faulten3Val> faulten3{}; 
    }
    namespace Ftm2Deadtime{    ///<Deadtime Insertion Control
        using Addr = Register::Address<0x4003a068,0xffffff00,0,unsigned>;
        ///Deadtime Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> dtval{}; 
        ///Deadtime Prescaler Value
        enum class dtpsVal {
            v0x=0x00000000,     ///<Divide the system clock by 1.
            v10=0x00000002,     ///<Divide the system clock by 4.
            v11=0x00000003,     ///<Divide the system clock by 16.
        };
        namespace dtpsValC{
            constexpr MPL::Value<dtpsVal,dtpsVal::v0x> v0x{};
            constexpr MPL::Value<dtpsVal,dtpsVal::v10> v10{};
            constexpr MPL::Value<dtpsVal,dtpsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,dtpsVal> dtps{}; 
    }
    namespace Ftm2Exttrig{    ///<FTM External Trigger
        using Addr = Register::Address<0x4003a06c,0xffffff00,0,unsigned>;
        ///Channel 2 Trigger Enable
        enum class ch2trigVal {
            v0=0x00000000,     ///<The generation of the channel trigger is disabled.
            v1=0x00000001,     ///<The generation of the channel trigger is enabled.
        };
        namespace ch2trigValC{
            constexpr MPL::Value<ch2trigVal,ch2trigVal::v0> v0{};
            constexpr MPL::Value<ch2trigVal,ch2trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch2trigVal> ch2trig{}; 
        ///Channel 3 Trigger Enable
        enum class ch3trigVal {
            v0=0x00000000,     ///<The generation of the channel trigger is disabled.
            v1=0x00000001,     ///<The generation of the channel trigger is enabled.
        };
        namespace ch3trigValC{
            constexpr MPL::Value<ch3trigVal,ch3trigVal::v0> v0{};
            constexpr MPL::Value<ch3trigVal,ch3trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch3trigVal> ch3trig{}; 
        ///Channel 4 Trigger Enable
        enum class ch4trigVal {
            v0=0x00000000,     ///<The generation of the channel trigger is disabled.
            v1=0x00000001,     ///<The generation of the channel trigger is enabled.
        };
        namespace ch4trigValC{
            constexpr MPL::Value<ch4trigVal,ch4trigVal::v0> v0{};
            constexpr MPL::Value<ch4trigVal,ch4trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch4trigVal> ch4trig{}; 
        ///Channel 5 Trigger Enable
        enum class ch5trigVal {
            v0=0x00000000,     ///<The generation of the channel trigger is disabled.
            v1=0x00000001,     ///<The generation of the channel trigger is enabled.
        };
        namespace ch5trigValC{
            constexpr MPL::Value<ch5trigVal,ch5trigVal::v0> v0{};
            constexpr MPL::Value<ch5trigVal,ch5trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch5trigVal> ch5trig{}; 
        ///Channel 0 Trigger Enable
        enum class ch0trigVal {
            v0=0x00000000,     ///<The generation of the channel trigger is disabled.
            v1=0x00000001,     ///<The generation of the channel trigger is enabled.
        };
        namespace ch0trigValC{
            constexpr MPL::Value<ch0trigVal,ch0trigVal::v0> v0{};
            constexpr MPL::Value<ch0trigVal,ch0trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch0trigVal> ch0trig{}; 
        ///Channel 1 Trigger Enable
        enum class ch1trigVal {
            v0=0x00000000,     ///<The generation of the channel trigger is disabled.
            v1=0x00000001,     ///<The generation of the channel trigger is enabled.
        };
        namespace ch1trigValC{
            constexpr MPL::Value<ch1trigVal,ch1trigVal::v0> v0{};
            constexpr MPL::Value<ch1trigVal,ch1trigVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch1trigVal> ch1trig{}; 
        ///Initialization Trigger Enable
        enum class inittrigenVal {
            v0=0x00000000,     ///<The generation of initialization trigger is disabled.
            v1=0x00000001,     ///<The generation of initialization trigger is enabled.
        };
        namespace inittrigenValC{
            constexpr MPL::Value<inittrigenVal,inittrigenVal::v0> v0{};
            constexpr MPL::Value<inittrigenVal,inittrigenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,inittrigenVal> inittrigen{}; 
        ///Channel Trigger Flag
        enum class trigfVal {
            v0=0x00000000,     ///<No channel trigger was generated.
            v1=0x00000001,     ///<A channel trigger was generated.
        };
        namespace trigfValC{
            constexpr MPL::Value<trigfVal,trigfVal::v0> v0{};
            constexpr MPL::Value<trigfVal,trigfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,trigfVal> trigf{}; 
    }
    namespace Ftm2Pol{    ///<Channels Polarity
        using Addr = Register::Address<0x4003a070,0xffffff00,0,unsigned>;
        ///Channel 0 Polarity
        enum class pol0Val {
            v0=0x00000000,     ///<The channel polarity is active high.
            v1=0x00000001,     ///<The channel polarity is active low.
        };
        namespace pol0ValC{
            constexpr MPL::Value<pol0Val,pol0Val::v0> v0{};
            constexpr MPL::Value<pol0Val,pol0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pol0Val> pol0{}; 
        ///Channel 1 Polarity
        enum class pol1Val {
            v0=0x00000000,     ///<The channel polarity is active high.
            v1=0x00000001,     ///<The channel polarity is active low.
        };
        namespace pol1ValC{
            constexpr MPL::Value<pol1Val,pol1Val::v0> v0{};
            constexpr MPL::Value<pol1Val,pol1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pol1Val> pol1{}; 
        ///Channel 2 Polarity
        enum class pol2Val {
            v0=0x00000000,     ///<The channel polarity is active high.
            v1=0x00000001,     ///<The channel polarity is active low.
        };
        namespace pol2ValC{
            constexpr MPL::Value<pol2Val,pol2Val::v0> v0{};
            constexpr MPL::Value<pol2Val,pol2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pol2Val> pol2{}; 
        ///Channel 3 Polarity
        enum class pol3Val {
            v0=0x00000000,     ///<The channel polarity is active high.
            v1=0x00000001,     ///<The channel polarity is active low.
        };
        namespace pol3ValC{
            constexpr MPL::Value<pol3Val,pol3Val::v0> v0{};
            constexpr MPL::Value<pol3Val,pol3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pol3Val> pol3{}; 
        ///Channel 4 Polarity
        enum class pol4Val {
            v0=0x00000000,     ///<The channel polarity is active high.
            v1=0x00000001,     ///<The channel polarity is active low.
        };
        namespace pol4ValC{
            constexpr MPL::Value<pol4Val,pol4Val::v0> v0{};
            constexpr MPL::Value<pol4Val,pol4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pol4Val> pol4{}; 
        ///Channel 5 Polarity
        enum class pol5Val {
            v0=0x00000000,     ///<The channel polarity is active high.
            v1=0x00000001,     ///<The channel polarity is active low.
        };
        namespace pol5ValC{
            constexpr MPL::Value<pol5Val,pol5Val::v0> v0{};
            constexpr MPL::Value<pol5Val,pol5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pol5Val> pol5{}; 
        ///Channel 6 Polarity
        enum class pol6Val {
            v0=0x00000000,     ///<The channel polarity is active high.
            v1=0x00000001,     ///<The channel polarity is active low.
        };
        namespace pol6ValC{
            constexpr MPL::Value<pol6Val,pol6Val::v0> v0{};
            constexpr MPL::Value<pol6Val,pol6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pol6Val> pol6{}; 
        ///Channel 7 Polarity
        enum class pol7Val {
            v0=0x00000000,     ///<The channel polarity is active high.
            v1=0x00000001,     ///<The channel polarity is active low.
        };
        namespace pol7ValC{
            constexpr MPL::Value<pol7Val,pol7Val::v0> v0{};
            constexpr MPL::Value<pol7Val,pol7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pol7Val> pol7{}; 
    }
    namespace Ftm2Fms{    ///<Fault Mode Status
        using Addr = Register::Address<0x4003a074,0xffffff10,0,unsigned>;
        ///Fault Detection Flag 0
        enum class faultf0Val {
            v0=0x00000000,     ///<No fault condition was detected at the fault input.
            v1=0x00000001,     ///<A fault condition was detected at the fault input.
        };
        namespace faultf0ValC{
            constexpr MPL::Value<faultf0Val,faultf0Val::v0> v0{};
            constexpr MPL::Value<faultf0Val,faultf0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,faultf0Val> faultf0{}; 
        ///Fault Detection Flag 1
        enum class faultf1Val {
            v0=0x00000000,     ///<No fault condition was detected at the fault input.
            v1=0x00000001,     ///<A fault condition was detected at the fault input.
        };
        namespace faultf1ValC{
            constexpr MPL::Value<faultf1Val,faultf1Val::v0> v0{};
            constexpr MPL::Value<faultf1Val,faultf1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,faultf1Val> faultf1{}; 
        ///Fault Detection Flag 2
        enum class faultf2Val {
            v0=0x00000000,     ///<No fault condition was detected at the fault input.
            v1=0x00000001,     ///<A fault condition was detected at the fault input.
        };
        namespace faultf2ValC{
            constexpr MPL::Value<faultf2Val,faultf2Val::v0> v0{};
            constexpr MPL::Value<faultf2Val,faultf2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,faultf2Val> faultf2{}; 
        ///Fault Detection Flag 3
        enum class faultf3Val {
            v0=0x00000000,     ///<No fault condition was detected at the fault input.
            v1=0x00000001,     ///<A fault condition was detected at the fault input.
        };
        namespace faultf3ValC{
            constexpr MPL::Value<faultf3Val,faultf3Val::v0> v0{};
            constexpr MPL::Value<faultf3Val,faultf3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,faultf3Val> faultf3{}; 
        ///Fault Inputs
        enum class faultinVal {
            v0=0x00000000,     ///<The logic OR of the enabled fault inputs is 0.
            v1=0x00000001,     ///<The logic OR of the enabled fault inputs is 1.
        };
        namespace faultinValC{
            constexpr MPL::Value<faultinVal,faultinVal::v0> v0{};
            constexpr MPL::Value<faultinVal,faultinVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,faultinVal> faultin{}; 
        ///Write Protection Enable
        enum class wpenVal {
            v0=0x00000000,     ///<Write protection is disabled. Write protected bits can be written.
            v1=0x00000001,     ///<Write protection is enabled. Write protected bits cannot be written.
        };
        namespace wpenValC{
            constexpr MPL::Value<wpenVal,wpenVal::v0> v0{};
            constexpr MPL::Value<wpenVal,wpenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,wpenVal> wpen{}; 
        ///Fault Detection Flag
        enum class faultfVal {
            v0=0x00000000,     ///<No fault condition was detected.
            v1=0x00000001,     ///<A fault condition was detected.
        };
        namespace faultfValC{
            constexpr MPL::Value<faultfVal,faultfVal::v0> v0{};
            constexpr MPL::Value<faultfVal,faultfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,faultfVal> faultf{}; 
    }
    namespace Ftm2Filter{    ///<Input Capture Filter Control
        using Addr = Register::Address<0x4003a078,0xffff0000,0,unsigned>;
        ///Channel 0 Input Filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ch0fval{}; 
        ///Channel 1 Input Filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ch1fval{}; 
        ///Channel 2 Input Filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> ch2fval{}; 
        ///Channel 3 Input Filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ch3fval{}; 
    }
    namespace Ftm2Fltctrl{    ///<Fault Control
        using Addr = Register::Address<0x4003a07c,0xfffff000,0,unsigned>;
        ///Fault Input 0 Enable
        enum class fault0enVal {
            v0=0x00000000,     ///<Fault input is disabled.
            v1=0x00000001,     ///<Fault input is enabled.
        };
        namespace fault0enValC{
            constexpr MPL::Value<fault0enVal,fault0enVal::v0> v0{};
            constexpr MPL::Value<fault0enVal,fault0enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,fault0enVal> fault0en{}; 
        ///Fault Input 1 Enable
        enum class fault1enVal {
            v0=0x00000000,     ///<Fault input is disabled.
            v1=0x00000001,     ///<Fault input is enabled.
        };
        namespace fault1enValC{
            constexpr MPL::Value<fault1enVal,fault1enVal::v0> v0{};
            constexpr MPL::Value<fault1enVal,fault1enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,fault1enVal> fault1en{}; 
        ///Fault Input 2 Enable
        enum class fault2enVal {
            v0=0x00000000,     ///<Fault input is disabled.
            v1=0x00000001,     ///<Fault input is enabled.
        };
        namespace fault2enValC{
            constexpr MPL::Value<fault2enVal,fault2enVal::v0> v0{};
            constexpr MPL::Value<fault2enVal,fault2enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,fault2enVal> fault2en{}; 
        ///Fault Input 3 Enable
        enum class fault3enVal {
            v0=0x00000000,     ///<Fault input is disabled.
            v1=0x00000001,     ///<Fault input is enabled.
        };
        namespace fault3enValC{
            constexpr MPL::Value<fault3enVal,fault3enVal::v0> v0{};
            constexpr MPL::Value<fault3enVal,fault3enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,fault3enVal> fault3en{}; 
        ///Fault Input 0 Filter Enable
        enum class ffltr0enVal {
            v0=0x00000000,     ///<Fault input filter is disabled.
            v1=0x00000001,     ///<Fault input filter is enabled.
        };
        namespace ffltr0enValC{
            constexpr MPL::Value<ffltr0enVal,ffltr0enVal::v0> v0{};
            constexpr MPL::Value<ffltr0enVal,ffltr0enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ffltr0enVal> ffltr0en{}; 
        ///Fault Input 1 Filter Enable
        enum class ffltr1enVal {
            v0=0x00000000,     ///<Fault input filter is disabled.
            v1=0x00000001,     ///<Fault input filter is enabled.
        };
        namespace ffltr1enValC{
            constexpr MPL::Value<ffltr1enVal,ffltr1enVal::v0> v0{};
            constexpr MPL::Value<ffltr1enVal,ffltr1enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ffltr1enVal> ffltr1en{}; 
        ///Fault Input 2 Filter Enable
        enum class ffltr2enVal {
            v0=0x00000000,     ///<Fault input filter is disabled.
            v1=0x00000001,     ///<Fault input filter is enabled.
        };
        namespace ffltr2enValC{
            constexpr MPL::Value<ffltr2enVal,ffltr2enVal::v0> v0{};
            constexpr MPL::Value<ffltr2enVal,ffltr2enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ffltr2enVal> ffltr2en{}; 
        ///Fault Input 3 Filter Enable
        enum class ffltr3enVal {
            v0=0x00000000,     ///<Fault input filter is disabled.
            v1=0x00000001,     ///<Fault input filter is enabled.
        };
        namespace ffltr3enValC{
            constexpr MPL::Value<ffltr3enVal,ffltr3enVal::v0> v0{};
            constexpr MPL::Value<ffltr3enVal,ffltr3enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ffltr3enVal> ffltr3en{}; 
        ///Fault Input Filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> ffval{}; 
    }
    namespace Ftm2Qdctrl{    ///<Quadrature Decoder Control And Status
        using Addr = Register::Address<0x4003a080,0xffffff00,0,unsigned>;
        ///Quadrature Decoder Mode Enable
        enum class quadenVal {
            v0=0x00000000,     ///<Quadrature Decoder mode is disabled.
            v1=0x00000001,     ///<Quadrature Decoder mode is enabled.
        };
        namespace quadenValC{
            constexpr MPL::Value<quadenVal,quadenVal::v0> v0{};
            constexpr MPL::Value<quadenVal,quadenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,quadenVal> quaden{}; 
        ///Timer Overflow Direction In Quadrature Decoder Mode
        enum class tofdirVal {
            v0=0x00000000,     ///<TOF bit was set on the bottom of counting. There was an FTM counter decrement and FTM counter changes from its minimum value (CNTIN register) to its maximum value (MOD register).
            v1=0x00000001,     ///<TOF bit was set on the top of counting. There was an FTM counter increment and FTM counter changes from its maximum value (MOD register) to its minimum value (CNTIN register).
        };
        namespace tofdirValC{
            constexpr MPL::Value<tofdirVal,tofdirVal::v0> v0{};
            constexpr MPL::Value<tofdirVal,tofdirVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tofdirVal> tofdir{}; 
        ///FTM Counter Direction In Quadrature Decoder Mode
        enum class quadirVal {
            v0=0x00000000,     ///<Counting direction is decreasing (FTM counter decrement).
            v1=0x00000001,     ///<Counting direction is increasing (FTM counter increment).
        };
        namespace quadirValC{
            constexpr MPL::Value<quadirVal,quadirVal::v0> v0{};
            constexpr MPL::Value<quadirVal,quadirVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,quadirVal> quadir{}; 
        ///Quadrature Decoder Mode
        enum class quadmodeVal {
            v0=0x00000000,     ///<Phase A and phase B encoding mode.
            v1=0x00000001,     ///<Count and direction encoding mode.
        };
        namespace quadmodeValC{
            constexpr MPL::Value<quadmodeVal,quadmodeVal::v0> v0{};
            constexpr MPL::Value<quadmodeVal,quadmodeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,quadmodeVal> quadmode{}; 
        ///Phase B Input Polarity
        enum class phbpolVal {
            v0=0x00000000,     ///<Normal polarity. Phase B input signal is not inverted before identifying the rising and falling edges of this signal.
            v1=0x00000001,     ///<Inverted polarity. Phase B input signal is inverted before identifying the rising and falling edges of this signal.
        };
        namespace phbpolValC{
            constexpr MPL::Value<phbpolVal,phbpolVal::v0> v0{};
            constexpr MPL::Value<phbpolVal,phbpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,phbpolVal> phbpol{}; 
        ///Phase A Input Polarity
        enum class phapolVal {
            v0=0x00000000,     ///<Normal polarity. Phase A input signal is not inverted before identifying the rising and falling edges of this signal.
            v1=0x00000001,     ///<Inverted polarity. Phase A input signal is inverted before identifying the rising and falling edges of this signal.
        };
        namespace phapolValC{
            constexpr MPL::Value<phapolVal,phapolVal::v0> v0{};
            constexpr MPL::Value<phapolVal,phapolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,phapolVal> phapol{}; 
        ///Phase B Input Filter Enable
        enum class phbfltrenVal {
            v0=0x00000000,     ///<Phase B input filter is disabled.
            v1=0x00000001,     ///<Phase B input filter is enabled.
        };
        namespace phbfltrenValC{
            constexpr MPL::Value<phbfltrenVal,phbfltrenVal::v0> v0{};
            constexpr MPL::Value<phbfltrenVal,phbfltrenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,phbfltrenVal> phbfltren{}; 
        ///Phase A Input Filter Enable
        enum class phafltrenVal {
            v0=0x00000000,     ///<Phase A input filter is disabled.
            v1=0x00000001,     ///<Phase A input filter is enabled.
        };
        namespace phafltrenValC{
            constexpr MPL::Value<phafltrenVal,phafltrenVal::v0> v0{};
            constexpr MPL::Value<phafltrenVal,phafltrenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,phafltrenVal> phafltren{}; 
    }
    namespace Ftm2Conf{    ///<Configuration
        using Addr = Register::Address<0x4003a084,0xfffff920,0,unsigned>;
        ///TOF Frequency
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> numtof{}; 
        ///BDM Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> bdmmode{}; 
        ///Global Time Base Enable
        enum class gtbeenVal {
            v0=0x00000000,     ///<Use of an external global time base is disabled.
            v1=0x00000001,     ///<Use of an external global time base is enabled.
        };
        namespace gtbeenValC{
            constexpr MPL::Value<gtbeenVal,gtbeenVal::v0> v0{};
            constexpr MPL::Value<gtbeenVal,gtbeenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,gtbeenVal> gtbeen{}; 
        ///Global Time Base Output
        enum class gtbeoutVal {
            v0=0x00000000,     ///<A global time base signal generation is disabled.
            v1=0x00000001,     ///<A global time base signal generation is enabled.
        };
        namespace gtbeoutValC{
            constexpr MPL::Value<gtbeoutVal,gtbeoutVal::v0> v0{};
            constexpr MPL::Value<gtbeoutVal,gtbeoutVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,gtbeoutVal> gtbeout{}; 
    }
    namespace Ftm2Fltpol{    ///<FTM Fault Input Polarity
        using Addr = Register::Address<0x4003a088,0xfffffff0,0,unsigned>;
        ///Fault Input 0 Polarity
        enum class flt0polVal {
            v0=0x00000000,     ///<The fault input polarity is active high. A 1 at the fault input indicates a fault.
            v1=0x00000001,     ///<The fault input polarity is active low. A 0 at the fault input indicates a fault.
        };
        namespace flt0polValC{
            constexpr MPL::Value<flt0polVal,flt0polVal::v0> v0{};
            constexpr MPL::Value<flt0polVal,flt0polVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,flt0polVal> flt0pol{}; 
        ///Fault Input 1 Polarity
        enum class flt1polVal {
            v0=0x00000000,     ///<The fault input polarity is active high. A 1 at the fault input indicates a fault.
            v1=0x00000001,     ///<The fault input polarity is active low. A 0 at the fault input indicates a fault.
        };
        namespace flt1polValC{
            constexpr MPL::Value<flt1polVal,flt1polVal::v0> v0{};
            constexpr MPL::Value<flt1polVal,flt1polVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,flt1polVal> flt1pol{}; 
        ///Fault Input 2 Polarity
        enum class flt2polVal {
            v0=0x00000000,     ///<The fault input polarity is active high. A 1 at the fault input indicates a fault.
            v1=0x00000001,     ///<The fault input polarity is active low. A 0 at the fault input indicates a fault.
        };
        namespace flt2polValC{
            constexpr MPL::Value<flt2polVal,flt2polVal::v0> v0{};
            constexpr MPL::Value<flt2polVal,flt2polVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,flt2polVal> flt2pol{}; 
        ///Fault Input 3 Polarity
        enum class flt3polVal {
            v0=0x00000000,     ///<The fault input polarity is active high. A 1 at the fault input indicates a fault.
            v1=0x00000001,     ///<The fault input polarity is active low. A 0 at the fault input indicates a fault.
        };
        namespace flt3polValC{
            constexpr MPL::Value<flt3polVal,flt3polVal::v0> v0{};
            constexpr MPL::Value<flt3polVal,flt3polVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,flt3polVal> flt3pol{}; 
    }
    namespace Ftm2Synconf{    ///<Synchronization Configuration
        using Addr = Register::Address<0x4003a08c,0xffe0e04a,0,unsigned>;
        ///Hardware Trigger Mode
        enum class hwtrigmodeVal {
            v0=0x00000000,     ///<FTM clears the TRIGj bit when the hardware trigger j is detected, where j = 0, 1,2.
            v1=0x00000001,     ///<FTM does not clear the TRIGj bit when the hardware trigger j is detected, where j = 0, 1,2.
        };
        namespace hwtrigmodeValC{
            constexpr MPL::Value<hwtrigmodeVal,hwtrigmodeVal::v0> v0{};
            constexpr MPL::Value<hwtrigmodeVal,hwtrigmodeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,hwtrigmodeVal> hwtrigmode{}; 
        ///CNTIN Register Synchronization
        enum class cntincVal {
            v0=0x00000000,     ///<CNTIN register is updated with its buffer value at all rising edges of system clock.
            v1=0x00000001,     ///<CNTIN register is updated with its buffer value by the PWM synchronization.
        };
        namespace cntincValC{
            constexpr MPL::Value<cntincVal,cntincVal::v0> v0{};
            constexpr MPL::Value<cntincVal,cntincVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cntincVal> cntinc{}; 
        ///INVCTRL Register Synchronization
        enum class invcVal {
            v0=0x00000000,     ///<INVCTRL register is updated with its buffer value at all rising edges of system clock.
            v1=0x00000001,     ///<INVCTRL register is updated with its buffer value by the PWM synchronization.
        };
        namespace invcValC{
            constexpr MPL::Value<invcVal,invcVal::v0> v0{};
            constexpr MPL::Value<invcVal,invcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,invcVal> invc{}; 
        ///SWOCTRL Register Synchronization
        enum class swocVal {
            v0=0x00000000,     ///<SWOCTRL register is updated with its buffer value at all rising edges of system clock.
            v1=0x00000001,     ///<SWOCTRL register is updated with its buffer value by the PWM synchronization.
        };
        namespace swocValC{
            constexpr MPL::Value<swocVal,swocVal::v0> v0{};
            constexpr MPL::Value<swocVal,swocVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,swocVal> swoc{}; 
        ///Synchronization Mode
        enum class syncmodeVal {
            v0=0x00000000,     ///<Legacy PWM synchronization is selected.
            v1=0x00000001,     ///<Enhanced PWM synchronization is selected.
        };
        namespace syncmodeValC{
            constexpr MPL::Value<syncmodeVal,syncmodeVal::v0> v0{};
            constexpr MPL::Value<syncmodeVal,syncmodeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,syncmodeVal> syncmode{}; 
        ///no description available
        enum class swrstcntVal {
            v0=0x00000000,     ///<The software trigger does not activate the FTM counter synchronization.
            v1=0x00000001,     ///<The software trigger activates the FTM counter synchronization.
        };
        namespace swrstcntValC{
            constexpr MPL::Value<swrstcntVal,swrstcntVal::v0> v0{};
            constexpr MPL::Value<swrstcntVal,swrstcntVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,swrstcntVal> swrstcnt{}; 
        ///no description available
        enum class swwrbufVal {
            v0=0x00000000,     ///<The software trigger does not activate MOD, CNTIN, and CV registers synchronization.
            v1=0x00000001,     ///<The software trigger activates MOD, CNTIN, and CV registers synchronization.
        };
        namespace swwrbufValC{
            constexpr MPL::Value<swwrbufVal,swwrbufVal::v0> v0{};
            constexpr MPL::Value<swwrbufVal,swwrbufVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,swwrbufVal> swwrbuf{}; 
        ///no description available
        enum class swomVal {
            v0=0x00000000,     ///<The software trigger does not activate the OUTMASK register synchronization.
            v1=0x00000001,     ///<The software trigger activates the OUTMASK register synchronization.
        };
        namespace swomValC{
            constexpr MPL::Value<swomVal,swomVal::v0> v0{};
            constexpr MPL::Value<swomVal,swomVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,swomVal> swom{}; 
        ///no description available
        enum class swinvcVal {
            v0=0x00000000,     ///<The software trigger does not activate the INVCTRL register synchronization.
            v1=0x00000001,     ///<The software trigger activates the INVCTRL register synchronization.
        };
        namespace swinvcValC{
            constexpr MPL::Value<swinvcVal,swinvcVal::v0> v0{};
            constexpr MPL::Value<swinvcVal,swinvcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,swinvcVal> swinvc{}; 
        ///no description available
        enum class swsocVal {
            v0=0x00000000,     ///<The software trigger does not activate the SWOCTRL register synchronization.
            v1=0x00000001,     ///<The software trigger activates the SWOCTRL register synchronization.
        };
        namespace swsocValC{
            constexpr MPL::Value<swsocVal,swsocVal::v0> v0{};
            constexpr MPL::Value<swsocVal,swsocVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,swsocVal> swsoc{}; 
        ///no description available
        enum class hwrstcntVal {
            v0=0x00000000,     ///<A hardware trigger does not activate the FTM counter synchronization.
            v1=0x00000001,     ///<A hardware trigger activates the FTM counter synchronization.
        };
        namespace hwrstcntValC{
            constexpr MPL::Value<hwrstcntVal,hwrstcntVal::v0> v0{};
            constexpr MPL::Value<hwrstcntVal,hwrstcntVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,hwrstcntVal> hwrstcnt{}; 
        ///no description available
        enum class hwwrbufVal {
            v0=0x00000000,     ///<A hardware trigger does not activate MOD, CNTIN, and CV registers synchronization.
            v1=0x00000001,     ///<A hardware trigger activates MOD, CNTIN, and CV registers synchronization.
        };
        namespace hwwrbufValC{
            constexpr MPL::Value<hwwrbufVal,hwwrbufVal::v0> v0{};
            constexpr MPL::Value<hwwrbufVal,hwwrbufVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,hwwrbufVal> hwwrbuf{}; 
        ///no description available
        enum class hwomVal {
            v0=0x00000000,     ///<A hardware trigger does not activate the OUTMASK register synchronization.
            v1=0x00000001,     ///<A hardware trigger activates the OUTMASK register synchronization.
        };
        namespace hwomValC{
            constexpr MPL::Value<hwomVal,hwomVal::v0> v0{};
            constexpr MPL::Value<hwomVal,hwomVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,hwomVal> hwom{}; 
        ///no description available
        enum class hwinvcVal {
            v0=0x00000000,     ///<A hardware trigger does not activate the INVCTRL register synchronization.
            v1=0x00000001,     ///<A hardware trigger activates the INVCTRL register synchronization.
        };
        namespace hwinvcValC{
            constexpr MPL::Value<hwinvcVal,hwinvcVal::v0> v0{};
            constexpr MPL::Value<hwinvcVal,hwinvcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,hwinvcVal> hwinvc{}; 
        ///no description available
        enum class hwsocVal {
            v0=0x00000000,     ///<A hardware trigger does not activate the SWOCTRL register synchronization.
            v1=0x00000001,     ///<A hardware trigger activates the SWOCTRL register synchronization.
        };
        namespace hwsocValC{
            constexpr MPL::Value<hwsocVal,hwsocVal::v0> v0{};
            constexpr MPL::Value<hwsocVal,hwsocVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,hwsocVal> hwsoc{}; 
    }
    namespace Ftm2Invctrl{    ///<FTM Inverting Control
        using Addr = Register::Address<0x4003a090,0xfffffff0,0,unsigned>;
        ///Pair Channels 0 Inverting Enable
        enum class inv0enVal {
            v0=0x00000000,     ///<Inverting is disabled.
            v1=0x00000001,     ///<Inverting is enabled.
        };
        namespace inv0enValC{
            constexpr MPL::Value<inv0enVal,inv0enVal::v0> v0{};
            constexpr MPL::Value<inv0enVal,inv0enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,inv0enVal> inv0en{}; 
        ///Pair Channels 1 Inverting Enable
        enum class inv1enVal {
            v0=0x00000000,     ///<Inverting is disabled.
            v1=0x00000001,     ///<Inverting is enabled.
        };
        namespace inv1enValC{
            constexpr MPL::Value<inv1enVal,inv1enVal::v0> v0{};
            constexpr MPL::Value<inv1enVal,inv1enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inv1enVal> inv1en{}; 
        ///Pair Channels 2 Inverting Enable
        enum class inv2enVal {
            v0=0x00000000,     ///<Inverting is disabled.
            v1=0x00000001,     ///<Inverting is enabled.
        };
        namespace inv2enValC{
            constexpr MPL::Value<inv2enVal,inv2enVal::v0> v0{};
            constexpr MPL::Value<inv2enVal,inv2enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inv2enVal> inv2en{}; 
        ///Pair Channels 3 Inverting Enable
        enum class inv3enVal {
            v0=0x00000000,     ///<Inverting is disabled.
            v1=0x00000001,     ///<Inverting is enabled.
        };
        namespace inv3enValC{
            constexpr MPL::Value<inv3enVal,inv3enVal::v0> v0{};
            constexpr MPL::Value<inv3enVal,inv3enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,inv3enVal> inv3en{}; 
    }
    namespace Ftm2Swoctrl{    ///<FTM Software Output Control
        using Addr = Register::Address<0x4003a094,0xffff0000,0,unsigned>;
        ///Channel 0 Software Output Control Enable
        enum class ch0ocVal {
            v0=0x00000000,     ///<The channel output is not affected by software output control.
            v1=0x00000001,     ///<The channel output is affected by software output control.
        };
        namespace ch0ocValC{
            constexpr MPL::Value<ch0ocVal,ch0ocVal::v0> v0{};
            constexpr MPL::Value<ch0ocVal,ch0ocVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0ocVal> ch0oc{}; 
        ///Channel 1 Software Output Control Enable
        enum class ch1ocVal {
            v0=0x00000000,     ///<The channel output is not affected by software output control.
            v1=0x00000001,     ///<The channel output is affected by software output control.
        };
        namespace ch1ocValC{
            constexpr MPL::Value<ch1ocVal,ch1ocVal::v0> v0{};
            constexpr MPL::Value<ch1ocVal,ch1ocVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1ocVal> ch1oc{}; 
        ///Channel 2 Software Output Control Enable
        enum class ch2ocVal {
            v0=0x00000000,     ///<The channel output is not affected by software output control.
            v1=0x00000001,     ///<The channel output is affected by software output control.
        };
        namespace ch2ocValC{
            constexpr MPL::Value<ch2ocVal,ch2ocVal::v0> v0{};
            constexpr MPL::Value<ch2ocVal,ch2ocVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2ocVal> ch2oc{}; 
        ///Channel 3 Software Output Control Enable
        enum class ch3ocVal {
            v0=0x00000000,     ///<The channel output is not affected by software output control.
            v1=0x00000001,     ///<The channel output is affected by software output control.
        };
        namespace ch3ocValC{
            constexpr MPL::Value<ch3ocVal,ch3ocVal::v0> v0{};
            constexpr MPL::Value<ch3ocVal,ch3ocVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3ocVal> ch3oc{}; 
        ///Channel 4 Software Output Control Enable
        enum class ch4ocVal {
            v0=0x00000000,     ///<The channel output is not affected by software output control.
            v1=0x00000001,     ///<The channel output is affected by software output control.
        };
        namespace ch4ocValC{
            constexpr MPL::Value<ch4ocVal,ch4ocVal::v0> v0{};
            constexpr MPL::Value<ch4ocVal,ch4ocVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4ocVal> ch4oc{}; 
        ///Channel 5 Software Output Control Enable
        enum class ch5ocVal {
            v0=0x00000000,     ///<The channel output is not affected by software output control.
            v1=0x00000001,     ///<The channel output is affected by software output control.
        };
        namespace ch5ocValC{
            constexpr MPL::Value<ch5ocVal,ch5ocVal::v0> v0{};
            constexpr MPL::Value<ch5ocVal,ch5ocVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5ocVal> ch5oc{}; 
        ///Channel 6 Software Output Control Enable
        enum class ch6ocVal {
            v0=0x00000000,     ///<The channel output is not affected by software output control.
            v1=0x00000001,     ///<The channel output is affected by software output control.
        };
        namespace ch6ocValC{
            constexpr MPL::Value<ch6ocVal,ch6ocVal::v0> v0{};
            constexpr MPL::Value<ch6ocVal,ch6ocVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6ocVal> ch6oc{}; 
        ///Channel 7 Software Output Control Enable
        enum class ch7ocVal {
            v0=0x00000000,     ///<The channel output is not affected by software output control.
            v1=0x00000001,     ///<The channel output is affected by software output control.
        };
        namespace ch7ocValC{
            constexpr MPL::Value<ch7ocVal,ch7ocVal::v0> v0{};
            constexpr MPL::Value<ch7ocVal,ch7ocVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7ocVal> ch7oc{}; 
        ///Channel 0 Software Output Control Value
        enum class ch0ocvVal {
            v0=0x00000000,     ///<The software output control forces 0 to the channel output.
            v1=0x00000001,     ///<The software output control forces 1 to the channel output.
        };
        namespace ch0ocvValC{
            constexpr MPL::Value<ch0ocvVal,ch0ocvVal::v0> v0{};
            constexpr MPL::Value<ch0ocvVal,ch0ocvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch0ocvVal> ch0ocv{}; 
        ///Channel 1 Software Output Control Value
        enum class ch1ocvVal {
            v0=0x00000000,     ///<The software output control forces 0 to the channel output.
            v1=0x00000001,     ///<The software output control forces 1 to the channel output.
        };
        namespace ch1ocvValC{
            constexpr MPL::Value<ch1ocvVal,ch1ocvVal::v0> v0{};
            constexpr MPL::Value<ch1ocvVal,ch1ocvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch1ocvVal> ch1ocv{}; 
        ///Channel 2 Software Output Control Value
        enum class ch2ocvVal {
            v0=0x00000000,     ///<The software output control forces 0 to the channel output.
            v1=0x00000001,     ///<The software output control forces 1 to the channel output.
        };
        namespace ch2ocvValC{
            constexpr MPL::Value<ch2ocvVal,ch2ocvVal::v0> v0{};
            constexpr MPL::Value<ch2ocvVal,ch2ocvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch2ocvVal> ch2ocv{}; 
        ///Channel 3 Software Output Control Value
        enum class ch3ocvVal {
            v0=0x00000000,     ///<The software output control forces 0 to the channel output.
            v1=0x00000001,     ///<The software output control forces 1 to the channel output.
        };
        namespace ch3ocvValC{
            constexpr MPL::Value<ch3ocvVal,ch3ocvVal::v0> v0{};
            constexpr MPL::Value<ch3ocvVal,ch3ocvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch3ocvVal> ch3ocv{}; 
        ///Channel 4 Software Output Control Value
        enum class ch4ocvVal {
            v0=0x00000000,     ///<The software output control forces 0 to the channel output.
            v1=0x00000001,     ///<The software output control forces 1 to the channel output.
        };
        namespace ch4ocvValC{
            constexpr MPL::Value<ch4ocvVal,ch4ocvVal::v0> v0{};
            constexpr MPL::Value<ch4ocvVal,ch4ocvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch4ocvVal> ch4ocv{}; 
        ///Channel 5 Software Output Control Value
        enum class ch5ocvVal {
            v0=0x00000000,     ///<The software output control forces 0 to the channel output.
            v1=0x00000001,     ///<The software output control forces 1 to the channel output.
        };
        namespace ch5ocvValC{
            constexpr MPL::Value<ch5ocvVal,ch5ocvVal::v0> v0{};
            constexpr MPL::Value<ch5ocvVal,ch5ocvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch5ocvVal> ch5ocv{}; 
        ///Channel 6 Software Output Control Value
        enum class ch6ocvVal {
            v0=0x00000000,     ///<The software output control forces 0 to the channel output.
            v1=0x00000001,     ///<The software output control forces 1 to the channel output.
        };
        namespace ch6ocvValC{
            constexpr MPL::Value<ch6ocvVal,ch6ocvVal::v0> v0{};
            constexpr MPL::Value<ch6ocvVal,ch6ocvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch6ocvVal> ch6ocv{}; 
        ///Channel 7 Software Output Control Value
        enum class ch7ocvVal {
            v0=0x00000000,     ///<The software output control forces 0 to the channel output.
            v1=0x00000001,     ///<The software output control forces 1 to the channel output.
        };
        namespace ch7ocvValC{
            constexpr MPL::Value<ch7ocvVal,ch7ocvVal::v0> v0{};
            constexpr MPL::Value<ch7ocvVal,ch7ocvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch7ocvVal> ch7ocv{}; 
    }
    namespace Ftm2Pwmload{    ///<FTM PWM Load
        using Addr = Register::Address<0x4003a098,0xfffffd00,0,unsigned>;
        ///Channel 0 Select
        enum class ch0selVal {
            v0=0x00000000,     ///<Do not include the channel in the matching process.
            v1=0x00000001,     ///<Include the channel in the matching process.
        };
        namespace ch0selValC{
            constexpr MPL::Value<ch0selVal,ch0selVal::v0> v0{};
            constexpr MPL::Value<ch0selVal,ch0selVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0selVal> ch0sel{}; 
        ///Channel 1 Select
        enum class ch1selVal {
            v0=0x00000000,     ///<Do not include the channel in the matching process.
            v1=0x00000001,     ///<Include the channel in the matching process.
        };
        namespace ch1selValC{
            constexpr MPL::Value<ch1selVal,ch1selVal::v0> v0{};
            constexpr MPL::Value<ch1selVal,ch1selVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1selVal> ch1sel{}; 
        ///Channel 2 Select
        enum class ch2selVal {
            v0=0x00000000,     ///<Do not include the channel in the matching process.
            v1=0x00000001,     ///<Include the channel in the matching process.
        };
        namespace ch2selValC{
            constexpr MPL::Value<ch2selVal,ch2selVal::v0> v0{};
            constexpr MPL::Value<ch2selVal,ch2selVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2selVal> ch2sel{}; 
        ///Channel 3 Select
        enum class ch3selVal {
            v0=0x00000000,     ///<Do not include the channel in the matching process.
            v1=0x00000001,     ///<Include the channel in the matching process.
        };
        namespace ch3selValC{
            constexpr MPL::Value<ch3selVal,ch3selVal::v0> v0{};
            constexpr MPL::Value<ch3selVal,ch3selVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3selVal> ch3sel{}; 
        ///Channel 4 Select
        enum class ch4selVal {
            v0=0x00000000,     ///<Do not include the channel in the matching process.
            v1=0x00000001,     ///<Include the channel in the matching process.
        };
        namespace ch4selValC{
            constexpr MPL::Value<ch4selVal,ch4selVal::v0> v0{};
            constexpr MPL::Value<ch4selVal,ch4selVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4selVal> ch4sel{}; 
        ///Channel 5 Select
        enum class ch5selVal {
            v0=0x00000000,     ///<Do not include the channel in the matching process.
            v1=0x00000001,     ///<Include the channel in the matching process.
        };
        namespace ch5selValC{
            constexpr MPL::Value<ch5selVal,ch5selVal::v0> v0{};
            constexpr MPL::Value<ch5selVal,ch5selVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5selVal> ch5sel{}; 
        ///Channel 6 Select
        enum class ch6selVal {
            v0=0x00000000,     ///<Do not include the channel in the matching process.
            v1=0x00000001,     ///<Include the channel in the matching process.
        };
        namespace ch6selValC{
            constexpr MPL::Value<ch6selVal,ch6selVal::v0> v0{};
            constexpr MPL::Value<ch6selVal,ch6selVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6selVal> ch6sel{}; 
        ///Channel 7 Select
        enum class ch7selVal {
            v0=0x00000000,     ///<Do not include the channel in the matching process.
            v1=0x00000001,     ///<Include the channel in the matching process.
        };
        namespace ch7selValC{
            constexpr MPL::Value<ch7selVal,ch7selVal::v0> v0{};
            constexpr MPL::Value<ch7selVal,ch7selVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7selVal> ch7sel{}; 
        ///Load Enable
        enum class ldokVal {
            v0=0x00000000,     ///<Loading updated values is disabled.
            v1=0x00000001,     ///<Loading updated values is enabled.
        };
        namespace ldokValC{
            constexpr MPL::Value<ldokVal,ldokVal::v0> v0{};
            constexpr MPL::Value<ldokVal,ldokVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ldokVal> ldok{}; 
    }
}
