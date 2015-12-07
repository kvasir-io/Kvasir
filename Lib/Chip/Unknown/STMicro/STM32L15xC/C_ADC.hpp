#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Common ADC registers
    namespace Nonecsr{    ///<ADC Common status register
        using Addr = Register::Address<0x40012700,0xffffff80,0,unsigned>;
        ///ADON Status of ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> adons1{}; 
        namespace Adons1ValC{
        }
        ///Overrun flag of ADC 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovr1{}; 
        namespace Ovr1ValC{
        }
        ///Regular channel Start flag of ADC
              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> strt1{}; 
        namespace Strt1ValC{
        }
        ///Injected channel Start flag of ADC
              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jstrt1{}; 
        namespace Jstrt1ValC{
        }
        ///Injected channel end of conversion of
              ADC 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jeoc1{}; 
        namespace Jeoc1ValC{
        }
        ///End of conversion of ADC 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        namespace Eoc1ValC{
        }
        ///Analog watchdog flag of ADC
              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> awd1{}; 
        namespace Awd1ValC{
        }
    }
    namespace Noneccr{    ///<ADC common control register
        using Addr = Register::Address<0x40012704,0xff7cffff,0,unsigned>;
        ///Temperature sensor and VREFINT
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tsvrefe{}; 
        namespace TsvrefeValC{
        }
        ///ADC prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> adcpre{}; 
        namespace AdcpreValC{
        }
    }
}
