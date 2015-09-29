#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog to digital converter.
    namespace NonetasksStart{    ///<Start an ADC conversion.
        using Addr = Register::Address<0x40007000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop ADC.
        using Addr = Register::Address<0x40007004,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEnd{    ///<ADC conversion complete.
        using Addr = Register::Address<0x40007100,0xffffffff,0,unsigned>;
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40007304,0xfffffffe,0,unsigned>;
        ///Enable interrupt on END event.
        enum class endVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace endValC{
            constexpr MPL::Value<endVal,endVal::disabled> disabled{};
            constexpr MPL::Value<endVal,endVal::enabled> enabled{};
            constexpr MPL::Value<endVal,endVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,endVal> end{}; 
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40007308,0xfffffffe,0,unsigned>;
        ///Disable interrupt on END event.
        enum class endVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace endValC{
            constexpr MPL::Value<endVal,endVal::disabled> disabled{};
            constexpr MPL::Value<endVal,endVal::enabled> enabled{};
            constexpr MPL::Value<endVal,endVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,endVal> end{}; 
    }
    namespace Nonebusy{    ///<ADC busy register.
        using Addr = Register::Address<0x40007400,0xfffffffe,0,unsigned>;
        ///ADC busy register.
        enum class busyVal {
            ready=0x00000000,     ///<No ongoing ADC conversion is taking place. ADC is ready.
            busy=0x00000001,     ///<An ADC conversion is taking place. ADC is busy.
        };
        namespace busyValC{
            constexpr MPL::Value<busyVal,busyVal::ready> ready{};
            constexpr MPL::Value<busyVal,busyVal::busy> busy{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,busyVal> busy{}; 
    }
    namespace Noneenable{    ///<ADC enable.
        using Addr = Register::Address<0x40007500,0xfffffffc,0,unsigned>;
        ///ADC enable.
        enum class enableVal {
            disabled=0x00000000,     ///<ADC is disabled.
            enabled=0x00000001,     ///<ADC is enabled. If an analog input pin is selected as source of the conversion, the selected pin is configured as an analog input.
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::disabled> disabled{};
            constexpr MPL::Value<enableVal,enableVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,enableVal> enable{}; 
    }
    namespace Noneconfig{    ///<ADC configuration register.
        using Addr = Register::Address<0x40007504,0xfffc0080,0,unsigned>;
        ///ADC resolution.
        enum class resVal {
            v8bit=0x00000000,     ///<8bit ADC resolution.
            v9bit=0x00000001,     ///<9bit ADC resolution.
            v10bit=0x00000002,     ///<10bit ADC resolution.
        };
        namespace resValC{
            constexpr MPL::Value<resVal,resVal::v8bit> v8bit{};
            constexpr MPL::Value<resVal,resVal::v9bit> v9bit{};
            constexpr MPL::Value<resVal,resVal::v10bit> v10bit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,resVal> res{}; 
        ///ADC input selection.
        enum class inpselVal {
            analoginputnoprescaling=0x00000000,     ///<Analog input specified by PSEL with no prescaling used as input for the conversion.
            analoginputtwothirdsprescaling=0x00000001,     ///<Analog input specified by PSEL with 2/3 prescaling used as input for the conversion.
            analoginputonethirdprescaling=0x00000002,     ///<Analog input specified by PSEL with 1/3 prescaling used as input for the conversion.
            supplytwothirdsprescaling=0x00000005,     ///<Supply voltage with 2/3 prescaling used as input for the conversion.
            supplyonethirdprescaling=0x00000006,     ///<Supply voltage with 1/3 prescaling used as input for the conversion.
        };
        namespace inpselValC{
            constexpr MPL::Value<inpselVal,inpselVal::analoginputnoprescaling> analoginputnoprescaling{};
            constexpr MPL::Value<inpselVal,inpselVal::analoginputtwothirdsprescaling> analoginputtwothirdsprescaling{};
            constexpr MPL::Value<inpselVal,inpselVal::analoginputonethirdprescaling> analoginputonethirdprescaling{};
            constexpr MPL::Value<inpselVal,inpselVal::supplytwothirdsprescaling> supplytwothirdsprescaling{};
            constexpr MPL::Value<inpselVal,inpselVal::supplyonethirdprescaling> supplyonethirdprescaling{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,inpselVal> inpsel{}; 
        ///ADC reference selection.
        enum class refselVal {
            vbg=0x00000000,     ///<Use internal 1.2V bandgap voltage as reference for conversion.
            external=0x00000001,     ///<Use external source configured by EXTREFSEL as reference for conversion.
            supplyonehalfprescaling=0x00000002,     ///<Use supply voltage with 1/2 prescaling as reference for conversion. Only usable when supply voltage is between 1.7V and 2.6V.
            supplyonethirdprescaling=0x00000003,     ///<Use supply voltage with 1/3 prescaling as reference for conversion. Only usable when supply voltage is between 2.5V and 3.6V.
        };
        namespace refselValC{
            constexpr MPL::Value<refselVal,refselVal::vbg> vbg{};
            constexpr MPL::Value<refselVal,refselVal::external> external{};
            constexpr MPL::Value<refselVal,refselVal::supplyonehalfprescaling> supplyonehalfprescaling{};
            constexpr MPL::Value<refselVal,refselVal::supplyonethirdprescaling> supplyonethirdprescaling{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,refselVal> refsel{}; 
        ///ADC analog pin selection.
        enum class pselVal {
            disabled=0x00000000,     ///<Analog input pins disabled.
            analoginput0=0x00000001,     ///<Use analog input 0 as analog input.
            analoginput1=0x00000002,     ///<Use analog input 1 as analog input.
            analoginput2=0x00000004,     ///<Use analog input 2 as analog input.
            analoginput3=0x00000008,     ///<Use analog input 3 as analog input.
            analoginput4=0x00000010,     ///<Use analog input 4 as analog input.
            analoginput5=0x00000020,     ///<Use analog input 5 as analog input.
            analoginput6=0x00000040,     ///<Use analog input 6 as analog input.
            analoginput7=0x00000080,     ///<Use analog input 7 as analog input.
        };
        namespace pselValC{
            constexpr MPL::Value<pselVal,pselVal::disabled> disabled{};
            constexpr MPL::Value<pselVal,pselVal::analoginput0> analoginput0{};
            constexpr MPL::Value<pselVal,pselVal::analoginput1> analoginput1{};
            constexpr MPL::Value<pselVal,pselVal::analoginput2> analoginput2{};
            constexpr MPL::Value<pselVal,pselVal::analoginput3> analoginput3{};
            constexpr MPL::Value<pselVal,pselVal::analoginput4> analoginput4{};
            constexpr MPL::Value<pselVal,pselVal::analoginput5> analoginput5{};
            constexpr MPL::Value<pselVal,pselVal::analoginput6> analoginput6{};
            constexpr MPL::Value<pselVal,pselVal::analoginput7> analoginput7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,pselVal> psel{}; 
        ///ADC external reference pin selection.
        enum class extrefselVal {
            none=0x00000000,     ///<Analog external reference inputs disabled.
            analogreference0=0x00000001,     ///<Use analog reference 0 as reference.
            analogreference1=0x00000002,     ///<Use analog reference 1 as reference.
        };
        namespace extrefselValC{
            constexpr MPL::Value<extrefselVal,extrefselVal::none> none{};
            constexpr MPL::Value<extrefselVal,extrefselVal::analogreference0> analogreference0{};
            constexpr MPL::Value<extrefselVal,extrefselVal::analogreference1> analogreference1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,extrefselVal> extrefsel{}; 
    }
    namespace Noneresult{    ///<Result of ADC conversion.
        using Addr = Register::Address<0x40007508,0xfffffc00,0,unsigned>;
        ///Result of ADC conversion.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> result{}; 
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x40007ffc,0xfffffffe,0,unsigned>;
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
