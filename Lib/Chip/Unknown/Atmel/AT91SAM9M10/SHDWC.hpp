#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Shutdown Controller
    namespace ShdwcCr{    ///<Shutdown Control Register
        using Addr = Register::Address<0xfffffd10,0x00fffffe,0,unsigned>;
        ///Shutdown Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> shdw{}; 
        namespace ShdwValC{
        }
        ///Password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace ShdwcMr{    ///<Shutdown Mode Register
        using Addr = Register::Address<0xfffffd14,0xfffcff0c,0,unsigned>;
        ///Wake-up Mode 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wkmode0{}; 
        namespace Wkmode0ValC{
        }
        ///Counter on Wake-up 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> cptwk0{}; 
        namespace Cptwk0ValC{
        }
        ///Real-time Timer Wake-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rttwken{}; 
        namespace RttwkenValC{
        }
        ///Real-time Clock Wake-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rtcwken{}; 
        namespace RtcwkenValC{
        }
    }
    namespace ShdwcSr{    ///<Shutdown Status Register
        using Addr = Register::Address<0xfffffd18,0xfffcfffe,0,unsigned>;
        ///Wake-up 0 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0{}; 
        namespace Wakeup0ValC{
        }
        ///Real-time Timer Wake-up
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rttwk{}; 
        namespace RttwkValC{
        }
        ///Real-time Clock Wake-up
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rtcwk{}; 
        namespace RtcwkValC{
        }
    }
}
