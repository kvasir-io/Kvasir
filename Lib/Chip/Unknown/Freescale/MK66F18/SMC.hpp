#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Mode Controller
    namespace SmcPmprot{    ///<Power Mode Protection register
        using Addr = Register::Address<0x4007e000,0xffffff55,0,unsigned char>;
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
            v0=0x00000000,     ///<Any LLSx mode is not allowed
            v1=0x00000001,     ///<Any LLSx mode is allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AllsVal> alls{}; 
        namespace AllsValC{
            constexpr Register::FieldValue<decltype(alls),AllsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(alls),AllsVal::v1> v1{};
        }
        ///Allow Very-Low-Power Modes
        enum class AvlpVal {
            v0=0x00000000,     ///<VLPR, VLPW, and VLPS are not allowed.
            v1=0x00000001,     ///<VLPR, VLPW, and VLPS are allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AvlpVal> avlp{}; 
        namespace AvlpValC{
            constexpr Register::FieldValue<decltype(avlp),AvlpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avlp),AvlpVal::v1> v1{};
        }
        ///Allow High Speed Run mode
        enum class AhsrunVal {
            v0=0x00000000,     ///<HSRUN is not allowed
            v1=0x00000001,     ///<HSRUN is allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AhsrunVal> ahsrun{}; 
        namespace AhsrunValC{
            constexpr Register::FieldValue<decltype(ahsrun),AhsrunVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ahsrun),AhsrunVal::v1> v1{};
        }
    }
    namespace SmcPmctrl{    ///<Power Mode Control register
        using Addr = Register::Address<0x4007e001,0xffffff90,0,unsigned char>;
        ///Stop Mode Control
        enum class StopmVal {
            v000=0x00000000,     ///<Normal Stop (STOP)
            v001=0x00000001,     ///<Reserved
            v010=0x00000002,     ///<Very-Low-Power Stop (VLPS)
            v011=0x00000003,     ///<Low-Leakage Stop (LLSx)
            v100=0x00000004,     ///<Very-Low-Leakage Stop (VLLSx)
            v101=0x00000005,     ///<Reserved
            v110=0x00000006,     ///<Reseved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,StopmVal> stopm{}; 
        namespace StopmValC{
            constexpr Register::FieldValue<decltype(stopm),StopmVal::v000> v000{};
            constexpr Register::FieldValue<decltype(stopm),StopmVal::v001> v001{};
            constexpr Register::FieldValue<decltype(stopm),StopmVal::v010> v010{};
            constexpr Register::FieldValue<decltype(stopm),StopmVal::v011> v011{};
            constexpr Register::FieldValue<decltype(stopm),StopmVal::v100> v100{};
            constexpr Register::FieldValue<decltype(stopm),StopmVal::v101> v101{};
            constexpr Register::FieldValue<decltype(stopm),StopmVal::v110> v110{};
            constexpr Register::FieldValue<decltype(stopm),StopmVal::v111> v111{};
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
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<Very-Low-Power Run mode (VLPR)
            v11=0x00000003,     ///<High Speed Run mode (HSRUN)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,RunmVal> runm{}; 
        namespace RunmValC{
            constexpr Register::FieldValue<decltype(runm),RunmVal::v00> v00{};
            constexpr Register::FieldValue<decltype(runm),RunmVal::v01> v01{};
            constexpr Register::FieldValue<decltype(runm),RunmVal::v10> v10{};
            constexpr Register::FieldValue<decltype(runm),RunmVal::v11> v11{};
        }
    }
    namespace SmcStopctrl{    ///<Stop Control Register
        using Addr = Register::Address<0x4007e002,0xffffff08,0,unsigned char>;
        ///LLS or VLLS Mode Control
        enum class LlsmVal {
            v000=0x00000000,     ///<VLLS0 if PMCTRL[STOPM]=VLLSx, reserved if PMCTRL[STOPM]=LLSx
            v001=0x00000001,     ///<VLLS1 if PMCTRL[STOPM]=VLLSx, reserved if PMCTRL[STOPM]=LLSx
            v010=0x00000002,     ///<VLLS2 if PMCTRL[STOPM]=VLLSx, LLS2 if PMCTRL[STOPM]=LLSx
            v011=0x00000003,     ///<VLLS3 if PMCTRL[STOPM]=VLLSx, LLS3 if PMCTRL[STOPM]=LLSx
            v100=0x00000004,     ///<Reserved
            v101=0x00000005,     ///<Reserved
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,LlsmVal> llsm{}; 
        namespace LlsmValC{
            constexpr Register::FieldValue<decltype(llsm),LlsmVal::v000> v000{};
            constexpr Register::FieldValue<decltype(llsm),LlsmVal::v001> v001{};
            constexpr Register::FieldValue<decltype(llsm),LlsmVal::v010> v010{};
            constexpr Register::FieldValue<decltype(llsm),LlsmVal::v011> v011{};
            constexpr Register::FieldValue<decltype(llsm),LlsmVal::v100> v100{};
            constexpr Register::FieldValue<decltype(llsm),LlsmVal::v101> v101{};
            constexpr Register::FieldValue<decltype(llsm),LlsmVal::v110> v110{};
            constexpr Register::FieldValue<decltype(llsm),LlsmVal::v111> v111{};
        }
        ///RAM2 Power Option
        enum class Ram2poVal {
            v0=0x00000000,     ///<RAM2 not powered in LLS2/VLLS2
            v1=0x00000001,     ///<RAM2 powered in LLS2/VLLS2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ram2poVal> ram2po{}; 
        namespace Ram2poValC{
            constexpr Register::FieldValue<decltype(ram2po),Ram2poVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ram2po),Ram2poVal::v1> v1{};
        }
        ///POR Power Option
        enum class PorpoVal {
            v0=0x00000000,     ///<POR detect circuit is enabled in VLLS0
            v1=0x00000001,     ///<POR detect circuit is disabled in VLLS0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,PorpoVal> porpo{}; 
        namespace PorpoValC{
            constexpr Register::FieldValue<decltype(porpo),PorpoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(porpo),PorpoVal::v1> v1{};
        }
        ///Partial Stop Option
        enum class PstopoVal {
            v00=0x00000000,     ///<STOP - Normal Stop mode
            v01=0x00000001,     ///<PSTOP1 - Partial Stop with both system and bus clocks disabled
            v10=0x00000002,     ///<PSTOP2 - Partial Stop with system clock disabled and bus clock enabled
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PstopoVal> pstopo{}; 
        namespace PstopoValC{
            constexpr Register::FieldValue<decltype(pstopo),PstopoVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pstopo),PstopoVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pstopo),PstopoVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pstopo),PstopoVal::v11> v11{};
        }
    }
    namespace SmcPmstat{    ///<Power Mode Status register
        using Addr = Register::Address<0x4007e003,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pmstat{}; 
        namespace PmstatValC{
        }
    }
}
