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
        enum class EndVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::set> set{};
        }
        }
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40007308,0xfffffffe,0,unsigned>;
        ///Disable interrupt on END event.
        enum class EndVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::clear> clear{};
        }
        }
    }
    namespace Nonebusy{    ///<ADC busy register.
        using Addr = Register::Address<0x40007400,0xfffffffe,0,unsigned>;
        ///ADC busy register.
        enum class BusyVal {
            ready=0x00000000,     ///<No ongoing ADC conversion is taking place. ADC is ready.
            busy=0x00000001,     ///<An ADC conversion is taking place. ADC is busy.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BusyVal> busy{}; 
        namespace BusyValC{
            constexpr Register::FieldValue<decltype(busy)::Type,BusyVal::ready> ready{};
            constexpr Register::FieldValue<decltype(busy)::Type,BusyVal::busy> busy{};
        }
        }
    }
    namespace Noneenable{    ///<ADC enable.
        using Addr = Register::Address<0x40007500,0xfffffffc,0,unsigned>;
        ///ADC enable.
        enum class EnableVal {
            disabled=0x00000000,     ///<ADC is disabled.
            enabled=0x00000001,     ///<ADC is enabled. If an analog input pin is selected as source of the conversion, the selected pin is configured as an analog input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::enabled> enabled{};
        }
        }
    }
    namespace Noneconfig{    ///<ADC configuration register.
        using Addr = Register::Address<0x40007504,0xfffc0080,0,unsigned>;
        ///ADC resolution.
        enum class ResVal {
            v8bit=0x00000000,     ///<8bit ADC resolution.
            v9bit=0x00000001,     ///<9bit ADC resolution.
            v10bit=0x00000002,     ///<10bit ADC resolution.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ResVal> res{}; 
        namespace ResValC{
            constexpr Register::FieldValue<decltype(res)::Type,ResVal::v8bit> v8bit{};
            constexpr Register::FieldValue<decltype(res)::Type,ResVal::v9bit> v9bit{};
            constexpr Register::FieldValue<decltype(res)::Type,ResVal::v10bit> v10bit{};
        }
        }
        ///ADC input selection.
        enum class InpselVal {
            analoginputnoprescaling=0x00000000,     ///<Analog input specified by PSEL with no prescaling used as input for the conversion.
            analoginputtwothirdsprescaling=0x00000001,     ///<Analog input specified by PSEL with 2/3 prescaling used as input for the conversion.
            analoginputonethirdprescaling=0x00000002,     ///<Analog input specified by PSEL with 1/3 prescaling used as input for the conversion.
            supplytwothirdsprescaling=0x00000005,     ///<Supply voltage with 2/3 prescaling used as input for the conversion.
            supplyonethirdprescaling=0x00000006,     ///<Supply voltage with 1/3 prescaling used as input for the conversion.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,InpselVal> inpsel{}; 
        namespace InpselValC{
            constexpr Register::FieldValue<decltype(inpsel)::Type,InpselVal::analoginputnoprescaling> analoginputnoprescaling{};
            constexpr Register::FieldValue<decltype(inpsel)::Type,InpselVal::analoginputtwothirdsprescaling> analoginputtwothirdsprescaling{};
            constexpr Register::FieldValue<decltype(inpsel)::Type,InpselVal::analoginputonethirdprescaling> analoginputonethirdprescaling{};
            constexpr Register::FieldValue<decltype(inpsel)::Type,InpselVal::supplytwothirdsprescaling> supplytwothirdsprescaling{};
            constexpr Register::FieldValue<decltype(inpsel)::Type,InpselVal::supplyonethirdprescaling> supplyonethirdprescaling{};
        }
        }
        ///ADC reference selection.
        enum class RefselVal {
            vbg=0x00000000,     ///<Use internal 1.2V bandgap voltage as reference for conversion.
            external=0x00000001,     ///<Use external source configured by EXTREFSEL as reference for conversion.
            supplyonehalfprescaling=0x00000002,     ///<Use supply voltage with 1/2 prescaling as reference for conversion. Only usable when supply voltage is between 1.7V and 2.6V.
            supplyonethirdprescaling=0x00000003,     ///<Use supply voltage with 1/3 prescaling as reference for conversion. Only usable when supply voltage is between 2.5V and 3.6V.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,RefselVal> refsel{}; 
        namespace RefselValC{
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::vbg> vbg{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::external> external{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::supplyonehalfprescaling> supplyonehalfprescaling{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::supplyonethirdprescaling> supplyonethirdprescaling{};
        }
        }
        ///ADC analog pin selection.
        enum class PselVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,PselVal> psel{}; 
        namespace PselValC{
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::disabled> disabled{};
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
        ///ADC external reference pin selection.
        enum class ExtrefselVal {
            none=0x00000000,     ///<Analog external reference inputs disabled.
            analogreference0=0x00000001,     ///<Use analog reference 0 as reference.
            analogreference1=0x00000002,     ///<Use analog reference 1 as reference.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,ExtrefselVal> extrefsel{}; 
        namespace ExtrefselValC{
            constexpr Register::FieldValue<decltype(extrefsel)::Type,ExtrefselVal::none> none{};
            constexpr Register::FieldValue<decltype(extrefsel)::Type,ExtrefselVal::analogreference0> analogreference0{};
            constexpr Register::FieldValue<decltype(extrefsel)::Type,ExtrefselVal::analogreference1> analogreference1{};
        }
        }
    }
    namespace Noneresult{    ///<Result of ADC conversion.
        using Addr = Register::Address<0x40007508,0xfffffc00,0,unsigned>;
        ///Result of ADC conversion.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> result{}; 
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x40007ffc,0xfffffffe,0,unsigned>;
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
    }
}
