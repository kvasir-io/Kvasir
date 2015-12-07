#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Event System Interface
    namespace EvsysChannel{    ///<Channel
        using Addr = Register::Address<0x42000404,0xf080fef0,0,unsigned>;
        ///Channel Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
        ///Software Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> swevt{}; 
        namespace SwevtValC{
        }
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> evgen{}; 
        namespace EvgenValC{
        }
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path),PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path),PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path),PathVal::asynchronous> asynchronous{};
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
            constexpr Register::FieldValue<decltype(edgsel),EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel),EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel),EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel),EdgselVal::bothEdges> bothEdges{};
        }
    }
    namespace EvsysChstatus{    ///<Channel Status
        using Addr = Register::Address<0x4200040c,0xf0f00000,0,unsigned>;
        ///Channel 0 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usrrdy0{}; 
        namespace Usrrdy0ValC{
        }
        ///Channel 1 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usrrdy1{}; 
        namespace Usrrdy1ValC{
        }
        ///Channel 2 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usrrdy2{}; 
        namespace Usrrdy2ValC{
        }
        ///Channel 3 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usrrdy3{}; 
        namespace Usrrdy3ValC{
        }
        ///Channel 4 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usrrdy4{}; 
        namespace Usrrdy4ValC{
        }
        ///Channel 5 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usrrdy5{}; 
        namespace Usrrdy5ValC{
        }
        ///Channel 6 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> usrrdy6{}; 
        namespace Usrrdy6ValC{
        }
        ///Channel 7 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> usrrdy7{}; 
        namespace Usrrdy7ValC{
        }
        ///Channel 0 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chbusy0{}; 
        namespace Chbusy0ValC{
        }
        ///Channel 1 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> chbusy1{}; 
        namespace Chbusy1ValC{
        }
        ///Channel 2 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> chbusy2{}; 
        namespace Chbusy2ValC{
        }
        ///Channel 3 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> chbusy3{}; 
        namespace Chbusy3ValC{
        }
        ///Channel 4 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> chbusy4{}; 
        namespace Chbusy4ValC{
        }
        ///Channel 5 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> chbusy5{}; 
        namespace Chbusy5ValC{
        }
        ///Channel 6 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> chbusy6{}; 
        namespace Chbusy6ValC{
        }
        ///Channel 7 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> chbusy7{}; 
        namespace Chbusy7ValC{
        }
        ///Channel 8 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> usrrdy8{}; 
        namespace Usrrdy8ValC{
        }
        ///Channel 9 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usrrdy9{}; 
        namespace Usrrdy9ValC{
        }
        ///Channel 10 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usrrdy10{}; 
        namespace Usrrdy10ValC{
        }
        ///Channel 11 User Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> usrrdy11{}; 
        namespace Usrrdy11ValC{
        }
        ///Channel 8 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> chbusy8{}; 
        namespace Chbusy8ValC{
        }
        ///Channel 9 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> chbusy9{}; 
        namespace Chbusy9ValC{
        }
        ///Channel 10 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> chbusy10{}; 
        namespace Chbusy10ValC{
        }
        ///Channel 11 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> chbusy11{}; 
        namespace Chbusy11ValC{
        }
    }
    namespace EvsysCtrl{    ///<Control
        using Addr = Register::Address<0x42000400,0xffffffee,0,unsigned char>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
        ///Generic Clock Requests
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gclkreq{}; 
        namespace GclkreqValC{
        }
    }
    namespace EvsysIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x42000410,0xf0f00000,0,unsigned>;
        ///Channel 0 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr0{}; 
        namespace Ovr0ValC{
        }
        ///Channel 1 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovr1{}; 
        namespace Ovr1ValC{
        }
        ///Channel 2 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ovr2{}; 
        namespace Ovr2ValC{
        }
        ///Channel 3 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovr3{}; 
        namespace Ovr3ValC{
        }
        ///Channel 4 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovr4{}; 
        namespace Ovr4ValC{
        }
        ///Channel 5 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovr5{}; 
        namespace Ovr5ValC{
        }
        ///Channel 6 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr6{}; 
        namespace Ovr6ValC{
        }
        ///Channel 7 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovr7{}; 
        namespace Ovr7ValC{
        }
        ///Channel 0 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> evd0{}; 
        namespace Evd0ValC{
        }
        ///Channel 1 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> evd1{}; 
        namespace Evd1ValC{
        }
        ///Channel 2 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> evd2{}; 
        namespace Evd2ValC{
        }
        ///Channel 3 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> evd3{}; 
        namespace Evd3ValC{
        }
        ///Channel 4 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> evd4{}; 
        namespace Evd4ValC{
        }
        ///Channel 5 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> evd5{}; 
        namespace Evd5ValC{
        }
        ///Channel 6 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> evd6{}; 
        namespace Evd6ValC{
        }
        ///Channel 7 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> evd7{}; 
        namespace Evd7ValC{
        }
        ///Channel 8 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ovr8{}; 
        namespace Ovr8ValC{
        }
        ///Channel 9 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ovr9{}; 
        namespace Ovr9ValC{
        }
        ///Channel 10 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ovr10{}; 
        namespace Ovr10ValC{
        }
        ///Channel 11 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ovr11{}; 
        namespace Ovr11ValC{
        }
        ///Channel 8 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> evd8{}; 
        namespace Evd8ValC{
        }
        ///Channel 9 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> evd9{}; 
        namespace Evd9ValC{
        }
        ///Channel 10 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> evd10{}; 
        namespace Evd10ValC{
        }
        ///Channel 11 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> evd11{}; 
        namespace Evd11ValC{
        }
    }
    namespace EvsysIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x42000414,0xf0f00000,0,unsigned>;
        ///Channel 0 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr0{}; 
        namespace Ovr0ValC{
        }
        ///Channel 1 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovr1{}; 
        namespace Ovr1ValC{
        }
        ///Channel 2 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ovr2{}; 
        namespace Ovr2ValC{
        }
        ///Channel 3 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovr3{}; 
        namespace Ovr3ValC{
        }
        ///Channel 4 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovr4{}; 
        namespace Ovr4ValC{
        }
        ///Channel 5 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovr5{}; 
        namespace Ovr5ValC{
        }
        ///Channel 6 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr6{}; 
        namespace Ovr6ValC{
        }
        ///Channel 7 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovr7{}; 
        namespace Ovr7ValC{
        }
        ///Channel 0 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> evd0{}; 
        namespace Evd0ValC{
        }
        ///Channel 1 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> evd1{}; 
        namespace Evd1ValC{
        }
        ///Channel 2 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> evd2{}; 
        namespace Evd2ValC{
        }
        ///Channel 3 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> evd3{}; 
        namespace Evd3ValC{
        }
        ///Channel 4 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> evd4{}; 
        namespace Evd4ValC{
        }
        ///Channel 5 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> evd5{}; 
        namespace Evd5ValC{
        }
        ///Channel 6 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> evd6{}; 
        namespace Evd6ValC{
        }
        ///Channel 7 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> evd7{}; 
        namespace Evd7ValC{
        }
        ///Channel 8 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ovr8{}; 
        namespace Ovr8ValC{
        }
        ///Channel 9 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ovr9{}; 
        namespace Ovr9ValC{
        }
        ///Channel 10 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ovr10{}; 
        namespace Ovr10ValC{
        }
        ///Channel 11 Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ovr11{}; 
        namespace Ovr11ValC{
        }
        ///Channel 8 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> evd8{}; 
        namespace Evd8ValC{
        }
        ///Channel 9 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> evd9{}; 
        namespace Evd9ValC{
        }
        ///Channel 10 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> evd10{}; 
        namespace Evd10ValC{
        }
        ///Channel 11 Event Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> evd11{}; 
        namespace Evd11ValC{
        }
    }
    namespace EvsysIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x42000418,0xf0f00000,0,unsigned>;
        ///Channel 0 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr0{}; 
        namespace Ovr0ValC{
        }
        ///Channel 1 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovr1{}; 
        namespace Ovr1ValC{
        }
        ///Channel 2 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ovr2{}; 
        namespace Ovr2ValC{
        }
        ///Channel 3 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovr3{}; 
        namespace Ovr3ValC{
        }
        ///Channel 4 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovr4{}; 
        namespace Ovr4ValC{
        }
        ///Channel 5 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovr5{}; 
        namespace Ovr5ValC{
        }
        ///Channel 6 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr6{}; 
        namespace Ovr6ValC{
        }
        ///Channel 7 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovr7{}; 
        namespace Ovr7ValC{
        }
        ///Channel 0 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> evd0{}; 
        namespace Evd0ValC{
        }
        ///Channel 1 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> evd1{}; 
        namespace Evd1ValC{
        }
        ///Channel 2 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> evd2{}; 
        namespace Evd2ValC{
        }
        ///Channel 3 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> evd3{}; 
        namespace Evd3ValC{
        }
        ///Channel 4 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> evd4{}; 
        namespace Evd4ValC{
        }
        ///Channel 5 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> evd5{}; 
        namespace Evd5ValC{
        }
        ///Channel 6 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> evd6{}; 
        namespace Evd6ValC{
        }
        ///Channel 7 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> evd7{}; 
        namespace Evd7ValC{
        }
        ///Channel 8 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ovr8{}; 
        namespace Ovr8ValC{
        }
        ///Channel 9 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ovr9{}; 
        namespace Ovr9ValC{
        }
        ///Channel 10 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ovr10{}; 
        namespace Ovr10ValC{
        }
        ///Channel 11 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ovr11{}; 
        namespace Ovr11ValC{
        }
        ///Channel 8 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> evd8{}; 
        namespace Evd8ValC{
        }
        ///Channel 9 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> evd9{}; 
        namespace Evd9ValC{
        }
        ///Channel 10 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> evd10{}; 
        namespace Evd10ValC{
        }
        ///Channel 11 Event Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> evd11{}; 
        namespace Evd11ValC{
        }
    }
    namespace EvsysUser{    ///<User Multiplexer
        using Addr = Register::Address<0x42000408,0xffffe0e0,0,unsigned>;
        ///User Multiplexer Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> user{}; 
        namespace UserValC{
        }
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> channel{}; 
        namespace ChannelValC{
        }
    }
}
