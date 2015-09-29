#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Comparator
    namespace NonetasksStart{    ///<Start comparator
        using Addr = Register::Address<0x40013000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop comparator
        using Addr = Register::Address<0x40013004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSample{    ///<Sample comparator value
        using Addr = Register::Address<0x40013008,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsReady{    ///<COMP is ready and output is valid
        using Addr = Register::Address<0x40013100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsDown{    ///<Downward crossing
        using Addr = Register::Address<0x40013104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsUp{    ///<Upward crossing
        using Addr = Register::Address<0x40013108,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCross{    ///<Downward or upward crossing
        using Addr = Register::Address<0x4001310c,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcut register
        using Addr = Register::Address<0x40013200,0xffffffe0,0,unsigned>;
        ///Shortcut between EVENTS_READY event and TASKS_SAMPLE task
        enum class readySampleVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace readySampleValC{
            constexpr MPL::Value<readySampleVal,readySampleVal::disabled> disabled{};
            constexpr MPL::Value<readySampleVal,readySampleVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readySampleVal> readySample{}; 
        ///Shortcut between EVENTS_READY event and TASKS_STOP task
        enum class readyStopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace readyStopValC{
            constexpr MPL::Value<readyStopVal,readyStopVal::disabled> disabled{};
            constexpr MPL::Value<readyStopVal,readyStopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,readyStopVal> readyStop{}; 
        ///Shortcut between EVENTS_DOWN event and TASKS_STOP task
        enum class downStopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace downStopValC{
            constexpr MPL::Value<downStopVal,downStopVal::disabled> disabled{};
            constexpr MPL::Value<downStopVal,downStopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,downStopVal> downStop{}; 
        ///Shortcut between EVENTS_UP event and TASKS_STOP task
        enum class upStopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace upStopValC{
            constexpr MPL::Value<upStopVal,upStopVal::disabled> disabled{};
            constexpr MPL::Value<upStopVal,upStopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,upStopVal> upStop{}; 
        ///Shortcut between EVENTS_CROSS event and TASKS_STOP task
        enum class crossStopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace crossStopValC{
            constexpr MPL::Value<crossStopVal,crossStopVal::disabled> disabled{};
            constexpr MPL::Value<crossStopVal,crossStopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,crossStopVal> crossStop{}; 
    }
    namespace Noneinten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x40013300,0xfffffff0,0,unsigned>;
        ///Enable or disable interrupt on EVENTS_READY event
        enum class readyVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace readyValC{
            constexpr MPL::Value<readyVal,readyVal::disabled> disabled{};
            constexpr MPL::Value<readyVal,readyVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readyVal> ready{}; 
        ///Enable or disable interrupt on EVENTS_DOWN event
        enum class downVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace downValC{
            constexpr MPL::Value<downVal,downVal::disabled> disabled{};
            constexpr MPL::Value<downVal,downVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,downVal> down{}; 
        ///Enable or disable interrupt on EVENTS_UP event
        enum class upVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace upValC{
            constexpr MPL::Value<upVal,upVal::disabled> disabled{};
            constexpr MPL::Value<upVal,upVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,upVal> up{}; 
        ///Enable or disable interrupt on EVENTS_CROSS event
        enum class crossVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace crossValC{
            constexpr MPL::Value<crossVal,crossVal::disabled> disabled{};
            constexpr MPL::Value<crossVal,crossVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,crossVal> cross{}; 
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40013304,0xfffffff0,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_READY event
        enum class readyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace readyValC{
            constexpr MPL::Value<readyVal,readyVal::disabled> disabled{};
            constexpr MPL::Value<readyVal,readyVal::enabled> enabled{};
            constexpr MPL::Value<readyVal,readyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readyVal> ready{}; 
        ///Write '1' to Enable interrupt on EVENTS_DOWN event
        enum class downVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace downValC{
            constexpr MPL::Value<downVal,downVal::disabled> disabled{};
            constexpr MPL::Value<downVal,downVal::enabled> enabled{};
            constexpr MPL::Value<downVal,downVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,downVal> down{}; 
        ///Write '1' to Enable interrupt on EVENTS_UP event
        enum class upVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace upValC{
            constexpr MPL::Value<upVal,upVal::disabled> disabled{};
            constexpr MPL::Value<upVal,upVal::enabled> enabled{};
            constexpr MPL::Value<upVal,upVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,upVal> up{}; 
        ///Write '1' to Enable interrupt on EVENTS_CROSS event
        enum class crossVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace crossValC{
            constexpr MPL::Value<crossVal,crossVal::disabled> disabled{};
            constexpr MPL::Value<crossVal,crossVal::enabled> enabled{};
            constexpr MPL::Value<crossVal,crossVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,crossVal> cross{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40013308,0xfffffff0,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_READY event
        enum class readyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace readyValC{
            constexpr MPL::Value<readyVal,readyVal::disabled> disabled{};
            constexpr MPL::Value<readyVal,readyVal::enabled> enabled{};
            constexpr MPL::Value<readyVal,readyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readyVal> ready{}; 
        ///Write '1' to Clear interrupt on EVENTS_DOWN event
        enum class downVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace downValC{
            constexpr MPL::Value<downVal,downVal::disabled> disabled{};
            constexpr MPL::Value<downVal,downVal::enabled> enabled{};
            constexpr MPL::Value<downVal,downVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,downVal> down{}; 
        ///Write '1' to Clear interrupt on EVENTS_UP event
        enum class upVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace upValC{
            constexpr MPL::Value<upVal,upVal::disabled> disabled{};
            constexpr MPL::Value<upVal,upVal::enabled> enabled{};
            constexpr MPL::Value<upVal,upVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,upVal> up{}; 
        ///Write '1' to Clear interrupt on EVENTS_CROSS event
        enum class crossVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace crossValC{
            constexpr MPL::Value<crossVal,crossVal::disabled> disabled{};
            constexpr MPL::Value<crossVal,crossVal::enabled> enabled{};
            constexpr MPL::Value<crossVal,crossVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,crossVal> cross{}; 
    }
    namespace Noneresult{    ///<Compare result
        using Addr = Register::Address<0x40013400,0xfffffffe,0,unsigned>;
        ///Result of last compare. Decision point SAMPLE task.
        enum class resultVal {
            below=0x00000000,     ///<Input voltage is below the threshold (VIN+ < VIN-)
            above=0x00000001,     ///<Input voltage is above the threshold (VIN+ > VIN-)
        };
        namespace resultValC{
            constexpr MPL::Value<resultVal,resultVal::below> below{};
            constexpr MPL::Value<resultVal,resultVal::above> above{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,resultVal> result{}; 
    }
    namespace Noneenable{    ///<COMP enable
        using Addr = Register::Address<0x40013500,0xfffffffc,0,unsigned>;
        ///Enable or disable COMP
        enum class enableVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000002,     ///<Enable
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::disabled> disabled{};
            constexpr MPL::Value<enableVal,enableVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,enableVal> enable{}; 
    }
    namespace Nonepsel{    ///<Pin select
        using Addr = Register::Address<0x40013504,0xfffffff8,0,unsigned>;
        ///Analog pin select
        enum class pselVal {
            analoginput0=0x00000000,     ///<AIN0 selected as analog input
            analoginput1=0x00000001,     ///<AIN1 selected as analog input
            analoginput2=0x00000002,     ///<AIN2 selected as analog input
            analoginput3=0x00000003,     ///<AIN3 selected as analog input
            analoginput4=0x00000004,     ///<AIN4 selected as analog input
            analoginput5=0x00000005,     ///<AIN5 selected as analog input
            analoginput6=0x00000006,     ///<AIN6 selected as analog input
            analoginput7=0x00000007,     ///<AIN7 selected as analog input
        };
        namespace pselValC{
            constexpr MPL::Value<pselVal,pselVal::analoginput0> analoginput0{};
            constexpr MPL::Value<pselVal,pselVal::analoginput1> analoginput1{};
            constexpr MPL::Value<pselVal,pselVal::analoginput2> analoginput2{};
            constexpr MPL::Value<pselVal,pselVal::analoginput3> analoginput3{};
            constexpr MPL::Value<pselVal,pselVal::analoginput4> analoginput4{};
            constexpr MPL::Value<pselVal,pselVal::analoginput5> analoginput5{};
            constexpr MPL::Value<pselVal,pselVal::analoginput6> analoginput6{};
            constexpr MPL::Value<pselVal,pselVal::analoginput7> analoginput7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,pselVal> psel{}; 
    }
    namespace Nonerefsel{    ///<Reference source select
        using Addr = Register::Address<0x40013508,0xfffffff8,0,unsigned>;
        ///Reference select
        enum class refselVal {
            int1v2=0x00000000,     ///<VREF = internal 1.2 V reference (VDD >= 1.7 V)
            int1v8=0x00000001,     ///<VREF = internal 1.8 V reference (VDD >= VREF + 0.2 V)
            int2v4=0x00000002,     ///<VREF = internal 2.4 V reference (VDD >= VREF + 0.2 V)
            vdd=0x00000004,     ///<VREF = VDD
            aref=0x00000005,     ///<VREF = AREF (VDD >= VREF >= AREFMIN)
        };
        namespace refselValC{
            constexpr MPL::Value<refselVal,refselVal::int1v2> int1v2{};
            constexpr MPL::Value<refselVal,refselVal::int1v8> int1v8{};
            constexpr MPL::Value<refselVal,refselVal::int2v4> int2v4{};
            constexpr MPL::Value<refselVal,refselVal::vdd> vdd{};
            constexpr MPL::Value<refselVal,refselVal::aref> aref{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,refselVal> refsel{}; 
    }
    namespace Noneextrefsel{    ///<External reference select
        using Addr = Register::Address<0x4001350c,0xfffffffe,0,unsigned>;
        ///External analog reference select
        enum class extrefselVal {
            analogreference0=0x00000000,     ///<Use AIN0 as external analog reference
            analogreference1=0x00000001,     ///<Use AIN1 as external analog reference
        };
        namespace extrefselValC{
            constexpr MPL::Value<extrefselVal,extrefselVal::analogreference0> analogreference0{};
            constexpr MPL::Value<extrefselVal,extrefselVal::analogreference1> analogreference1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,extrefselVal> extrefsel{}; 
    }
    namespace Noneth{    ///<Threshold configuration for hysteresis unit
        using Addr = Register::Address<0x40013530,0xffffc0c0,0,unsigned>;
        ///VUP = (THUP+1)/64*VREF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> thup{}; 
        ///VDOWN = (THDOWN+1)/64*VREF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> thdown{}; 
    }
    namespace Nonemode{    ///<Mode configuration
        using Addr = Register::Address<0x40013534,0xfffffefc,0,unsigned>;
        ///Speed and power mode
        enum class spVal {
            low=0x00000000,     ///<Low power mode
            normal=0x00000001,     ///<Normal mode
            high=0x00000002,     ///<High speed mode
        };
        namespace spValC{
            constexpr MPL::Value<spVal,spVal::low> low{};
            constexpr MPL::Value<spVal,spVal::normal> normal{};
            constexpr MPL::Value<spVal,spVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,spVal> sp{}; 
        ///Main operation mode
        enum class mainVal {
            se=0x00000000,     ///<Single ended mode
            diff=0x00000001,     ///<Differential mode
        };
        namespace mainValC{
            constexpr MPL::Value<mainVal,mainVal::se> se{};
            constexpr MPL::Value<mainVal,mainVal::diff> diff{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,mainVal> main{}; 
    }
    namespace Nonehyst{    ///<Comparator hysteresis enable
        using Addr = Register::Address<0x40013538,0xfffffffe,0,unsigned>;
        ///Comparator hysteresis
        enum class hystVal {
            nohyst=0x00000000,     ///<Comparator hysteresis disabled
            hyst50mv=0x00000001,     ///<Comparator hysteresis enabled
        };
        namespace hystValC{
            constexpr MPL::Value<hystVal,hystVal::nohyst> nohyst{};
            constexpr MPL::Value<hystVal,hystVal::hyst50mv> hyst50mv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,hystVal> hyst{}; 
    }
    namespace Noneisource{    ///<Current source select on analog input
        using Addr = Register::Address<0x4001353c,0xfffffffc,0,unsigned>;
        ///Comparator hysteresis
        enum class isourceVal {
            off=0x00000000,     ///<Current source disabled
            ien2ma5=0x00000001,     ///<Current source enabled (+/- 2.5 uA)
            ien5ma=0x00000002,     ///<Current source enabled (+/- 5 uA)
            ien10ma=0x00000003,     ///<Current source enabled (+/- 10 uA)
        };
        namespace isourceValC{
            constexpr MPL::Value<isourceVal,isourceVal::off> off{};
            constexpr MPL::Value<isourceVal,isourceVal::ien2ma5> ien2ma5{};
            constexpr MPL::Value<isourceVal,isourceVal::ien5ma> ien5ma{};
            constexpr MPL::Value<isourceVal,isourceVal::ien10ma> ien10ma{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,isourceVal> isource{}; 
    }
}
