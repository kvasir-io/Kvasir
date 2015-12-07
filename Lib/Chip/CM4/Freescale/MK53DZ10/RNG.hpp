#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Random Number Generator
    namespace RngVer{    ///<RNGB Version ID Register
        using Addr = Register::Address<0x400a0000,0x0fff0000,0,unsigned>;
        ///Minor version number.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> minor{}; 
        namespace MinorValC{
        }
        ///Major version number.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> major{}; 
        namespace MajorValC{
        }
        ///Random number generator type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> type{}; 
        namespace TypeValC{
        }
    }
    namespace RngCmd{    ///<RNGB Command Register
        using Addr = Register::Address<0x400a0004,0xffffff8c,0,unsigned>;
        ///Self test.
        enum class StVal {
            v0=0x00000000,     ///<Not in self test mode.
            v1=0x00000001,     ///<Self test mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StVal> st{}; 
        namespace StValC{
            constexpr Register::FieldValue<decltype(st),StVal::v0> v0{};
            constexpr Register::FieldValue<decltype(st),StVal::v1> v1{};
        }
        ///Generate seed.
        enum class GsVal {
            v0=0x00000000,     ///<Not in seed generation mode.
            v1=0x00000001,     ///<Generate seed mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,GsVal> gs{}; 
        namespace GsValC{
            constexpr Register::FieldValue<decltype(gs),GsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gs),GsVal::v1> v1{};
        }
        ///Clear interrupt.
        enum class CiVal {
            v0=0x00000000,     ///<Do not clear interrupt.
            v1=0x00000001,     ///<Clear interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CiVal> ci{}; 
        namespace CiValC{
            constexpr Register::FieldValue<decltype(ci),CiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ci),CiVal::v1> v1{};
        }
        ///Clear error.
        enum class CeVal {
            v0=0x00000000,     ///<Do not clear errors and interrupt.
            v1=0x00000001,     ///<Clear errors and interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,CeVal> ce{}; 
        namespace CeValC{
            constexpr Register::FieldValue<decltype(ce),CeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ce),CeVal::v1> v1{};
        }
        ///Software reset.
        enum class SrVal {
            v0=0x00000000,     ///<Do not perform a software reset.
            v1=0x00000001,     ///<Software reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SrVal> sr{}; 
        namespace SrValC{
            constexpr Register::FieldValue<decltype(sr),SrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sr),SrVal::v1> v1{};
        }
    }
    namespace RngCr{    ///<RNGB Control Register
        using Addr = Register::Address<0x400a0008,0xffffff8c,0,unsigned>;
        ///FIFO underflow response mode.
        enum class FufmodVal {
            v00=0x00000000,     ///<Return all zeros and set RNG_ESR[FUFE]
            v01=0x00000001,     ///<Return all zeros and set RNG_ESR[FUFE]
            v10=0x00000002,     ///<Generate bus transfer error
            v11=0x00000003,     ///<Generate interrupt and return all zeros (Overrides RNG_CR[MASKERR])
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,FufmodVal> fufmod{}; 
        namespace FufmodValC{
            constexpr Register::FieldValue<decltype(fufmod),FufmodVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fufmod),FufmodVal::v01> v01{};
            constexpr Register::FieldValue<decltype(fufmod),FufmodVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fufmod),FufmodVal::v11> v11{};
        }
        ///Auto-reseed.
        enum class ArVal {
            v0=0x00000000,     ///<Do not enable automatic reseeding.
            v1=0x00000001,     ///<Enable automatic reseeding.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ArVal> ar{}; 
        namespace ArValC{
            constexpr Register::FieldValue<decltype(ar),ArVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ar),ArVal::v1> v1{};
        }
        ///Mask done interrupt.
        enum class MaskdoneVal {
            v0=0x00000000,     ///<No mask applied.
            v1=0x00000001,     ///<Mask applied.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MaskdoneVal> maskdone{}; 
        namespace MaskdoneValC{
            constexpr Register::FieldValue<decltype(maskdone),MaskdoneVal::v0> v0{};
            constexpr Register::FieldValue<decltype(maskdone),MaskdoneVal::v1> v1{};
        }
        ///Mask error interrupt.
        enum class MaskerrVal {
            v0=0x00000000,     ///<No mask applied.
            v1=0x00000001,     ///<Mask applied to the error interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,MaskerrVal> maskerr{}; 
        namespace MaskerrValC{
            constexpr Register::FieldValue<decltype(maskerr),MaskerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(maskerr),MaskerrVal::v1> v1{};
        }
    }
    namespace RngSr{    ///<RNGB Status Register
        using Addr = Register::Address<0x400a000c,0x001e0081,0,unsigned>;
        ///Busy.
        enum class BusyVal {
            v0=0x00000000,     ///<Not busy.
            v1=0x00000001,     ///<Busy.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BusyVal> busy{}; 
        namespace BusyValC{
            constexpr Register::FieldValue<decltype(busy),BusyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(busy),BusyVal::v1> v1{};
        }
        ///Sleep.
        enum class SlpVal {
            v0=0x00000000,     ///<RNGB is not in sleep mode.
            v1=0x00000001,     ///<RNGB is in sleep mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SlpVal> slp{}; 
        namespace SlpValC{
            constexpr Register::FieldValue<decltype(slp),SlpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(slp),SlpVal::v1> v1{};
        }
        ///Reseed needed.
        enum class RsVal {
            v0=0x00000000,     ///<RNGB does not need to be reseeded.
            v1=0x00000001,     ///<RNGB needs to be reseeded.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RsVal> rs{}; 
        namespace RsValC{
            constexpr Register::FieldValue<decltype(rs),RsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rs),RsVal::v1> v1{};
        }
        ///Self test done.
        enum class StdnVal {
            v0=0x00000000,     ///<Self test not complete.
            v1=0x00000001,     ///<Completed a self test since the last reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,StdnVal> stdn{}; 
        namespace StdnValC{
            constexpr Register::FieldValue<decltype(stdn),StdnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stdn),StdnVal::v1> v1{};
        }
        ///Seed done.
        enum class SdnVal {
            v0=0x00000000,     ///<Seed generation process not complete.
            v1=0x00000001,     ///<Completed seed generation since the last reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SdnVal> sdn{}; 
        namespace SdnValC{
            constexpr Register::FieldValue<decltype(sdn),SdnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sdn),SdnVal::v1> v1{};
        }
        ///New seed done.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nsdn{}; 
        namespace NsdnValC{
        }
        ///FIFO level.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> fifoLvl{}; 
        namespace FifolvlValC{
        }
        ///FIFO size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> fifoSize{}; 
        namespace FifosizeValC{
        }
        ///Error.
        enum class ErrVal {
            v0=0x00000000,     ///<No error.
            v1=0x00000001,     ///<Error detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ErrVal> err{}; 
        namespace ErrValC{
            constexpr Register::FieldValue<decltype(err),ErrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(err),ErrVal::v1> v1{};
        }
        ///Self Test Pass Fail.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> stPf{}; 
        namespace StpfValC{
        }
        ///Statistics test pass fail.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> statpf{}; 
        namespace StatpfValC{
        }
    }
    namespace RngEsr{    ///<RNGB Error Status Register
        using Addr = Register::Address<0x400a0010,0xffffffe0,0,unsigned>;
        ///Linear feedback shift register (LFSR) error.
        enum class LfeVal {
            v0=0x00000000,     ///<LFSRs are working properly.
            v1=0x00000001,     ///<LFSR failure has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LfeVal> lfe{}; 
        namespace LfeValC{
            constexpr Register::FieldValue<decltype(lfe),LfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lfe),LfeVal::v1> v1{};
        }
        ///Oscillator error.
        enum class OsceVal {
            v0=0x00000000,     ///<RNG oscillator is working properly.
            v1=0x00000001,     ///<Problem detected with the RNG oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OsceVal> osce{}; 
        namespace OsceValC{
            constexpr Register::FieldValue<decltype(osce),OsceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(osce),OsceVal::v1> v1{};
        }
        ///Self test error.
        enum class SteVal {
            v0=0x00000000,     ///<RNGB has not failed self test.
            v1=0x00000001,     ///<RNGB has failed self test.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SteVal> ste{}; 
        namespace SteValC{
            constexpr Register::FieldValue<decltype(ste),SteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ste),SteVal::v1> v1{};
        }
        ///Statistical test error.
        enum class SateVal {
            v0=0x00000000,     ///<RNGB has not failed the statistical tests.
            v1=0x00000001,     ///<RNGB has failed the statistical tests during initialization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SateVal> sate{}; 
        namespace SateValC{
            constexpr Register::FieldValue<decltype(sate),SateVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sate),SateVal::v1> v1{};
        }
        ///FIFO underflow error
        enum class FufeVal {
            v0=0x00000000,     ///<FIFO underflow has not occurred.
            v1=0x00000001,     ///<FIFO underflow has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,FufeVal> fufe{}; 
        namespace FufeValC{
            constexpr Register::FieldValue<decltype(fufe),FufeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fufe),FufeVal::v1> v1{};
        }
    }
    namespace RngOut{    ///<RNGB Output FIFO
        using Addr = Register::Address<0x400a0014,0x00000000,0,unsigned>;
        ///Random Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> randout{}; 
        namespace RandoutValC{
        }
    }
}
