#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//cyclic redundancy check calculation      unit
    namespace CrcDr{    ///<Data register
        using Addr = Register::Address<0x40023000,0x00000000,0x00000000,unsigned>;
        ///Data register bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dr{}; 
    }
    namespace CrcIdr{    ///<Independent data register
        using Addr = Register::Address<0x40023004,0xffffff00,0x00000000,unsigned>;
        ///General-purpose 8-bit data register              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> idr{}; 
    }
    namespace CrcCr{    ///<Control register
        using Addr = Register::Address<0x40023008,0xffffff06,0x00000000,unsigned>;
        ///reset bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reset{}; 
        ///Reverse input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> revIn{}; 
        ///Reverse output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> revOut{}; 
        ///Polynomial size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> polysize{}; 
    }
    namespace CrcInit{    ///<Initial CRC value
        using Addr = Register::Address<0x40023010,0x00000000,0x00000000,unsigned>;
        ///Programmable initial CRC              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> init{}; 
    }
    namespace CrcPol{    ///<CRC polynomial
        using Addr = Register::Address<0x40023014,0x00000000,0x00000000,unsigned>;
        ///Programmable polynomial
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pol{}; 
    }
}
