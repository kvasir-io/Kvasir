#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//ADC common registers
    namespace Nonecsr{    ///<ADC Common status register
        using Addr = Register::Address<0x40012300,0xffc0c0c0,0,unsigned>;
        ///Overrun flag of ADC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ovr3{}; 
        namespace Ovr3ValC{
        }
        ///Regular channel Start flag of ADC
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> strt3{}; 
        namespace Strt3ValC{
        }
        ///Injected channel Start flag of ADC
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> jstrt3{}; 
        namespace Jstrt3ValC{
        }
        ///Injected channel end of conversion of
              ADC 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> jeoc3{}; 
        namespace Jeoc3ValC{
        }
        ///End of conversion of ADC 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eoc3{}; 
        namespace Eoc3ValC{
        }
        ///Analog watchdog flag of ADC
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> awd3{}; 
        namespace Awd3ValC{
        }
        ///Overrun flag of ADC 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ovr2{}; 
        namespace Ovr2ValC{
        }
        ///Regular channel Start flag of ADC
              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> strt2{}; 
        namespace Strt2ValC{
        }
        ///Injected channel Start flag of ADC
              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> jstrt2{}; 
        namespace Jstrt2ValC{
        }
        ///Injected channel end of conversion of
              ADC 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> jeoc2{}; 
        namespace Jeoc2ValC{
        }
        ///End of conversion of ADC 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eoc2{}; 
        namespace Eoc2ValC{
        }
        ///Analog watchdog flag of ADC
              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> awd2{}; 
        namespace Awd2ValC{
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
        using Addr = Register::Address<0x40012304,0xff3c10ff,0,unsigned>;
        ///Temperature sensor and VREFINT
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tsvrefe{}; 
        namespace TsvrefeValC{
        }
        ///VBAT enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> vbate{}; 
        namespace VbateValC{
        }
        ///ADC prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> adcpre{}; 
        namespace AdcpreValC{
        }
        ///Direct memory access mode for multi ADC
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> dma{}; 
        namespace DmaValC{
        }
        ///DMA disable selection for multi-ADC
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dds{}; 
        namespace DdsValC{
        }
        ///Delay between 2 sampling
              phases
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> delay{}; 
        namespace DelayValC{
        }
    }
}
