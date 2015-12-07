#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General purpose I/Os
    namespace NonegpioDbgcr{    ///<GPIO debug configuration
          register
        using Addr = Register::Address<0x4000bc00,0xffffffcf,0,unsigned>;
        ///DBGDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dbgdis{}; 
        namespace DbgdisValC{
        }
        ///EXTREGEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> extregen{}; 
        namespace ExtregenValC{
        }
    }
    namespace NonegpioDbgsr{    ///<GPIO debug status register
        using Addr = Register::Address<0x4000bc04,0xfffffff4,0,unsigned>;
        ///BOOTMODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bootmode{}; 
        namespace BootmodeValC{
        }
        ///FORCEDBG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> forcedbg{}; 
        namespace ForcedbgValC{
        }
        ///SWEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swen{}; 
        namespace SwenValC{
        }
    }
    namespace NonegpioPctracecr{    ///<Clock PC trace register
        using Addr = Register::Address<0x40004028,0xfffffffe,0,unsigned>;
        ///selects PC_TRACE source on bb_debug GPIO
              pins
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sel{}; 
        namespace SelValC{
        }
    }
}
