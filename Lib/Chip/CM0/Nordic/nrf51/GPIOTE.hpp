#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//GPIO tasks and events.
    namespace NonetasksOut0{    ///<Tasks asssociated with GPIOTE channels.
        using Addr = Register::Address<0x40006000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksOut1{    ///<Tasks asssociated with GPIOTE channels.
        using Addr = Register::Address<0x40006004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksOut2{    ///<Tasks asssociated with GPIOTE channels.
        using Addr = Register::Address<0x40006008,0xffffffff,0,unsigned>;
    }
    namespace NonetasksOut3{    ///<Tasks asssociated with GPIOTE channels.
        using Addr = Register::Address<0x4000600c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsIn0{    ///<Tasks asssociated with GPIOTE channels.
        using Addr = Register::Address<0x40006100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsIn1{    ///<Tasks asssociated with GPIOTE channels.
        using Addr = Register::Address<0x40006104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsIn2{    ///<Tasks asssociated with GPIOTE channels.
        using Addr = Register::Address<0x40006108,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsIn3{    ///<Tasks asssociated with GPIOTE channels.
        using Addr = Register::Address<0x4000610c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsPort{    ///<Event generated from multiple pins.
        using Addr = Register::Address<0x4000617c,0xffffffff,0,unsigned>;
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40006304,0x7ffffff0,0,unsigned>;
        ///Enable interrupt on IN[0] event.
        enum class in0Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace in0ValC{
            constexpr MPL::Value<in0Val,in0Val::disabled> disabled{};
            constexpr MPL::Value<in0Val,in0Val::enabled> enabled{};
            constexpr MPL::Value<in0Val,in0Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,in0Val> in0{}; 
        ///Enable interrupt on IN[1] event.
        enum class in1Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace in1ValC{
            constexpr MPL::Value<in1Val,in1Val::disabled> disabled{};
            constexpr MPL::Value<in1Val,in1Val::enabled> enabled{};
            constexpr MPL::Value<in1Val,in1Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,in1Val> in1{}; 
        ///Enable interrupt on IN[2] event.
        enum class in2Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace in2ValC{
            constexpr MPL::Value<in2Val,in2Val::disabled> disabled{};
            constexpr MPL::Value<in2Val,in2Val::enabled> enabled{};
            constexpr MPL::Value<in2Val,in2Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,in2Val> in2{}; 
        ///Enable interrupt on IN[3] event.
        enum class in3Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace in3ValC{
            constexpr MPL::Value<in3Val,in3Val::disabled> disabled{};
            constexpr MPL::Value<in3Val,in3Val::enabled> enabled{};
            constexpr MPL::Value<in3Val,in3Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,in3Val> in3{}; 
        ///Enable interrupt on PORT event.
        enum class portVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace portValC{
            constexpr MPL::Value<portVal,portVal::disabled> disabled{};
            constexpr MPL::Value<portVal,portVal::enabled> enabled{};
            constexpr MPL::Value<portVal,portVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,portVal> port{}; 
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40006308,0x7ffffff0,0,unsigned>;
        ///Disable interrupt on IN[0] event.
        enum class in0Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace in0ValC{
            constexpr MPL::Value<in0Val,in0Val::disabled> disabled{};
            constexpr MPL::Value<in0Val,in0Val::enabled> enabled{};
            constexpr MPL::Value<in0Val,in0Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,in0Val> in0{}; 
        ///Disable interrupt on IN[1] event.
        enum class in1Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace in1ValC{
            constexpr MPL::Value<in1Val,in1Val::disabled> disabled{};
            constexpr MPL::Value<in1Val,in1Val::enabled> enabled{};
            constexpr MPL::Value<in1Val,in1Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,in1Val> in1{}; 
        ///Disable interrupt on IN[2] event.
        enum class in2Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace in2ValC{
            constexpr MPL::Value<in2Val,in2Val::disabled> disabled{};
            constexpr MPL::Value<in2Val,in2Val::enabled> enabled{};
            constexpr MPL::Value<in2Val,in2Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,in2Val> in2{}; 
        ///Disable interrupt on IN[3] event.
        enum class in3Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace in3ValC{
            constexpr MPL::Value<in3Val,in3Val::disabled> disabled{};
            constexpr MPL::Value<in3Val,in3Val::enabled> enabled{};
            constexpr MPL::Value<in3Val,in3Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,in3Val> in3{}; 
        ///Disable interrupt on PORT event.
        enum class portVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace portValC{
            constexpr MPL::Value<portVal,portVal::disabled> disabled{};
            constexpr MPL::Value<portVal,portVal::enabled> enabled{};
            constexpr MPL::Value<portVal,portVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,portVal> port{}; 
    }
    namespace Noneconfig0{    ///<Channel configuration registers.
        using Addr = Register::Address<0x40006510,0xffece0fc,0,unsigned>;
        ///Mode
        enum class modeVal {
            disabled=0x00000000,     ///<Disabled.
            event=0x00000001,     ///<Channel configure in event mode.
            task=0x00000003,     ///<Channel configure in task mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::disabled> disabled{};
            constexpr MPL::Value<modeVal,modeVal::event> event{};
            constexpr MPL::Value<modeVal,modeVal::task> task{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Pin select.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///Effects on output when in Task mode, or events on input that generates an event.
        enum class polarityVal {
            none=0x00000000,     ///<No task or event.
            lotohi=0x00000001,     ///<Low to high.
            hitolo=0x00000002,     ///<High to low.
            toggle=0x00000003,     ///<Toggle.
        };
        namespace polarityValC{
            constexpr MPL::Value<polarityVal,polarityVal::none> none{};
            constexpr MPL::Value<polarityVal,polarityVal::lotohi> lotohi{};
            constexpr MPL::Value<polarityVal,polarityVal::hitolo> hitolo{};
            constexpr MPL::Value<polarityVal,polarityVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,polarityVal> polarity{}; 
        ///Initial value of the output when the GPIOTE channel is configured as a Task.
        enum class outinitVal {
            low=0x00000000,     ///<Initial low output when in task mode.
            high=0x00000001,     ///<Initial high output when in task mode.
        };
        namespace outinitValC{
            constexpr MPL::Value<outinitVal,outinitVal::low> low{};
            constexpr MPL::Value<outinitVal,outinitVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,outinitVal> outinit{}; 
    }
    namespace Noneconfig1{    ///<Channel configuration registers.
        using Addr = Register::Address<0x40006514,0xffece0fc,0,unsigned>;
        ///Mode
        enum class modeVal {
            disabled=0x00000000,     ///<Disabled.
            event=0x00000001,     ///<Channel configure in event mode.
            task=0x00000003,     ///<Channel configure in task mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::disabled> disabled{};
            constexpr MPL::Value<modeVal,modeVal::event> event{};
            constexpr MPL::Value<modeVal,modeVal::task> task{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Pin select.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///Effects on output when in Task mode, or events on input that generates an event.
        enum class polarityVal {
            none=0x00000000,     ///<No task or event.
            lotohi=0x00000001,     ///<Low to high.
            hitolo=0x00000002,     ///<High to low.
            toggle=0x00000003,     ///<Toggle.
        };
        namespace polarityValC{
            constexpr MPL::Value<polarityVal,polarityVal::none> none{};
            constexpr MPL::Value<polarityVal,polarityVal::lotohi> lotohi{};
            constexpr MPL::Value<polarityVal,polarityVal::hitolo> hitolo{};
            constexpr MPL::Value<polarityVal,polarityVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,polarityVal> polarity{}; 
        ///Initial value of the output when the GPIOTE channel is configured as a Task.
        enum class outinitVal {
            low=0x00000000,     ///<Initial low output when in task mode.
            high=0x00000001,     ///<Initial high output when in task mode.
        };
        namespace outinitValC{
            constexpr MPL::Value<outinitVal,outinitVal::low> low{};
            constexpr MPL::Value<outinitVal,outinitVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,outinitVal> outinit{}; 
    }
    namespace Noneconfig2{    ///<Channel configuration registers.
        using Addr = Register::Address<0x40006518,0xffece0fc,0,unsigned>;
        ///Mode
        enum class modeVal {
            disabled=0x00000000,     ///<Disabled.
            event=0x00000001,     ///<Channel configure in event mode.
            task=0x00000003,     ///<Channel configure in task mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::disabled> disabled{};
            constexpr MPL::Value<modeVal,modeVal::event> event{};
            constexpr MPL::Value<modeVal,modeVal::task> task{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Pin select.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///Effects on output when in Task mode, or events on input that generates an event.
        enum class polarityVal {
            none=0x00000000,     ///<No task or event.
            lotohi=0x00000001,     ///<Low to high.
            hitolo=0x00000002,     ///<High to low.
            toggle=0x00000003,     ///<Toggle.
        };
        namespace polarityValC{
            constexpr MPL::Value<polarityVal,polarityVal::none> none{};
            constexpr MPL::Value<polarityVal,polarityVal::lotohi> lotohi{};
            constexpr MPL::Value<polarityVal,polarityVal::hitolo> hitolo{};
            constexpr MPL::Value<polarityVal,polarityVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,polarityVal> polarity{}; 
        ///Initial value of the output when the GPIOTE channel is configured as a Task.
        enum class outinitVal {
            low=0x00000000,     ///<Initial low output when in task mode.
            high=0x00000001,     ///<Initial high output when in task mode.
        };
        namespace outinitValC{
            constexpr MPL::Value<outinitVal,outinitVal::low> low{};
            constexpr MPL::Value<outinitVal,outinitVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,outinitVal> outinit{}; 
    }
    namespace Noneconfig3{    ///<Channel configuration registers.
        using Addr = Register::Address<0x4000651c,0xffece0fc,0,unsigned>;
        ///Mode
        enum class modeVal {
            disabled=0x00000000,     ///<Disabled.
            event=0x00000001,     ///<Channel configure in event mode.
            task=0x00000003,     ///<Channel configure in task mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::disabled> disabled{};
            constexpr MPL::Value<modeVal,modeVal::event> event{};
            constexpr MPL::Value<modeVal,modeVal::task> task{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Pin select.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///Effects on output when in Task mode, or events on input that generates an event.
        enum class polarityVal {
            none=0x00000000,     ///<No task or event.
            lotohi=0x00000001,     ///<Low to high.
            hitolo=0x00000002,     ///<High to low.
            toggle=0x00000003,     ///<Toggle.
        };
        namespace polarityValC{
            constexpr MPL::Value<polarityVal,polarityVal::none> none{};
            constexpr MPL::Value<polarityVal,polarityVal::lotohi> lotohi{};
            constexpr MPL::Value<polarityVal,polarityVal::hitolo> hitolo{};
            constexpr MPL::Value<polarityVal,polarityVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,polarityVal> polarity{}; 
        ///Initial value of the output when the GPIOTE channel is configured as a Task.
        enum class outinitVal {
            low=0x00000000,     ///<Initial low output when in task mode.
            high=0x00000001,     ///<Initial high output when in task mode.
        };
        namespace outinitValC{
            constexpr MPL::Value<outinitVal,outinitVal::low> low{};
            constexpr MPL::Value<outinitVal,outinitVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,outinitVal> outinit{}; 
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x40006ffc,0xfffffffe,0,unsigned>;
        ///Peripheral power control.
        enum class powerVal {
            disabled=0x00000000,     ///<Module power disabled.
            enabled=0x00000001,     ///<Module power enabled.
        };
        namespace powerValC{
            constexpr MPL::Value<powerVal,powerVal::disabled> disabled{};
            constexpr MPL::Value<powerVal,powerVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,powerVal> power{}; 
    }
}
