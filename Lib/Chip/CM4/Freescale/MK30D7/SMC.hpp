#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Mode Controller
    namespace SmcPmprot{    ///<Power Mode Protection Register
        using Addr = Register::Address<0x4007e000,0xffffffd5,0,unsigned char>;
        ///Allow very low leakage stop mode
        enum class AvllsVal {
            v0=0x00000000,     ///<Any VLLSx mode is not allowed
            v1=0x00000001,     ///<Any VLLSx mode is allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AvllsVal> avlls{}; 
        namespace AvllsValC{
            constexpr Register::FieldValue<decltype(avlls),AvllsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avlls),AvllsVal::v1> v1{};
        }
        ///Allow low leakage stop mode
        enum class AllsVal {
            v0=0x00000000,     ///<LLS is not allowed
            v1=0x00000001,     ///<LLS is allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AllsVal> alls{}; 
        namespace AllsValC{
            constexpr Register::FieldValue<decltype(alls),AllsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(alls),AllsVal::v1> v1{};
        }
        ///Allow very low power modes
        enum class AvlpVal {
            v0=0x00000000,     ///<VLPR, VLPW and VLPS are not allowed
            v1=0x00000001,     ///<VLPR, VLPW and VLPS are allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AvlpVal> avlp{}; 
        namespace AvlpValC{
            constexpr Register::FieldValue<decltype(avlp),AvlpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avlp),AvlpVal::v1> v1{};
        }
    }
    namespace SmcPmctrl{    ///<Power Mode Control Register
        using Addr = Register::Address<0x4007e001,0xffffff90,0,unsigned char>;
        ///Stop Mode Control
        enum class StopmVal {
            v000=0x00000000,     ///<Normal stop (STOP)
            v010=0x00000002,     ///<Very low power stop (VLPS)
            v011=0x00000003,     ///<Low leakage stop (LLS)
            v100=0x00000004,     ///<Very low leakage stop (VLLSx)
            v110=0x00000006,     ///<Reseved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,StopmVal> stopm{}; 
        namespace StopmValC{
            constexpr Register::FieldValue<decltype(stopm),StopmVal::v000> v000{};
            constexpr Register::FieldValue<decltype(stopm),StopmVal::v010> v010{};
            constexpr Register::FieldValue<decltype(stopm),StopmVal::v011> v011{};
            constexpr Register::FieldValue<decltype(stopm),StopmVal::v100> v100{};
            constexpr Register::FieldValue<decltype(stopm),StopmVal::v110> v110{};
        }
        ///Stop Aborted
        enum class StopaVal {
            v0=0x00000000,     ///<The previous stop mode entry was successsful.
            v1=0x00000001,     ///<The previous stop mode entry was aborted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,StopaVal> stopa{}; 
        namespace StopaValC{
            constexpr Register::FieldValue<decltype(stopa),StopaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stopa),StopaVal::v1> v1{};
        }
        ///Run Mode Control
        enum class RunmVal {
            v00=0x00000000,     ///<Normal run mode (RUN)
            v10=0x00000002,     ///<Very low power run mode (VLPR)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,RunmVal> runm{}; 
        namespace RunmValC{
            constexpr Register::FieldValue<decltype(runm),RunmVal::v00> v00{};
            constexpr Register::FieldValue<decltype(runm),RunmVal::v10> v10{};
        }
    }
    namespace SmcVllsctrl{    ///<VLLS Control Register
        using Addr = Register::Address<0x4007e002,0xfffffff8,0,unsigned char>;
        ///VLLS Mode Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> vllsm{}; 
        namespace VllsmValC{
        }
    }
    namespace SmcPmstat{    ///<Power Mode Status Register
        using Addr = Register::Address<0x4007e003,0xffffff80,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pmstat{}; 
        namespace PmstatValC{
        }
    }
}
