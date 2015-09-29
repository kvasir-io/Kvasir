#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Digital-to-Analog Converter (DAC) Modification
    namespace Nonecr{    ///<D/A Converter Register. This register contains the digital value to be converted to analog and a power control bit.
        using Addr = Register::Address<0x4008c000,0xfffe003f,0,unsigned>;
        ///After the selected settling time after this field is written with a new VALUE, the voltage on the DAC_OUT pin (with respect to VSSA) is VALUE  x ((VREFP - V REFN)/1024) + VREFN.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> value{}; 
        ///Settling time  The settling times noted in the description of the BIAS bit are valid for a capacitance load on the DAC_OUT pin not exceeding 100 pF. A load impedance value greater than that value will cause settling time longer than the specified time. One or more graphs of load impedance vs. settling time will be included in the final data sheet.
        enum class biasVal {
            fast=0x00000000,     ///<The settling time of the DAC is 1 us max, and the maximum current is 700 uA. This allows a maximum update rate of 1 MHz.
            slow=0x00000001,     ///<The settling time of the DAC is 2.5 us and the maximum current is 350 uA. This allows a maximum update rate of 400 kHz.
        };
        namespace biasValC{
            constexpr MPL::Value<biasVal,biasVal::fast> fast{};
            constexpr MPL::Value<biasVal,biasVal::slow> slow{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,biasVal> bias{}; 
    }
    namespace Nonectrl{    ///<DAC Control register. This register controls DMA and timer operation.
        using Addr = Register::Address<0x4008c004,0xfffffff0,0,unsigned>;
        ///DMA interrupt request
        enum class intDmaReqVal {
            clearOnAnyWriteT=0x00000000,     ///<Clear on any write to the DACR register.
            setByHardwareWhen=0x00000001,     ///<Set by hardware when the timer times out.
        };
        namespace intDmaReqValC{
            constexpr MPL::Value<intDmaReqVal,intDmaReqVal::clearOnAnyWriteT> clearOnAnyWriteT{};
            constexpr MPL::Value<intDmaReqVal,intDmaReqVal::setByHardwareWhen> setByHardwareWhen{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intDmaReqVal> intDmaReq{}; 
        ///Double buffering
        enum class dblbufEnaVal {
            disable=0x00000000,     ///<Disable
            enableWhenThisBi=0x00000001,     ///<Enable. When this bit and the CNT_ENA bit are both set, the double-buffering feature in the DACR register will be enabled. Writes to the DACR register are written to a pre-buffer and then transferred to the DACR on the next time-out of the counter.
        };
        namespace dblbufEnaValC{
            constexpr MPL::Value<dblbufEnaVal,dblbufEnaVal::disable> disable{};
            constexpr MPL::Value<dblbufEnaVal,dblbufEnaVal::enableWhenThisBi> enableWhenThisBi{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dblbufEnaVal> dblbufEna{}; 
        ///Time-out counter operation
        enum class cntEnaVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        namespace cntEnaValC{
            constexpr MPL::Value<cntEnaVal,cntEnaVal::disable> disable{};
            constexpr MPL::Value<cntEnaVal,cntEnaVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cntEnaVal> cntEna{}; 
        ///DMA access
        enum class dmaEnaVal {
            disable=0x00000000,     ///<Disable
            enableDmaBurstRe=0x00000001,     ///<Enable. DMA Burst Request Input 7 is enabled for the DAC (see Table 672).
        };
        namespace dmaEnaValC{
            constexpr MPL::Value<dmaEnaVal,dmaEnaVal::disable> disable{};
            constexpr MPL::Value<dmaEnaVal,dmaEnaVal::enableDmaBurstRe> enableDmaBurstRe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dmaEnaVal> dmaEna{}; 
    }
    namespace Nonecntval{    ///<DAC Counter Value register. This register contains the reload value for the DAC DMA/Interrupt timer.
        using Addr = Register::Address<0x4008c008,0xffff0000,0,unsigned>;
        ///16-bit reload value for the DAC interrupt/DMA timer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
}
