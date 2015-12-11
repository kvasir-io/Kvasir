#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Timer/PWM Module
    namespace Tpm1Sc{    ///<Status and Control
        using Addr = Register::Address<0x40039000,0xfffffe00,0,unsigned>;
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
        ///Clock Mode Selection
        enum class CmodVal {
            v00=0x00000000,     ///<LPTPM counter is disabled
            v01=0x00000001,     ///<LPTPM counter increments on every LPTPM counter clock
            v10=0x00000002,     ///<LPTPM counter increments on rising edge of LPTPM_EXTCLK synchronized to the LPTPM counter clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,CmodVal> cmod{}; 
        namespace CmodValC{
            constexpr Register::FieldValue<decltype(cmod)::Type,CmodVal::v00> v00{};
            constexpr Register::FieldValue<decltype(cmod)::Type,CmodVal::v01> v01{};
            constexpr Register::FieldValue<decltype(cmod)::Type,CmodVal::v10> v10{};
        }
        ///Center-aligned PWM Select
        enum class CpwmsVal {
            v0=0x00000000,     ///<LPTPM counter operates in up counting mode.
            v1=0x00000001,     ///<LPTPM counter operates in up-down counting mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,CpwmsVal> cpwms{}; 
        namespace CpwmsValC{
            constexpr Register::FieldValue<decltype(cpwms)::Type,CpwmsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpwms)::Type,CpwmsVal::v1> v1{};
        }
        ///Timer Overflow Interrupt Enable
        enum class ToieVal {
            v0=0x00000000,     ///<Disable TOF interrupts. Use software polling or DMA request.
            v1=0x00000001,     ///<Enable TOF interrupts. An interrupt is generated when TOF equals one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ToieVal> toie{}; 
        namespace ToieValC{
            constexpr Register::FieldValue<decltype(toie)::Type,ToieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(toie)::Type,ToieVal::v1> v1{};
        }
        ///Timer Overflow Flag
        enum class TofVal {
            v0=0x00000000,     ///<LPTPM counter has not overflowed.
            v1=0x00000001,     ///<LPTPM counter has overflowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TofVal> tof{}; 
        namespace TofValC{
            constexpr Register::FieldValue<decltype(tof)::Type,TofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tof)::Type,TofVal::v1> v1{};
        }
        ///DMA Enable
        enum class DmaVal {
            v0=0x00000000,     ///<Disables DMA transfers.
            v1=0x00000001,     ///<Enables DMA transfers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,DmaVal> dma{}; 
        namespace DmaValC{
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::v1> v1{};
        }
    }
    namespace Tpm1Cnt{    ///<Counter
        using Addr = Register::Address<0x40039004,0xffff0000,0,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Tpm1Mod{    ///<Modulo
        using Addr = Register::Address<0x40039008,0xffff0000,0,unsigned>;
        ///Modulo value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
    }
    namespace Tpm1C0sc{    ///<Channel (n) Status and Control
        using Addr = Register::Address<0x4003900c,0xffffff02,0,unsigned>;
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
            v0=0x00000000,     ///<Disable channel interrupts.
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
    namespace Tpm1C1sc{    ///<Channel (n) Status and Control
        using Addr = Register::Address<0x40039014,0xffffff02,0,unsigned>;
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
            v0=0x00000000,     ///<Disable channel interrupts.
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
    namespace Tpm1C0v{    ///<Channel (n) Value
        using Addr = Register::Address<0x40039010,0xffff0000,0,unsigned>;
        ///Channel Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace Tpm1C1v{    ///<Channel (n) Value
        using Addr = Register::Address<0x40039018,0xffff0000,0,unsigned>;
        ///Channel Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace Tpm1Status{    ///<Capture and Compare Status
        using Addr = Register::Address<0x40039050,0xfffffefc,0,unsigned>;
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
        ///Timer Overflow Flag
        enum class TofVal {
            v0=0x00000000,     ///<LPTPM counter has not overflowed.
            v1=0x00000001,     ///<LPTPM counter has overflowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,TofVal> tof{}; 
        namespace TofValC{
            constexpr Register::FieldValue<decltype(tof)::Type,TofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tof)::Type,TofVal::v1> v1{};
        }
    }
    namespace Tpm1Conf{    ///<Configuration
        using Addr = Register::Address<0x40039084,0xf0f8fd1f,0,unsigned>;
        ///Doze Enable
        enum class DozeenVal {
            v0=0x00000000,     ///<Internal LPTPM counter continues in Doze mode.
            v1=0x00000001,     ///<Internal LPTPM counter is paused and does not increment during Doze mode. Trigger inputs and input capture events are also ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DozeenVal> dozeen{}; 
        namespace DozeenValC{
            constexpr Register::FieldValue<decltype(dozeen)::Type,DozeenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dozeen)::Type,DozeenVal::v1> v1{};
        }
        ///Debug Mode
        enum class DbgmodeVal {
            v00=0x00000000,     ///<LPTPM counter is paused and does not increment during debug mode. Trigger inputs and input capture events are also ignored.
            v11=0x00000003,     ///<LPTPM counter continues in debug mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,DbgmodeVal> dbgmode{}; 
        namespace DbgmodeValC{
            constexpr Register::FieldValue<decltype(dbgmode)::Type,DbgmodeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(dbgmode)::Type,DbgmodeVal::v11> v11{};
        }
        ///Global time base enable
        enum class GtbeenVal {
            v0=0x00000000,     ///<All channels use the internally generated LPTPM counter as their timebase
            v1=0x00000001,     ///<All channels use an externally generated global timebase as their timebase
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,GtbeenVal> gtbeen{}; 
        namespace GtbeenValC{
            constexpr Register::FieldValue<decltype(gtbeen)::Type,GtbeenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gtbeen)::Type,GtbeenVal::v1> v1{};
        }
        ///Counter Start on Trigger
        enum class CsotVal {
            v0=0x00000000,     ///<LPTPM counter starts to increment immediately, once it is enabled.
            v1=0x00000001,     ///<LPTPM counter only starts to increment when it a rising edge on the selected input trigger is detected, after it has been enabled or after it has stopped due to overflow.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,CsotVal> csot{}; 
        namespace CsotValC{
            constexpr Register::FieldValue<decltype(csot)::Type,CsotVal::v0> v0{};
            constexpr Register::FieldValue<decltype(csot)::Type,CsotVal::v1> v1{};
        }
        ///Counter Stop On Overflow
        enum class CsooVal {
            v0=0x00000000,     ///<LPTPM counter continues incrementing or decrementing after overflow
            v1=0x00000001,     ///<LPTPM counter stops incrementing or decrementing after overflow.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,CsooVal> csoo{}; 
        namespace CsooValC{
            constexpr Register::FieldValue<decltype(csoo)::Type,CsooVal::v0> v0{};
            constexpr Register::FieldValue<decltype(csoo)::Type,CsooVal::v1> v1{};
        }
        ///Counter Reload On Trigger
        enum class CrotVal {
            v0=0x00000000,     ///<Counter is not reloaded due to a rising edge on the selected input trigger
            v1=0x00000001,     ///<Counter is reloaded when a rising edge is detected on the selected input trigger
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,CrotVal> crot{}; 
        namespace CrotValC{
            constexpr Register::FieldValue<decltype(crot)::Type,CrotVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crot)::Type,CrotVal::v1> v1{};
        }
        ///Trigger Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trgsel{}; 
    }
}
