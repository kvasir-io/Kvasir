#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx DAC Modification date=1/18/2011 Major revision=0 Minor revision=7 
    namespace Nonecr{    ///<DAC register. Holds the conversion data.
        using Addr = Register::Address<0x400e1000,0xfffe003f,0,unsigned>;
        ///After the selected settling time after this field is written with a new VALUE, the voltage on the DACOUT pin (with respect to VSSA) is VALUE/1024 X VDDA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> value{}; 
        ///Settling time
        enum class BiasVal {
            short=0x00000000,     ///<The settling time of the DAC is 1 micros max, and the maximum current is 700 microA.
            long_=0x00000001,     ///<The settling time of the DAC is 2.5 micros and the maximum current is 350 microA.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,BiasVal> bias{}; 
        namespace BiasValC{
            constexpr Register::FieldValue<decltype(bias)::Type,BiasVal::short> short{};
            constexpr Register::FieldValue<decltype(bias)::Type,BiasVal::long_> long_{};
        }
        }
    }
    namespace Nonectrl{    ///<DAC control register.
        using Addr = Register::Address<0x400e1004,0xfffffff0,0,unsigned>;
        ///DMA request
        enum class IntdmareqVal {
            clr=0x00000000,     ///<This bit is cleared on any write to the DACR register.
            set=0x00000001,     ///<This bit is set by hardware when the timer times out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntdmareqVal> intDmaReq{}; 
        namespace IntdmareqValC{
            constexpr Register::FieldValue<decltype(intDmaReq)::Type,IntdmareqVal::clr> clr{};
            constexpr Register::FieldValue<decltype(intDmaReq)::Type,IntdmareqVal::set> set{};
        }
        }
        ///DMA double-buffering
        enum class DblbufenaVal {
            disabled=0x00000000,     ///<DACR double-buffering is disabled.
            enabled=0x00000001,     ///<When this bit and the CNT_ENA bit are both set, the double-buffering feature in the DACR register will be enabled. Writes to the DACR register are written to a pre-buffer and then transferred to the DACR on the next time-out of the counter.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DblbufenaVal> dblbufEna{}; 
        namespace DblbufenaValC{
            constexpr Register::FieldValue<decltype(dblbufEna)::Type,DblbufenaVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dblbufEna)::Type,DblbufenaVal::enabled> enabled{};
        }
        }
        ///DMA time-out
        enum class CntenaVal {
            disabled=0x00000000,     ///<Time-out counter operation is disabled.
            enabled=0x00000001,     ///<Time-out counter operation is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CntenaVal> cntEna{}; 
        namespace CntenaValC{
            constexpr Register::FieldValue<decltype(cntEna)::Type,CntenaVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cntEna)::Type,CntenaVal::enabled> enabled{};
        }
        }
        ///DMA enable
        enum class DmaenaVal {
            disabled=0x00000000,     ///<DMA access is disabled.
            enabled=0x00000001,     ///<DMA Burst Request Input 15 is enabled for the DAC (see Table 136).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DmaenaVal> dmaEna{}; 
        namespace DmaenaValC{
            constexpr Register::FieldValue<decltype(dmaEna)::Type,DmaenaVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dmaEna)::Type,DmaenaVal::enabled> enabled{};
        }
        }
    }
    namespace Nonecntval{    ///<DAC counter value register.
        using Addr = Register::Address<0x400e1008,0xffff0000,0,unsigned>;
        ///16-bit reload value for the DAC interrupt/DMA timer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
}
