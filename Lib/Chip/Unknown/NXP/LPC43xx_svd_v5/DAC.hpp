#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx DAC Modification date=1/18/2011 Major revision=0 Minor revision=7 
    namespace Nonecr{    ///<DAC register. Holds the conversion data.
        using Addr = Register::Address<0x400e1000,0xfffe003f,0,unsigned>;
        ///After the selected settling time after this field is written with a new VALUE, the voltage on the DACOUT pin (with respect to VSSA) is VALUE/1024 X VDDA.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> value{}; 
        ///Settling time
        enum class biasVal {
            short=0x00000000,     ///<The settling time of the DAC is 1 micros max, and the maximum current is 700 microA.
            long_=0x00000001,     ///<The settling time of the DAC is 2.5 micros and the maximum current is 350 microA.
        };
        namespace biasValC{
            constexpr MPL::Value<biasVal,biasVal::short> short{};
            constexpr MPL::Value<biasVal,biasVal::long_> long_{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,biasVal> bias{}; 
    }
    namespace Nonectrl{    ///<DAC control register.
        using Addr = Register::Address<0x400e1004,0xfffffff0,0,unsigned>;
        ///DMA request
        enum class intDmaReqVal {
            clr=0x00000000,     ///<This bit is cleared on any write to the DACR register.
            set=0x00000001,     ///<This bit is set by hardware when the timer times out.
        };
        namespace intDmaReqValC{
            constexpr MPL::Value<intDmaReqVal,intDmaReqVal::clr> clr{};
            constexpr MPL::Value<intDmaReqVal,intDmaReqVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intDmaReqVal> intDmaReq{}; 
        ///DMA double-buffering
        enum class dblbufEnaVal {
            disabled=0x00000000,     ///<DACR double-buffering is disabled.
            enabled=0x00000001,     ///<When this bit and the CNT_ENA bit are both set, the double-buffering feature in the DACR register will be enabled. Writes to the DACR register are written to a pre-buffer and then transferred to the DACR on the next time-out of the counter.
        };
        namespace dblbufEnaValC{
            constexpr MPL::Value<dblbufEnaVal,dblbufEnaVal::disabled> disabled{};
            constexpr MPL::Value<dblbufEnaVal,dblbufEnaVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dblbufEnaVal> dblbufEna{}; 
        ///DMA time-out
        enum class cntEnaVal {
            disabled=0x00000000,     ///<Time-out counter operation is disabled.
            enabled=0x00000001,     ///<Time-out counter operation is enabled.
        };
        namespace cntEnaValC{
            constexpr MPL::Value<cntEnaVal,cntEnaVal::disabled> disabled{};
            constexpr MPL::Value<cntEnaVal,cntEnaVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cntEnaVal> cntEna{}; 
        ///DMA enable
        enum class dmaEnaVal {
            disabled=0x00000000,     ///<DMA access is disabled.
            enabled=0x00000001,     ///<DMA Burst Request Input 15 is enabled for the DAC (see Table 136).
        };
        namespace dmaEnaValC{
            constexpr MPL::Value<dmaEnaVal,dmaEnaVal::disabled> disabled{};
            constexpr MPL::Value<dmaEnaVal,dmaEnaVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dmaEnaVal> dmaEna{}; 
    }
    namespace Nonecntval{    ///<DAC counter value register.
        using Addr = Register::Address<0x400e1008,0xffff0000,0,unsigned>;
        ///16-bit reload value for the DAC interrupt/DMA timer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
}
