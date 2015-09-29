#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Shutdown Controller
    namespace ShdwcCr{    ///<Shutdown Control Register
        using Addr = Register::Address<0xfffffd10,0x00fffffe,0,unsigned>;
        ///Shutdown Command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> shdw{}; 
        ///Password
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace ShdwcMr{    ///<Shutdown Mode Register
        using Addr = Register::Address<0xfffffd14,0xfffeff0c,0,unsigned>;
        ///Wake-up Mode 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wkmode0{}; 
        ///Counter on Wake-up 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> cptwk0{}; 
        ///Real-time Timer Wake-up Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rttwken{}; 
    }
    namespace ShdwcSr{    ///<Shutdown Status Register
        using Addr = Register::Address<0xfffffd18,0xfffefffe,0,unsigned>;
        ///Wake-up 0 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0{}; 
        ///Real-time Timer Wake-up
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rttwk{}; 
    }
}
