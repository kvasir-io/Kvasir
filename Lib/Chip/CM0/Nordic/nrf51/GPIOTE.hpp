#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//GPIO tasks and events.
    namespace GpioteEventsPort{    ///<Event generated from multiple pins.
        using Addr = Register::Address<0x4000617c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteIntenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40006304,0x7ffffff0,0x00000000,unsigned>;
        ///Enable interrupt on IN[0] event.
        enum class In0Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,In0Val> in0{}; 
        namespace In0ValC{
            constexpr Register::FieldValue<decltype(in0)::Type,In0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in0)::Type,In0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in0)::Type,In0Val::set> set{};
        }
        ///Enable interrupt on IN[1] event.
        enum class In1Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,In1Val> in1{}; 
        namespace In1ValC{
            constexpr Register::FieldValue<decltype(in1)::Type,In1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in1)::Type,In1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in1)::Type,In1Val::set> set{};
        }
        ///Enable interrupt on IN[2] event.
        enum class In2Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,In2Val> in2{}; 
        namespace In2ValC{
            constexpr Register::FieldValue<decltype(in2)::Type,In2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in2)::Type,In2Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in2)::Type,In2Val::set> set{};
        }
        ///Enable interrupt on IN[3] event.
        enum class In3Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,In3Val> in3{}; 
        namespace In3ValC{
            constexpr Register::FieldValue<decltype(in3)::Type,In3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in3)::Type,In3Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in3)::Type,In3Val::set> set{};
        }
        ///Enable interrupt on PORT event.
        enum class PortVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,PortVal> port{}; 
        namespace PortValC{
            constexpr Register::FieldValue<decltype(port)::Type,PortVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(port)::Type,PortVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(port)::Type,PortVal::set> set{};
        }
    }
    namespace GpioteIntenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40006308,0x7ffffff0,0x00000000,unsigned>;
        ///Disable interrupt on IN[0] event.
        enum class In0Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,In0Val> in0{}; 
        namespace In0ValC{
            constexpr Register::FieldValue<decltype(in0)::Type,In0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in0)::Type,In0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in0)::Type,In0Val::clear> clear{};
        }
        ///Disable interrupt on IN[1] event.
        enum class In1Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,In1Val> in1{}; 
        namespace In1ValC{
            constexpr Register::FieldValue<decltype(in1)::Type,In1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in1)::Type,In1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in1)::Type,In1Val::clear> clear{};
        }
        ///Disable interrupt on IN[2] event.
        enum class In2Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,In2Val> in2{}; 
        namespace In2ValC{
            constexpr Register::FieldValue<decltype(in2)::Type,In2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in2)::Type,In2Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in2)::Type,In2Val::clear> clear{};
        }
        ///Disable interrupt on IN[3] event.
        enum class In3Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,In3Val> in3{}; 
        namespace In3ValC{
            constexpr Register::FieldValue<decltype(in3)::Type,In3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(in3)::Type,In3Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(in3)::Type,In3Val::clear> clear{};
        }
        ///Disable interrupt on PORT event.
        enum class PortVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,PortVal> port{}; 
        namespace PortValC{
            constexpr Register::FieldValue<decltype(port)::Type,PortVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(port)::Type,PortVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(port)::Type,PortVal::clear> clear{};
        }
    }
    namespace GpiotePower{    ///<Peripheral power control.
        using Addr = Register::Address<0x40006ffc,0xfffffffe,0x00000000,unsigned>;
        ///Peripheral power control.
        enum class PowerVal {
            disabled=0x00000000,     ///<Module power disabled.
            enabled=0x00000001,     ///<Module power enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PowerVal> power{}; 
        namespace PowerValC{
            constexpr Register::FieldValue<decltype(power)::Type,PowerVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(power)::Type,PowerVal::enabled> enabled{};
        }
    }
    namespace GpioteTasksOut0{    ///<Tasks asssociated with GPIOTE channels.
        using Addr = Register::Address<0x40006000,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksOut1{    ///<Tasks asssociated with GPIOTE channels.
        using Addr = Register::Address<0x40006004,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksOut2{    ///<Tasks asssociated with GPIOTE channels.
        using Addr = Register::Address<0x40006008,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteTasksOut3{    ///<Tasks asssociated with GPIOTE channels.
        using Addr = Register::Address<0x4000600c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteEventsIn0{    ///<Tasks asssociated with GPIOTE channels.
        using Addr = Register::Address<0x40006100,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteEventsIn1{    ///<Tasks asssociated with GPIOTE channels.
        using Addr = Register::Address<0x40006104,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteEventsIn2{    ///<Tasks asssociated with GPIOTE channels.
        using Addr = Register::Address<0x40006108,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteEventsIn3{    ///<Tasks asssociated with GPIOTE channels.
        using Addr = Register::Address<0x4000610c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioteConfig0{    ///<Channel configuration registers.
        using Addr = Register::Address<0x40006510,0xffece0fc,0x00000000,unsigned>;
        ///Mode
        enum class ModeVal {
            disabled=0x00000000,     ///<Disabled.
            event=0x00000001,     ///<Channel configure in event mode.
            task=0x00000003,     ///<Channel configure in task mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::event> event{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::task> task{};
        }
        ///Pin select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///Effects on output when in Task mode, or events on input that generates an event.
        enum class PolarityVal {
            none=0x00000000,     ///<No task or event.
            lotohi=0x00000001,     ///<Low to high.
            hitolo=0x00000002,     ///<High to low.
            toggle=0x00000003,     ///<Toggle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PolarityVal> polarity{}; 
        namespace PolarityValC{
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::none> none{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::lotohi> lotohi{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::hitolo> hitolo{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::toggle> toggle{};
        }
        ///Initial value of the output when the GPIOTE channel is configured as a Task.
        enum class OutinitVal {
            low=0x00000000,     ///<Initial low output when in task mode.
            high=0x00000001,     ///<Initial high output when in task mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OutinitVal> outinit{}; 
        namespace OutinitValC{
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::low> low{};
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::high> high{};
        }
    }
    namespace GpioteConfig1{    ///<Channel configuration registers.
        using Addr = Register::Address<0x40006514,0xffece0fc,0x00000000,unsigned>;
        ///Mode
        enum class ModeVal {
            disabled=0x00000000,     ///<Disabled.
            event=0x00000001,     ///<Channel configure in event mode.
            task=0x00000003,     ///<Channel configure in task mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::event> event{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::task> task{};
        }
        ///Pin select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///Effects on output when in Task mode, or events on input that generates an event.
        enum class PolarityVal {
            none=0x00000000,     ///<No task or event.
            lotohi=0x00000001,     ///<Low to high.
            hitolo=0x00000002,     ///<High to low.
            toggle=0x00000003,     ///<Toggle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PolarityVal> polarity{}; 
        namespace PolarityValC{
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::none> none{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::lotohi> lotohi{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::hitolo> hitolo{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::toggle> toggle{};
        }
        ///Initial value of the output when the GPIOTE channel is configured as a Task.
        enum class OutinitVal {
            low=0x00000000,     ///<Initial low output when in task mode.
            high=0x00000001,     ///<Initial high output when in task mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OutinitVal> outinit{}; 
        namespace OutinitValC{
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::low> low{};
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::high> high{};
        }
    }
    namespace GpioteConfig2{    ///<Channel configuration registers.
        using Addr = Register::Address<0x40006518,0xffece0fc,0x00000000,unsigned>;
        ///Mode
        enum class ModeVal {
            disabled=0x00000000,     ///<Disabled.
            event=0x00000001,     ///<Channel configure in event mode.
            task=0x00000003,     ///<Channel configure in task mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::event> event{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::task> task{};
        }
        ///Pin select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///Effects on output when in Task mode, or events on input that generates an event.
        enum class PolarityVal {
            none=0x00000000,     ///<No task or event.
            lotohi=0x00000001,     ///<Low to high.
            hitolo=0x00000002,     ///<High to low.
            toggle=0x00000003,     ///<Toggle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PolarityVal> polarity{}; 
        namespace PolarityValC{
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::none> none{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::lotohi> lotohi{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::hitolo> hitolo{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::toggle> toggle{};
        }
        ///Initial value of the output when the GPIOTE channel is configured as a Task.
        enum class OutinitVal {
            low=0x00000000,     ///<Initial low output when in task mode.
            high=0x00000001,     ///<Initial high output when in task mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OutinitVal> outinit{}; 
        namespace OutinitValC{
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::low> low{};
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::high> high{};
        }
    }
    namespace GpioteConfig3{    ///<Channel configuration registers.
        using Addr = Register::Address<0x4000651c,0xffece0fc,0x00000000,unsigned>;
        ///Mode
        enum class ModeVal {
            disabled=0x00000000,     ///<Disabled.
            event=0x00000001,     ///<Channel configure in event mode.
            task=0x00000003,     ///<Channel configure in task mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::event> event{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::task> task{};
        }
        ///Pin select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///Effects on output when in Task mode, or events on input that generates an event.
        enum class PolarityVal {
            none=0x00000000,     ///<No task or event.
            lotohi=0x00000001,     ///<Low to high.
            hitolo=0x00000002,     ///<High to low.
            toggle=0x00000003,     ///<Toggle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PolarityVal> polarity{}; 
        namespace PolarityValC{
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::none> none{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::lotohi> lotohi{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::hitolo> hitolo{};
            constexpr Register::FieldValue<decltype(polarity)::Type,PolarityVal::toggle> toggle{};
        }
        ///Initial value of the output when the GPIOTE channel is configured as a Task.
        enum class OutinitVal {
            low=0x00000000,     ///<Initial low output when in task mode.
            high=0x00000001,     ///<Initial high output when in task mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OutinitVal> outinit{}; 
        namespace OutinitValC{
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::low> low{};
            constexpr Register::FieldValue<decltype(outinit)::Type,OutinitVal::high> high{};
        }
    }
}
