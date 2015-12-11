#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// Digital-to-Analog Converter (DAC) 
    namespace Nonecr{    ///<D/A Converter Register. This register contains the digital value to be converted to analog and a power control bit.
        using Addr = Register::Address<0x4008c000,0xfffe003f,0,unsigned>;
        ///After the selected settling time after this field is written with a new VALUE, the voltage on the DAC_OUT pin (with respect to VSSA) is VALUE  x ((VREFP - V REFN)/1024) + VREFN.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> value{}; 
        ///Settling time  The settling times noted in the description of the BIAS bit are valid for a capacitance load on the DAC_OUT pin not exceeding 100 pF. A load impedance value greater than that value will cause settling time longer than the specified time. One or more graphs of load impedance vs. settling time will be included in the final data sheet.
        enum class BiasVal {
            fast=0x00000000,     ///<The settling time of the DAC is 1 us max, and the maximum current is 700 uA. This allows a maximum update rate of 1 MHz.
            slow=0x00000001,     ///<The settling time of the DAC is 2.5 us and the maximum current is 350 uA. This allows a maximum update rate of 400 kHz.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,BiasVal> bias{}; 
        namespace BiasValC{
            constexpr Register::FieldValue<decltype(bias)::Type,BiasVal::fast> fast{};
            constexpr Register::FieldValue<decltype(bias)::Type,BiasVal::slow> slow{};
        }
        }
    }
    namespace Nonectrl{    ///<DAC Control register. This register controls DMA and timer operation.
        using Addr = Register::Address<0x4008c004,0xfffffff0,0,unsigned>;
        ///DMA interrupt request
        enum class IntdmareqVal {
            clearOnAnyWriteT=0x00000000,     ///<Clear on any write to the DACR register.
            setByHardwareWhen=0x00000001,     ///<Set by hardware when the timer times out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntdmareqVal> intDmaReq{}; 
        namespace IntdmareqValC{
            constexpr Register::FieldValue<decltype(intDmaReq)::Type,IntdmareqVal::clearOnAnyWriteT> clearOnAnyWriteT{};
            constexpr Register::FieldValue<decltype(intDmaReq)::Type,IntdmareqVal::setByHardwareWhen> setByHardwareWhen{};
        }
        }
        ///Double buffering
        enum class DblbufenaVal {
            disable=0x00000000,     ///<Disable
            enableWhenThisBi=0x00000001,     ///<Enable. When this bit and the CNT_ENA bit are both set, the double-buffering feature in the DACR register will be enabled. Writes to the DACR register are written to a pre-buffer and then transferred to the DACR on the next time-out of the counter.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DblbufenaVal> dblbufEna{}; 
        namespace DblbufenaValC{
            constexpr Register::FieldValue<decltype(dblbufEna)::Type,DblbufenaVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dblbufEna)::Type,DblbufenaVal::enableWhenThisBi> enableWhenThisBi{};
        }
        }
        ///Time-out counter operation
        enum class CntenaVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CntenaVal> cntEna{}; 
        namespace CntenaValC{
            constexpr Register::FieldValue<decltype(cntEna)::Type,CntenaVal::disable> disable{};
            constexpr Register::FieldValue<decltype(cntEna)::Type,CntenaVal::enable> enable{};
        }
        }
        ///DMA access
        enum class DmaenaVal {
            disable=0x00000000,     ///<Disable
            enableDmaBurstRe=0x00000001,     ///<Enable. DMA Burst Request Input 7 is enabled for the DAC (see Table 672).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DmaenaVal> dmaEna{}; 
        namespace DmaenaValC{
            constexpr Register::FieldValue<decltype(dmaEna)::Type,DmaenaVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dmaEna)::Type,DmaenaVal::enableDmaBurstRe> enableDmaBurstRe{};
        }
        }
    }
    namespace Nonecntval{    ///<DAC Counter Value register. This register contains the reload value for the DAC DMA/Interrupt timer.
        using Addr = Register::Address<0x4008c008,0xffff0000,0,unsigned>;
        ///16-bit reload value for the DAC interrupt/DMA timer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
}
