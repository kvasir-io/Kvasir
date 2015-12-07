#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB on the go high speed
    namespace NoneotgHsPcgcr{    ///<Power and clock gating control
          register
        using Addr = Register::Address<0x40040e00,0xffffffec,0,unsigned>;
        ///Stop PHY clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> stppclk{}; 
        namespace StppclkValC{
        }
        ///Gate HCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gatehclk{}; 
        namespace GatehclkValC{
        }
        ///PHY suspended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> physusp{}; 
        namespace PhysuspValC{
        }
    }
}
