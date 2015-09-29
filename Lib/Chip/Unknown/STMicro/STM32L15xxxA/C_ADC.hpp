#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Common ADC registers
    namespace Nonecsr{    ///<ADC Common status register
        using Addr = Register::Address<0x40012700,0xffffff80,0,unsigned>;
        ///ADON Status of ADC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> adons1{}; 
        ///Overrun flag of ADC 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovr1{}; 
        ///Regular channel Start flag of ADC               1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> strt1{}; 
        ///Injected channel Start flag of ADC               1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jstrt1{}; 
        ///Injected channel end of conversion of               ADC 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jeoc1{}; 
        ///End of conversion of ADC 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        ///Analog watchdog flag of ADC               1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> awd1{}; 
    }
    namespace Noneccr{    ///<ADC common control register
        using Addr = Register::Address<0x40012704,0xff7cffff,0,unsigned>;
        ///Temperature sensor and VREFINT               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tsvrefe{}; 
        ///ADC prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> adcpre{}; 
    }
}
