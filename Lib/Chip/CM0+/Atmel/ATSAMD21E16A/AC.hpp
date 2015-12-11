#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog Comparators
    namespace AcCompctrl0{    ///<Comparator Control n
        using Addr = Register::Address<0x42004410,0xf8f44890,0,unsigned>;
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Single-Shot Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> single{}; 
        ///Speed Selection
        enum class SpeedVal {
            low=0x00000000,     ///<Low speed
            high=0x00000001,     ///<High speed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,SpeedVal> speed{}; 
        namespace SpeedValC{
            constexpr Register::FieldValue<decltype(speed)::Type,SpeedVal::low> low{};
            constexpr Register::FieldValue<decltype(speed)::Type,SpeedVal::high> high{};
        }
        ///Interrupt Selection
        enum class IntselVal {
            toggle=0x00000000,     ///<Interrupt on comparator output toggle
            rising=0x00000001,     ///<Interrupt on comparator output rising
            falling=0x00000002,     ///<Interrupt on comparator output falling
            eoc=0x00000003,     ///<Interrupt on end of comparison (single-shot mode only)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,IntselVal> intsel{}; 
        namespace IntselValC{
            constexpr Register::FieldValue<decltype(intsel)::Type,IntselVal::toggle> toggle{};
            constexpr Register::FieldValue<decltype(intsel)::Type,IntselVal::rising> rising{};
            constexpr Register::FieldValue<decltype(intsel)::Type,IntselVal::falling> falling{};
            constexpr Register::FieldValue<decltype(intsel)::Type,IntselVal::eoc> eoc{};
        }
        ///Negative Input Mux Selection
        enum class MuxnegVal {
            pin0=0x00000000,     ///<I/O pin 0
            pin1=0x00000001,     ///<I/O pin 1
            pin2=0x00000002,     ///<I/O pin 2
            pin3=0x00000003,     ///<I/O pin 3
            gnd=0x00000004,     ///<Ground
            vscale=0x00000005,     ///<VDD scaler
            bandgap=0x00000006,     ///<Internal bandgap voltage
            dac=0x00000007,     ///<DAC output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxnegVal> muxneg{}; 
        namespace MuxnegValC{
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::pin0> pin0{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::pin1> pin1{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::pin2> pin2{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::pin3> pin3{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::gnd> gnd{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::vscale> vscale{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::bandgap> bandgap{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::dac> dac{};
        }
        ///Positive Input Mux Selection
        enum class MuxposVal {
            pin0=0x00000000,     ///<I/O pin 0
            pin1=0x00000001,     ///<I/O pin 1
            pin2=0x00000002,     ///<I/O pin 2
            pin3=0x00000003,     ///<I/O pin 3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,MuxposVal> muxpos{}; 
        namespace MuxposValC{
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin0> pin0{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin1> pin1{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin2> pin2{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin3> pin3{};
        }
        ///Swap Inputs and Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swap{}; 
        ///Output
        enum class OutVal {
            off=0x00000000,     ///<The output of COMPn is not routed to the COMPn I/O port
            async=0x00000001,     ///<The asynchronous output of COMPn is routed to the COMPn I/O port
            sync=0x00000002,     ///<The synchronous output (including filtering) of COMPn is routed to the COMPn I/O port
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,OutVal> out{}; 
        namespace OutValC{
            constexpr Register::FieldValue<decltype(out)::Type,OutVal::off> off{};
            constexpr Register::FieldValue<decltype(out)::Type,OutVal::async> async{};
            constexpr Register::FieldValue<decltype(out)::Type,OutVal::sync> sync{};
        }
        ///Hysteresis Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> hyst{}; 
        ///Filter Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> flen{}; 
    }
    namespace AcCompctrl1{    ///<Comparator Control n
        using Addr = Register::Address<0x42004414,0xf8f44890,0,unsigned>;
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Single-Shot Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> single{}; 
        ///Speed Selection
        enum class SpeedVal {
            low=0x00000000,     ///<Low speed
            high=0x00000001,     ///<High speed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,SpeedVal> speed{}; 
        namespace SpeedValC{
            constexpr Register::FieldValue<decltype(speed)::Type,SpeedVal::low> low{};
            constexpr Register::FieldValue<decltype(speed)::Type,SpeedVal::high> high{};
        }
        ///Interrupt Selection
        enum class IntselVal {
            toggle=0x00000000,     ///<Interrupt on comparator output toggle
            rising=0x00000001,     ///<Interrupt on comparator output rising
            falling=0x00000002,     ///<Interrupt on comparator output falling
            eoc=0x00000003,     ///<Interrupt on end of comparison (single-shot mode only)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,IntselVal> intsel{}; 
        namespace IntselValC{
            constexpr Register::FieldValue<decltype(intsel)::Type,IntselVal::toggle> toggle{};
            constexpr Register::FieldValue<decltype(intsel)::Type,IntselVal::rising> rising{};
            constexpr Register::FieldValue<decltype(intsel)::Type,IntselVal::falling> falling{};
            constexpr Register::FieldValue<decltype(intsel)::Type,IntselVal::eoc> eoc{};
        }
        ///Negative Input Mux Selection
        enum class MuxnegVal {
            pin0=0x00000000,     ///<I/O pin 0
            pin1=0x00000001,     ///<I/O pin 1
            pin2=0x00000002,     ///<I/O pin 2
            pin3=0x00000003,     ///<I/O pin 3
            gnd=0x00000004,     ///<Ground
            vscale=0x00000005,     ///<VDD scaler
            bandgap=0x00000006,     ///<Internal bandgap voltage
            dac=0x00000007,     ///<DAC output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxnegVal> muxneg{}; 
        namespace MuxnegValC{
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::pin0> pin0{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::pin1> pin1{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::pin2> pin2{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::pin3> pin3{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::gnd> gnd{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::vscale> vscale{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::bandgap> bandgap{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::dac> dac{};
        }
        ///Positive Input Mux Selection
        enum class MuxposVal {
            pin0=0x00000000,     ///<I/O pin 0
            pin1=0x00000001,     ///<I/O pin 1
            pin2=0x00000002,     ///<I/O pin 2
            pin3=0x00000003,     ///<I/O pin 3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,MuxposVal> muxpos{}; 
        namespace MuxposValC{
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin0> pin0{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin1> pin1{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin2> pin2{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::pin3> pin3{};
        }
        ///Swap Inputs and Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swap{}; 
        ///Output
        enum class OutVal {
            off=0x00000000,     ///<The output of COMPn is not routed to the COMPn I/O port
            async=0x00000001,     ///<The asynchronous output of COMPn is routed to the COMPn I/O port
            sync=0x00000002,     ///<The synchronous output (including filtering) of COMPn is routed to the COMPn I/O port
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,OutVal> out{}; 
        namespace OutValC{
            constexpr Register::FieldValue<decltype(out)::Type,OutVal::off> off{};
            constexpr Register::FieldValue<decltype(out)::Type,OutVal::async> async{};
            constexpr Register::FieldValue<decltype(out)::Type,OutVal::sync> sync{};
        }
        ///Hysteresis Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> hyst{}; 
        ///Filter Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> flen{}; 
    }
    namespace AcCtrla{    ///<Control A
        using Addr = Register::Address<0x42004400,0xffffff78,0,unsigned char>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Low-Power Mux
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lpmux{}; 
    }
    namespace AcCtrlb{    ///<Control B
        using Addr = Register::Address<0x42004401,0xfffffffc,0,unsigned char>;
        ///Comparator 0 Start Comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start0{}; 
        ///Comparator 1 Start Comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> start1{}; 
    }
    namespace AcEvctrl{    ///<Event Control
        using Addr = Register::Address<0x42004402,0xfffffcec,0,unsigned>;
        ///Comparator 0 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> compeo0{}; 
        ///Comparator 1 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> compeo1{}; 
        ///Window 0 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wineo0{}; 
        ///Comparator 0 Event Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> compei0{}; 
        ///Comparator 1 Event Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> compei1{}; 
    }
    namespace AcIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x42004404,0xffffffec,0,unsigned char>;
        ///Comparator 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp0{}; 
        ///Comparator 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> comp1{}; 
        ///Window 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> win0{}; 
    }
    namespace AcIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x42004405,0xffffffec,0,unsigned char>;
        ///Comparator 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp0{}; 
        ///Comparator 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> comp1{}; 
        ///Window 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> win0{}; 
    }
    namespace AcIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x42004406,0xffffffec,0,unsigned char>;
        ///Comparator 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp0{}; 
        ///Comparator 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> comp1{}; 
        ///Window 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> win0{}; 
    }
    namespace AcScaler0{    ///<Scaler n
        using Addr = Register::Address<0x42004420,0xffffffc0,0,unsigned char>;
        ///Scaler Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
    namespace AcScaler1{    ///<Scaler n
        using Addr = Register::Address<0x42004421,0xffffffc0,0,unsigned char>;
        ///Scaler Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> value{}; 
    }
    namespace AcStatusa{    ///<Status A
        using Addr = Register::Address<0x42004408,0xffffffcc,0,unsigned char>;
        ///Comparator 0 Current State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> state0{}; 
        ///Comparator 1 Current State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> state1{}; 
        ///Window 0 Current State
        enum class Wstate0Val {
            above=0x00000000,     ///<Signal is above window
            inside=0x00000001,     ///<Signal is inside window
            below=0x00000002,     ///<Signal is below window
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Wstate0Val> wstate0{}; 
        namespace Wstate0ValC{
            constexpr Register::FieldValue<decltype(wstate0)::Type,Wstate0Val::above> above{};
            constexpr Register::FieldValue<decltype(wstate0)::Type,Wstate0Val::inside> inside{};
            constexpr Register::FieldValue<decltype(wstate0)::Type,Wstate0Val::below> below{};
        }
    }
    namespace AcStatusb{    ///<Status B
        using Addr = Register::Address<0x42004409,0xffffff7c,0,unsigned char>;
        ///Comparator 0 Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ready0{}; 
        ///Comparator 1 Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ready1{}; 
        ///Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> syncbusy{}; 
    }
    namespace AcStatusc{    ///<Status C
        using Addr = Register::Address<0x4200440a,0xffffffcc,0,unsigned char>;
        ///Comparator 0 Current State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> state0{}; 
        ///Comparator 1 Current State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> state1{}; 
        ///Window 0 Current State
        enum class Wstate0Val {
            above=0x00000000,     ///<Signal is above window
            inside=0x00000001,     ///<Signal is inside window
            below=0x00000002,     ///<Signal is below window
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Wstate0Val> wstate0{}; 
        namespace Wstate0ValC{
            constexpr Register::FieldValue<decltype(wstate0)::Type,Wstate0Val::above> above{};
            constexpr Register::FieldValue<decltype(wstate0)::Type,Wstate0Val::inside> inside{};
            constexpr Register::FieldValue<decltype(wstate0)::Type,Wstate0Val::below> below{};
        }
    }
    namespace AcWinctrl{    ///<Window Control
        using Addr = Register::Address<0x4200440c,0xfffffff8,0,unsigned char>;
        ///Window 0 Mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wen0{}; 
        ///Window 0 Interrupt Selection
        enum class Wintsel0Val {
            above=0x00000000,     ///<Interrupt on signal above window
            inside=0x00000001,     ///<Interrupt on signal inside window
            below=0x00000002,     ///<Interrupt on signal below window
            outside=0x00000003,     ///<Interrupt on signal outside window
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,Wintsel0Val> wintsel0{}; 
        namespace Wintsel0ValC{
            constexpr Register::FieldValue<decltype(wintsel0)::Type,Wintsel0Val::above> above{};
            constexpr Register::FieldValue<decltype(wintsel0)::Type,Wintsel0Val::inside> inside{};
            constexpr Register::FieldValue<decltype(wintsel0)::Type,Wintsel0Val::below> below{};
            constexpr Register::FieldValue<decltype(wintsel0)::Type,Wintsel0Val::outside> outside{};
        }
    }
}
