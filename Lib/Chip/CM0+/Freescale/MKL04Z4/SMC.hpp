#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Mode Controller
    namespace SmcPmprot{    ///<Power Mode Protection register
        using Addr = Register::Address<0x4007e000,0xffffffd5,0,unsigned char>;
        ///Allow Very-Low-Leakage Stop Mode
        enum class AvllsVal {
            v0=0x00000000,     ///<Any VLLSx mode is not allowed
            v1=0x00000001,     ///<Any VLLSx mode is allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AvllsVal> avlls{}; 
        namespace AvllsValC{
            constexpr Register::FieldValue<decltype(avlls)::Type,AvllsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avlls)::Type,AvllsVal::v1> v1{};
        }
        ///Allow Low-Leakage Stop Mode
        enum class AllsVal {
            v0=0x00000000,     ///<LLS is not allowed
            v1=0x00000001,     ///<LLS is allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AllsVal> alls{}; 
        namespace AllsValC{
            constexpr Register::FieldValue<decltype(alls)::Type,AllsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(alls)::Type,AllsVal::v1> v1{};
        }
        ///Allow Very-Low-Power Modes
        enum class AvlpVal {
            v0=0x00000000,     ///<VLPR, VLPW and VLPS are not allowed
            v1=0x00000001,     ///<VLPR, VLPW and VLPS are allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AvlpVal> avlp{}; 
        namespace AvlpValC{
            constexpr Register::FieldValue<decltype(avlp)::Type,AvlpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avlp)::Type,AvlpVal::v1> v1{};
        }
    }
    namespace SmcPmctrl{    ///<Power Mode Control register
        using Addr = Register::Address<0x4007e001,0xffffff90,0,unsigned char>;
        ///Stop Mode Control
        enum class StopmVal {
            v000=0x00000000,     ///<Normal Stop (STOP)
            v010=0x00000002,     ///<Very-Low-Power Stop (VLPS)
            v011=0x00000003,     ///<Low-Leakage Stop (LLS)
            v100=0x00000004,     ///<Very-Low-Leakage Stop (VLLSx)
            v110=0x00000006,     ///<Reseved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,StopmVal> stopm{}; 
        namespace StopmValC{
            constexpr Register::FieldValue<decltype(stopm)::Type,StopmVal::v000> v000{};
            constexpr Register::FieldValue<decltype(stopm)::Type,StopmVal::v010> v010{};
            constexpr Register::FieldValue<decltype(stopm)::Type,StopmVal::v011> v011{};
            constexpr Register::FieldValue<decltype(stopm)::Type,StopmVal::v100> v100{};
            constexpr Register::FieldValue<decltype(stopm)::Type,StopmVal::v110> v110{};
        }
        ///Stop Aborted
        enum class StopaVal {
            v0=0x00000000,     ///<The previous stop mode entry was successsful.
            v1=0x00000001,     ///<The previous stop mode entry was aborted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,StopaVal> stopa{}; 
        namespace StopaValC{
            constexpr Register::FieldValue<decltype(stopa)::Type,StopaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stopa)::Type,StopaVal::v1> v1{};
        }
        ///Run Mode Control
        enum class RunmVal {
            v00=0x00000000,     ///<Normal Run mode (RUN)
            v10=0x00000002,     ///<Very-Low-Power Run mode (VLPR)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,RunmVal> runm{}; 
        namespace RunmValC{
            constexpr Register::FieldValue<decltype(runm)::Type,RunmVal::v00> v00{};
            constexpr Register::FieldValue<decltype(runm)::Type,RunmVal::v10> v10{};
        }
    }
    namespace SmcStopctrl{    ///<Stop Control Register
        using Addr = Register::Address<0x4007e002,0xffffff18,0,unsigned char>;
        ///VLLS Mode Control.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> vllsm{}; 
        ///POR Power Option
        enum class PorpoVal {
            v0=0x00000000,     ///<POR detect circuit is enabled in VLLS0
            v1=0x00000001,     ///<POR detect circuit is disabled in VLLS0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,PorpoVal> porpo{}; 
        namespace PorpoValC{
            constexpr Register::FieldValue<decltype(porpo)::Type,PorpoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(porpo)::Type,PorpoVal::v1> v1{};
        }
        ///Partial Stop Option
        enum class PstopoVal {
            v00=0x00000000,     ///<STOP - Normal Stop mode
            v01=0x00000001,     ///<PSTOP1 - Partial Stop with both system and bus clocks disabled
            v10=0x00000002,     ///<PSTOP2 - Partial Stop with system clock disabled and bus clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PstopoVal> pstopo{}; 
        namespace PstopoValC{
            constexpr Register::FieldValue<decltype(pstopo)::Type,PstopoVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pstopo)::Type,PstopoVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pstopo)::Type,PstopoVal::v10> v10{};
        }
    }
    namespace SmcPmstat{    ///<Power Mode Status register
        using Addr = Register::Address<0x4007e003,0xffffff80,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pmstat{}; 
    }
}
