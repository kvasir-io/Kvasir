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
            bellow=0x00000000,     ///<Input voltage is below the reference threshold (VIN+ < VIN-).
            above=0x00000001,     ///<Input voltage is above the reference threshold (VIN+ > VIN-).
        };
        namespace resultValC{
            constexpr MPL::Value<resultVal,resultVal::bellow> bellow{};
            constexpr MPL::Value<resultVal,resultVal::above> above{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,resultVal> result{}; 
    }
    namespace Noneenable{    ///<Enable LPCOMP
        using Addr = Register::Address<0x40013500,0xfffffffc,0,unsigned>;
        ///Enable or disable LPCOMP
        enum class enableVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::disabled> disabled{};
            constexpr MPL::Value<enableVal,enableVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,enableVal> enable{}; 
    }
    namespace Nonepsel{    ///<Input pin select
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
    namespace Nonerefsel{    ///<Reference select
        using Addr = Register::Address<0x40013508,0xfffffff0,0,unsigned>;
        ///Reference select
        enum class refselVal {
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
        namespace refselValC{
            constexpr MPL::Value<refselVal,refselVal::ref18vdd> ref18vdd{};
            constexpr MPL::Value<refselVal,refselVal::ref28vdd> ref28vdd{};
            constexpr MPL::Value<refselVal,refselVal::ref38vdd> ref38vdd{};
            constexpr MPL::Value<refselVal,refselVal::ref48vdd> ref48vdd{};
            constexpr MPL::Value<refselVal,refselVal::ref58vdd> ref58vdd{};
            constexpr MPL::Value<refselVal,refselVal::ref68vdd> ref68vdd{};
            constexpr MPL::Value<refselVal,refselVal::ref78vdd> ref78vdd{};
            constexpr MPL::Value<refselVal,refselVal::aref> aref{};
            constexpr MPL::Value<refselVal,refselVal::ref116vdd> ref116vdd{};
            constexpr MPL::Value<refselVal,refselVal::ref316vdd> ref316vdd{};
            constexpr MPL::Value<refselVal,refselVal::ref516vdd> ref516vdd{};
            constexpr MPL::Value<refselVal,refselVal::ref716vdd> ref716vdd{};
            constexpr MPL::Value<refselVal,refselVal::ref916vdd> ref916vdd{};
            constexpr MPL::Value<refselVal,refselVal::ref1116vdd> ref1116vdd{};
            constexpr MPL::Value<refselVal,refselVal::ref1316vdd> ref1316vdd{};
            constexpr MPL::Value<refselVal,refselVal::ref1516vdd> ref1516vdd{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,refselVal> refsel{}; 
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
    namespace Noneanadetect{    ///<Analog detect configuration
        using Addr = Register::Address<0x40013520,0xfffffffc,0,unsigned>;
        ///Analog detect configuration
        enum class anadetectVal {
            cross=0x00000000,     ///<Generate ANADETECT on crossing, both upward crossing and downward crossing
            up=0x00000001,     ///<Generate ANADETECT on upward crossing only
            down=0x00000002,     ///<Generate ANADETECT on downward crossing only
        };
        namespace anadetectValC{
            constexpr MPL::Value<anadetectVal,anadetectVal::cross> cross{};
            constexpr MPL::Value<anadetectVal,anadetectVal::up> up{};
            constexpr MPL::Value<anadetectVal,anadetectVal::down> down{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,anadetectVal> anadetect{}; 
    }
    namespace Nonehyst{    ///<Comparator hysteresis enable
        using Addr = Register::Address<0x40013538,0xfffffffe,0,unsigned>;
        ///Comparator hysteresis enable
        enum class hystVal {
            nohyst=0x00000000,     ///<Comparator hysteresis disabled
            hyst50mv=0x00000001,     ///<Comparator hysteresis disabled (typ. 50 mV)
        };
        namespace hystValC{
            constexpr MPL::Value<hystVal,hystVal::nohyst> nohyst{};
            constexpr MPL::Value<hystVal,hystVal::hyst50mv> hyst50mv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,hystVal> hyst{}; 
    }
}
