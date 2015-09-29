#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Timer/PWM Module
    namespace Tpm2Sc{    ///<Status and Control
        using Addr = Register::Address<0x400ca000,0xfffffe00,0,unsigned>;
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
        ///Clock Mode Selection
        enum class cmodVal {
            v00=0x00000000,     ///<TPM counter is disabled
            v01=0x00000001,     ///<TPM counter increments on every TPM counter clock
            v10=0x00000002,     ///<TPM counter increments on rising edge of TPM_EXTCLK synchronized to the TPM counter clock
            v11=0x00000003,     ///<Reserved
        };
        namespace cmodValC{
            constexpr MPL::Value<cmodVal,cmodVal::v00> v00{};
            constexpr MPL::Value<cmodVal,cmodVal::v01> v01{};
            constexpr MPL::Value<cmodVal,cmodVal::v10> v10{};
            constexpr MPL::Value<cmodVal,cmodVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,cmodVal> cmod{}; 
        ///Center-Aligned PWM Select
        enum class cpwmsVal {
            v0=0x00000000,     ///<TPM counter operates in up counting mode.
            v1=0x00000001,     ///<TPM counter operates in up-down counting mode.
        };
        namespace cpwmsValC{
            constexpr MPL::Value<cpwmsVal,cpwmsVal::v0> v0{};
            constexpr MPL::Value<cpwmsVal,cpwmsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,cpwmsVal> cpwms{}; 
        ///Timer Overflow Interrupt Enable
        enum class toieVal {
            v0=0x00000000,     ///<Disable TOF interrupts. Use software polling or DMA request.
            v1=0x00000001,     ///<Enable TOF interrupts. An interrupt is generated when TOF equals one.
        };
        namespace toieValC{
            constexpr MPL::Value<toieVal,toieVal::v0> v0{};
            constexpr MPL::Value<toieVal,toieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,toieVal> toie{}; 
        ///Timer Overflow Flag
        enum class tofVal {
            v0=0x00000000,     ///<TPM counter has not overflowed.
            v1=0x00000001,     ///<TPM counter has overflowed.
        };
        namespace tofValC{
            constexpr MPL::Value<tofVal,tofVal::v0> v0{};
            constexpr MPL::Value<tofVal,tofVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tofVal> tof{}; 
        ///DMA Enable
        enum class dmaVal {
            v0=0x00000000,     ///<Disables DMA transfers.
            v1=0x00000001,     ///<Enables DMA transfers.
        };
        namespace dmaValC{
            constexpr MPL::Value<dmaVal,dmaVal::v0> v0{};
            constexpr MPL::Value<dmaVal,dmaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,dmaVal> dma{}; 
    }
    namespace Tpm2Cnt{    ///<Counter
        using Addr = Register::Address<0x400ca004,0xffff0000,0,unsigned>;
        ///Counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Tpm2Mod{    ///<Modulo
        using Addr = Register::Address<0x400ca008,0xffff0000,0,unsigned>;
        ///Modulo value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
    }
    namespace Tpm2C0sc{    ///<Channel (n) Status and Control
        using Addr = Register::Address<0x400ca00c,0xffffff02,0,unsigned>;
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
            v0=0x00000000,     ///<Disable channel interrupts.
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
    namespace Tpm2C1sc{    ///<Channel (n) Status and Control
        using Addr = Register::Address<0x400ca014,0xffffff02,0,unsigned>;
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
            v0=0x00000000,     ///<Disable channel interrupts.
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
    namespace Tpm2C0v{    ///<Channel (n) Value
        using Addr = Register::Address<0x400ca010,0xffff0000,0,unsigned>;
        ///Channel Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace Tpm2C1v{    ///<Channel (n) Value
        using Addr = Register::Address<0x400ca018,0xffff0000,0,unsigned>;
        ///Channel Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace Tpm2Status{    ///<Capture and Compare Status
        using Addr = Register::Address<0x400ca050,0xfffffefc,0,unsigned>;
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
        ///Timer Overflow Flag
        enum class tofVal {
            v0=0x00000000,     ///<TPM counter has not overflowed.
            v1=0x00000001,     ///<TPM counter has overflowed.
        };
        namespace tofValC{
            constexpr MPL::Value<tofVal,tofVal::v0> v0{};
            constexpr MPL::Value<tofVal,tofVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tofVal> tof{}; 
    }
    namespace Tpm2Combine{    ///<Combine Channel Register
        using Addr = Register::Address<0x400ca064,0xfffffffc,0,unsigned>;
        ///Combine Channels 0 and 1
        enum class combine0Val {
            v0=0x00000000,     ///<Channels 0 and 1 are independent.
            v1=0x00000001,     ///<Channels 0 and 1 are combined.
        };
        namespace combine0ValC{
            constexpr MPL::Value<combine0Val,combine0Val::v0> v0{};
            constexpr MPL::Value<combine0Val,combine0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,combine0Val> combine0{}; 
        ///Combine Channel 0 and 1 Swap
        enum class comswap0Val {
            v0=0x00000000,     ///<Even channel is used for input capture and 1st compare.
            v1=0x00000001,     ///<Odd channel is used for input capture and 1st compare.
        };
        namespace comswap0ValC{
            constexpr MPL::Value<comswap0Val,comswap0Val::v0> v0{};
            constexpr MPL::Value<comswap0Val,comswap0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,comswap0Val> comswap0{}; 
    }
    namespace Tpm2Pol{    ///<Channel Polarity
        using Addr = Register::Address<0x400ca070,0xfffffffc,0,unsigned>;
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
    }
    namespace Tpm2Filter{    ///<Filter Control
        using Addr = Register::Address<0x400ca078,0xffffff00,0,unsigned>;
        ///Channel 0 Filter Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ch0fval{}; 
        ///Channel 1 Filter Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ch1fval{}; 
    }
    namespace Tpm2Qdctrl{    ///<Quadrature Decoder Control and Status
        using Addr = Register::Address<0x400ca080,0xfffffff0,0,unsigned>;
        ///no description available
        enum class quadenVal {
            v0=0x00000000,     ///<Quadrature decoder mode is disabled.
            v1=0x00000001,     ///<Quadrature decoder mode is enabled.
        };
        namespace quadenValC{
            constexpr MPL::Value<quadenVal,quadenVal::v0> v0{};
            constexpr MPL::Value<quadenVal,quadenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,quadenVal> quaden{}; 
        ///no description available
        enum class tofdirVal {
            v0=0x00000000,     ///<TOF bit was set on the bottom of counting. There was an FTM counter decrement and FTM counter changes from its minimum value (zero) to its maximum value (MOD register).
            v1=0x00000001,     ///<TOF bit was set on the top of counting. There was an FTM counter increment and FTM counter changes from its maximum value (MOD register) to its minimum value (zero).
        };
        namespace tofdirValC{
            constexpr MPL::Value<tofdirVal,tofdirVal::v0> v0{};
            constexpr MPL::Value<tofdirVal,tofdirVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tofdirVal> tofdir{}; 
        ///Counter Direction in Quadrature Decode Mode
        enum class quadirVal {
            v0=0x00000000,     ///<Counter direction is decreasing (counter decrement).
            v1=0x00000001,     ///<Counter direction is increasing (counter increment).
        };
        namespace quadirValC{
            constexpr MPL::Value<quadirVal,quadirVal::v0> v0{};
            constexpr MPL::Value<quadirVal,quadirVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,quadirVal> quadir{}; 
        ///Quadrature Decoder Mode
        enum class quadmodeVal {
            v0=0x00000000,     ///<Phase encoding mode.
            v1=0x00000001,     ///<Count and direction encoding mode.
        };
        namespace quadmodeValC{
            constexpr MPL::Value<quadmodeVal,quadmodeVal::v0> v0{};
            constexpr MPL::Value<quadmodeVal,quadmodeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,quadmodeVal> quadmode{}; 
    }
    namespace Tpm2Conf{    ///<Configuration
        using Addr = Register::Address<0x400ca084,0xf030fc1f,0,unsigned>;
        ///Doze Enable
        enum class dozeenVal {
            v0=0x00000000,     ///<Internal TPM counter continues in Doze mode.
            v1=0x00000001,     ///<Internal TPM counter is paused and does not increment during Doze mode. Trigger inputs and input capture events are also ignored.
        };
        namespace dozeenValC{
            constexpr MPL::Value<dozeenVal,dozeenVal::v0> v0{};
            constexpr MPL::Value<dozeenVal,dozeenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,dozeenVal> dozeen{}; 
        ///Debug Mode
        enum class dbgmodeVal {
            v00=0x00000000,     ///<TPM counter is paused and does not increment during debug mode. Trigger inputs and input capture events are also ignored.
            v11=0x00000003,     ///<TPM counter continues in debug mode.
        };
        namespace dbgmodeValC{
            constexpr MPL::Value<dbgmodeVal,dbgmodeVal::v00> v00{};
            constexpr MPL::Value<dbgmodeVal,dbgmodeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,dbgmodeVal> dbgmode{}; 
        ///Global Time Base Synchronization
        enum class gtbsyncVal {
            v0=0x00000000,     ///<Global timebase synchronization disabled.
            v1=0x00000001,     ///<Global timebase synchronization enabled.
        };
        namespace gtbsyncValC{
            constexpr MPL::Value<gtbsyncVal,gtbsyncVal::v0> v0{};
            constexpr MPL::Value<gtbsyncVal,gtbsyncVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,gtbsyncVal> gtbsync{}; 
        ///Global time base enable
        enum class gtbeenVal {
            v0=0x00000000,     ///<All channels use the internally generated TPM counter as their timebase
            v1=0x00000001,     ///<All channels use an externally generated global timebase as their timebase
        };
        namespace gtbeenValC{
            constexpr MPL::Value<gtbeenVal,gtbeenVal::v0> v0{};
            constexpr MPL::Value<gtbeenVal,gtbeenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,gtbeenVal> gtbeen{}; 
        ///Counter Start on Trigger
        enum class csotVal {
            v0=0x00000000,     ///<TPM counter starts to increment immediately, once it is enabled.
            v1=0x00000001,     ///<TPM counter only starts to increment when it a rising edge on the selected input trigger is detected, after it has been enabled or after it has stopped due to overflow.
        };
        namespace csotValC{
            constexpr MPL::Value<csotVal,csotVal::v0> v0{};
            constexpr MPL::Value<csotVal,csotVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,csotVal> csot{}; 
        ///Counter Stop On Overflow
        enum class csooVal {
            v0=0x00000000,     ///<TPM counter continues incrementing or decrementing after overflow
            v1=0x00000001,     ///<TPM counter stops incrementing or decrementing after overflow.
        };
        namespace csooValC{
            constexpr MPL::Value<csooVal,csooVal::v0> v0{};
            constexpr MPL::Value<csooVal,csooVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,csooVal> csoo{}; 
        ///Counter Reload On Trigger
        enum class crotVal {
            v0=0x00000000,     ///<Counter is not reloaded due to a rising edge on the selected input trigger
            v1=0x00000001,     ///<Counter is reloaded when a rising edge is detected on the selected input trigger
        };
        namespace crotValC{
            constexpr MPL::Value<crotVal,crotVal::v0> v0{};
            constexpr MPL::Value<crotVal,crotVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,crotVal> crot{}; 
        ///Counter Pause On Trigger
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cpot{}; 
        ///Trigger Polarity
        enum class trgpolVal {
            v0=0x00000000,     ///<Trigger is active high.
            v1=0x00000001,     ///<Trigger is active low.
        };
        namespace trgpolValC{
            constexpr MPL::Value<trgpolVal,trgpolVal::v0> v0{};
            constexpr MPL::Value<trgpolVal,trgpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,trgpolVal> trgpol{}; 
        ///Trigger Source
        enum class trgsrcVal {
            v0=0x00000000,     ///<Trigger source selected by TRGSEL is external.
            v1=0x00000001,     ///<Trigger source selected by TRGSEL is internal (channel pin input capture).
        };
        namespace trgsrcValC{
            constexpr MPL::Value<trgsrcVal,trgsrcVal::v0> v0{};
            constexpr MPL::Value<trgsrcVal,trgsrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,trgsrcVal> trgsrc{}; 
        ///Trigger Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trgsel{}; 
    }
}
