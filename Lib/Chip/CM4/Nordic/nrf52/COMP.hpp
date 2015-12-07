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
        enum class ReadysampleVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadysampleVal> readySample{}; 
        namespace ReadysampleValC{
            constexpr Register::FieldValue<decltype(readySample),ReadysampleVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(readySample),ReadysampleVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_READY event and TASKS_STOP task
        enum class ReadystopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReadystopVal> readyStop{}; 
        namespace ReadystopValC{
            constexpr Register::FieldValue<decltype(readyStop),ReadystopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(readyStop),ReadystopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_DOWN event and TASKS_STOP task
        enum class DownstopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DownstopVal> downStop{}; 
        namespace DownstopValC{
            constexpr Register::FieldValue<decltype(downStop),DownstopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(downStop),DownstopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_UP event and TASKS_STOP task
        enum class UpstopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,UpstopVal> upStop{}; 
        namespace UpstopValC{
            constexpr Register::FieldValue<decltype(upStop),UpstopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(upStop),UpstopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_CROSS event and TASKS_STOP task
        enum class CrossstopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CrossstopVal> crossStop{}; 
        namespace CrossstopValC{
            constexpr Register::FieldValue<decltype(crossStop),CrossstopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(crossStop),CrossstopVal::enabled> enabled{};
        }
    }
    namespace Noneinten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x40013300,0xfffffff0,0,unsigned>;
        ///Enable or disable interrupt on EVENTS_READY event
        enum class ReadyVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadyVal> ready{}; 
        namespace ReadyValC{
            constexpr Register::FieldValue<decltype(ready),ReadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ready),ReadyVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_DOWN event
        enum class DownVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DownVal> down{}; 
        namespace DownValC{
            constexpr Register::FieldValue<decltype(down),DownVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(down),DownVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_UP event
        enum class UpVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,UpVal> up{}; 
        namespace UpValC{
            constexpr Register::FieldValue<decltype(up),UpVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(up),UpVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_CROSS event
        enum class CrossVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CrossVal> cross{}; 
        namespace CrossValC{
            constexpr Register::FieldValue<decltype(cross),CrossVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cross),CrossVal::enabled> enabled{};
        }
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40013304,0xfffffff0,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_READY event
        enum class ReadyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadyVal> ready{}; 
        namespace ReadyValC{
            constexpr Register::FieldValue<decltype(ready),ReadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ready),ReadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ready),ReadyVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_DOWN event
        enum class DownVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DownVal> down{}; 
        namespace DownValC{
            constexpr Register::FieldValue<decltype(down),DownVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(down),DownVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(down),DownVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_UP event
        enum class UpVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,UpVal> up{}; 
        namespace UpValC{
            constexpr Register::FieldValue<decltype(up),UpVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(up),UpVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(up),UpVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_CROSS event
        enum class CrossVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CrossVal> cross{}; 
        namespace CrossValC{
            constexpr Register::FieldValue<decltype(cross),CrossVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cross),CrossVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(cross),CrossVal::set> set{};
        }
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40013308,0xfffffff0,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_READY event
        enum class ReadyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadyVal> ready{}; 
        namespace ReadyValC{
            constexpr Register::FieldValue<decltype(ready),ReadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ready),ReadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ready),ReadyVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_DOWN event
        enum class DownVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DownVal> down{}; 
        namespace DownValC{
            constexpr Register::FieldValue<decltype(down),DownVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(down),DownVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(down),DownVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_UP event
        enum class UpVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,UpVal> up{}; 
        namespace UpValC{
            constexpr Register::FieldValue<decltype(up),UpVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(up),UpVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(up),UpVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_CROSS event
        enum class CrossVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CrossVal> cross{}; 
        namespace CrossValC{
            constexpr Register::FieldValue<decltype(cross),CrossVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cross),CrossVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(cross),CrossVal::clear> clear{};
        }
    }
    namespace Noneresult{    ///<Compare result
        using Addr = Register::Address<0x40013400,0xfffffffe,0,unsigned>;
        ///Result of last compare. Decision point SAMPLE task.
        enum class ResultVal {
            below=0x00000000,     ///<Input voltage is below the threshold (VIN+ < VIN-)
            above=0x00000001,     ///<Input voltage is above the threshold (VIN+ > VIN-)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ResultVal> result{}; 
        namespace ResultValC{
            constexpr Register::FieldValue<decltype(result),ResultVal::below> below{};
            constexpr Register::FieldValue<decltype(result),ResultVal::above> above{};
        }
    }
    namespace Noneenable{    ///<COMP enable
        using Addr = Register::Address<0x40013500,0xfffffffc,0,unsigned>;
        ///Enable or disable COMP
        enum class EnableVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000002,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable),EnableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enable),EnableVal::enabled> enabled{};
        }
    }
    namespace Nonepsel{    ///<Pin select
        using Addr = Register::Address<0x40013504,0xfffffff8,0,unsigned>;
        ///Analog pin select
        enum class PselVal {
            analoginput0=0x00000000,     ///<AIN0 selected as analog input
            analoginput1=0x00000001,     ///<AIN1 selected as analog input
            analoginput2=0x00000002,     ///<AIN2 selected as analog input
            analoginput3=0x00000003,     ///<AIN3 selected as analog input
            analoginput4=0x00000004,     ///<AIN4 selected as analog input
            analoginput5=0x00000005,     ///<AIN5 selected as analog input
            analoginput6=0x00000006,     ///<AIN6 selected as analog input
            analoginput7=0x00000007,     ///<AIN7 selected as analog input
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,PselVal> psel{}; 
        namespace PselValC{
            constexpr Register::FieldValue<decltype(psel),PselVal::analoginput0> analoginput0{};
            constexpr Register::FieldValue<decltype(psel),PselVal::analoginput1> analoginput1{};
            constexpr Register::FieldValue<decltype(psel),PselVal::analoginput2> analoginput2{};
            constexpr Register::FieldValue<decltype(psel),PselVal::analoginput3> analoginput3{};
            constexpr Register::FieldValue<decltype(psel),PselVal::analoginput4> analoginput4{};
            constexpr Register::FieldValue<decltype(psel),PselVal::analoginput5> analoginput5{};
            constexpr Register::FieldValue<decltype(psel),PselVal::analoginput6> analoginput6{};
            constexpr Register::FieldValue<decltype(psel),PselVal::analoginput7> analoginput7{};
        }
    }
    namespace Nonerefsel{    ///<Reference source select
        using Addr = Register::Address<0x40013508,0xfffffff8,0,unsigned>;
        ///Reference select
        enum class RefselVal {
            int1v2=0x00000000,     ///<VREF = internal 1.2 V reference (VDD >= 1.7 V)
            int1v8=0x00000001,     ///<VREF = internal 1.8 V reference (VDD >= VREF + 0.2 V)
            int2v4=0x00000002,     ///<VREF = internal 2.4 V reference (VDD >= VREF + 0.2 V)
            vdd=0x00000004,     ///<VREF = VDD
            aref=0x00000005,     ///<VREF = AREF (VDD >= VREF >= AREFMIN)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,RefselVal> refsel{}; 
        namespace RefselValC{
            constexpr Register::FieldValue<decltype(refsel),RefselVal::int1v2> int1v2{};
            constexpr Register::FieldValue<decltype(refsel),RefselVal::int1v8> int1v8{};
            constexpr Register::FieldValue<decltype(refsel),RefselVal::int2v4> int2v4{};
            constexpr Register::FieldValue<decltype(refsel),RefselVal::vdd> vdd{};
            constexpr Register::FieldValue<decltype(refsel),RefselVal::aref> aref{};
        }
    }
    namespace Noneextrefsel{    ///<External reference select
        using Addr = Register::Address<0x4001350c,0xfffffffe,0,unsigned>;
        ///External analog reference select
        enum class ExtrefselVal {
            analogreference0=0x00000000,     ///<Use AIN0 as external analog reference
            analogreference1=0x00000001,     ///<Use AIN1 as external analog reference
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtrefselVal> extrefsel{}; 
        namespace ExtrefselValC{
            constexpr Register::FieldValue<decltype(extrefsel),ExtrefselVal::analogreference0> analogreference0{};
            constexpr Register::FieldValue<decltype(extrefsel),ExtrefselVal::analogreference1> analogreference1{};
        }
    }
    namespace Noneth{    ///<Threshold configuration for hysteresis unit
        using Addr = Register::Address<0x40013530,0xffffc0c0,0,unsigned>;
        ///VUP = (THUP+1)/64*VREF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> thup{}; 
        namespace ThupValC{
        }
        ///VDOWN = (THDOWN+1)/64*VREF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> thdown{}; 
        namespace ThdownValC{
        }
    }
    namespace Nonemode{    ///<Mode configuration
        using Addr = Register::Address<0x40013534,0xfffffefc,0,unsigned>;
        ///Speed and power mode
        enum class SpVal {
            low=0x00000000,     ///<Low power mode
            normal=0x00000001,     ///<Normal mode
            high=0x00000002,     ///<High speed mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SpVal> sp{}; 
        namespace SpValC{
            constexpr Register::FieldValue<decltype(sp),SpVal::low> low{};
            constexpr Register::FieldValue<decltype(sp),SpVal::normal> normal{};
            constexpr Register::FieldValue<decltype(sp),SpVal::high> high{};
        }
        ///Main operation mode
        enum class MainVal {
            se=0x00000000,     ///<Single ended mode
            diff=0x00000001,     ///<Differential mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,MainVal> main{}; 
        namespace MainValC{
            constexpr Register::FieldValue<decltype(main),MainVal::se> se{};
            constexpr Register::FieldValue<decltype(main),MainVal::diff> diff{};
        }
    }
    namespace Nonehyst{    ///<Comparator hysteresis enable
        using Addr = Register::Address<0x40013538,0xfffffffe,0,unsigned>;
        ///Comparator hysteresis
        enum class HystVal {
            nohyst=0x00000000,     ///<Comparator hysteresis disabled
            hyst50mv=0x00000001,     ///<Comparator hysteresis enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,HystVal> hyst{}; 
        namespace HystValC{
            constexpr Register::FieldValue<decltype(hyst),HystVal::nohyst> nohyst{};
            constexpr Register::FieldValue<decltype(hyst),HystVal::hyst50mv> hyst50mv{};
        }
    }
    namespace Noneisource{    ///<Current source select on analog input
        using Addr = Register::Address<0x4001353c,0xfffffffc,0,unsigned>;
        ///Comparator hysteresis
        enum class IsourceVal {
            off=0x00000000,     ///<Current source disabled
            ien2ma5=0x00000001,     ///<Current source enabled (+/- 2.5 uA)
            ien5ma=0x00000002,     ///<Current source enabled (+/- 5 uA)
            ien10ma=0x00000003,     ///<Current source enabled (+/- 10 uA)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,IsourceVal> isource{}; 
        namespace IsourceValC{
            constexpr Register::FieldValue<decltype(isource),IsourceVal::off> off{};
            constexpr Register::FieldValue<decltype(isource),IsourceVal::ien2ma5> ien2ma5{};
            constexpr Register::FieldValue<decltype(isource),IsourceVal::ien5ma> ien5ma{};
            constexpr Register::FieldValue<decltype(isource),IsourceVal::ien10ma> ien10ma{};
        }
    }
}
