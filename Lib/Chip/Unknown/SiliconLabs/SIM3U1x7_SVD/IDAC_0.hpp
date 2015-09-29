#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40031000,0x1f8ec000,0,unsigned>;
        ///Output Update Trigger. 
        enum class oupdtVal {
            dacnt8=0x00000000,     ///<The IDAC output updates using the DACnT8 (Timer 0 Low Overflow) trigger source.
            dacnt9=0x00000001,     ///<The IDAC output updates using the DACnT9 (Timer 1 High Overflow) trigger source.
            dacnt10=0x00000002,     ///<The IDAC output updates using the DACnT10 (Timer 1 Low Overflow) trigger source.
            dacnt11=0x00000003,     ///<The IDAC output updates using the DACnT11 (Timer 1 High Overflow) trigger source.
            dacnt12=0x00000004,     ///<The IDAC output updates on the rising edge of the trigger source selected by ETRIG.
            dacnt13=0x00000005,     ///<The IDAC output updates on the falling edge of the trigger source selected by ETRIG.
            dacnt14=0x00000006,     ///<The IDAC output updates on any edge of the trigger source selected by ETRIG.
            dacnt15=0x00000007,     ///<The IDAC output updates on write to DATA register (On Demand).
        };
        namespace oupdtValC{
            constexpr MPL::Value<oupdtVal,oupdtVal::dacnt8> dacnt8{};
            constexpr MPL::Value<oupdtVal,oupdtVal::dacnt9> dacnt9{};
            constexpr MPL::Value<oupdtVal,oupdtVal::dacnt10> dacnt10{};
            constexpr MPL::Value<oupdtVal,oupdtVal::dacnt11> dacnt11{};
            constexpr MPL::Value<oupdtVal,oupdtVal::dacnt12> dacnt12{};
            constexpr MPL::Value<oupdtVal,oupdtVal::dacnt13> dacnt13{};
            constexpr MPL::Value<oupdtVal,oupdtVal::dacnt14> dacnt14{};
            constexpr MPL::Value<oupdtVal,oupdtVal::dacnt15> dacnt15{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,oupdtVal> oupdt{}; 
        ///Edge Trigger Source Select. 
        enum class etrigVal {
            dacnt0=0x00000000,     ///<Select DACnT0 (PB3.2) as the IDAC external trigger source.
            dacnt1=0x00000001,     ///<Select DACnT1 (PB3.3) as the IDAC external trigger source.
            dacnt2=0x00000002,     ///<Select DACnT2 (PB3.5) as the IDAC external trigger source.
            dacnt3=0x00000003,     ///<Select DACnT3 (PB3.6) as the IDAC external trigger source.
            dacnt4=0x00000004,     ///<Select DACnT4 (PB3.7) as the IDAC external trigger source.
            dacnt5=0x00000005,     ///<Select DACnT5 (PB3.8) as the IDAC external trigger source.
            dacnt6=0x00000006,     ///<Select DACnT6 (PB3.9) as the IDAC external trigger source.
            dacnt7=0x00000007,     ///<Select DACnT7 (SSG0 EX2) as the IDAC external trigger source.
        };
        namespace etrigValC{
            constexpr MPL::Value<etrigVal,etrigVal::dacnt0> dacnt0{};
            constexpr MPL::Value<etrigVal,etrigVal::dacnt1> dacnt1{};
            constexpr MPL::Value<etrigVal,etrigVal::dacnt2> dacnt2{};
            constexpr MPL::Value<etrigVal,etrigVal::dacnt3> dacnt3{};
            constexpr MPL::Value<etrigVal,etrigVal::dacnt4> dacnt4{};
            constexpr MPL::Value<etrigVal,etrigVal::dacnt5> dacnt5{};
            constexpr MPL::Value<etrigVal,etrigVal::dacnt6> dacnt6{};
            constexpr MPL::Value<etrigVal,etrigVal::dacnt7> dacnt7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,etrigVal> etrig{}; 
        ///Output Mode. 
        enum class outmdVal {
            v0p5Ma=0x00000000,     ///<The full-scale output current is 0.5 mA.
            v1Ma=0x00000001,     ///<The full-scale output current is 1 mA.
            v2Ma=0x00000002,     ///<The full-scale output current is 2 mA.
        };
        namespace outmdValC{
            constexpr MPL::Value<outmdVal,outmdVal::v0p5Ma> v0p5Ma{};
            constexpr MPL::Value<outmdVal,outmdVal::v1Ma> v1Ma{};
            constexpr MPL::Value<outmdVal,outmdVal::v2Ma> v2Ma{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,outmdVal> outmd{}; 
        ///Data Input Format. 
        enum class infmtVal {
            v110Bit=0x00000000,     ///<Writes are interpreted as one 10-bit sample.
            v210Bit=0x00000001,     ///<Writes are interpreted as two 10-bit samples.
            v48Bit=0x00000002,     ///<Writes are interpreted as four 8-bit samples.
        };
        namespace infmtValC{
            constexpr MPL::Value<infmtVal,infmtVal::v110Bit> v110Bit{};
            constexpr MPL::Value<infmtVal,infmtVal::v210Bit> v210Bit{};
            constexpr MPL::Value<infmtVal,infmtVal::v48Bit> v48Bit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,infmtVal> infmt{}; 
        ///DMA Run. 
        enum class dmarunVal {
            disabled=0x00000000,     ///<Read: No DMA operations are occurring or the DMA is done. Write: No effect.
            enabled=0x00000001,     ///<Read: A DMA operation is currently in progress. Write: Start a DMA operation.
        };
        namespace dmarunValC{
            constexpr MPL::Value<dmarunVal,dmarunVal::disabled> disabled{};
            constexpr MPL::Value<dmarunVal,dmarunVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,dmarunVal> dmarun{}; 
        ///Data Justification Select. 
        enum class jselVal {
            right=0x00000000,     ///<Data is right-justified.
            left=0x00000001,     ///<Data is left-justified.
        };
        namespace jselValC{
            constexpr MPL::Value<jselVal,jselVal::right> right{};
            constexpr MPL::Value<jselVal,jselVal::left> left{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,jselVal> jsel{}; 
        ///Data Buffer Reset. 
        enum class bufresetVal {
            reset=0x00000001,     ///<Initiate a data buffer reset.
        };
        namespace bufresetValC{
            constexpr MPL::Value<bufresetVal,bufresetVal::reset> reset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,bufresetVal> bufreset{}; 
        ///Trigger Source Inhibit. 
        enum class triginhVal {
            inactive=0x00000000,     ///<The selected trigger source will cause the IDAC output to update.
            active=0x00000001,     ///<The selected trigger source will not update the IDAC output, except for On-Demand DATA writes.
        };
        namespace triginhValC{
            constexpr MPL::Value<triginhVal,triginhVal::inactive> inactive{};
            constexpr MPL::Value<triginhVal,triginhVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,triginhVal> triginh{}; 
        ///Wrap Mode Enable. 
        enum class wrapenVal {
            disabled=0x00000000,     ///<The IDAC will not wrap when it reaches the end of the data buffer.
            enabled=0x00000001,     ///<The IDAC will cycle through the data buffer contents.
        };
        namespace wrapenValC{
            constexpr MPL::Value<wrapenVal,wrapenVal::disabled> disabled{};
            constexpr MPL::Value<wrapenVal,wrapenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,wrapenVal> wrapen{}; 
        ///FIFO Overrun Interrupt Enable. 
        enum class orienVal {
            disabled=0x00000000,     ///<Disable the FIFO overrun interrupt (ORI).
            enabled=0x00000001,     ///<Enable the FIFO overrun interrupt (ORI).
        };
        namespace orienValC{
            constexpr MPL::Value<orienVal,orienVal::disabled> disabled{};
            constexpr MPL::Value<orienVal,orienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,orienVal> orien{}; 
        ///FIFO Underrun Interrupt Enable. 
        enum class urienVal {
            disabled=0x00000000,     ///<Disable the FIFO underrun interrupt (URI).
            enabled=0x00000001,     ///<Enable the FIFO underrun interrupt (URI).
        };
        namespace urienValC{
            constexpr MPL::Value<urienVal,urienVal::disabled> disabled{};
            constexpr MPL::Value<urienVal,urienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,urienVal> urien{}; 
        ///FIFO Went Empty Interrupt Enable. 
        enum class weienVal {
            disabled=0x00000000,     ///<Disable the FIFO went empty interrupt (WEI).
            enabled=0x00000001,     ///<Enable the FIFO went empty interrupt (WEI).
        };
        namespace weienValC{
            constexpr MPL::Value<weienVal,weienVal::disabled> disabled{};
            constexpr MPL::Value<weienVal,weienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,weienVal> weien{}; 
        ///IDAC Debug Mode. 
        enum class dbgmdVal {
            run=0x00000000,     ///<The IDAC module will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will cause the IDAC module to halt.
        };
        namespace dbgmdValC{
            constexpr MPL::Value<dbgmdVal,dbgmdVal::run> run{};
            constexpr MPL::Value<dbgmdVal,dbgmdVal::halt> halt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,dbgmdVal> dbgmd{}; 
        ///Load Resistor Enable. 
        enum class loadenVal {
            disabled=0x00000000,     ///<Disable the internal load resistor.
            enabled=0x00000001,     ///<Enable the internal load resistor.
        };
        namespace loadenValC{
            constexpr MPL::Value<loadenVal,loadenVal::disabled> disabled{};
            constexpr MPL::Value<loadenVal,loadenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,loadenVal> loaden{}; 
        ///IDAC Enable. 
        enum class idacenVal {
            disabled=0x00000000,     ///<Disable the IDAC.
            enabled=0x00000001,     ///<Enable the IDAC.
        };
        namespace idacenValC{
            constexpr MPL::Value<idacenVal,idacenVal::disabled> disabled{};
            constexpr MPL::Value<idacenVal,idacenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,idacenVal> idacen{}; 
    }
    namespace Nonedata{    ///<Output Data
        using Addr = Register::Address<0x40031010,0x00000000,0,unsigned>;
        ///Output Data. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonebufstatus{    ///<FIFO Buffer Status
        using Addr = Register::Address<0x40031020,0xffffff88,0,unsigned>;
        ///FIFO Level. 
        enum class levelVal {
            empty=0x00000000,     ///<The data FIFO is empty.
            v1word=0x00000001,     ///<The data FIFO contains one word.
            v2words=0x00000002,     ///<The data FIFO contains two words.
            v3words=0x00000003,     ///<The data FIFO contains three words.
            v4words=0x00000004,     ///<The data FIFO is full and contains four words.
        };
        namespace levelValC{
            constexpr MPL::Value<levelVal,levelVal::empty> empty{};
            constexpr MPL::Value<levelVal,levelVal::v1word> v1word{};
            constexpr MPL::Value<levelVal,levelVal::v2words> v2words{};
            constexpr MPL::Value<levelVal,levelVal::v3words> v3words{};
            constexpr MPL::Value<levelVal,levelVal::v4words> v4words{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,levelVal> level{}; 
        ///FIFO Overrun Interrupt Flag. 
        enum class oriVal {
            notSet=0x00000000,     ///<Read: A FIFO overrun has not occurred. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A FIFO overrun occurred. Write: Force a FIFO overrun interrupt.
        };
        namespace oriValC{
            constexpr MPL::Value<oriVal,oriVal::notSet> notSet{};
            constexpr MPL::Value<oriVal,oriVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,oriVal> ori{}; 
        ///FIFO Underrun Interrupt Flag. 
        enum class uriVal {
            notSet=0x00000000,     ///<Read: A FIFO underrun has not occurred. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A FIFO underrun occurred. Write: Force a FIFO underrun interrupt.
        };
        namespace uriValC{
            constexpr MPL::Value<uriVal,uriVal::notSet> notSet{};
            constexpr MPL::Value<uriVal,uriVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,uriVal> uri{}; 
        ///FIFO Went Empty Interrupt Flag. 
        enum class weiVal {
            notSet=0x00000000,     ///<Read: A FIFO went empty condition has not occurred. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: The FIFO is empty. Write: Force a FIFO went empty interrupt.
        };
        namespace weiValC{
            constexpr MPL::Value<weiVal,weiVal::notSet> notSet{};
            constexpr MPL::Value<weiVal,weiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,weiVal> wei{}; 
    }
    namespace Nonebuffer10{    ///<FIFO Buffer Entries 0 and 1
        using Addr = Register::Address<0x40031030,0x00000000,0,unsigned>;
        ///FIFO Buffer Entry 0. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> buffer0{}; 
        ///FIFO Buffer Entry 1. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffer1{}; 
    }
    namespace Nonebuffer32{    ///<FIFO Buffer Entries 2 and 3
        using Addr = Register::Address<0x40031040,0x00000000,0,unsigned>;
        ///FIFO Buffer Entry 2. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> buffer2{}; 
        ///FIFO Buffer Entry 3. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffer3{}; 
    }
    namespace Nonegainadj{    ///<Output Current Gain Adjust
        using Addr = Register::Address<0x40031050,0xffffffe0,0,unsigned>;
        ///Output Current Gain Adjust. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> gainadj{}; 
    }
}
