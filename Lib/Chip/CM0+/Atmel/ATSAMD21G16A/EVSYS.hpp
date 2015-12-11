#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Event System Interface
    namespace EvsysChannel{    ///<Channel
        using Addr = Register::Address<0x42000404,0xf080fef0,0,unsigned>;
        ///Channel Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> channel{}; 
        ///Software Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> swevt{}; 
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
    }
    namespace EvsysChstatus{    ///<Channel Status
        using Addr = Register::Address<0x4200040c,0xf0f00000,0,unsigned>;
        ///Channel 0 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usrrdy0{}; 
        ///Channel 1 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usrrdy1{}; 
        ///Channel 2 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usrrdy2{}; 
        ///Channel 3 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usrrdy3{}; 
        ///Channel 4 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usrrdy4{}; 
        ///Channel 5 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usrrdy5{}; 
        ///Channel 6 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> usrrdy6{}; 
        ///Channel 7 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> usrrdy7{}; 
        ///Channel 0 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chbusy0{}; 
        ///Channel 1 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> chbusy1{}; 
        ///Channel 2 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> chbusy2{}; 
        ///Channel 3 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> chbusy3{}; 
        ///Channel 4 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> chbusy4{}; 
        ///Channel 5 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> chbusy5{}; 
        ///Channel 6 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> chbusy6{}; 
        ///Channel 7 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> chbusy7{}; 
        ///Channel 8 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> usrrdy8{}; 
        ///Channel 9 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usrrdy9{}; 
        ///Channel 10 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usrrdy10{}; 
        ///Channel 11 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> usrrdy11{}; 
        ///Channel 8 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> chbusy8{}; 
        ///Channel 9 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> chbusy9{}; 
        ///Channel 10 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> chbusy10{}; 
        ///Channel 11 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> chbusy11{}; 
    }
    namespace EvsysCtrl{    ///<Control
        using Addr = Register::Address<0x42000400,0xffffffee,0,unsigned char>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Generic Clock Requests
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gclkreq{}; 
    }
    namespace EvsysIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x42000410,0xf0f00000,0,unsigned>;
        ///Channel 0 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr0{}; 
        ///Channel 1 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovr1{}; 
        ///Channel 2 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ovr2{}; 
        ///Channel 3 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovr3{}; 
        ///Channel 4 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovr4{}; 
        ///Channel 5 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovr5{}; 
        ///Channel 6 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr6{}; 
        ///Channel 7 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovr7{}; 
        ///Channel 0 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> evd0{}; 
        ///Channel 1 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> evd1{}; 
        ///Channel 2 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> evd2{}; 
        ///Channel 3 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> evd3{}; 
        ///Channel 4 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> evd4{}; 
        ///Channel 5 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> evd5{}; 
        ///Channel 6 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> evd6{}; 
        ///Channel 7 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> evd7{}; 
        ///Channel 8 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ovr8{}; 
        ///Channel 9 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ovr9{}; 
        ///Channel 10 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ovr10{}; 
        ///Channel 11 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ovr11{}; 
        ///Channel 8 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> evd8{}; 
        ///Channel 9 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> evd9{}; 
        ///Channel 10 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> evd10{}; 
        ///Channel 11 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> evd11{}; 
    }
    namespace EvsysIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x42000414,0xf0f00000,0,unsigned>;
        ///Channel 0 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr0{}; 
        ///Channel 1 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovr1{}; 
        ///Channel 2 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ovr2{}; 
        ///Channel 3 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovr3{}; 
        ///Channel 4 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovr4{}; 
        ///Channel 5 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovr5{}; 
        ///Channel 6 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr6{}; 
        ///Channel 7 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovr7{}; 
        ///Channel 0 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> evd0{}; 
        ///Channel 1 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> evd1{}; 
        ///Channel 2 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> evd2{}; 
        ///Channel 3 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> evd3{}; 
        ///Channel 4 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> evd4{}; 
        ///Channel 5 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> evd5{}; 
        ///Channel 6 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> evd6{}; 
        ///Channel 7 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> evd7{}; 
        ///Channel 8 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ovr8{}; 
        ///Channel 9 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ovr9{}; 
        ///Channel 10 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ovr10{}; 
        ///Channel 11 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ovr11{}; 
        ///Channel 8 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> evd8{}; 
        ///Channel 9 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> evd9{}; 
        ///Channel 10 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> evd10{}; 
        ///Channel 11 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> evd11{}; 
    }
    namespace EvsysIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x42000418,0xf0f00000,0,unsigned>;
        ///Channel 0 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr0{}; 
        ///Channel 1 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovr1{}; 
        ///Channel 2 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ovr2{}; 
        ///Channel 3 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovr3{}; 
        ///Channel 4 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovr4{}; 
        ///Channel 5 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovr5{}; 
        ///Channel 6 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr6{}; 
        ///Channel 7 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovr7{}; 
        ///Channel 0 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> evd0{}; 
        ///Channel 1 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> evd1{}; 
        ///Channel 2 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> evd2{}; 
        ///Channel 3 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> evd3{}; 
        ///Channel 4 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> evd4{}; 
        ///Channel 5 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> evd5{}; 
        ///Channel 6 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> evd6{}; 
        ///Channel 7 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> evd7{}; 
        ///Channel 8 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ovr8{}; 
        ///Channel 9 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ovr9{}; 
        ///Channel 10 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ovr10{}; 
        ///Channel 11 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ovr11{}; 
        ///Channel 8 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> evd8{}; 
        ///Channel 9 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> evd9{}; 
        ///Channel 10 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> evd10{}; 
        ///Channel 11 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> evd11{}; 
    }
    namespace EvsysUser{    ///<User Multiplexer
        using Addr = Register::Address<0x42000408,0xffffe0e0,0,unsigned>;
        ///User Multiplexer Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> user{}; 
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> channel{}; 
    }
}
