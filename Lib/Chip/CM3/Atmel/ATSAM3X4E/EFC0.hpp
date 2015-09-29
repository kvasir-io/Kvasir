#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Embedded Flash Controller 0
    namespace Efc0Fmr{    ///<EEFC Flash Mode Register
        using Addr = Register::Address<0x400e0a00,0xfefef0fe,0,unsigned>;
        ///Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frdy{}; 
        ///Flash Wait State
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> fws{}; 
        ///Sequential Code Optimization Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> scod{}; 
        ///Flash Access Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fam{}; 
    }
    namespace Efc0Fcr{    ///<EEFC Flash Command Register
        using Addr = Register::Address<0x400e0a04,0x00000000,0,unsigned>;
        ///Flash Command
        enum class fcmdVal {
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
            gcalb=0x00000010,     ///<Get CALIB Bit
        };
        namespace fcmdValC{
            constexpr MPL::Value<fcmdVal,fcmdVal::getd> getd{};
            constexpr MPL::Value<fcmdVal,fcmdVal::wp> wp{};
            constexpr MPL::Value<fcmdVal,fcmdVal::wpl> wpl{};
            constexpr MPL::Value<fcmdVal,fcmdVal::ewp> ewp{};
            constexpr MPL::Value<fcmdVal,fcmdVal::ewpl> ewpl{};
            constexpr MPL::Value<fcmdVal,fcmdVal::ea> ea{};
            constexpr MPL::Value<fcmdVal,fcmdVal::slb> slb{};
            constexpr MPL::Value<fcmdVal,fcmdVal::clb> clb{};
            constexpr MPL::Value<fcmdVal,fcmdVal::glb> glb{};
            constexpr MPL::Value<fcmdVal,fcmdVal::sgpb> sgpb{};
            constexpr MPL::Value<fcmdVal,fcmdVal::cgpb> cgpb{};
            constexpr MPL::Value<fcmdVal,fcmdVal::ggpb> ggpb{};
            constexpr MPL::Value<fcmdVal,fcmdVal::stui> stui{};
            constexpr MPL::Value<fcmdVal,fcmdVal::spui> spui{};
            constexpr MPL::Value<fcmdVal,fcmdVal::gcalb> gcalb{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,fcmdVal> fcmd{}; 
        ///Flash Command Argument
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> farg{}; 
        ///Flash Writing Protection Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> fkey{}; 
    }
    namespace Efc0Fsr{    ///<EEFC Flash Status Register
        using Addr = Register::Address<0x400e0a08,0xfffffff8,0,unsigned>;
        ///Flash Ready Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frdy{}; 
        ///Flash Command Error Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fcmde{}; 
        ///Flash Lock Error Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> flocke{}; 
    }
    namespace Efc0Frr{    ///<EEFC Flash Result Register
        using Addr = Register::Address<0x400e0a0c,0x00000000,0,unsigned>;
        ///Flash Result Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fvalue{}; 
    }
}
