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
            constexpr Register::FieldValue<decltype(avlls),AvllsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avlls),AvllsVal::v1> v1{};
        }
        ///Allow Low-Leakage Stop Mode
        enum class AllsVal {
            v0=0x00000000,     ///<LLS is not allowed
            v1=0x00000001,     ///<LLS is allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AllsVal> alls{}; 
        namespace AllsValC{
            constexpr Register::FieldValue<decltype(alls),AllsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(alls),AllsVal::v1> v1{};
        }
        ///Allow Very-Low-Power Modes
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
    namespace SmcPmctrl{    ///<Power Mode Control register
        using Addr = Register::Address<0x4007e001,0xffffff10,0,unsigned char>;
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
            v00=0x00000000,     ///<Normal Run mode (RUN)
            v10=0x00000002,     ///<Very-Low-Power Run mode (VLPR)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,RunmVal> runm{}; 
        namespace RunmValC{
            constexpr Register::FieldValue<decltype(runm),RunmVal::v00> v00{};
            constexpr Register::FieldValue<decltype(runm),RunmVal::v10> v10{};
        }
        ///Low-Power Wake Up On Interrupt
        enum class LpwuiVal {
            v0=0x00000000,     ///<The system remains in a VLP mode on an interrupt
            v1=0x00000001,     ///<The system exits to Normal RUN mode on an interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LpwuiVal> lpwui{}; 
        namespace LpwuiValC{
            constexpr Register::FieldValue<decltype(lpwui),LpwuiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lpwui),LpwuiVal::v1> v1{};
        }
    }
    namespace SmcVllsctrl{    ///<VLLS Control register
        using Addr = Register::Address<0x4007e002,0xffffffe8,0,unsigned char>;
        ///VLLS Mode Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> vllsm{}; 
        namespace VllsmValC{
        }
        ///RAM2 Power Option
        enum class Ram2poVal {
            v0=0x00000000,     ///<RAM2 not powered in VLLS2
            v1=0x00000001,     ///<RAM2 powered in VLLS2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ram2poVal> ram2po{}; 
        namespace Ram2poValC{
            constexpr Register::FieldValue<decltype(ram2po),Ram2poVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ram2po),Ram2poVal::v1> v1{};
        }
    }
    namespace SmcPmstat{    ///<Power Mode Status register
        using Addr = Register::Address<0x4007e003,0xffffff80,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pmstat{}; 
        namespace PmstatValC{
        }
    }
}
