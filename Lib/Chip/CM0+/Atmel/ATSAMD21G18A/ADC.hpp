#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ADC_avgctrl{
        using Addr = Register::Address<0x42004002,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SAMPLENUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> ADJRES; 
    }
    namespace ADC_calib{
        using Addr = Register::Address<0x42004028,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LINEARITY_CAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> BIAS_CAL; 
    }
    namespace ADC_ctrla{
        using Addr = Register::Address<0x42004000,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RUNSTDBY; 
    }
    namespace ADC_ctrlb{
        using Addr = Register::Address<0x42004004,0xfffff8c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIFFMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LEFTADJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FREERUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CORREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> RESSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PRESCALER; 
    }
    namespace ADC_dbgctrl{
        using Addr = Register::Address<0x4200402a,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBGRUN; 
    }
    namespace ADC_evctrl{
        using Addr = Register::Address<0x42004014,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STARTEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYNCEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RESRDYEO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WINMONEO; 
    }
    namespace ADC_gaincorr{
        using Addr = Register::Address<0x42004024,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> GAINCORR; 
    }
    namespace ADC_inputctrl{
        using Addr = Register::Address<0x42004010,0xf000e0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> MUXPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MUXNEG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> INPUTSCAN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> INPUTOFFSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> GAIN; 
    }
    namespace ADC_intenclr{
        using Addr = Register::Address<0x42004016,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RESRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WINMON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SYNCRDY; 
    }
    namespace ADC_intenset{
        using Addr = Register::Address<0x42004017,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RESRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WINMON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SYNCRDY; 
    }
    namespace ADC_intflag{
        using Addr = Register::Address<0x42004018,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RESRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WINMON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SYNCRDY; 
    }
    namespace ADC_offsetcorr{
        using Addr = Register::Address<0x42004026,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> OFFSETCORR; 
    }
    namespace ADC_refctrl{
        using Addr = Register::Address<0x42004001,0xffffff70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> REFSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REFCOMP; 
    }
    namespace ADC_result{
        using Addr = Register::Address<0x4200401a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RESULT; 
    }
    namespace ADC_sampctrl{
        using Addr = Register::Address<0x42004003,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SAMPLEN; 
    }
    namespace ADC_status{
        using Addr = Register::Address<0x42004019,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SYNCBUSY; 
    }
    namespace ADC_swtrig{
        using Addr = Register::Address<0x4200400c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> START; 
    }
    namespace ADC_winctrl{
        using Addr = Register::Address<0x42004008,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> WINMODE; 
    }
    namespace ADC_winlt{
        using Addr = Register::Address<0x4200401c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WINLT; 
    }
    namespace ADC_winut{
        using Addr = Register::Address<0x42004020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WINUT; 
    }
}
