#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Embedded Flash Controller 0
    namespace Efc0Fmr{    ///<EEFC Flash Mode Register
        using Addr = Register::Address<0x400e0800,0xfefef0fe,0,unsigned>;
        ///Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frdy{}; 
        ///Flash Wait State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> fws{}; 
        ///Sequential Code Optimization Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> scod{}; 
        ///Flash Access Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fam{}; 
    }
    namespace Efc0Fcr{    ///<EEFC Flash Command Register
        using Addr = Register::Address<0x400e0804,0x00000000,0,unsigned>;
        ///Flash Command
        enum class FcmdVal {
            getd=0x00000000,     ///<Get Flash Descriptor
            wp=0x00000001,     ///<Write page
            wpl=0x00000002,     ///<Write page and lock
            ewp=0x00000003,     ///<Erase page and write page
            ewpl=0x00000004,     ///<Erase page and write page then lock
            ea=0x00000005,     ///<Erase all
            slb=0x00000008,     ///<Set Lock Bit
            clb=0x00000009,     ///<Clear Lock Bit
            glb=0x0000000a,     ///<Get Lock Bit
            sgpb=0x0000000b,     ///<Set GPNVM Bit
            cgpb=0x0000000c,     ///<Clear GPNVM Bit
            ggpb=0x0000000d,     ///<Get GPNVM Bit
            stui=0x0000000e,     ///<Start Read Unique Identifier
            spui=0x0000000f,     ///<Stop Read Unique Identifier
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,FcmdVal> fcmd{}; 
        namespace FcmdValC{
            constexpr Register::FieldValue<decltype(fcmd)::Type,FcmdVal::getd> getd{};
            constexpr Register::FieldValue<decltype(fcmd)::Type,FcmdVal::wp> wp{};
            constexpr Register::FieldValue<decltype(fcmd)::Type,FcmdVal::wpl> wpl{};
            constexpr Register::FieldValue<decltype(fcmd)::Type,FcmdVal::ewp> ewp{};
            constexpr Register::FieldValue<decltype(fcmd)::Type,FcmdVal::ewpl> ewpl{};
            constexpr Register::FieldValue<decltype(fcmd)::Type,FcmdVal::ea> ea{};
            constexpr Register::FieldValue<decltype(fcmd)::Type,FcmdVal::slb> slb{};
            constexpr Register::FieldValue<decltype(fcmd)::Type,FcmdVal::clb> clb{};
            constexpr Register::FieldValue<decltype(fcmd)::Type,FcmdVal::glb> glb{};
            constexpr Register::FieldValue<decltype(fcmd)::Type,FcmdVal::sgpb> sgpb{};
            constexpr Register::FieldValue<decltype(fcmd)::Type,FcmdVal::cgpb> cgpb{};
            constexpr Register::FieldValue<decltype(fcmd)::Type,FcmdVal::ggpb> ggpb{};
            constexpr Register::FieldValue<decltype(fcmd)::Type,FcmdVal::stui> stui{};
            constexpr Register::FieldValue<decltype(fcmd)::Type,FcmdVal::spui> spui{};
        }
        ///Flash Command Argument
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> farg{}; 
        ///Flash Writing Protection Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> fkey{}; 
    }
    namespace Efc0Fsr{    ///<EEFC Flash Status Register
        using Addr = Register::Address<0x400e0808,0xfffffff8,0,unsigned>;
        ///Flash Ready Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frdy{}; 
        ///Flash Command Error Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fcmde{}; 
        ///Flash Lock Error Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> flocke{}; 
    }
    namespace Efc0Frr{    ///<EEFC Flash Result Register
        using Addr = Register::Address<0x400e080c,0x00000000,0,unsigned>;
        ///Flash Result Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fvalue{}; 
    }
}
