#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Quadrature Position/Revolution Counter 0 Noise Filter
    namespace Nonenfctla{    ///<AIN Noise Control Register
        using Addr = Register::Address<0x40026100,0xffffffc8,0,unsigned char>;
        ///Mask bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ainmd{}; 
        ///Input invert bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ainlv{}; 
        ///Noise filter width select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ainnws{}; 
    }
    namespace Nonenfctlb{    ///<BIN Noise Control Register
        using Addr = Register::Address<0x40026104,0xffffffc8,0,unsigned char>;
        ///Mask bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> binmd{}; 
        ///Input invert bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> binlv{}; 
        ///Noise filter width select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> binnws{}; 
    }
    namespace Nonenfctlz{    ///<ZIN Noise Control Register
        using Addr = Register::Address<0x40026108,0xffffffc8,0,unsigned char>;
        ///Mask bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> zinmd{}; 
        ///Input invert bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> zinlv{}; 
        ///Noise filter width select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> zinnws{}; 
    }
}
