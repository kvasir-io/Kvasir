#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I2C Auxiliary Noise Filter Setting Register
    namespace Nonei2cdnf{    ///<I2C Auxiliary Noise Filter Setting Register
        using Addr = Register::Address<0x40038800,0xffff0000,0,unsigned>;
        ///Auxiliary noise filter additional step select bits for I2C ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> i2cdnf7{}; 
        ///Auxiliary noise filter additional step select bits for I2C ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> i2cdnf6{}; 
        ///Auxiliary noise filter additional step select bits for I2C ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> i2cdnf5{}; 
        ///Auxiliary noise filter additional step select bits for I2C ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> i2cdnf4{}; 
        ///Auxiliary noise filter additional step select bits for I2C ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> i2cdnf3{}; 
        ///Auxiliary noise filter additional step select bits for I2C ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> i2cdnf2{}; 
        ///Auxiliary noise filter additional step select bits for I2C ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> i2cdnf1{}; 
        ///Auxiliary noise filter additional step select bits for I2C ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> i2cdnf0{}; 
    }
}
