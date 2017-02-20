#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//GPIO Tasks and Events
    namespace GpioteEventsPort{    ///<Event generated from multiple input GPIO pins with SENSE mechanism enabled
        using Addr = Register::Address<0x4000617c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteIntenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40006304,0x7fffff00,0x00000000,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_IN[0] event
        enum class In0Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,In0Val> in0{}; 
        namespace In0ValC{
            constexpr Register::FieldValue<decltype(in0)::Type,In0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in0)::Type,In0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in0)::Type,In0Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_IN[1] event
        enum class In1Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,In1Val> in1{}; 
        namespace In1ValC{
            constexpr Register::FieldValue<decltype(in1)::Type,In1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in1)::Type,In1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in1)::Type,In1Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_IN[2] event
        enum class In2Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,In2Val> in2{}; 
        namespace In2ValC{
            constexpr Register::FieldValue<decltype(in2)::Type,In2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in2)::Type,In2Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in2)::Type,In2Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_IN[3] event
        enum class In3Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,In3Val> in3{}; 
        namespace In3ValC{
            constexpr Register::FieldValue<decltype(in3)::Type,In3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in3)::Type,In3Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in3)::Type,In3Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_IN[4] event
        enum class In4Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,In4Val> in4{}; 
        namespace In4ValC{
            constexpr Register::FieldValue<decltype(in4)::Type,In4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in4)::Type,In4Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in4)::Type,In4Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_IN[5] event
        enum class In5Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,In5Val> in5{}; 
        namespace In5ValC{
            constexpr Register::FieldValue<decltype(in5)::Type,In5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in5)::Type,In5Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in5)::Type,In5Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_IN[6] event
        enum class In6Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,In6Val> in6{}; 
        namespace In6ValC{
            constexpr Register::FieldValue<decltype(in6)::Type,In6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in6)::Type,In6Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in6)::Type,In6Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_IN[7] event
        enum class In7Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,In7Val> in7{}; 
        namespace In7ValC{
            constexpr Register::FieldValue<decltype(in7)::Type,In7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in7)::Type,In7Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in7)::Type,In7Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_PORT event
        enum class PortVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,PortVal> port{}; 
        namespace PortValC{
            constexpr Register::FieldValue<decltype(port)::Type,PortVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(port)::Type,PortVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(port)::Type,PortVal::set> set{};
        }
    }
    namespace GpioteIntenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40006308,0x7fffff00,0x00000000,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_IN[0] event
        enum class In0Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,In0Val> in0{}; 
        namespace In0ValC{
            constexpr Register::FieldValue<decltype(in0)::Type,In0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in0)::Type,In0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in0)::Type,In0Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_IN[1] event
        enum class In1Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,In1Val> in1{}; 
        namespace In1ValC{
            constexpr Register::FieldValue<decltype(in1)::Type,In1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in1)::Type,In1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in1)::Type,In1Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_IN[2] event
        enum class In2Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,In2Val> in2{}; 
        namespace In2ValC{
            constexpr Register::FieldValue<decltype(in2)::Type,In2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in2)::Type,In2Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in2)::Type,In2Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_IN[3] event
        enum class In3Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,In3Val> in3{}; 
        namespace In3ValC{
            constexpr Register::FieldValue<decltype(in3)::Type,In3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in3)::Type,In3Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in3)::Type,In3Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_IN[4] event
        enum class In4Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,In4Val> in4{}; 
        namespace In4ValC{
            constexpr Register::FieldValue<decltype(in4)::Type,In4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in4)::Type,In4Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in4)::Type,In4Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_IN[5] event
        enum class In5Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,In5Val> in5{}; 
        namespace In5ValC{
            constexpr Register::FieldValue<decltype(in5)::Type,In5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in5)::Type,In5Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in5)::Type,In5Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_IN[6] event
        enum class In6Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,In6Val> in6{}; 
        namespace In6ValC{
            constexpr Register::FieldValue<decltype(in6)::Type,In6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in6)::Type,In6Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in6)::Type,In6Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_IN[7] event
        enum class In7Val : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,In7Val> in7{}; 
        namespace In7ValC{
            constexpr Register::FieldValue<decltype(in7)::Type,In7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in7)::Type,In7Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in7)::Type,In7Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_PORT event
        enum class PortVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,PortVal> port{}; 
        namespace PortValC{
            constexpr Register::FieldValue<decltype(port)::Type,PortVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(port)::Type,PortVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(port)::Type,PortVal::clear> clear{};
        }
    }
    namespace GpioteTasksOut0{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is configured in CONFIG[0].POLARITY.
        using Addr = Register::Address<0x40006000,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksOut1{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is configured in CONFIG[0].POLARITY.
        using Addr = Register::Address<0x40006004,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksOut2{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is configured in CONFIG[0].POLARITY.
        using Addr = Register::Address<0x40006008,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksOut3{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is configured in CONFIG[0].POLARITY.
        using Addr = Register::Address<0x4000600c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksOut4{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is configured in CONFIG[0].POLARITY.
        using Addr = Register::Address<0x40006010,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksOut5{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is configured in CONFIG[0].POLARITY.
        using Addr = Register::Address<0x40006014,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksOut6{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is configured in CONFIG[0].POLARITY.
        using Addr = Register::Address<0x40006018,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksOut7{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is configured in CONFIG[0].POLARITY.
        using Addr = Register::Address<0x4000601c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksSet0{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it high.
        using Addr = Register::Address<0x40006030,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksSet1{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it high.
        using Addr = Register::Address<0x40006034,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksSet2{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it high.
        using Addr = Register::Address<0x40006038,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksSet3{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it high.
        using Addr = Register::Address<0x4000603c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksSet4{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it high.
        using Addr = Register::Address<0x40006040,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksSet5{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it high.
        using Addr = Register::Address<0x40006044,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksSet6{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it high.
        using Addr = Register::Address<0x40006048,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksSet7{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it high.
        using Addr = Register::Address<0x4000604c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksClr0{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it low.
        using Addr = Register::Address<0x40006060,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksClr1{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it low.
        using Addr = Register::Address<0x40006064,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksClr2{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it low.
        using Addr = Register::Address<0x40006068,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksClr3{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it low.
        using Addr = Register::Address<0x4000606c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksClr4{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it low.
        using Addr = Register::Address<0x40006070,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksClr5{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it low.
        using Addr = Register::Address<0x40006074,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksClr6{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it low.
        using Addr = Register::Address<0x40006078,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksClr7{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it low.
        using Addr = Register::Address<0x4000607c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteEventsIn0{    ///<Description collection[0]:  Event generated from pin specified in CONFIG[0].PSEL
        using Addr = Register::Address<0x40006100,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteEventsIn1{    ///<Description collection[0]:  Event generated from pin specified in CONFIG[0].PSEL
        using Addr = Register::Address<0x40006104,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteEventsIn2{    ///<Description collection[0]:  Event generated from pin specified in CONFIG[0].PSEL
        using Addr = Register::Address<0x40006108,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteEventsIn3{    ///<Description collection[0]:  Event generated from pin specified in CONFIG[0].PSEL
        using Addr = Register::Address<0x4000610c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteEventsIn4{    ///<Description collection[0]:  Event generated from pin specified in CONFIG[0].PSEL
        using Addr = Register::Address<0x40006110,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteEventsIn5{    ///<Description collection[0]:  Event generated from pin specified in CONFIG[0].PSEL
        using Addr = Register::Address<0x40006114,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteEventsIn6{    ///<Description collection[0]:  Event generated from pin specified in CONFIG[0].PSEL
        using Addr = Register::Address<0x40006118,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteEventsIn7{    ///<Description collection[0]:  Event generated from pin specified in CONFIG[0].PSEL
        using Addr = Register::Address<0x4000611c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteConfig0{    ///<Description collection[0]:  Configuration for OUT[n], SET[n] and CLR[n] tasks and IN[n] event
        using Addr = Register::Address<0x40006510,0xffece0fc,0x00000000,unsigned>;
        ///Mode
        enum class ModeVal : unsigned {
            disabled=0x00000000,     ///<Disabled. Pin specified by PSEL will not be acquired by the GPIOTE module.
            event=0x00000001,     ///<Event mode
            task=0x00000003,     ///<Task mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::event> event{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::task> task{};
        }
        ///GPIO number associated with SET[n], CLR[n] and OUT[n] tasks and IN[n] event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event.
        enum class PolarityVal : unsigned {
            none=0x00000000,     ///<Task mode: No effect on pin from OUT[n] task. Event mode: no IN[n] event generated on pin activity.
            lotohi=0x00000001,     ///<Task mode: Set pin from OUT[n] task. Event mode: Generate IN[n] event when rising edge on pin.
            hitolo=0x00000002,     ///<Task mode: Clear pin from OUT[n] task. Event mode: Generate IN[n] event when falling edge on pin.
            toggle=0x00000003,     ///<Task mode: Toggle pin from OUT[n]. Event mode: Generate IN[n] when any change on pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PolarityVal> polarity{}; 
        namespace PolarityValC{
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::none> none{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::lotohi> lotohi{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::hitolo> hitolo{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::toggle> toggle{};
        }
        ///When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect.
        enum class OutinitVal : unsigned {
            low=0x00000000,     ///<Task mode: Initial value of pin before task triggering is low
            high=0x00000001,     ///<Task mode: Initial value of pin before task triggering is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OutinitVal> outinit{}; 
        namespace OutinitValC{
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::low> low{};
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::high> high{};
        }
    }
    namespace GpioteConfig1{    ///<Description collection[0]:  Configuration for OUT[n], SET[n] and CLR[n] tasks and IN[n] event
        using Addr = Register::Address<0x40006514,0xffece0fc,0x00000000,unsigned>;
        ///Mode
        enum class ModeVal : unsigned {
            disabled=0x00000000,     ///<Disabled. Pin specified by PSEL will not be acquired by the GPIOTE module.
            event=0x00000001,     ///<Event mode
            task=0x00000003,     ///<Task mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::event> event{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::task> task{};
        }
        ///GPIO number associated with SET[n], CLR[n] and OUT[n] tasks and IN[n] event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event.
        enum class PolarityVal : unsigned {
            none=0x00000000,     ///<Task mode: No effect on pin from OUT[n] task. Event mode: no IN[n] event generated on pin activity.
            lotohi=0x00000001,     ///<Task mode: Set pin from OUT[n] task. Event mode: Generate IN[n] event when rising edge on pin.
            hitolo=0x00000002,     ///<Task mode: Clear pin from OUT[n] task. Event mode: Generate IN[n] event when falling edge on pin.
            toggle=0x00000003,     ///<Task mode: Toggle pin from OUT[n]. Event mode: Generate IN[n] when any change on pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PolarityVal> polarity{}; 
        namespace PolarityValC{
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::none> none{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::lotohi> lotohi{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::hitolo> hitolo{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::toggle> toggle{};
        }
        ///When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect.
        enum class OutinitVal : unsigned {
            low=0x00000000,     ///<Task mode: Initial value of pin before task triggering is low
            high=0x00000001,     ///<Task mode: Initial value of pin before task triggering is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OutinitVal> outinit{}; 
        namespace OutinitValC{
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::low> low{};
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::high> high{};
        }
    }
    namespace GpioteConfig2{    ///<Description collection[0]:  Configuration for OUT[n], SET[n] and CLR[n] tasks and IN[n] event
        using Addr = Register::Address<0x40006518,0xffece0fc,0x00000000,unsigned>;
        ///Mode
        enum class ModeVal : unsigned {
            disabled=0x00000000,     ///<Disabled. Pin specified by PSEL will not be acquired by the GPIOTE module.
            event=0x00000001,     ///<Event mode
            task=0x00000003,     ///<Task mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::event> event{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::task> task{};
        }
        ///GPIO number associated with SET[n], CLR[n] and OUT[n] tasks and IN[n] event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event.
        enum class PolarityVal : unsigned {
            none=0x00000000,     ///<Task mode: No effect on pin from OUT[n] task. Event mode: no IN[n] event generated on pin activity.
            lotohi=0x00000001,     ///<Task mode: Set pin from OUT[n] task. Event mode: Generate IN[n] event when rising edge on pin.
            hitolo=0x00000002,     ///<Task mode: Clear pin from OUT[n] task. Event mode: Generate IN[n] event when falling edge on pin.
            toggle=0x00000003,     ///<Task mode: Toggle pin from OUT[n]. Event mode: Generate IN[n] when any change on pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PolarityVal> polarity{}; 
        namespace PolarityValC{
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::none> none{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::lotohi> lotohi{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::hitolo> hitolo{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::toggle> toggle{};
        }
        ///When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect.
        enum class OutinitVal : unsigned {
            low=0x00000000,     ///<Task mode: Initial value of pin before task triggering is low
            high=0x00000001,     ///<Task mode: Initial value of pin before task triggering is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OutinitVal> outinit{}; 
        namespace OutinitValC{
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::low> low{};
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::high> high{};
        }
    }
    namespace GpioteConfig3{    ///<Description collection[0]:  Configuration for OUT[n], SET[n] and CLR[n] tasks and IN[n] event
        using Addr = Register::Address<0x4000651c,0xffece0fc,0x00000000,unsigned>;
        ///Mode
        enum class ModeVal : unsigned {
            disabled=0x00000000,     ///<Disabled. Pin specified by PSEL will not be acquired by the GPIOTE module.
            event=0x00000001,     ///<Event mode
            task=0x00000003,     ///<Task mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::event> event{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::task> task{};
        }
        ///GPIO number associated with SET[n], CLR[n] and OUT[n] tasks and IN[n] event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event.
        enum class PolarityVal : unsigned {
            none=0x00000000,     ///<Task mode: No effect on pin from OUT[n] task. Event mode: no IN[n] event generated on pin activity.
            lotohi=0x00000001,     ///<Task mode: Set pin from OUT[n] task. Event mode: Generate IN[n] event when rising edge on pin.
            hitolo=0x00000002,     ///<Task mode: Clear pin from OUT[n] task. Event mode: Generate IN[n] event when falling edge on pin.
            toggle=0x00000003,     ///<Task mode: Toggle pin from OUT[n]. Event mode: Generate IN[n] when any change on pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PolarityVal> polarity{}; 
        namespace PolarityValC{
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::none> none{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::lotohi> lotohi{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::hitolo> hitolo{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::toggle> toggle{};
        }
        ///When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect.
        enum class OutinitVal : unsigned {
            low=0x00000000,     ///<Task mode: Initial value of pin before task triggering is low
            high=0x00000001,     ///<Task mode: Initial value of pin before task triggering is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OutinitVal> outinit{}; 
        namespace OutinitValC{
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::low> low{};
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::high> high{};
        }
    }
    namespace GpioteConfig4{    ///<Description collection[0]:  Configuration for OUT[n], SET[n] and CLR[n] tasks and IN[n] event
        using Addr = Register::Address<0x40006520,0xffece0fc,0x00000000,unsigned>;
        ///Mode
        enum class ModeVal : unsigned {
            disabled=0x00000000,     ///<Disabled. Pin specified by PSEL will not be acquired by the GPIOTE module.
            event=0x00000001,     ///<Event mode
            task=0x00000003,     ///<Task mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::event> event{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::task> task{};
        }
        ///GPIO number associated with SET[n], CLR[n] and OUT[n] tasks and IN[n] event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event.
        enum class PolarityVal : unsigned {
            none=0x00000000,     ///<Task mode: No effect on pin from OUT[n] task. Event mode: no IN[n] event generated on pin activity.
            lotohi=0x00000001,     ///<Task mode: Set pin from OUT[n] task. Event mode: Generate IN[n] event when rising edge on pin.
            hitolo=0x00000002,     ///<Task mode: Clear pin from OUT[n] task. Event mode: Generate IN[n] event when falling edge on pin.
            toggle=0x00000003,     ///<Task mode: Toggle pin from OUT[n]. Event mode: Generate IN[n] when any change on pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PolarityVal> polarity{}; 
        namespace PolarityValC{
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::none> none{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::lotohi> lotohi{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::hitolo> hitolo{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::toggle> toggle{};
        }
        ///When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect.
        enum class OutinitVal : unsigned {
            low=0x00000000,     ///<Task mode: Initial value of pin before task triggering is low
            high=0x00000001,     ///<Task mode: Initial value of pin before task triggering is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OutinitVal> outinit{}; 
        namespace OutinitValC{
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::low> low{};
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::high> high{};
        }
    }
    namespace GpioteConfig5{    ///<Description collection[0]:  Configuration for OUT[n], SET[n] and CLR[n] tasks and IN[n] event
        using Addr = Register::Address<0x40006524,0xffece0fc,0x00000000,unsigned>;
        ///Mode
        enum class ModeVal : unsigned {
            disabled=0x00000000,     ///<Disabled. Pin specified by PSEL will not be acquired by the GPIOTE module.
            event=0x00000001,     ///<Event mode
            task=0x00000003,     ///<Task mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::event> event{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::task> task{};
        }
        ///GPIO number associated with SET[n], CLR[n] and OUT[n] tasks and IN[n] event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event.
        enum class PolarityVal : unsigned {
            none=0x00000000,     ///<Task mode: No effect on pin from OUT[n] task. Event mode: no IN[n] event generated on pin activity.
            lotohi=0x00000001,     ///<Task mode: Set pin from OUT[n] task. Event mode: Generate IN[n] event when rising edge on pin.
            hitolo=0x00000002,     ///<Task mode: Clear pin from OUT[n] task. Event mode: Generate IN[n] event when falling edge on pin.
            toggle=0x00000003,     ///<Task mode: Toggle pin from OUT[n]. Event mode: Generate IN[n] when any change on pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PolarityVal> polarity{}; 
        namespace PolarityValC{
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::none> none{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::lotohi> lotohi{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::hitolo> hitolo{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::toggle> toggle{};
        }
        ///When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect.
        enum class OutinitVal : unsigned {
            low=0x00000000,     ///<Task mode: Initial value of pin before task triggering is low
            high=0x00000001,     ///<Task mode: Initial value of pin before task triggering is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OutinitVal> outinit{}; 
        namespace OutinitValC{
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::low> low{};
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::high> high{};
        }
    }
    namespace GpioteConfig6{    ///<Description collection[0]:  Configuration for OUT[n], SET[n] and CLR[n] tasks and IN[n] event
        using Addr = Register::Address<0x40006528,0xffece0fc,0x00000000,unsigned>;
        ///Mode
        enum class ModeVal : unsigned {
            disabled=0x00000000,     ///<Disabled. Pin specified by PSEL will not be acquired by the GPIOTE module.
            event=0x00000001,     ///<Event mode
            task=0x00000003,     ///<Task mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::event> event{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::task> task{};
        }
        ///GPIO number associated with SET[n], CLR[n] and OUT[n] tasks and IN[n] event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event.
        enum class PolarityVal : unsigned {
            none=0x00000000,     ///<Task mode: No effect on pin from OUT[n] task. Event mode: no IN[n] event generated on pin activity.
            lotohi=0x00000001,     ///<Task mode: Set pin from OUT[n] task. Event mode: Generate IN[n] event when rising edge on pin.
            hitolo=0x00000002,     ///<Task mode: Clear pin from OUT[n] task. Event mode: Generate IN[n] event when falling edge on pin.
            toggle=0x00000003,     ///<Task mode: Toggle pin from OUT[n]. Event mode: Generate IN[n] when any change on pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PolarityVal> polarity{}; 
        namespace PolarityValC{
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::none> none{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::lotohi> lotohi{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::hitolo> hitolo{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::toggle> toggle{};
        }
        ///When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect.
        enum class OutinitVal : unsigned {
            low=0x00000000,     ///<Task mode: Initial value of pin before task triggering is low
            high=0x00000001,     ///<Task mode: Initial value of pin before task triggering is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OutinitVal> outinit{}; 
        namespace OutinitValC{
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::low> low{};
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::high> high{};
        }
    }
    namespace GpioteConfig7{    ///<Description collection[0]:  Configuration for OUT[n], SET[n] and CLR[n] tasks and IN[n] event
        using Addr = Register::Address<0x4000652c,0xffece0fc,0x00000000,unsigned>;
        ///Mode
        enum class ModeVal : unsigned {
            disabled=0x00000000,     ///<Disabled. Pin specified by PSEL will not be acquired by the GPIOTE module.
            event=0x00000001,     ///<Event mode
            task=0x00000003,     ///<Task mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::event> event{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::task> task{};
        }
        ///GPIO number associated with SET[n], CLR[n] and OUT[n] tasks and IN[n] event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event.
        enum class PolarityVal : unsigned {
            none=0x00000000,     ///<Task mode: No effect on pin from OUT[n] task. Event mode: no IN[n] event generated on pin activity.
            lotohi=0x00000001,     ///<Task mode: Set pin from OUT[n] task. Event mode: Generate IN[n] event when rising edge on pin.
            hitolo=0x00000002,     ///<Task mode: Clear pin from OUT[n] task. Event mode: Generate IN[n] event when falling edge on pin.
            toggle=0x00000003,     ///<Task mode: Toggle pin from OUT[n]. Event mode: Generate IN[n] when any change on pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PolarityVal> polarity{}; 
        namespace PolarityValC{
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::none> none{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::lotohi> lotohi{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::hitolo> hitolo{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::toggle> toggle{};
        }
        ///When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect.
        enum class OutinitVal : unsigned {
            low=0x00000000,     ///<Task mode: Initial value of pin before task triggering is low
            high=0x00000001,     ///<Task mode: Initial value of pin before task triggering is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OutinitVal> outinit{}; 
        namespace OutinitValC{
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::low> low{};
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::high> high{};
        }
    }
}
