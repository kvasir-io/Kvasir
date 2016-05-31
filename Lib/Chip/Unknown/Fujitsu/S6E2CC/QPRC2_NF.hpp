#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Quadrature Position/Revolution Counter 0 Noise Filter
    namespace Qprc2NfNfctla{    ///<AIN Noise Control Register
        using Addr = Register::Address<0x40026120,0xffffffc8,0x00000000,unsigned char>;
        ///Mask bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ainmd{}; 
        ///Input invert bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ainlv{}; 
        ///Noise filter width select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ainnws{}; 
    }
    namespace Qprc2NfNfctlb{    ///<BIN Noise Control Register
        using Addr = Register::Address<0x40026124,0xffffffc8,0x00000000,unsigned char>;
        ///Mask bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> binmd{}; 
        ///Input invert bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> binlv{}; 
        ///Noise filter width select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> binnws{}; 
    }
    namespace Qprc2NfNfctlz{    ///<ZIN Noise Control Register
        using Addr = Register::Address<0x40026128,0xffffffc8,0x00000000,unsigned char>;
        ///Mask bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> zinmd{}; 
        ///Input invert bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> zinlv{}; 
        ///Noise filter width select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> zinnws{}; 
    }
}
