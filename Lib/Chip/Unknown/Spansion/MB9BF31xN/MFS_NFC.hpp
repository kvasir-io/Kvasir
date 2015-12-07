#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I2C Auxiliary Noise Filter Setting Register
    namespace Nonei2cdnf{    ///<I2C Auxiliary Noise Filter Setting Register
        using Addr = Register::Address<0x40038800,0xffff0000,0,unsigned>;
        ///Auxiliary noise filter additional step select bits for I2C ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> i2cdnf7{}; 
        namespace I2cdnf7ValC{
        }
        ///Auxiliary noise filter additional step select bits for I2C ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> i2cdnf6{}; 
        namespace I2cdnf6ValC{
        }
        ///Auxiliary noise filter additional step select bits for I2C ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> i2cdnf5{}; 
        namespace I2cdnf5ValC{
        }
        ///Auxiliary noise filter additional step select bits for I2C ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> i2cdnf4{}; 
        namespace I2cdnf4ValC{
        }
        ///Auxiliary noise filter additional step select bits for I2C ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> i2cdnf3{}; 
        namespace I2cdnf3ValC{
        }
        ///Auxiliary noise filter additional step select bits for I2C ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> i2cdnf2{}; 
        namespace I2cdnf2ValC{
        }
        ///Auxiliary noise filter additional step select bits for I2C ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> i2cdnf1{}; 
        namespace I2cdnf1ValC{
        }
        ///Auxiliary noise filter additional step select bits for I2C ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> i2cdnf0{}; 
        namespace I2cdnf0ValC{
        }
    }
}
