#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Embedded Flash Controller 0
    namespace Efc0Fmr{    ///<EEFC Flash Mode Register
        using Addr = Register::Address<0x400e0a00,0xfafef0fe,0,unsigned>;
        ///Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frdy{}; 
        namespace FrdyValC{
        }
        ///Flash Wait State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> fws{}; 
        namespace FwsValC{
        }
        ///Sequential Code Optimization Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> scod{}; 
        namespace ScodValC{
        }
        ///Flash Access Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fam{}; 
        namespace FamValC{
        }
        ///Code Loops Optimization Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cloe{}; 
        namespace CloeValC{
        }
    }
    namespace Efc0Fcr{    ///<EEFC Flash Command Register
        using Addr = Register::Address<0x400e0a04,0x00000000,0,unsigned>;
        ///Flash Command
        enum class FcmdVal {
            getd=0x00000000,     ///<Get Flash Descriptor
            wp=0x00000001,     ///<Write page
            wpl=0x00000002,     ///<Write page and lock
            ewp=0x00000003,     ///<Erase page and write page
            ewpl=0x00000004,     ///<Erase page and write page then lock
            ea=0x00000005,     ///<Erase all
            epa=0x00000007,     ///<Erase Pages
            slb=0x00000008,     ///<Set Lock Bit
            clb=0x00000009,     ///<Clear Lock Bit
            glb=0x0000000a,     ///<Get Lock Bit
            sgpb=0x0000000b,     ///<Set GPNVM Bit
            cgpb=0x0000000c,     ///<Clear GPNVM Bit
            ggpb=0x0000000d,     ///<Get GPNVM Bit
            stui=0x0000000e,     ///<Start Read Unique Identifier
            spui=0x0000000f,     ///<Stop Read Unique Identifier
            gcalb=0x00000010,     ///<Get CALIB Bit
            es=0x00000011,     ///<Erase Sector
            wus=0x00000012,     ///<Write User Signature
            eus=0x00000013,     ///<Erase User Signature
            stus=0x00000014,     ///<Start Read User Signature
            spus=0x00000015,     ///<Stop Read User Signature
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,FcmdVal> fcmd{}; 
        namespace FcmdValC{
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::getd> getd{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::wp> wp{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::wpl> wpl{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::ewp> ewp{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::ewpl> ewpl{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::ea> ea{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::epa> epa{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::slb> slb{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::clb> clb{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::glb> glb{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::sgpb> sgpb{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::cgpb> cgpb{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::ggpb> ggpb{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::stui> stui{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::spui> spui{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::gcalb> gcalb{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::es> es{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::wus> wus{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::eus> eus{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::stus> stus{};
            constexpr Register::FieldValue<decltype(fcmd),FcmdVal::spus> spus{};
        }
        ///Flash Command Argument
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> farg{}; 
        namespace FargValC{
        }
        ///Flash Writing Protection Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> fkey{}; 
        namespace FkeyValC{
        }
    }
    namespace Efc0Fsr{    ///<EEFC Flash Status Register
        using Addr = Register::Address<0x400e0a08,0xfffffff0,0,unsigned>;
        ///Flash Ready Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frdy{}; 
        namespace FrdyValC{
        }
        ///Flash Command Error Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fcmde{}; 
        namespace FcmdeValC{
        }
        ///Flash Lock Error Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> flocke{}; 
        namespace FlockeValC{
        }
        ///Flash Error Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> flerr{}; 
        namespace FlerrValC{
        }
    }
    namespace Efc0Frr{    ///<EEFC Flash Result Register
        using Addr = Register::Address<0x400e0a0c,0x00000000,0,unsigned>;
        ///Flash Result Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fvalue{}; 
        namespace FvalueValC{
        }
    }
}
