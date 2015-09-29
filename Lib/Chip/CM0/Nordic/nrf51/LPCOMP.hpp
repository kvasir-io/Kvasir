#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Low power comparator.
    namespace NonetasksStart{    ///<Start the comparator.
        using Addr = Register::Address<0x40013000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop the comparator.
        using Addr = Register::Address<0x40013004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSample{    ///<Sample comparator value.
        using Addr = Register::Address<0x40013008,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsReady{    ///<LPCOMP is ready and output is valid.
        using Addr = Register::Address<0x40013100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsDown{    ///<Input voltage crossed the threshold going down.
        using Addr = Register::Address<0x40013104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsUp{    ///<Input voltage crossed the threshold going up.
        using Addr = Register::Address<0x40013108,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCross{    ///<Input voltage crossed the threshold in any direction.
        using Addr = Register::Address<0x4001310c,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcuts for the LPCOMP.
        using Addr = Register::Address<0x40013200,0xffffffe0,0,unsigned>;
        ///Shortcut between READY event and SAMPLE task.
        enum class readySampleVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace readySampleValC{
            constexpr MPL::Value<readySampleVal,readySampleVal::disabled> disabled{};
            constexpr MPL::Value<readySampleVal,readySampleVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readySampleVal> readySample{}; 
        ///Shortcut between RADY event and STOP task.
        enum class readyStopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace readyStopValC{
            constexpr MPL::Value<readyStopVal,readyStopVal::disabled> disabled{};
            constexpr MPL::Value<readyStopVal,readyStopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,readyStopVal> readyStop{}; 
        ///Shortcut between DOWN event and STOP task.
        enum class downStopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace downStopValC{
            constexpr MPL::Value<downStopVal,downStopVal::disabled> disabled{};
            constexpr MPL::Value<downStopVal,downStopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,downStopVal> downStop{}; 
        ///Shortcut between UP event and STOP task.
        enum class upStopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace upStopValC{
            constexpr MPL::Value<upStopVal,upStopVal::disabled> disabled{};
            constexpr MPL::Value<upStopVal,upStopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,upStopVal> upStop{}; 
        ///Shortcut between CROSS event and STOP task.
        enum class crossStopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace crossStopValC{
            constexpr MPL::Value<crossStopVal,crossStopVal::disabled> disabled{};
            constexpr MPL::Value<crossStopVal,crossStopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,crossStopVal> crossStop{}; 
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40013304,0xfffffff0,0,unsigned>;
        ///Enable interrupt on READY event.
        enum class readyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace readyValC{
            constexpr MPL::Value<readyVal,readyVal::disabled> disabled{};
            constexpr MPL::Value<readyVal,readyVal::enabled> enabled{};
            constexpr MPL::Value<readyVal,readyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readyVal> ready{}; 
        ///Enable interrupt on DOWN event.
        enum class downVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace downValC{
            constexpr MPL::Value<downVal,downVal::disabled> disabled{};
            constexpr MPL::Value<downVal,downVal::enabled> enabled{};
            constexpr MPL::Value<downVal,downVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,downVal> down{}; 
        ///Enable interrupt on UP event.
        enum class upVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace upValC{
            constexpr MPL::Value<upVal,upVal::disabled> disabled{};
            constexpr MPL::Value<upVal,upVal::enabled> enabled{};
            constexpr MPL::Value<upVal,upVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,upVal> up{}; 
        ///Enable interrupt on CROSS event.
        enum class crossVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace crossValC{
            constexpr MPL::Value<crossVal,crossVal::disabled> disabled{};
            constexpr MPL::Value<crossVal,crossVal::enabled> enabled{};
            constexpr MPL::Value<crossVal,crossVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,crossVal> cross{}; 
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40013308,0xfffffff0,0,unsigned>;
        ///Disable interrupt on READY event.
        enum class readyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace readyValC{
            constexpr MPL::Value<readyVal,readyVal::disabled> disabled{};
            constexpr MPL::Value<readyVal,readyVal::enabled> enabled{};
            constexpr MPL::Value<readyVal,readyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readyVal> ready{}; 
        ///Disable interrupt on DOWN event.
        enum class downVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace downValC{
            constexpr MPL::Value<downVal,downVal::disabled> disabled{};
            constexpr MPL::Value<downVal,downVal::enabled> enabled{};
            constexpr MPL::Value<downVal,downVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,downVal> down{}; 
        ///Disable interrupt on UP event.
        enum class upVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace upValC{
            constexpr MPL::Value<upVal,upVal::disabled> disabled{};
            constexpr MPL::Value<upVal,upVal::enabled> enabled{};
            constexpr MPL::Value<upVal,upVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,upVal> up{}; 
        ///Disable interrupt on CROSS event.
        enum class crossVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace crossValC{
            constexpr MPL::Value<crossVal,crossVal::disabled> disabled{};
            constexpr MPL::Value<crossVal,crossVal::enabled> enabled{};
            constexpr MPL::Value<crossVal,crossVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,crossVal> cross{}; 
    }
    namespace Noneresult{    ///<Result of last compare.
        using Addr = Register::Address<0x40013400,0xfffffffe,0,unsigned>;
        ///Result of last compare. Decision point SAMPLE task.
        enum class resultVal {
            bellow=0x00000000,     ///<Input voltage is bellow the reference threshold.
            above=0x00000001,     ///<Input voltage is above the reference threshold.
        };
        namespace resultValC{
            constexpr MPL::Value<resultVal,resultVal::bellow> bellow{};
            constexpr MPL::Value<resultVal,resultVal::above> above{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,resultVal> result{}; 
    }
    namespace Noneenable{    ///<Enable the LPCOMP.
        using Addr = Register::Address<0x40013500,0xfffffffc,0,unsigned>;
        ///Enable or disable LPCOMP.
        enum class enableVal {
            disabled=0x00000000,     ///<Disabled LPCOMP.
            enabled=0x00000001,     ///<Enable LPCOMP.
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::disabled> disabled{};
            constexpr MPL::Value<enableVal,enableVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,enableVal> enable{}; 
    }
    namespace Nonepsel{    ///<Input pin select.
        using Addr = Register::Address<0x40013504,0xfffffff8,0,unsigned>;
        ///Analog input pin select.
        enum class pselVal {
            analoginput0=0x00000000,     ///<Use analog input 0 as analog input.
            analoginput1=0x00000001,     ///<Use analog input 1 as analog input.
            analoginput2=0x00000002,     ///<Use analog input 2 as analog input.
            analoginput3=0x00000003,     ///<Use analog input 3 as analog input.
            analoginput4=0x00000004,     ///<Use analog input 4 as analog input.
            analoginput5=0x00000005,     ///<Use analog input 5 as analog input.
            analoginput6=0x00000006,     ///<Use analog input 6 as analog input.
            analoginput7=0x00000007,     ///<Use analog input 7 as analog input.
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
    namespace Nonerefsel{    ///<Reference select.
        using Addr = Register::Address<0x40013508,0xfffffff8,0,unsigned>;
        ///Reference select.
        enum class refselVal {
            supplyoneeighthprescaling=0x00000000,     ///<Use supply with a 1/8 prescaler as reference.
            supplytwoeighthsprescaling=0x00000001,     ///<Use supply with a 2/8 prescaler as reference.
            supplythreeeighthsprescaling=0x00000002,     ///<Use supply with a 3/8 prescaler as reference.
            supplyfoureighthsprescaling=0x00000003,     ///<Use supply with a 4/8 prescaler as reference.
            supplyfiveeighthsprescaling=0x00000004,     ///<Use supply with a 5/8 prescaler as reference.
            supplysixeighthsprescaling=0x00000005,     ///<Use supply with a 6/8 prescaler as reference.
            supplyseveneighthsprescaling=0x00000006,     ///<Use supply with a 7/8 prescaler as reference.
            aref=0x00000007,     ///<Use external analog reference as reference.
        };
        namespace refselValC{
            constexpr MPL::Value<refselVal,refselVal::supplyoneeighthprescaling> supplyoneeighthprescaling{};
            constexpr MPL::Value<refselVal,refselVal::supplytwoeighthsprescaling> supplytwoeighthsprescaling{};
            constexpr MPL::Value<refselVal,refselVal::supplythreeeighthsprescaling> supplythreeeighthsprescaling{};
            constexpr MPL::Value<refselVal,refselVal::supplyfoureighthsprescaling> supplyfoureighthsprescaling{};
            constexpr MPL::Value<refselVal,refselVal::supplyfiveeighthsprescaling> supplyfiveeighthsprescaling{};
            constexpr MPL::Value<refselVal,refselVal::supplysixeighthsprescaling> supplysixeighthsprescaling{};
            constexpr MPL::Value<refselVal,refselVal::supplyseveneighthsprescaling> supplyseveneighthsprescaling{};
            constexpr MPL::Value<refselVal,refselVal::aref> aref{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,refselVal> refsel{}; 
    }
    namespace Noneextrefsel{    ///<External reference select.
        using Addr = Register::Address<0x4001350c,0xfffffffe,0,unsigned>;
        ///External analog reference pin selection.
        enum class extrefselVal {
            analogreference0=0x00000000,     ///<Use analog reference 0 as reference.
            analogreference1=0x00000001,     ///<Use analog reference 1 as reference.
        };
        namespace extrefselValC{
            constexpr MPL::Value<extrefselVal,extrefselVal::analogreference0> analogreference0{};
            constexpr MPL::Value<extrefselVal,extrefselVal::analogreference1> analogreference1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,extrefselVal> extrefsel{}; 
    }
    namespace Noneanadetect{    ///<Analog detect configuration.
        using Addr = Register::Address<0x40013520,0xfffffffc,0,unsigned>;
        ///Analog detect configuration.
        enum class anadetectVal {
            cross=0x00000000,     ///<Generate ANADETEC on crossing, both upwards and downwards crossing.
            up=0x00000001,     ///<Generate ANADETEC on upwards crossing only.
            down=0x00000002,     ///<Generate ANADETEC on downwards crossing only.
        };
        namespace anadetectValC{
            constexpr MPL::Value<anadetectVal,anadetectVal::cross> cross{};
            constexpr MPL::Value<anadetectVal,anadetectVal::up> up{};
            constexpr MPL::Value<anadetectVal,anadetectVal::down> down{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,anadetectVal> anadetect{}; 
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x40013ffc,0xfffffffe,0,unsigned>;
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
