#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Timer/PWM Module
    namespace Tpm2Sc{    ///<Status and Control
        using Addr = Register::Address<0x4003a000,0xfffffe00,0,unsigned>;
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
            v00=0x00000000,     ///<LPTPM counter is disabled
            v01=0x00000001,     ///<LPTPM counter increments on every LPTPM counter clock
            v10=0x00000002,     ///<LPTPM counter increments on rising edge of LPTPM_EXTCLK synchronized to the LPTPM counter clock
        };
        namespace cmodValC{
            constexpr MPL::Value<cmodVal,cmodVal::v00> v00{};
            constexpr MPL::Value<cmodVal,cmodVal::v01> v01{};
            constexpr MPL::Value<cmodVal,cmodVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,cmodVal> cmod{}; 
        ///Center-aligned PWM Select
        enum class cpwmsVal {
            v0=0x00000000,     ///<LPTPM counter operates in up counting mode.
            v1=0x00000001,     ///<LPTPM counter operates in up-down counting mode.
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
            v0=0x00000000,     ///<LPTPM counter has not overflowed.
            v1=0x00000001,     ///<LPTPM counter has overflowed.
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
        using Addr = Register::Address<0x4003a004,0xffff0000,0,unsigned>;
        ///Counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Tpm2Mod{    ///<Modulo
        using Addr = Register::Address<0x4003a008,0xffff0000,0,unsigned>;
        ///Modulo value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
    }
    namespace Tpm2C0sc{    ///<Channel (n) Status and Control
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
        using Addr = Register::Address<0x4003a010,0xffff0000,0,unsigned>;
        ///Channel Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace Tpm2C1v{    ///<Channel (n) Value
        using Addr = Register::Address<0x4003a018,0xffff0000,0,unsigned>;
        ///Channel Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace Tpm2Status{    ///<Capture and Compare Status
        using Addr = Register::Address<0x4003a050,0xfffffec0,0,unsigned>;
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
        ///Timer Overflow Flag
        enum class tofVal {
            v0=0x00000000,     ///<LPTPM counter has not overflowed.
            v1=0x00000001,     ///<LPTPM counter has overflowed.
        };
        namespace tofValC{
            constexpr MPL::Value<tofVal,tofVal::v0> v0{};
            constexpr MPL::Value<tofVal,tofVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tofVal> tof{}; 
    }
    namespace Tpm2Conf{    ///<Configuration
        using Addr = Register::Address<0x4003a084,0xf0f8fd1f,0,unsigned>;
        ///Doze Enable
        enum class dozeenVal {
            v0=0x00000000,     ///<Internal LPTPM counter continues in Doze mode.
            v1=0x00000001,     ///<Internal LPTPM counter is paused and does not increment during Doze mode. Trigger inputs and input capture events are also ignored.
        };
        namespace dozeenValC{
            constexpr MPL::Value<dozeenVal,dozeenVal::v0> v0{};
            constexpr MPL::Value<dozeenVal,dozeenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,dozeenVal> dozeen{}; 
        ///Debug Mode
        enum class dbgmodeVal {
            v00=0x00000000,     ///<LPTPM counter is paused and does not increment during debug mode. Trigger inputs and input capture events are also ignored.
            v11=0x00000003,     ///<LPTPM counter continues in debug mode.
        };
        namespace dbgmodeValC{
            constexpr MPL::Value<dbgmodeVal,dbgmodeVal::v00> v00{};
            constexpr MPL::Value<dbgmodeVal,dbgmodeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,dbgmodeVal> dbgmode{}; 
        ///Global time base enable
        enum class gtbeenVal {
            v0=0x00000000,     ///<All channels use the internally generated LPTPM counter as their timebase
            v1=0x00000001,     ///<All channels use an externally generated global timebase as their timebase
        };
        namespace gtbeenValC{
            constexpr MPL::Value<gtbeenVal,gtbeenVal::v0> v0{};
            constexpr MPL::Value<gtbeenVal,gtbeenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,gtbeenVal> gtbeen{}; 
        ///Counter Start on Trigger
        enum class csotVal {
            v0=0x00000000,     ///<LPTPM counter starts to increment immediately, once it is enabled.
            v1=0x00000001,     ///<LPTPM counter only starts to increment when it a rising edge on the selected input trigger is detected, after it has been enabled or after it has stopped due to overflow.
        };
        namespace csotValC{
            constexpr MPL::Value<csotVal,csotVal::v0> v0{};
            constexpr MPL::Value<csotVal,csotVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,csotVal> csot{}; 
        ///Counter Stop On Overflow
        enum class csooVal {
            v0=0x00000000,     ///<LPTPM counter continues incrementing or decrementing after overflow
            v1=0x00000001,     ///<LPTPM counter stops incrementing or decrementing after overflow.
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
        ///Trigger Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trgsel{}; 
    }
}
