#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Voltage reference buffer
    namespace VrefCsr{    ///<VREF control and status          register
        using Addr = Register::Address<0x40010030,0xfffffff0,0x00000000,unsigned>;
        ///Voltage reference buffer              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> envr{}; 
        ///High impedance mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hiz{}; 
        ///Voltage reference scale
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vrs{}; 
        ///Voltage reference buffer              ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vrr{}; 
    }
    namespace VrefCcr{    ///<calibration control register
        using Addr = Register::Address<0x40010034,0xffffffc0,0x00000000,unsigned>;
        ///Trimming code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> trim{}; 
    }
}
