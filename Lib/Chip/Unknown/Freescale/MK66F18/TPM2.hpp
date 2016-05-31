#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Timer/PWM Module
    namespace Tpm2Sc{    ///<Status and Control
        using Addr = Register::Address<0x400ca000,0x00000000,0x00000000,unsigned>;
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
            v00=0x00000000,     ///<TPM counter is disabled
            v01=0x00000001,     ///<TPM counter increments on every TPM counter clock
            v10=0x00000002,     ///<TPM counter increments on rising edge of TPM_EXTCLK synchronized to the TPM counter clock
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,CmodVal> cmod{}; 
        namespace CmodValC{
            constexpr Register::FieldValue<decltype(cmod)::Type,CmodVal::v00> v00{};
            constexpr Register::FieldValue<decltype(cmod)::Type,CmodVal::v01> v01{};
            constexpr Register::FieldValue<decltype(cmod)::Type,CmodVal::v10> v10{};
            constexpr Register::FieldValue<decltype(cmod)::Type,CmodVal::v11> v11{};
        }
        ///Center-Aligned PWM Select
        enum class CpwmsVal {
            v0=0x00000000,     ///<TPM counter operates in up counting mode.
            v1=0x00000001,     ///<TPM counter operates in up-down counting mode.
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
            v0=0x00000000,     ///<TPM counter has not overflowed.
            v1=0x00000001,     ///<TPM counter has overflowed.
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace Tpm2Cnt{    ///<Counter
        using Addr = Register::Address<0x400ca004,0x00000000,0x00000000,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace Tpm2Mod{    ///<Modulo
        using Addr = Register::Address<0x400ca008,0x00000000,0x00000000,unsigned>;
        ///Modulo value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace Tpm2Status{    ///<Capture and Compare Status
        using Addr = Register::Address<0x400ca050,0x00000000,0x00000000,unsigned>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Timer Overflow Flag
        enum class TofVal {
            v0=0x00000000,     ///<TPM counter has not overflowed.
            v1=0x00000001,     ///<TPM counter has overflowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,TofVal> tof{}; 
        namespace TofValC{
            constexpr Register::FieldValue<decltype(tof)::Type,TofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tof)::Type,TofVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace Tpm2Combine{    ///<Combine Channel Register
        using Addr = Register::Address<0x400ca064,0x00000000,0x00000000,unsigned>;
        ///Combine Channels 0 and 1
        enum class Combine0Val {
            v0=0x00000000,     ///<Channels 0 and 1 are independent.
            v1=0x00000001,     ///<Channels 0 and 1 are combined.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Combine0Val> combine0{}; 
        namespace Combine0ValC{
            constexpr Register::FieldValue<decltype(combine0)::Type,Combine0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(combine0)::Type,Combine0Val::v1> v1{};
        }
        ///Combine Channel 0 and 1 Swap
        enum class Comswap0Val {
            v0=0x00000000,     ///<Even channel is used for input capture and 1st compare.
            v1=0x00000001,     ///<Odd channel is used for input capture and 1st compare.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Comswap0Val> comswap0{}; 
        namespace Comswap0ValC{
            constexpr Register::FieldValue<decltype(comswap0)::Type,Comswap0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(comswap0)::Type,Comswap0Val::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace Tpm2Pol{    ///<Channel Polarity
        using Addr = Register::Address<0x400ca070,0x00000000,0x00000000,unsigned>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace Tpm2Filter{    ///<Filter Control
        using Addr = Register::Address<0x400ca078,0x00000000,0x00000000,unsigned>;
        ///Channel 0 Filter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ch0fval{}; 
        ///Channel 1 Filter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ch1fval{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace Tpm2Qdctrl{    ///<Quadrature Decoder Control and Status
        using Addr = Register::Address<0x400ca080,0x00000000,0x00000000,unsigned>;
        ///no description available
        enum class QuadenVal {
            v0=0x00000000,     ///<Quadrature decoder mode is disabled.
            v1=0x00000001,     ///<Quadrature decoder mode is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,QuadenVal> quaden{}; 
        namespace QuadenValC{
            constexpr Register::FieldValue<decltype(quaden)::Type,QuadenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(quaden)::Type,QuadenVal::v1> v1{};
        }
        ///no description available
        enum class TofdirVal {
            v0=0x00000000,     ///<TOF bit was set on the bottom of counting. There was an FTM counter decrement and FTM counter changes from its minimum value (zero) to its maximum value (MOD register).
            v1=0x00000001,     ///<TOF bit was set on the top of counting. There was an FTM counter increment and FTM counter changes from its maximum value (MOD register) to its minimum value (zero).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TofdirVal> tofdir{}; 
        namespace TofdirValC{
            constexpr Register::FieldValue<decltype(tofdir)::Type,TofdirVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tofdir)::Type,TofdirVal::v1> v1{};
        }
        ///Counter Direction in Quadrature Decode Mode
        enum class QuadirVal {
            v0=0x00000000,     ///<Counter direction is decreasing (counter decrement).
            v1=0x00000001,     ///<Counter direction is increasing (counter increment).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,QuadirVal> quadir{}; 
        namespace QuadirValC{
            constexpr Register::FieldValue<decltype(quadir)::Type,QuadirVal::v0> v0{};
            constexpr Register::FieldValue<decltype(quadir)::Type,QuadirVal::v1> v1{};
        }
        ///Quadrature Decoder Mode
        enum class QuadmodeVal {
            v0=0x00000000,     ///<Phase encoding mode.
            v1=0x00000001,     ///<Count and direction encoding mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,QuadmodeVal> quadmode{}; 
        namespace QuadmodeValC{
            constexpr Register::FieldValue<decltype(quadmode)::Type,QuadmodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(quadmode)::Type,QuadmodeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace Tpm2Conf{    ///<Configuration
        using Addr = Register::Address<0x400ca084,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Doze Enable
        enum class DozeenVal {
            v0=0x00000000,     ///<Internal TPM counter continues in Doze mode.
            v1=0x00000001,     ///<Internal TPM counter is paused and does not increment during Doze mode. Trigger inputs and input capture events are also ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DozeenVal> dozeen{}; 
        namespace DozeenValC{
            constexpr Register::FieldValue<decltype(dozeen)::Type,DozeenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dozeen)::Type,DozeenVal::v1> v1{};
        }
        ///Debug Mode
        enum class DbgmodeVal {
            v00=0x00000000,     ///<TPM counter is paused and does not increment during debug mode. Trigger inputs and input capture events are also ignored.
            v11=0x00000003,     ///<TPM counter continues in debug mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,DbgmodeVal> dbgmode{}; 
        namespace DbgmodeValC{
            constexpr Register::FieldValue<decltype(dbgmode)::Type,DbgmodeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(dbgmode)::Type,DbgmodeVal::v11> v11{};
        }
        ///Global Time Base Synchronization
        enum class GtbsyncVal {
            v0=0x00000000,     ///<Global timebase synchronization disabled.
            v1=0x00000001,     ///<Global timebase synchronization enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,GtbsyncVal> gtbsync{}; 
        namespace GtbsyncValC{
            constexpr Register::FieldValue<decltype(gtbsync)::Type,GtbsyncVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gtbsync)::Type,GtbsyncVal::v1> v1{};
        }
        ///Global time base enable
        enum class GtbeenVal {
            v0=0x00000000,     ///<All channels use the internally generated TPM counter as their timebase
            v1=0x00000001,     ///<All channels use an externally generated global timebase as their timebase
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,GtbeenVal> gtbeen{}; 
        namespace GtbeenValC{
            constexpr Register::FieldValue<decltype(gtbeen)::Type,GtbeenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gtbeen)::Type,GtbeenVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Counter Start on Trigger
        enum class CsotVal {
            v0=0x00000000,     ///<TPM counter starts to increment immediately, once it is enabled.
            v1=0x00000001,     ///<TPM counter only starts to increment when it a rising edge on the selected input trigger is detected, after it has been enabled or after it has stopped due to overflow.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,CsotVal> csot{}; 
        namespace CsotValC{
            constexpr Register::FieldValue<decltype(csot)::Type,CsotVal::v0> v0{};
            constexpr Register::FieldValue<decltype(csot)::Type,CsotVal::v1> v1{};
        }
        ///Counter Stop On Overflow
        enum class CsooVal {
            v0=0x00000000,     ///<TPM counter continues incrementing or decrementing after overflow
            v1=0x00000001,     ///<TPM counter stops incrementing or decrementing after overflow.
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
        ///Counter Pause On Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cpot{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Trigger Polarity
        enum class TrgpolVal {
            v0=0x00000000,     ///<Trigger is active high.
            v1=0x00000001,     ///<Trigger is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,TrgpolVal> trgpol{}; 
        namespace TrgpolValC{
            constexpr Register::FieldValue<decltype(trgpol)::Type,TrgpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trgpol)::Type,TrgpolVal::v1> v1{};
        }
        ///Trigger Source
        enum class TrgsrcVal {
            v0=0x00000000,     ///<Trigger source selected by TRGSEL is external.
            v1=0x00000001,     ///<Trigger source selected by TRGSEL is internal (channel pin input capture).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TrgsrcVal> trgsrc{}; 
        namespace TrgsrcValC{
            constexpr Register::FieldValue<decltype(trgsrc)::Type,TrgsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trgsrc)::Type,TrgsrcVal::v1> v1{};
        }
        ///Trigger Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trgsel{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace Tpm2C0sc{    ///<Channel (n) Status and Control
        using Addr = Register::Address<0x400ca00c,0x00000000,0x00000000,unsigned>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace Tpm2C1sc{    ///<Channel (n) Status and Control
        using Addr = Register::Address<0x400ca014,0x00000000,0x00000000,unsigned>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace Tpm2C0v{    ///<Channel (n) Value
        using Addr = Register::Address<0x400ca010,0x00000000,0x00000000,unsigned>;
        ///Channel Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace Tpm2C1v{    ///<Channel (n) Value
        using Addr = Register::Address<0x400ca018,0x00000000,0x00000000,unsigned>;
        ///Channel Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
}
