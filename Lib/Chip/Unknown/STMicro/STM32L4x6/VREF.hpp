#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Voltage reference buffer
    namespace Nonecsr{    ///<VREF control and status
          register
        using Addr = Register::Address<0x40010030,0xfffffff0,0,unsigned>;
        ///Voltage reference buffer
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> envr{}; 
        ///High impedance mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hiz{}; 
        ///Voltage reference scale
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vrs{}; 
        ///Voltage reference buffer
              ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vrr{}; 
    }
    namespace Noneccr{    ///<calibration control register
        using Addr = Register::Address<0x40010034,0xffffffc0,0,unsigned>;
        ///Trimming code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> trim{}; 
    }
}
