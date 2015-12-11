#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Low Power Comparator
    namespace NonetasksStart{    ///<Start comparator
        using Addr = Register::Address<0x40013000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop comparator
        using Addr = Register::Address<0x40013004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSample{    ///<Sample comparator value
        using Addr = Register::Address<0x40013008,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsReady{    ///<LPCOMP is ready and output is valid
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
            constexpr Register::FieldValue<decltype(readySample)::Type,ReadysampleVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(readySample)::Type,ReadysampleVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_READY event and TASKS_STOP task
        enum class ReadystopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReadystopVal> readyStop{}; 
        namespace ReadystopValC{
            constexpr Register::FieldValue<decltype(readyStop)::Type,ReadystopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(readyStop)::Type,ReadystopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_DOWN event and TASKS_STOP task
        enum class DownstopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DownstopVal> downStop{}; 
        namespace DownstopValC{
            constexpr Register::FieldValue<decltype(downStop)::Type,DownstopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(downStop)::Type,DownstopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_UP event and TASKS_STOP task
        enum class UpstopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,UpstopVal> upStop{}; 
        namespace UpstopValC{
            constexpr Register::FieldValue<decltype(upStop)::Type,UpstopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(upStop)::Type,UpstopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_CROSS event and TASKS_STOP task
        enum class CrossstopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CrossstopVal> crossStop{}; 
        namespace CrossstopValC{
            constexpr Register::FieldValue<decltype(crossStop)::Type,CrossstopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(crossStop)::Type,CrossstopVal::enabled> enabled{};
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
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_DOWN event
        enum class DownVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DownVal> down{}; 
        namespace DownValC{
            constexpr Register::FieldValue<decltype(down)::Type,DownVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(down)::Type,DownVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(down)::Type,DownVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_UP event
        enum class UpVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,UpVal> up{}; 
        namespace UpValC{
            constexpr Register::FieldValue<decltype(up)::Type,UpVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(up)::Type,UpVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(up)::Type,UpVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_CROSS event
        enum class CrossVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CrossVal> cross{}; 
        namespace CrossValC{
            constexpr Register::FieldValue<decltype(cross)::Type,CrossVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cross)::Type,CrossVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(cross)::Type,CrossVal::set> set{};
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
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_DOWN event
        enum class DownVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DownVal> down{}; 
        namespace DownValC{
            constexpr Register::FieldValue<decltype(down)::Type,DownVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(down)::Type,DownVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(down)::Type,DownVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_UP event
        enum class UpVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,UpVal> up{}; 
        namespace UpValC{
            constexpr Register::FieldValue<decltype(up)::Type,UpVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(up)::Type,UpVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(up)::Type,UpVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_CROSS event
        enum class CrossVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CrossVal> cross{}; 
        namespace CrossValC{
            constexpr Register::FieldValue<decltype(cross)::Type,CrossVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cross)::Type,CrossVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(cross)::Type,CrossVal::clear> clear{};
        }
    }
    namespace Noneresult{    ///<Compare result
        using Addr = Register::Address<0x40013400,0xfffffffe,0,unsigned>;
        ///Result of last compare. Decision point SAMPLE task.
        enum class ResultVal {
            bellow=0x00000000,     ///<Input voltage is below the reference threshold (VIN+ < VIN-).
            above=0x00000001,     ///<Input voltage is above the reference threshold (VIN+ > VIN-).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ResultVal> result{}; 
        namespace ResultValC{
            constexpr Register::FieldValue<decltype(result)::Type,ResultVal::bellow> bellow{};
            constexpr Register::FieldValue<decltype(result)::Type,ResultVal::above> above{};
        }
    }
    namespace Noneenable{    ///<Enable LPCOMP
        using Addr = Register::Address<0x40013500,0xfffffffc,0,unsigned>;
        ///Enable or disable LPCOMP
        enum class EnableVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::enabled> enabled{};
        }
    }
    namespace Nonepsel{    ///<Input pin select
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
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::analoginput0> analoginput0{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::analoginput1> analoginput1{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::analoginput2> analoginput2{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::analoginput3> analoginput3{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::analoginput4> analoginput4{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::analoginput5> analoginput5{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::analoginput6> analoginput6{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::analoginput7> analoginput7{};
        }
    }
    namespace Nonerefsel{    ///<Reference select
        using Addr = Register::Address<0x40013508,0xfffffff0,0,unsigned>;
        ///Reference select
        enum class RefselVal {
            ref18vdd=0x00000000,     ///<VDD * 1/8 selected as reference
            ref28vdd=0x00000001,     ///<VDD * 2/8 selected as reference
            ref38vdd=0x00000002,     ///<VDD * 3/8 selected as reference
            ref48vdd=0x00000003,     ///<VDD * 4/8 selected as reference
            ref58vdd=0x00000004,     ///<VDD * 5/8 selected as reference
            ref68vdd=0x00000005,     ///<VDD * 6/8 selected as reference
            ref78vdd=0x00000006,     ///<VDD * 7/8 selected as reference
            aref=0x00000007,     ///<External analog reference selected
            ref116vdd=0x00000008,     ///<VDD * 1/16 selected as reference
            ref316vdd=0x00000009,     ///<VDD * 3/16 selected as reference
            ref516vdd=0x0000000a,     ///<VDD * 5/16 selected as reference
            ref716vdd=0x0000000b,     ///<VDD * 7/16 selected as reference
            ref916vdd=0x0000000c,     ///<VDD * 9/16 selected as reference
            ref1116vdd=0x0000000d,     ///<VDD * 11/16 selected as reference
            ref1316vdd=0x0000000e,     ///<VDD * 13/16 selected as reference
            ref1516vdd=0x0000000f,     ///<VDD * 15/16 selected as reference
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,RefselVal> refsel{}; 
        namespace RefselValC{
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::ref18vdd> ref18vdd{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::ref28vdd> ref28vdd{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::ref38vdd> ref38vdd{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::ref48vdd> ref48vdd{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::ref58vdd> ref58vdd{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::ref68vdd> ref68vdd{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::ref78vdd> ref78vdd{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::aref> aref{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::ref116vdd> ref116vdd{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::ref316vdd> ref316vdd{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::ref516vdd> ref516vdd{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::ref716vdd> ref716vdd{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::ref916vdd> ref916vdd{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::ref1116vdd> ref1116vdd{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::ref1316vdd> ref1316vdd{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::ref1516vdd> ref1516vdd{};
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
            constexpr Register::FieldValue<decltype(extrefsel)::Type,ExtrefselVal::analogreference0> analogreference0{};
            constexpr Register::FieldValue<decltype(extrefsel)::Type,ExtrefselVal::analogreference1> analogreference1{};
        }
    }
    namespace Noneanadetect{    ///<Analog detect configuration
        using Addr = Register::Address<0x40013520,0xfffffffc,0,unsigned>;
        ///Analog detect configuration
        enum class AnadetectVal {
            cross=0x00000000,     ///<Generate ANADETECT on crossing, both upward crossing and downward crossing
            up=0x00000001,     ///<Generate ANADETECT on upward crossing only
            down=0x00000002,     ///<Generate ANADETECT on downward crossing only
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,AnadetectVal> anadetect{}; 
        namespace AnadetectValC{
            constexpr Register::FieldValue<decltype(anadetect)::Type,AnadetectVal::cross> cross{};
            constexpr Register::FieldValue<decltype(anadetect)::Type,AnadetectVal::up> up{};
            constexpr Register::FieldValue<decltype(anadetect)::Type,AnadetectVal::down> down{};
        }
    }
    namespace Nonehyst{    ///<Comparator hysteresis enable
        using Addr = Register::Address<0x40013538,0xfffffffe,0,unsigned>;
        ///Comparator hysteresis enable
        enum class HystVal {
            nohyst=0x00000000,     ///<Comparator hysteresis disabled
            hyst50mv=0x00000001,     ///<Comparator hysteresis disabled (typ. 50 mV)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,HystVal> hyst{}; 
        namespace HystValC{
            constexpr Register::FieldValue<decltype(hyst)::Type,HystVal::nohyst> nohyst{};
            constexpr Register::FieldValue<decltype(hyst)::Type,HystVal::hyst50mv> hyst50mv{};
        }
    }
}
